#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
 int i=1;
sem_t evn,odd;
 
void* thread1(void* arg)
{
    //wait
while(i<=5)
{
    sem_wait(&evn);
    printf("\nEntered..t1::%d\n",i);
 i++;
    //critical section
    sleep(4);
    
    //signal
    printf("\nJust Exiting...t1\n");
    sem_post(&odd);
}
}
 void* thread2(void* arg)
{
    //wait
while(i<=5)
{ 
   sem_wait(&odd);
    printf("\nEntered..t2::%d",i);
 i++;
    
    //signal
    printf("\nJust Exiting...t2\n");
    sem_post(&evn);
}
 }
int main()
{
    sem_init(&evn, 0, 1);
    sem_init(&odd, 0, 0);
    pthread_t t1,t2;
    pthread_create(&t1,NULL,thread1,NULL);//creating threads
    sleep(2);
    pthread_create(&t2,NULL,thread2,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    sem_destroy(&evn);
    sem_destroy(&odd);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int marks_summation(int* marks, int number_of_students, char gender) 
{
  //Write your code here.
    int sum=0,k=0,j;
    if(gender=='b')
        k=0;
    if(gender=='g')
        k=1;
    for(int i=0;i<number_of_students;i++)
    {
            j=k+i;
            if(j%2==0)
                sum=sum+marks[j];
    }
   // printf("%d",sum);
    return sum;
}

int main()
{
 int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}	

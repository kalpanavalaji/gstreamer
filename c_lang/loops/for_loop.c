#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char *arr[10]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
      /*for(int i=(a-1);i<=b;i++)
      {
	if(i>=0){
          if(i<9){
            printf("%s",*(arr+(i)));printf("\n");}
          else if((i+1)%2==0)
            printf("even\n");
          else  
            printf("odd\n");
	}
	else
		break;
      }*/

 for(int i=(a-1);i<b;i++)
      {
       
          if(i<9)
            printf("%s\n",*(arr+(i)));
          else if((i+1)%2==0)
            printf("even\n");
          else
            printf("odd\n");
        }
       
    return 0;
}



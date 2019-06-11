#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,n; 
    long int sum=0;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            if(i%3==0||i%5==0)
                sum=sum+i;
        }
        printf("%ld\n",sum);
        sum=0;
    }
    return 0;
}

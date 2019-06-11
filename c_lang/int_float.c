#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,s,dd;
    float c,d,s1,d1;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    s=a+b;
    s1=c+d; 
    dd=a-b;
    d1=c-d;
    if(dd<0)
        dd=-dd;
    if(d1<0)
        d1=-d1;
    printf("%d %d\n%f %f\n",s,dd,s1,d1);
    

    
    return 0;
}



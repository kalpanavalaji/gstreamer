#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a,b,c,d,g;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int check(int ,int ,int ,int);
    if(a<=30&&b<=30&&c<=30)
	g=check(a,b,c,d);
    printf("%d",g);
    return 0;
}

int check(int x,int y,int z,int w){
    int e=1,a1,b,c,u;
       a1=x;b=y;c=z;
        u=a1+b+c;
    while(w)
    {
            if(u%e!=0)
	    {
                	a1=b;
              		b=c;
                 	c=u%e;
                	//printf("a=%d::b=%d::c=%d::u=%d::e=%d\n",a1,b,c,u,e);
                	u=a1+b+c;
                	if(a1==x && b==y && c==z){ w--;

        		//      printf("a=%d::b=%d::c=%d::u=%d::e=%d\n",a1,b,c,u,e);
        		      printf("k=%d::u=%d\n",w,u);
			
                	// break;
			}
			else
				continue;
            }
	    else
	   {
		a1=x;b=y;c=z;
		u=a1+b+c;
	   }
	
        e=e+2;
    }

            return e-2;
}

/*
int check(int x,int y,int z,int w){
    int e=1,a1,b,c,u,a[300]={1,1,1};
        for(int i=3;i<=300;i++)
        {
                a[i]=a[i-3]+a[i-2]+a[i-1];
        }

    while(w){
       a1=x;b=y;c=z;
        //u=a+b+c;
            for(int i=3;a[i]%e!=0;i++){
    	        a1=b;b=c;c=a[i];
                printf("a1=%d::b=%d::c=%d:::e=%d\n",a1,b,c,e);
               // u=a[i]+b+c;
                if(a1==x && b==y && c==z){ w--;

                printf("a=%d::b=%d::c=%d:::e=%d\n",a1,b,c,e);
                //printf("k=%d::u=%d\n",w,a[i]);
                 break;}

                 }
        e=e+2;
}
	return e-2;
}*/

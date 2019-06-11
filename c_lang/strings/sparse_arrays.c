#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
int main()
{
	char *strings[10]={"def","de","fgh"};
	char *queries[10]={"de","lmn","fgh"};
	int result_count[3]={0};
 for(int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++)
            {
                if(!(strcmp(strings[j],queries[i])))
                    result_count[i]=result_count[i]+1;
            }
    }
    
for(int i=0;i<3;i++)
	printf("%d\n",result_count[i]);
}*/
int *queu(char **str,int num_str,char **que,int num_que,int* result_count)
{
      for(int i=0;i<num_que;i++)
    {
            for(int j=0;j<num_str;j++)
            {
                if(!(strcmp(str[j],que[i])))
                    result_count[i]=result_count[i]+1;
            }
    }
    return result_count;
}
int main()
{
    int num_str,num_que,*a,i,j;
    scanf("%d\n",&num_str);
    char str[num_str][30];
    char que[num_que][30];
    for(int i=0;i<num_str;i++)
        scanf("%s\n",str[i]);
       // printf("\n");
     scanf("%d",&num_que);
    for(int i=0;i<num_que;i++)
        scanf("%s\n",que[i]);
    a=queu(str,num_str,que,num_que,a);
     for(int i=0;i<num_que;i++)
        printf("%d\n",a[i]);
      
    
}


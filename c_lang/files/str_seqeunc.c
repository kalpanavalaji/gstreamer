#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char alphabet[] = "abcd";            /* no need for 'static' already file scope */
const int alphabetSize = sizeof(alphabet) - 1;

void bruteImpl(char* str, int index, int maxDepth, FILE *fptr)  /* pass FILE * as arg */
{
    for (int i = 0; i < alphabetSize; ++i)
    {
        str[index] = alphabet[i];
        if (index == maxDepth - 1) 
        {
            printf("%s\n", str);
            fprintf(fptr, "%s\n", str);
        }
        else bruteImpl(str, index + 1, maxDepth, fptr);
    }
}

void bruteSequential(int maxLen, FILE *fptr)                    /* pass FILE * as arg */
{
    char* buf = malloc(maxLen + 1);
    for (int i = 1; i < maxLen; ++i)           /* check < maxLen instead of <= maxLen */
    {
        memset(buf, 0, maxLen + 1);
        bruteImpl(buf, 0, i, fptr);
    }
    free(buf);
}

int main(void)
{
    FILE *fp;
    fp = fopen("str_seqeunce.txt", "w");
    /* you should validate fp is not NULL here */
    printf("size::::%d",alphabetSize);
	exit(0);
    bruteSequential (alphabetSize + 1, fp);     /* pass alphabetSize + 1 & fp as args   */
    return 0;
}

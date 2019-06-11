#include<stdio.h>
#include<stdlib.h>

void decode(char [], int , char [],FILE * );
int main() {
FILE *inputFile;
inputFile = fopen("test.txt", "r");
char codedMessage[100];  // Will contain - HarjEtvyqaLbLdjlmO
char decodedMessage[100];
fgets(codedMessage, 100, inputFile);
FILE *outputFile;
outputFile = fopen("decodedmessage.txt", "r");
decode(codedMessage, strlen(codedMessage)-1, decodedMessage,outputFile);

return 0;
}

// Decodes the message and prints it to file
void decode(char msg[], int n, char dmsg[],FILE *out) {
    if (!n) {
        if (isupper(msg[n])) {
            printf("%c", msg[n]);
	fputc(msg[n],out);
            dmsg[n] += msg[n];
        }
    }
    else {
        decode(msg, n-1, *dmsg,out);
        if (isupper(msg[n])){
            printf("%c", msg[n]);
	    fputc(msg[n],out);
            dmsg[n] += msg[n];
        }
    }
}

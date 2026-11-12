#include <stdio.h>
#include <ctype.h>

int main(void) {
    
}




/*
EXERCISES
1)
 printf("char:        %zu\n", sizeof(char));
    printf("short:       %zu\n", sizeof(short));
    printf("int:         %zu\n", sizeof(int));
    printf("long:        %zu\n", sizeof(long));
    printf("long long:   %zu\n", sizeof(long long));
    printf("float:       %zu\n", sizeof(float));
    printf("double:      %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));
    printf("pointer:     %zu\n", sizeof(int *));
    return 0;
--------------------------------------------------
2)
 getchar() acts like a scanf.... and returns int value of that entered alphabet
 --------------------------------------------------
 3)LENGTH OF A MESSAGE:
    int count;

    printf("Enter a message: ");
    while((getchar()) != '\n') {
        count++;
    }
    printf("Your message was %d character(s) long.", count);
------------------------------------------------------
4)USING typedef

    typedef int Bool;

    Bool j = 45;
    Bool k = 62;

    printf("%d\n", j+k);
    printf("Size of int: %lu\n", (unsigned long) sizeof(int));
---------------------------------------------------------
5)TRANSLATE ALPHABETIC PH. NO TO NUMBERIC FORM:

 char ch;

    printf("Enter a message: ");
    while((ch = getchar())!='\n'){
        switch(ch) {
            case 'A': case 'B': case 'C':{
                printf("%c", '2');
                break;
            };
            case 'D': case 'E': case 'F': {
                printf("%c", '3');
                break;
            };
            case 'G': case 'H': case 'I': {
                printf("%c", '4');
                break;
            };
            case 'J': case 'K': case 'L': {
                printf("%c", '5');
                break;
            };
            case 'M': case 'N': case 'O': {
                printf("%c", '6');
                break;
            };
            case 'P': case 'R': case 'S': {
                printf("%c", '7');
                break;
            };
            case 'T': case 'U': case 'V': {
                printf("%c", '8');
                break;
            };
            case 'W': case 'X': case 'Y': {
                printf("%c", '9');
                break;
            };
            default: {
                printf("%c", ch);
            }
        }
    }
    printf("\n");
--------------------------------------------------------
6) VOWELS IN A SENTENCE
char ch;
   int vowels;

   printf("Enter a sentence: ");

   while((ch=getchar()) != '\n') {
        ch = toupper(ch);
        switch(ch) {
            case 'A': case 'E': case 'I': case 'O': case 'U': {
                vowels++;
                break;
            }
        }
   }

   printf("Your sentence contains %d vowels.\n", vowels);
   
    return 0;
    ---------------------------------------------------------
7)  IMPORTANT GETCHAR() PROGRAM 
int ch;
    char fname = ' ';
    
    printf("Enter your full name: ");
    while((ch=getchar()) != '\n') {
        if(ch==' '){continue;}
        
        if(fname==' '){
            fname=ch;
            break;
        }
    }

    while((ch=getchar()) != ' ') { //Skips Rest of the first name
    }
    while((ch=getchar()) == ' '){ //Skips spaces until last name
    }

    while(ch != '\n' && ch != ' '){
        putchar(ch);
        ch = getchar();
    }

    printf(", %c.\n", fname);

   return 0;

*/

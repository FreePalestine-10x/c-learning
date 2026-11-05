#include <stdio.h>

int main(void) {
    
}








/*
EXERCISES:

1)
int n,i=1;

    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    while(i<=n) {
        printf("%d\t%d\n", i, i*i);
        i++;
    }

    return 0;
----------
2)
int sum=0, temp = 1;

    printf("Enter integers (0 to terminate) :");
    while(temp!=0) {
        scanf("%d", &temp);
        sum+=temp;
    }

    printf("The sum is: %d\n", sum);

    return 0;
-------------
3)
int num, digits=0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    do
    {
        num /= 10;
        digits++;
    } while (num > 0);
    
    printf("The number has %d digits.\n", digits);

    return 0;
----------------
4) PRIME NUMBER PROGRAM
    int num, count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=num;i>0;i--) {
        if(num%i == 0) {
            count++;
        }
    }

    if(count == 2) {
        printf("%d is a PRIME number\n", num);
    } else {
        printf("%d is not a PRIME number\n", num);
    }
--------------------
5)   CHECK BOOK BALANCE PROGRAM

printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    int command;
    float balance = 0.00;

    while(1) {
        printf("Enter command: ");
        scanf("%d", &command);

        switch(command) {
            case 0: {
                balance = 0.0;
                break;
            }
            case 1: {
                float credit;
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            };
            case 2: {
                float debit;
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            };
            case 3: {
                printf("Current balance: $%.2f\n", balance);
                break;
            };
            case 4: {
                return 0;
            }
        }

    }


*/

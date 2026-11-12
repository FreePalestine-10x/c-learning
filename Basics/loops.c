#include <stdio.h>

int main(void) {
    
    return 0;
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

------------------
6)

float num, largest=0.0f;
    
    while(1) {
        printf("Enter a number: ");
        scanf("%f", &num);
        
        if(num<=0){break;}

        if(num>=largest) {
            largest = num;
        }
    }

printf("The largest number entered was %.4f\n",largest);
--------------------------
7) GCD of 2 numbers

int r,gcd;
    unsigned long long m,n;

    printf("Enter two integers: ");
    scanf("%llu %llu", &m, &n);

    while(1) {
        if(m%n==0) {
            gcd = n;
            break;
        }
        r = m%n;
        m=n;
        n=r;
    }

    printf("Greatest common divisor: %d\n", gcd);
----------------------------
8) Convert fraction to lowest terms
    int n,m, gcd, r,n_cpy,m_cpy;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);
    n_cpy = n;
    m_cpy = m;

    while(1) {
        if(m%n==0) {
            gcd = n;
            break;
        }
        r = m%n;
        m=n;
        n=r;
    }

    printf("gcd - %d\n", gcd);
    printf("In lowest terms: %d/%d\n", (n_cpy/gcd), (m_cpy/gcd));

    return 0;
----------------------------------
9)PRINTING THE CALENDER ( was fun and slightly challenging)
int days, start_day;

    printf("Enter the number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    printf("\n");

    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat \n");
    for(int j=1;j<start_day;j++){
            printf("\t");
    }
    for(int i=1; i<=days; i++) {
        
        if((i+start_day -1 )%7==0){
            printf("%d\n", i);
            continue;
        }

        printf("%d\t", i);
    }
    printf("\n\n");
---------------------------------------------------------
10)    
*/

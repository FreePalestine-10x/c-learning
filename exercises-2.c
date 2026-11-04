#include <stdio.h>

int main() {

    
    return 0;
}

/*
EXERCISE - 1

int input, digits;

    printf("Enter a number:");
    scanf("%d", &input);

    if((input/1000) >=1) {
        digits = 4;
    } else if((input/100) >=1) {
        digits = 3;
    } else if((input/10) >=1) {
        digits = 2;
    } else {
        digits = 1;
    }

    printf("the number %d has %d digits\n", input, digits);


    return 0;

    -----------------------------------------------------------
EXERCISE -2
    int h, m;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);

    if(h<0 || h>23 || m<0 || m > 59){
        printf("Time Format Incorrect\n");
        return 1;
    }

    if(h>=13) {
        printf("Equivalent 12-hour time: %d:%.2d PM\n", (h-12), m);
    } else if(h>=12){
        printf("Equivalent 12-hour time: %d:%.2d PM\n", h,m );
    } else if(h==0){
        printf("Equivalent 12-hour time: %d:%.2d AM\n", (h+12),m );
    } else {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", h,m );
    }

--------------------------------------------------------------------------
EXERCISE - 3

int high1,high2,low1,low2, largest, smallest;

    int n1,n2,n3,n4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1,&n2,&n3,&n4);

    if(n1<=n2) {
        high1 = n2;
        low1 = n1;
    } else {
        high1 = n1;
        low1 = n2;
    }
    
    if(n3<=n4) {
        high2 = n4;
        low2 = n3;
    } else {
        high2 = n3;
        low2 = n4;
    }

    if(high1<=high2) {
        largest = high2;
    } else {
        largest = high1;
    }
    
    if(low1<=low2) {
        smallest = low1;
    } else {
        smallest = low2;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);




*/

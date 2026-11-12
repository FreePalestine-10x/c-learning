#include <stdio.h>

int main()
{
    int num, d1,d2,d3;
    printf("Enter the 3-digit number:");
    scanf("%d", &num); //342

    d1 = num/100; //3
    num -= (d1*100); //42

    d2 = num/10; //4
    num -= (d2*10); //2
    
    d3 = num;//2

    int new_num = (d3*100) + (d2*10) + d1; //243
    printf("New Number = %d\n", new_num);

    return 0;
}



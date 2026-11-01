#include <stdio.h>
// #define PI 3.1415
#define TAX 0.05

int main() {
    int dollaramt;

    printf("Enter Dollar Amount: ");
    scanf("%d", &dollaramt);

    int bills, left_over;

    bills = dollaramt/20; 
    printf("$20 bills: %d\n", bills);
    left_over = dollaramt - (bills * 20); 

    bills = left_over/10;
    printf("$10 bills: %d\n", bills); 
    left_over = left_over - (bills * 10); 

    bills = left_over/5;
    printf("$5 bills: %d\n", bills);
    left_over = left_over - (bills * 5);

    printf("$1 bills: %d\n", left_over);

}

/****************************************** */

/* EXERCISE - 1 */
// float radius, volume;

//     printf("Enter the radius of the Sphere: ");scanf("%f", &radius);

//     volume = (4.0f/3.0f) * PI * radius * radius * radius;

//     printf("The volume of the Sphere is: %.2f\n", volume);

/****************************************** */

/* EXERCISE - 2 */
// float dollaramt, after_tax;

//     printf("Enter your dollar amount: ");
//     scanf("%f", &dollaramt);

//     after_tax = dollaramt + (dollaramt * TAX);

//     printf("Total, with tax added: $%.2f\n", after_tax);

//     return 0;

/****************************************** */

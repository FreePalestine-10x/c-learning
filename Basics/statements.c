#include <stdio.h>
#include <stdbool.h>

int main() {
   
    int month, day, year;
    printf("Enter date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    // printf("%d-%d-%d", month, day, year );
    
    printf("Dated this %d", day);
    switch(day) {
        case 1: case 21: case 31:
            printf("st");
            break;
        case 2: case 22:
            printf("nd");
            break;
        case 3: case 23:
            printf("rd");
            break;
        default:
            printf("th");
            break;    
    }
    printf(" day of ");
    switch(month) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
    printf(",20%.2d.\n", year);
    
   return 0; 
}



/* EXERCISE - 1

    float commission;
    int transaction;

    printf("Enter the Value of trade: ");
    scanf("%d", &transaction);

    if(transaction<2500) {
        commission = 30 + transaction*0.017;
    } else if (transaction <=6250) {
        commission = 56 + transaction*0.0066;
    } else if (transaction <=20000) {
        commission = 76 + transaction*0.0034;
    } else if (transaction <=50000) {
        commission = 100 + transaction*0.0022;
    } else if (transaction <=500000) {
        commission = 155+ transaction*0.0011;
    } else {
        commission = 255 + transaction*0.0009;
    } 

    if(commission < 39.00f) {
        commission = 39.00;
    }
    
    printf("Commission: %.2f", commission);

    return 0;
    
*/

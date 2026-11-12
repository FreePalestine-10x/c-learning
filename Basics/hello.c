#include<stdio.h>

int main () {
    int x = 1;
    float y = 2.1;


    float calc() {
        return x + y;
    }
    printf("Value - %.2f\n", calc());
    printf("hello world\n");

    float weight;
    int volume;

    volume = 12 * 10 * 8;
    weight = (volume+165)/166;

    printf("Weight = %f\n", weight);

    return 0;
}

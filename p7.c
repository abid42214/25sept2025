#include <stdio.h>
int main() {
    int a, b;
    int sum, diff, product, div;

    printf("Enter the value of a&b: ");
    scanf("%d %d", &a, &b);


    sum = a + b;
    diff = a - b;
    product = a * b;
    div = a / b;


    printf("Addition: %d\n ",sum);
    printf("Subtraction:%d\n",diff);
    printf("Multiplication:%d\n",product);
    printf("Division :%d\n", a, b, div);


    return 0;
}

#include <stdio.h>
int main() {
int N, sum = 0, i;
printf("Enter a number N: ");
scanf("%d",&N);

for(i = 1; i <= N; i++) {
sum += i;
    }

printf("thi sum is = %d\n",sum);
return 0;
}

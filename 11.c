#include <stdio.h>
int main() {
    int n,i,sum = 0,avg,c=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i=1;i<=n;++i){
        sum+=i;
        c++;
    }
    avg=sum/c;
    printf("Sum = %d\nAverage = %d", sum,avg);
    return 0;
}



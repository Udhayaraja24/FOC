#include <stdio.h>
int main() {
    int num, oNum, rem, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &num);
    oNum = num;

    while (oNum != 0) {
        rem = oNum % 10;
        
       result += rem * rem * rem;
       oNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}


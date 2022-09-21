#include <stdio.h>

int main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2){
		sum += i;
    }
	printf("Sum = %d",sum);

    return 0;
}

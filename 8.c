#include<stdio.h>
int main(){
	int n;
	printf("Enter the number to find whether it's odd or even : ");
	scanf("%d",&n);
	if(n<=0){
		printf("Invalid input .");
	}
	else if(n%2==0){
		printf("%d is a even number .",n);
	}
	else if(n%2!=0){
		printf("%d is a odd number .",n);
	}
	else{
		printf("Invalid input .");
	}
}

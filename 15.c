#include<stdio.h>
int main(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n<0){
		printf("Negative number .");
	}
	else if(n>0){
		printf("Positive number .");
	}
	else{
		printf("Invalid input .");
	}
}

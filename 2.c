#include<stdio.h>

int main(){
	int n;
	printf("enter an even number of the range : ");
	scanf("%d",&n);
	int i;
	if(n%2==0){
		for(i=2;i<=n;i++){
			if(i%2==0){
				printf("%d ",i);
			}
			else{
				continue;
			}
		}
	}
	else{
		printf("Invalid input.");
		exit(0);
	}
}

// program to identify perfect number.
#include<stdio.h>
void main(){
	int n,i,sum=0;
	printf("Enter an Number: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("The number %d is a perfect number.",n);
		
	}
	else{
		printf("The number %d is NOT a perfect number.",n);

	}
}

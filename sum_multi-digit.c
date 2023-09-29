// program: sum of a multi-digit number.
#include<stdio.h>
void main(){
	int n,sum=0,r;
	printf("Enter the Multi-digit Number to find its Sum:");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		sum+=r;
		n=n/10;
	}
	printf("The sum of the multi digit number is :%d",sum);
	
	
}

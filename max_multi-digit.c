// program:  maximum of a multi-digit number.
#include<stdio.h>
void main(){
	int n,max=0,r;
	printf("Enter the Multi-digit Number to find its maximum:");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		if(max<r){
			max=r;
		}
		n=n/10;
	}
	printf("The max of the multi digit number is :%d",max);
	
	
}

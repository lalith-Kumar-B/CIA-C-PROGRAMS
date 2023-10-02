// program to find sum of N natural numbers.
#include<stdio.h>
int main(){
	int n,sum=0,i;
	printf("program to find sum of N natural numbers.\nEnter the Value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}	
	printf("The sum of %d natural numbers is %d",n,sum);
	return(0);
}

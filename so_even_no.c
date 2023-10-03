//program To find the sum of N terms of the series: S = 2+ 4+ 6+ … N terms.
#include<stdio.h>
int main(){
	int sum=0,n,i,term;
	printf("Program To find the sum of the N terms of the series S = 2+ 4+ 6+ ... N terms\nEnter the value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		term=2*i;
			sum+=i;
		
	}
	printf("The sum of the series is %d",sum);
	return(0);
}

// c program To find the sum of N terms of the series S =1! - 3! + 5! - …N terms.
#include<stdio.h>
int main(){
	int sum=0,n,i,j,m,sign=1,term;
	printf("Program To find the sum of the N terms of the series  S =1! - 3! + 5! -... N terms\nEnter the value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
    term=(2*i)-1;
			m=term;
			for(j=m-1;j>1;j--){
				m=m*j;
			}
			m=m*sign;
			sum=sum+m;
			sign=-sign;
	}
	printf("The sum of the series is %d",sum);
	return(0);
}

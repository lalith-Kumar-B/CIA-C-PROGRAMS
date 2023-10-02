// program To find the sum of N terms of the series  S = 1!*3! + 2!*5! + 3!*7! +...N terms.
#include<stdio.h>
int fac(int x){
	int ret=1,i;
	for(i=1;i<=x;i++){
		ret=ret*i;
	}
	return ret;
}
int main(){
	int sum=0,n,j,term;
	printf("Program To find the sum of the N terms of the series  1!*3! + 2!*5! + 3!*7!+... N terms\nEnter the value of N:");
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		term=fac(j)*fac(j+2);
		sum+=term;
	}
	printf("The sum of the series is %d",sum);
	return(0);
}

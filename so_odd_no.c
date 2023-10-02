//To find the sum of the N terms of the series S= 1+ 3 + 5 + . . . N terms
#include<stdio.h>
int main(){
	int sum=0,n,i;
	printf("Program To find the sum of the N terms of the series S= 1+ 3 + 5 + . . . N terms\nEnter the value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	printf("The sum of the series is %d",sum);
	return(0);
}

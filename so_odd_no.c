//To find the sum of the N terms of the series S= 1+ 3 + 5 + . . . N terms
#include<stdio.h>
int main(){
	int sum=0,n,i,term;
	printf("Program To find the sum of the N terms of the series S= 1+ 3 + 5 + . . . N terms\nEnter the value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		 term=(2*i)-1;
			sum+=term;
		}
	}
	printf("The sum of the series is %d",sum);
	return(0);
}

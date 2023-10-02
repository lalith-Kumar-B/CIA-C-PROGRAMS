// program To find the sum of N terms of the series S =1! + 3! + 5! + …N terms.
#include<stdio.h>
int main(){
	int sum=0,n,i,j,m;
	printf("Program To find the sum of the N terms of the series  S =1! + 3! + 5! +... N terms\nEnter the value of N:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			m=i;
			for(j=m-1;j>1;j--){
				m=m*j;
			}
			sum+=m;
		}
	}
	printf("The sum of the series is %d",sum);
	return(0);
}

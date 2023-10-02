/*find standard deviation of N numbers in an array(function).
formula: std=sqrt([(x[i]-mean)^2]/n) */
#include<stdio.h>
#include<math.h>
int stdfunc(int arr[],int n){
	int total=0,i;
	double mean,dif,sd=0,std;
	for(i=0;i<n;i++){
		total+=arr[i];
	}
	mean=total/n;
	for(i=0;i<n;i++){
		dif=arr[i]-mean;
		sd+=dif*dif;//sd:squared difference
	}
	std=sqrt(sd/n);
	return std;
}
void main(){
	int n,i;
	double result;
	printf("PROGRAM TO FIND STANDARD DEVIATION.\n");//ctrl+e = paste the current line to next line 
	printf("Enter the size of the array (n): ");
	scanf("%d",&n);
	int x[n];
	printf("Enter the values of 'x' .\n");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	result=stdfunc(x,n);
	printf("The standard deviation is : %lf",result);
}

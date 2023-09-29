/*find standard deviation of N numbers in an array.
formula: std=sqrt([(x[i]-mean)^2]/n) */
#include<stdio.h>
#include<math.h>
void main(){
	int mean,total=0,n,i;
	double dif,sd=0,std;
	printf("PROGRAM TO FIND STANDARD DEVIATION.\n");//ctrl+e = paste the current line to next line 
	printf("Enter the size of the array (n): ");
	scanf("%d",&n);
	int x[n];
	printf("Enter the values of 'x' .\n");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		total+=x[i];
	}
	mean=total/n;
	for(i=0;i<n;i++){
		dif=x[i]-mean;
		sd+=dif*dif;//sd:squared difference
	}
	std=sqrt(sd/n);
	printf("The standard deviation is : %lf",std);
	
}

// find the average of N numbers in array.
#include<stdio.h>
void main(){
	int sum=0,avg,n,i;
	//input
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements.\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		}
	avg=sum/n;
	// output
	printf("The average of the array is %d .",avg);
}

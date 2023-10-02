/*Write a program in C to input N numbers into an array and find the maximum and 
minimum numbers and display their respective positions.*/
#include<stdio.h>
void main(){
	int min_loc,max_loc,min,max,n,i,j;
	//input
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements.\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//finding the maximum value.
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			max_loc=i;
		}
	}
	//finding the minimum value.
	min=a[0]; 
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			min_loc=i;
		}
	}
	// output
	printf("The the maximum value in the array is %d and its location is %d .\n",max,max_loc+1);
	printf("The the minimum value in the array is %d and its location is %d .",min,min_loc+1);
}

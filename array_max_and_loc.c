// find the maximum of the array and also its location.
#include<stdio.h>
void main(){
	int max=0,loc,n,i,j;
	//input
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements.\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//finding the maximum value.
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	//finding its location
	for(i=0;i<n;i++){
		if(max==a[i]){
			loc=i;
			//break;
		}
	}
	// output
	printf("The the maximum value in the array is %d and its location is %d .",max,loc+1);
}

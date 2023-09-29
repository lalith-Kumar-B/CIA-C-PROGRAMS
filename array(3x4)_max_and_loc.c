// find the maximum of the array of order 3x4 and also its location.
#include<stdio.h>
void main(){
	int max=0,row_loc,clm_loc,n,i,j,a[3][4];
	//input
	printf("Enter the array elements in order 3x4.\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	//finding the maximum value and its location
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(max<a[i][j]){
				max=a[i][j];
				row_loc=i+1;
				clm_loc=j+1;
			}
		}
	}
	// output
	printf("The  maximum value in the array is %d and its location is %d row and %d cloumn.",max,row_loc,clm_loc);
}

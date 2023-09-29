/* To find the cosine of an angle in degree by summing the terms generated till the value
 of the term is greater than 0.0001*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415
void main(){
	int n=1;
	double angle_deg,angle_radian,cos_value=1.0,term=1.0;
	printf("Enter the angle in degree to find its cosine(x):");
	scanf("%lf",&angle_deg);
	//convert from degrees to radians. 
	//formula: radians=degree*pi/180.0;
	angle_radian=angle_deg*PI/180.0;
	//taylor expansion formula to find cosine(x)= 1-(pow(x,n)/n!)+(pow(x,n+2)/(n+2)!)-.......
	//we need to stop till the term is greater than  0.0001.
	//fabs is a function that converts the argument into absolute value.
	while(fabs(term)>0.0001){
	 	term = -term*angle_radian* angle_radian/ (2 * n * (2 * n - 1));
        cos_value+= term;
        n++;
	}
	printf("The cosine(%.2lf) is %lf.",angle_deg,cos_value);
}


/* find area of triangle from its 3 sides.
formula: semi-perimeter(s)=(a+b+c)/2.
area=sqrt(s*(s-a)*(s-b)*(s-c)). */
#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,area,s;
	printf("PROGRAM: TO FIND THE AREA OF TRIANGLE .\n");
	printf("Enter the Three sides of the triangle .\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is : %f",area);
}

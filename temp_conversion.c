/* Temperature conversion.
formula: 1.f=c*(9/5)+32 (celsius to fahrenheit)
         2.c=(f-32)*5/9 (fahrenheit to celsius) */
#include<stdio.h>
void main(){
	int btn;
	float f,c;
	printf("TEMPERATURE CONVERSION PROGRAM .\nPRESS 1 : TO convert celsius to fahrenheit .\nPRESS 2 : TO convert fahrenheit to celsius .\n");
	scanf("%d",&btn);
	if(btn==1){
		printf("Enter the Temperature in Celsius .\n");
		scanf("%f",&c);
		f=(c*9/5)+32;
		printf("Temperature in fahrenheit is : %f",f);
	}
	else if(btn==2){
		printf("Enter the Temperature in fahrenheit .\n");
		scanf("%f",&f);
		c=(f-32)*5/9;
		printf("Temperature in celsius is : %f",c);		
	}
	else{
		printf("ERROR 404 : PRESS EITHER 1 OR 2 .");
	}
}

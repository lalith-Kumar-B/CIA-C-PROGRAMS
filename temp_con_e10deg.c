/*Write a program in C to convert temperature in Celsius to Fahrenheit for temperatures
 ranging from 0 to 100C for every 10 degrees. F = (9/5)*C + 32*/
 #include<stdio.h>
int main(){
	float c,f;
	printf("Temperature in Celsius to Fahrenheit\n");
	for(c=0;c<=100;c+=10){
		f=(c*9/5)+32;
		printf("\t %.2f C == %.2f F\n",c,f);
	}
	return(0);
}


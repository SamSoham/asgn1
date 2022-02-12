#include<stdio.h>
int main(){
	float r;
	printf("Enter the value of radius ");
	scanf("%f",&r);
	printf("\nDiameter of the circle is %f",r*2);
	printf("\nCircumference of the circle is %f",6.28*r);
	printf("\nArea of the circle is %f",3.14*r*r);
	return 0;
}

#include<stdio.h>
int main (){
	float a,b;
	int c;
	printf("Enter two numbers ");
	scanf("%f%f",&a,&b);
	printf("which arithmetic operation do you want to perform:-");
	printf("\n1.Sum \n2.substraction \n3. multiplication \n4.Division\n");
	scanf("%d",&c);
	switch(c)
	{	case 1:
		printf(" %f",a+b);
		break;
			case 2:
		printf(" %f",a-b);
		break;
			case 3:
		
		printf(" %f",a*b);
		break;
			case 4:
		
		printf(" %f",a/b);
		break;
		default :
			printf("invalid number");
	}
	return 0;
}

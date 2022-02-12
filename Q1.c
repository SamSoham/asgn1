#include <stdio.h>
int main(){
	char name[20],hob[50],br[50];
	int reg;
	printf("Enter your name ");
	gets(name);
	printf("\nname of the branch ");
	gets(br);
    printf("\nenter your hobbies ");
	gets(hob);
    printf("\n enter your reg no ");
    scanf("%d",&reg);
	puts(name);
	printf(" %d",reg);
	printf("\n");
	puts(br);
	puts(hob);
	
	
	return 0;
}

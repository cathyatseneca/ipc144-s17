#include <stdio.h>
int main(void){
	int number;
	char character;
	printf("enter a numeric character:);
	scanf("%c",&character);
	printf("enter a number");
	scanf("%d",&number);
	character = character+11;
	number=number+11;
	printf("character: %c\n",character);
	printf("number: %d\n",number);
}
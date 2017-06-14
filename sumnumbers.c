#include <stdio.h>
int main(void){
	int number;
	int data[10]={2,4,1,5,4,-2,8,6,3,4};
	int sum;
	printf("here is the data:\n");
	for(int i=0;i<10;i++){
		printf("%d ",data[i]);		
	}
	printf("\n");

	printf("Enter a number from 1 to 10, 0 to exit: ");
	scanf("%d",&number);
	while(number < 0 || number > 10){
		printf("invalid number.  please reenter: ");
		scanf("%d",&number);
	}
	while(number!=0){
		//code to do stuff goes here!
		sum=0;
		for(int i=0;i<number;i++){
			sum+=data[i];
		}
		printf("sum of first %d numbers is %d\n",number,sum);
		printf("Enter a number from 1 to 10, 0 to exit: ");
		scanf("%d",&number);
		while(number < 0 || number > 10){
			printf("invalid number.  please reenter: ");
			scanf("%d",&number);
		}

	}


}
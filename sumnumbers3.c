#include <stdio.h>
//function type 3 parts
//<return type> <functionName>(<args>);
int getInput(int max);

int main(void){
	int number;
	int data[10]={2,4,1,5,4,-2,8,6,3,4};
	int sum;
	printf("here is the data:\n");
	for(int i=0;i<10;i++){
		printf("%d ",data[i]);		
	}
	printf("\n");
	//call getInput to read and validate a number
	number=getInput(10);
	while(number!=0){
		//code to do stuff goes here!
		sum=0;
		for(int i=0;i<number;i++){
			sum+=data[i];
		}
		printf("sum of first %d numbers is %d\n",number,sum);
		number=getInput(10);
	}
}
//the function definitiion for getInput (ie the code)
//the getInput function asks user to enter a number between
//1 to 10, 0 to exit, error checks and returns that number
int getInput(int max){
	int rc;
	printf("Enter a number from 1 to %d, 0 to exit: ", max);
	scanf("%d",&rc);
	while(rc < 0 || rc > max){
		printf("invalid number.  please reenter: ");
		scanf("%d",&rc);
	}
	return rc;
}

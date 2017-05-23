#include <stdio.h>

const double singleMuffinCost=1.00;
const double hst=0.13;

int main(void){
	//camel cased spelling.  camelcase is lowercase in general
	//upper case first letter of every word other than the first

	int numMuffins;
	double total;
	//ask user for number of muffins
	printf("How many muffins would you like: ");
	//read in how many
	scanf("%d",&numMuffins);
	//calculate muffin cost
	total=numMuffins * singleMuffinCost;
	//if there are less than 6 muffins
	if(numMuffins < 6){
	     //add the tax
		total=total + total * hst;
	}
	//display final result
	printf("the total cost is: $%.2lf\n",total);
	return 0;
}
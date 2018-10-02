#include <iostream>
//recuired libraries included
using namespace std;
int main()
//main function created
{
	int noApples=0;
	int noMangoes=0;
	int noBananas=0;
	int counter=0;
	for(;noBananas<=200;noBananas+=2)//loop fixing the number of bananas
	{
		int moneyToSpare=100-noBananas/2;//money left after buying the required number of bananas
	for(noApples=0;noApples<=moneyToSpare;noApples++)//loop to fix the number of appples bought
	if((moneyToSpare-noApples)%3==0)//can a whole number of mangoes be bought by the amount left?
	{//if yes
		noMangoes=(moneyToSpare-noApples)/3;//number of mangoes bought found
		counter++;
		cout<<counter<<" Option:"<<noApples<<" apples, "<<noMangoes<<" mangoes and "<<noBananas<<" bananas can be bought."<<endl;//combinations displayed
	}//end of it
	}//end of outer for
	return 0;
}//end of main function

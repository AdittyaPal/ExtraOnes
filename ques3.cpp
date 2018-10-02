#include <iostream>
#include <cmath>
//inclusion of the required libraries
using namespace std;
int main()
//declare a main function to fing square triangular numbers
{
	long long rangeOfNumbers=pow(2,64)-1;//the limit the datatype can hold
	long long numberSquare=1l;//stores the number whose square is to be checked
	long long numberSum=1l;//stores the number upto which sum is calculated
	unsigned long long sumConsecutive=0l;//stores the sum upto numberSum
	int counter=1;//counts the number displayed
	while(sumConsecutive<=rangeOfNumbers)//with the valid range of the datatype
	{
		unsigned long long square=pow(numberSquare,2);//square is found
		while(sumConsecutive<square)
		sumConsecutive+=numberSum++;//traingular number greater than or equal to the square is found
		if(sumConsecutive==square)//if equal
		cout<<counter++<<" Number: "<<square<<"\t"<<" >>square of "<<numberSquare<<" and sum of numbers upto "<<(numberSum-1)<<endl;
		numberSquare++;
	}//end of while loop
	return 0;		
}//end of man function

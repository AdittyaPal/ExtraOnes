#include <iostream>
using namespace std;
//required library included
void getWeeklySales(int&);
double option1();
double option2(int);
double option3(int);
int main()
//main function
{
	int sales=0;
	getWeeklySales(sales);//gets weekly sales from the user
	double wage1=option1();//calculates wage by first option
	double wage2=option2(sales);//calculates wage by second option
	double wage3=option3(sales);//calculates wage by third option
	if(wage1>wage2&&wage1>wage3)//finds maximum wage
	cout<<"The best option is 1."<<endl;
	else if(wage2>wage3)
	cout<<"The best option is 2."<<endl;
	else
	cout<<"The best option is 3."<<endl;
	return 0;
}
void getWeeklySales(int& sale)//method to get the weekly sales
{

	cout<<"Enter the number of shoes sold per week."<<endl;
	cin>>sale;
}
double option1()//method to calculate salary by first option
{
	return 600.0;
}
double option2(int sale)//method to calculate salary by second option
{
	return (7.0*40+0.1*sale*225);
}
double option3(int sale)//method to calculate salary by third option
{
	return (20.0*sale+0.2*sale*225);
}


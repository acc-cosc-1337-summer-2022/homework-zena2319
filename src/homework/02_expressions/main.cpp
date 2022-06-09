//write include statements
#include "hwexpressions.h"
#include<iostream>
#include<iomanip>

//write namespace using statement for cout
using std::cout;
using std::cin;
using std::setw;
using std::endl;


int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount ;
	double total;

	cout<<"\n";
	cout<<"What is the meal amount? $";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"What is the tip rate? ";
	cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount,tip_rate);
	
	total = tip_amount + tax_amount + meal_amount;

	cout<<"\n";
	cout<<"Meal Amount:   $"<<setw(2) <<meal_amount << endl;
	cout<<"Sales Tax:     $"<<setw(2) <<tax_amount << endl;
	cout<<"Tip Amount:    $"<<setw(1) <<tip_amount << endl;
	cout<<"Total:         $"<<setw(2) <<total << endl;
	cout<<"\n";
	return 0;
}

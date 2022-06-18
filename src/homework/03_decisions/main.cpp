//write include statements
#include "decisions.h"
#include<iostream>

using std::cin;
using std::cout;

int main() 
{
	string letter_grade;
	int credit_hours;
	int credit_hours_total = 0;
	int credit_points_total = 0;
	char keep_going = 'n';

	do
	{
		cout<<"Please enter a letter grade: ";	
		cin>>letter_grade;

		cout<<"Please enter the credit hours: ";
		cin>>credit_hours;

		credit_hours_total += credit_hours;
		credit_points_total += credit_hours * get_grade_points(letter_grade);

		cout<<"Do you wish to continue entering grades and credit hours?: ";
		cin>>keep_going;
	}
	  while(keep_going == 'y' || keep_going == 'Y');

	  cout<<"Your GPA is: "<<calculate_gpa(credit_hours_total, credit_points_total);
	  cout<<"\n";
	  return 0;

}

		


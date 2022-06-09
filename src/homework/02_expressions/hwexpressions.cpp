#include "hwexpressions.h"

//Sales tax amount function
double get_sales_tax_amount(double meal_amount)
{
	const double tax_rate = .0675;
	auto tax_amount = tax_rate * meal_amount;
	return tax_amount;
}

//Get tip amount function
double get_tip_amount(double meal_amount, double tip_rate)
{
	auto tip_amount = meal_amount * tip_rate;
	return tip_amount;
}



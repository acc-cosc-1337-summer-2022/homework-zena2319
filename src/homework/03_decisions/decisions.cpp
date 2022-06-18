//write include statement for decisions header
#include "decisions.h"

//Function that returns grade point
int get_grade_points(string letter_grade)
{
    if(letter_grade == "A")
    {
        return 4;
    }
    else if(letter_grade == "B")
    {
        return 3;
    }
    else if(letter_grade == "C")
    {
        return 2;
    }
    else if(letter_grade == "D")
    {
        return 1;
    }
    else if(letter_grade == "F")
    {
        return 0;
    }
    else return -1;
}   

//Function that calculates GPA
double calculate_gpa(int credit_hours, double credit_points)
{
    double result = -1.0;
    if (credit_hours != 0)
    {   result = credit_points/credit_hours;
    }
    return result; 
}
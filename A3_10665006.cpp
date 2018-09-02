#include <iostream>
using namespace std;

int main()
{
	double grade;
	
	cout << " please enter your grade? ";
	cin >> grade;
	
	if ( (grade >= 90 )  && (grade<100) )
	{
		cout << "your letter grade is:  "<< "A";
	}
	else if (  (grade>=80 )   &&  (grade < 90)   )
	{
	cout <<  "your letter grade is: " << "B";
	}
	else if (   (grade>=70)  &&  (grade < 80)   )
	{
		cout << "your letter grade is: " << "C";
	}
		else if (   (grade>=60)  &&  (grade < 70)   )
	{
		cout << "your letter grade is: " << "D";
	}
	
    else if  (( grade > 0)  &&   ( grade < 60)) 
    {
    	cout<< " your letter grade is: " << "E";
	}
    else
    {
    	cout << " you are out of the school " ;
	}

return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char **argv){
	
	int b;
	bool flag=false;
	
	cout<<"Enter integer:";
	cin>>b;
	
	for(int a=2; a<b; a++)
	{
		if (b%a==0)
	    {  
	       flag = true;
	       break;
		}
		
	}
	if (flag==false && b>1)
	    cout << "Number is prime = "<<b;
	else
	   cout << "Number is not prime ="<<b;
	return 0;   
	
}

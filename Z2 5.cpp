#include <iostream>
using namespace std;
double h(double a)
{
	return 1.8*a+32.0;
}
int main()
{
	int t;
	cout<<"Please enter a Celslus: "<<endl;
	cin>>t;
	cout<<t<<" degrees Celslus is "<<h(t)<<" degrees Fahrenhelt"<<endl;
	return 0;
}
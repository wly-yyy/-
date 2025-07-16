#include <iostream>
using namespace std;
double gn(double a)
{
	return a*63240;
}
int main(){
	double g;
	cout<<"Enter the number of light years: ";
	cin>>g;
	cout<<g<<" light years = "<<gn(g)<<" astronomical units."<<endl;
	return 0;
	
}
#include <iostream>
using namespace std;
void print(int a,int b)
{
	cout<<"Time: "<<a<<":"<<b<<endl;
}
int main()
{
	int m,s;
	cout<<"Enter the number of hours: ";
	cin>>m;
	cout<<"Enter the number of minutes: ";
	cin>>s;
	print(m,s);
}
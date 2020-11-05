#include <iostream>
#include <Windows.h>
using namespace std;
double k(const double x, const double y);
int main()
{
	double p,q;
	cout<<"p=";cin>>p;
	cout<<"q=";cin>>q;
	double d=(k(1+p*q,q*q)+((k(p,p*p))*(k(p,p*p)))/(1+k(p*q+q*q,p)));
	cout<<"d="<<d<<endl;
	system("pause");
	return 0;
}
double k(const double x, const double y)
{
	return ((x/(1+sin(y)*sin(y)))+(y/(1+x*x)));
}
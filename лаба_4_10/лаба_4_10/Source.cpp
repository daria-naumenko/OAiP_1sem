#include <iostream>
#include<conio.h>
typedef  double(*TypeFun) (int, double); 
double fun(int, double); 
double sum(int, double);
double razn(int, double);
void  Out(TypeFun, double, double, double, int);
using namespace std;
int main()
{
	double a, b, h;  
	int num, n;
	TypeFun ff;
	cout << "Input n = "; cin >> n;
	char text[3][10] = { "function", "amount", "raznoct" }; 
	cout << "Press '0' if deafult" << endl;
	if (_getch() == '0') 
	{
		a = 0.1, b = 1, h = 0.1;
	}
	else
	{
		cout << "Input a = "; cin >> a;
		cout << "Input b = "; cin >> b;
		cout << "Input h = "; cin >> h;
	}
	cout << " Functions :   1 - Function (Y(x)) ,  2 - Amount (S(x)) ,   else  |Y(x)-S(x)| " << endl;
	switch (_getch()) {    
	case  '1':	ff = fun;	 num = 0;	break; 
	case  '2': 	ff = sum;	 num = 1;	break;
	default:	ff = razn;	 num = 2;
	}
	cout << "Results to " << text[num] << endl;
	Out(ff, a, b, h, n);
}    
double  fun(int n, double x) 
{
	return (exp(x) + exp(-x)) / 2;  
}
double  razn(int n, double x)
{
	return fabs(fun(n, x) - sum(n, x)); 
}
double sum(int n, double x) 
{
		double r, s;
	r = s = 1;   
	             
	for (int k = 1; k <= n; ++k)
	{
		r = r * x * x / ((2 * k - 1) * 2 * k);
		s += r;
	}
	return s;
}

void  Out(TypeFun f, double a, double b, double h, int n)
{
	for (double x = a; x <= b; x += h)
		cout << "x = " << x << "\t res = " << f(n, x) << endl;
}
//задание 3 
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, b, h, x, y, s, p, pi = 3.141592;
	int n, k;
	cout << "Vvedite a,b,n,h" << endl;
	cin >> a >> b >> n >> h;
	for (x = a; x <= b; x += h)
	{
		p = s = 1;
		for (k = 1; k <= n; k++)
		{
			p *= x / k;
			s += cos(k * pi / 4) * p;

		}
		y = exp(x * cos(pi / 4)) * cos(x * sin(pi / 4));
		cout << "x = " << x << "\ts = " << s << "\ty = " << y << "\t|s-y| = " << fabs(y - s) << endl;
	}
	system("pause");
	return 0;
} 
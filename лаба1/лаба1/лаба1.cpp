#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char* argv[])
{
	double x, y, z, a, b, c, d, e, f, g, h, i, j, k, l, m, result;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "z=";
	cin >> z;
	a = fabs(x - y);
	b = exp(a);
	c = pow(a, x + y);
	d = b * c;
	e = atan(x);
	f = atan(z);
	g = e + f;
	h = d / g;
	i = pow(x, 6);
	j = log(y);
	k = pow(j, 2);
	l = i + k;
	m = pow(1, 0.33333333);
	result = h + m;
	cout << "result" << result << endl;
	return 0;
}
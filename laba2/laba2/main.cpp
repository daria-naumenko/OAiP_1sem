#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, y, a, b, z, f = 0;
	int kod;
	cout << "Input z,a,b" << endl;
	cin >> z >> a >> b;
	if (z < 1)
	{
		x = 2 + z;
		cout << "z<1, x=2+z, y=";
	}
	else
	{
		x = pow(sin(z), 2);
		cout << "z>=1, x=pow(sin(z), 2),y=";
	}
	do {
		cout << "Press '1' if f=2*x" << "\n Press '2' if f=pow(x,2)" << "\n Press '3' if f=x/3" << endl;
		cin >> kod;
	} while (kod < 1 or kod>3);
	switch (kod) // переключатель
	{
	case 1:f = 2 * x; cout << "f=2*x" << endl; break;
	case 2:f = pow(x, 2); cout << "f=pow(x,2)" << endl; break;
	case 3:f = x / 3; cout << "f=x/3" << endl; break; // выполняет досрочный выход из оператора switch
	}

	y = (2 * a * f + b * cos(sqrt(fabs(x)))) / (pow(x, 2) + 5);
	cout << "y=" << y << endl;
	return 0;
}
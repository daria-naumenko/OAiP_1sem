#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time_t(0));
	int a[50], i, n, min; 
	double s = 0;
	do {
		cout << "Input the size of massiv (<=50)";
		cin >> n;
	} while (n < 1 || n > 50);
	cout << "Press '0' if randome" << endl;
	if (_getch() == '0')  
	{
		for (i = 0; i < n; ++i) // заполняем массив
			a[i] = rand() % 21 - 10; 
	}
	else
	{
		for (i = 0; i < n; ++i)
		{
			cout << " a[ " << i + 1 << " ] = ";
			cin >> a[i];
		}
	}
	for (i = 0; i < n; ++i)
	{
		cout << a[i] << " "; 
	}
	min = 0; 
	for (i = 1; i < n; ++i)
	{
		if (fabs(a[i]) < fabs(a[min]))
			 min = i;
	}
	cout << "min = " << a[min] << endl;
	if (min == n - 1) 
	{
		cout << "Minimal is last" << endl;
	}
	else
	{
		for (i = min + 1; i < n; ++i)
		{
			s += fabs(a[i]);
		}
		cout << "sum = " << s << endl;
	}
	return 0;
}
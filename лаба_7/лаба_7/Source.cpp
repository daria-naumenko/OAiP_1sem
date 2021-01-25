#define MAXLINE 1000
#include <iostream>
using namespace std;

int main() {    // индефикаторы на указатель main len str

	int len = 0; 
	char str[MAXLINE]=""; 

	cout << "Enter your string: ";
	cin.getline(str, MAXLINE);

	while (str[0] == '\0') {
		cout << "String is empty. Try enter string again: ";
		cin.getline(str, MAXLINE);
	}

	for (int i = 0; str[i] != '\0'; ++i) { 
		if (str[i] != ' ' && str[i+1] != '\0')
			len++;
		else {
			
			if (str[i + 1] == '\0') {
				len++;
				++i;
			}

			if (len % 2 == 0) {
				for (int j = i - len; j < i; ++j) {
					cout << str[j];
				}
				cout << "\t";
			}
			len = 0;
		}
	}

	return 0;
}


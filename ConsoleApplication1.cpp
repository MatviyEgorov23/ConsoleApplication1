// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int sum = 0;
	cout << "Enter the number: ";
	cin >> x;
	for (; x > 0;) {
		y = x % 10;
		sum +=y;
		x /= 10;
	}
	cout << sum << endl;
	return 0;
}
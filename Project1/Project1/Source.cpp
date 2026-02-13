#include <iostream>
using namespace std;

int main()
{
	cout << "Your first github repository\nCongratulations!\n\n\n";
	int a{}, b{}, c{};
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	c = a + b;
	cout << a << " + " << b << " = " << c << endl;
	c = a * b;
	cout << a << " * " << b << " = " << c << endl;
	c = a / b;
	cout << a << " // " << b << " = " << c << endl;

	return 0;
}

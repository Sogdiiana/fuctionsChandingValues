#include <iostream>
using namespace std; // changing values
int change(int num1, int num2)
{
	cout << "Number1 is " << num2 << endl;
	cout << "Number2 is " << num1 << endl;
	return 0;
}
int main()
{
	int num1, num2;
	cout << "Enter number 1 - ";
	cin >> num1;
	cout << "Enter number 2 - ";
	cin >> num2;
	cout << change(num1, num2);
	return 0;
}
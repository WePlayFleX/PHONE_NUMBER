#include <iostream>

using namespace std;

struct Phone
{
	int area;
	int exchange;
	int number;
};

int main()
{
	Phone ph1 = { 212, 767, 8900 };
	Phone ph2;

	cout << "Enter the full number (region, PBX, number) ";
	cout << "\n(no leading zeros): ";
	cin >> ph2.area >> ph2.exchange >> ph2.number;

	cout << "\nMy number: "
		<< '(' << ph1.area << ")"
		<< ph1.exchange << '-' << ph1.number;

	cout << "\nYour phone number : "
		<< '(' << ph2.area << ")"
		<< ph2.exchange << '-' << ph2.number << endl;

	system("pause");
	return 0;
}
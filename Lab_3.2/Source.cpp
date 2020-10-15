// Lab_03_2.cpp
// Яценко Денис Павлович
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 24


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;  // вхідний параметр
	double b;  // вхідний параметр
	double c;  // вхідний параметр
	double x;  // вхідний аргумент
	double F;  // результат обчислення виразу


	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	//спосіб 1: розгалуження в повній формі
	if (c < 0 && x != 0)
		F = (-a * x) - c;
	else
		if (c > 0 && x == 0)
			F = (x - a) / -c;
		else
			F = (b * x) / (c - a);
	cout << "1.)F = " << F << endl;

	// спосіб 2: розгалуження в скороченій формі

	if (c < 0 && x != 0)
		F = (-a * x) - c;
	if (c > 0 && x == 0)
		F = (x - a) / -c;
	if (!(c < 0 && x != 0) && !(c > 0 && x == 0))
		F = (b * x) / (c - a);
	cout << "2.)F = " << F << endl;


	cin.get();
	return 0;


}
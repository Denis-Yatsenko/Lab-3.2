// Lab_03_2.cpp
// ������ ����� ��������
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 24


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;  // ������� ��������
	double b;  // ������� ��������
	double c;  // ������� ��������
	double x;  // ������� ��������
	double F;  // ��������� ���������� ������


	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	//����� 1: ������������ � ������ ����
	if (c < 0 && x != 0)
		F = (-a * x) - c;
	else
		if (c > 0 && x == 0)
			F = (x - a) / -c;
		else
			F = (b * x) / (c - a);
	cout << "1.)F = " << F << endl;

	// ����� 2: ������������ � ���������� ����

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
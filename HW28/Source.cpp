#include <iostream>
#include<Windows.h>
using namespace std;
//������� ������� ���� �������
//������� �������
float square_area(float a)
{
	float s = a * a;
	return s;
}
float rectangle_area(float a, float b)
{
	float s = a * b;
	return s;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, r;
	cin >> a;
	cin >> b;
	try
	{
		float rsquare = square_area(a);
		float rrectangle = rectangle_area(a, b);
		if (rsquare <= 0 || rrectangle <= 0)
		{
			throw "Error";
		}
		cout << rsquare << endl << rrectangle << endl;
	}
	catch (...)
	{
		cout << "�������� ����� �������. ������� �� ���� ���� �䒺����.";
	}
	//������� catch
	return 0;
}
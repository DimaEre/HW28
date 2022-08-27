#include <iostream>
#include<Windows.h>
using namespace std;
//додайте власний клас винятків
//додайте функції
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
		cout << "Введення даних недійсне. Сторона не може бути від’ємною.";
	}
	//додайте catch
	return 0;
}
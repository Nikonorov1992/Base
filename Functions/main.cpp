#include <iostream>
using namespace std;

int Add(int a, int b); //Прототип функции (Function declaration -  объеявлении функции)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);


void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int b = 3;
	int sum = Add(a, b);	//Вызов функции (Function call)
	cout << sum << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;

}

int Add(int a, int b)	//Реализация функции (Function definition - определие функции)
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
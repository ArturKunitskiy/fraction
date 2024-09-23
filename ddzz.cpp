#include <iostream>
#include <random>
using namespace std;

class Fraction
{
	int numerator;
	int denominator;
public:
	void Input(int n, int d)
	{
		numerator = n;
		denominator = d;
	}
	void Print()
	{
		cout << numerator << " / " << denominator << endl;
	}
	void Input()
	{
		numerator = rand() % 100;
		denominator = rand() % 100 + 1;
	}
};

int main()
{
	srand(time(0));
	Fraction a;
	a.Input(1, 2);
	a.Print();

	Fraction b;
	b.Input();
	b.Print();
}
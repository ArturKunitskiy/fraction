#include <iostream>
#include <random>
using namespace std;

class Fraction
{
	int numerator;
	int denominator;
public:
	Fraction() 
	{
		numerator = 0;
		denominator = 1;
	}
	Fraction(int n, int d)
	{
		numerator = n;
		denominator = d;
	}
	void Input(int n, int d) {
		numerator = n;
		denominator = d;
	}
	void Print()
	{
		cout << numerator << " / " << denominator << endl;
	}
	void Input()
	{
		srand(time(0));
		numerator = rand() % 100;
		denominator = rand() % 100;
		while (denominator == 0)
		{
			denominator = rand() % 100;
		}
	}
		/*void SetN(int _numerator)
		{
			numerator = _numerator;
		}
		void SetD(int _denominator)
		{
			denominator = _denominator;
		}
		int GetN() {
			return numerator;
		}
		int GetD() {
			return denominator;
		}*/
};

int main()
{
	/*srand(time(0));
	Fraction q;
	q.Input(1, 2);
	q.Print();
	q.SetD(100);
	q.Print();
	int d = q.GetD();
	cout << d << endl;

	Fraction x;
	x.Input();
	x.Print();
	x.SetN(100);
	x.Print();
	int n = x.GetN();
	cout << n << endl;*/

	Fraction x;
	x.Print();

	Fraction z(1, 10);
	z.Print();

}
#include <iostream>
using namespace std;
class Fraction {
private:
	int numerator;
	int denominator;
public:
	Fraction() {
		//construct by default
		cout << "Construct by default";
		numerator = denominator = 0;
	}
	Fraction(int _numerator, int _denominator) {
		numerator = _numerator;
		denominator = _denominator;
	}
};
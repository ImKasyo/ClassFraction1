#include <iostream>
using namespace std;
class Fraction {
private:
	int numerator;
	int denominator;
public:
	int GetNumeration() {
		return numerator;
	}
	int GetDenomirator() {
		return denominator;
	}
	int SetNumeration(int x){
		numerator = x;
	}
	int SetDenomirator(int x) {
		denominator = x;
	}
	Fraction() {
		numerator = denominator = 0;
	}
	Fraction(int _numerator, int _denominator) {
		numerator = _numerator;
		denominator = _denominator;
	}
	void Input() {
		cin >> numerator >> denominator;
	}
	void Input(int _numerator, int _denominator) {
		numerator = _numerator;
		denominator = _denominator;
	}
	void Show() {
		cout << numerator << "/t" << denominator << endl;
	}
	Fraction Sum(Fraction& b) {
		Fraction rez;
		rez.numerator = numerator + b.numerator;
		rez.denominator = denominator + b.denominator;
		return rez;
	}
	Fraction Min(Fraction& b) {
		Fraction rez;
		rez.numerator = numerator - b.numerator;
		rez.denominator = denominator - b.denominator;
		return rez;
	}
	Fraction Del(Fraction& b) {
		Fraction rez;
		rez.numerator = numerator / b.numerator;
		rez.denominator = denominator / b.denominator;
		return rez;
	}
	Fraction Multi(Fraction& b) {
		Fraction rez;
		rez.numerator = numerator * b.numerator;
		rez.denominator = denominator * b.denominator;
		return rez;
	}
};
int main() {
	Fraction fraction1;
	fraction1.Input(1, 2);
	fraction1.Show();
}
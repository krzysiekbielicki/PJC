#include <iostream>

using namespace std;

class Cplx {
	int re;
	int im;
	public:
		Cplx(int re, int im) : re(re), im(im) {}
	
		void add(Cplx z) {
			this->re += z.re;
			this->im += z.im;
		}

		void sub(Cplx* z) {
			this->re += z->re;
                        this->im += z->im;	
		}

		void mul(Cplx& z) {
			int re = this->re;
			this->re = this->re*z.re - this->im*z.im;
			this->im = this->im*z.re + re*z.im;
		}

		void inc() {
			this->re++;
		}

		void show() {
			cout << re << "+" << im << "i" << endl;
		}

		Cplx operator++(int) {
			return Cplx(re++, im);
		}

		Cplx operator+(const Cplx& z) {
			return Cplx(re+z.re, im+z.im);
		}
		
	friend Cplx operator-(Cplx, Cplx);
	friend ostream& operator<<(ostream&,Cplx);
};

Cplx operator-(Cplx z1, Cplx z2) {
	return Cplx(z1.re-z2.re, z1.im-z2.im);
}

ostream& operator<<(ostream& os, Cplx z) {
	return os << z.re << "+" << z.im << "i";
}

int main() {
	Cplx z1(1,2);
	Cplx z2 = z1+z1;
	Cplx z3 = z1-z2;
	cout << z1 << endl;
	cout << z2 << endl;
	cout << z3++ << endl;
	cout << z3 << endl;
}

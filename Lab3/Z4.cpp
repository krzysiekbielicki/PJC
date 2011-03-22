#include <iostream>

using namespace std;

int main() {
	enum owoc{jablko, pomarancza, kiwi};
	owoc o1;
	o1 = jablko;
	cout << "o1 = " << o1 << endl;
	o1 = kiwi;
	cout << "o1 = " << o1 << endl;
}

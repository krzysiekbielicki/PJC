#include <iostream>

using namespace std;

int main() {
#ifdef EN
	#if defined(PL)
		#error "Cannot be both PL and EN!"
	#endif
	cout << "Hello" << endl;
#elif defined(PL)
	cout << "Witaj" << endl;
#else
	#error "Language not defined use -D EN or -D PL!"
#endif
}

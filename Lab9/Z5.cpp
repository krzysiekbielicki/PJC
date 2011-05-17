#include <iostream>

using namespace std;

class Hermetyzacja {
	public:
		int x;
	private:
		int y;
	protected:
		int z;
};


int main() {
	Hermetyzacja h;
	h.x = 1;
	*(&h.x + 1) = 2;
	h.y = 2;
}

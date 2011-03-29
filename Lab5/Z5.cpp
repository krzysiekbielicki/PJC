#include <iostream>

using namespace std;

struct el{
	el* next;
};

void fun(el* start, el* element) {
	cout << element->next << endl;
	if(element->next != start)
		fun(start, element->next);
}

int main() {
	el el1, el2, el3, el4;
	el1.next = &el2;
	el2.next = &el3;
	el3.next = &el4;
	el4.next = &el1;
	fun(&el1, &el1);
}

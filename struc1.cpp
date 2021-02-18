#include <iostream>
#include <string.h>
using namespace std;
struct Person

{
    char nam[20];
	int citizenship;
	int age;
};
int main(void) {
	struct Person p;

	//strcpy( person.name, "aziz");


    strcpy( p.nam, "C Programming");
	p.citizenship = 1;
	p.age = 27;
	cout << "Person citizenship: " << p.citizenship << endl;
	cout << "Person age: " << p.age << endl;
	cout << "Person age: " << p.nam << endl;


	return 0;

}

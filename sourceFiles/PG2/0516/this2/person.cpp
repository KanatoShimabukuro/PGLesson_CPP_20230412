#include <stdio.h>
#include "person.h"

Person::Person(char* name, int age) {
	this->name = name;
	this->age = age;
};

Person::~Person() {};

void Person::Show() {
	printf("%s ����̔N�� : %d\n", this->name, this->age);
	//printf("%s ����̔N�� : %d\n", name, age); // ����ł������ithis������ƔF���A�񐄏��j
};

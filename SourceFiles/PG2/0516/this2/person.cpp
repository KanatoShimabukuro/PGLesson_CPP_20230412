#include <stdio.h>
#include "person.h"

Person::Person(char* name, int age) {
	this->name = name;
	this->age = age;
};

Person::~Person() {};

void Person::Show() {
	printf("%s さんの年齢 : %d\n", this->name, this->age);
	//printf("%s さんの年齢 : %d\n", name, age); // これでも動く（thisがあると認識、非推奨）
};

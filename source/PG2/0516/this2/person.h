#pragma once

class Person {
private:
	char* name;
	int age;
public:
	Person(char*, int); // �ϐ����͏ȗ��\
	~Person();
	void Show();
};
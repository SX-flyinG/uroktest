#include <iostream>

using namespace std;

class Student {
	string name;
	int age;
public :
	Student() {
		name = "Botyslav";
		age = 22;
	}
	Student(string name, int age) {
		this->age = age;
		this->name = name;
	}
	Student(const Student& obj) {
		this->name = obj.name;
		this->age = obj.age;
	}

	void PrintInfoAboutStudent() {
		cout << "Name of student : " << this->name << endl;
		cout << "age of student : " << this->age << endl;
	}

	void ChangeInfoAbouStudent() {
		cout << "Enter a new name of student  : ";
		cin >> this->name;
		cout << "Enter a new age of student : ";
		cin >> this->age;
	}
};

int main()
{
	Student obj;
	obj.PrintInfoAboutStudent();
	obj.ChangeInfoAbouStudent();
	obj.PrintInfoAboutStudent();

	return 0;
}
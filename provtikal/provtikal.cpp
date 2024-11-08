#include <iostream>

using namespace std;

class Student {
	string name;
	string surname;
	int age;
public :
	Student() {
		name = "Botyslav";
		surname = "Linchevskiy";
		age = 22;
	}
	Student(string name, int age) {
		this->age = age;
		this->surname = surname;
		this->name = name;
	}
	Student(const Student& obj) {
		this->name = obj.name;
		this->age = obj.age;
		this->surname = obj.surname;
	}

	void PrintInfoAboutStudent() {
		cout << "Name of student : " << this->name << endl;
		cout << "Surname of Student : " << this->surname << endl;

		cout << "age of student : " << this->age << endl;
	}
		

	void ChangeInfoAbouStudent() {
		cout << "Enter a new name of student  : ";
		cin >> this->name;
		cout << "Enter a new age of student : ";
		cin >> this->age;
		cout << "Enter a new surname of student : ";
		cin >> this->surname;
	}

	string GetName() {
		return this->name;
	}
	string GetSurname() {
		return this->surname;
	}
	int GetAge() {
		return age;
	}
	void GetName(string name) {
		this->name = name;
	}
	void GetSurname(string surname) {
		this->surname;
	}
	void GetAge(int age) {
		this->age = age;
	}

};

class Group {
	Student* student;
	int amountOfStudents;
public:
	Group() {
		amountOfStudents = 1;
		student = new Student[amountOfStudents];
	}
	~Group() {
		delete[]student;
		student = nullptr;
	}

	string getName() {
		return this->name;
	}

	int getAge() {
		return this->age;
	}

	void setName(const string name) {
		this->name = name;
	}

	void setAge(const int age) {
		this->age = age;
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
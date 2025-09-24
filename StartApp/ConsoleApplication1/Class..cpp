// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

class Person
{
	std::string m_name = "hamza";
	int			m_id = 1;
	int			m_age = 20;
	int			m_height = 180;
public:
	Person() {}
	Person(std::string name, int id, int age, int height)
		: m_name(name), m_id(id), m_age(age), m_height(height)
	{

	}

	int getId() const {
		return m_id;
	}
	std::string getName()const {
		return m_name;
	}
	int getAge() const {
		return m_age;
	}
	int getHeight() const {
		return m_height;
	}

	void print() const {
		std::cout << "Id: " << m_id << "\n";
		std::cout << "Name: " << m_name << "\n";
		std::cout << "Age: " << m_age << "\n";
		std::cout << "Height: " << m_height << "\n";
	}


};

class Course {

	std::string m_name = "Course";
	std::vector<Person> m_students;
public:
	Course() {}
	Course(const std::string& name)
		: m_name(name)
	{
	}

	void addStudent(const Person& p) {
		m_students.push_back(p);
	}

	const std::vector<Person>& getStudents() const {
		return m_students;
	}

	void print() const {
		std::cout << "Course Name: " << m_name << "\n";
		std::cout << "Students: \n";
		for (const auto& student : m_students) {
			student.print();
			std::cout << "------------------\n";
		}
	}
};



int main(int argc, char* argv[])
{

	Person p1("hamza", 1, 20, 180);
	Person p2();
	const Person p3("ali", 2, 22, 175);
	//p3.print();

	Course c1("C++ Programming");
	c1.addStudent(p1);
	c1.addStudent(p3);

	c1.print();

	/*auto name = "hamza";
	std::cout << "Hello " << name << "!\n";
	std::cout << "Hello World!\n";*/
}


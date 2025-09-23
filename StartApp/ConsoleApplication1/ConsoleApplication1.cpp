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



int main(int argc, char * argv[])
{

	Person p1("hamza", 1, 20, 180);
	Person p2();
	const Person p3("ali", 2, 22, 175);
	p3.print();
	
    /*auto name = "hamza";
	std::cout << "Hello " << name << "!\n";
    std::cout << "Hello World!\n";*/
}

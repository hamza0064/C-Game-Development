// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void pp(int & a)
{
	std::cout << &a << " " << a << " " << sizeof(a) << "\n";
}


int main(int argc, char * argv[])
{

	int a = 10;
	int b = 25;

	int* pa = &a; //Pointer to a  and passing reference
	int* pb = &b; //Pointer to b  and passing reference

	*(pb - 1) = 15; //Changing value of a using pointer

	pp(a);
	pp(b);

	//int a = 10; //Stack memory
	//int b = 25;

	//int arr[5] = {1,2,3,4,5};
	////int * heapArr = new int[5]; //Heap memory

	//for (size_t i = 0; i < 5; i++)
	//{
	//	pp(arr[i]);
	//}
	/*for (size_t i = 0; i < 5; i++)
	{
		pp(heapArr[i]);
	}*/
	
	/*pp(a);
	pp(b);*/

	//Pointer example -----
	//std::string food = "Pizza";
	//std::string& meal = food;
	//meal += " is the best!";
	//std::cout << food << "\n";  // Outputs Pizza
	//std::cout << meal << "\n";  // Outputs Pizza
	return 0;
}

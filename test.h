#pragma once
#include <iostream>

class A
{
public:
	void display() const
	{
		std::cout << "A::display" << std::endl;
	}
};

template<typename T>
struct protobuf_type_trait
{
	static void save_item(unsigned short fsindex, const A& val)
	{
		val.display();
	}
};

template<> struct protobuf_type_trait<int>
{
	static void save_item(unsigned short fsindex, const int& val)
	{
		std::cout << "int" << std::endl;
	}
};

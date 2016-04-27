#include "test.h"
#include <iostream>

class B
{
public:
	void disp() const
	{
		std::cout<<"B::display"<<std::endl;
	}
};

template<>
struct protobuf_type_trait<B>
{
	static void save_item(unsigned short fsindex, const B& val)
	{
		val.disp();
	}
};

int main()
{
	return 0;
}
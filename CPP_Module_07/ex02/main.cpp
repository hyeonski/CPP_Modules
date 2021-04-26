#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *generate(void)
{
	int key = std::rand() % 3;
	switch (key)
	{
	case 0:
		std::cout << "created A" << std::endl;
		return new A;
	case 1:
		std::cout << "created B" << std::endl;
		return new B;
	case 2:
		std::cout << "created C" << std::endl;
		return new C;
	}
	return (NULL);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &temp = dynamic_cast<A &>(p);
		(void)temp;
		std::cout << "A" << std::endl;
		return;
	}
	catch (std::exception &e) {}
	try
	{
		B &temp = dynamic_cast<B &>(p);
		(void)temp;
		std::cout << "B" << std::endl;
		return;
	}
	catch (std::exception &e) {}
	try
	{
		C &temp = dynamic_cast<C &>(p);
		(void)temp;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	std::cout << "Error: Failed" << std::endl;
}

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		std::cout << "TEST " << i << std::endl;
		Base *test = generate();
		identify_from_pointer(test);
		identify_from_reference(*test);
		delete test;
		std::cout << std::endl;
	}
	return 0;
}
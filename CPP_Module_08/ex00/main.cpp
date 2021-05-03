#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <list>
#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <set>

int main(void) {
	std::cout << "\n\nvector\n\n";
	std::vector<int> put;
	std::vector<int> vector_fill(10, 100);
	put.push_back(10);
	put.push_back(20);
	put.push_back(30);

	std::cout << *easyfind(vector_fill, 100) << std::endl;
	std::cout << (easyfind(put, 100) == put.end() ? "END!" : "NOT END!") << std::endl;

	try
	{
		std::vector<int> test;
		std::cout << *easyfind(test, 100) << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	std::cout << "\n\ndeque\n\n";
	std::deque<int> back_front;
	std::deque<int> deque_fill(10, 100);
	back_front.push_back(10);
	back_front.push_back(20);
	back_front.push_front(30);
	back_front.push_front(2);

	std::cout << *easyfind(deque_fill, 100) << std::endl;
	std::cout << (easyfind(back_front, 100) == back_front.end() ? "END!" : "NOT END!") << std::endl;

	std::cout << "\n\nlist\n\n";
	std::list<int> list_put;
	std::list<int> list_fill(10, 100);
	list_put.push_back(10);
	list_put.push_back(20);
	list_put.push_back(30);

	std::cout << *easyfind(list_fill, 100) << std::endl;
	std::cout << (easyfind(list_put, 100) == list_put.end() ? "END!" : "NOT END!") << std::endl;

}

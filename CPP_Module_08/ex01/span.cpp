#include "span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span& ref)
{
	*this = ref;
}

Span& Span::operator=(const Span& ref)
{
	if (this != &ref)
	{
		_n = ref._n;
		_set.clear();
		_set = ref._set;
	}
	return (*this);
}

Span::~Span()
{
	_set.clear();
}

void Span::addNumber(int value)
{
	if (_set.size() == _n)
		throw Span::NoSpaceException();
	_set.insert(value);
}

unsigned long long Span::shortestSpan(void)
{
	if (_set.size() < 2)
		throw Span::NoSpanToFindException();
	std::multiset<int>::iterator curr = _set.begin();
	std::multiset<int>::iterator next = ++(_set.begin());
	unsigned long long shortest = static_cast<long long>(*next) - static_cast<long long>(*curr);
	unsigned long long span;
	while (next != _set.end())
	{
		span = static_cast<long long>(*next) - static_cast<long long>(*curr);
		if (span < shortest)
			shortest = span;
		curr++;
		next++;
	}
	return (shortest);
}

unsigned long long Span::longestSpan(void)
{
	if (_set.size() < 2)
		throw Span::NoSpanToFindException();
	unsigned long long result =
			static_cast<long long>(*_set.rbegin()) - static_cast<long long>(*_set.begin());
	return (result);
}

const char *Span::NoSpaceException::what() const throw()
{
	return ("FullSpanException: Cannot add, Full of Span!");
}

const char *Span::NoSpanToFindException::what() const throw()
{
	return ("NoSpanToFindException: Need more than two elem in Span!");
}
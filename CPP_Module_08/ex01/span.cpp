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
	int min = std::min_element(_set.begin(), _set.end());
	int min = std::min_element(_set.begin(), _set.end());
	return ();
}

const char *Span::NoSpaceException::what() const throw()
{
	return ("FullSpanException: Cannot add, Full of Span!");
}

const char *Span::NoSpanToFindException::what() const throw()
{
	return ("NoSpanToFindException: Need more than two elem in Span!");
}
#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>

class Span
{
private:
	unsigned int _n;
	std::multiset<int> _set;
public:
	Span();
	Span(unsigned int n);
	Span(const Span&);
	Span& operator=(const Span&);
	virtual ~Span();

	void addNumber(int value);
	unsigned long long shortestSpan(void);
	unsigned long long longestSpan(void);

	template <typename InputIterator>
	void addNumber(InputIterator first, InputIterator last)
	{
		for (InputIterator iter = first; iter != last; iter++)
			addNumber(*iter);
	}

	class NoSpaceException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	class NoSpanToFindException : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif

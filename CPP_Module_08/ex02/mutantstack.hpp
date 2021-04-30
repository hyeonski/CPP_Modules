#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	
public:
	MutantStack();
	MutantStack(const MutantStack&);
	MutantStack& operator=(const MutantStack&);
	virtual ~MutantStack();
};

#endif
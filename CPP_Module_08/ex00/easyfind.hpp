#ifndef EASYFIND_HPP
# define EASYFIND_HPP

class EmptyContainerError : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Error: EmptyContainerError");
	}
};

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	if (container.begin() == container.end())
		throw EmptyContainerError();
	return (std::find(container.begin(), container.end(), value));
}

#endif
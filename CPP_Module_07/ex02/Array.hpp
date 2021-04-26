#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	T* _array;
	unsigned int _length;
public:
	Array()
	{
		_array = NULL;
		_length = 0;
	}
	Array(unsigned int n)
	{
		_array = new T[n]();
		_length = n;
	}
	Array(const Array &);
	Array& operator=(const Array &);
	~Array();
};

#endif
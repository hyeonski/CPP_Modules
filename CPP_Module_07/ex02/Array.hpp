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
	Array(const Array &ref)
	{
		_array = new T[ref.size()];
		_length = ref.size();
		for (unsigned int i = 0; i < _length; i++)
			_array[i] = ref._array[i];
	}
	Array& operator=(const Array &ref)
	{
		if (this != &ref)
		{
			delete[] _array;
			_array = new T[ref.size()];
			_length = ref.size();
			for (unsigned int i = 0; i < _length; i++)
				_array[i] = ref._array[i];
		}
		return (*this);
	}
	T &operator[](unsigned int idx) const
	{
		if (idx >= _length)
			throw ArrayOutOfRangeException();
		return _array[idx];
	}
	virtual ~Array()
	{
		delete[] _array;
	}
	unsigned int size() const
	{
		return (_length);
	}
	class ArrayOutOfRangeException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("Error: Array: Out of range");
		}
	};
};

#endif
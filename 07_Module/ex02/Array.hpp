#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>
class Array 
{
	public:
		// Constructors
		Array(void) {
			array = NULL;
			size = 0;
		};

		Array(unsigned int n)
		{
			array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				array[i] = 0;
			_size = n;
		};

		Array(Array const &src)
		{
			array = new T[src.size()];
			_size = src.size();
			for (unsigned int i = 0; i < _size; i++)
				array[i] = src.array[i];
		}

		// Destructors
		~Array(void)
		{
			delete [] array;
		};
		
		class Exception : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error: index out of bounds";
				}
		};

		T& operator[](int index)
		{
			if (index < 0 || index >= (int)_size)
				throw Array::Exception();
			return array[index];
		};

		// Operators
		Array &operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				delete [] array;
				array = new T[rhs.size()];
				_size = rhs.size();
				for (unsigned int i = 0; i < _size; i++)
					array[i] = rhs[i];
			}
			return *this;
		}

		unsigned int size(void) const {return _size;};

	private:
		T *array;
		unsigned int _size;
};

#endif
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		
		MutantStack()
		{}
		MutantStack( MutantStack const & src )
		{
			*this = src;
		}
		MutantStack(iterator first, iterator last)
		{
			this->c.assign(first, last);
		}
		~MutantStack()
		{}

		MutantStack &		operator=( MutantStack const & rhs )
		{
			this->c = rhs.c;
			return *this;
		}

		iterator begin()
		{
			return this->c.begin();
		}
		const_iterator begin() const
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}
		const_iterator end() const
		{
			return this->c.end();
		}

	private:

};

// std::ostream &			operator<<( std::ostream & o, MutantStack const & i );

#endif /* ***************************************************** MUTANTSTACK_H */
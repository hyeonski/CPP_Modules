#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

class SuperMutant
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant& superMutant);
	SuperMutant &operator=(const SuperMutant &superMutant);
	~SuperMutant();
	
};

#endif
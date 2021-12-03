#include "ContBancar.h"

class Operatiuni
{
public:
	virtual float getSumaTotala() = 0;
	virtual float getDobanda() = 0;
	virtual void depunere() = 0;
	virtual void extragere() = 0;

};

class ContBancar
{
public:
	ContBancar()
	{
	}

	~ContBancar()
	{
	}

private:

};

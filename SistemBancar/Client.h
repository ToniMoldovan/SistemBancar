#pragma once
#include "ContBancar.h"
#include <string>
using namespace std;

class Client
{
private:
	string nume;
	string prenume;
	string adresa;
	size_t nrConturi;
	ContBancar conturi;

public:
	Client(); //Constructor
	Client(Client& obj); //Copy-Constructor
	~Client(); //Destructor

};


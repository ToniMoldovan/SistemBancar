#pragma once
#include <string>
#include "Client.h"
using namespace std;

class Banca
{
private:
	string codBanca;
	size_t nrClienti;
	Client* clienti;

public:
	Banca(); //Constructor
	Banca(Banca& obj); //Copy-Constructor
	~Banca(); //Destructor
};


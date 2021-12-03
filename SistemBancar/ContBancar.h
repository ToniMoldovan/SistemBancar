#pragma once
#include <string>
using namespace std;

class ContBancar
{
private:
	string numarCont;
	string Moneda;
	int suma;

public:
	ContBancar(); //Constructor
	ContBancar(ContBancar& obj); //Copy-Constructor
	~ContBancar(); //Destructor



};


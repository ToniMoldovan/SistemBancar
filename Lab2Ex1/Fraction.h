#pragma once
#ifndef __FRACTION__

static int CMMDC(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}

	return a;
}

class Fraction
{
	
public:
	Fraction(); //constructorul gol
	Fraction(int); // constructorul cu 1 parametru
	Fraction(int, int); //constructorul cu 2 parametrii
	Fraction(const Fraction& obj); //COPY-CONSTRUCTOR

	void Adunare(Fraction& obj2);
	void Scadere(Fraction& obj2);
	void Impartire(Fraction& obj2);
	void Inmultire(Fraction& obj2);

	void Simplificare();
	void Reciproc();
	bool Egal(const Fraction& obj);

	void Print();

	class EroareNumitorZero{};

private:
	int numarator;
	int numitor;

};
#endif // !__FRACTION__




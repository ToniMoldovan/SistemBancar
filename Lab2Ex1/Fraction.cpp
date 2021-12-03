#include "Fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction()
{
	this->numarator = 0;
	this->numitor = 1;
}

Fraction::Fraction(int numarator)
{
	this->numarator = numarator;
	this->numitor = 1;
}

Fraction::Fraction(int numarator, int numitor)
{
	this->numarator = numarator;
	this->numitor = numitor;
}

//Copy-Constructor
Fraction::Fraction(const Fraction& obj2)
{
	this->numarator = obj2.numarator;
	this->numitor = obj2.numitor;
}

void Fraction::Adunare(Fraction& obj2)
{
	int numarator2, numitor2;

    if (this->numitor != 0)
    {
        if (this->numitor == obj2.numitor)
        {
            numitor2 = this->numitor;
            numarator2 = this->numarator + obj2.numarator;

            cout << "Rezultat adunare: " << numarator2 << "/" << numitor2 << endl;

        }
        else
        {
            int aux = this->numitor;
            this->numarator = this->numarator * obj2.numitor;
            this->numitor = this->numitor * obj2.numitor;

            obj2.numarator = obj2.numarator * aux;
            obj2.numitor = obj2.numitor * aux;


            numitor2 = obj2.numitor;
            numarator2 = this->numarator + obj2.numarator;

            cout << "Rezultat adunare: " << numarator2 << "/" << numitor2 << endl;
        }
    }
    else
    {
        EroareNumitorZero exceptie;
        throw exceptie;
    }
}

void Fraction::Scadere(Fraction& obj2)
{
    int numarator2, numitor2;

    if (this->numitor != 0)
    {
        if (this->numitor == obj2.numitor)
        {
            numitor2 = this->numitor;
            numarator2 = this->numarator - obj2.numarator;

            cout << "Rezultat scadere: " << numarator2 << "/" << numitor2 << endl;
        }
        else
        {
            int aux = this->numitor;
            this->numarator = this->numarator * obj2.numitor;
            this->numitor = this->numitor * obj2.numitor;

            obj2.numarator = obj2.numarator * aux;
            obj2.numitor = obj2.numitor * aux;


            numitor2 = obj2.numitor;
            numarator2 = this->numarator - obj2.numarator;

            cout << "Rezultat scadere: " << numarator2 << "/" << numitor2 << endl;

        }
    }
    else
    {
        EroareNumitorZero exceptie;
        throw exceptie;
    }
}

void Fraction::Inmultire(Fraction& obj2)
{
    int numarator2, numitor2;

    if (this->numitor != 0)
    {
        cout << "Rezultatul inmultirii: " << this->numarator * obj2.numarator << "/" << this->numitor * obj2.numitor << endl;
    }
    else
    {
        EroareNumitorZero exceptie;
        throw exceptie;
    }
}

void Fraction::Impartire(Fraction& obj2)
{
    int numarator2, numitor2;

    if (this->numitor != 0)
    {
        cout << "Rezultatul impartirii: " << this->numarator * obj2.numitor << "/" << this->numitor * obj2.numarator << endl;
    }
    else
    {
        EroareNumitorZero exceptie;
        throw exceptie;
    }
}

void Fraction::Simplificare()
{
    if (this->numitor != 0)
    {
        int cmmdc = CMMDC(this->numarator, this->numitor);

        if (this->numarator == this->numitor)
        {
            cout << "Rezultatul simplificarii: 1" << endl;
        }
        else
        {
            if (this->numarator % this->numitor == 0)
            {
                cout << "Fractia nu se poate simplifica!\nRezultat: " << this->numarator / this->numitor << endl;
            }
            else
            {
                this->numarator = this->numarator / cmmdc;
                this->numitor = this->numitor / cmmdc;
                cout << "Rezultatul simplificarii: " << this->numarator << "/" << this->numitor << endl;

            }

        }
    }
    else
    {
        EroareNumitorZero exceptie;
        throw exceptie;
    }
}

void Fraction::Reciproc()
{
    int aux;

    if (this->numitor != 0)
    {
        cout << "Fractia initiala: " << this->numarator << "/" << this->numitor << endl;

        aux = this->numarator;
        this->numarator = this->numitor;
        this->numitor = aux;

        cout << "Fractia inversata: " << this->numarator << "/" << this->numitor << endl;
    }
    else
    {
        EroareNumitorZero exceptie;
        throw exceptie;
    }
}

bool Fraction::Egal(const Fraction& obj2)
{
    if (this->numarator == obj2.numarator)
    {
        if (this->numitor == obj2.numitor)
            return true;
    }

    return false;
}

void Fraction::Print()
{
    cout << "Numarator: " << this->numarator << "\tNumitor: " << this->numitor << endl;
}
#include "carre.h"
#include <iostream>
using namespace std;


void CCarre::Setsx(double sx1)
{
	this->sx = sx1;
}

void CCarre::Setsy(double sy1)
{
	this->sy = sy1;
}

void CCarre::SetCote(double cote1)
{
	this->cote = cote1;
}

int CCarre::Getsx()
{
	return this->sx;
}

int CCarre::Getsy()
{
	return this->sy;
}

unsigned int CCarre::GetCote()
{
	return this->cote;
}

void CCarre::Afficher()
{
	cout << "sx: " << this->sx << "; sy: " << this->sy << "; cote: " << this->cote << endl;
}

void CCarre::Deplacer(char direction, int saut)
{

}

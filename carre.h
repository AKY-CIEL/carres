#pragma once

// TP 06 Carr�
// Auteur : AKYUZ Hasan
// Date : 03/12/2024

/// brief Classe repr�sentant un carr�
class CCarre
{
private:
	// D�claration des coordonn�es x, y et cote
	double sx, sy, cote;
public:
	void Setsx(double sx1);
	void Setsy(double sy1);
	void SetCote(double cote1);
	int Getsx();
	int Getsy();
	unsigned int GetCote();
	void Afficher();
	void Deplacer(char direction, int saut);
};
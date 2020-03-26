#include <iostream>
#include <string>
#include "Etudiant.h"

using namespace std;

Etudiant::Etudiant()
{
	m_nom= "sylvain";
	m_note1=15;
	m_note2=5;
}

string Etudiant::getnom() const
{
	return m_nom;
}

void Etudiant::setnom(string nom) 
{
	m_nom = nom;
}

void Etudiant::getnote1() const
{
	return m_note1;
}

void Etudiant::setnote1(int note) 
{
	m_note1 = note;
}

void Etudiant::getnote2() const
{
	return m_note2;
}

void Etudiant::setnote2(int note2)
{
	m_note2 = note;
}

void Etudiant::Moyenne()
{
	float moyenne;
	moyenne = m_note1+m_note1;
	moyenne = moyenne/2;
	cout << "la moyenne est de:" << moyenne <<endl;
}



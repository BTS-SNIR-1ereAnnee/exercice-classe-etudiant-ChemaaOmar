#include <iostream>
#include <string>

#ifndef ETUDIANT_H
#define ETUDIANT_H

using namespace std;

class Etudiant
{
public:

Etudiant();

void getEtudient();
void setEtudiant(string nom);
void getnote1();
void getnote2();

void setEtudiant(string nom);
void setnote1(int note);
void setnote2(int note);
void moyenne();
private:

string m_nom;
int m_note1;
int m_note2;

};

#endif
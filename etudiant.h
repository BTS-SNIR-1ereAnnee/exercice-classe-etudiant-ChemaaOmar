#include <iostream>
#include <stdlib.h>

#ifdef ETUDIANT_H
#define ETUDIANT_H

using namespace std;

class etudiant{
public:

etudiant(string nom, int note1 , int note2);

void getnom();
void getnote1();
void getnote2();

void setnom();
void setnote1();
void setnote2();

private:

string m_nom;
int m_note1;
int m_note2;

};


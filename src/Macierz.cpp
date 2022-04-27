#include "Macierz.hh"
#include "Wektor.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Macierz, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac){

for(int i=0; i<ROZMIAR;i++)
Strm>>Mac.wek[i];

return Strm;

}

std::ostream& operator >> (std::ostream &Strm, Macierz &Mac){

for(int i=0; i<ROZMIAR;i++)
Strm<<Mac.wek[i];

return Strm;

}
#include "Wektor.hh"


/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */

Wektor Wektor::operator +(const Wektor &L1){
Wektor wynik;

for(int i=0;i<ROZMIAR;i++){
wynik[i]=this->wspolczynniki[i]+L1[i];
}
return wynik;
}

Wektor Wektor::operator -(const Wektor &L1){
Wektor wynik;

for(int i=0;i<ROZMIAR;i++){
wynik[i]=this->wspolczynniki[i]-L1[i];
}
return wynik;
}

Wektor Wektor::operator *(const double &L1){
Wektor wyn;

for(int i=0;i<ROZMIAR;i++){
this->wspolczynniki[i]*=L1;
}
return (*this);
}

Wektor Wektor::operator /(const double &L1){
Wektor wyn;

for(int i=0;i<ROZMIAR;i++){
this->wspolczynniki[i]/=L1;
}
return (*this);
}

std::istream &operator>>(std::istream &Str, Wektor &Wek){
for(int i=0;i<ROZMIAR;i++){
    Str>>Wek[i];    
}
return Str;
}


std::ostream &operator<<(std::ostream &Str, Wektor &Wek){
for(int i=0;i<ROZMIAR;i++){
    Str<<Wek[i];
}
return Str;
}
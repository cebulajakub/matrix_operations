#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
UkladRownanLiniowych   UklRown;   // To tylko przykladowe definicje zmiennej
cin>>UklRown;
  
  cout << endl << " Start programu " << endl << endl;
  cout<<UklRown;
  UklRown.obliczanie();
  
}

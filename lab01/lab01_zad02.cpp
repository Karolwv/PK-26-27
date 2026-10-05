/*
Napisz program, który:

wypisuje na ekran komunikat: „Podaj imie: ”,
wczytuje z klawiatury imię użytkownika,
wypisuje na ekran komunikat: „Siema …!” i podaje imię użytkownika.

Wyjście:

Podaj imię: Tomek
Siema Tomek!
*/





#include <iostream>


using namespace std;
int main() {

    string imie;
     cout << "Podaj imie: " ;
     cin >> imie;
     cout << "Siema " << imie << "!" << endl;

     return 0;
     

}
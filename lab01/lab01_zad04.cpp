#include <iostream>


using namespace std;
int main() {

 int A, B, C;

 cout << "A = ";
 cin >> A;

 cout << "B = ";
 cin >> B;

 cout << "C = ";
 cin >> C;

 cout << "Pole: " << 2 * (A * B + B * C + A * C) << endl;
 cout << "Objętość: " << A * B * C << endl;
     
return 0;

}
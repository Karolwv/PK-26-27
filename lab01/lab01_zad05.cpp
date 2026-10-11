#include <iostream>
#include <iomanip>

using namespace std;
int main() {

double R;
const double PI = 3.14;

cout << "R = ";
cin >> R;

cout << fixed << setprecision(2);
cout << "Obwód: " << 2 * PI * R << endl;
cout << "Pole: " << PI * R * R << endl;



    
return 0;

}
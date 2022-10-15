#include <iostream>

using namespace std;

int main()
{
   float a,b,c;
   cout<<"podaj liczbe a: ";
   cin>>a;
   cout<<"podaj liczbe b: ";
   cin>>b;
  c = a / b;
  if (a > 0 && b > 0 )
    cout << "wynik ilorazu: "<<c;
    else
        cout << "niepoprawne dane: ";

    return 0;
}

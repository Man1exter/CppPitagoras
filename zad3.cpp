#include <iostream>
#include <math.h>

using namespace std;

int main()
{

int a,b,c;
int delta;
int x1,x2;

   cout<<"podaj wartość a:"<< endl;
   cin>>a;
   cout<<"podaj wartość b:"<< endl;
   cin>>b;
   cout<<"podaj wartość c:"<< endl;
   cin>>c;


delta = b*b-4*a*c;

if (delta < 0){
    cout<<"Liczba pierwiastków równa się   0"<<endl;
}
if (delta == 0){
    cout<<"Liczba pierwiastków równa się   1"<<endl;
}
if (delta > 0){
    cout<<"Liczba pierwiastków równa się   2"<<endl;
    // 2 10 8 a b c
}


switch (delta)
{
    case 0:
   cout << "brak pierwiastkow rzeczywistych." << endl;
break;

    case 1:
   x1 = -b/(2*a);
   cout<<"x1 równa się"<<x1<<endl;
break;

    case 2:
   x1 = (-b-sqrt(delta))/(2*a); 
   x2 = (-b+sqrt(delta))/(2*a);
   
   cout<<"x1 równa się"<<x1<<endl;
   cout<<"x2 równa się"<<x2<<endl;
break;

}

return 0;
}
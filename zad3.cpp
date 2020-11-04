#include <iostream>
#include <math.h>

using namespace std;

int main()
{

int a,b,c;
int delta;

   cout<<"podaj wartość a:"<< endl;
   cin>>a;
   cout<<"podaj wartość b:"<< endl;
   cin>>b;
   cout<<"podaj wartość c:"<< endl;
   cin>>c;


delta = (b**2)-4*a*c;

if (delta < 0){
    cout<<"Liczba pierwiastków równa się   0"<<endl;
}
if (delta == 0){
    cout<<"Liczba pierwiastków równa się   1"<<endl;
}
if (delta > 0){
    cout<<"Liczba pierwiastków równa się   2"<<endl;
}


switch ()
{
    case 1:

break;

    case 2:

break;


}



return 0;
}
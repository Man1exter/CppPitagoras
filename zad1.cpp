#include <iostream>
#include <math.h>

using namespace std;

int main(){

    double a,b,c;
    int pitagoras;
    //a2 + b2 = c2
    

    cout << "Podaj bok a: "<<endl;
    cin>> a;

     cout << "Podaj bok b: "<<endl;
    cin>> b;

     cout << "Podaj bok c: "<<endl;
    cin>> c;

    pitagoras = a*2 + b*2 + c*2;

    if(pitagoras < 0){

    cout<<"Podane wartości nie mogą być mniejsze od 0"<<endl;
    
    } else {

    cout<<"wynik: "<<pitagoras<<endl;

    }


    return 0;

}
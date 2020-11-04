#include <iostream>
#include <math.h>
#include <stdio.h>

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


    if((a*a) + (b*b) == (c*c)){

    cout<<"trójkąt jest prostokątny"<<endl;
    // 6 8 10 będzie :)
    
    } else {

    cout<<"wartości nie mogą być mniejsze od 0"<<pitagoras<<endl;

    }


    return 0;

}
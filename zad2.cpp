#include <iostream>

using namespace std;

int main(){

float a,b,c;

cout<<"Podaj wartości i zobacz największą wartość z podanych"<< endl;

cout<<"Podaj wartość a: "<<endl;
cin >> a;

cout<<"Podaj wartość b: "<<endl;
cin >> b;

cout<<"Podaj wartość c: "<<endl;
cin >> c;

if ((a > b) && (a > c)) {

cout<< "największa wartość to a: "<< a <<endl;

} if ((b > a) && (b > c)) {

cout<< "największa wartość to b: "<< b <<endl;

} else {

cout<< "największa wartość to c: "<< c <<endl;

}

    return 0;
}
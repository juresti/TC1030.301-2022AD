//Codigo fuente
#include "Cafetera.hpp"
#include <string>
using namespace std;

Cafetera::Cafetera(string n,float c,int t) : capacidad{c},tazasXMin{t},nombre{n} {}
string Cafetera::toString(){
    return "Cafetera(" + to_string(capacidad) + "," + to_string(tazasXMin) + "," + 
            nombre + ")";
}

int operator +(const Cafetera& c1,const Cafetera& c2){
    return c1.tazasXMin + c2.tazasXMin;
}

int operator +(int num, const Cafetera& c){
    return num + c.tazasXMin;
}

//Programa de prueba
#include "Cafetera.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Cafetera c1{"De goteo",2.5,3};
    Cafetera c2{"Expresso",7.9,8};
    Cafetera c3{"Super",20,15};

    cout << c1.toString() << endl;
    cout << c2.toString() << endl;

    cout << c1 + c2 + c3 << endl;
    return 0;
}

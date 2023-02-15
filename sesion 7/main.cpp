#include "square.cpp"
#include "circle.cpp"

int main(){
    //Square
    // Constructor default
    Square sq1;
    // Constructor con parametro
    Square sq2(2.5);

    cout<<"Sq1: "<<sq1.getA()<<endl;
    cout<<"Sq2: "<<sq2.getA()<<endl;

    sq1.setA(3.2);
    sq2.setA(5.1);

    cout<<"Sq1: "<<sq1.getA()<<endl;
    cout<<"Sq2: "<<sq2.getA()<<endl;

    cout<<"Area del sq1: "<<sq1.area()<<endl;
    cout<<"Area del sq2: "<<sq2.area()<<endl;

    cout<<"Perimetro del sq1: "<<sq1.perimetro()<<endl;
    cout<<"Perimetro del sq2: "<<sq2.perimetro()<<endl;

    //Circle
    // Constructor default
    Circle c1;
    // Constructor con parametro
    Circle c2(2.5);

    cout<<"C1: "<<c1.getR()<<endl;
    cout<<"C2: "<<c2.getR()<<endl;

    c1.setR(3.2);
    c2.setR(5.1);

    cout<<"C1: "<<c1.getR()<<endl;
    cout<<"C2: "<<c2.getR()<<endl;

    cout<<"Area del c1: "<<c1.area()<<endl;
    cout<<"Area del c2: "<<c2.area()<<endl;

    cout<<"Perimetro del c1: "<<c1.perimetro()<<endl;
    cout<<"Perimetro del c2: "<<c2.perimetro()<<endl;

    return 0;
}
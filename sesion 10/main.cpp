#include "Perro.h"
#include "Gato.h"
#include "Gallina.h"

int main()
{
    Perro firulais;
    Gato michi(4, 2, true, true);
    Gallina gallina(2, 0, false, true);

    firulais.setPatas(4);
    firulais.setOrejas(2);
    firulais.setPelo(true);
    firulais.setCola(true);

    cout << "Michi, Patas: " << michi.getPatas() << ", Orejas: " << 
    michi.getOrejas() << ", Pelo: " << michi.getPelo() << ", cola: " << michi.getCola() << endl;
    
    cout<<"Firulais"<<endl;
    cout<<firulais.ladrar()<<endl;
    cout<<firulais.comer()<<endl;
    cout<<firulais.dormir()<<endl;
    
    cout<<"Michi"<<endl;
    cout<<michi.maullar()<<endl;
    cout<<michi.comer()<<endl;
    cout<<michi.dormir()<<endl;
    
    cout<<"Gallina"<<endl;
    cout<<gallina.cacarear()<<endl;
    cout<<gallina.comer()<<endl;
    cout<<gallina.dormir()<<endl;

    return 0;
}

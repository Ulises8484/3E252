#pragma once
#include <Foco. hpp>
class SerieNavidad
{
private:
    Foco focos[10];
public:
    SerieNavidad() {}
    ~SerieNavidad() {}
    void Encender() {}
    for (int numFoco = 0; numFoco < 10; numFoco++)
    {
        focos[numFoco].Apagar();

    }
    void Apagar(){
        for (int numFoco = 0; numFoco < 10)
        {
            /* code */
        }
        
    }

};

SerieNavidad::SerieNavidad(/* args */)
{
}

SerieNavidad::~SerieNavidad()
{
}

#pragma once
#include <EstadoFoco.hpp>

class Foco
{
    private:
        EstadoFoco foco;

    public:
    Foco() 
    {
        estado = false
    }
     ~Foco() {}
     void Encender() {
        estado = true
     }
     void Apagar() {
        estado = false
     }
     EstadoFoco MostrarEstado(){
        return estado;
     }

}
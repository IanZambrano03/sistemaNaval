#include <iostream>
#include "sistemaNaval.hpp"


int main(){
   
    Sistema sistemaDelBarco;

    auto currentStatus = sistemaDelBarco.currentMode();

    sistemaDelBarco.turnOn();
    currentStatus = sistemaDelBarco.currentMode();

    sistemaDelBarco.activate();
    currentStatus = sistemaDelBarco.currentMode();

    sistemaDelBarco.triggerEmergency();
    currentStatus = sistemaDelBarco.currentMode();

    sistemaDelBarco.resetToDefault();
    currentStatus = sistemaDelBarco.currentMode();

}

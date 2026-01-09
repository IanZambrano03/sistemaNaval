#include "sistemaNaval.hpp"

Sistema::Sistema(){
    mode_ = Sistema::ModoDeSistema::Offline;
}

Sistema::ModoDeSistema Sistema::currentMode() const{
    return mode_;
}

void Sistema::turnOn(){
    if (mode_ == Sistema::ModoDeSistema::Offline){
            mode_ = Sistema::ModoDeSistema::Standby;   
    } 
}

void Sistema::activate(){
    if (mode_ == Sistema::ModoDeSistema::Standby){
            mode_ = Sistema::ModoDeSistema::Operational;
    } 
}

void Sistema::triggerEmergency(){
    if (mode_ == Sistema::ModoDeSistema::Operational){
            mode_ = Sistema::ModoDeSistema::Emergency;
    } 
}

void Sistema::resetToDefault(){
    if (mode_ == Sistema::ModoDeSistema::Emergency){
            mode_ = Sistema::ModoDeSistema::Standby;
    } 
}


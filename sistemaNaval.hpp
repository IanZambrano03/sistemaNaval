
/* COMPLETAMENTE APAGADO 
    Offline = 0, 

    CON PODER, PERO NO ACTIVO 
    Standby = 1, 

    ACTIVO 
    Operational = 2,

    FALTA
     Emergency = 3
     */

class Sistema{

    public:

    enum class ModoDeSistema{Offline, Standby, Operational, Emergency};
    
    Sistema();

    void turnOn();
    void activate();
    void triggerEmergency();
    void resetToDefault();
   
    ModoDeSistema currentMode() const;
   
    private:

     ModoDeSistema mode_;
};



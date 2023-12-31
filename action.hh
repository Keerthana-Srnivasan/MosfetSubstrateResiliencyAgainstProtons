#ifndef ACTION_HH
#define ACTION_HH

#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4VUserActionInitialization.hh"
#include "C:\\Users\\Keerthana\\mosfet-substrate-testing\\generator.hh"

class ActionInitialization : public G4VUserActionInitialization{
    public:
        ActionInitialization();
        ~ActionInitialization();

        virtual void Build() const;
};

#endif
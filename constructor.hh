#ifndef CONSTRUCTOR_HH
#define CONSTRUCTOR_HH

#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4VUserDetectorConstruction.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4VPhysicalVolume.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4Box.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4PVPlacement.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4NistManager.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4SystemOfUnits.hh"

class SubstrateConstruction : public G4VUserDetectorConstruction { 
public:
    SubstrateConstruction(); // Constructor
    ~SubstrateConstruction(); // Destructor
    virtual G4VPhysicalVolume* Construct(); // Implement this method
};

#endif // CONSTRUCTOR_HH
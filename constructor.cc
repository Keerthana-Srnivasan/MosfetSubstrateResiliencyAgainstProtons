#include "C:\\Users\\Keerthana\\mosfet-substrate-testing\\constructor.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4NistManager.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4LogicalVolume.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4Box.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4PVPlacement.hh"

SubstrateConstruction::SubstrateConstruction() {
}

SubstrateConstruction::~SubstrateConstruction() {
}

G4VPhysicalVolume* SubstrateConstruction::Construct() {
    G4NistManager* nist = G4NistManager::Instance();
    G4Material* worldMat = nist->FindOrBuildMaterial("G4_Si");
    
    G4Box* solidWorld = new G4Box("solidWorld", 50, 50, 50);
    G4LogicalVolume* logicWorld = new G4LogicalVolume(solidWorld, worldMat, "logicWorld");
    
    G4VPhysicalVolume* physWorld = new G4PVPlacement(0, G4ThreeVector(0., 0., 0.), logicWorld, "physWorld", 0, false, 0, true);

    return physWorld;
}



#include <iostream>

#include "C:\\Users\\Keerthana\\geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4RunManager.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4UImanager.hh"
#include "C:\\Users\\Keerthana\\geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4VisManager.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4VisExecutive.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4UIExecutive.hh"

#include "C:\\Users\\Keerthana\\mosfet-substrate-testing\\constructor.hh"
#include "C:\\Users\\Keerthana\\mosfet-substrate-testing\\physics.hh"
#include "C:\\Users\\Keerthana\\mosfet-substrate-testing\\action.hh"
#include "C:\\Users\\Keerthana\\mosfet-substrate-testing\\generator.hh"

int main(int argc, char** argv){

    G4RunManager *runManager = new G4RunManager();

    runManager->SetUserInitialization(new SubstrateConstruction());
    runManager->SetUserInitialization(new MyPhysicsList());
    runManager->SetUserInitialization(new ActionInitialization());

    runManager->Initialize();

    G4UIExecutive *ui = new G4UIExecutive(argc, argv);

    G4VisManager *visManager = new G4VisExecutive();
    visManager->Initialize();

    G4UImanager *UImanager = G4UImanager::GetUIpointer();

    UImanager->ApplyCommand("/vis/open OGL");
    UImanager->ApplyCommand("/vis/viewer/set/viewpointVector 1 1 1");
    UImanager->ApplyCommand("/vis/drawVolume");

    std::cout << "Before SessionStart" << std::endl;
    ui->SessionStart();
    std::cout << "After SessionStart" << std::endl;

    return 0;
}



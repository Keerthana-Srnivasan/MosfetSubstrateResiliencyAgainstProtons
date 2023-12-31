#ifndef GENERATOR_HH
#define GENERATOR_HH

#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4VUserPrimaryGeneratorAction.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4ParticleGun.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4SystemOfUnits.hh"
#include "C:\\Users\\Keerthana\\Geant4\\INSTALL\\Geant4-11.2\\include\\Geant4\\G4ParticleTable.hh"

class PrimaryGenerator : public G4VUserPrimaryGeneratorAction{
    public:
        PrimaryGenerator();
        ~PrimaryGenerator();
        virtual void GeneratePrimaries(G4Event*);

    private:
        G4ParticleGun *fParticleGun;
};

#endif
#include "C:\\Users\\Keerthana\\mosfet-substrate-testing\\action.hh"

ActionInitialization :: ActionInitialization()
{}
ActionInitialization :: ~ActionInitialization()
{}

void ActionInitialization::Build() const{
    PrimaryGenerator *generator = new PrimaryGenerator();
    SetUserAction(generator);
}



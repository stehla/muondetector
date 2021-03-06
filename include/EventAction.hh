//
// Created by cgrubitz on 24.10.16.
//

#ifndef MUONDETECTOR_EVENTACTION_HH
#define MUONDETECTOR_EVENTACTION_HH

#include "G4UserEventAction.hh"
#include "globals.hh"


class EventAction :public G4UserEventAction{
public:
         EventAction();
         virtual ~EventAction();

         virtual void BeginOfEventAction(const G4Event*);
         virtual void EndOfEventAction(const G4Event*);
         void SetNeutrinoFound(G4bool b) {fNeutrinoFound = b;};

private:
         G4int fSCID1;
         G4int fSCID2;
        G4bool fNeutrinoFound;

};


#endif //MUONDETECTOR_EVENTACTION_HH

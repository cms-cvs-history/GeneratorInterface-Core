// -*- C++ -*-

// class MockHadronizer is an example of a class that models the
// Hadronizer concept.

#include "FWCore/ParameterSet/interface/ParameterSetfwd.h"

namespace HepMC
{
class GenEvent;
}


namespace edmtest
{
  class MockHadronizer
  {
  public:
    explicit MockHadronizer(edm::ParameterSet const& ps);

    // bool generatePartons();
    bool generatePartonsAndHadronize();
    bool hadronize();
    bool decay();
    bool initializeForExternalPartons();
    bool initializeForInternalPartons();
    bool declareStableParticles();

    const char* classname() const;
    
    HepMC::GenEvent* getGenEvent() { return fGenEvent; }
  
  private:
    HepMC::GenEvent* fGenEvent; 
  
  };
}

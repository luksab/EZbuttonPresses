// #############################################################################
// #
// # Scriptname : EZButtonPresses.h
// # Author     : Lukas Sabatschus
// # contact    : lukas@luksab.de
// # Date       : 06.08.2016

// # Description:
// # Headerfile for the EZbuttonPresses Library
// # 
// # Version    : 0.1
// #############################################################################
#ifndef EZbuttonPresses_h
#define EZbuttonPresses_h
#include "Arduino.h"
// *********************************************
// Library interface description
// *********************************************
class EZbuttonPresses
{
  public:
    EZbuttonPresses(int Pins[]);
    void check(boolean returnValue[]);

  private:

    int numPins;
    int * pins;
    boolean pressed[];
};

#endif

// #############################################################################
// #
// # Scriptname : EZbuttonPresses.cpp
// # Author     : Lukas Sabatschus
// # contact    : lukas@luksab.de
// # Date       : 06.08.2016

// # Description:
// # Sourcecode for the EZbuttonPresses Library
// # 
// # Version    : 0.1
// #############################################################################
#include "Arduino.h"
#include "EZbuttonPresses.h"
// *********************************************
// Public functions
// *********************************************
EZbuttonPresses::EZbuttonPresses(int * Pins)
{
    numPins=sizeof(Pins);
    pins = Pins;
    for(int i=0;i<numPins;i++)
	{
	    pinMode(pins[i],INPUT_PULLUP);
	}
}

void EZbuttonPresses::check(boolean returnValue[])
{
    for(int i=0;i<numPins;i++)
    {
	if(digitalRead(pins[i]) == LOW)
	{
	    if(pressed[i])
	    {
    	        returnValue[i] = false;
	    }
	    else
	    {
		returnValue[i] = true;
		pressed[i] = true;
	    }
	    
	}
	else
	{
	    pressed[i] = false;
	    returnValue[i] = false;
	}
    }
}

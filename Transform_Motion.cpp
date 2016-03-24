#include "Transform_Motion.h"


Transform_Motion::Transform_Motion(void)
{
}


Transform_Motion::~Transform_Motion(void)
{
}

pair<double,double>  Transform_Motion::Transform (double x , double y )
{
		// takes the object position in last frame and 
	    // the x ,y represents the center of the object 
	   // according to the known window size and the motor limit 
	   // it decides if the object is out of the window 
	   // the out put to be send to the serial communication to the arduino as pan and tilt movement
};
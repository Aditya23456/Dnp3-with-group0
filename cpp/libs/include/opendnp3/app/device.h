//
// Created by aditya on 11/20/16.
//

#ifndef OPENDNP3_DEVICE_H
#define OPENDNP3_DEVICE_H


#include "OctetData.h"

namespace opendnp3
{

/**
* Represents group 0 objects
*/
class Devicedata //: public OctetData
{
public:

    Devicedata() //: OctetData()
	{}

    Devicedata(char data[])
	{}

    Devicedata(const openpal::RSlice& buffer) //: OctetData(buffer)
	{}

};

}
#endif //OPENDNP3_DEVICE_H

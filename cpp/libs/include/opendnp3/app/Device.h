//
// Created by aditya on 11/20/16.
//

#ifndef OPENDNP3_DEVICE_H
#define OPENDNP3_DEVICE_H


#include "Basedevice.h"
#include <string>

namespace opendnp3
{

/**
* Represents group 0 objects
*/
class Devicedata : public Device<std::string>
{

private:

public:

    Devicedata()
	{}

    Devicedata(std::string data) : Device(data){}

    Devicedata(std::string data, const openpal::RSlice &buffer) : Device(data) {}

};

}
#endif //OPENDNP3_DEVICE_H

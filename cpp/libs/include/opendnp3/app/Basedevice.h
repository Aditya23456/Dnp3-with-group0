//
// Created by aditya on 12/9/16.
//

#ifndef OPENDNP3_BASEDEVICE_H
#define OPENDNP3_BASEDEVICE_H

#include <string>
#include <openpal/container/RSlice.h>
#include <openpal/container/StaticBuffer.h>

namespace opendnp3
{

/**
* A base-class for device attributes
*/
    template <class T>
   class Device
{
    public:
        T value;
        typedef T Type;
    protected:
       Device(): value() {}
       Device(std::string data): value(data){}
    };

}

#endif //OPENDNP3_BASEDEVICE_H

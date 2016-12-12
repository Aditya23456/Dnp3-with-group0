//
// Created by aditya on 11/18/16.
//

#ifndef OPENDNP3_GROUP0_H
#define OPENDNP3_GROUP0_H

#include "opendnp3/app/GroupVariationID.h"
#include <openpal/container/RSlice.h>
#include <openpal/container/WSlice.h>
#include <opendnp3/app/Device.h>
#include "opendnp3/app/MeasurementTypes.h"
#include "opendnp3/app/DNP3Serializer.h"
#include <string>
namespace opendnp3 {

// Device attribute

    struct Group0Var250
    {
        static GroupVariationID ID() { return GroupVariationID(0, 250); }

        Group0Var250();

        static bool Read(openpal::RSlice &, Group0Var250 &);

        std::string data;
        typedef Devicedata Target;
        static bool ReadTarget(openpal::RSlice&, Devicedata&);


      //static DNP3Serializer<Devicedata> Inst() { return DNP3Serializer<Devicedata>(ID(), uint32_t , &ReadTarget); }
    };
}

#endif //OPENDNP3_GROUP0_H

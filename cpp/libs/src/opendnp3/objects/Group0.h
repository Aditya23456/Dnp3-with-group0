//
// Created by aditya on 11/18/16.
//

#ifndef OPENDNP3_GROUP0_H
#define OPENDNP3_GROUP0_H

#include "opendnp3/app/GroupVariationID.h"
#include <openpal/container/RSlice.h>
#include <openpal/container/WSlice.h>
#include <opendnp3/app/device.h>
#include "opendnp3/app/MeasurementTypes.h"
#include "opendnp3/app/DNP3Serializer.h"

namespace opendnp3 {

// Device attribute

    struct Group0Var250
    {
        static GroupVariationID ID() { return GroupVariationID(0, 250); }

        Group0Var250();

        static bool Read(openpal::RSlice &, Group0Var250 &);
        static bool Write(const Group0Var250 &, openpal::WSlice &);

        char data[];
        typedef Devicedata Target;
        static bool ReadTarget(openpal::RSlice&, Devicedata&);
        static bool WriteTarget(const Devicedata &, openpal::WSlice &);

      // static DNP3Serializer<Devicedata> Inst() { return DNP3Serializer<Devicedata>(ID(), uint32_t , &ReadTarget, &WriteTarget); }
    };

// VStr Command - CROB
    struct Group0Var252 {
        static GroupVariationID ID() { return GroupVariationID(0, 252); }

        Group0Var252();

        static uint32_t Size() { return 1; }

        static bool Read(openpal::RSlice &, Group0Var252 &);

        static bool Write(const Group0Var252 &, openpal::WSlice &);

        double data;
        typedef Binary Target;

        static bool ReadTarget(openpal::RSlice &, Group0Var250 &);

        static bool WriteTarget(const Binary &, openpal::WSlice &);

//        static DNP3Serializer<VStr> Inst() { return DNP3Serializer<VStr>(ID(), Size(), &ReadTarget, &WriteTarget); }
    };
}

#endif //OPENDNP3_GROUP0_H

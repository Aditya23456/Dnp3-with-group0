//
// Created by aditya on 11/18/16.
//

#include "Group0.h"
#include "opendnp3/app/MeasurementFactory.h"
#include <openpal/serialization/Parse.h>
using namespace openpal;

namespace opendnp3 {


// ------- Group0Var250 -------

    Group0Var250::Group0Var250() : data() {}

    bool Group0Var250::Read(RSlice &buffer, Group0Var250& output) {
        return Parse::Many(buffer,  output.data);
    }

    bool Group0Var250::ReadTarget(RSlice &buffer, Devicedata& output) {
        Group0Var250 value;
        if (Read(buffer, value)) {
        output = Devicefactory::From(value.data);
            return true;
        } else {
            return false;
        }
    }
}
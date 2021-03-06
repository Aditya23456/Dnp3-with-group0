/*
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */
#include "SelectedRanges.h"

#include "opendnp3/app/TimeAndInterval.h"
#include "opendnp3/app/MeasurementTypes.h"
#include "opendnp3/app/SecurityStat.h"

namespace opendnp3
{

bool SelectedRanges::HasAnySelection() const
{
	return
	    binaries.IsValid() ||
	    doubleBinaries.IsValid() ||
	    analogs.IsValid() ||
	    counters.IsValid() ||
	    frozenCounters.IsValid() ||
	    binaryOutputStatii.IsValid() ||
	    analogOutputStatii.IsValid() ||
	    timeAndIntervals.IsValid() ||
	    securityStats.IsValid();
}

template <>
Range& SelectedRanges::GetRangeRef<Binary>()
{
	return binaries;
}

template <>
Range& SelectedRanges::GetRangeRef<DoubleBitBinary>()
{
	return doubleBinaries;
}

template <>
Range& SelectedRanges::GetRangeRef<Analog>()
{
	return analogs;
}

template <>
Range& SelectedRanges::GetRangeRef<Counter>()
{
	return counters;
}

template <>
Range& SelectedRanges::GetRangeRef<FrozenCounter>()
{
	return frozenCounters;
}

template <>
Range& SelectedRanges::GetRangeRef<BinaryOutputStatus>()
{
	return binaryOutputStatii;
}

template <>
Range& SelectedRanges::GetRangeRef<AnalogOutputStatus>()
{
	return analogOutputStatii;
}

template <>
Range& SelectedRanges::GetRangeRef<TimeAndInterval>()
{
	return timeAndIntervals;
}

template <>
Range& SelectedRanges::GetRangeRef<SecurityStat>()
{
	return securityStats;
}

}



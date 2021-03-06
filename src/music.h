#pragma once

#include "types.h"

// equal temp tuning table for 1v/oct on 12bit dac with 10v range

// for i in range(0,120):
// print '%.f, ' % (i * 4092.0 / 120.0)
extern const uint16_t ET[120];

// scale mode intervals
extern const uint8_t SCALE_INT[7][7];
// Copyright 2023 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "snrt.h"

//================================================================================
// Data
//================================================================================

volatile uint32_t _snrt_mutex;
volatile snrt_barrier_t _snrt_barrier;
volatile uint32_t _reduction_result;

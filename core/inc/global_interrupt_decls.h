// Copyright 2023 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <stdint.h>

static inline void snrt_int_sw_clear(uint32_t hartid);

static inline void snrt_int_sw_set(uint32_t hartid);

static inline uint32_t snrt_int_sw_get(uint32_t hartid);

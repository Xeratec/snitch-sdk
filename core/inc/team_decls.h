// Copyright 2023 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include <stdint.h>

static inline uint32_t __attribute__((const)) snrt_hartid();
static inline uint32_t __attribute__((const)) snrt_cluster_num();
static inline uint32_t __attribute__((const)) snrt_cluster_core_num();
static inline uint32_t __attribute__((const)) snrt_global_core_base_hartid();
static inline uint32_t __attribute__((const)) snrt_global_core_num();
static inline uint32_t __attribute__((const)) snrt_global_core_idx();
static inline uint32_t __attribute__((const)) snrt_cluster_idx();
static inline uint32_t __attribute__((const)) snrt_cluster_core_idx();
static inline uint32_t __attribute__((const)) snrt_cluster_dm_core_num();
static inline uint32_t __attribute__((const)) snrt_cluster_compute_core_num();
static inline int __attribute__((const)) snrt_is_compute_core();
static inline int __attribute__((const)) snrt_is_dm_core();

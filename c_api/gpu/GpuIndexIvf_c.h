/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

// Copyright 2004-present Facebook. All Rights Reserved.
// -*- c -*-

#ifndef FAISS_GPU_IVF_C_H
#define FAISS_GPU_IVF_C_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/// converts any GPU index inside gpu_index to a CPU index
int GetNumOfProbesGpu(void* gpu_index);
void SetAmountOfProbes(void* gpu_index,int probes);

#ifdef __cplusplus
}
#endif
#endif

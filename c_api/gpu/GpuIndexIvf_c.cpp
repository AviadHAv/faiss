/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

// Copyright 2004-present Facebook. All Rights Reserved.
// -*- c++ -*-

#include "GpuIndexIvf_c.h"
#include "GpuIndex_c.h"
#include <faiss/gpu/GpuIndexIVF.h>
#include "macros_impl.h"
#include <iostream>


using faiss::gpu::GpuIndexIVF;

int GetNumOfProbesGpu(void *gpu_index) {
    GpuIndexIVF *index = static_cast<GpuIndexIVF*>(gpu_index);
    std::cout << "probes=====" << index->getNumProbes() << std::endl;
    return index->getNumProbes();
}

void SetAmountOfProbes(void *gpu_index,int probes) {
    GpuIndexIVF *index = static_cast<GpuIndexIVF*>(gpu_index);
   index->setNumProbes(probes);
 }
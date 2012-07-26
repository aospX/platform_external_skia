/*
 * Copyright 2012 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */
#ifndef SkCachePreload_arm_DEFINED
#define SkCachePreload_arm_DEFINED

// This file defines macros for preload instructions for ARM. These macros
// are designed to be embedded inside GNU inline assembly.
// For the use of these macros, __ARM_USE_PLD needs to be enabled. The cache
// line size also needs to be known (and needs to be contained inside
// __ARM_CACHE_LINE_SIZE).

#define PLD(x, n)           "pld        [%["#x"], #("#n")]\n\t"
#define PLD64(x, n)      PLD(x, n)
#define PLD128(x, n)         PLD64(x, n) PLD64(x, (n) + 64)

#endif  // SkCachePreload_arm_DEFINED

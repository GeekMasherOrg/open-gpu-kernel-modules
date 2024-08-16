/*
 * SPDX-FileCopyrightText: Copyright (c) 2024 NVIDIA CORPORATION & AFFILIATES
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __gb100_dev_fsp_addendum_h__
#define __gb100_dev_fsp_addendum_h__

#define NV_GFW_FSP_UCODE_VERSION        NV_PFSP_FALCON_COMMON_SCRATCH_GROUP_3(1)
#define NV_GFW_FSP_UCODE_VERSION_FULL   11:0
#define NV_GFW_FSP_UCODE_VERSION_MAJOR  11:8
#define NV_GFW_FSP_UCODE_VERSION_MINOR  7:0

#define NV_PFSP_FUSE_ERROR_CHECK                                        NV_PFSP_FALCON_COMMON_SCRATCH_GROUP_3(3)
#define NV_PFSP_FUSE_ERROR_CHECK_STATUS                                 31:0
#define NV_PFSP_FUSE_ERROR_CHECK_STATUS_SUCCESS                         0x00000000

#endif // __gb100_dev_fsp_addendum_h__

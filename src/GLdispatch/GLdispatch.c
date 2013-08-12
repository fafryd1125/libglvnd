/*
 * Copyright (c) 2013, NVIDIA CORPORATION.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and/or associated documentation files (the
 * "Materials"), to deal in the Materials without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Materials, and to
 * permit persons to whom the Materials are furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * unaltered in all copies or substantial portions of the Materials.
 * Any additions, deletions, or changes to the original source files
 * must be clearly indicated in accompanying documentation.
 *
 * If only executable code is distributed, then the accompanying
 * documentation must state that "this software is based in part on the
 * work of the Khronos Group."
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
 */

#include <string.h>
#include <pthread.h>

#include "GLdispatch.h"

void __glDispatchInit(GLVNDPthreadFuncs *funcs)
{
    /* TODO */
}

PUBLIC __GLdispatchProc __glDispatchGetProcAddress(const char *procName)
{
    return NULL; /* TODO */
}

PUBLIC void __glDispatchSetEntry(__GLdispatchTable *dispatch,
                                 GLint offset,
                                 __GLdispatchProc addr)
{
    /* TODO: set the dispatch table proc at <offset> to <addr> */
}

GLint __glDispatchGetOffset(const char *procName)
{
    /* TODO: get the offset from glapi */
    return -1;
}

PUBLIC __GLdispatchTable *__glDispatchCreateTable(__GLgetProcAddressCallback getProcAddress,
                                                  __GLgetDispatchProtoCallback getDispatchProto,
                                                  __GLdestroyVendorDataCallback destroyVendorData,
                                                  void *vendorData)
{
    return NULL; /* TODO */
}

PUBLIC void __glDispatchDestroyTable(__GLdispatchTable *dispatch)
{
    /* TODO */
}

PUBLIC void __glDispatchMakeCurrent(__GLdispatchAPIState *apiState)
{
    /* TODO */
}

PUBLIC void __glDispatchLoseCurrent(void)
{
    /* TODO */
}
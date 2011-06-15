/*----------------------------------------------------------------------------
 ADOL-C -- Automatic Differentiation by Overloading in C++
 File:     fos_forward_mpi.c
 Revision: $Id$
 Contents: fos_forward_mpi (first-order-scalar parallel forward mode)

 Copyright (c) Bejnamin Letschert

 This file is part of ADOL-C. This software is provided as open source.
 Any use, reproduction, or distribution of the software constitutes
 recipient's acceptance of the terms of the accompanying license file.

----------------------------------------------------------------------------*/
#include <adolc/common.h>
#ifdef HAVE_MPI
#define _MPI_FOS_ 1
#define _MPI_ 1
#define _FOS_ 1
#define _KEEP_ 1
#include "uni5_for.c"
#undef _KEEP_
#undef _FOS_
#undef _MPI_
#undef _MPI_FOS_
#endif
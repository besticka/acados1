/*
 * Copyright 2019 Gianluca Frison, Dimitris Kouzoupis, Robin Verschueren, Andrea Zanelli, Niels van Duijkeren, Jonathan Frey, Tommaso Sartor, Branimir Novoselnik, Rien Quirynen, Rezart Qelibari, Dang Doan, Jonas Koenemann, Yutao Chen, Tobias Schöls, Jonas Schlagenhauf, Moritz Diehl
 *
 * This file is part of acados.
 *
 * The 2-Clause BSD License
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ACADOS_UTILS_TYPES_H_
#define ACADOS_UTILS_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#define MAX_STR_LEN 256
#define ACADOS_EPS 1e-12
#define ACADOS_NEG_INFTY -1.0e9
#define ACADOS_POS_INFTY +1.0e9
#define UNUSED(x) ((void)(x))



typedef double real_t;
typedef int int_t;



typedef int (*casadi_function_t)(const double** arg, double** res, int* iw, double* w, void* mem);



// enum of return values
enum return_values
{
    ACADOS_SUCCESS,
    ACADOS_FAILURE,
    ACADOS_MAXITER,
    ACADOS_MINSTEP,
    ACADOS_QP_FAILURE,
    ACADOS_READY,
};



// opts values ( please keep in alphabetical order ! )
// TODO outdated, proably remove !!!!!!!!!
enum acados_opts
{
    COMPUTE_ADJ,
//    COMPUTE_DUAL_SOL,
};



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  // ACADOS_UTILS_TYPES_H_

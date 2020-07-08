/* ************************************************************************
 * Copyright (c) 2020 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * ************************************************************************ */

#include "rocsparse.h"

#include "rocsparse_gemmi.hpp"

/*
 * ===========================================================================
 *    C wrapper
 * ===========================================================================
 */

extern "C" rocsparse_status rocsparse_sgemmi(rocsparse_handle          handle,
                                             rocsparse_operation       trans_A,
                                             rocsparse_operation       trans_B,
                                             rocsparse_int             m,
                                             rocsparse_int             n,
                                             rocsparse_int             k,
                                             rocsparse_int             nnz,
                                             const float*              alpha,
                                             const float*              A,
                                             rocsparse_int             lda,
                                             const rocsparse_mat_descr descr,
                                             const float*              csr_val,
                                             const rocsparse_int*      csr_row_ptr,
                                             const rocsparse_int*      csr_col_ind,
                                             const float*              beta,
                                             float*                    C,
                                             rocsparse_int             ldc)
{
    return rocsparse_gemmi_template(handle,
                                    trans_A,
                                    trans_B,
                                    m,
                                    n,
                                    k,
                                    nnz,
                                    alpha,
                                    A,
                                    lda,
                                    descr,
                                    csr_val,
                                    csr_row_ptr,
                                    csr_col_ind,
                                    beta,
                                    C,
                                    ldc);
}

extern "C" rocsparse_status rocsparse_dgemmi(rocsparse_handle          handle,
                                             rocsparse_operation       trans_A,
                                             rocsparse_operation       trans_B,
                                             rocsparse_int             m,
                                             rocsparse_int             n,
                                             rocsparse_int             k,
                                             rocsparse_int             nnz,
                                             const double*             alpha,
                                             const double*             A,
                                             rocsparse_int             lda,
                                             const rocsparse_mat_descr descr,
                                             const double*             csr_val,
                                             const rocsparse_int*      csr_row_ptr,
                                             const rocsparse_int*      csr_col_ind,
                                             const double*             beta,
                                             double*                   C,
                                             rocsparse_int             ldc)
{
    return rocsparse_gemmi_template(handle,
                                    trans_A,
                                    trans_B,
                                    m,
                                    n,
                                    k,
                                    nnz,
                                    alpha,
                                    A,
                                    lda,
                                    descr,
                                    csr_val,
                                    csr_row_ptr,
                                    csr_col_ind,
                                    beta,
                                    C,
                                    ldc);
}

extern "C" rocsparse_status rocsparse_cgemmi(rocsparse_handle               handle,
                                             rocsparse_operation            trans_A,
                                             rocsparse_operation            trans_B,
                                             rocsparse_int                  m,
                                             rocsparse_int                  n,
                                             rocsparse_int                  k,
                                             rocsparse_int                  nnz,
                                             const rocsparse_float_complex* alpha,
                                             const rocsparse_float_complex* A,
                                             rocsparse_int                  lda,
                                             const rocsparse_mat_descr      descr,
                                             const rocsparse_float_complex* csr_val,
                                             const rocsparse_int*           csr_row_ptr,
                                             const rocsparse_int*           csr_col_ind,
                                             const rocsparse_float_complex* beta,
                                             rocsparse_float_complex*       C,
                                             rocsparse_int                  ldc)
{
    return rocsparse_gemmi_template(handle,
                                    trans_A,
                                    trans_B,
                                    m,
                                    n,
                                    k,
                                    nnz,
                                    alpha,
                                    A,
                                    lda,
                                    descr,
                                    csr_val,
                                    csr_row_ptr,
                                    csr_col_ind,
                                    beta,
                                    C,
                                    ldc);
}

extern "C" rocsparse_status rocsparse_zgemmi(rocsparse_handle                handle,
                                             rocsparse_operation             trans_A,
                                             rocsparse_operation             trans_B,
                                             rocsparse_int                   m,
                                             rocsparse_int                   n,
                                             rocsparse_int                   k,
                                             rocsparse_int                   nnz,
                                             const rocsparse_double_complex* alpha,
                                             const rocsparse_double_complex* A,
                                             rocsparse_int                   lda,
                                             const rocsparse_mat_descr       descr,
                                             const rocsparse_double_complex* csr_val,
                                             const rocsparse_int*            csr_row_ptr,
                                             const rocsparse_int*            csr_col_ind,
                                             const rocsparse_double_complex* beta,
                                             rocsparse_double_complex*       C,
                                             rocsparse_int                   ldc)
{
    return rocsparse_gemmi_template(handle,
                                    trans_A,
                                    trans_B,
                                    m,
                                    n,
                                    k,
                                    nnz,
                                    alpha,
                                    A,
                                    lda,
                                    descr,
                                    csr_val,
                                    csr_row_ptr,
                                    csr_col_ind,
                                    beta,
                                    C,
                                    ldc);
}
//
// Copyright (c) 2003--2009
// Toon Knapen, Karl Meerbergen, Kresimir Fresl,
// Thomas Klimpel and Rutger ter Borg
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// THIS FILE IS AUTOMATICALLY GENERATED
// PLEASE DO NOT EDIT!
//

#ifndef BOOST_NUMERIC_BINDINGS_BLAS_DETAIL_BLAS_NAMES_H
#define BOOST_NUMERIC_BINDINGS_BLAS_DETAIL_BLAS_NAMES_H

#include <Core/Utils/numeric/bindings/detail/config/fortran.hpp>

//
// BLAS level1 routines
//

// Value-type variants of asum
#define BLAS_SASUM FORTRAN_ID2( sasum, SASUM )
#define BLAS_DASUM FORTRAN_ID2( dasum, DASUM )
#define BLAS_SCASUM FORTRAN_ID2( scasum, SCASUM )
#define BLAS_DZASUM FORTRAN_ID2( dzasum, DZASUM )

// Value-type variants of axpy
#define BLAS_SAXPY FORTRAN_ID2( saxpy, SAXPY )
#define BLAS_DAXPY FORTRAN_ID2( daxpy, DAXPY )
#define BLAS_CAXPY FORTRAN_ID2( caxpy, CAXPY )
#define BLAS_ZAXPY FORTRAN_ID2( zaxpy, ZAXPY )

// Value-type variants of copy
#define BLAS_SCOPY FORTRAN_ID2( scopy, SCOPY )
#define BLAS_DCOPY FORTRAN_ID2( dcopy, DCOPY )
#define BLAS_CCOPY FORTRAN_ID2( ccopy, CCOPY )
#define BLAS_ZCOPY FORTRAN_ID2( zcopy, ZCOPY )

// Value-type variants of dot
#define BLAS_SDOT FORTRAN_ID2( sdot, SDOT )
#define BLAS_DDOT FORTRAN_ID2( ddot, DDOT )
#define BLAS_CDOTU FORTRAN_ID2( cdotu, CDOTU )
#define BLAS_ZDOTU FORTRAN_ID2( zdotu, ZDOTU )

// Value-type variants of dotc
#define BLAS_CDOTC FORTRAN_ID2( cdotc, CDOTC )
#define BLAS_ZDOTC FORTRAN_ID2( zdotc, ZDOTC )

// Value-type variants of iamax
#define BLAS_ISAMAX FORTRAN_ID2( isamax, ISAMAX )
#define BLAS_IDAMAX FORTRAN_ID2( idamax, IDAMAX )
#define BLAS_ICAMAX FORTRAN_ID2( icamax, ICAMAX )
#define BLAS_IZAMAX FORTRAN_ID2( izamax, IZAMAX )

// Value-type variants of nrm2
#define BLAS_SNRM2 FORTRAN_ID2( snrm2, SNRM2 )
#define BLAS_DNRM2 FORTRAN_ID2( dnrm2, DNRM2 )
#define BLAS_SCNRM2 FORTRAN_ID2( scnrm2, SCNRM2 )
#define BLAS_DZNRM2 FORTRAN_ID2( dznrm2, DZNRM2 )

// Value-type variants of prec_dot
#define BLAS_DSDOT FORTRAN_ID2( dsdot, DSDOT )

// Value-type variants of rot
#define BLAS_SROT FORTRAN_ID2( srot, SROT )
#define BLAS_DROT FORTRAN_ID2( drot, DROT )
#define BLAS_CSROT FORTRAN_ID2( csrot, CSROT )
#define BLAS_ZDROT FORTRAN_ID2( zdrot, ZDROT )

// Value-type variants of rotg
#define BLAS_SROTG FORTRAN_ID2( srotg, SROTG )
#define BLAS_DROTG FORTRAN_ID2( drotg, DROTG )
#define BLAS_CROTG FORTRAN_ID2( crotg, CROTG )
#define BLAS_ZROTG FORTRAN_ID2( zrotg, ZROTG )

// Value-type variants of rotm
#define BLAS_SROTM FORTRAN_ID2( srotm, SROTM )
#define BLAS_DROTM FORTRAN_ID2( drotm, DROTM )

// Value-type variants of rotmg
#define BLAS_SROTMG FORTRAN_ID2( srotmg, SROTMG )
#define BLAS_DROTMG FORTRAN_ID2( drotmg, DROTMG )

// Value-type variants of scal
#define BLAS_SSCAL FORTRAN_ID2( sscal, SSCAL )
#define BLAS_DSCAL FORTRAN_ID2( dscal, DSCAL )
#define BLAS_CSSCAL FORTRAN_ID2( csscal, CSSCAL )
#define BLAS_ZDSCAL FORTRAN_ID2( zdscal, ZDSCAL )
#define BLAS_CSCAL FORTRAN_ID2( cscal, CSCAL )
#define BLAS_ZSCAL FORTRAN_ID2( zscal, ZSCAL )

// Value-type variants of swap
#define BLAS_SSWAP FORTRAN_ID2( sswap, SSWAP )
#define BLAS_DSWAP FORTRAN_ID2( dswap, DSWAP )
#define BLAS_CSWAP FORTRAN_ID2( cswap, CSWAP )
#define BLAS_ZSWAP FORTRAN_ID2( zswap, ZSWAP )

//
// BLAS level2 routines
//

// Value-type variants of gbmv
#define BLAS_SGBMV FORTRAN_ID2( sgbmv, SGBMV )
#define BLAS_DGBMV FORTRAN_ID2( dgbmv, DGBMV )
#define BLAS_CGBMV FORTRAN_ID2( cgbmv, CGBMV )
#define BLAS_ZGBMV FORTRAN_ID2( zgbmv, ZGBMV )

// Value-type variants of gemv
#define BLAS_SGEMV FORTRAN_ID2( sgemv, SGEMV )
#define BLAS_DGEMV FORTRAN_ID2( dgemv, DGEMV )
#define BLAS_CGEMV FORTRAN_ID2( cgemv, CGEMV )
#define BLAS_ZGEMV FORTRAN_ID2( zgemv, ZGEMV )

// Value-type variants of ger
#define BLAS_SGER FORTRAN_ID2( sger, SGER )
#define BLAS_DGER FORTRAN_ID2( dger, DGER )

// Value-type variants of gerc
#define BLAS_CGERC FORTRAN_ID2( cgerc, CGERC )
#define BLAS_ZGERC FORTRAN_ID2( zgerc, ZGERC )

// Value-type variants of geru
#define BLAS_CGERU FORTRAN_ID2( cgeru, CGERU )
#define BLAS_ZGERU FORTRAN_ID2( zgeru, ZGERU )

// Value-type variants of hbmv
#define BLAS_CHBMV FORTRAN_ID2( chbmv, CHBMV )
#define BLAS_ZHBMV FORTRAN_ID2( zhbmv, ZHBMV )

// Value-type variants of hemv
#define BLAS_CHEMV FORTRAN_ID2( chemv, CHEMV )
#define BLAS_ZHEMV FORTRAN_ID2( zhemv, ZHEMV )

// Value-type variants of her
#define BLAS_CHER FORTRAN_ID2( cher, CHER )
#define BLAS_ZHER FORTRAN_ID2( zher, ZHER )

// Value-type variants of her2
#define BLAS_CHER2 FORTRAN_ID2( cher2, CHER2 )
#define BLAS_ZHER2 FORTRAN_ID2( zher2, ZHER2 )

// Value-type variants of hpmv
#define BLAS_CHPMV FORTRAN_ID2( chpmv, CHPMV )
#define BLAS_ZHPMV FORTRAN_ID2( zhpmv, ZHPMV )

// Value-type variants of hpr
#define BLAS_CHPR FORTRAN_ID2( chpr, CHPR )
#define BLAS_ZHPR FORTRAN_ID2( zhpr, ZHPR )

// Value-type variants of hpr2
#define BLAS_CHPR2 FORTRAN_ID2( chpr2, CHPR2 )
#define BLAS_ZHPR2 FORTRAN_ID2( zhpr2, ZHPR2 )

// Value-type variants of sbmv
#define BLAS_SSBMV FORTRAN_ID2( ssbmv, SSBMV )
#define BLAS_DSBMV FORTRAN_ID2( dsbmv, DSBMV )

// Value-type variants of spmv
#define BLAS_SSPMV FORTRAN_ID2( sspmv, SSPMV )
#define BLAS_DSPMV FORTRAN_ID2( dspmv, DSPMV )

// Value-type variants of spr
#define BLAS_SSPR FORTRAN_ID2( sspr, SSPR )
#define BLAS_DSPR FORTRAN_ID2( dspr, DSPR )

// Value-type variants of spr2
#define BLAS_SSPR2 FORTRAN_ID2( sspr2, SSPR2 )
#define BLAS_DSPR2 FORTRAN_ID2( dspr2, DSPR2 )

// Value-type variants of symv
#define BLAS_SSYMV FORTRAN_ID2( ssymv, SSYMV )
#define BLAS_DSYMV FORTRAN_ID2( dsymv, DSYMV )

// Value-type variants of syr
#define BLAS_SSYR FORTRAN_ID2( ssyr, SSYR )
#define BLAS_DSYR FORTRAN_ID2( dsyr, DSYR )

// Value-type variants of syr2
#define BLAS_SSYR2 FORTRAN_ID2( ssyr2, SSYR2 )
#define BLAS_DSYR2 FORTRAN_ID2( dsyr2, DSYR2 )

// Value-type variants of tbmv
#define BLAS_STBMV FORTRAN_ID2( stbmv, STBMV )
#define BLAS_DTBMV FORTRAN_ID2( dtbmv, DTBMV )
#define BLAS_CTBMV FORTRAN_ID2( ctbmv, CTBMV )
#define BLAS_ZTBMV FORTRAN_ID2( ztbmv, ZTBMV )

// Value-type variants of tbsv
#define BLAS_STBSV FORTRAN_ID2( stbsv, STBSV )
#define BLAS_DTBSV FORTRAN_ID2( dtbsv, DTBSV )
#define BLAS_CTBSV FORTRAN_ID2( ctbsv, CTBSV )
#define BLAS_ZTBSV FORTRAN_ID2( ztbsv, ZTBSV )

// Value-type variants of tpmv
#define BLAS_STPMV FORTRAN_ID2( stpmv, STPMV )
#define BLAS_DTPMV FORTRAN_ID2( dtpmv, DTPMV )
#define BLAS_CTPMV FORTRAN_ID2( ctpmv, CTPMV )
#define BLAS_ZTPMV FORTRAN_ID2( ztpmv, ZTPMV )

// Value-type variants of tpsv
#define BLAS_STPSV FORTRAN_ID2( stpsv, STPSV )
#define BLAS_DTPSV FORTRAN_ID2( dtpsv, DTPSV )
#define BLAS_CTPSV FORTRAN_ID2( ctpsv, CTPSV )
#define BLAS_ZTPSV FORTRAN_ID2( ztpsv, ZTPSV )

// Value-type variants of trmv
#define BLAS_STRMV FORTRAN_ID2( strmv, STRMV )
#define BLAS_DTRMV FORTRAN_ID2( dtrmv, DTRMV )
#define BLAS_CTRMV FORTRAN_ID2( ctrmv, CTRMV )
#define BLAS_ZTRMV FORTRAN_ID2( ztrmv, ZTRMV )

// Value-type variants of trsv
#define BLAS_STRSV FORTRAN_ID2( strsv, STRSV )
#define BLAS_DTRSV FORTRAN_ID2( dtrsv, DTRSV )
#define BLAS_CTRSV FORTRAN_ID2( ctrsv, CTRSV )
#define BLAS_ZTRSV FORTRAN_ID2( ztrsv, ZTRSV )

//
// BLAS level3 routines
//

// Value-type variants of gemm
#define BLAS_SGEMM FORTRAN_ID2( sgemm, SGEMM )
#define BLAS_DGEMM FORTRAN_ID2( dgemm, DGEMM )
#define BLAS_CGEMM FORTRAN_ID2( cgemm, CGEMM )
#define BLAS_ZGEMM FORTRAN_ID2( zgemm, ZGEMM )

// Value-type variants of hemm
#define BLAS_CHEMM FORTRAN_ID2( chemm, CHEMM )
#define BLAS_ZHEMM FORTRAN_ID2( zhemm, ZHEMM )

// Value-type variants of her2k
#define BLAS_CHER2K FORTRAN_ID2( cher2k, CHER2K )
#define BLAS_ZHER2K FORTRAN_ID2( zher2k, ZHER2K )

// Value-type variants of herk
#define BLAS_CHERK FORTRAN_ID2( cherk, CHERK )
#define BLAS_ZHERK FORTRAN_ID2( zherk, ZHERK )

// Value-type variants of symm
#define BLAS_SSYMM FORTRAN_ID2( ssymm, SSYMM )
#define BLAS_DSYMM FORTRAN_ID2( dsymm, DSYMM )
#define BLAS_CSYMM FORTRAN_ID2( csymm, CSYMM )
#define BLAS_ZSYMM FORTRAN_ID2( zsymm, ZSYMM )

// Value-type variants of syr2k
#define BLAS_SSYR2K FORTRAN_ID2( ssyr2k, SSYR2K )
#define BLAS_DSYR2K FORTRAN_ID2( dsyr2k, DSYR2K )
#define BLAS_CSYR2K FORTRAN_ID2( csyr2k, CSYR2K )
#define BLAS_ZSYR2K FORTRAN_ID2( zsyr2k, ZSYR2K )

// Value-type variants of syrk
#define BLAS_SSYRK FORTRAN_ID2( ssyrk, SSYRK )
#define BLAS_DSYRK FORTRAN_ID2( dsyrk, DSYRK )
#define BLAS_CSYRK FORTRAN_ID2( csyrk, CSYRK )
#define BLAS_ZSYRK FORTRAN_ID2( zsyrk, ZSYRK )

// Value-type variants of trmm
#define BLAS_STRMM FORTRAN_ID2( strmm, STRMM )
#define BLAS_DTRMM FORTRAN_ID2( dtrmm, DTRMM )
#define BLAS_CTRMM FORTRAN_ID2( ctrmm, CTRMM )
#define BLAS_ZTRMM FORTRAN_ID2( ztrmm, ZTRMM )

// Value-type variants of trsm
#define BLAS_STRSM FORTRAN_ID2( strsm, STRSM )
#define BLAS_DTRSM FORTRAN_ID2( dtrsm, DTRSM )
#define BLAS_CTRSM FORTRAN_ID2( ctrsm, CTRSM )
#define BLAS_ZTRSM FORTRAN_ID2( ztrsm, ZTRSM )


#endif

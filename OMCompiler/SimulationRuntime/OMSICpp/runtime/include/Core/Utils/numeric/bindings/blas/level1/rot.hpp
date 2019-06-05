//
// Copyright (c) 2002--2010
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

#ifndef BOOST_NUMERIC_BINDINGS_BLAS_LEVEL1_ROT_HPP
#define BOOST_NUMERIC_BINDINGS_BLAS_LEVEL1_ROT_HPP

#include <boost/assert.hpp>
#include <Core/Utils/numeric/bindings/begin.hpp>
#include <Core/Utils/numeric/bindings/has_linear_array.hpp>
#include <Core/Utils/numeric/bindings/is_mutable.hpp>
#include <Core/Utils/numeric/bindings/remove_imaginary.hpp>
#include <Core/Utils/numeric/bindings/size.hpp>
#include <Core/Utils/numeric/bindings/stride.hpp>
#include <Core/Utils/numeric/bindings/value_type.hpp>
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_const.hpp>

//
// The BLAS-backend is selected by defining a pre-processor variable,
//  which can be one of
// * for CBLAS, define BOOST_NUMERIC_BINDINGS_BLAS_CBLAS
// * for CUBLAS, define BOOST_NUMERIC_BINDINGS_BLAS_CUBLAS
// * netlib-compatible BLAS is the default
//
#if defined BOOST_NUMERIC_BINDINGS_BLAS_CBLAS
#include <Core/Utils/numeric/bindings/blas/detail/cblas.h>
#include <Core/Utils/numeric/bindings/blas/detail/cblas_option.hpp>
#elif defined BOOST_NUMERIC_BINDINGS_BLAS_CUBLAS
#include <Core/Utils/numeric/bindings/blas/detail/cublas.h>
#include <Core/Utils/numeric/bindings/blas/detail/blas_option.hpp>
#else
#include <Core/Utils/numeric/bindings/blas/detail/blas.h>
#include <Core/Utils/numeric/bindings/blas/detail/blas_option.hpp>
#endif

namespace boost
{
    namespace numeric
    {
        namespace bindings
        {
            namespace blas
            {
                //
                // The detail namespace contains value-type-overloaded functions that
                // dispatch to the appropriate back-end BLAS-routine.
                //
                namespace detail
                {
#if defined BOOST_NUMERIC_BINDINGS_BLAS_CBLAS
                    //
                    // Overloaded function for dispatching to
                    // * CBLAS backend, and
                    // * float value-type.
//
inline void rot( const int n, float* x, const int incx, float* y,
        const int incy, const float c, const float s ) {
    cblas_srot( n, x, incx, y, incy, c, s );
}

//
                    // Overloaded function for dispatching to
                    // * CBLAS backend, and
                    // * double value-type.
//
inline void rot( const int n, double* x, const int incx, double* y,
        const int incy, const double c, const double s ) {
    cblas_drot( n, x, incx, y, incy, c, s );
}

//
                    // Overloaded function for dispatching to
                    // * CBLAS backend, and
                    // * complex<float> value-type.
//
inline void rot( const int n, std::complex<float>* x, const int incx,
        std::complex<float>* y, const int incy, const float c,
        const float s ) {
    // NOT FOUND();
}

//
                    // Overloaded function for dispatching to
                    // * CBLAS backend, and
                    // * complex<double> value-type.
//
inline void rot( const int n, std::complex<double>* x, const int incx,
        std::complex<double>* y, const int incy, const double c,
        const double s ) {
    // NOT FOUND();
}

#elif defined BOOST_NUMERIC_BINDINGS_BLAS_CUBLAS
                    //
                    // Overloaded function for dispatching to
                    // * CUBLAS backend, and
                    // * float value-type.
//
inline void rot( const int n, float* x, const int incx, float* y,
        const int incy, const float c, const float s ) {
    cublasSrot( n, x, incx, y, incy, c, s );
}

//
                    // Overloaded function for dispatching to
                    // * CUBLAS backend, and
                    // * double value-type.
//
inline void rot( const int n, double* x, const int incx, double* y,
        const int incy, const double c, const double s ) {
    cublasDrot( n, x, incx, y, incy, c, s );
}

//
                    // Overloaded function for dispatching to
                    // * CUBLAS backend, and
                    // * complex<float> value-type.
//
inline void rot( const int n, std::complex<float>* x, const int incx,
        std::complex<float>* y, const int incy, const float c,
        const float s ) {
    cublasCsrot( n, x, incx, y, incy, c, s );
}

//
                    // Overloaded function for dispatching to
                    // * CUBLAS backend, and
                    // * complex<double> value-type.
//
inline void rot( const int n, std::complex<double>* x, const int incx,
        std::complex<double>* y, const int incy, const double c,
        const double s ) {
    cublasZdrot( n, x, incx, y, incy, c, s );
}

#else
                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible BLAS backend (the default), and
                    // * float value-type.
                    //
                    inline void rot(const fortran_int_t n, float* x, const fortran_int_t incx,
                                    float* y, const fortran_int_t incy, const float c, const float s)
                    {
                        BLAS_SROT(&n, x, &incx, y, &incy, &c, &s);
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible BLAS backend (the default), and
                    // * double value-type.
                    //
                    inline void rot(const fortran_int_t n, double* x, const fortran_int_t incx,
                                    double* y, const fortran_int_t incy, const double c, const double s)
                    {
                        BLAS_DROT(&n, x, &incx, y, &incy, &c, &s);
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible BLAS backend (the default), and
                    // * complex<float> value-type.
                    //
                    inline void rot(const fortran_int_t n, std::complex<float>* x,
                                    const fortran_int_t incx, std::complex<float>* y,
                                    const fortran_int_t incy, const float c, const float s)
                    {
                        BLAS_CSROT(&n, x, &incx, y, &incy, &c, &s);
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible BLAS backend (the default), and
                    // * complex<double> value-type.
                    //
                    inline void rot(const fortran_int_t n, std::complex<double>* x,
                                    const fortran_int_t incx, std::complex<double>* y,
                                    const fortran_int_t incy, const double c, const double s)
                    {
                        BLAS_ZDROT(&n, x, &incx, y, &incy, &c, &s);
                    }

#endif
                } // namespace detail

                //
                // Value-type based template class. Use this class if you need a type
                // for dispatching to rot.
                //
                template <typename Value>
                struct rot_impl
                {
                    typedef Value value_type;
                    typedef typename remove_imaginary<Value>::type real_type;
                    typedef void result_type;

                    //
                    // Static member function that
                    // * Deduces the required arguments for dispatching to BLAS, and
                    // * Asserts that most arguments make sense.
                    //
                    template <typename VectorX, typename VectorY>
                    static result_type invoke(VectorX& x, VectorY& y, const real_type c,
                                              const real_type s)
                    {
                        namespace bindings = ::boost::numeric::bindings;
                        BOOST_STATIC_ASSERT((is_same<typename remove_const<
                                                         typename bindings::value_type<VectorX>::type>::type,
                                                     typename remove_const<typename bindings::value_type<
                                                         VectorY>::type>::type>::value));
                        BOOST_STATIC_ASSERT((bindings::has_linear_array<VectorX>::value));
                        BOOST_STATIC_ASSERT((bindings::has_linear_array<VectorY>::value));
                        detail::rot(bindings::size(x), bindings::begin_value(x),
                                    bindings::stride(x), bindings::begin_value(y),
                                    bindings::stride(y), c, s);
                    }
                };

                //
                // Functions for direct use. These functions are overloaded for temporaries,
                // so that wrapped types can still be passed and used for write-access. Calls
                // to these functions are passed to the rot_impl classes. In the
                // documentation, the const-overloads are collapsed to avoid a large number of
                // prototypes which are very similar.
                //

                //
                // Overloaded function for rot. Its overload differs for
                //
                template <typename VectorX, typename VectorY>
                inline typename rot_impl<typename bindings::value_type<
                    VectorX>::type>::result_type
                rot(VectorX& x, VectorY& y, const typename remove_imaginary<
                        typename bindings::value_type<VectorX>::type>::type c,
                    const typename remove_imaginary<typename bindings::value_type<
                        VectorX>::type>::type s)
                {
                    rot_impl<typename bindings::value_type<
                        VectorX>::type>::invoke(x, y, c, s);
                }
            } // namespace blas
        } // namespace bindings
    } // namespace numeric
} // namespace boost

#endif

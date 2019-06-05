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

#ifndef BOOST_NUMERIC_BINDINGS_LAPACK_AUXILIARY_LARFG_HPP
#define BOOST_NUMERIC_BINDINGS_LAPACK_AUXILIARY_LARFG_HPP

#include <boost/assert.hpp>
#include <Core/Utils/numeric/bindings/begin.hpp>
#include <Core/Utils/numeric/bindings/is_complex.hpp>
#include <Core/Utils/numeric/bindings/is_mutable.hpp>
#include <Core/Utils/numeric/bindings/is_real.hpp>
#include <Core/Utils/numeric/bindings/remove_imaginary.hpp>
#include <Core/Utils/numeric/bindings/size.hpp>
#include <Core/Utils/numeric/bindings/stride.hpp>
#include <Core/Utils/numeric/bindings/value_type.hpp>
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/utility/enable_if.hpp>

//
// The LAPACK-backend for larfg is the netlib-compatible backend.
//
#include <Core/Utils/numeric/bindings/lapack/detail/lapack.h>
#include <Core/Utils/numeric/bindings/lapack/detail/lapack_option.hpp>

namespace boost
{
    namespace numeric
    {
        namespace bindings
        {
            namespace lapack
            {
                //
                // The detail namespace contains value-type-overloaded functions that
                // dispatch to the appropriate back-end LAPACK-routine.
                //
                namespace detail
                {
                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible LAPACK backend (the default), and
                    // * float value-type.
                    //
                    inline std::ptrdiff_t larfg(const fortran_int_t n, float& alpha, float* x,
                                                const fortran_int_t incx, float& tau)
                    {
                        fortran_int_t info(0);
                        LAPACK_SLARFG(&n, &alpha, x, &incx, &tau);
                        return info;
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible LAPACK backend (the default), and
                    // * double value-type.
                    //
                    inline std::ptrdiff_t larfg(const fortran_int_t n, double& alpha, double* x,
                                                const fortran_int_t incx, double& tau)
                    {
                        fortran_int_t info(0);
                        LAPACK_DLARFG(&n, &alpha, x, &incx, &tau);
                        return info;
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible LAPACK backend (the default), and
                    // * complex<float> value-type.
                    //
                    inline std::ptrdiff_t larfg(const fortran_int_t n, std::complex<float>& alpha,
                                                std::complex<float>* x, const fortran_int_t incx,
                                                std::complex<float>& tau)
                    {
                        fortran_int_t info(0);
                        LAPACK_CLARFG(&n, &alpha, x, &incx, &tau);
                        return info;
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible LAPACK backend (the default), and
                    // * complex<double> value-type.
                    //
                    inline std::ptrdiff_t larfg(const fortran_int_t n,
                                                std::complex<double>& alpha, std::complex<double>* x,
                                                const fortran_int_t incx, std::complex<double>& tau)
                    {
                        fortran_int_t info(0);
                        LAPACK_ZLARFG(&n, &alpha, x, &incx, &tau);
                        return info;
                    }
                } // namespace detail

                //
                // Value-type based template class. Use this class if you need a type
                // for dispatching to larfg.
                //
                template <typename Value, typename Enable = void>
                struct larfg_impl
                {
                };

                //
                // This implementation is enabled if Value is a real type.
                //
                template <typename Value>
                struct larfg_impl<Value, typename boost::enable_if<is_real<Value>>::type>
                {
                    typedef Value value_type;
                    typedef typename remove_imaginary<Value>::type real_type;

                    //
                    // Static member function, that
                    // * Deduces the required arguments for dispatching to LAPACK, and
                    // * Asserts that most arguments make sense.
                    //
                    template <typename VectorX>
                    static std::ptrdiff_t invoke(const fortran_int_t n, real_type& alpha,
                                                 VectorX& x, real_type& tau)
                    {
                        namespace bindings = ::boost::numeric::bindings;
                        BOOST_STATIC_ASSERT((bindings::is_mutable<VectorX>::value));
                        return detail::larfg(n, alpha, bindings::begin_value(x),
                                             bindings::stride(x), tau);
                    }
                };

                //
                // This implementation is enabled if Value is a complex type.
                //
                template <typename Value>
                struct larfg_impl<Value, typename boost::enable_if<is_complex<Value>>::type>
                {
                    typedef Value value_type;
                    typedef typename remove_imaginary<Value>::type real_type;

                    //
                    // Static member function, that
                    // * Deduces the required arguments for dispatching to LAPACK, and
                    // * Asserts that most arguments make sense.
                    //
                    template <typename VectorX>
                    static std::ptrdiff_t invoke(const fortran_int_t n, value_type& alpha,
                                                 VectorX& x, value_type& tau)
                    {
                        namespace bindings = ::boost::numeric::bindings;
                        BOOST_STATIC_ASSERT((bindings::is_mutable<VectorX>::value));
                        return detail::larfg(n, alpha, bindings::begin_value(x),
                                             bindings::stride(x), tau);
                    }
                };


                //
                // Functions for direct use. These functions are overloaded for temporaries,
                // so that wrapped types can still be passed and used for write-access. In
                // addition, if applicable, they are overloaded for user-defined workspaces.
                // Calls to these functions are passed to the larfg_impl classes. In the
                // documentation, most overloads are collapsed to avoid a large number of
                // prototypes which are very similar.
                //

                //
                // Overloaded function for larfg. Its overload differs for
                //
                template <typename VectorX>
                inline std::ptrdiff_t larfg(const fortran_int_t n,
                                            typename remove_imaginary<typename bindings::value_type<
                                                VectorX>::type>::type& alpha, VectorX& x, typename remove_imaginary<
                                                typename bindings::value_type<VectorX>::type>::type& tau)
                {
                    return larfg_impl<typename bindings::value_type<
                        VectorX>::type>::invoke(n, alpha, x, tau);
                }

                //
                // Overloaded function for larfg. Its overload differs for
                //
                template <typename VectorX>
                inline std::ptrdiff_t larfg(const fortran_int_t n,
                                            typename bindings::value_type<VectorX>::type& alpha, VectorX& x,
                                            typename bindings::value_type<VectorX>::type& tau)
                {
                    return larfg_impl<typename bindings::value_type<
                        VectorX>::type>::invoke(n, alpha, x, tau);
                }
            } // namespace lapack
        } // namespace bindings
    } // namespace numeric
} // namespace boost

#endif

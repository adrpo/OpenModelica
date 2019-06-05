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

#ifndef BOOST_NUMERIC_BINDINGS_LAPACK_COMPUTATIONAL_PSTRF_HPP
#define BOOST_NUMERIC_BINDINGS_LAPACK_COMPUTATIONAL_PSTRF_HPP

#include <boost/assert.hpp>
#include <Core/Utils/numeric/bindings/begin.hpp>
#include <Core/Utils/numeric/bindings/detail/array.hpp>
#include <Core/Utils/numeric/bindings/is_column_major.hpp>
#include <Core/Utils/numeric/bindings/is_mutable.hpp>
#include <Core/Utils/numeric/bindings/lapack/workspace.hpp>
#include <Core/Utils/numeric/bindings/remove_imaginary.hpp>
#include <Core/Utils/numeric/bindings/size.hpp>
#include <Core/Utils/numeric/bindings/stride.hpp>
#include <Core/Utils/numeric/bindings/uplo_tag.hpp>
#include <Core/Utils/numeric/bindings/value_type.hpp>
#include <boost/static_assert.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/remove_const.hpp>

//
// The LAPACK-backend for pstrf is the netlib-compatible backend.
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
                    template <typename UpLo>
                    inline std::ptrdiff_t pstrf(const UpLo, const fortran_int_t n, float* a,
                                                const fortran_int_t lda, fortran_int_t* piv, fortran_int_t& rank,
                                                const float tol, float* work)
                    {
                        fortran_int_t info(0);
                        LAPACK_SPSTRF(&lapack_option<UpLo>::value, &n, a, &lda, piv, &rank,
                                      &tol, work, &info);
                        return info;
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible LAPACK backend (the default), and
                    // * double value-type.
                    //
                    template <typename UpLo>
                    inline std::ptrdiff_t pstrf(const UpLo, const fortran_int_t n, double* a,
                                                const fortran_int_t lda, fortran_int_t* piv, fortran_int_t& rank,
                                                const double tol, double* work)
                    {
                        fortran_int_t info(0);
                        LAPACK_DPSTRF(&lapack_option<UpLo>::value, &n, a, &lda, piv, &rank,
                                      &tol, work, &info);
                        return info;
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible LAPACK backend (the default), and
                    // * complex<float> value-type.
                    //
                    template <typename UpLo>
                    inline std::ptrdiff_t pstrf(const UpLo, const fortran_int_t n,
                                                std::complex<float>* a, const fortran_int_t lda, fortran_int_t* piv,
                                                fortran_int_t& rank, const float tol, float* work)
                    {
                        fortran_int_t info(0);
                        LAPACK_CPSTRF(&lapack_option<UpLo>::value, &n, a, &lda, piv, &rank,
                                      &tol, work, &info);
                        return info;
                    }

                    //
                    // Overloaded function for dispatching to
                    // * netlib-compatible LAPACK backend (the default), and
                    // * complex<double> value-type.
                    //
                    template <typename UpLo>
                    inline std::ptrdiff_t pstrf(const UpLo, const fortran_int_t n,
                                                std::complex<double>* a, const fortran_int_t lda, fortran_int_t* piv,
                                                fortran_int_t& rank, const double tol, double* work)
                    {
                        fortran_int_t info(0);
                        LAPACK_ZPSTRF(&lapack_option<UpLo>::value, &n, a, &lda, piv, &rank,
                                      &tol, work, &info);
                        return info;
                    }
                } // namespace detail

                //
                // Value-type based template class. Use this class if you need a type
                // for dispatching to pstrf.
                //
                template <typename Value>
                struct pstrf_impl
                {
                    typedef Value value_type;
                    typedef typename remove_imaginary<Value>::type real_type;

                    //
                    // Static member function for user-defined workspaces, that
                    // * Deduces the required arguments for dispatching to LAPACK, and
                    // * Asserts that most arguments make sense.
                    //
                    template <typename MatrixA, typename VectorPIV, typename WORK>
                    static std::ptrdiff_t invoke(MatrixA& a, VectorPIV& piv,
                                                 fortran_int_t& rank, const real_type tol, detail::workspace1<
                                                     WORK> work)
                    {
                        namespace bindings = ::boost::numeric::bindings;
                        typedef typename result_of::uplo_tag<MatrixA>::type uplo;
                        BOOST_STATIC_ASSERT((bindings::is_column_major<MatrixA>::value));
                        BOOST_STATIC_ASSERT((bindings::is_mutable<MatrixA>::value));
                        BOOST_STATIC_ASSERT((bindings::is_mutable<VectorPIV>::value));
                        BOOST_ASSERT(bindings::size(piv) >= bindings::size_column(a));
                        BOOST_ASSERT(bindings::size(work.select(real_type())) >=
                            min_size_work(bindings::size_column(a)));
                        BOOST_ASSERT(bindings::size_column(a) >= 0);
                        BOOST_ASSERT(bindings::size_minor(a) == 1 ||
                            bindings::stride_minor(a) == 1);
                        BOOST_ASSERT(bindings::stride_major(a) >= std::max<std::ptrdiff_t>(1,
                                                                                           bindings::size_column(a)));
                        return detail::pstrf(uplo(), bindings::size_column(a),
                                             bindings::begin_value(a), bindings::stride_major(a),
                                             bindings::begin_value(piv), rank, tol,
                                             bindings::begin_value(work.select(real_type())));
                    }

                    //
                    // Static member function that
                    // * Figures out the minimal workspace requirements, and passes
                    //   the results to the user-defined workspace overload of the
                    //   invoke static member function
                    // * Enables the unblocked algorithm (BLAS level 2)
                    //
                    template <typename MatrixA, typename VectorPIV>
                    static std::ptrdiff_t invoke(MatrixA& a, VectorPIV& piv,
                                                 fortran_int_t& rank, const real_type tol, minimal_workspace)
                    {
                        namespace bindings = ::boost::numeric::bindings;
                        typedef typename result_of::uplo_tag<MatrixA>::type uplo;
                        bindings::detail::array<real_type> tmp_work(min_size_work(
                            bindings::size_column(a)));
                        return invoke(a, piv, rank, tol, workspace(tmp_work));
                    }

                    //
                    // Static member function that
                    // * Figures out the optimal workspace requirements, and passes
                    //   the results to the user-defined workspace overload of the
                    //   invoke static member
                    // * Enables the blocked algorithm (BLAS level 3)
                    //
                    template <typename MatrixA, typename VectorPIV>
                    static std::ptrdiff_t invoke(MatrixA& a, VectorPIV& piv,
                                                 fortran_int_t& rank, const real_type tol, optimal_workspace)
                    {
                        namespace bindings = ::boost::numeric::bindings;
                        typedef typename result_of::uplo_tag<MatrixA>::type uplo;
                        return invoke(a, piv, rank, tol, minimal_workspace());
                    }

                    //
                    // Static member function that returns the minimum size of
                    // workspace-array work.
                    //
                    static std::ptrdiff_t min_size_work(const std::ptrdiff_t n)
                    {
                        return 2 * n;
                    }
                };


                //
                // Functions for direct use. These functions are overloaded for temporaries,
                // so that wrapped types can still be passed and used for write-access. In
                // addition, if applicable, they are overloaded for user-defined workspaces.
                // Calls to these functions are passed to the pstrf_impl classes. In the
                // documentation, most overloads are collapsed to avoid a large number of
                // prototypes which are very similar.
                //

                //
                // Overloaded function for pstrf. Its overload differs for
                // * User-defined workspace
                //
                template <typename MatrixA, typename VectorPIV, typename Workspace>
                inline typename boost::enable_if<detail::is_workspace<Workspace>,
                                                 std::ptrdiff_t>::type
                pstrf(MatrixA& a, VectorPIV& piv, fortran_int_t& rank,
                      const typename remove_imaginary<typename bindings::value_type<
                          MatrixA>::type>::type tol, Workspace work)
                {
                    return pstrf_impl<typename bindings::value_type<
                        MatrixA>::type>::invoke(a, piv, rank, tol, work);
                }

                //
                // Overloaded function for pstrf. Its overload differs for
                // * Default workspace-type (optimal)
                //
                template <typename MatrixA, typename VectorPIV>
                inline typename boost::disable_if<detail::is_workspace<VectorPIV>,
                                                  std::ptrdiff_t>::type
                pstrf(MatrixA& a, VectorPIV& piv, fortran_int_t& rank,
                      const typename remove_imaginary<typename bindings::value_type<
                          MatrixA>::type>::type tol)
                {
                    return pstrf_impl<typename bindings::value_type<
                        MatrixA>::type>::invoke(a, piv, rank, tol,
                                                optimal_workspace());
                }
            } // namespace lapack
        } // namespace bindings
    } // namespace numeric
} // namespace boost

#endif

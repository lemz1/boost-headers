#ifndef BOOST_QVM_GEN_MAT_ASSIGN3_HPP_INCLUDED
#define BOOST_QVM_GEN_MAT_ASSIGN3_HPP_INCLUDED

// Copyright 2008-2024 Emil Dotchevski and Reverge Studios, Inc.
// This file was generated by a program. Do not edit manually.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/config.hpp>
#include <boost/qvm/enable_if.hpp>
#include <boost/qvm/mat_traits.hpp>

namespace boost { namespace qvm {

template <class A,class B>
BOOST_QVM_CONSTEXPR BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
    mat_traits<A>::rows==3 && mat_traits<B>::rows==3 &&
    mat_traits<A>::cols==3 && mat_traits<B>::cols==3,
    A &>::type
assign( A & a, B const & b )
    {
    write_mat_element<0,0>(a,mat_traits<B>::template read_element<0,0>(b));
    write_mat_element<0,1>(a,mat_traits<B>::template read_element<0,1>(b));
    write_mat_element<0,2>(a,mat_traits<B>::template read_element<0,2>(b));
    write_mat_element<1,0>(a,mat_traits<B>::template read_element<1,0>(b));
    write_mat_element<1,1>(a,mat_traits<B>::template read_element<1,1>(b));
    write_mat_element<1,2>(a,mat_traits<B>::template read_element<1,2>(b));
    write_mat_element<2,0>(a,mat_traits<B>::template read_element<2,0>(b));
    write_mat_element<2,1>(a,mat_traits<B>::template read_element<2,1>(b));
    write_mat_element<2,2>(a,mat_traits<B>::template read_element<2,2>(b));
    return a;
    }

namespace
sfinae
    {
    using ::boost::qvm::assign;
    }

namespace
qvm_detail
    {
    template <int R,int C>
    struct assign_mm_defined;

    template <>
    struct
    assign_mm_defined<3,3>
        {
        static bool const value=true;
        };
    }

template <class A,class B>
BOOST_QVM_CONSTEXPR BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
    mat_traits<A>::rows==3 && mat_traits<B>::rows==3 &&
    mat_traits<A>::cols==1 && mat_traits<B>::cols==1,
    A &>::type
assign( A & a, B const & b )
    {
    write_mat_element<0,0>(a,mat_traits<B>::template read_element<0,0>(b));
    write_mat_element<1,0>(a,mat_traits<B>::template read_element<1,0>(b));
    write_mat_element<2,0>(a,mat_traits<B>::template read_element<2,0>(b));
    return a;
    }

namespace
sfinae
    {
    using ::boost::qvm::assign;
    }

namespace
qvm_detail
    {
    template <int R,int C>
    struct assign_mm_defined;

    template <>
    struct
    assign_mm_defined<3,1>
        {
        static bool const value=true;
        };
    }

template <class A,class B>
BOOST_QVM_CONSTEXPR BOOST_QVM_INLINE_OPERATIONS
typename enable_if_c<
    mat_traits<A>::rows==1 && mat_traits<B>::rows==1 &&
    mat_traits<A>::cols==3 && mat_traits<B>::cols==3,
    A &>::type
assign( A & a, B const & b )
    {
    write_mat_element<0,0>(a,mat_traits<B>::template read_element<0,0>(b));
    write_mat_element<0,1>(a,mat_traits<B>::template read_element<0,1>(b));
    write_mat_element<0,2>(a,mat_traits<B>::template read_element<0,2>(b));
    return a;
    }

namespace
sfinae
    {
    using ::boost::qvm::assign;
    }

namespace
qvm_detail
    {
    template <int R,int C>
    struct assign_mm_defined;

    template <>
    struct
    assign_mm_defined<1,3>
        {
        static bool const value=true;
        };
    }

} }

#endif

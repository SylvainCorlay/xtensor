/***************************************************************************
* Copyright (c) 2016, Johan Mabille and Sylvain Corlay                     *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

/**
 * @brief standard mathematical functions for xexpressions
 */

#ifndef XBUILDER_HPP
#define XBUILDER_HPP

#include <initializer_list>
#include <utility>
#include <vector>

#include "xfunction.hpp"
#include "xbroadcast.hpp"
#include "xmath.hpp"

namespace xt
{

    /********
     * ones *
     ********/

    template <class T, class S>
    inline auto ones(S shape) noexcept
    {
        return broadcast(T(1), std::forward<S>(shape));
    }

    template <class T, class I>
    inline auto ones(std::initializer_list<I> shape) noexcept
    {
        return ones<T>(std::vector<I>(shape));
    }

    /*********
     * zeros *
     *********/

    template <class T, class S>
    inline auto zeros(S shape) noexcept
    {
        return broadcast(T(0), std::forward<S>(shape));
    }
    
    template <class T, class I>
    inline auto zeros(std::initializer_list<I> shape) noexcept
    {
        return zeros<T>(std::vector<I>(shape));
    }

}
#endif

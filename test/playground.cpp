﻿//  Copyright 2015-2016 Denis Blank <denis.blank at outlook dot com>
//     Distributed under the Boost Software License, Version 1.0
//       (See accompanying file LICENSE_1_0.txt or copy at
//             http://www.boost.org/LICENSE_1_0.txt)

#include "function2/function2.hpp"

struct RValueProvider {
  bool operator()() && {
    return true;
  }
};

int main(int, char**) {
  fu2::unique_function<bool()&&> f;
  f.assign(RValueProvider{}); 
}

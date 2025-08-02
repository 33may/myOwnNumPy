#include <iostream>
#include <array>

#include <myOwnNumPy/ndarray.hpp>

namespace myOwnNumPy {
    
    ndarray::ndarray(std::vector<std::size_t> shape){
        shape_ = shape;
    }

    std::vector<std::size_t> ndarray::shape() const{
        return shape_;
    }
    
}   
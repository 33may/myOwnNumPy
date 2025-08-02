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

    std::ostream& operator<<(std::ostream& os, const ndarray& tensor){

        std::vector<std::size_t> shape = tensor.shape();

        os << "(";
        for (std::size_t i = 0; i < shape.size(); i++){
            os << shape[i] << " ";
        }
        os << ")";

        return os;
    }
    
}   
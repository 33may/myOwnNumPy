#include <iostream>
#include <array>

#include <myOwnNumPy/ndarray.hpp>

namespace myOwnNumPy {
    
    ndarray::ndarray(std::initializer_list<std::size_t> shape){
        shape_ = Shape(shape);
    }

    ndarray::ndarray(std::vector<std::size_t> shape){
        shape_ = Shape(shape);
    }

    ndarray::ndarray(Shape shape){
        shape_ = shape;
    }

    Shape ndarray::shape() const{
        return shape_;
    }

    size_t ndarray::ndims() const{
        return shape_.size();
    }

    std::ostream& operator<<(std::ostream& os, const ndarray& tensor){

        Shape shape = tensor.shape();

        os << "(";
        for (std::size_t i = 0; i < shape.size(); i++){
            os << shape[i] << " ";
        }
        os << ")";

        return os;
    }
    
}   
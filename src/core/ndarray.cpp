#include <iostream>
#include <array>

#include <myOwnNumPy/ndarray.hpp>

namespace myOwnNumPy {
    
    ndarray::ndarray(int rows, int cols){
        if (rows < 0 || rows < 0) {
            throw std::invalid_argument("rows/cols must be non-negative");
        }

        rows_ = static_cast<std::size_t>(rows);
        cols_ = static_cast<std::size_t>(cols);
    }

    std::array<int, 2> ndarray::shape() const{
        return {static_cast<int>(rows_), static_cast<int>(cols_)};
    }
    
}   
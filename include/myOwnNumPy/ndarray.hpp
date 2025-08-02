#pragma once

#include <myOwnNumPy/shape.hpp>
#include <cstddef>
#include <ostream>


namespace myOwnNumPy {

    class ndarray{
        
        public:
            ndarray(std::vector<std::size_t> shape);
            ndarray(std::initializer_list<std::size_t> shape);
            ndarray(Shape shape);


            Shape shape() const;
            size_t ndims() const;

        private:

            Shape shape_;
    };

    std::ostream& operator<<(std::ostream& os, const ndarray& tensor);

}
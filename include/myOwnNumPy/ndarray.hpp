#pragma once
#include <cstddef>
#include <array>

namespace myOwnNumPy {

    class ndarray{
        
        public:
            ndarray(int rows, int cols);

            std::array<int, 2> shape() const;

        private:

            // case for only 2d matrices, will be fixed soon
            size_t rows_;
            size_t cols_;

    };
}
#pragma once
#include <cstddef>
#include <array>
#include <vector>


namespace myOwnNumPy {

    class ndarray{
        
        public:
            ndarray(std::vector<std::size_t> shape);

            std::vector<std::size_t> shape() const;

        private:

            std::vector<std::size_t> shape_;
    };
}
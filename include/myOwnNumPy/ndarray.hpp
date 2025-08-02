#pragma once

#include <cstddef>
#include <array>
#include <vector>
#include <ostream>


namespace myOwnNumPy {

    class ndarray{
        
        public:
            ndarray(std::vector<std::size_t> shape);

            std::vector<std::size_t> shape() const;

        private:

            std::vector<std::size_t> shape_;
    };

    std::ostream& operator<<(std::ostream& os, const ndarray& tensor);

}
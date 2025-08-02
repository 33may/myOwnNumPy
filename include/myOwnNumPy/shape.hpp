#pragma once

#include <vector>
#include <ostream>

namespace myOwnNumPy {

    struct Shape{
        private:
            std::vector<std::size_t> dims_;

        public:
            Shape();
            Shape(std::initializer_list<std::size_t> dims);
            Shape(const std::vector<std::size_t> dims);

            std::size_t ndims();

            std::size_t& operator[](std::size_t i);

            const std::size_t& operator[](std::size_t i) const;

            std::size_t size() const;
            bool empty() const;

            auto begin();
            auto end();
            auto begin() const;
            auto end() const;
    };

    std::ostream& operator<<(std::ostream& os, const Shape& shape);
}
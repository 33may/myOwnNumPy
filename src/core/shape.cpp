#include <myOwnNumPy/shape.hpp>
#include <vector>

namespace myOwnNumPy {

    Shape::Shape() = default;
    Shape::Shape(std::initializer_list<std::size_t> dims){
        dims_ = dims;
    }
    Shape::Shape(const std::vector<std::size_t> dims){
        dims_ = dims;
    }

    std::size_t Shape::ndims(){
        return dims_.size();
    }

    std::size_t& Shape::operator[](std::size_t i){
        return dims_[i];
    }
    const std::size_t& Shape::operator[](std::size_t i) const {
        return dims_[i];
    }
    std::size_t Shape::size() const { return dims_.size(); }
    bool Shape::empty() const { return dims_.empty(); }
    auto Shape::begin() { return dims_.begin(); }
    auto Shape::end()   { return dims_.end(); }
    auto Shape::begin() const { return dims_.begin(); }
    auto Shape::end()   const { return dims_.end(); }

    std::ostream& operator<<(std::ostream& os, const Shape& shape){
    os << "(";
        for (std::size_t i = 0; i < shape.size(); i++){
            os << shape[i] << " ";
        }
        os << ")";

        return os;
}
};


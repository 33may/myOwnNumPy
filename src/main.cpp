#include <iostream>
#include <myOwnNumPy/ndarray.hpp>

int main(){

    myOwnNumPy::ndarray tensor = {1, 2, 3};

    myOwnNumPy::Shape shp = tensor.shape();

    size_t ndims = tensor.ndims();

    std::cout << tensor;
    
    std::cout << "The shape of tensor is: " << shp << std::endl;

    std::cout << "The first dimension is: " << shp[0] << std::endl;

    std::cout << "The number of dimensions is: " << ndims << std::endl;

    return -1;
}
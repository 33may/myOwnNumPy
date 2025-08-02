#include <iostream>
#include <myOwnNumPy/utils/version.hpp>
#include <myOwnNumPy/ops/add.hpp>
#include <myOwnNumPy/ndarray.hpp>

int main(){

    std::cout << "Version: " << myOwnNumPy::version << '\n';

    int a = 12;
    int b = 8;

    int res = myOwnNumPy::ops::add(a, b);

    std::cout << "Addition result " << res << '\n';

    size_t r = 2;
    size_t c = 4;

    std::vector shape_input = {r, c};

    myOwnNumPy::ndarray mat(shape_input);

    auto shape = mat.shape();

    std::cout << "Shape: " << shape[0] << " " << shape[1] << std::endl;

    return -1;
}
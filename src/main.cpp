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

    int r = 2;
    int c = 4;

    myOwnNumPy::ndarray mat(r, c);

    auto shape = mat.shape();

    std::cout << "Shape: " << shape[0] << " " << shape[1] << std::endl;

    return -1;
}
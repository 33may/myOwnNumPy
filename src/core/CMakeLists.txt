add_library(myOwnNumPy_core STATIC

            ops/add.cpp
            ndarray.cpp
)

target_include_directories(myOwnNumPy_core PUBLIC ${PROJECT_SOURCE_DIR}/include)
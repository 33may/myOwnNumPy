add_subdirectory(core)

add_executable(myOwnNumPy_cli main.cpp)

target_link_libraries(myOwnNumPy_cli
    PRIVATE myOwnNumPy_core
)

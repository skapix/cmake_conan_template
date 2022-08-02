project(${BIN_PROJECT_NAME})

find_package(CLI11 REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE CLI11::CLI11 ${LIB_PROJECT_NAME})

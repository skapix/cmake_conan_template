project(${TEST_PROJECT_NAME})

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} test_util.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest GTest::gtest_main ${LIB_PROJECT_NAME})

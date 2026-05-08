# Lab07 - Hunter Package

## Description
Banking library with Account and Transaction classes.

## Build
```bash
mkdir build && cd build
cmake .. -DBUILD_TESTS=ON
cmake --build .
ctest --output-on-failure

---

### Шаг 6. Создаём главный CMakeLists.txt (БЕЗ Hunter пока)

```bash
cat > CMakeLists.txt << 'EOF'
cmake_minimum_required(VERSION 3.10)
project(lab07)

set(PRINT_VERSION_MAJOR 0)
set(PRINT_VERSION_MINOR 1)
set(PRINT_VERSION_PATCH 0)
set(PRINT_VERSION_TWEAK 0)
set(PRINT_VERSION "${PRINT_VERSION_MAJOR}.${PRINT_VERSION_MINOR}.${PRINT_VERSION_PATCH}.${PRINT_VERSION_TWEAK}")
set(PRINT_VERSION_STRING "v${PRINT_VERSION}")

option(BUILD_TESTS "Build tests" OFF)

add_subdirectory(banking)

if(BUILD_TESTS)
    enable_testing()
    find_package(GTest REQUIRED)
    
    add_executable(check tests/test_account.cpp tests/test_transaction.cpp)
    target_link_libraries(check banking GTest::gtest_main)
    target_include_directories(check PRIVATE banking)
    
    add_test(NAME check COMMAND check)
endif()

include(CPackConfig.cmake)

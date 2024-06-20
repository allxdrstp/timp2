cmake_minimum_required(VERSION 3.10)
project(singleton_project)

# Добавление исходных файлов
set(SOURCES
    class.cpp
    main.cpp
)

# Добавление заголовочных файлов
set(HEADERS
    class.h
)

add_executable(singleton_app ${SOURCES} ${HEADERS})

add_executable(check class.cpp test.cpp)
target_link_libraries(check PRIVATE gtest gtest_main)

find_package(GTest REQUIRED)
enable_testing()

add_executable(my_test_app test.cpp)
target_link_libraries(my_test_app GTest::gtest_main)

add_test(NAME MyTest COMMAND my_test_app)

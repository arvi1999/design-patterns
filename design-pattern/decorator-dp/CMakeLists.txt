cmake_minimum_required(VERSION 3.10)
project(CoffeeDecorator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(coffee_decorator
    main.cpp
    simple_coffee.h
    milk_decorator.h
    sugar_decorator.h
    coffee.h
) 
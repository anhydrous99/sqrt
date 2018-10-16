cmake_minimum_required(VERSION 2.6.0)

project(sqrt C)

include_directories(include)

add_executable(sqrt src/babyloniansqrt.c 
                    src/bakhshalisqrt.c 
                    src/twovaritsqrt.c 
                    src/taylorsqrt.c
                    src/bitsqrt.c
                    src/main.c)

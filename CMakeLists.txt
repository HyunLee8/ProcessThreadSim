cmake_minimum_required(VERSION 4.0)
project(scheduler C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -g")

find_package(Threads REQUIRED)

add_executable(scheduler
        main.c
        pcb.c
        pcb.h
        scheduler.c
        scheduler.h
)

if (CMAKE_BUILD_TYPE MATCHES Debug)
    add_compile_options(-fsanitize=address -g)
    add_link_options(-fsanitize=address)
endif()

target_link_libraries(scheduler Threads::Threads)


cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(Blockstone)

include_directories(${PROJECT_SOURCE_DIR})

set(SRC_FILES ${PROJECT_SOURCE_DIR}/src/Block.cpp
              ${PROJECT_SOURCE_DIR}/src/Blockchain.cpp
              ${PROJECT_SOURCE_DIR}/src/Transaction.cpp
              ${PROJECT_SOURCE_DIR}/src/main.cpp               
              ${PROJECT_SOURCE_DIR}/lib/hash-library/sha256.cpp)

add_executable(Blockstone ${SRC_FILES})

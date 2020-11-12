cmake_minimum_required(VERSION 3.17)
project(PRG1_ProjetPerso01)

set(CMAKE_CXX_STANDARD 17)

add_executable(PRG1_ProjetPerso01
        main.cpp
        displayArray.cpp displayArray.h
        replacePairByValue.cpp replacePairByValue.h
        cyclicShift.cpp cyclicShift.h
        deleteValueInArray.cpp deleteValueInArray.h
        compareArrays.cpp compareArrays.h)
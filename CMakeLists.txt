cmake_minimum_required(VERSION 3.6)
project(exercises)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BUILD_1_1 es1)
set(SOURCE_FILES Esercizio1/es1.c Esercizio2/es1.c Esercizio3/camping1.c Esercizio3/camping2.c)
add_executable(BUILD_1_1 ${SOURCE_FILES})

set(BUILD_2_1 es2)
set(SOURCE_FILES Esercizio1/es2.c)
add_executable(BUILD_2_1 ${SOURCE_FILES})

set(BUILD_3_1 es3)
set(SOURCE_FILES Esercizio1/es3.c)
add_executable(BUILD_3_1 ${SOURCE_FILES})

set(BUILD_4_1 es4)
set(SOURCE_FILES Esercizio1/es4.c)
add_executable(BUILD_4_1 ${SOURCE_FILES})

set(BUILD_5_1 es5)
set(SOURCE_FILES Esercizio1/es5.c)
add_executable(BUILD_5_1 ${SOURCE_FILES})

set(BUILD_6_1 es6)
set(SOURCE_FILES Esercizio1/es6.c)
add_executable(BUILD_6_1 ${SOURCE_FILES})

set(BUILD_7_1 es7)
set(SOURCE_FILES Esercizio1/es7.c)
add_executable(BUILD_7_1 ${SOURCE_FILES})

set(BUILD_8_1 es8)
set(SOURCE_FILES Esercizio1/es8.c)
add_executable(BUILD_8_1 ${SOURCE_FILES})

set(BUILD_9_1 es9)
set(SOURCE_FILES Esercizio1/es9.c)
add_executable(BUILD_9_1 ${SOURCE_FILES})

set(BUILD_BANCOMAT bancomat)
set(SOURCE_FILES Bancomat/bancomat.c)
add_executable(BUILD_BANCOMAT ${SOURCE_FILES})

set(BUILD_1_2 es1)
set(SOURCE_FILES Esercizio2/es1.c)
add_executable(BUILD_1_2 ${SOURCE_FILES})

set(BUILD_2_2 es2)
set(SOURCE_FILES Esercizio2/es2.c)
add_executable(BUILD_2_2 ${SOURCE_FILES})

set(BUILD_3_2 es3)
set(SOURCE_FILES Esercizio2/es3.c)
add_executable(BUILD_3_2 ${SOURCE_FILES})

set(BUILD_4_2 es4)
set(SOURCE_FILES Esercizio2/es4.c)
add_executable(BUILD_4_2 ${SOURCE_FILES})

set(BUILD_5_2 es5)
set(SOURCE_FILES Esercizio2/es5.c)
add_executable(BUILD_5_2 ${SOURCE_FILES})

set(BUILD_6_2 es6)
set(SOURCE_FILES Esercizio2/es6.c)
add_executable(BUILD_6_2 ${SOURCE_FILES})

set(BUILD_7_2 es7)
set(SOURCE_FILES Esercizio2/es7.c)
add_executable(BUILD_7_2 ${SOURCE_FILES})

set(BUILD_8_2 es8)
set(SOURCE_FILES Esercizio2/es8.c)
add_executable(BUILD_8_2 ${SOURCE_FILES})

set(BUILD_9_2 es9)
set(SOURCE_FILES Esercizio2/es9.c)
add_executable(BUILD_9_2 ${SOURCE_FILES})

set(BUILD_CAMPING1 camping1)
set(SOURCE_FILES Esercizio3/camping1.c)
add_executable(BUILD_CAMPING1 ${SOURCE_FILES})

set(BUILD_CAMPING2 camping2)
set(SOURCE_FILES Esercizio3/camping2.c)
add_executable(BUILD_CAMPING2 ${SOURCE_FILES})
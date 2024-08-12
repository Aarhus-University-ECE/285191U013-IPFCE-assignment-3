cmake_minimum_required(VERSION 3.16)
project(assignment-3
	LANGUAGES CXX C
	)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)

Include(FetchContent)

FetchContent_Declare(
		Catch2
		GIT_REPOSITORY https://github.com/catchorg/Catch2.git
		GIT_TAG        v3.6.0 # Newest version as of 12-08-2024
)

FetchContent_MakeAvailable(Catch2)

include_directories(include)

add_library(numOfFib src/numOfFib.c)
add_library(doubleSum src/doubleSum.c)

add_executable(tests_ tests/tests.cpp)
target_link_libraries(tests_ numOfFib doubleSum Catch2::Catch2WithMain)

add_executable(playground src/playground.c)
target_link_libraries(playground numOfFib doubleSum)

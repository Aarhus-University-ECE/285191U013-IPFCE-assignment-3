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
		GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

include_directories(include)

add_library(numOfFib src/numOfFib.c)
add_library(doubleSum src/doubleSum.c)

add_executable(tests tests/tests.cpp)
target_link_libraries(tests numOfFib doubleSum Catch2::Catch2WithMain)

add_executable(playground src/playground.c)
target_link_libraries(playground numOfFib doubleSum)


# static checks
# if(MSVC)
#   add_compile_options(/W4 /WX)
# else()
#   add_compile_options(-Wall -Wextra -pedantic -Werror)
# endif()

# set(CMAKE_CXX_CLANG_TIDY
#   clang-tidy;
#   -checks=*;
# )

# set(CMAKE_CXX_CPPCHECK
#   cppcheck;
#   --error-exitcode=1;
# )
#
#
# # define library called queue that can imported into other targets via
# # 'target_link_libraries'
# add_library(mymath src/countfib.c src/sum.c src/mod.c src/gprime.c)
# target_include_directories(mymath PUBLIC include)
#
# # define executable named main for experimenting and debugging code
# add_executable(main src/main.cpp)
# target_link_libraries(main mymath)
#
# # tests are added by declaring a target, in this case 'tests'. additional tests
# # can be added by expanding the test cases in 'src/tests.cpp' or an additional
# # target via 'add_executable'
# enable_testing()
# add_subdirectory(tests)

.PHONY: all build test clean configure

all: build

configure:
	cmake -S . -B build  -DCMAKE_BUILD_TYPE=Debug

build: configure
	cmake --build build --target all --parallel=$(shell nproc)

test: build
	./build/tests

clean:
	rm -rf build


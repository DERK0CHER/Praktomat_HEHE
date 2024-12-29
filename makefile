# Create the build directory
build:
	mkdir -p build

# Compile and run task 1
run_1: build
	gcc  -o build/Number-to-Text Number-to-Text.c
	./build/Number-to-Text
run_2: build
	gcc  -o build/Fibonacci-numbers Fibonacci-numbers.c
	./build/Fibonacci-numbers


run_3: build
	gcc  -o build/Prime-factors Prime-factors.c
	./build/Prime-factors

run_4: build
	gcc  -o build/Flight-distance Flight-distance.c
	./build/Flight-distance
run_5: build
	gcc  -o build/Digits Digits.c
	./build/Digits
run_5: build
	gcc -o build/Atmos AtmosphericCalculations.c
	./build/Atmos
# Clean up the build directory
clean:
	rm -rf build

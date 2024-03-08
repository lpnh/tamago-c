set shell := ["nu", "-c"]

# Default compiler settings
cc := "clang"
cflags := "-Wall"
release_flags := "-O2"
debug_flags := "-g -O0"
extra_warnings := "-Wextra"
pedantic_errors := "-pedantic-errors"

# Clean up binaries and temporary files
clean:
  rm -f UwU
  rm -f main
  rm -f test/test_main
  @echo "Cleanup complete."

# Default build recipe
build: clean
  @echo "Compiling with default debug settings..."
  {{cc}} {{cflags}} {{debug_flags}} main.c tamago.c -o main
  @echo "Build complete."

# Build with pedantic warnings and errors
build-pedantic: clean
  echo "Compiling with pedantic settings..."
  {{cc}} {{cflags}} {{extra_warnings}} {{pedantic_errors}} *.c -o main
  @echo "Pedantic build complete."

# Run the main program
run: build
  ./main

# Compile and run tests
test:
  @echo "Compiling tests..."
  {{cc}} {{cflags}} {{debug_flags}} tamago.c test/test.c -o ./test/test_main
  @echo "Running tests..."
  ./test/test_main
  @echo "Testing complete."

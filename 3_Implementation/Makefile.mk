# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build

# All source code files
SRC = main.c\
src/calculator.c\

# All test source files
TEST_SRC = src/calculator.c\
test/test_calculator.c\

# All include folders with header files
INC	= -Iinc\


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT) -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit -lm
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
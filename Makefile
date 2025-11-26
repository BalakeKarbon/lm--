SRC_DIR=./src
BUILD_DIR=./build/target/native

CC=gcc

INCLUDES=
DEFINES=

CPPFLAGS=$(INCLUDES) $(DEFINES)
CFLAGS=-g -O
ASFLAGS=
LDFLAGS=
LDLIBS=

all: $(BUILD_DIR)/bin/main

$(BUILD_DIR)/bin/main: $(SRC_DIR)/main.c $(BUILD_DIR) $(BUILD_DIR)/bin
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/bin/main $(SRC_DIR)/main.c

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/bin:
	mkdir -p $(BUILD_DIR)/bin

.PHONY: all clean

clean:
	rm -rf $(BUILD_DIR)

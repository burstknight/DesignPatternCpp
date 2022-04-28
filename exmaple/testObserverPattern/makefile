######################################################################
# @author      : joe (joe@joe-Aspire-E1-531G)
# @file        : makefile
# @created     : 週日  4月 24, 2022 14:40:00 CST
######################################################################

# This flag is to control to use release or debug mode to compile code files.
debug ?= 0

# These directories is set to compile this project.
Includes_Dir = ./includes
Sourc_Dir = ./src
Bin_Dir = ../../bin

# Set the code file extension.
File_Extension := cpp

# Set compiler and flags.
CC = g++
CFLAGS = -I $(Includes_Dir) -I ../../includes
LIBS = -L../../bin -lDesignPatternCpp

# List all source code in the src directory
Sourcs := $(wildcard $(Sourc_Dir)/*.$(File_Extension))

# Create the list to generate object files
Objects := $(patsubst $(Sourc_Dir)/%.$(File_Extension), $(Bin_Dir)/%.o, $(Sourcs))

# Set the target file name
Target = testObserverPattern

# Switch compile mode
ifeq ($(debug), 1)
	CFLAGS += -g
else
	CFLAGS += -O3
endif


.PHONY: all

# Compile the target file with the object files.
all: $(Bin_Dir)/$(Target)

$(Bin_Dir)/$(Target): $(Objects)
	$(CC) $^ $(CFLAGS) $(LIBS) -o $@

# Compile the source code to the object files.
$(Bin_Dir)/%.o: $(Sourc_Dir)/%.$(File_Extension)
	mkdir -p $(Bin_Dir)
	$(CC) -c $< $(CFLAGS) -o $@ 


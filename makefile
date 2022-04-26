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
Bin_Dir = ./bin

# This directory is set to install this project.
Install_Dir := /usr/local/bin

# Set the code file extension.
File_Extension := cpp

# Set compiler and flags.
CC = g++
CFLAGS = -I $(Includes_Dir)
LIBS = 

# List all source code in the src directory
Sourcs := $(wildcard $(Sourc_Dir)/*.$(File_Extension))

# Create the list to generate object files
Objects := $(patsubst $(Sourc_Dir)/%.$(File_Extension), $(Bin_Dir)/%.o, $(Sourcs))

# Set the target file name
Target = libDesignPatternCpp.a

# Switch compile mode
ifeq ($(debug), 1)
	CFLAGS += -g
else
	CFLAGS += -O3
endif


.PHONY: clean all install uninstall

# Compile the target file with the object files.
all: $(Bin_Dir)/$(Target)
	cd ./exmaple; $(MAKE) debug=$(debug)

$(Bin_Dir)/$(Target): $(Objects)
	ar -rcs $@ $^ 

# Compile the source code to the object files.
$(Bin_Dir)/%.o: $(Sourc_Dir)/%.$(File_Extension)
	mkdir -p $(Bin_Dir)
	$(CC) -c $< $(CFLAGS) -o $@ 

# Install this project.
install:
	cp $(Bin_Dir)/$(Target) $(Install_Dir)
	chmod +x $(Install_Dir)/$(Target)

# Uninstall this project.
uninstall:
	rm -f $(Install_Dir)/$(Target)

# Clean all compiled files.
clean:
	rm -f $(Bin_Dir)/*



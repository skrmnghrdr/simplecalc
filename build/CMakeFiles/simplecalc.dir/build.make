# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build"

# Include any dependencies generated for this target.
include CMakeFiles/simplecalc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/simplecalc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/simplecalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simplecalc.dir/flags.make

CMakeFiles/simplecalc.dir/src/main.o: CMakeFiles/simplecalc.dir/flags.make
CMakeFiles/simplecalc.dir/src/main.o: /mnt/c/Users/skrm/Desktop/17Lifestory/Tool\ Developer/simplecalc/src/main.c
CMakeFiles/simplecalc.dir/src/main.o: CMakeFiles/simplecalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/simplecalc.dir/src/main.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/simplecalc.dir/src/main.o -MF CMakeFiles/simplecalc.dir/src/main.o.d -o CMakeFiles/simplecalc.dir/src/main.o -c "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/main.c"

CMakeFiles/simplecalc.dir/src/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/simplecalc.dir/src/main.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/main.c" > CMakeFiles/simplecalc.dir/src/main.i

CMakeFiles/simplecalc.dir/src/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/simplecalc.dir/src/main.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/main.c" -o CMakeFiles/simplecalc.dir/src/main.s

CMakeFiles/simplecalc.dir/src/operations.o: CMakeFiles/simplecalc.dir/flags.make
CMakeFiles/simplecalc.dir/src/operations.o: /mnt/c/Users/skrm/Desktop/17Lifestory/Tool\ Developer/simplecalc/src/operations.c
CMakeFiles/simplecalc.dir/src/operations.o: CMakeFiles/simplecalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/simplecalc.dir/src/operations.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/simplecalc.dir/src/operations.o -MF CMakeFiles/simplecalc.dir/src/operations.o.d -o CMakeFiles/simplecalc.dir/src/operations.o -c "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/operations.c"

CMakeFiles/simplecalc.dir/src/operations.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/simplecalc.dir/src/operations.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/operations.c" > CMakeFiles/simplecalc.dir/src/operations.i

CMakeFiles/simplecalc.dir/src/operations.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/simplecalc.dir/src/operations.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/operations.c" -o CMakeFiles/simplecalc.dir/src/operations.s

CMakeFiles/simplecalc.dir/src/history.o: CMakeFiles/simplecalc.dir/flags.make
CMakeFiles/simplecalc.dir/src/history.o: /mnt/c/Users/skrm/Desktop/17Lifestory/Tool\ Developer/simplecalc/src/history.c
CMakeFiles/simplecalc.dir/src/history.o: CMakeFiles/simplecalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/simplecalc.dir/src/history.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/simplecalc.dir/src/history.o -MF CMakeFiles/simplecalc.dir/src/history.o.d -o CMakeFiles/simplecalc.dir/src/history.o -c "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/history.c"

CMakeFiles/simplecalc.dir/src/history.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/simplecalc.dir/src/history.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/history.c" > CMakeFiles/simplecalc.dir/src/history.i

CMakeFiles/simplecalc.dir/src/history.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/simplecalc.dir/src/history.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/src/history.c" -o CMakeFiles/simplecalc.dir/src/history.s

# Object files for target simplecalc
simplecalc_OBJECTS = \
"CMakeFiles/simplecalc.dir/src/main.o" \
"CMakeFiles/simplecalc.dir/src/operations.o" \
"CMakeFiles/simplecalc.dir/src/history.o"

# External object files for target simplecalc
simplecalc_EXTERNAL_OBJECTS =

simplecalc: CMakeFiles/simplecalc.dir/src/main.o
simplecalc: CMakeFiles/simplecalc.dir/src/operations.o
simplecalc: CMakeFiles/simplecalc.dir/src/history.o
simplecalc: CMakeFiles/simplecalc.dir/build.make
simplecalc: CMakeFiles/simplecalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable simplecalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simplecalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simplecalc.dir/build: simplecalc
.PHONY : CMakeFiles/simplecalc.dir/build

CMakeFiles/simplecalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simplecalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simplecalc.dir/clean

CMakeFiles/simplecalc.dir/depend:
	cd "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc" "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc" "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build" "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build" "/mnt/c/Users/skrm/Desktop/17Lifestory/Tool Developer/simplecalc/build/CMakeFiles/simplecalc.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/simplecalc.dir/depend


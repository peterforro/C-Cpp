# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/61/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/61/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/peterforro/Documents/code/bme/CPPswap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CPPswap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CPPswap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CPPswap.dir/flags.make

CMakeFiles/CPPswap.dir/memtrace.cpp.o: CMakeFiles/CPPswap.dir/flags.make
CMakeFiles/CPPswap.dir/memtrace.cpp.o: ../memtrace.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CPPswap.dir/memtrace.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPswap.dir/memtrace.cpp.o -c /home/peterforro/Documents/code/bme/CPPswap/memtrace.cpp

CMakeFiles/CPPswap.dir/memtrace.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPswap.dir/memtrace.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/peterforro/Documents/code/bme/CPPswap/memtrace.cpp > CMakeFiles/CPPswap.dir/memtrace.cpp.i

CMakeFiles/CPPswap.dir/memtrace.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPswap.dir/memtrace.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/peterforro/Documents/code/bme/CPPswap/memtrace.cpp -o CMakeFiles/CPPswap.dir/memtrace.cpp.s

CMakeFiles/CPPswap.dir/swap.cpp.o: CMakeFiles/CPPswap.dir/flags.make
CMakeFiles/CPPswap.dir/swap.cpp.o: ../swap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CPPswap.dir/swap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPswap.dir/swap.cpp.o -c /home/peterforro/Documents/code/bme/CPPswap/swap.cpp

CMakeFiles/CPPswap.dir/swap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPswap.dir/swap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/peterforro/Documents/code/bme/CPPswap/swap.cpp > CMakeFiles/CPPswap.dir/swap.cpp.i

CMakeFiles/CPPswap.dir/swap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPswap.dir/swap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/peterforro/Documents/code/bme/CPPswap/swap.cpp -o CMakeFiles/CPPswap.dir/swap.cpp.s

CMakeFiles/CPPswap.dir/swap_test.cpp.o: CMakeFiles/CPPswap.dir/flags.make
CMakeFiles/CPPswap.dir/swap_test.cpp.o: ../swap_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CPPswap.dir/swap_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CPPswap.dir/swap_test.cpp.o -c /home/peterforro/Documents/code/bme/CPPswap/swap_test.cpp

CMakeFiles/CPPswap.dir/swap_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CPPswap.dir/swap_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/peterforro/Documents/code/bme/CPPswap/swap_test.cpp > CMakeFiles/CPPswap.dir/swap_test.cpp.i

CMakeFiles/CPPswap.dir/swap_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CPPswap.dir/swap_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/peterforro/Documents/code/bme/CPPswap/swap_test.cpp -o CMakeFiles/CPPswap.dir/swap_test.cpp.s

# Object files for target CPPswap
CPPswap_OBJECTS = \
"CMakeFiles/CPPswap.dir/memtrace.cpp.o" \
"CMakeFiles/CPPswap.dir/swap.cpp.o" \
"CMakeFiles/CPPswap.dir/swap_test.cpp.o"

# External object files for target CPPswap
CPPswap_EXTERNAL_OBJECTS =

CPPswap: CMakeFiles/CPPswap.dir/memtrace.cpp.o
CPPswap: CMakeFiles/CPPswap.dir/swap.cpp.o
CPPswap: CMakeFiles/CPPswap.dir/swap_test.cpp.o
CPPswap: CMakeFiles/CPPswap.dir/build.make
CPPswap: CMakeFiles/CPPswap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CPPswap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CPPswap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CPPswap.dir/build: CPPswap

.PHONY : CMakeFiles/CPPswap.dir/build

CMakeFiles/CPPswap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CPPswap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CPPswap.dir/clean

CMakeFiles/CPPswap.dir/depend:
	cd /home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/peterforro/Documents/code/bme/CPPswap /home/peterforro/Documents/code/bme/CPPswap /home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug /home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug /home/peterforro/Documents/code/bme/CPPswap/cmake-build-debug/CMakeFiles/CPPswap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CPPswap.dir/depend

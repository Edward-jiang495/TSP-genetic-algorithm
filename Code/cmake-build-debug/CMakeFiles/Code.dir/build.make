# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\18502\Desktop\TSP-genetic-algorithm\Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Code.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Code.dir/flags.make

CMakeFiles/Code.dir/main.cpp.obj: CMakeFiles/Code.dir/flags.make
CMakeFiles/Code.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Code.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Code.dir\main.cpp.obj -c C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\main.cpp

CMakeFiles/Code.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\main.cpp > CMakeFiles\Code.dir\main.cpp.i

CMakeFiles/Code.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\main.cpp -o CMakeFiles\Code.dir\main.cpp.s

CMakeFiles/Code.dir/GA.cpp.obj: CMakeFiles/Code.dir/flags.make
CMakeFiles/Code.dir/GA.cpp.obj: ../GA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Code.dir/GA.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Code.dir\GA.cpp.obj -c C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\GA.cpp

CMakeFiles/Code.dir/GA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code.dir/GA.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\GA.cpp > CMakeFiles\Code.dir\GA.cpp.i

CMakeFiles/Code.dir/GA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code.dir/GA.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\GA.cpp -o CMakeFiles\Code.dir\GA.cpp.s

CMakeFiles/Code.dir/node.cpp.obj: CMakeFiles/Code.dir/flags.make
CMakeFiles/Code.dir/node.cpp.obj: ../node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Code.dir/node.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Code.dir\node.cpp.obj -c C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\node.cpp

CMakeFiles/Code.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code.dir/node.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\node.cpp > CMakeFiles\Code.dir\node.cpp.i

CMakeFiles/Code.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code.dir/node.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\node.cpp -o CMakeFiles\Code.dir\node.cpp.s

# Object files for target Code
Code_OBJECTS = \
"CMakeFiles/Code.dir/main.cpp.obj" \
"CMakeFiles/Code.dir/GA.cpp.obj" \
"CMakeFiles/Code.dir/node.cpp.obj"

# External object files for target Code
Code_EXTERNAL_OBJECTS =

Code.exe: CMakeFiles/Code.dir/main.cpp.obj
Code.exe: CMakeFiles/Code.dir/GA.cpp.obj
Code.exe: CMakeFiles/Code.dir/node.cpp.obj
Code.exe: CMakeFiles/Code.dir/build.make
Code.exe: CMakeFiles/Code.dir/linklibs.rsp
Code.exe: CMakeFiles/Code.dir/objects1.rsp
Code.exe: CMakeFiles/Code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Code.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Code.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Code.dir/build: Code.exe

.PHONY : CMakeFiles/Code.dir/build

CMakeFiles/Code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Code.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Code.dir/clean

CMakeFiles/Code.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\18502\Desktop\TSP-genetic-algorithm\Code C:\Users\18502\Desktop\TSP-genetic-algorithm\Code C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug C:\Users\18502\Desktop\TSP-genetic-algorithm\Code\cmake-build-debug\CMakeFiles\Code.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Code.dir/depend


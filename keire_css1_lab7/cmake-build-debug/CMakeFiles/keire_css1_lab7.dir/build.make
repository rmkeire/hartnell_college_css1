# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/keire_css1_lab7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/keire_css1_lab7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/keire_css1_lab7.dir/flags.make

CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.obj: CMakeFiles/keire_css1_lab7.dir/flags.make
CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.obj: ../keire_css1_lab7.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\keire_css1_lab7.dir\keire_css1_lab7.cpp.obj -c C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\keire_css1_lab7.cpp

CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\keire_css1_lab7.cpp > CMakeFiles\keire_css1_lab7.dir\keire_css1_lab7.cpp.i

CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\keire_css1_lab7.cpp -o CMakeFiles\keire_css1_lab7.dir\keire_css1_lab7.cpp.s

# Object files for target keire_css1_lab7
keire_css1_lab7_OBJECTS = \
"CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.obj"

# External object files for target keire_css1_lab7
keire_css1_lab7_EXTERNAL_OBJECTS =

keire_css1_lab7.exe: CMakeFiles/keire_css1_lab7.dir/keire_css1_lab7.cpp.obj
keire_css1_lab7.exe: CMakeFiles/keire_css1_lab7.dir/build.make
keire_css1_lab7.exe: CMakeFiles/keire_css1_lab7.dir/linklibs.rsp
keire_css1_lab7.exe: CMakeFiles/keire_css1_lab7.dir/objects1.rsp
keire_css1_lab7.exe: CMakeFiles/keire_css1_lab7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable keire_css1_lab7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\keire_css1_lab7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/keire_css1_lab7.dir/build: keire_css1_lab7.exe

.PHONY : CMakeFiles/keire_css1_lab7.dir/build

CMakeFiles/keire_css1_lab7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\keire_css1_lab7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/keire_css1_lab7.dir/clean

CMakeFiles/keire_css1_lab7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7 C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7 C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\cmake-build-debug C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\cmake-build-debug C:\Users\maxke\CLionProjects\css_1\keire_css1_lab7\cmake-build-debug\CMakeFiles\keire_css1_lab7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/keire_css1_lab7.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\c_question\q59

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c_question\q59\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/q59.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/q59.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q59.dir/flags.make

CMakeFiles/q59.dir/main.c.obj: CMakeFiles/q59.dir/flags.make
CMakeFiles/q59.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c_question\q59\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/q59.dir/main.c.obj"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\q59.dir\main.c.obj -c E:\c_question\q59\main.c

CMakeFiles/q59.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/q59.dir/main.c.i"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c_question\q59\main.c > CMakeFiles\q59.dir\main.c.i

CMakeFiles/q59.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/q59.dir/main.c.s"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c_question\q59\main.c -o CMakeFiles\q59.dir\main.c.s

# Object files for target q59
q59_OBJECTS = \
"CMakeFiles/q59.dir/main.c.obj"

# External object files for target q59
q59_EXTERNAL_OBJECTS =

q59.exe: CMakeFiles/q59.dir/main.c.obj
q59.exe: CMakeFiles/q59.dir/build.make
q59.exe: CMakeFiles/q59.dir/linklibs.rsp
q59.exe: CMakeFiles/q59.dir/objects1.rsp
q59.exe: CMakeFiles/q59.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c_question\q59\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable q59.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\q59.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q59.dir/build: q59.exe
.PHONY : CMakeFiles/q59.dir/build

CMakeFiles/q59.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\q59.dir\cmake_clean.cmake
.PHONY : CMakeFiles/q59.dir/clean

CMakeFiles/q59.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c_question\q59 E:\c_question\q59 E:\c_question\q59\cmake-build-debug E:\c_question\q59\cmake-build-debug E:\c_question\q59\cmake-build-debug\CMakeFiles\q59.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/q59.dir/depend


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
CMAKE_SOURCE_DIR = E:\c_question\q87_zt_huiwen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c_question\q87_zt_huiwen\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/q87_zt_huiwen.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/q87_zt_huiwen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q87_zt_huiwen.dir/flags.make

CMakeFiles/q87_zt_huiwen.dir/main.c.obj: CMakeFiles/q87_zt_huiwen.dir/flags.make
CMakeFiles/q87_zt_huiwen.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c_question\q87_zt_huiwen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/q87_zt_huiwen.dir/main.c.obj"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\q87_zt_huiwen.dir\main.c.obj -c E:\c_question\q87_zt_huiwen\main.c

CMakeFiles/q87_zt_huiwen.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/q87_zt_huiwen.dir/main.c.i"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c_question\q87_zt_huiwen\main.c > CMakeFiles\q87_zt_huiwen.dir\main.c.i

CMakeFiles/q87_zt_huiwen.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/q87_zt_huiwen.dir/main.c.s"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c_question\q87_zt_huiwen\main.c -o CMakeFiles\q87_zt_huiwen.dir\main.c.s

# Object files for target q87_zt_huiwen
q87_zt_huiwen_OBJECTS = \
"CMakeFiles/q87_zt_huiwen.dir/main.c.obj"

# External object files for target q87_zt_huiwen
q87_zt_huiwen_EXTERNAL_OBJECTS =

q87_zt_huiwen.exe: CMakeFiles/q87_zt_huiwen.dir/main.c.obj
q87_zt_huiwen.exe: CMakeFiles/q87_zt_huiwen.dir/build.make
q87_zt_huiwen.exe: CMakeFiles/q87_zt_huiwen.dir/linklibs.rsp
q87_zt_huiwen.exe: CMakeFiles/q87_zt_huiwen.dir/objects1.rsp
q87_zt_huiwen.exe: CMakeFiles/q87_zt_huiwen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c_question\q87_zt_huiwen\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable q87_zt_huiwen.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\q87_zt_huiwen.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q87_zt_huiwen.dir/build: q87_zt_huiwen.exe
.PHONY : CMakeFiles/q87_zt_huiwen.dir/build

CMakeFiles/q87_zt_huiwen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\q87_zt_huiwen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/q87_zt_huiwen.dir/clean

CMakeFiles/q87_zt_huiwen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c_question\q87_zt_huiwen E:\c_question\q87_zt_huiwen E:\c_question\q87_zt_huiwen\cmake-build-debug E:\c_question\q87_zt_huiwen\cmake-build-debug E:\c_question\q87_zt_huiwen\cmake-build-debug\CMakeFiles\q87_zt_huiwen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/q87_zt_huiwen.dir/depend


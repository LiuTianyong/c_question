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
CMAKE_SOURCE_DIR = E:\c_question\q89_zt_shijian

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c_question\q89_zt_shijian\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/q89_zt_shijian.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/q89_zt_shijian.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/q89_zt_shijian.dir/flags.make

CMakeFiles/q89_zt_shijian.dir/main.c.obj: CMakeFiles/q89_zt_shijian.dir/flags.make
CMakeFiles/q89_zt_shijian.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c_question\q89_zt_shijian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/q89_zt_shijian.dir/main.c.obj"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\q89_zt_shijian.dir\main.c.obj -c E:\c_question\q89_zt_shijian\main.c

CMakeFiles/q89_zt_shijian.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/q89_zt_shijian.dir/main.c.i"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\c_question\q89_zt_shijian\main.c > CMakeFiles\q89_zt_shijian.dir\main.c.i

CMakeFiles/q89_zt_shijian.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/q89_zt_shijian.dir/main.c.s"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\c_question\q89_zt_shijian\main.c -o CMakeFiles\q89_zt_shijian.dir\main.c.s

# Object files for target q89_zt_shijian
q89_zt_shijian_OBJECTS = \
"CMakeFiles/q89_zt_shijian.dir/main.c.obj"

# External object files for target q89_zt_shijian
q89_zt_shijian_EXTERNAL_OBJECTS =

q89_zt_shijian.exe: CMakeFiles/q89_zt_shijian.dir/main.c.obj
q89_zt_shijian.exe: CMakeFiles/q89_zt_shijian.dir/build.make
q89_zt_shijian.exe: CMakeFiles/q89_zt_shijian.dir/linklibs.rsp
q89_zt_shijian.exe: CMakeFiles/q89_zt_shijian.dir/objects1.rsp
q89_zt_shijian.exe: CMakeFiles/q89_zt_shijian.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c_question\q89_zt_shijian\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable q89_zt_shijian.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\q89_zt_shijian.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/q89_zt_shijian.dir/build: q89_zt_shijian.exe
.PHONY : CMakeFiles/q89_zt_shijian.dir/build

CMakeFiles/q89_zt_shijian.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\q89_zt_shijian.dir\cmake_clean.cmake
.PHONY : CMakeFiles/q89_zt_shijian.dir/clean

CMakeFiles/q89_zt_shijian.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c_question\q89_zt_shijian E:\c_question\q89_zt_shijian E:\c_question\q89_zt_shijian\cmake-build-debug E:\c_question\q89_zt_shijian\cmake-build-debug E:\c_question\q89_zt_shijian\cmake-build-debug\CMakeFiles\q89_zt_shijian.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/q89_zt_shijian.dir/depend


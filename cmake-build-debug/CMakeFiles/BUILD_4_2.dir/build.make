# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BUILD_4_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BUILD_4_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BUILD_4_2.dir/flags.make

CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj: CMakeFiles/BUILD_4_2.dir/flags.make
CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj: ../Esercizio2/es4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\BUILD_4_2.dir\Esercizio2\es4.c.obj   -c C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\Esercizio2\es4.c

CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.i"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\Esercizio2\es4.c > CMakeFiles\BUILD_4_2.dir\Esercizio2\es4.c.i

CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.s"
	C:\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\Esercizio2\es4.c -o CMakeFiles\BUILD_4_2.dir\Esercizio2\es4.c.s

CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.requires:

.PHONY : CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.requires

CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.provides: CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.requires
	$(MAKE) -f CMakeFiles\BUILD_4_2.dir\build.make CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.provides.build
.PHONY : CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.provides

CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.provides.build: CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj


# Object files for target BUILD_4_2
BUILD_4_2_OBJECTS = \
"CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj"

# External object files for target BUILD_4_2
BUILD_4_2_EXTERNAL_OBJECTS =

BUILD_4_2.exe: CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj
BUILD_4_2.exe: CMakeFiles/BUILD_4_2.dir/build.make
BUILD_4_2.exe: CMakeFiles/BUILD_4_2.dir/linklibs.rsp
BUILD_4_2.exe: CMakeFiles/BUILD_4_2.dir/objects1.rsp
BUILD_4_2.exe: CMakeFiles/BUILD_4_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BUILD_4_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BUILD_4_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BUILD_4_2.dir/build: BUILD_4_2.exe

.PHONY : CMakeFiles/BUILD_4_2.dir/build

CMakeFiles/BUILD_4_2.dir/requires: CMakeFiles/BUILD_4_2.dir/Esercizio2/es4.c.obj.requires

.PHONY : CMakeFiles/BUILD_4_2.dir/requires

CMakeFiles/BUILD_4_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BUILD_4_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BUILD_4_2.dir/clean

CMakeFiles/BUILD_4_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\cmake-build-debug C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\cmake-build-debug C:\Users\Michele\Desktop\Documents\Scuola\Seconda\C\EserciziC\cmake-build-debug\CMakeFiles\BUILD_4_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BUILD_4_2.dir/depend


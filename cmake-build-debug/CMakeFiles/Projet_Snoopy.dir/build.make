# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Projet_Snoopy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Projet_Snoopy.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Projet_Snoopy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Projet_Snoopy.dir/flags.make

CMakeFiles/Projet_Snoopy.dir/main.c.obj: CMakeFiles/Projet_Snoopy.dir/flags.make
CMakeFiles/Projet_Snoopy.dir/main.c.obj: C:/Users/jbirm/OneDrive/Documents/GitHub/Projet_Snoopy/Projet_Snoopy/main.c
CMakeFiles/Projet_Snoopy.dir/main.c.obj: CMakeFiles/Projet_Snoopy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Projet_Snoopy.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Projet_Snoopy.dir/main.c.obj -MF CMakeFiles\Projet_Snoopy.dir\main.c.obj.d -o CMakeFiles\Projet_Snoopy.dir\main.c.obj -c C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\main.c

CMakeFiles/Projet_Snoopy.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Projet_Snoopy.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\main.c > CMakeFiles\Projet_Snoopy.dir\main.c.i

CMakeFiles/Projet_Snoopy.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Projet_Snoopy.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\main.c -o CMakeFiles\Projet_Snoopy.dir\main.c.s

# Object files for target Projet_Snoopy
Projet_Snoopy_OBJECTS = \
"CMakeFiles/Projet_Snoopy.dir/main.c.obj"

# External object files for target Projet_Snoopy
Projet_Snoopy_EXTERNAL_OBJECTS =

Projet_Snoopy.exe: CMakeFiles/Projet_Snoopy.dir/main.c.obj
Projet_Snoopy.exe: CMakeFiles/Projet_Snoopy.dir/build.make
Projet_Snoopy.exe: CMakeFiles/Projet_Snoopy.dir/linkLibs.rsp
Projet_Snoopy.exe: CMakeFiles/Projet_Snoopy.dir/objects1.rsp
Projet_Snoopy.exe: CMakeFiles/Projet_Snoopy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Projet_Snoopy.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Projet_Snoopy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Projet_Snoopy.dir/build: Projet_Snoopy.exe
.PHONY : CMakeFiles/Projet_Snoopy.dir/build

CMakeFiles/Projet_Snoopy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Projet_Snoopy.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Projet_Snoopy.dir/clean

CMakeFiles/Projet_Snoopy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\cmake-build-debug C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\cmake-build-debug C:\Users\jbirm\OneDrive\Documents\GitHub\Projet_Snoopy\Projet_Snoopy\cmake-build-debug\CMakeFiles\Projet_Snoopy.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Projet_Snoopy.dir/depend


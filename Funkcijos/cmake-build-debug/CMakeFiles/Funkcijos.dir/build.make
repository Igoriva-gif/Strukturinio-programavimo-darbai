# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Funkcijos.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Funkcijos.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Funkcijos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Funkcijos.dir/flags.make

CMakeFiles/Funkcijos.dir/main.cpp.obj: CMakeFiles/Funkcijos.dir/flags.make
CMakeFiles/Funkcijos.dir/main.cpp.obj: C:/Users/PC/Documents/Programavimas/Strukturinio-programavimo-darbai/Funkcijos/main.cpp
CMakeFiles/Funkcijos.dir/main.cpp.obj: CMakeFiles/Funkcijos.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Funkcijos.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Funkcijos.dir/main.cpp.obj -MF CMakeFiles\Funkcijos.dir\main.cpp.obj.d -o CMakeFiles\Funkcijos.dir\main.cpp.obj -c C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\main.cpp

CMakeFiles/Funkcijos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Funkcijos.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\main.cpp > CMakeFiles\Funkcijos.dir\main.cpp.i

CMakeFiles/Funkcijos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Funkcijos.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\main.cpp -o CMakeFiles\Funkcijos.dir\main.cpp.s

# Object files for target Funkcijos
Funkcijos_OBJECTS = \
"CMakeFiles/Funkcijos.dir/main.cpp.obj"

# External object files for target Funkcijos
Funkcijos_EXTERNAL_OBJECTS =

Funkcijos.exe: CMakeFiles/Funkcijos.dir/main.cpp.obj
Funkcijos.exe: CMakeFiles/Funkcijos.dir/build.make
Funkcijos.exe: CMakeFiles/Funkcijos.dir/linkLibs.rsp
Funkcijos.exe: CMakeFiles/Funkcijos.dir/objects1.rsp
Funkcijos.exe: CMakeFiles/Funkcijos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Funkcijos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Funkcijos.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Funkcijos.dir/build: Funkcijos.exe
.PHONY : CMakeFiles/Funkcijos.dir/build

CMakeFiles/Funkcijos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Funkcijos.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Funkcijos.dir/clean

CMakeFiles/Funkcijos.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\cmake-build-debug C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\cmake-build-debug C:\Users\PC\Documents\Programavimas\Strukturinio-programavimo-darbai\Funkcijos\cmake-build-debug\CMakeFiles\Funkcijos.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Funkcijos.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vinayak/ros_workspace/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vinayak/ros_workspace/build

# Utility rule file for run_tests_cv_bridge_nosetests_python_bindings.py.

# Include the progress variables for this target.
include vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/progress.make

vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py:
	cd /home/vinayak/ros_workspace/build/vision_opencv/cv_bridge/test && ../../../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/kinetic/share/catkin/cmake/test/run_tests.py /home/vinayak/ros_workspace/build/test_results/cv_bridge/nosetests-python_bindings.py.xml "/usr/bin/cmake -E make_directory /home/vinayak/ros_workspace/build/test_results/cv_bridge" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/vinayak/ros_workspace/src/vision_opencv/cv_bridge/test/python_bindings.py --with-xunit --xunit-file=/home/vinayak/ros_workspace/build/test_results/cv_bridge/nosetests-python_bindings.py.xml"

run_tests_cv_bridge_nosetests_python_bindings.py: vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py
run_tests_cv_bridge_nosetests_python_bindings.py: vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/build.make

.PHONY : run_tests_cv_bridge_nosetests_python_bindings.py

# Rule to build all files generated by this target.
vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/build: run_tests_cv_bridge_nosetests_python_bindings.py

.PHONY : vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/build

vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/clean:
	cd /home/vinayak/ros_workspace/build/vision_opencv/cv_bridge/test && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/cmake_clean.cmake
.PHONY : vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/clean

vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/depend:
	cd /home/vinayak/ros_workspace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vinayak/ros_workspace/src /home/vinayak/ros_workspace/src/vision_opencv/cv_bridge/test /home/vinayak/ros_workspace/build /home/vinayak/ros_workspace/build/vision_opencv/cv_bridge/test /home/vinayak/ros_workspace/build/vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vision_opencv/cv_bridge/test/CMakeFiles/run_tests_cv_bridge_nosetests_python_bindings.py.dir/depend


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

# Utility rule file for run_tests_cv_camera_rostest_test_cv_camera.test.

# Include the progress variables for this target.
include cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/progress.make

cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test:
	cd /home/vinayak/ros_workspace/build/cv_camera && ../catkin_generated/env_cached.sh /usr/bin/python /opt/ros/kinetic/share/catkin/cmake/test/run_tests.py /home/vinayak/ros_workspace/build/test_results/cv_camera/rostest-test_cv_camera.xml "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/vinayak/ros_workspace/src/cv_camera --package=cv_camera --results-filename test_cv_camera.xml --results-base-dir \"/home/vinayak/ros_workspace/build/test_results\" /home/vinayak/ros_workspace/src/cv_camera/test/cv_camera.test "

run_tests_cv_camera_rostest_test_cv_camera.test: cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test
run_tests_cv_camera_rostest_test_cv_camera.test: cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/build.make

.PHONY : run_tests_cv_camera_rostest_test_cv_camera.test

# Rule to build all files generated by this target.
cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/build: run_tests_cv_camera_rostest_test_cv_camera.test

.PHONY : cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/build

cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/clean:
	cd /home/vinayak/ros_workspace/build/cv_camera && $(CMAKE_COMMAND) -P CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/cmake_clean.cmake
.PHONY : cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/clean

cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/depend:
	cd /home/vinayak/ros_workspace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vinayak/ros_workspace/src /home/vinayak/ros_workspace/src/cv_camera /home/vinayak/ros_workspace/build /home/vinayak/ros_workspace/build/cv_camera /home/vinayak/ros_workspace/build/cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cv_camera/CMakeFiles/run_tests_cv_camera_rostest_test_cv_camera.test.dir/depend


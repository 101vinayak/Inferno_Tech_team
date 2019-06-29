# CMake generated Testfile for 
# Source directory: /home/vinayak/ros_workspace/src/vision_opencv/image_geometry/test
# Build directory: /home/vinayak/ros_workspace/build/vision_opencv/image_geometry/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_image_geometry_nosetests_directed.py "/home/vinayak/ros_workspace/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/vinayak/ros_workspace/build/test_results/image_geometry/nosetests-directed.py.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/vinayak/ros_workspace/build/test_results/image_geometry" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/vinayak/ros_workspace/src/vision_opencv/image_geometry/test/directed.py --with-xunit --xunit-file=/home/vinayak/ros_workspace/build/test_results/image_geometry/nosetests-directed.py.xml")
add_test(_ctest_image_geometry_gtest_image_geometry-utest "/home/vinayak/ros_workspace/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/vinayak/ros_workspace/build/test_results/image_geometry/gtest-image_geometry-utest.xml" "--return-code" "/home/vinayak/ros_workspace/devel/lib/image_geometry/image_geometry-utest --gtest_output=xml:/home/vinayak/ros_workspace/build/test_results/image_geometry/gtest-image_geometry-utest.xml")

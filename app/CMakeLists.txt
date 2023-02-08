# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)
add_library(hello SHARED src/main/cpp/HelloNDK.cpp)
target_link_libraries(hello ${log-lib})
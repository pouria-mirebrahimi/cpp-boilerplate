cmake_minimum_required(VERSION 3.22)

project(
  CppBoilerplate
  VERSION     1.0.0
  LANGUAGES   C CXX
)

# Compiler
set(CMAKE_CXX_STANDARD            23)
set(CMAKE_CXX_STANDARD_REQUIRED   ON)
set(CMAKE_CXX_EXTENSIONS          OFF)

# Vairables
set(APPLICATION_NAME    CppBoilerplate)
set(LIBRARY_SOURCE      src/lib)
set(APPLICATION_SOURCE  src/app)
set(UNIT_TEST_SOURCE    test)
set(CMAKE_MODULE_PATH   "${PROJECT_SOURCE_DIR}/cmake/")

# Sub-directories
add_subdirectory(${LIBRARY_SOURCE})
add_subdirectory(${APPLICATION_SOURCE})
add_subdirectory(${UNIT_TEST_SOURCE})


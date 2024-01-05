set(CMAKE_INCLUDE_CURRENT_DIR ON)
include(GoogleTest)

include(FetchContent)
FetchContent_Declare(
  CPD
  URL https://github.com/pmd/pmd/releases/download/pmd_releases%2F7.0.0-rc4/pmd-dist-7.0.0-rc4-bin.zip
)
FetchContent_MakeAvailable(CPD)

find_program(PMD_EXECUTABLE NAMES pmd PATHS ${PROJECT_BINARY_DIR}/_deps/cpd-src/bin REQUIRED) 

add_custom_target(CPD
COMMENT "Result Copy/Paste Detector (CPD)"
COMMAND ${PMD_EXECUTABLE} cpd --minimum-tokens 10 --dir ${PROJECT_SOURCE_DIR}/src --dir ${PROJECT_SOURCE_DIR}/include --language cpp
)

set(GTEST_SRC_FILES
  test_resource.cpp
)

cmake_path(GET GTEST_SRC_FILES STEM TEST_NAME)
add_executable(${TEST_NAME} ${GTEST_SRC_FILES})
target_link_libraries(${TEST_NAME} PRIVATE App_lib GTest::gtest GTest::gtest_main)
gtest_discover_tests(${TEST_NAME} WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})
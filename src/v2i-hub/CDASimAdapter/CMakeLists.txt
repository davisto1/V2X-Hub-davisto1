PROJECT ( CDASimAdapter VERSION 7.5.1 LANGUAGES CXX )
set(CMAKE_CXX_STANDARD 17)

FIND_PACKAGE( carma-clock )
BuildTmxPlugin ( )

TARGET_LINK_LIBRARIES (${PROJECT_NAME} tmxutils ::carma-clock jsoncpp)

# ############
# # Testing ##
# ############
ADD_LIBRARY(${PROJECT_NAME}_lib src/CDASimConnection.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME}_lib PUBLIC tmxutils ::carma-clock jsoncpp )
SET(BINARY ${PROJECT_NAME}_test)
FILE(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false test/*.h test/*.cpp)
SET(SOURCES ${TEST_SOURCES} WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/test)
ADD_EXECUTABLE(${BINARY} ${TEST_SOURCES})
ADD_TEST(NAME ${BINARY} COMMAND ${BINARY})
TARGET_INCLUDE_DIRECTORIES(${BINARY} PUBLIC /usr/local/lib src/) 
TARGET_LINK_LIBRARIES(${BINARY} PUBLIC ${PROJECT_NAME}_lib gtest gmock tmxutils ::carma-clock jsoncpp) 
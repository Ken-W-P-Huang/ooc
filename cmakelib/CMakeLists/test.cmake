########################################################################################################################
#  编译
########################################################################################################################
unset(sources)
aux_source_directory(. sources)
add_executable(${PROJECT_NAME}_test ${sources})
########################################################################################################################
#  链接
########################################################################################################################
linkTestSubDirectories(${PROJECT_NAME}_test ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME}_test gtest gmock )


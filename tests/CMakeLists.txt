find_package(GTest REQUIRED)

add_executable(temporal_test temporal_test.cpp)
target_link_libraries(temporal_test
    PRIVATE
        exist
        GTest::GTest
        GTest::Main
)

add_test(NAME temporal_test COMMAND temporal_test)

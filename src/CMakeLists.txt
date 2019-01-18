set(Boost_NO_SYSTEM_PATHS ON)
find_package(Boost REQUIRED date_time)

add_executable(hello hello.cpp)

add_executable(version version.cpp)

add_executable(cur_time_boost cur_time_boost.cpp)
target_include_directories(cur_time_boost PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(cur_time_boost ${Boost_DATE_TIME_LIBRARY})

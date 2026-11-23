cmake_minimum_required(VERSION 3.16)
project(cursor-trial-reset CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cursortrialreset
    src/main.cpp
    src/resetter.cpp
    src/fingerprint.cpp
    src/backup.cpp
)

target_include_directories(cursortrialreset PRIVATE include)

if(WIN32)
    target_link_libraries(cursortrialreset PRIVATE userenv)
endif()

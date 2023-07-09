cmake_minimum_required(VERSION 3.12)

project(cpp_playground)

# Builds the Rust Library
execute_process(
    COMMAND cargo build
    WORKING_DIRECTORY /home/stephan/Projects/rust-android-ios-poc/random_rust_pkg
    )

add_executable(cpp_playground main.cpp)


target_link_libraries(
    cpp_playground 
    /home/stephan/Projects/rust-android-ios-poc/random_rust_pkg/target/debug/librandom_rust_pkg.a
    pthread
    dl
)

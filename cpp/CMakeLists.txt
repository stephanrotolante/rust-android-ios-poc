cmake_minimum_required(VERSION 3.12)

project(android_cpp_rust_interop)

# Builds the Rust Library
execute_process(
    COMMAND ./build_x86_64_linux_android ## this will need to change depending on your arc
    WORKING_DIRECTORY /home/stephan/Projects/rust-android-ios-poc/random_rust_pkg
    )

add_library(
    android_cpp_rust_interop
    SHARED
    random_module.cpp)

target_link_libraries(
    android_cpp_rust_interop  
    /home/stephan/Projects/rust-android-ios-poc/random_rust_pkg/target/x86_64-linux-android/debug/librandom_rust_pkg.a
    /home/stephan/Software/openssl/libcrypto.a
    /home/stephan/Software/openssl/libssl.a
    log
)
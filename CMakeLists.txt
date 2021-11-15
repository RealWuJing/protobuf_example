cmake_minimum_required(VERSION 3.0.0)
project(protobuf_example VERSION 0.1.0)

message(${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS test.proto)

include_directories(${PROTOBUF_INCLUDE_DIRS})

aux_source_directory(. PERSON_SRCS)

add_executable(person ${PERSON_SRCS} ${PROTO_SRCS} ${PROTO_HDRS})

target_link_libraries(person ${PROTOBUF_LIBRARIES})
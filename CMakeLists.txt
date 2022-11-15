cmake_minimum_required(VERSION 3.21)
project(lancer)

set(CMAKE_CXX_STANDARD 14)

add_executable(lancer main.cpp lancer.cpp lancer.h parser/Parser.cpp parser/Parser.h parser/TimelineParser.cpp parser/TimelineParser.h parser/HandlerParser.cpp parser/HandlerParser.h parser/CheckParser.cpp parser/CheckParser.h)

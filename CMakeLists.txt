cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(mosfet-substrate-testing)

find_package(Geant4 11.2 REQUIRED ui_all vis_all)
include(${Geant4_USE_FILE})

file(GLOB sources ${PROJECT_SOURCE_DIR}/*.cc)
file(GLOB headers ${PROJECT_SOURCE_DIR}/*.hh)

add_executable(sim sim.cc ${sources} ${headers})
target_link_libraries(sim ${Geant4_LIBRARIES})
add_custom_target(mosfet-substrate-testing DEPENDS sim)

if(WIN32)
    # remove Debug and other unnecessary configurations
    # https://cmake.org/pipermail/cmake/2007-March/013081.html
    set(CMAKE_CONFIGURATION_TYPES "Release" CACHE INTERNAL "")
    # https://stackoverflow.com/a/37994396/1801749
    set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT mosfet-substrate-testing)
    # automacially add \path\to\gears to user PATH environment variable
else()
    add_custom_target(setup ALL echo
    COMMAND echo To install, please move gears to a desired folder.
    COMMAND echo)
endif()







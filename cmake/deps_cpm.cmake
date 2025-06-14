include (cmake/setup_cpm.cmake)

#CPMAddPackage(
#    NAME Catch2
#
#    GITHUB_REPOSITORY "catchorg/Catch2"
#    GIT_TAG v3.5.2
#     OPTIONS
#    "CATCH_BUILD_TESTING OFF"
#    "CATCH_BUILD_EXAMPLES OFF"
#    "CATCH_BUILD_EXTRA_TESTS OFF"
#    "CATCH_BUILD_FUZZERS OFF"
#)

CPMAddPackage(
    NAME pigpio
    GITHUB_REPOSITORY "joan2937/pigpio"
    GIT_TAG "v79"
)
add_library(pigpio::pigpio ALIAS pigpio)
FROM mcr.microsoft.com/devcontainers/base:ubuntu-24.04

ENV DEBIAN_FRONTEND =noninteractive 
RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt-get install -y --no-install-recommends \
        build-essential \
        gcc-arm-linux-gnueabihf \
        g++-arm-linux-gnueabihf \
        gcc-aarch64-linux-gnu \
        g++-aarch64-linux-gnu \
        gdb-multiarch \
        ninja-build \
        openssh-client \
        ca-certificates \
        pgp \
        wget \
        cmake \
        gcc-14-aarch64-linux-gnu \
        g++-14-aarch64-linux-gnu 
# Get latest CMake for CMakePresets support

RUN git clone https://github.com/joan2937/pigpio.git /opt/pigpio && \
    cd /opt/pigpio && \
    make CROSS_PREFIX=aarch64-linux-gnu- && \
    make install
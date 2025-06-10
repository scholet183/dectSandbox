#pragma once

#include <chrono>
#include <thread>
#include <print>
#include <pigpio/pigpio.h>

namespace pins {
static constexpr auto RST_N_PIN = 0;
}

namespace pin_state {
static constexpr auto LOW = 0;
static constexpr auto HIGH = 1;
} // namespace pin_state

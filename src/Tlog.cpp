#include "spdlog/sinks/stdout_color_sinks.h"
#include "Tlog.h"
#include "spdlog/spdlog.h"

#define TLOG_INFO  Tlog::log()

bool Tlog::log() {
    innerLog( );
    auto console = spdlog::stdout_color_mt("console");
    console->info("Welcome to Y language!");
    // Do silly things, using some C++17 features to enforce C++17 builds only.
    constexpr int digits[2] = {0, 1};
    auto [zero, one] = digits;
    spdlog::info("Welcome to Y!");
    return zero + one > 3;
}



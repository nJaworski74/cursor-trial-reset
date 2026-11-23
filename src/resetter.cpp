// resetter.cpp — part of cursor-trial-reset.

#include "cursortrialreset/resetter.h"

#include <cstdio>

namespace cursortrialreset {

Resetter::Resetter(const std::string& config_path)
    : config_path_(config_path) {}

void Resetter::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Resetter::run() {
    if (verbose_) std::fprintf(stderr, "[cursor-trial-reset] resetter: run\n");
    // core logic lives here
    return true;
}

}  // namespace cursortrialreset

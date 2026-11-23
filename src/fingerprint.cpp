// fingerprint.cpp — part of cursor-trial-reset.

#include "cursortrialreset/fingerprint.h"

#include <cstdio>

namespace cursortrialreset {

Fingerprint::Fingerprint(const std::string& config_path)
    : config_path_(config_path) {}

void Fingerprint::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Fingerprint::run() {
    if (verbose_) std::fprintf(stderr, "[cursor-trial-reset] fingerprint: run\n");
    // core logic lives here
    return true;
}

}  // namespace cursortrialreset

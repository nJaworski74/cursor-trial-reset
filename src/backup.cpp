// backup.cpp — part of cursor-trial-reset.

#include "cursortrialreset/backup.h"

#include <cstdio>

namespace cursortrialreset {

Backup::Backup(const std::string& config_path)
    : config_path_(config_path) {}

void Backup::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Backup::run() {
    if (verbose_) std::fprintf(stderr, "[cursor-trial-reset] backup: run\n");
    // core logic lives here
    return true;
}

}  // namespace cursortrialreset

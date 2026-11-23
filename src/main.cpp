// main.cpp — entry point. Wires config and subsystems together.

#include "cursortrialreset/settings.h"
#include "cursortrialreset/resetter.h"
#include "cursortrialreset/fingerprint.h"
#include "cursortrialreset/backup.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    cursortrialreset::Settings settings = cursortrialreset::Settings::load_default();
    cursortrialreset::Resetter resetter(settings.store_path);
    cursortrialreset::Fingerprint fingerprint(settings.store_path);
    cursortrialreset::Backup backup(settings.store_path);
    std::fprintf(stderr, "[cursor-trial-reset] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

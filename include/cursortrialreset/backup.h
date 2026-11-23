// backup — part of cursor-trial-reset.

#pragma once

#include <string>
#include <vector>

namespace cursortrialreset {

class Backup {
public:
    explicit Backup(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace cursortrialreset

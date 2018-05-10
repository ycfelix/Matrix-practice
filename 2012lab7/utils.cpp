#include <chrono>

using namespace std::chrono;

/**
 * Get the current UNIX timestamp in milliseconds.
 * @return
 */
long current_time_millis() {
    milliseconds ms = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
    return ms.count();
}

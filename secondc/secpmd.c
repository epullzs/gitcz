#include <chrono>
#include <thread>

int main() {
    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
    using std::chrono::system_clock;

    sleep_for(10ns);
    sleep_until(system_clock::now() + 1s);
}

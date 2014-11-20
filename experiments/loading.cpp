// makes a shitty loading bar that just increments every half second.
#include <iostream>
#include <cstdlib>

int main() {
    std::cout << std::unitbuf << "[          ]\b\b\b\b\b\b\b\b\b\b\b";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "#";
    std::system("sleep 0.5s");
    std::cout << "\n";
    return 0;
}

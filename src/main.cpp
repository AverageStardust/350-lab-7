#include <iostream>

// #include "entity_manager.h"
#include "registry.h"

int main() {
    Registry<std::string> reg;

    size_t first = reg.store("Hello");
    size_t second = reg.store("Goodbye");
    reg.remove(second);

    std::cout << reg[first] << "\n";
    std::cout << reg[second] << "\n";

    return 0;
}

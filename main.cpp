#include <iostream>
#include "ReadData.h"


int main() {
    ReadData rd;
    if (rd.readData("data.txt")) {
        std::cout << rd.getData() << std::endl;
    } else {
        std::cout << "Error reading file" << std::endl;
    }
    return 0;
}

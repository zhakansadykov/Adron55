#include "ReadData.h"

ReadData::ReadData() {
    data = "";
}   

bool ReadData::readData(const std::string filename) {
    std::ifstream
    file(filename.c_str());
    if (!file.is_open()) {
        return false;
    }
    std::string line;
    while (std::getline(file, line)) {
        data += line + "\n";
    }
    file.close();
    return true;
}   

ReadData::~ReadData() {
    // Destructor
}

std::string ReadData::getData() {
    return data;
}   

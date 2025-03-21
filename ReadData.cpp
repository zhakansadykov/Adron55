#include "ReadData.h"

ReadData::ReadData() {
    data = "";
}   

bool readConfigFile(const std::string filename) {
    std::ifstream
    file(filename.c_str());
    if (!file.is_open()) {
        return false;
    }
    std::string line;

    file.close();
    return true;
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

/*
// This function returns the data read from the file
std::string ReadData::getData() {
    return data;
} 
*/  

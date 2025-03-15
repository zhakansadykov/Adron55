#ifndef READDATA_H
#define READDATA_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class ReadData
{
    protected:
    std::string data;

    public:
    ReadData();
    bool readData(const std::string filename);
    ~ReadData();
    
    std::string getData() { return data; }

};

#endif // READDATA_H
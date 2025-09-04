#pragma once
#include "Graph/Graph.hpp"
#include <string>

class DataLoader {
public:
    static Graph loadFromCSV(const std::string& stationsFile, 
                           const std::string& connectionsFile);
    
    static Graph loadTorontoTTC(); // Pre-configured for TTC
    
private:
    static void parseStationLine(const std::string& line, Station& station);
    static void parseConnectionLine(const std::string& line, 
                                  int& from, int& to, int& weight);
};

#pragma once
#include <vector>
#include <unordered_map>
#include <string>
#include "Models/Station.hpp"
#include "Models/Route.hpp"

class Graph {
private:
    std::unordered_map<int, Station> stations;
    std::unordered_map<int, std::vector<std::pair<int, int>>> adjacencyList; // station_id -> {neighbor_id, weight}
    
public:
    void addStation(const Station& station);
    void addConnection(int from, int to, int weight);
    const std::vector<std::pair<int, int>>& getNeighbors(int stationId) const;
    const Station& getStation(int stationId) const;
    const std::unordered_map<int, Station>& getAllStations() const;
    bool stationExists(int stationId) const;
};

#pragma once
#include <string>
#include <vector>
#include <unordered_set>

/**
 * @class Station
 * @brief Represents a transit station with properties and connections
 */
class Station {
private:
    int id;
    std::string name;
    double latitude;
    double longitude;
    std::vector<std::string> lines; // Lines that serve this station (e.g., "YUS", "BD")
    std::unordered_set<int> connections; // Connected station IDs
    
public:
    // Constructors
    Station();
    Station(int id, const std::string& name, double lat, double lon);
    
    // Getters
    int getId() const;
    const std::string& getName() const;
    double getLatitude() const;
    double getLongitude() const;
    const std::vector<std::string>& getLines() const;
    const std::unordered_set<int>& getConnections() const;
    
    // Setters
    void setId(int newId);
    void setName(const std::string& newName);
    void setLatitude(double lat);
    void setLongitude(double lon);
    
    // Methods
    void addLine(const std::string& line);
    void removeLine(const std::string& line);
    void addConnection(int stationId);
    void removeConnection(int stationId);
    bool hasLine(const std::string& line) const;
    bool isConnectedTo(int stationId) const;
    
    // Utility
    double distanceTo(const Station& other) const;
    std::string toString() const;
};

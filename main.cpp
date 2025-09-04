#include <iostream>
#include "Data/DataLoader.hpp"
#include "Algorithms/Dijkstra.hpp"
#include "UI/CLI.hpp"

int main() {
    std::cout << "RouteSynapse - Toronto Transit Navigator\n";
    
    try {
        // Load Toronto transit data
        Graph torontoGraph = DataLoader::loadFromCSV("data/ttc_stations.csv", 
                                                    "data/ttc_connections.csv");
        
        // Initialize routing algorithm
        Dijkstra router(torontoGraph);
        
        // Start command line interface
        CLI interface(router);
        interface.run();
        
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}

#pragma once
#include "Edge.h"
#include "Node.h"
#include <vector>

class Packet {
public:
    Packet combine(Packet, Packet);
    vector<Edge> findPath()
private:
    Node sourcesAddress;
    Node destination; 
};

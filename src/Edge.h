#pragma once
#include “Node.h”

class Edge {
public:
    // Node 1, Node 2 and Weight
    Edge(Node, Node, int);
    Node getNode1();
    Node getNode2();
    int getWeight();
private:
    Node node1;
    Node node2;
    int weight;
};

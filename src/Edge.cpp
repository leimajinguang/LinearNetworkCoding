#include "Edge.h"

Edge::Edge(Node node1, Node node2, int weight) {
    this->node1 = node1;
    this->node2 = node2;
    this->weight = weight;
}

Node Edge::getNode1() {
    return node1;
}

Node Edge::getNode2() {
    return node2;
}

int Edge::getWeight() {
    return weight;
}

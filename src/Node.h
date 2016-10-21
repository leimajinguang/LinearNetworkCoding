#pragma once
#include <string>
#include <vector>
#include "Packet.h"

using namespace std;

class Node {
public:
    // Name
    Node(string);
    string getName();
    void sendPacket();
    void receivePacket();
    bool isConnectedWith(Node);
private:
    string name;
    bool includedByEdge;
    vector<Packet> packets;
};

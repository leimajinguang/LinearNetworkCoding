#include "Packet.h"
#include "Node.h"
#include <string>
#include <vector>
#include <stdio.h>

int main(){
    //build a network with random number of nodes and random edge weights, ignore the edges with weight more than 10.
    
    map path{};
    Node source;
    source.distance = 0;
    path[source.name] = source.distance;
    while(path is not empty){
        current = path.pop(path.min());
        for each node, n adjacent to current:
            if (n.distance>current.distance+weight of edges from n to current){
                n.distance = current.distance+weight of edges from n to current;
                n.parent = current;
                if (n not in path){
                    path[n.name] = n.distance;
                }
            }
       
    }
    can you see this line?
    
    
    
}

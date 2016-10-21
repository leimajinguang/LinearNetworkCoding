#include <map>
#include <vector>
#include “Edge.h”
#include “Node.h”

using namespace std;

int main() {
struct keyComp {
	bool operator()(Edge& edge1, Edge& edge2) {
		return edge1 < edge2; // Maybe the other way around i.e. >	
	}
}
	// Third parameter is used to sort map (we want the min value on top)
map<string, Edge, keyComp> network = {{“AB”, AB}, {“BC”, BC}, {“BE”, BE}, {“BF”, BF}, {“BD”, BD}};
map<string, Edge> stores;
send();
}

void send() {
Edge current = stores->second; // First the key; we want the value
stores.delete(current);
}




Path Recording:
vector<Node> 



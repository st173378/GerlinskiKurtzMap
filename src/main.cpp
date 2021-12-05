//============================================================================
// Name        : GerlinskiKurtzMap.cpp
// Author      : Ellen Gerlinski Martin Kurtz
// Version     : 1
// Copyright   : /todo
// Description : /todo
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <tuple>
#include <vector>
#include <thread>



using namespace std;
tuple<int,int,double,double,int> parseNode(const string a){

}
int main() {
    time_t currentTime;
    time(&currentTime);
    int startTime = currentTime;
    int a, b, e, f, g;
    int nodeNumber, vertexNumber;
    double c, d;
    string line;

    vector<tuple<int, int, double, double, int>> nodes;
    vector<tuple<int, int, int, int, int>> vertices;

    ifstream inputStream("germany.fmi");

    // Skip header comment
    for (int i = 0; i < 5; ++i) {
        getline(inputStream,line);
    }
    // Read nodeNumber
    inputStream >> nodeNumber;
    nodes.reserve(nodeNumber);

    // Read vertexNumber
    inputStream >> vertexNumber;
    vertices.reserve(vertexNumber);

    // Read nodes
    for (int i = 0; i < nodeNumber; ++i) {
        inputStream >> a >> b >> c >> d >> e;
        nodes.push_back({a, b,c ,d, e});
    }

    // Read vertex
    for (int i = 0; i < vertexNumber; ++i) {
        inputStream >> a >> b >> f >> g >> e;
        vertices.push_back({a, b, f, g, e});
    }

    time(&currentTime);
    int timeElapsed = currentTime - startTime;
    cout<<"It took "<<timeElapsed<<" seconds to run the program"<<endl;
    return 0;
	return 0;
}


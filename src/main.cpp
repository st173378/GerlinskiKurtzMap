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
    int nthreads = std::thread::hardware_concurrency();
    cout << nthreads << endl;

    ifstream inputStream("../resources/germany.txt");
    cout << inputStream.good() << endl;
    cout << inputStream.is_open() << endl;
    string line;
    int nodeNumber;
    int vertexNumber;
    for (int i = 0; i < 5; ++i) {
        getline(inputStream,line);
    }
    getline(inputStream,line);
    istringstream iss(line);
    iss >> nodeNumber;
    vector<tuple<int,int,double,double,int>> nodes;
    nodes.reserve(nodeNumber);

    getline(inputStream,line);
    istringstream ass(line);
    ass >> vertexNumber;
    vector<tuple<int,int,double,double,int>> vertices;
    vertices.reserve(vertexNumber);
    for (int i = 0; i < nodeNumber; ++i) {
        getline(inputStream,line);
        int a;
        int b;
        double c;
        double d;
        int e;
        istringstream stringStream(line);
        stringStream >> a >> b >> c >> d >> e;
        nodes.push_back({a,b,c,d,e});
    }
    for (int i = 0; i < vertexNumber; ++i) {
        getline(inputStream,line);
        int a;
        int b;
        double c;
        double d;
        int e;
        istringstream stringStream(line);
        stringStream >> a >> b >> c >> d >> e;
        vertices.push_back({a,b,c,d,e});
    }
    time(&currentTime);
    int timeElapsed = currentTime - startTime;
    cout<<"It took "<<timeElapsed<<" seconds to run the program"<<endl;



	return 0;
}


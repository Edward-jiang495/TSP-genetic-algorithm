#ifndef CODE_GA_H
#define CODE_GA_H
#include "node.h"
#include <vector>
#include <sstream>
#include <ostream>
#include <fstream>
#include <random>
#include<cstdlib>
#include<ctime>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
class GA {
private:
    vector<vector<node>> matrix;
    //the adjacency matrix
    vector<vector<node>> pop;
    //the population of genetic algorithm
    int popsize;
    //the population size
    double cost;
    //cost
public:
    GA();
    //default constructor
    double getCost(){return cost;};
    //return cost
    void load();
    //load both node and position files
    double summation(vector<node>&);
    //calculate the cost of a given path
    void GASelection();
    //selection: elitism
    void GACrossover();
    //crossover: Davis order crossover
    void GAMutation();
    //mutation: random swapping mutation

};


#endif //CODE_GA_H

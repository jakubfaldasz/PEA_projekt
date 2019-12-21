#pragma once
#include <vector>
#include "TSP.h"
#include <stdlib.h>
#include <time.h>
class GeneticAlgorithm
{
	TSP tsp;
	std::vector<std::vector<int>> instance;
	int instanceSize;

	int childrenCount = 3;
	int pupulationSize = 30;
	std::vector<std::vector<int>> population;
	std::vector<std::vector<int>> previousPopulation;

	std::vector<std::vector<int>> ratePopulation(std::vector<std::vector<int>> populationToRate );
	std::vector<std::vector<int>> selectNewGeneration(std::vector<std::vector<int>> candidates);
	void change(std::vector<std::vector<int>>& vect);
	std::vector<std::vector<int>> PMX(std::vector<int> p1, std::vector<int> p2 );
	std::vector<std::vector<int>> OX(std::vector<std::vector<int>>& parents);

public:
	GeneticAlgorithm(TSP& tsp);

	std::vector<int> compute();
};


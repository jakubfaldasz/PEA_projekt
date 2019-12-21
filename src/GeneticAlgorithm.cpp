#include "GeneticAlgorithm.h"

std::vector<std::vector<int>> GeneticAlgorithm::PMX(std::vector<int> p1, std::vector<int> p2)
{
	std::vector<std::vector<int>> children;

	int slicePoint1, slicePoint2, difference;

	for (int i = 0; i < childrenCount; i++) {
		slicePoint1 = rand() % instanceSize;
		do
			slicePoint2 = rand() % (instanceSize + 1);
		while (slicePoint2 <= slicePoint1);

		difference = slicePoint2 - slicePoint1;
		std::vector<int> child; 
		child = std::vector<int>(p1.begin() + slicePoint1, p1.begin() + slicePoint2);

		for (int j = 0; j < instanceSize; j++) {
			if (j >= slicePoint1 && j <= slicePoint2)
				continue;
			
			if (std::find(child.begin(), child.end(), p2[j]) != child.end()) {

			}
		}
	}

	return std::vector<std::vector<int>>();
}

GeneticAlgorithm::GeneticAlgorithm(TSP& tsp)
{
	srand(time(NULL));
	this->tsp = tsp;
	instanceSize = tsp.getProblemSize();
}

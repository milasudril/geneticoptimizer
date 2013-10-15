#ifdef __WAND__

target[
	name[
		geneticoptimizer.o
	]
	type[
		object
	]
]
#endif


#include "geneticoptimizer.h"

int GeneticOptimizer::GeneticOptimizer::run()
	{
	return STATUS_OK;
	}

void GeneticOptimizer::GeneticOptimizer::destroy()
	{
	delete this;
	}

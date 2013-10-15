#ifdef __WAND__

target[
	name[
		geneticoptimizer.exe
	]
	type[
		application
	]
	platform[
		win32
	]
]
#endif
#ifdef __WAND__

target[
	name[
		geneticoptimizer
	]
	type[
		application
	]
]
#endif


#include "geneticoptimizer.h"

#include <herbs/maindefault.h>

Herbs::Application* Herbs::Application::instanceCreate()
	{
	return new GeneticOptimizer::GeneticOptimizer();
	}

#ifdef __WAND__

dependencies[
	geneticoptimizer.o
]
target[
	name[
		geneticoptimizer.h
	]
	type[
		include
	]
]
#endif

#ifndef guard_geneticoptimizer_H
#define guard_geneticoptimizer_H

#include <herbs/application.h>

namespace GeneticOptimizer
	{
	class GeneticOptimizer:public Herbs::Application
		{
		public:
			int run();
			void destroy();
		};
	}

#endif

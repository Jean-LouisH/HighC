#include "CompilerSwitch.h"

#if (COMPILER_SWITCH == Cpp)
#include <HighC.h>

class Test
{
public:
	void PrintMainToConsole();
	void FileOperations();
	void StringComparison();
};

#endif
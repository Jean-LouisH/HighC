#include "Memory.h"
#include <stdlib.h>

hcString hcConvertMemoryU8ToString(hcMemoryU8 memory)
{
	return hcNewString(memory.data);
}

hcString hcConvertMemoryS8ToString(hcMemoryS8 memory)
{
	return hcNewString(memory.data);
}

void hcFreeMemoryU8(hcMemoryU8* memory)
{
	free(memory->data);
	memory->size = 0;
}

void hcFreeMemoryU16(hcMemoryU16* memory)
{
	free(memory->data);
	memory->size = 0;
}

void hcFreeMemoryU32(hcMemoryU32* memory)
{
	free(memory->data);
	memory->size = 0;
}

void hcFreeMemoryU64(hcMemoryU64* memory)
{
	free(memory->data);
	memory->size = 0;
}

void hcFreeMemoryS8(hcMemoryS8* memory)
{
	free(memory->data);
	memory->size = 0;
}

void hcFreeMemoryS16(hcMemoryS16* memory)
{
	free(memory->data);
	memory->size = 0;
}

void hcFreeMemoryS32(hcMemoryS32* memory)
{
	free(memory->data);
	memory->size = 0;
}

void hcFreeMemoryS64(hcMemoryS64* memory)
{
	free(memory->data);
	memory->size = 0;
}
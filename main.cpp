#include "World.h"
#include "conio.h"

int main()
{
	UWorld MyWorld;

	while (true)
	{
		char Input = _getch();
		MyWorld.Process(Input);
		MyWorld.Render();
		if (MyWorld.CheckArrived())
		{
			return 0;
		}
	}

	return 0;
}
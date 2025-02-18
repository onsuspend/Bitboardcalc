#include <raylib.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
void initGraphics();
void runProgramLOop();
void cleanProgram();
int main(void)
{
	initGraphics();
	runProgramLoop();
	cleanProgram()
}
void initGraphics()
{
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Bitboardcalc");
	SetTargetFPS(60);
}
void runProgramLoop()
{
	while(!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
}
void cleanProgram()
{
	CloseWindow();
}

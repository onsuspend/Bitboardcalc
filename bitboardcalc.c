#include <raylib.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
static const unsigned uint32_t WINDOW_WIDTH = 640, WINDOW_HEIGHT = 480;
void initGraphics();
void runProgramLoop();
void cleanProgram();
int main(void)
{
	initGraphics();
	runProgramLoop();
	cleanProgram()
}
void initGraphics()
{
	InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "bitboardcalc");
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

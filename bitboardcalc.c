#include <raylib.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
static const uint32_t TILE_NUM = 8;
static const uint32_t GUI_PADDING_X = 50;
static const uint32_t GUI_PADDING_Y = 100;
static const uint32_t INITIAL_WINDOW_WIDTH = 480;
static const uint32_t INITIAL_WINDOW_HEIGHT = 640;
typedef uint64_t Bitboard;
void initGraphics(uint32_t windowX, uint32_t windowY);
int32_t calculateCellSize(int windowWidth, int windowHeight);
void runProgramLoop(Bitboard currentBitboard);
void cleanProgram(void);
int main(void)
{
  // This bitboard fills the entire second row
  Bitboard currentBitboard = 65280;
  initGraphics(INITIAL_WINDOW_WIDTH, INITIAL_WINDOW_HEIGHT);
  while(!WindowShouldClose())  
  {
    int32_t screenWidth = GetScreenWidth();
    int32_t screenHeight = GetScreenHeight();
    int32_t currentTileSizeX = (screenWidth - (2 * GUI_PADDING_X))/TILE_NUM;
    int32_t currentTileSizeY = (screenHeight - (2 *  GUI_PADDING_Y))/TILE_NUM;
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Hello world", 5, 5, 20, BLACK);
    for(uint32_t iterFile = 0; iterFile < TILE_NUM; iterFile++)
    {
      for(uint32_t iterRank = 0; iterRank < TILE_NUM; iterRank++)
      {     
        int32_t x = GUI_PADDING_X + iterFile * currentTileSizeX;
        int32_t y = GUI_PADDING_Y + iterRank * currentTileSizeY;

        Color tileColor = ((iterFile + iterRank) % 2 == 0) ? LIGHTGRAY : DARKGRAY;
        DrawRectangle(x, y, currentTileSizeX, currentTileSizeY, tileColor);
        DrawRectangleLines(x, y, currentTileSizeX, currentTileSizeY, BLACK);
      }
    }
    EndDrawing();
  }
  cleanProgram();
}
void initGraphics(uint32_t windowWidth, uint32_t windowHeight)
{
  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  InitWindow(windowWidth, windowHeight, "bitboardcalc");
  SetTargetFPS(60);
}
void cleanProgram(void)
{
  CloseWindow();
}

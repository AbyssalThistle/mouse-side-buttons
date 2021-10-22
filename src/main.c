#include "raylib.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "bug example - extra & side buttons");
	SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())        // Detect window close button or ESC key
    {
		if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) { printf("left\n"); }
		if(IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) { printf("right\n"); }
		if(IsMouseButtonPressed(MOUSE_BUTTON_EXTRA)) { printf("extra\n"); }
		if(IsMouseButtonPressed(MOUSE_BUTTON_SIDE)) { printf("side\n"); }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

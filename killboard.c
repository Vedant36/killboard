/*
 * TODO:
 * - screen zooming and translating
 * - boxes "class" for adding elements (text, image, audio)
 * - Immediate-Mode-UI/Nuklear for buttons
 * - serialization
 * - every project in a folder that contains the binary objects separately
 *     (this program then becomes a parser and editor for that language)
 * - need the graphviz like node connections
 * heirarchy: Board > Node Graph > Node > Node Content
 * example format (maybe json but eh) (human editable will be nice)
 [1]
 crimescene.png
 0,0

 [2] 1->2
 suspect1.png
 100,-100

 [3] 2->3
 possiblesimilarvoice.mp3
 150,-100

 etc, etc...

 * alternative format (markdown)
 # 1
 >image crimescene.png // maybe even html elements hell then just write this whole thing in electron. oh i get it. that's why they all do this aaaah.
 0,0

 # 2 :1:
 >image suspect1.png

 # 3 :2:
 <audio controls src="possiblesimilarvoice.mp3"></audio>
 */

#include <raylib.h>
#include <raymath.h>
#include <math.h>

#define SW 500
#define SH 500

typedef enum BoxComponents {
	BOX_NULL,
	BOX_TEXT,
	BOX_IMAGE,
	BOX_CHECKLIST,

	BOX_COUNT
} BoxComponents;

typedef struct Node {
	char *name;
	Vector2 loc;
} Node;

/* ARRAY(Node[2]) */

int main()
{
	InitWindow(SW, SH, "KillBoard");
	SetTargetFPS(60);


	while (!WindowShouldClose())
	{
		/* Update */
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
			// save element id and relative position of mouse
		}
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
			// translate element by current position of mouse - relative one
		}
		zoom *= 1 + 0.1*GetMouseWheelMove();
		if (IsMouseButtonDown(MOUSE))

		/* Draw */
		BeginDrawing();
		ClearBackground(GetColor(0xccb785ff));
		EndDrawing();
	}
	CloseWindow();

	return 0;
}

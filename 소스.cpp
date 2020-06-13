#include <stdio.h>
#include <bangtal.h>

SceneID scene1;
SoundID sound1;
int main() {
	scene1 = createScene("Å×½ºÆ®", "Images/Background.png");
	sound1 = createSound("Sounds/bgm.mp3");

	playSound(sound1);
	startGame(scene1);
}
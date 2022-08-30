/*
 * main.cpp
 *
 *  Created on: 30 авг. 2022 г.
 *      Author: Zver
 */
 /*
  * Список библиотек, которые нужно добавить в проект:
  * Для MinGW:
  * 	mingw32
  * 	SDL2main
  * 	SDL2
  * 	SDL2_image
  * 	opengl32
  * 	glu32
  *
  * Для Linux:
  * 	SDL2
  * 	SDL2_image
  * 	GL
  * 	GLU
  *
  * Порядок добавления библиотек должен быть
  *таким же как в списке.Это очень важно, иначе
  *ничего не будет работать
  *
  *
  */

#include <iostream>
#include <SDL2/SDL_main.h>
#include <SDL2/SDL.h>
#include "Window.h"

int main(int, char **) {

    SDL_Init(SDL_INIT_EVERYTHING);

    Window w { 1280, 600 };

    w.main_loop();

    return 0;
}



/*
 * main.cpp
 *
 *  Created on: 30 ���. 2022 �.
 *      Author: Zver
 */
 /*
  * ������ ���������, ������� ����� �������� � ������:
  * ��� MinGW:
  * 	mingw32
  * 	SDL2main
  * 	SDL2
  * 	SDL2_image
  * 	opengl32
  * 	glu32
  *
  * ��� Linux:
  * 	SDL2
  * 	SDL2_image
  * 	GL
  * 	GLU
  *
  * ������� ���������� ��������� ������ ����
  *����� �� ��� � ������.��� ����� �����, �����
  *������ �� ����� ��������
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



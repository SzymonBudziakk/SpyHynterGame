#pragma once
#define _CRT_SECURE_NO_WARNINGS

#define SCREEN_WIDTH	640
#define SCREEN_HEIGHT	480
#define FPS 60
#define FRAME_DELAY 1000/FPS
#define BLOCK_SIZE 32
#define BLOCKS_HORIZONTALLY SCREEN_WIDTH/BLOCK_SIZE
#define BLOCKS_VERTICALLY SCREEN_HEIGHT/BLOCK_SIZE


#include<math.h>
#include<stdio.h>
#include<string.h>

#include "SDL.h"
#include "SDL_image.h"

#include "Game.h"
#include "Texture.h"
#include "Object.h"
#include "Map.h"
#include "Interface.h"
#pragma once
#ifndef D2_DATA_H
#define D2_DATA_H


#include "Data.h"
#include "Control.h"
#include "View.h"
#include "Error.h"

//ASCII CODE
#define D2_UPPER_FRAME char(223)
#define D2_LOWER_FRAME char(220)
#define D2_VERTICAL_FRAME char(219)
#define D2_CONSOLE_INPUT char(62)
#define D2_SELECT_LEFT char(17)
#define D2_SELECT_RIGHT char(16)

//TYPE NAME & CHOOSE CHARACTER DATA
#define D2_X_NEWGAME 46
#define D2_Y_NEWGAME 12

//USED FOR D2_PlayerInNewGame()
extern int D2_PLAYER01_CHARACTER;
extern int D2_PLAYER02_CHARACTER;
extern int D2_PLAYER;
extern string D2_PLAYER01_NAME;
extern string D2_PLAYER02_NAME;
const wstring D2_CHAR_NAME[11] = { L"BOT", L"LOVELY BEAR", L"METAL ROBOT", L"KAITO CAT", L"STRANGE ALIEN", L"DULL LION", L"OLD CROCODILE", L"SHORT SNAKE", L"KING CRAB", L"CUTE TURTLE", L"GIANT WHALE" };

//SETINGS
#define D2_X_SETTING 46
#define D2_Y_SETTING 15
const string D2_ON_OFF[2] = { "Off", "On " };

//USED FOR SETTINGS
extern int D2_BACKGROUND_MUSIC;
extern int D2_INGAME_MUSIC;
extern int D2_WHICH_SETTING;

//ABOUT
#define D2_X_ABOUT 46
#define D2_Y_ABOUT 9

//BOARD
extern int Turn;
extern int Score1;
extern int Score2;
extern int Draw;
extern int Temp;
extern string FileName;
extern int Finish;
extern int Count;

extern char _MATRIX[18][18];

#endif
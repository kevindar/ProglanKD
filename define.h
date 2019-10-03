#ifndef DEFINE_H_INCLUDED
#define DEFINE_H_INCLUDED

/**
    DEFINE_H
    Header untuk mendefinisikan makro untuk seluruh angka yang dibutuhkan kedalam sebuah kata/kalimat
    agar program lebih mudah diimplementasikan.
*/

#define _WIN32_WINNT 0x0510

#pragma comment (lib, "wininet.lib")

//METADATA
#define VERSION version //CURRENT VERSION
#define BUILD build //BUILD VERSION
#define BACKEND "Alfian Badrul Isnan"  //BACKEND NAME
#define FRONTEND "Nathaniel Faustine" //FRONTEND NAME

//COLOR DEFINITION
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define LLBLUE 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define LGREY 7
#define GREY 8
#define LBLUE 9
#define LGREEN 10
#define LLLBLUE 11
#define PINK 12
#define LPURPLE 13
#define LYELLOW 14
#define WHITE 15

//ASCII EXTENDED
#define ASCII_2LT_CORNER 201
#define ASCII_2LB_CORNER 200
#define ASCII_2RT_CORNER 187
#define ASCII_2RB_CORNER 188
#define ASCII_2VER 186
#define ASCII_2HOR 205
#define ASCII_2TB 202
#define ASCII_2TT 203
#define ASCII_1LT_CORNER 218
#define ASCII_1LB_CORNER 192
#define ASCII_1RT_CORNER 191
#define ASCII_1RB_CORNER 217
#define ASCII_1VER 179
#define ASCII_1HOR 196
#define ASCII_1TB 193
#define ASCII_1TT 194
#define ASCII_COPYRIGHT 184
#define ASCII_2TL 204
#define ASCII_2TR 185
#define ASCII_LOAD_BAR 177

//INET
#define INIT_DBAR 1
#define LOAD_DBAR 2
#define DESTROY_DBAR 3

//GETCH BUTTON
#define ENTER 13
#define ESCAPE 27
#define UP_ARROW 72
#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define DOWN_ARROW 80
#define BACKSPACE 8
#define SPACE 32
#define F1_BUTTON 59
#define DELETE_BUTTON 83
#define ALT 224

//SETTING DEFINITION
//COLOR SETTING
#define COLORSET_GLOBAL_BG 0
#define COLORSET_GLOBAL_FG 1
#define COLORSET_BUTTON_ACTIVE 2
#define COLORSET_BUTTON_DEACTIVE 3
#define COLORSET_TEXT_ACTIVE 4
#define COLORSET_TEXT_DEACTIVE 5
#define COLORSET_PNO_NATURAL_ACTIVE 6
#define COLORSET_PNO_NATURAL_DEACTIVE 7
#define COLORSET_PNO_SHARP_ACTIVE 8
#define COLORSET_PNO_SHARP_DEACTIVE 9
#define COLORSET_STATIC_BUTTON 10

//ARRAY DEFINITION
#define INPUT_LEN 24
#define MAX_NUM_READ 64
#define INSTRUMENT_DIR_DEFAULT "bin\\data\\sample\\Instrument\\CGP\\X #O.ogg"
#define INSTRUMENT_NAME_DEFAULT "we0tyu0we0000asdfghjasdf"
#define INSTRUMENT_OCTV_DEFAULT "000000011000000000001111"
#define NOTE_NAME 0
#define NOTE_OCTV 1
#define NOTE_NAME_IN_DIR 31
#define NOTE_OCTV_IN_DIR 34
#define NOTE_ADDRESS 0
#define NOTE_ATTACK 1
#define IS_KEY_NOTE (pno.addr==0||pno.addr==1||(pno.addr>=3&&pno.addr<=5)||pno.addr==7||pno.addr==8||(pno.addr>=13&&pno.addr<=23))

//ERROR HANDLING CODE
#define INSTRUMENT_DOESNT_EXIST 0x0001
#define NO_CONFIG_FILE 0x0002
#define ERROR_NO_DIRECTORY 0x0003

#endif // DEFINE_H_INCLUDED

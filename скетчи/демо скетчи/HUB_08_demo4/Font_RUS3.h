//16*16 pixel font, first byte is character width
// русcкие большие и маленькие
#ifndef FONT_RUS_H
#define FONT_RUS_H

const   uint8_t font_rus[]PROGMEM = { 
 //16*16 pixel font, first byte is character width

4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//пробл//32
3,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,0,0,224,0,224,0,224,0,//!//33
8,231,0,231,0,231,0,231,0,231,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//"//34
10,51,0,51,0,51,0,255,192,255,192,51,0,51,0,51,0,51,0,51,0,51,0,255,192,255,192,51,0,51,0,51,0,//#//35
11,14,0,14,0,127,192,255,224,238,224,238,0,238,0,255,192,127,224,14,224,14,224,238,224,255,224,127,192,14,0,14,0,//$//36
12,112,224,248,224,217,192,249,192,115,128,3,128,7,0,7,0,14,0,14,0,28,0,28,224,57,240,57,176,113,240,112,224,//%//37
12,30,0,63,0,115,128,115,128,115,128,115,128,51,128,63,0,126,0,238,48,231,112,227,224,225,192,227,224,255,112,126,48,//&//38
3,224,0,224,0,224,0,224,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,////39
5,56,0,120,0,240,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,240,0,120,0,56,0,//(//40
5,224,0,240,0,120,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,120,0,240,0,224,0,//)//41
9,0,0,0,0,0,0,99,0,119,0,62,0,28,0,255,128,255,128,28,0,62,0,119,0,99,0,0,0,0,0,0,0,//*//42
9,0,0,0,0,0,0,0,0,28,0,28,0,28,0,255,128,255,128,28,0,28,0,28,0,0,0,0,0,0,0,0,0,//0//43
3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,0,224,0,96,0,224,0,//,//44
9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,128,255,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//.//45
3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,0,224,0,224,0,//.//46
7,6,0,6,0,6,0,14,0,12,0,28,0,24,0,24,0,48,0,48,0,48,0,96,0,96,0,224,0,192,0,192,0,/////47
9,62,0,127,0,247,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,247,128,127,0,62,0,//0//48
7,56,0,56,0,120,0,248,0,248,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,254,0,254,0,//1//49
9,62,0,127,0,247,128,227,128,227,128,3,128,3,128,3,128,7,128,15,0,30,0,60,0,120,0,241,128,255,128,255,128,//2//50
9,255,128,255,128,255,128,7,0,14,0,28,0,56,0,127,0,255,128,7,128,3,128,3,128,227,128,247,128,127,0,62,0,//3//51
10,3,128,7,128,15,128,15,128,27,128,59,128,51,128,99,128,227,128,195,128,255,192,255,192,3,128,3,128,3,128,3,128,//4//52
9,255,128,255,128,255,128,224,0,224,0,224,0,254,0,255,0,255,128,7,128,3,128,3,128,227,128,247,128,127,0,62,0,//5//53
10,63,0,127,128,243,192,225,192,224,0,224,0,254,0,255,0,255,128,243,192,225,192,225,192,225,192,243,192,127,128,63,0,//6//54
10,255,192,255,192,225,192,1,192,1,192,1,192,3,128,7,0,14,0,14,0,28,0,28,0,28,0,28,0,28,0,28,0,//7//55
10,63,0,127,128,243,192,225,192,225,192,225,192,115,128,63,0,127,128,243,192,225,192,225,192,225,192,243,192,127,128,63,0,//8//56
10,63,0,127,128,243,192,225,192,225,192,225,192,243,192,127,192,63,192,1,192,1,192,1,192,225,192,243,192,127,128,63,0,//9//57
3,0,0,0,0,0,0,0,0,0,0,224,0,224,0,224,0,0,0,0,0,0,0,0,0,224,0,224,0,224,0,0,0,//://58
3,0,0,0,0,0,0,0,0,0,0,224,0,224,0,224,0,0,0,0,0,0,0,0,0,224,0,224,0,96,0,224,0,//;//59
9,1,128,3,128,7,0,14,0,28,0,56,0,112,0,224,0,224,0,112,0,56,0,28,0,14,0,7,0,3,128,1,128,//<//60
9,0,0,0,0,0,0,0,0,255,128,255,128,0,0,0,0,0,0,0,0,255,128,255,128,0,0,0,0,0,0,0,0,//Н//61
9,192,0,224,0,112,0,56,0,28,0,14,0,7,0,3,128,3,128,7,0,14,0,28,0,56,0,112,0,224,0,192,0,//>//62
11,63,128,127,192,241,224,224,224,224,224,1,224,3,192,7,128,15,0,14,0,14,0,0,0,0,0,14,0,14,0,14,0,//?//63
12,63,192,127,224,240,240,224,112,224,112,229,112,239,112,235,112,235,112,239,240,239,224,231,128,224,0,240,112,127,224,63,192,//@//64
9,28,0,62,0,127,0,227,128,227,128,227,128,227,128,227,128,255,128,255,128,227,128,227,128,227,128,227,128,227,128,227,128,//A//65
9,248,0,252,0,238,0,231,0,231,0,231,0,238,0,252,0,254,0,231,0,227,128,227,128,227,128,231,0,254,0,252,0,//B//66
8,60,0,126,0,255,0,231,0,231,0,224,0,224,0,224,0,224,0,224,0,224,0,231,0,231,0,255,0,126,0,60,0,//C//67
10,254,0,255,0,127,128,115,192,113,192,113,192,113,192,113,192,113,192,113,192,113,192,113,192,115,192,127,192,255,128,255,0,//D//68
9,255,128,255,128,227,128,224,0,224,0,224,0,224,0,255,0,255,0,224,0,224,0,224,0,224,0,227,128,255,128,255,128,//E//69
10,255,192,255,192,113,192,112,0,112,0,112,0,112,0,127,0,127,0,112,0,112,0,112,0,112,0,112,0,112,0,112,0,//F//70
10,63,0,127,128,243,192,225,192,224,0,224,0,224,0,239,192,239,192,225,192,225,192,225,192,225,192,243,192,127,128,63,0,//G//71
9,227,128,227,128,227,128,227,128,227,128,227,128,227,128,255,128,255,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,//H//72
7,254,0,254,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,254,0,254,0,//I//73
11,15,224,15,224,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,3,128,195,128,195,128,231,128,127,0,62,0,//J//74
9,227,128,227,128,227,128,227,0,230,0,236,0,248,0,240,0,248,0,236,0,230,0,227,0,227,128,227,128,227,128,227,128,//K//75
9,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,227,128,255,128,255,128,//L//76
11,224,224,224,224,241,224,241,224,251,224,255,224,255,224,238,224,238,224,228,224,228,224,224,224,224,224,224,224,224,224,224,224,//M//77
10,225,192,225,192,241,192,241,192,249,192,249,192,237,192,237,192,231,192,231,192,227,192,227,192,225,192,225,192,225,192,225,192,//N//78
9,62,0,127,0,247,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,247,128,127,0,62,0,//O//79
9,254,0,255,0,231,128,227,128,227,128,227,128,227,128,231,128,255,0,254,0,224,0,224,0,224,0,224,0,224,0,224,0,//P//80
12,63,192,127,224,240,240,224,112,224,112,224,112,224,112,224,112,224,112,230,112,231,112,227,240,225,224,243,224,127,240,63,176,//Q//81
10,254,0,255,0,231,128,227,192,225,192,225,192,227,192,231,128,255,0,252,0,238,0,230,0,227,0,227,128,225,192,224,192,//R//82
9,62,0,127,0,247,128,227,128,224,0,224,0,240,0,126,0,63,0,7,128,3,128,227,128,227,128,247,128,127,0,62,0,//S//83
9,255,128,255,128,255,128,156,128,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,//T//84
10,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,243,192,127,128,63,0,//U//85
10,225,192,225,192,225,192,225,192,97,128,97,128,115,128,115,0,51,0,51,0,63,0,30,0,30,0,30,0,12,0,12,0,//V//86
12,224,112,224,112,224,112,224,112,224,112,224,112,224,112,230,112,230,112,239,112,111,96,127,224,127,224,121,224,48,192,48,192,//W//87
10,225,192,225,192,225,192,225,192,115,128,115,128,63,0,30,0,30,0,63,0,115,128,115,128,225,192,225,192,225,192,225,192,//X//88
11,224,224,224,224,224,224,224,224,224,224,96,192,113,192,59,128,63,128,31,0,14,0,14,0,14,0,14,0,14,0,14,0,//Y//89
10,255,192,255,192,255,192,129,192,3,128,3,0,7,0,14,0,28,0,56,0,48,0,112,0,224,64,255,192,255,192,255,192,//Z//90
6,252,0,252,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,252,0,252,0,//[//91
6,12,0,12,0,12,0,28,0,24,0,24,0,56,0,48,0,48,0,112,0,96,0,96,0,224,0,192,0,192,0,192,0,/////92
6,252,0,252,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,28,0,252,0,252,0,//]//93
9,28,0,62,0,119,0,227,128,227,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//^//94
9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,128,255,128,//_//95
6,224,0,112,0,56,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//`//96
10,0,0,0,0,0,0,0,0,63,0,127,128,3,128,1,128,63,128,127,128,241,128,225,128,225,128,243,128,127,192,62,192,//a//97
10,224,0,224,0,224,0,224,0,239,0,255,128,243,192,225,192,225,192,225,192,225,192,225,192,225,192,243,192,255,128,239,0,//b//98
10,0,0,0,0,0,0,0,0,63,0,127,128,243,192,225,192,224,0,224,0,224,0,224,0,225,192,243,192,127,128,63,0,//c//99
10,1,192,1,192,1,192,1,192,61,192,127,192,243,192,225,192,225,192,225,192,225,192,225,192,225,192,243,192,127,192,61,192,//d//100
10,0,0,0,0,0,0,0,0,63,0,127,128,243,192,225,192,225,192,255,192,255,192,224,0,225,192,243,192,127,128,63,0,//e//101
8,15,0,31,0,60,0,56,0,255,0,255,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,//f//102
10,0,0,0,0,0,0,0,0,61,192,127,192,243,192,225,192,243,192,127,192,61,192,1,192,225,192,243,192,127,128,63,0,//g//103
10,224,0,224,0,224,0,224,0,239,0,255,128,243,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,//h//104
5,112,0,112,0,112,0,0,0,240,0,240,0,112,0,112,0,112,0,112,0,112,0,112,0,112,0,112,0,248,0,248,0,//i//105
7,14,0,14,0,14,0,0,0,30,0,30,0,14,0,14,0,14,0,14,0,14,0,14,0,238,0,254,0,124,0,56,0,//j//106
10,224,0,224,0,224,0,224,0,225,192,227,192,231,128,239,0,254,0,252,0,252,0,254,0,239,0,231,128,227,192,225,192,//k//107
4,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,240,0,240,0,112,0,//l//108
11,0,0,0,0,0,0,0,0,255,128,255,192,255,224,238,224,238,224,238,224,238,224,238,224,238,224,238,224,238,224,238,224,//m//109
10,0,0,0,0,0,0,0,0,239,0,255,128,243,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,//n//110
10,0,0,0,0,0,0,0,0,63,0,127,128,243,192,225,192,225,192,225,192,225,192,225,192,225,192,243,192,127,128,63,0,//o//111
10,0,0,0,0,0,0,0,0,0,0,239,0,255,128,243,192,225,192,225,192,225,192,243,192,255,128,239,0,224,0,224,0,//p//112
10,0,0,0,0,0,0,0,0,61,192,127,192,243,192,225,192,225,192,225,192,243,192,127,192,61,192,1,192,1,192,1,192,//q//113
7,0,0,0,0,0,0,0,0,238,0,254,0,240,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,//r//114
10,0,0,0,0,0,0,0,0,63,0,127,128,243,192,225,192,240,0,127,0,63,128,3,192,225,192,243,192,127,128,63,0,//s//115
7,8,0,24,0,56,0,56,0,254,0,254,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,56,0,30,0,14,0,//t//116
10,0,0,0,0,0,0,0,0,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,225,192,243,192,127,192,61,192,//u//117
10,0,0,0,0,0,0,0,0,225,192,225,192,225,192,225,192,115,128,115,128,51,0,63,0,30,0,30,0,12,0,12,0,//v//118
12,0,0,0,0,0,0,0,0,224,112,224,112,224,112,230,112,230,112,239,112,255,240,127,224,121,224,121,224,48,192,48,192,//w//119
10,0,0,0,0,0,0,0,0,225,192,225,192,243,192,127,128,63,0,30,0,30,0,63,0,127,128,243,192,225,192,225,192,//x//120
10,0,0,0,0,0,0,0,0,225,192,225,192,225,192,225,192,115,128,59,128,31,0,31,0,14,0,158,0,252,0,120,0,//У//121
10,0,0,0,0,0,0,0,0,255,192,255,192,193,192,3,128,7,0,14,0,28,0,56,0,112,0,225,192,255,192,255,192,//z//122
8,15,0,31,0,60,0,56,0,56,0,56,0,120,0,240,0,240,0,120,0,56,0,56,0,56,0,60,0,31,0,15,0,//{//123
3,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,224,0,//|//124
8,240,0,248,0,60,0,28,0,28,0,28,0,30,0,15,0,15,0,30,0,28,0,28,0,28,0,60,0,248,0,240,0,//}//125
12,0,0,0,0,0,0,0,0,0,0,60,112,126,240,247,224,227,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,//~//126
9,255,128,255,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,227,128,255,128,255,128,//0//127
///===================================================================================================================================///
7,0,0,0,0,0,0,0,0,248,0,252,0,206,0,198,0,198,0,198,0,206,0,252,0,248,0,192,0,192,0,192,0,//р//128
8,0,0,0,0,0,0,0,0,60,0,126,0,231,0,195,0,192,0,192,0,192,0,192,0,195,0,231,0,126,0,60,0,// с// 129
8,0,0,0,0,0,0,0,0,255,0,255,0,153,0,153,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,//т//130
7,0,0,0,0,0,0,0,0,198,0,198,0,198,0,198,0,198,0,102,0,62,0,12,0,24,0,48,0,224,0,192,0,//у//131
10,0,0,0,0,0,0,0,0,12,0,63,0,127,128,237,192,204,192,204,192,204,192,204,192,237,192,127,128,63,0,12,0,// ф// 132
8,0,0,0,0,0,0,0,0,195,0,195,0,195,0,102,0,36,0,24,0,24,0,36,0,102,0,195,0,195,0,195,0,// х// 133
8,0,0,0,0,0,0,0,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,254,0,255,0,7,0,//ц//134
7,0,0,0,0,0,0,0,0,198,0,198,0,198,0,198,0,198,0,198,0,230,0,126,0,62,0,6,0,6,0,6,0,//ч//135
8,0,0,0,0,0,0,0,0,195,0,195,0,195,0,195,0,219,0,219,0,219,0,219,0,219,0,255,0,255,0,255,0,//ш//136
9,0,0,0,0,0,0,0,0,195,0,195,0,195,0,195,0,219,0,219,0,219,0,219,0,255,0,255,0,255,128,3,128,//щ//137
8,0,0,0,0,0,0,0,0,224,0,224,0,96,0,124,0,126,0,103,0,99,0,99,0,99,0,103,0,126,0,124,0,//ъ//138
8,0,0,0,0,0,0,0,0,193,128,193,128,193,128,241,128,249,128,221,128,205,128,205,128,205,128,221,128,249,128,241,128,//ы//139
6,0,0,0,0,0,0,0,0,192,0,192,0,192,0,240,0,248,0,220,0,204,0,204,0,204,0,220,0,248,0,240,0,//ь//140
7,0,0,0,0,0,0,0,0,56,0,124,0,206,0,198,0,6,0,30,0,30,0,6,0,198,0,206,0,124,0,56,0,//э//141
9,0,0,0,0,0,0,0,0,198,0,207,0,217,128,217,128,217,128,249,128,249,128,217,128,217,128,217,128,207,0,198,0,//ю//142
7,0,0,0,0,0,0,0,0,30,0,62,0,102,0,102,0,102,0,102,0,102,0,62,0,30,0,54,0,102,0,198,0,//я//143
7,16,0,56,0,56,0,108,0,108,0,198,0,198,0,198,0,198,0,198,0,254,0,254,0,198,0,198,0,198,0,198,0,//А//144
7,252,0,252,0,192,0,192,0,192,0,248,0,252,0,206,0,198,0,198,0,198,0,198,0,198,0,206,0,252,0,248,0,//Б//145
7,248,0,252,0,206,0,198,0,198,0,198,0,206,0,252,0,252,0,206,0,198,0,198,0,198,0,206,0,252,0,248,0,//В//146
6,252,0,252,0,252,0,196,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,//Г//147
9,15,0,15,0,31,0,27,0,59,0,51,0,115,0,99,0,99,0,99,0,99,0,99,0,99,0,255,128,255,128,193,128,//Д//148
7,254,0,254,0,194,0,192,0,192,0,192,0,192,0,252,0,252,0,252,0,192,0,192,0,192,0,194,0,254,0,254,0,//Е//149
10,204,192,204,192,204,192,109,128,109,128,45,0,63,0,30,0,30,0,63,0,45,0,109,128,204,192,204,192,204,192,204,192,//Ж//150
8,60,0,126,0,231,0,195,0,195,0,7,0,14,0,28,0,14,0,7,0,3,0,195,0,195,0,231,0,126,0,60,0,//З//151
8,195,0,195,0,195,0,195,0,195,0,195,0,199,0,199,0,207,0,203,0,219,0,211,0,243,0,227,0,227,0,195,0,//И//152
8,24,0,219,0,195,0,195,0,195,0,195,0,199,0,199,0,207,0,203,0,219,0,211,0,243,0,227,0,227,0,195,0,//Й//153
8,195,0,195,0,195,0,199,0,206,0,220,0,248,0,240,0,248,0,220,0,206,0,199,0,195,0,195,0,195,0,195,0,//К//154
8,3,0,7,0,7,0,15,0,15,0,27,0,27,0,59,0,51,0,51,0,99,0,99,0,227,0,195,0,195,0,195,0,//Л//155
10,192,192,192,192,192,192,225,192,225,192,243,192,243,192,255,192,222,192,222,192,204,192,204,192,192,192,192,192,192,192,192,192,//М//156
7,198,0,198,0,198,0,198,0,198,0,198,0,198,0,254,0,254,0,254,0,198,0,198,0,198,0,198,0,198,0,198,0,//Н//157
7,56,0,124,0,238,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,238,0,124,0,56,0, //О //158
7,254,0,254,0,254,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,//П//159
7,248,0,252,0,206,0,198,0,198,0,198,0,198,0,198,0,198,0,206,0,252,0,248,0,192,0,192,0,192,0,192,0,//Р//160
7,56,0,124,0,238,0,198,0,198,0,192,0,192,0,192,0,192,0,192,0,192,0,198,0,198,0,238,0,124,0,56,0,//С//161
8,255,0,255,0,153,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,24,0,//Т//162
7,198,0,198,0,198,0,198,0,198,0,198,0,230,0,118,0,62,0,30,0,6,0,6,0,6,0,204,0,248,0,112,0,//У//163
10,12,0,63,0,127,128,237,192,204,192,204,192,204,192,204,192,204,192,204,192,204,192,237,192,127,128,63,0,12,0,12,0,//Ф//164
9,193,128,193,128,227,128,99,0,119,0,54,0,62,0,28,0,28,0,62,0,54,0,119,0,99,0,227,128,193,128,193,128,//Х//165
8,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,254,0,255,0,3,0,//Ц//166
7,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,230,0,126,0,62,0,6,0,6,0,6,0,6,0,6,0,//Ч//167
8,195,0,195,0,195,0,195,0,195,0,195,0,195,0,219,0,219,0,219,0,219,0,219,0,219,0,255,0,255,0,255,0,//Ш//168
9,195,0,195,0,195,0,195,0,195,0,195,0,195,0,219,0,219,0,219,0,219,0,219,0,219,0,255,0,255,128,3,128,//Щ//169
8,224,0,224,0,224,0,96,0,96,0,96,0,124,0,126,0,103,0,99,0,99,0,99,0,99,0,103,0,126,0,124,0,//Ъ//170
9,193,128,193,128,193,128,193,128,193,128,241,128,249,128,221,128,205,128,205,128,205,128,205,128,205,128,221,128,249,128,241,128,//Ы//171
7,192,0,192,0,192,0,192,0,192,0,248,0,252,0,206,0,198,0,198,0,198,0,198,0,198,0,206,0,252,0,248,0,//Ь//172
8,56,0,124,0,238,0,199,0,3,0,3,0,3,0,31,0,31,0,3,0,3,0,3,0,199,0,238,0,124,0,56,0,//Э//173
9,198,0,207,0,223,128,217,128,217,128,217,128,217,128,249,128,249,128,249,128,217,128,217,128,217,128,223,128,207,0,198,0,//Ю//174
8,63,0,127,0,227,0,195,0,195,0,195,0,195,0,227,0,115,0,63,0,15,0,31,0,59,0,115,0,227,0,195,0,//Я//175
8,0,0,0,0,0,0,0,0,60,0,126,0,198,0,134,0,6,0,62,0,126,0,198,0,198,0,230,0,126,0,59,0,//а//176
7,0,0,0,0,0,0,0,0,254,0,254,0,192,0,192,0,248,0,252,0,206,0,198,0,198,0,206,0,252,0,120,0,//б//177
7,0,0,0,0,0,0,0,0,248,0,252,0,206,0,198,0,204,0,248,0,252,0,206,0,198,0,206,0,254,0,252,0,//в//178
6,0,0,0,0,0,0,0,0,252,0,252,0,252,0,196,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,//г//179
8,0,0,0,0,0,0,0,0,14,0,30,0,54,0,38,0,102,0,102,0,102,0,102,0,102,0,126,0,255,0,195,0,//д//180
7,0,0,0,0,0,0,0,0,56,0,124,0,238,0,198,0,198,0,254,0,254,0,192,0,192,0,230,0,124,0,56,0,//е//181
10,0,0,0,0,0,0,0,0,204,192,204,192,204,192,204,192,109,128,63,0,30,0,63,0,109,128,204,192,204,192,204,192,//ж//182
7,0,0,0,0,0,0,0,0,56,0,124,0,206,0,198,0,12,0,24,0,28,0,6,0,198,0,206,0,124,0,56,0,//з//183
7,0,0,0,0,0,0,0,0,198,0,198,0,198,0,198,0,198,0,206,0,206,0,214,0,214,0,230,0,230,0,198,0,//и//184
7,0,0,0,0,0,0,0,0,56,0,0,0,198,0,198,0,198,0,206,0,206,0,214,0,214,0,230,0,230,0,198,0,//й//185
7,0,0,0,0,0,0,0,0,198,0,198,0,198,0,204,0,216,0,240,0,240,0,216,0,204,0,198,0,198,0,198,0,//к//186
7,0,0,0,0,0,0,0,0,6,0,6,0,14,0,14,0,30,0,22,0,54,0,38,0,102,0,70,0,198,0,198,0,//л//187
10,0,0,0,0,0,0,0,0,192,192,192,192,225,192,225,192,243,192,210,192,222,192,204,192,204,192,192,192,192,192,192,192,//м//188
7,0,0,0,0,0,0,0,0,198,0,198,0,198,0,198,0,198,0,198,0,254,0,254,0,198,0,198,0,198,0,198,0,//н//189
7,0,0,0,0,0,0,0,0,56,0,124,0,238,0,198,0,198,0,198,0,198,0,198,0,198,0,238,0,124,0,56,0,//о//190
7,0,0,0,0,0,0,0,0,254,0,254,0,254,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,198,0,//п//191
// далее рисунки и нестандарт
// Ш
14,240,120,240,120,240,120,240,120,240,120,240,120,240,120,240,120,240,120,240,120,240,120,240,120,255,254,255,254,255,254,255,254, //Ш1//192//,  \x0c0
6,60,0,60,0,60,0,60,0,60,0,60,0,60,0,60,0,60,0,60,0,60,0,60,0,252,0,252,0,252,0,252,0,//Ш2//193//, \x0c1
//СТОП
14,15,224,31,240,63,248,127,252,248,124,240,60,240,0,240,0,240,0,240,0,240,60,248,124,127,252,63,248,31,240,15,224, //С//194//,   \x0c2
12,255,240,255,240,255,240,255,240,143,16,15,0,15,0,15,0,15,0,15,0,15,0,15,0,15,0,15,0,15,0,15,0,     //Т//195//,    \x0c3
14,15,192,31,224,63,240,124,248,248,124,240,60,240,60,240,60,240,60,240,60,240,60,248,124,124,248,63,240,31,224,15,192, //O //196,  \x0c4
12,255,240,255,240,255,240,255,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,//П //197,  \x0c5
//знак /!
14,0,48,0,72,0,132,0,132,1,50,2,48,2,48,4,48,8,48,8,48,16,48,32,48,32,48,64,0,128,48,255,182, // /! // 198  \x0c6
7,0,0,0,0,0,0,0,0,0,0,128,0,128,0,64,0,32,0,32,0,16,0,8,0,8,0,4,0,2,0,254,0,     // /!  //  199  \x0c7


};

#endif

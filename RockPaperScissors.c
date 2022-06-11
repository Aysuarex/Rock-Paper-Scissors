/**
 * @file RockPaperScissors.c
 * @author Suara Ayomide(aysuarex@gmail.com)
 * @brief 
 *  
 * computer -
 * main -
 * checkWin -
 * 
 * @date 2022-06-11
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>


int computer();
int checkWin();
//int score();
int number;
char dummy;
char choice[8];
char name[11];
int decision;
int playerscore = 0;
int computerscore = 0;

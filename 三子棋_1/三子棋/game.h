#ifndef  _GAME_H__
#define  _GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 3
#define COL 3
struct poiner
{
	int x;
	int y;
};
void play_game();
void init(char map[ROW][COL], int row, int col);   //��ͼ3*3�ľ���
void display(char map[ROW][COL], int row, int col); //�����ͼ
void player_move(char map[ROW][COL], int row, int col); //����ƶ�����
void computer_move(char map[ROW][COL], int row, int col);//�����ƶ�����
char is_win(char map[ROW][COL], int row, int col);//������ж�
#endif
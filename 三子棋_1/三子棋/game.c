#define _CRT_SECURE_NO_WARNINGS 2
#include"game.h"
//��ʼ����ͼ����9���ո�
void init(char map[ROW][COL], int row, int col)
{
	memset(&map[0][0], ' ', row*col*sizeof(map[0][0]));
}
//��ʾ����������Ļ��ӡ��ͼ
void display(char map[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", map[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf(" ---");
				/*if (j< col - 1)
					printf("|");*/
			}
			printf("\n");
		}
	}
}
//������ӣ�ͨ���������ʽ
void player_move(char map[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("���������Ҫ�ߵ�����,���Կո������");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (1 <= x&&x <= row && 1 <= y&&y <= col)//ȷ���������
		{
			if (map[x - 1][y - 1] == ' ')//�жϸ�λ���Ƿ�Ϊ��
			{
				map[x - 1][y - 1] = 'X';
				break;//���ӳɹ�ֱ������������ӵ�ѭ��
			}
			else	
				printf("�������ѱ�ռ�ã�����������:");
		}
		else
			printf("�����������������룻");
		
	}
}
void computer_move(char map[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�ֵ�����\n");
	while (1)
	{
		x = rand() % row;//�������ӣ���Χ0--2
		y = rand() % col;//�������ӣ���Χ0--2
		if (map[x][y] == ' ')//�ж��Ƿ�Ϊ�ո�,�����ֱ�����ӣ������������������������
		{
			map[x][y] = '0';
			break;//
		}
		

	}
}
char is_win(char map[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++)//���ֿ���Ӯ�����
	{
		if (map[i][0] == map[i][1] && map[i][0] == map[i][2]&&map[0][0]!=' ')
			return map[i][0];//return ������µ��ַ�
		if (map[0][i] == map[1][i] && map[1][i] == map[2][i]&&map[1][i]!=' ')
			return map[0][i];//return ������µ��ַ�
		if (map[0][0] == map[1][1] && map[1][1] == map[2][2] && map[2][2] != ' ')
			return map[1][1];
		if (map[0][2] == map[1][1] && map[1][1] == map[2][0] && map[1][1] != ' ')
			return map[1][1];
	}
	//���ж���Ӯ�����ж�ƽ��
	for (i = 0; i < row; i++)//�ж��Ƿ�ƽ�֣���9������ȫ��
	{
		for (j = 0; j < col; j++)
		{
			if (map[i][j] == 'X' || map[i][j] == '0')
				count++;
			if (count == 9)
				return 'p';
		}
	}
	return 'G';
}

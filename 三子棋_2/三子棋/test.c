#define _CRT_SECURE_NO_WARNINGS 2
#include"game.h"

void menu()
{
	printf("************************\n");
	printf("********1 : PLAY********\n");
	printf("********0 : EXIT********\n");
	printf("************************\n");
}
void play_game()
{
	char ret = 0;
	char map[ROW][COL] = { 0 };
	init(map, ROW, COL);
	//display(map, ROW, COL);
	while (1)
	{
		
		computer_move(map, ROW, COL);
		display(map, ROW, COL);
		ret=is_win(map, ROW, COL);
		//printf("%c\n", ret);
		if (ret == 'X')
		{
			printf("���Ӯ!\n");
		    break;
		}
			
		else if (ret == '0')
		{
            printf("����Ӯ��\n");
		      break;
		}	
		else if (ret == 'p')
		{
			printf("ƽ��\n");
			break;
		}
		else
			;
		
		player_move(map, ROW, COL);
		display(map, ROW, COL);
		ret=is_win(map, ROW, COL);
		printf("%c\n", ret);
		if (ret == 'X')
		{
			printf("���Ӯ!\n");
			break;
		}

		if (ret == '0')
		{
			printf("����Ӯ��\n");
			break;
		}
		if (ret == 'p')
		{
			printf("ƽ��\n");
			break;
		}
		
	}
}
int main()
{
	char map[ROW][COL] = { 0 };
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play_game();
			break;
		case 0:
			printf("�˳���Ϸ��");
			break;
		default:
			printf("��������������ѡ��\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
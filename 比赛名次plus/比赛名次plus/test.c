#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	unsigned int flag = 0;
	for (A = 1; A <= 5; A++)            //������е��������� 
	{
		//flag = 0;
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						flag = 0;
						if (((B == 2) + (A == 3) == 1) && //�ֱ�Զ�Ա˵�Ļ�����ת��
							((B == 2) + (E == 4) == 1) &&
							((C == 1) + (D == 2) == 1) &&
							((C == 5) + (D == 3) == 1) &&
							((E == 4) + (A == 1) == 1))
						{

							flag |= (1 << (A - 1));      //������˵����δ��һ�����ĵ���λ����λ
							flag |= (1 << (B - 1));
							flag |= (1 << (C - 1));
							flag |= (1 << (D - 1));
							flag |= (1 << (E - 1));
							/*
								printf("%d ", flag);

								if ((flag == 1) || (flag == 3) || (flag == 7) || \
								(flag == 15) || (flag == 31))
								{
								printf("A B C D E:%d %d %d %d %d\n", A, B, C, D, E);
								}

								}*/

							while (flag)                         //Ȼ�������������жϿ����λ��1�Ƿ�����������������
							{
								if ((flag & 1) == 0)//==���������&����������ȼ���
								{
									break;
								}
								else
									flag >>= 1;
							}
							if (flag == 0)
							{
								printf("A B C D E:%d %d %d %d %d\n", A, B, C, D, E);
							}
							
						}
					}
				}

			}
		}
	}
	
	system("pause");
	return 0;
}
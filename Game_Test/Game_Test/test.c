#include"game.h"

int main()
{
	while (1)
	{
		menu();
	}
}
void game()
{
	srand((unsigned)time(NULL));
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DispalyBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		//��ӡ����
		/*DispalyBoard(board, ROW, COL);*/
		//�ж���Ӯ
		if (Judge_Win(board) == 1)
		{
			printf("��ϲ���ʤ��\n");
			break;
		}
		Judge_Win(board);
		//��������
		ComputerMove( board, ROW, COL);
		//��ӡ����
		DispalyBoard(board, ROW, COL);
		//�ж���Ӯ
		if (Judge_Win(board) == 1)
		{
			printf("���ź���������\n");
			break;
		}
	}
}
//�˵�
void menu() {
	printf("---welcome to my game---\n");
	printf("--------��ѡ��----------\n");
	printf("--------1.��ʼ��Ϸ------\n");
	printf("--------0.�˳�----------\n");
	int input = -1;
	do {
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("--��ʼ��Ϸ--\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
}
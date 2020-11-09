#include <stdio.h>
#include <stdlib.h>

enum JankenType
{
	GU = 1,
	CHOKI,
	PA,
};

enum JankenOutcome
{
	WIN,
	LOSE,
	DRAW,
};

JankenOutcome Janken(JankenType player, JankenType npc)
{
	printf("グー：1\nチョキ：2\nパー：3\\nn");

	
	if ((int)player < (int)npc)
	{
		if ((int)player == 1 && (int)npc == 3)
			return LOSE;
		else
			return WIN;
	}
	else if ((int)player > (int)npc)
	{
		if ((int)player == 3 && (int)npc == 1)
			return WIN;
		else
			return LOSE;
	}
	else
	{
		return DRAW;
	}

}

int main()
{
	while (0)
	{
		int data;
		scanf("%d\n", &data);
		int randam = rand() % 3 + 1;

		JankenOutcome jankenKekka = Janken((JankenType)data, (JankenType)(int)randam);

		if (jankenKekka == WIN)
			printf("win\n\n\n");
		else if (jankenKekka == LOSE)
			printf("lose\n\n\n");
		else
		{
			printf("draw\n\n\n");
		}
	}

	return 0;
}
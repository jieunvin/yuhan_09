#include <studio.h>

int main()
{
	int attack = 0;
	int hp = 30;
	printf("주인의 공격력을 입력하세요 : ");
	scanf("%d",%attack);

if(attack<hp)
{
	printf("주인공의 공격력은 %d입니다.\n",attack);
	printf("눈 앞의 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",attack);
	printf("적이 주인공을 공격하여 주인공이 죽었습니다.\n");
	print("Ending Num02: Bad Ending");
}
else
{
	printf("주인공의 공격력이 %d입니다.\n",attack);
	printf("주인공이 눈 앞의 적을 공격하여 %d의 데미지를 입혔습니다.\n\n",attack);
	printf("적의 잔여 HP : 0\n\n");
	printf("주인공이 적을 무사히 물리쳤습니다!\n");
	printf("Ending Number1 : Happy Ending");
}
return 0;
}

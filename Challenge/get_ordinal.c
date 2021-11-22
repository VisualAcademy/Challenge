// get_ordinal.c: 서수 인쇄하기 
#include <stdio.h>

/// <summary>
/// 서수 구하기: 서수 구하는 로직은 11, 12, 13을 제외하고 일반적인 서수 규칙 적용
/// 1st, 2nd, 3rd, 4th, ...th, 11th, 12th, 13th, ..., 21st, 22nd, 23rd, ... 
/// </summary>
/// <param name="value">1, 2, 3, 4, ...</param>
/// <returns>1st, 2nd, 3rd, 4th, ...</returns>
char* get_ordinal(int data)
{
	char* ordinals[] = { "st", "nd", "rd", "th" };

	data %= 100; // 0-100 사이의 값으로 표준화

	if (3 < data && data < 21)
	{
		return ordinals[3];
	}

	switch (data % 10)
	{
	case 1:
		return ordinals[0];
		break;
	case 2:
		return ordinals[1];
		break;
	case 3:
		return ordinals[2];
		break;
	default:
		return ordinals[3];
		break;
	}
}

int main(void)
{
	// 1부터 130까지의 서수 출력하기 
	for (int i = 1; i <= 130; i++)
	{
		printf("%3d%2s\n", i, get_ordinal(i));
	}

	return 0;
}

//1st
//2nd
//3rd
//4th
//5th
//6th
//7th
//8th
//9th
//10th
//11th
//12th
//13th
//14th
//15th
//16th
//17th
//18th
//19th
//20th
//21st
//22nd
//23rd
//24th
//25th
//26th
//27th
//28th
//29th
//30th
//31st
//32nd
//33rd
//34th
//35th
//36th
//37th
//38th
//39th
//40th
//41st
//42nd
//43rd
//44th
//45th
//46th
//47th
//48th
//49th
//50th
//51st
//52nd
//53rd
//54th
//55th
//56th
//57th
//58th
//59th
//60th
//61st
//62nd
//63rd
//64th
//65th
//66th
//67th
//68th
//69th
//70th
//71st
//72nd
//73rd
//74th
//75th
//76th
//77th
//78th
//79th
//80th
//81st
//82nd
//83rd
//84th
//85th
//86th
//87th
//88th
//89th
//90th
//91st
//92nd
//93rd
//94th
//95th
//96th
//97th
//98th
//99th
//100th
//101st
//102nd
//103rd
//104th
//105th
//106th
//107th
//108th
//109th
//110th
//111th
//112th
//113th
//114th
//115th
//116th
//117th
//118th
//119th
//120th
//121st
//122nd
//123rd
//124th
//125th
//126th
//127th
//128th
//129th
//130th

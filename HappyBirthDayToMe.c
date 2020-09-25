#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int cake[16][16] = {
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,2,3,3,3,0,0,0,0,0},
	{0,0,0,0,0,0,2,2,3,3,3,2,0,0,0,0},
	{0,0,0,0,0,2,2,2,2,3,2,2,2,0,0,0},
	{0,0,0,0,2,2,2,2,2,2,1,1,2,0,0,0},
	{0,0,0,2,2,2,1,1,1,1,2,2,2,0,0,0},
	{0,0,4,1,1,1,2,2,2,2,1,1,2,4,0,0},
	{0,4,4,2,2,2,1,1,1,1,2,2,2,4,4,0},
	{0,4,4,1,1,1,2,2,2,2,1,1,2,4,4,0},
	{0,4,4,2,2,2,1,1,1,1,1,4,4,4,4,0},
	{0,0,4,1,1,1,1,4,4,4,4,4,4,4,0,0},
	{0,0,0,4,4,4,4,4,4,4,4,4,4,0,0,0},
	{0,0,0,0,0,4,4,4,4,4,4,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};
//HAPPY BIRTHDAY TO ME!
int text[22][16][16] = {
	{//H
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//A
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//P
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//P
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//Y
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0},
	{0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//' '
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//B
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//I
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//R
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//T
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//H
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//D
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//A
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//Y
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0},
	{0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//' '
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//T
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//O
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//' '
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//M
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,0},
	{0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//E
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//!
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	},
	{//' '
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	}
};

enum colorName
{
	BLACK,
	D_BLUE,
	D_GREEN,
	D_SKYBLUE,
	D_RED,
	D_VIOLET,
	D_YELLOW,
	GRAY,
	D_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

void color(int bgColor, int textColor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), bgColor * 16 + textColor);
}

int gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorView(int show) // 입력 커서 제거
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int printCake()
{
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16;j++)
		{
			gotoxy(j * 2 + 37, i);
			switch (cake[i][j])
			{
			case 1: //bread
				color(YELLOW, YELLOW);
				puts("  ");
				break;
			case 2: //cream
				color(WHITE, WHITE);
				puts("  ");
				break;
			case 3: //strawberry
				color(RED, RED);
				puts("  ");
				break;
			case 4: //dish
				color(GRAY, GRAY);
				puts("  ");
				break;
			}
		}
	}
}

int printHappyBirthDay()
{
	int fifo[5] = { 0, 1, 2, 3, 4 };
	while (TRUE)
	{
		for (int k = 0; k < 5; k++)
		{
			for (int i = 0; i < 16; i++)
			{
				for (int j = 0; j < 16;j++)
				{
					gotoxy(j + (16) + (16 * k), i + 16);
					switch (text[fifo[k]][i][j])
					{
					case 1:
						color(WHITE, WHITE);
						puts(" ");
						break;
					case 0:
						color(BLACK, BLACK);
						puts(" ");
						break;
					}
				}
			}
			fifo[k]++;
			if (fifo[k] >= 22)
			{
				fifo[k] -= 22;
			}
		}
		Sleep(450);
	}

}

int main(void)
{
	//콘솔창 세로, 가로 조정
	system("mode con:lines=41  cols=111"); 
	CursorView(0);
	printCake();
	printHappyBirthDay();
}

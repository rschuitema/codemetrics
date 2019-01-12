#include "componentc.h"
#include "componentb.h"

int subtract(int p1, int p2)
{
    if (p1 > 3)
    {
		if (p1 == 5)
		{
			if (p2 < 8)
			{
				p2 =0;
			}
			
			if (p2 == 12)
			{
				p2 = 1;
			}
		}
		else
		{
			p1 =9;
		}
		
		if (p1 == 9)
		{
			if (p2 < 8)
			{
				p2 =0;
			}
			
			if (p2 == 12)
			{
				p2 = 1;
			}
		}

		
        if (p1 == 99)
        {
            if (p2 > 32)
            {
                p1 = 9;
            }

            if (p2 < 87)
            {
                p2 = 98;
            }
        }
    }
    return 0;
}

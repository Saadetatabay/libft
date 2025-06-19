#include<unistd.h>>
int	isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	return (0);
}

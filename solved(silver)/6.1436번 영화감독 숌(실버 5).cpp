#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define bit 32
int result(int *movie_name)
{
	int sum = 0;
	int save_movie_name = *movie_name;
	for(int a = 10;save_movie_name>1;save_movie_name/=10)
	{
		if (save_movie_name % a == 6)
		{
			sum++;
		}
		else if(sum < 3)
		{
			sum = 0;
		}
	}
	return sum;
}
int main(void)
{
	
	/*종말의 숫자?
	* 종말의 숫자는 숫자에 666이 적혀있는 숫자를 말한다.
	* ex) 328666 (0) 3266066 (x)
	*/
	int movie_name = 665;//종말을 나타내는 숫자 변수 지정. 1첫번재 종말의 숫자 666
	int movie_count;//영화의 갯수를 새는 변수를 지정.
	scanf("%d", &movie_count);

	for (int check =0; movie_count != check; movie_name++)
	{
		if (result(&movie_name) >= 3)
		{
			check++;
		}
	}
	printf("%d",movie_name-1);
}
/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/
#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word)
{
	int count = 0;
	if (str&&word)
	{
		int i, i1,k;
		for (i = 0; str[i]; i++)
		{
			k = i;
			for (i1 = 0; word[i1]; i1++)
			{
				if (str[k] == word[i1])
					k++;
				else
					break;
			}
			if (!word[i1])
				count++;
		}
		return count;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word)
{
	return 0;
}

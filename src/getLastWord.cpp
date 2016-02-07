/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int length(char *str)
{
	int i;
	for (i = 0; str[i]; i++);
	return i;
}
char* get_last_word(char * str)
{
	if (str != NULL)
	{
		int len=length(str);
		char *last = (char*)malloc(20 * sizeof(char));
		int lindex = 0,lastChar=len-1;
		while(str[lastChar]==' ')
			lastChar--;
		int firstCharLastWord=lastChar;
		while(str[firstCharLastWord]!=' '&&firstCharLastWord>0)
			firstCharLastWord--;
		if (str[firstCharLastWord] == ' ')
			firstCharLastWord++;
		for(int i=firstCharLastWord;i<=lastChar;i++)
			last[lindex++]=str[i];
		last[lindex] = '\0';
		return last;
	}
	return NULL;
}
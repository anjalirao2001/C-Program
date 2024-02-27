#include<stdio.h>
#include<string.h>

int isPalindrome(char  S[])
{
    int start=0;
    int end= strlen(S)-1;
    while(end>start)
    {
        if(S[start++] != S[end--])
        {
            return 0;
        }  
    }
    return 1;
}

int main()
{
	char s[]="aabbaa";
	int p= isPalindrome(s);
	if(p == 0)
	{
		printf("%s is not palindrom",s);
	}
	else
	{
		printf("%s is palindrom",s);
	}
	return 0;
}

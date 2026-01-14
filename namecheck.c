#include<stdio.h>
#include<string.h>
#include<ctype.h>
int NAME_CHECK(const char name[])
{
    int len=strlen(name);
    for(int i=0;i<len;i++)
    {
        if(isdigit(name[i]))
        return 0;
    }
}

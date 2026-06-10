#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char str[]="this is a test string";
    char pat[]="tist";

    int hash_pat[256]={0}, hash_str[256]={0};

    int len1=strlen(str);
    int len2=strlen(pat);

    for(int i=0;i<len2;i++)
        hash_pat[pat[i]]++;

    int start=0,start_index=-1,min_len=INT_MAX,count=0;

    for(int j=0;j<len1;j++)
    {
        hash_str[str[j]]++;

        if(hash_pat[str[j]]!=0 &&
           hash_str[str[j]]<=hash_pat[str[j]])
            count++;

        if(count==len2)
        {
            while(hash_str[str[start]]>hash_pat[str[start]] ||
                  hash_pat[str[start]]==0)
            {
                if(hash_str[str[start]]>hash_pat[str[start]])
                    hash_str[str[start]]--;

                start++;
            }

            int len_window=j-start+1;

            if(min_len>len_window)
            {
                min_len=len_window;
                start_index=start;
            }
        }
    }

    for(int i=start_index;i<start_index+min_len;i++)
        printf("%c",str[i]);

    return 0;
}
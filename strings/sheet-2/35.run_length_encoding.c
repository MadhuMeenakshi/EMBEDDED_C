for(i=0;str[i];)
{
    count=1;

    while(str[i]==str[i+1])
    {
        count++;
        i++;
    }

    printf("%c%d",str[i],count);
    i++;
}
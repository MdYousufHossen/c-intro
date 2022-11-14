 int s, m, j;
    char c;
    scanf("%d", &s);

    for(j=1; j<=s; j++)
    {
        int min=0;
        scanf("%d%c", &m, &c);
        if(m>=0 && m<60)
            min= (60-m)+100;
        else if(m>=60 && m<80)
            min= (80-m)*62;
        else if(m>=80 && m<=100)
            min= (100-m)*3;
       printf("%d minutes\n", min);
    }
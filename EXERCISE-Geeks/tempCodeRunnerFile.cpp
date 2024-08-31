   char a = tolower(c);
    char vow[5] = {'a','e','i','o','u'};
    int len = sizeof(vow);

    for (int i = 0; i <= len-1; i++)
    {
        if (vow[i] == a)
        {
            return "YES";
        }
        
        else if (vow[i] != a)
        {
            return "NO";
        }

        
    }
    


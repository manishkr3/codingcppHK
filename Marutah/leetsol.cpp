int count = 0;
for (int i = 1; i < sqrt(X); i++)
{
    if (X % i == 0)
    {
        int a = i;
        int b = X / i;
        if (a <= N && b <= N)
        {
            if (a == b)
                count += 1;
            else
                count += 2;
        }
    }
}
return count;
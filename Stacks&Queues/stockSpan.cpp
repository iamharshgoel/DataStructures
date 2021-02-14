int *stockSpan(int *price, int size)
{

    int *arr = new int[size];
    arr[0] = 1;
    int i = 0, count = 1;
    while (i < size)
    {
        int prevAns = price[i];
        int j = 0;
        count = 1;
        while (j < i)
        {
            if (price[j] < prevAns)
            {
                count++;
                arr[i] = count;
            }
            else
            {
                count = 1;
                arr[i] = count;
            }
            j++;
        }
        i++;
    }
    return arr;
}
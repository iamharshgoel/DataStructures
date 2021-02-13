template <typename T>
class Queue
{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    Queue(int totalSize)
    {
        data = new T[totalSize];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = totalSize;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    // insert element
    void enqueue(T element)
    {
        if (size == capacity)
        {
            T *newData = new int[2 * capacity];
            int j = 0;
            for(int i = firstIndex; i< capacity; i++){
                newData[j] = data[i];
                j++;
            }

            for(int i = 0; i<firstIndex; i++){
                newData[j] = data[i];
                j++;
            }
            delete [] data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;

           // cout << "Queue is full" << endl;
           // return;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;

        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size++;
    }

    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return 0;
        }
        return data[firstIndex];
    }

    // delete element
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        return ans;
    }
};
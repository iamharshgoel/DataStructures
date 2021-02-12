template <typename T>

class StackUsingArray
{
    T *data;
    T nextIndex;
    T capacity;

public:
    StackUsingArray(int totalSize)
    {
        data = new T[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    // return the number of elements in my stack
    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        /*if (nextIndex == 0)
        {
            return true;
        }
        return false;*/
        return nextIndex == 0;
    }

    // insert element
    void push(T element)
    {

        if (nextIndex == capacity)
        {
            T *newData = new T[2 * capacity];
            fot(int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;

            /* cout << "Stack full" << endl;
            return;*/
        }
        data[nextIndex] = element;
        nextIndex++; 
        }

        // delete element
        T pop()
        {
            if (isEmpty())
            {
                cout << "Stack is empty" << endl;
                return 0;
            }
            nextIndex--;
            return data[nextIndex];
        }

        // topmost element

        T top()
        {
            if (isEmpty())
            {
                cout << "Stack is empty" << endl;
                return 0;
            }
            return data[nextIndex - 1];
        }
    };
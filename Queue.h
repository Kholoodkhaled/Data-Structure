#ifndef QUEUE_H
#define QUEUE_H
using namespace std;

class Queue
{
private:
    int* Q;
    int StkSize;
    int Front, rear;
    bool circular;    /// Mode flag: true for circular, false for shifting

public:

    /// Queue Constructors

     Queue() : StkSize(5), Front(0), rear(0), circular(false)
    {
        Q = new int[StkSize];
        cout << "\n Queue parameterless Ctor ." << endl;
    }


    Queue(int Sz, bool isCircular = false) : StkSize(Sz), Front(0), rear(0), circular(isCircular) {
        Q = new int[StkSize];
        cout << "\n Queue parameterized ctor. Mode: "
             << (circular ? "Circular" : "Shifting") << endl;
    }


    /// Check if queue is full
    bool IsFull()
    {
        if (circular) {
            return ((rear + 1) % StkSize == Front); /// Full if next position wraps to front
        } else {
            return (rear == StkSize); /// Full if rear reaches end of array in shifting mode
        }
    }

    /// Check if queue is empty
    bool IsEmpty()
    {
        if (circular) {
            return (Front == rear);
        } else {
            return (Front == rear);
        }
    }

    ///  EnQueue Function
    void EnQueue(int Value) {
        if (!IsFull()) {
            Q[rear] = Value;


            if (circular)
            {
                rear = (rear + 1) % StkSize;   ///  EnQueue for circular mode
            } else {
                rear++;                        ///  EnQueue for shifting mode
            }
        } else {
            cout << "\n Queue is Full!" << endl;
        }
    }


    /// Dequeue Function
    int DeQueue() {
        if (!IsEmpty()) {
            int value = Q[Front];


            if (circular) {
               Front = (Front + 1) % StkSize;     ///  DeQueue for circular mode
            } else {
                Front++;                         ///  DeQueue for shifting mode
            }
            return value;
        }
        else {
            cout << "\n Queue is Empty!" << endl;
            return -1;
        }
    }

    /// /// Getfront function
    int Getfront()
    {
        if (!IsEmpty())
        {
            return Q[Front];
        }
        else
        {
            cout << "\n Queue is Empty!" << endl;
            return -1;
        }
    }

    /// GetRear function
    int GetRear()
    {
        if (!IsEmpty())
        {
            return Q[rear];
        }
        else
        {
            cout << "\n Queue is Empty!" << endl;
            return -1;
        }
    }


    /// Display Queue content
    void display()
    {
        if (!IsEmpty())
        {
            cout << "\n Queue contents: ";
            if (circular)                       ///circular mode queue
            {
                int i =Front;
                while (i != rear)
                {
                    cout << Q[i] << " ";
                    i = (i + 1) % StkSize;
                }
            }
           else                              ///shifting mode queue
            {
                for (int i = Front; i < rear; i++)
                {
                    cout << Q[i] << " ";
                }
            }
            cout << endl;
        }
         else
        {
            cout << "\n Queue is Empty!" << endl;
        }
    }


    /// Queue Destructor
     ~Queue()
     {
        delete[] Q;
        cout << "\n Queue Destructor." << endl;
    }

};

#endif // QUEUE_H

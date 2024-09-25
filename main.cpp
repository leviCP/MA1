
#include "testQueue.cpp"
// main function
int main()
{
    // call your test functions here!
    queue testing;

    if (test_size(testing) == 0)
    {
        cout << "size test passed\n" << endl;
    }
    else
    {
        cout << "size test failed\n" << endl;
    }

    if (test_empty(testing) == true)
    {
        cout << "is_empty tessed passed" << endl;
    }
    else
    {
        cout << "is_empty test failed\n" << endl;
    }

    if (test_full(testing) == true)
    {
        cout << "full test passed" << endl;
    }
    else
    {
        cout << "full test failed" << endl;
    }
    return 0;
}


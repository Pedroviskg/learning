#include <iostream>

// Constructors
// Constructors must have the same name of its class
// It must be public


class Something
{
private:
    int m_number{};

public:
    Something(int a = 10)              // This is a constructor
    // :m_number{a}                    // This is a option to a member initialize list
                                       // This is a member initialize list
    {
        m_number = a;                  // But the member initialize list can be inserted here
    }

    void print()                       // Now this function is working with m_number.
    {
        std::cout << m_number << "\n";
    }

};


int main()
{
    Something foo(4);
    foo.print();
    Something goo;
    goo.print();

    return 0;
}

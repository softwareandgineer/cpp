#include <iostream>

void HWTwoNum()
{
    int m;
    int n;
    int c = 0; //set up a variable that counts
    std::cout << "Input a number";
    std::cin >> m;
    std::cout << "Input another number";
    std::cin >> n;

    if (m > n) //swaps the numbers no matter what order
    {
        int tmp = m;
        m = n;
        n = tmp;
    }

    while (m <= n)
    {
        c++; //every loop count once
        std::cout << m << " ";
        m++;
        if (c % 10 == 0) //every 10 outputs make a new line
            std::cout << std::endl;
    }
}

void Ex1_5()
{
    int n1, n2;
    std::cout << "Input two numbers" << std::endl;
    
    std::cin >> n1 >> n2;

    std::cout << "The product of your two numbers are " << n1 * n2 << std::endl;
}

void Ex1_9()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;

    std::cout << "Sum is " << sum << std::endl;
}

//while loop to print from 10-0
void Ex1_11()
{
    int n = 10;
    while (n >= 0)
    {
        std::cout << n << std::endl;
        --n; //from now on use + or - before variable "++i and --n"
    }
}

void Ex1_17()
{
    int neg = 0;
    int pos = 0;
    int n;

    while (std::cin >> n)
    {
        if (n > 0)
            ++pos;
        else
            ++neg;
    }

    std::cout << "You have " << pos << " positive(s), " << neg << " negatives(s)" << std::endl;

}

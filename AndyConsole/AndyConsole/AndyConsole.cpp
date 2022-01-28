#include <iostream>
#include "sales_Item.h"
int sum(int x, int y)
{
    return x + y;
}

void TrySum()
{
    std::cout << "Hello World\n"; //cout is computer output
    int n, m;

    std::cout << "Input number:";
    std::cin >> n; //cin is what gets user input
    std::cin >> m;

    int result = sum(n, m);

    std::cout << "result is: " << result << std::endl;

}


 

void TryWhileLoop() 
{
    int result = 0; //initial value
    int i = 1; //initial value

    while (i <= 10) //inside brackets is condition
    {
        result += i; //actual function these two lines down there
        i++; //post execution (what needs to be done to ensure loop is functional 
    }
    std::cout << "Sum of 1-10 is: " << result << std::endl;
}

void TryForLoop()
{
    int result = 0;
    for (int i = 1; i <= 100; i++) //divided into three sections separated with ";" first box is initial value, second is condition, third is post exeution 
    {
        result += i;
    }
    std::cout << "Sum of 100 is: " << result << std::endl;
}

void TryIf()
{
    std::cout << "Please input a number";
    int n; //creation of variable
    std::cin >> n;
    if (n % 2 == 0) //% is the remainder
        std::cout << "Your number is even" << std::endl; //endl makes sure that the line ends
    else
        std::cout << "Your number is odd" << std::endl; //if else statements very similar to python
}

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

void TrySalesItem()
{
    std::cout << "Input book1, bookno, sold, price";
    Sales_item book1;
    std::cin >> book1;
    
    std::cout << "Input book2, bookno, sold, price";
    Sales_item book2;
    std::cin >> book2;

    if (book1.isbn() != book2.isbn())
    {
        std::cout << "book No. are different!" << std::endl;
    }
    
    Sales_item book3 = book1 + book2;
    std::cout << book3 << std::endl;
}

void TryCountBooks()
{
    Sales_item total, trans;

    if (std::cin >> total)
    {
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total = total + trans;
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
    }
    else
    {
        std::cout << "Bye!" << std::endl;
    }
}




int main()
{
    //TrySum();
    //TryWhileLoop();
    //TryForLoop();
    //TryIf();
    //HWTwoNum();
    //TrySalesItem();
    TryCountBooks();
}

    

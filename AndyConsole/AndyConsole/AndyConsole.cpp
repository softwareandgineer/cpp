// AndyConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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


int main()
{
    //TrySum();
    //TryWhileLoop();
    //TryForLoop();
    //TryIf();
}

    

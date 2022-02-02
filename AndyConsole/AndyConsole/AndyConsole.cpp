#include <iostream>
#include "sales_Item.h"
#include "Ch1_Homework.h"
#include <climits>

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

unsigned long long get_max_value(int nbytes, bool is_signed)
{
    unsigned long long n = 1;
    
    if (nbytes == 8 and !is_signed)
        return ULLONG_MAX;

    if (is_signed)
        n <<= nbytes * 8 - 1;
    else
        n <<= nbytes * 8;

    return n - 1;
}

void TryTestIntegers()
{
    char n1 = 1; //1 byte
    short n2 = 123; // 2 byte
    int n3 = 123231; // 4 byte
    long long n4 = 342344342; // 8 byte
    long n5 = 1234; // 32 bit machine it has 4 bytes, if it is 64 bit machine, on Windows it has 4 bytes, on other platform(Linux) it has 8 bytes
    float f = 0.1f; // the f behind the decimal represent float, single precision, has 4 bytes
    double ff = 0.1; // no f behind decimal = double precision,has 8 bytes 

    std::cout << "char has " << sizeof(char) << " bytes" << std::endl;
    std::cout << "short has " << sizeof(short) << " bytes" << std::endl;
    std::cout << "int has " << sizeof(int) << " bytes" << std::endl;
    std::cout << "long long has " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "long has " << sizeof(long) << " bytes" << std::endl;
    std::cout << "float has " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double has " << sizeof(double) << " bytes" << std::endl;

    unsigned char un1 = 1; //unsigned = no negatives only pos values
    unsigned short un2 = 123;
    unsigned int un3 = 123231;
    unsigned long long un4 = 342344342;

    std::cout << "Maximum value of char is " << get_max_value(sizeof(char), 1) << std::endl;
    std::cout << " Max value of unsigned char is " << get_max_value(sizeof(char), 0) << std::endl;

    std::cout << "Maximum value of short is " << get_max_value(sizeof(short), 1) << std::endl;
    std::cout << " Max value of unsigned short is " << get_max_value(sizeof(short), 0) << std::endl;

    std::cout << "Maximum value of int is " << get_max_value(sizeof(int), 1) << std::endl;
    std::cout << " Max value of unsigned int is " << get_max_value(sizeof(int), 0) << std::endl;

    std::cout << "Maximum value of long long is " << get_max_value(sizeof(long long), 1) << std::endl;
    std::cout << " Max value of unsigned long long is " << get_max_value(sizeof(long long), 0) << std::endl;

    //integer literals
    int c1 = 20; //decimal literals in terms of 10
    int c2 = 024; //leading 0, means that it is in octal literals
    int c3 = 0x14; // hexadecimal (0-9, a=10, b=11, c=12, d=13, e=14, f=15

    unsigned int c5 = 128u; //u = unsigned
    long c6 = 10L; //L = long
    long long c7 = 123456LL; //LL = long long

    float f1 = 3.1415f; //single precisoin
    float f2 = 1.0e-3; //scientific notation
    float f3 = 5.0e10; //scientific notation

    bool test = false; // or true

    char c = 'a'; //single quote = char
    char c2 = '\n'; // new line
                    // /t: tab \b: backspace \r: carriage return \\: backslash \": double quote \': single quote
    wchar_t wc = L'a'; // wide char(2 bytes), L: wide char

    std::cout << "011 represents: " << 011 << std::endl;
    std::cout << "0111 represents: " << 0111 << std::endl;
    std::cout << "0403 represents: " << 0403 << std::endl;
    
    std::cout << "0x14 represents: " << 0x14 << std::endl;
    std::cout << "0x2f represents: " << 0x2f << std::endl;
}

int main()
{
    //TrySum();
    //TryWhileLoop();
    //TryForLoop();
    //TryIf();
    //TrySalesItem();
    //TryCountBooks();
    //HWTwoNum();
    //Ex1_5();
    //Ex1_9();
    //Ex1_11();
    //Ex1_17();
    TryTestIntegers();
}

    

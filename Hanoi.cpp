#include <iostream>

void Hanoi(int n, char from, char temp, char to,int& count)
{
    if (n == 1)
    {
        count++;
        std::cout << count << ":" << from << "에서" << to << "로 원반을" << n << "옮깁니다." << std::endl;
        return;
    }
    Hanoi(n - 1, from, to, temp,count);
    count++;
    std::cout << count<<":" << from << "에서" << to << "로 원반을" << n << "옮깁니다." << std::endl;
    Hanoi(n - 1, temp, from, to,count);
}

int main()
{
    int number{};
    std::cout << "원판의 숫자를 입력하세요";
    std::cin >> number;
    int count = 0;
    Hanoi(number, 'A', 'B', 'C',count);
}

/*
 #include <iostream>

void Hanoi(int n, char from, char temp, char to)
{

    if (n == 1)
    {
        std::cout << from << "에서" << to<<"로 원반을"<< n << "옮깁니다." << std::endl;
        return;
    }
    Hanoi(n - 1, from, to, temp);
    std::cout << from << "에서" << to << "로 원반을" << n << "옮깁니다." << std::endl;
    Hanoi(n - 1, temp, from, to);
}

int main()
{
    int number{};
    std::cout << "원판의 숫자를 입력하세요";
    std::cin >> number;
    Hanoi(number, 'A', 'B', 'C');
}

*/

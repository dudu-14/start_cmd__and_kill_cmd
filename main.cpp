// CMD.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    bool mode = true;
    std::cin >> mode;

    system("mode con cols=48 lines=25");
    system("color F5");
    while (true)
    {
        if (mode)
            system("start cmd");
        else
            system("taskkill /f /im cmd.exe");
    }
}
// CMD.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>

int main()
{
    std::cout << "Start cmd please input 1 to start, but input 0 to kill cmd.\n";
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
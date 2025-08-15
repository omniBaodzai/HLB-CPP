#include <iostream>

int main()
{
    int age = -5;

    if (age < 0)
    {
        std::cerr << "Lỗi: Tuổi không thể là một giá trị âm!" << std::endl;
        return 1; // Thoát chương trình với mã lỗi

        std::cout << "Tuổi của bạn là: " << age << std::endl;
        return 0;
    }
}
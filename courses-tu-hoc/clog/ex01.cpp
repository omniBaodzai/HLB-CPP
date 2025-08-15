#include <iostream>

int main()
{
    int temperature = 35;

    if (temperature > 30)
    {
        std::clog << "Cảnh báo: Nhiệt độ cao trên hơn bình thường!" << std::endl;
    }

    std::cout << "Nhiệt độ là: " << temperature << "°C" << std::endl;
    return 0;
}
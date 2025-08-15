#include <iostream>
#include <fstream>

int main() {
    std::ofstream logFile("program.log");

    if (!logFile) {
        std::cerr << "Error: Could not open log file!" << std::endl;
        return 1;
    }

    std::clog.rdbuf(logFile.rdbuf());  // Chuyển hướng std::clog vào tệp log

    std::clog << "This is a log message." << std::endl;
    logFile.close();
    return 0;
}


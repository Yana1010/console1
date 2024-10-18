#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class ReportGenerator {
public:
    string generateReport(const string& data) {
        // Генерація звіту на основі даних
        return "Звіт: " + data;
    }
};

class EmailSender {
public:
    void sendEmail(const string& report) {
        // Відправка звіту електронною поштою
        cout << "Відправка звіту: " << report << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string data = "Дані для звіту";

    ReportGenerator reportGenerator;
    string report = reportGenerator.generateReport(data);

    EmailSender emailSender;
    emailSender.sendEmail(report);

    return 0;
}

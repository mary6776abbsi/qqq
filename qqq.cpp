#include <iostream>

int main() {
    float average;
    char grade;
    bool isConditional = false;

    // ����? ���� �� ����� ����� �?����
    std::cout << "Enter the average: ";
    std::cin >> average;

    // �� ���� ���� ���� ���� �?����
    if (average >= 17 && average <= 20) {
        grade = 'A';
    }
    else if (average >= 14 && average < 17) {
        grade = 'B';
    }
    else if (average >= 10 && average < 14) {
        grade = 'C';
    }
    else if (average >= 0 && average < 10) {
        grade = 'D';
    }
    else {
        std::cout << "Invalid average!" << std::endl;
        return 1;
    }

    // ǐ� ���� �?� 14 �� 17 ���ϡ ��� ����� ���
    if (grade == 'B') {
        isConditional = true;
    }

    // �ǁ ���� � ���?� �����?�
    std::cout << "Grade: " << grade << std::endl;
    if (isConditional) {
        std::cout << "The student is conditional." << std::endl;
    }
    else {
        std::cout << "The student is not conditional." << std::endl;
    }

    return 0;
}

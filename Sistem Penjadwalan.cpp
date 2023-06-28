#include <iostream>
#include <string>
#include <vector>

struct Course {
    std::string name;
    std::string day;
    std::string time;
};

void scheduleCourse() {
    std::vector<Course> courses;
    std::string input;

    while (true) {
        Course course;
        std::cout << "Masukkan nama mata kuliah (ketik 0 untuk melihat hasil jadwal): ";
        std::getline(std::cin, input);

        if (input == "0") {
            break;
        }

        course.name = input;

        std::cout << "Masukkan hari kuliah: ";
        std::getline(std::cin, course.day);

        std::cout << "Masukkan jam kuliah: ";
        std::getline(std::cin, course.time);

        courses.push_back(course);
    }

    std::cout << "\nJadwal Mata Kuliah:\n";
    for (const auto& course : courses) {
        std::cout << "Mata Kuliah: " << course.name << "\n";
        std::cout << "Hari: " << course.day << "\n";
        std::cout << "Jam: " << course.time << "\n\n";
    }
}

int main() {
    std::cout << "Penjadwalan Mata Kuliah\n\n";
    scheduleCourse();

    return 0;
}

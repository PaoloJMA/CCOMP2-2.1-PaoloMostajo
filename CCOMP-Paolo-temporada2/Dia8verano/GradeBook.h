#include <iostream>
#include <array>
#include <string>
#include <iomanip>

using namespace std;

class GradeBook {
public:
    
    static const size_t students {10};

    GradeBook(const string& name, const array<int, students>& gradesArray) : courseName{name}, grades{gradesArray}{}

    void setCourseName (const string& name) {
        courseName = name;
    }

    const string& getCourseName() const {
        return courseName;
    }

    void displayMessage() const  {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    }

    void processGrades() const {
        outputGrades();

        cout << setprecision(2) << fixed;
        cout << "\nClass average is " << getAverage() << endl;

        cout << "Lowest grade is " << getMinimum() << "\nHighest grade is " << getMaximum() << endl;

        outputBarChart();
    }

    int getMinimum() const {
        int lowGrade{100};

        for (int grade : grades) {
            if (grade < lowGrade) {
                lowGrade = grade;
            }
        }

        return lowGrade;
    }

    int getMaximum() const {
        int highGrade{0};

        for (int grade : grades) {
            if(grade > highGrade) {
                highGrade = grade;
            }
        }

        return highGrade;
    }

    double getAverage() const {
        int total{0};

        for (int grade : grades) {
            total += grade;
        }

        return static_cast<double>(total) / grades.size();
    }

    void outputBarChart() const {
        cout << "\nGrade distribution:" << endl;

        const size_t frecuencySize{11};
        array<unsigned int, frecuencySize> frecuency{};

        for(int grade : grades) {
            ++frecuency[grade / 10];
        }

        for (size_t count {0}; count < frecuencySize; ++count){

            if(0 == count) {
                cout << " 0 - 9 ";
            }
            else if ( 10 == count) {
                cout << " 100: ";
            }
            else {
                cout << count * 10 << "-" << (count * 10) + 9 << ": ";
            }

            for (unsigned int stars{0}; stars < frecuency[count]; ++stars) {
                cout << '*'; 
            }

            cout << endl;
        }
    }

    void outputGrades() const {
        cout << "\nThe grade are:\n\n";

        for (size_t student{0}; student < grades.size(); ++student) {
            cout << "Student " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
        }
    }

private:
    string courseName;
    array<int, students> grades;
    


};
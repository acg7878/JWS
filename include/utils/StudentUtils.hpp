#ifndef STUDENTUTILS_HPP
#define STUDENTUTILS_HPP

#include "core/Student.hpp"
#include <vector>

Student inputStudentInfo(const std::vector<Student> &students);
void addStudent(std::vector<Student> &students);
Student findStudentById(const std::vector<Student> &students, int studentId);
void displayStudentInfo(const Student &student);
bool isStudentIdUnique(const std::vector<Student> &students,
                       const std::string &id);
// 主界面
void StudentInfo(std::vector<Student> &students);

#endif // STUDENTUTILS_HPP
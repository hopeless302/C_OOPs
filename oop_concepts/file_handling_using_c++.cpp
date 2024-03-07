/* File Handling */
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
main()
{
  /* Taking Values from User */
  int id;
  string name;
  float marks;
  cout << "Enter Student ID: ";
  cin >> id;
  cout << "\n\nEnter Student Name: ";
  cin >> name;
  cout << "\n\nEnter Student Marks: ";
  cin >> marks;

  /* Write Data in the File */
  ofstream file;
  file.open("Hazeefa.txt", ios::app);
  file << id << " " << name << " " << marks << "\n";
  file.close();

  /* Reading Data from the File */
  ifstream file1;
  file1.open("Hazeefa.txt");
  file1 >> id >> name >> marks;
  while (!file1.eof())
  {
    cout << "\n\n\nStudent ID: " << id;
    cout << "\n\nStudent Name: " << name;
    cout << "\n\nStudent Marks: " << marks;
    file1 >> id >> name >> marks;
  }
  file1.close();
  getch();
  return 0;
}
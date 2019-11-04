#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

class dictionary
{
      string FileName = "dictionary.txt";
      string eng, rus;
public:
      void putWord()
      {
            cout << "¬ведите слово:";
            getline(cin,eng);
            cout << "¬ведите перевод:";
            getline(cin,rus);
      }
      void show()
      {
            cout << eng << endl;
            cout << rus << endl;
      }
      void write()
      {
            file.open(FileName.c_str(), ios::app | ios::out );
            file << eng << endl;
            file << rus << endl;
            file.close();
      }
      void clear()
      {
            file.open(FileName.c_str(), ios::trunc | ios::out );
            file.close();
      }
      void SetFileName(string name) {FileName = name;}
      void setEng(string _eng) {eng = _eng;}
      void setRus(string _rus) {rus = _rus;}
      string getEng() {return eng;}
      string getRus() {return rus;}

private:
      fstream file;
};


int main()
{
      setlocale(LC_ALL, "rus");
      SetConsoleCP(1251);
      SetConsoleOutputCP(1251);

      dictionary dict;
      dict.SetFileName("dict.txt");
      //dict.clear();
      //dict.putWord();
      dict.setEng("rabbit");
      dict.setRus("кролик");
      dict.write();

      cout << dict.getEng()<<endl;
      cout << dict.getRus()<<endl;
return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

bool foundOut(char* str) {
   int pos = 0;
   char* t;
   bool q = false;
   while ((t = strstr(str + pos, "no")) || (t = strstr(str + pos, "on"))){
      pos = t - str + 2;
      if (strstr(str + 1, "no") || strstr(str+1,"on")) {
         q = true;
      }
   }
   return q;
}
char* Change(char* str, const size_t t_size) {
   char* t = new char[strlen(str)];
   char* p;
   int pos1 = 0, pos2 = 0;
   *t = 0;
   while (p = strstr(str + pos1, "no"))
   {
      if (strstr(str + 2, "no")) {
         pos2 = p - str + 2;
         strncat_s(t,t_size, str + pos1, pos2 - pos1 - 1);
         strcat_s(t, t_size, "***");
         pos1 = pos2;
      }
   }
   strcat_s(t,t_size, str + pos1);
   strcpy_s(str, sizeof(str), t);
   return t;
}
int main() {
   const size_t size= 101;
   char str[size];
   cout << "enter string" << endl;
   cin.getline(str, 100);
   //char str[] = "I don't know what I know";
   if (foundOut(str) == true) {
      cout << " IS a pair of adjacent letters 'no' or 'on'" << endl;
   }
   else {
      cout << " NO a pair of adjacent letters 'no' or 'on'" << endl;
   }
   char* dest = new char[151];
   dest = Change(str,size);
   cout << dest;
   return 0;
}
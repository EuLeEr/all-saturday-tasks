#include <iostream>
#include <cctype>
#include <clocale>

using namespace std;

int main() {
    // std::locale russianLocale("ru_RU.UTF-8");
    // setlocale(LC_ALL, russianLocale.name().c_str());
    // cout.imbue(russianLocale);
    //cout.setf(ios::fixed);
    //setlocale(LC_ALL, "Russian");
    // std::locale russian_locale("ru_RU.utf8"); // Используйте нужное вам имя локали
    // std::locale::global(russian_locale);
    std::locale::global(std::locale(""));
    std::cout << "Current locale: " << std::locale().name() << std::endl;
    // Rest of your code...
//    return 0;
    string charac  = "asdfgzxcйцПривет";
    
 //   char charac[] = [];
    for (size_t i = 0; i < 10; i++)
    {
        charac[i] = toupper(charac[i]  );       /* code */
    }
    
 
    cout << "строка  - " << charac << endl;
    return 0;
}

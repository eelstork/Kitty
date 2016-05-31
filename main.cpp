#include <iostream>
#include <boost/spirit/include/qi.hpp>
#include <boost/filesystem.hpp>

using namespace std;
using namespace boost::filesystem;

int main(){

  cout << "Hello Kitty" << endl;
  cout << "           " << endl;
  cout << "  > O O <  " << endl;
  cout << "           " << endl;
  cout << "  THE END  " << endl;

  // test boost filesystem

  path p ("/usr/local");   // p reads clearer than argv[1] in the following code

  if (exists(p)){
    if (is_regular_file(p))    cout << p << " size is " << file_size(p) << '\n';
    else if (is_directory(p))  cout << p << " is a directory\n";
    else                       cout << p << " exists, neither normal file nor dir\n";
  }else{
    cout << p << " does not exist.";
  }

  return 0;

}

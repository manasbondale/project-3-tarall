#include <cstdlib>
#include <string>
int main(int argv, char * argc []){
//std::string s2 = argc[0];
//std::string s1 = "cd " + s2 +"; tar -cvf tar1.tar . ";

std::string s1 = "tar -cvf tar1.tar . ";
std::system(s1.c_str());
return 0;
}

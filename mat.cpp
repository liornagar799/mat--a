#include <ostream>
#include <string>
#include "mat.hpp"
using namespace ariel;
using namespace std;



namespace ariel{
  
string mat(int x, int y, char a, char b){

  if (x%2==0 || y%2==0 || x<1 || y<1){
      throw invalid_argument ("invalid argument");
       
  }
    return "";  
  
 
} 
}
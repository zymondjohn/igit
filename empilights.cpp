#include <iostream>
using namespace std;

int main(){
    int rows;
      cout << "Enter number";
      cin >> rows;

      for(int i = 1; i <= rows;++i){
          for(int j = 1; j <= i;){

            cout << j;
          j++;


          }

          cout << "\n";
      }

  return 0;
}

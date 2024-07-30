#include <iostream>

using namespace std;

int main(){

string produce [3] = {"Chips", "Bread", "Juice"};

int quantity [3] = {30, 9, 30};
  
for (int i = 0; i < 3 ; i++){

for (int j = 0; j < 3; j++){
cout << "The produce we got is: " << produce[i] << " and the amount of produce we have (in the order placed) is: " << quantity[j] << endl;  
}
}

  
  return 0;
}
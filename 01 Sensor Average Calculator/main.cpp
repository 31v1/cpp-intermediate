#include <iostream>
#include <array>

using namespace std;

int main () {
  array <int,10> temperature;
  int value;
  double average = 0;  // better double than int since is an average..

  for (size_t i {0}; i < temperature.size(); i++){
    cout << "Enter the temperature value: " << endl;
    cin >> value;
    temperature[i] = value;
  }

  for (size_t i {0}; i < temperature.size(); i++){
    average += temperature[i];
  }
    average = average/temperature.size();
    cout << "The average temperature is: " << average << endl;
  
  return 0;
}

  

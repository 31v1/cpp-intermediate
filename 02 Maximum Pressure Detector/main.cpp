# include<iostream>
# include<array>

using namespace std;

int main () {

  const size_t sizeArray{7};
  array <int,sizeArray> maxPressures {580, 65, 987, 26, 31, 852, 78};
  double pressureValue = maxPressures[0];
  int maxIndex = 0;
  
  for (size_t i {0}; i < maxPressures.size(); i++){
    if (pressureValue < maxPressures[i]){
        pressureValue = maxPressures[i];
        maxIndex=i;
        }
  }
  cout <<"The maximum pressure is: "<< pressureValue 
  << "kPa on index: " << maxIndex << endl;

return 0;
}
    
  

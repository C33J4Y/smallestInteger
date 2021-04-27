#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
  int result = 1;
  if(A.size() == 0){
    return result;
  }

  sort(A.begin(), A.end());

  if(A[A.size() -1] <= 0){
    return result;
  }
    
    for(int i = 0; i < A.size(); i++){
        if(A[i] == result){
          result++;
        }
        
    }
    
    return result;
}

int main() {
  vector<int> A = {1,3,6,4,1,2};
  vector<int> B = {-1, -3};
  vector<int> C = {1, 2, 3};
  int result; 

  result = solution(C);
  cout << result << endl;
  return 0;
}
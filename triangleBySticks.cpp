#include <iostream>
using namespace std;


int main() {
  int T, N, M, O;
  system("clear"); //If you are using Windows operating system, please change the code into system("cls");
  cin>>T;
  string arr[T];
  if(T >= 1 && T <= 100) {
    for(int i = 0; i < T; i++) {
      cin>>N>>M>>O;
      if(N >= 1 && N <= 10000 && M >= 1 && M <= 10000 && O >= 1 && O <= 10000) {
        if((N + M ) > O && (N + O) > M && (M + O) > N) {
          arr[i] = "Yes";
        } else {
          arr[i] = "No";
        }
      } 
      else { 
        printf("Nilai dari variabel \"N, M, O\" tidak boleh kurang dari 1 atau lebih dari 10000 (N=%d, M=%d, O=%d)", N, M, O);   
        return 0;
      }
    }
  }
  if(T >= 1 && T <= 100) {
    for(int i = 0; i < T; i++) {
      printf("Case #%d: %s\n", (i + 1), arr[i].data());
    }
  } else { printf("Nilai dari variabel \"T\" tidak boleh kurang dari 1 atau lebih dari 100 (T=%d)", T); }
  return 0;
}

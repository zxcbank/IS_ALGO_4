//#include <iostream>
//
//using namespace std;
//
//int main() {
//  int n;
//  cin >> n;
//  long* a = new long[n];
//  for (int i = 0; i < n; i++){
//    cin >> a[i];
//  }
//  for (int i = 0; i < n; i++){
//
//    if (2 * i + 1 < n){
//      if (a[i] > a[2 * i + 1]){
//        cout << "NO";
//        return 0;
//      }
//    }
//
//    if (2 * i + 2 < n){
//      if (a[i] > a[2 * i + 2]){
//        cout << "NO";
//        return 0;
//      }
//    }
//
//  }
//
//  cout << "YES";
//  return 0;
//}

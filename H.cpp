////
//// Created by Святослав on 10.11.2023.
////
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main(){
//  long long n;
//  cin.tie(0);
//  ios::sync_with_stdio(0);
//  char a[1500];
//  fill(a, a+1500, 48);
//
//  cin >> n;
//  for (long long i = 0; i < n; i++){
//    char s[1500]{0};
//    cin >> s;
//    long long len = strlen(s);
//    for (long long j = 0; j < len; j++){
//      long long a1 = s[len - 1 - j] - '0';
//      long long a2 = a[1499 - j] - '0';
//
//      long long r = (a1 + a2) / 10;
//      long long k = (a1 + a2) % 10;
//      a[1499 - j] = k + 48;
//      a[1498 - j] = (r == 1) ? (a[1498 - j] + 1) : (a[1498 - j]);
//    }
//
//    for (long long j = 1499 - len; j > 0; j--) {
//        if (a[j] - 48 >= 10){
//          a[j] = 48;
//          a[j-1] = a[j-1] + 1;
//      }
//        if (a[j-1] < 58)
//          break;
//    }
//
//  }
//  long long i = 0;
//  while (a[i] - 48 == 0 && i < 1499){
//    i++;
//  }
//  while (i < 1500){
//    cout << a[i++];
//  }
//}




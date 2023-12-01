////
//// Created by Святослав on 10.11.2023.
////
//
//#include <iostream>
//
//using namespace std;
//
//
//void sift_down(int* a, int i, int n)
//{
//  int max_el = i;
//  int l = 2 * i + 1;
//  int r = 2 * i + 2;
//  if (l < n && a[l] > a[max_el])
//    max_el = l;
//  if (r < n && a[r] > a[max_el])
//    max_el = r;
//  if (max_el != i) {
//    swap(a[i], a[max_el]);
//    sift_down(a, max_el, n);
//  }
//
//}
//
//
//
//int main(int argc, char** argv)
//{
//  cin.tie(0);
//  ios::sync_with_stdio(0);
//  int n;
//  cin >> n;
//  int* a = new int[n];
//  for (int i = 0; i < n; i++)
//    cin >> a[i];
//
//  for (int i = n / 2 - 1; i >= 0; i--)
//    sift_down(a, i, n);
//
//  for (int j = n - 1; j > 0; j--){
//    swap(a[j], a[0]);
//    sift_down(a, 0, j);
//  }
//
//  for (int k = 0; k < n; k++)
//    cout << a[k] << " ";
//
//  return 0;
//}

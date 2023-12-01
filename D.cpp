////
//// Created by Святослав on 17.11.2023.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct twoparams {
//  long long i;
//  long long j;
//
//  twoparams(long long i, long long par) : i(i), j(par) {};
//};
//
//void shiftUp(long long i, vector<twoparams>& heap) //(2)
//{
//  while (i > 0 && (heap[(i - 1) / 2].j < heap[i].j || (heap[(i - 1) / 2].j == heap[i].j  && heap[(i - 1) / 2].i < heap[i].i) )){
//    swap(heap[(i - 1) / 2], heap[i]);
//    i = (i - 1) / 2;
//  }
//}
//
//void shiftDown(vector<twoparams>& heap, long long i) //(2)
//{
//  while (2 * i + 1 < heap.size()) {
//    long long child = 2 * i + 1;
//    if (child + 1 < heap.size() && heap[child].j < heap[child + 1].j) {
//      child++;
//    } else if (child + 1 < heap.size() && heap[child].j == heap[child + 1].j) {
//      if (heap[child].i <= heap[child + 1].i) {
//        child++;
//      }
//    }
//    if ((heap[i].j < heap[child].j) || (heap[child].j == heap[i].j && heap[child].i >= heap[i].i)) {
//      swap(heap[i], heap[child]);
//      i = child;
//    } else {
//      break;
//    }
//  }
//}
//
//void insert(vector<twoparams>& heap, long long i, long long par) //(2)
//{
//  heap.push_back(twoparams(i, par));
//  shiftUp(heap.size() - 1, heap);
//}
//
//void pop(vector<twoparams>& heap) { //(2)
//  swap(heap[0], heap[heap.size() - 1]);
//  heap.pop_back();
//  shiftDown(heap, 0);
//}
//
//void del_by_i(vector<twoparams>& heap, long long key) { // неправильно
//
//  long long len = heap.size();
//  for (long long t = 0; t < len; t++) {
//    if (heap[t].i == key) {
//      swap(heap[t], heap[heap.size() - 1]);
//      heap.pop_back();
//      shiftDown(heap, t);
//      return;
//    }
//  }
//}
//
//int main() {
//  cin.sync_with_stdio(false);
//  cin.tie(nullptr);
//  long long n, i, j, k, m;
//  cin >> n;
//  vector<twoparams> hype;
//  vector<twoparams> cash;
//  vector<long long> call;
//  vector<long long> tur;
//
//  while (n--) {
//    // код рейтинг гонорар
//    cin >> i >> j >> k;
//    insert(hype, i, j);
//    insert(cash, i, k);
//  }
//
//  cin >> m;
//  long long* ans = new long long[m];
//  string s;
//  for (long long q = 0; q < m; q++) {
//    cin >> s;
//    if (s == "YES")
//      ans[q] = 1;
//    else
//      ans[q] = 0;
//  }
//  i = 0, j = 0;
////  for (long long o = 0; o < m; o++)
////    cout << ans[o] << " ";
////  cout << "\n";
//  while (!hype.empty()) {
//    long long hype_max = hype[0].i;
//    long long cash_max = cash[0].i;
//
//    if (cash_max != hype_max) {
//
////      cout << "ans[i] = " << ans[i] << "\n";
//      if (i >= m) {
//        pop(hype);
//
//      } else if (ans[i] == 1) {
//        call.push_back(hype_max);
//        tur.push_back(hype_max);
//        pop(hype);
//        i++;
//      } else {
//        call.push_back(hype_max);
//        pop(hype);
//        del_by_i(cash, hype_max);
//        i++;
//      };
//    } else {
//      tur.push_back(hype_max);
//      pop(hype);
//      pop(cash);
//    }
//
//  }
//
//  for (i = 0; i < call.size(); i++)
//    cout << call[i] << " ";
//  cout << "\n";
//  for (i = 0; i < tur.size(); i++)
//    cout << tur[i] << " ";
//  cout << "\n";
//
//  return 0;
//}

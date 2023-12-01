////
//// Created by Святослав on 13.11.2023.
////
//
//#include <iostream>
//#include <vector>
//#include <fstream>
//
//struct order{
//  long long s, f;
//  order(long long s, long long f) : s(s), f(f){};
//};
//
//using namespace std;
//void shiftUp(long long i, vector<long long>& heap) //(1)
//{
//  while (i > 0 && heap[(i - 1) / 2] > heap[i]) {
//
//    // Swap parent and current node
//    swap(heap[(i - 1) / 2], heap[i]);
//
//    // Update i to parent of i
//    i = (i - 1) / 2;
//  }
//}
//
//void shiftUp(long long i, vector<order>& heap) //(2)
//{
//  while (i > 0 && heap[(i - 1) / 2].f > heap[i].f) {
//
//    // Swap parent and current node
//    swap(heap[(i - 1) / 2], heap[i]);
//
//    // Update i to parent of i
//    i = (i - 1) / 2;
//  }
//}
//void insert(vector <long long>& heap, long long x) //(1)
//{
//  heap.push_back(x);
//  shiftUp(heap.size() - 1, heap);
//}
//
//void insert(vector <order>& heap, long long s, long long f) //(2)
//{
//  heap.push_back(order(s, f));
//  shiftUp(heap.size() - 1, heap);
//}
//
//void shiftDown(vector <long long>& heap, long long i) //(1)
//{
//  long long minIndex = i;
//
//  long long l = 2 * i + 1;
//  if (l < heap.size() && heap[l] < heap[minIndex]) {
//    minIndex = l;
//  }
//  long long r = 2 * i + 2;
//  if (r < heap.size() && heap[r] < heap[minIndex]) {
//    minIndex = r;
//  }
//  if (i != minIndex) {
//    swap(heap[i], heap[minIndex]);
//    shiftDown(heap, minIndex);
//  }
//}
//
//void shiftDown(vector <order>& heap, long long i) //(2)
//{
//  long long minIndex = i;
//
//  long long l = 2 * i + 1;
//  if (l < heap.size() && heap[l].f < heap[minIndex].f) {
//    minIndex = l;
//  }
//  long long r = 2 * i + 2;
//  if (r < heap.size() && heap[r].f < heap[minIndex].f) {
//    minIndex = r;
//  }
//  if (i != minIndex) {
//    swap(heap[i], heap[minIndex]);
//    shiftDown(heap, minIndex);
//  }
//}
//
//long long extract_min(vector <long long>& heap){ //(1)
//  if (heap.size() == 0){
//    return -1;
//  }
//  else{
//    long long ans = heap[0];
//    swap(heap[0], heap[heap.size()-1]);
//    heap.pop_back();
//    shiftDown(heap, 0);
//    return ans;
//  }
//}
//
//long long extract_min(vector <order>& heap){ //(2)
//  long long ans = heap[0].s;
//  swap(heap[0], heap[heap.size()-1]);
//  heap.pop_back();
//  shiftDown(heap, 0);
//  return ans;
//}
//
//int main(){
//  cin.tie(0);
//
//  long long n, m, t, f, tmp_sal;
//  long long sum = 0;
////  freopen("mama.txt", "r", stdin);
//  cin >> n >> m;
//  vector <long long> having_rest;
//  vector <order> working;
//
//
//  for (long long i = 0; i < n; i++){
//    long long tmp;
//    cin >> tmp;
//    insert(having_rest, tmp);
//  }
//
//  while (m-- > 0) {
//    cin >> t >> f;
//
//
////        cout << "yes f s" << working[i].f << " " << working[i].s << "";
//    while (!working.empty() && working[0].f <= t){
////      cout << working[0].f;
//      long long s = extract_min(working);
//      insert(having_rest, s);
////        i++;
//    }
//
//
//    if (having_rest.size() != 0){
////        cout << "\n";
//      tmp_sal = extract_min(having_rest);
////        cout << f << " " << tmp_sal << "\n";
//      sum += f * tmp_sal;
//      insert(working, tmp_sal, f + t);
//    }
//
//
//  }
//  cout << sum << "\n";
//}

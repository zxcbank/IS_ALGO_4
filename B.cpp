////
//// Created by Святослав on 12.11.2023.
////
//#include <iostream>
//#include <vector>
//#include <fstream>
//using namespace std;
//
//void shiftUp(int i, vector<int>& heap);
//void shiftDown(vector <vector <int> >& heaps, int i, int k);
//
//void shiftUp(int i, vector<int>& heap)
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
//void shiftDown(vector <vector <int> >& heaps, int i, int k)
//{
//  int minIndex = i;
//
//  int l = 2 * i + 1;
//  if (l < heaps[k].size() && heaps[k][l] < heaps[k][minIndex]) {
//    minIndex = l;
//  }
//  int r = 2 * i + 2;
//  if (r < heaps[k].size() && heaps[k][r] < heaps[k][minIndex]) {
//    minIndex = r;
//  }
//  if (i != minIndex) {
//    swap(heaps[k][i], heaps[k][minIndex]);
//    shiftDown(heaps, minIndex, k);
//  }
//}
//
//
//void insert(vector <vector <int> >& heaps, int k, int x)
//{
//  heaps[k].push_back(x);
//  shiftUp(heaps[k].size() - 1, heaps[k]);
//}
//
//void extract_min(vector <vector <int>>& heaps , int k){
//  if (heaps[k].size() == 0){
//    cout << "*\n";
//    return;
//  }
//  else{
//    int ans = heaps[k][0];
//    swap(heaps[k][0], heaps[k][heaps[k].size()-1]);
//    heaps[k].pop_back();
//    shiftDown(heaps, 0, k);
//    cout << ans << "\n";
//  }
//}
//
//void decrease_key(vector <vector <int>>& heaps , int k, int x, int y){
//      int index = -1;
//      for (int i = 0; i < heaps[k].size(); i++){
//        if (heaps[k][i] == x){
//          index = i;
//          heaps[k][i] = y;
//          break;
//        }
//      }
//      if (index >= 0)
//        shiftUp(index, heaps[k]);
////    int old = heaps[k][x];
////    heaps[k][x] = y;
////    if (y < old){
////      shiftUp(x, heaps[k]);
////    } else {
////      shiftDown(heaps, y, k);
////    }
//}
//
//void merge(vector <vector <int>>& heaps , int k, int m){
//  vector <int> heap;
//  heaps.push_back(heap);
//  int k_length = heaps[k].size(), m_length = heaps[m].size();
//  int i = 0, j = 0;
//
//  while (i < k_length){
//    insert(heaps, heaps.size()-1, heaps[k][i]);
//    i++;
//  }
//
//  while (j < m_length){
//    insert(heaps, heaps.size()-1, heaps[m][j]);
//    j++;
//  }
//
////  for (int k = heaps[heaps.size()-1].size()/2; k >= 0; k--){
////    shiftDown(heaps, k, heaps.size()-1);
////  }
//}
//
//int main(){
//  vector <vector <int>> heaps(0);
//  std::string comand;
//  cin.tie(0);
////  freopen("mama.txt", "r", stdin);
//
//  while(cin >> comand){
//    if (comand == "create"){
//      vector <int> heap;
//      heaps.push_back(heap);
//    }
//    else if (comand == "extract-min") {
//      int k;
//      cin >> k;
//      extract_min(heaps, k);
//    } else if (comand == "insert") {
//      int k, x;
//      cin >> k >> x;
//      insert(heaps, k, x);
//    } else if (comand == "print") {
//      for (int i = 0; i < heaps.size(); i++){
//        cout << "heap" << i << " : ";
//        for (int j = 0; j < heaps[i].size(); j++){
//          cout << heaps[i][j] << " ";
//        }
//        cout << "\n";
//      }
//    }
//    else if (comand == "decrease-key"){
//      int x, y, k;
//      cin >> k >> x >> y;
//      decrease_key(heaps, k, x, y);
//    }
//    else if (comand == "merge"){
//      int k, m;
//      cin >> k >> m;
//      merge(heaps, k, m);
//    }
//  }
//  return 0;
//}
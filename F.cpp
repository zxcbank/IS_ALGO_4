//
// Created by Святослав on 20.11.2023.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
  int val;
  int num;
  int pow = 1;
  node(int val, int num, int pow) : val(val), num(num), pow(pow) {};
};

void shiftUp(int i, vector<node>& heap) //(2)
{
  while (i > 0 && heap[(i - 1) / 2].val > heap[i].val) {

    // Swap parent and current node
    swap(heap[(i - 1) / 2], heap[i]);

    // Update i to parent of i
    i = (i - 1) / 2;
  }
}

void insert(vector<node>& heap, int val, int num, int pow) //(2)
{
  heap.push_back(node(val, num, pow));
  shiftUp(heap.size() - 1, heap);
}

void shiftDown(vector<node>& heap, int i) //(2)
{
  while (2 * i + 1 < heap.size()){
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int j = left;
    if (right < heap.size() && heap[right].val < heap[left].val)
      j = right;
    if (heap[i].val <= heap[j].val)
      break;
    swap(heap[i], heap[j]);
    i = j;
  }
}

int main() {
  int n;
  cin >> n;
  cin.tie(0);
  ios::sync_with_stdio(0);

  int len = 15 * n + 1;
  int* sieve = new int[len];
  vector<int> primes;
  sieve[0] = 0;
  sieve[1] = 1;
  for (int i = 2; i < len; i++) {
    if (sieve[i] != -1) {
      sieve[i] = i;
      primes.push_back(i);
    }
    for (int j = i + i; j < len; j += i) {
      sieve[j] = -1;
    }
  }

  vector<node> heap;
  int cnt = 0;
  int prime_index = 0;
  int ans = 0;
  while (cnt < n) {
    if (!heap.empty() && primes[prime_index] < (heap[0].val * heap[0].val)) {
      insert(heap, primes[prime_index], primes[prime_index], 1);
      ans++;
      prime_index++;
    } else if (!heap.empty()) {
      ans += heap[0].pow * 2;
      heap[0].val = heap[0].val * heap[0].val;
      heap[0].pow *= 2;
      shiftDown(heap, 0);
    } else {
      insert(heap, primes[prime_index], primes[prime_index], 1);
      prime_index++;
      ans++;
    }
    cnt++;
  }
  sort(heap.begin(), heap.end(), [](node a, node b) { return a.num < b.num; });

  for (int j = 0; j < heap.size(); j++) {

  }
  cout << ans << "\n";
  for (int j = 0; j < heap.size(); j++) {
//    cout << heap[j].val << " " << heap[j].num << " " << heap[j].pow << "\n";
    while (heap[j].pow > 0) {
      for (int k = 0; k < heap[j].pow; k++)
        cout << heap[j].num << " ";
      heap[j].pow /= 2;
    }
  }
}


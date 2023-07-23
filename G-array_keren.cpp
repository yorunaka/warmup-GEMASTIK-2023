#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
ll tc;     \
cin >> tc; \
while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

bool isSquare(int x) {
    int root = sqrt(x);
    return root * root == x;
}

bool isCoolArray(vector<int>& subseq) {
    unordered_set<int> nums;

    for (int i = 0; i < subseq.size(); i++) {
        for (int j = i + 1; j < subseq.size(); j++) {
            int prod = subseq[i] * subseq[j];
            if (!isSquare(prod)) {
                return false;
            }
            nums.insert(subseq[i]);
            nums.insert(subseq[j]);
        }
    }

    return nums.size() > 1;
}

int findSmallestK(vector<int>& A) {
    int N = A.size();
    for (int K = 2; K <= N; K++) {
        for (int i = 0; i <= N - K; i++) {
            vector<int> subseq(A.begin() + i, A.begin() + i + K);
            if (isCoolArray(subseq)) {
                return K;
            }
        }
    }

    return -1;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int smallestK = findSmallestK(A);
    cout << smallestK << endl;

    return 0;
}
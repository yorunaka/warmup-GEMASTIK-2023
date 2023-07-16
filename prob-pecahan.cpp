#include <bits/stdc++.h>
using namespace std;

string compareFractions(int a, int b, int c, int d) {
    int numerator1 = a * d;
    int numerator2 = c * b;
    
    if (numerator1 == numerator2)
        return "sama";
    else if (numerator1 > numerator2)
        return "lebih besar";
    else
        return "lebih kecil";
}

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    string result = compareFractions(a, b, c, d);
    cout << result;

    return 0;
}

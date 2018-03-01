#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m, i, j;
    int s[101], q[101];

    cin >> n;

    for(i = 0; i <= n; i++){
        cin >> s[i];
    }
    cin >> m;

    for(i = 0; i <= m; i++){
        cin >> q[i];
    }

    for(i = 0, j = 0; i <= n && j <= m; i++, j++){
            if(s[i] != q[j])
            cout << s[i];
    }

    return 0;
}

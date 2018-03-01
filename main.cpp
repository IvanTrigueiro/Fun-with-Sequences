#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, m, i, j;
    int s[100], q[100];

    scanf("%d",&n);
    for(i = 0; i < n; i++)
        scanf("%d",&s[i]);

    scanf("%d",&m);
    for(i = 0; i < m; i++)
        scanf("%d",&q[i]);

    for(i = 0, j = 0; i < n && j < m;)
    {
        if(s[i] - q[j] < 0)
        {
        printf("%d ", s[i]);
        i++;
        }
        else if(s[i] == q[j])
            i++;
        else
            j++;
    }
    while(i<n)
    printf("%d ",s[i++]);

    return 0;
}

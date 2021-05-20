#include<stdio.h>
#include<stdlib.h>

void solve()
{
    int n;
    //input n : string size
    scanf("%d", &n);
    //input x : string of length n
    char x[51];
    scanf("%s", x);

    //count variable to store number of similar stones adjacent to each other
    int count = 0;

    //this for loop finds total no. of stones to be removed
    //so that no adjacent stone is similar
    for (int i = 0; i < n - 1; i++)
        if (x[i] == x[i + 1])
            count++;

    //print the no. of stones to be removed.
    printf("%d\n", count);
}
int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
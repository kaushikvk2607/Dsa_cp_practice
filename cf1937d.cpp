#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> timings(n);
        for (int i = 0; i < n; i++)
        {
            int position = i;
            int time = 0;
            while (position >= 0 && position < n)
            {
                time++;
                int prev = position;
                if (s[position] == '<')
                {
                    position--;
                }
                else
                {
                    position++;
                }
                s[prev] = (s[prev] == '<') ? '>' : '<';
            }
            timings[i] = time;
        }
        for(int i=0;i<n;i++){
            cout<<timings[i]<< " ";
        }
        cout<<endl;
    }
    return 0;
}

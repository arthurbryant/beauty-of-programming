#include <iostream>

using namespace std;

bool overlap(int b1, int e1, int b2, int e2)
{
    if(e1 <= b2 || e2 <= b1)
        return false;
    else
        return true;
}

int assignInterview(int a1[], int a2[], int n)
{
    int maxColors = 0;
    int color[n];
    bool isForbidden[n];
    int i, j, k;
    for(i = 0; i < n; ++i)
    {
        for(j = 0; j < maxColors; ++j)
            isForbidden[j] = false;
        for(k = 0; k < i; ++k)
        {
            if(overlap(a1[i], a2[i], a1[k], a2[k]))
                isForbidden[color[k]] = true;
        }
        for(j = 0; j < maxColors; ++j)
            if(!isForbidden[j])
                break;
        if(j < maxColors)
        {
            color[i] = j;
            cout << "color[i]=" << color[i] << endl; 
        }
        else
        {
            color[i] = maxColors++;
            cout << "color[i]=" << color[i] << endl; 
        }
    }
    return maxColors;
}


int main(int argc, char * argv[])
{
    int a1[] = {1, 2, 3, 3};
    int a2[] = {5, 3, 4, 6};
    int len = sizeof(a1) / sizeof(int);
    int result;
    cout << "len=" << len << endl;
    result = assignInterview(a1, a2, len);
    cout << "result=" << result << endl;
    
    return 0;
}

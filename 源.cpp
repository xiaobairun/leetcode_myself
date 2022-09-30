#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    clock_t t1;
    

    void setZeroes(vector<vector<int>>& matrix)
    {
        vector<vector<int>> cm(matrix);
        t1 = clock();
        for (int i = 0; i < cm.size(); i++)
        {
            for (int j = 0; j < cm[0].size(); j++)
            {
                if (cm[i][j] == 0)
                {
                    for (int k = 0; k < cm.size(); k++)
                    {
                        matrix[k][j] = 0;
                    }
                    for (int z = 0; z < cm[0].size(); z++)
                    {
                        matrix[i][z] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                cout << matrix[i][j];
            }
            cout << endl;
        }

        t1 = clock() - t1;
        cout << t1 << endl;
    }
};

int main()
{
    Solution s1;
    vector<vector<int>> matrix = { {0,1,2,0},{3,4,5,2},{1,3,1,5} };

    s1.setZeroes(matrix);
}


#include<bits/stdc++.h>
using namespace std;
#define arrFunctD(i,n) for(int i=0;i<n;i++)
#define arrFunctT(i,n) for(int i=1;i <=n;i++)




char mainArr[ 10 ][ 10 ];
/**
 * 
 * @param vX
 * @param vB
 * @param vC
 * @return 
 */
int checkIfExist(int vX, int vB, char vC) {
    int i;

    arrFunctD(i, 4) {
        if (mainArr[vX][i] == vC || mainArr[i][vB] == vC)
            return 1;
    }
    if (vX / 2 == 0 && vB / 2 == 0) {
        if (mainArr[0][0] == vC || mainArr[0][1] == vC || mainArr[1][0] == vC || mainArr[1][1] == vC)
            return 1;
    } else if (vX / 2 == 0 && vB / 2) {
        if (mainArr[0][2] == vC || mainArr[0][3] == vC || mainArr[ 1 ][ 2 ] == vC || mainArr[1][3] == vC)
            return 1;
    } else if (vX / 2 && vB / 2 == 0) {
        if (mainArr[2][0] == vC || mainArr[2][1] == vC || mainArr[3][0] == vC || mainArr[3][1] == vC)
            return 1;
    } else if (vX / 2 && vB / 2) {
        if (mainArr[2][2] == vC || mainArr[2][3] == vC || mainArr[3][2] == vC || mainArr[3][3] == vC)
            return 1;
    }
    return 0;
}


/**
 * 
 * @param vX
 * @param vY
 */
void findXY(int vX, int vY) {
    int i, j;
    if (vX == 4) {
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++)
                cout<<mainArr[i][j]<<"\n";
        }
        return;
    }
    if (mainArr[vX][vY] != ' * ') {
        if (vY == 3)
            findXY(vX + 1, 0);
        else
            findXY(vX, vY + 1);
    } else {
        for (i = 1; i <= 4; i++) {
            if (checkIfExist(vX, vY, i + ' 0 ') == 0) {
                mainArr[vX][vY] = i + ' 0 ';
                if (vY == 3)
                    findXY(vX + 1, 0);
                else
                    findXY(vX, vY + 1);
                mainArr[vX][vY] = ' * ';
            }
        }

    }
}


/**
 * 
 * @return 
 */
int main() {
    int start, cnt = 0;
    cin >> start;
    while (start--) {
        arrFunctD(i, 4)
        scanf(" %s ", &mainArr [i]);
        cout << " Case # " << ++cnt << " : " << endl;
        findXY(0, 0);
    }
}

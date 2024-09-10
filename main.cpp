/*#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    map<int, int>normal;
    normal[0] = 0;
    normal[1] = 31;
    normal[2] = normal[1] + 28;
    normal[3] = normal[2] + 31;
    normal[4] = normal[3] + 30;
    normal[5] = normal[4] + 31;
    normal[6] = normal[5] + 30;
    normal[7] = normal[6] + 31;
    normal[8] = normal[7] + 31;
    normal[9] = normal[8] + 30;
    normal[10] = normal[9] + 31;
    normal[11] = normal[10] + 30;
    normal[12] = normal[11] + 31;
    while (cin >> a >> b >> c >> d >> e >> f)
    {
        vector<int>v;
        int lday = 0, day;
        if ((a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) && b > 2)
        {
            lday = a / 4 - a/100 + a/400+1;
        }
        else {
            lday = a/4 - a/100 + a/400;
        }
        day = lday + a * 365 + c + normal[b-1];
        v.push_back(day);
        lday = 0;
        day = 0;
        if ((d % 400 == 0 || (d % 4 == 0 && d % 100 != 0)) && e > 2)
        {
            lday = d / 4 - d/100 + d/400+1;
        }
        else {
            lday = d/4 - d/100 + d/400;
        }
        day = lday + (d * 365) + f + normal[e-1];
        v.push_back(day);
        cout << abs(v[1] - v[0]) << endl;
    }
}*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int y1, m1, d1;
    int y2, m2, d2;
    int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    while (cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2) {
        int temp = d1;
        int temp1 = d2;
        int ld1, ld2;
        if (m1 > 2) {
            ld1 = (y1 / 4 - y1 / 100 + y1 / 400);
        }
        else {
            ld1 = ((y1 - 1) / 4 - (y1 - 1) / 100 + (y1 - 1) / 400);
        }
        if (m2 > 2) {
            ld2 = (y2 / 4 - y2 / 100 + y2 / 400);
        }
        else {
            ld2 = ((y2 - 1) / 4 - (y2 - 1) / 100 + (y2 - 1) / 400);
        }
        d1 += y1 * 365 + ld1;
        for (int i = 1; i < m1; i++) {
            d1 += month[i];
        }
        d2 += y2 * 365 + ld2;
        for (int i = 1; i < m2; i++) {
            d2 += month[i];
        }
        cout << abs(d1 - d2) << endl;
    }
    return 0;
}

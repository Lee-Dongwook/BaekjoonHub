#include <bits/stdc++.h>


using namespace std;

int main()
{
    double x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    constexpr double pi = acos(-1);

    double d = sqrt( (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));

    double res = 0;
    if(r1+r2<=d) ///영역이 없다.
        res = 0;
    else if(abs(r1-r2)>=d) ///큰원에 작은원이 포함된 경우
    {
        res = pi * min(r1,r2) * min(r1,r2); ///작은 원의 넓이
    }
    else{
        double theta1 = acos( (r1*r1 + d * d - r2 * r2)/(2*r1*d) );
        double theta2 = acos( (r2*r2 + d*d - r1*r1)/(2*r2*d));

        double s1 = (r1 * r1 * theta1) - (r1 * r1 * sin(2*theta1)/2); ///부채꼴 넓이에서 삼각형 넓이를 빼자.
        double s2 = (r2 * r2 * theta2) - (r2 * r2 * sin(2*theta2)/2);
        res = s1 + s2;

    }

    printf("%.3f",res);


    return 0;
}
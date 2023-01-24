
#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

 
 

int main(void)

{

        string N;

        cin >> N;

 

        long long sum = 0;

        bool zero = false;

        for (int i = 0; i < N.size(); i++)

        {

                 sum += (N[i] - '0');

                 if (!(N[i]-'0'))

                         zero = true;

        }

 

        //합이 3의 배수가 아니거나 0이 없다면

        if (sum % 3 || !zero)

                 cout << -1 << "\n";

        else

        {

                 sort(N.begin(), N.end(), greater<>());

                 cout << N << "\n";

        }

        return 0;

}
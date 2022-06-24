#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){

    int N, B;

    cin >> N >> B; //몇 명? 얼마?

    vector <long long> P(N);
    vector <long long> S(N);
    vector <long long> sum(N);
    int a = 0;
    

    for (int i = 0; i < N; i++) {
        cin >> P[i] >> S[i];
    }

    //처음부터 끝까지 1/2씩 쿠폰 적용
    for (int i = 0; i < N; i++){
        for (int z = 0; z < N; z++) {
            if (z == i) {
                sum[z] = P[z]/2 + S[z];
            }
            else {
                sum[z] = P[z] + S[z];
            }
            
        }
        sort(sum.begin(), sum.end());
        long long sum2 = 0;
        int cnt = 0;
        for (int j = 0; j < N; j++){
            sum2 += sum[j];
            if (sum2 > B){
                break;
            }
            cnt++;
        }
        a = max(a, cnt);
    }
    cout << a << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int n = schedules.size();
    int answer = n;
    
    for(int i = 0; i < n; i++) {
        bool isCommuteOnTime = true;
        int start_hour = schedules[i] / 100;
        int start_minute = schedules[i] % 100;
        
        // 출근 희망 시각 + 10분 계산
        int end_hour = start_hour + (start_minute + 10 >= 60 ? 1 : 0);
        int end_minute = (start_minute + 10) % 60;
        
        int curday = startday - 1;
        
        for(int j = 0; j < 7; j++) {
            // 주말은 건너뜀
            if ((curday + j) % 7 == 5 || (curday + j) % 7 == 6) continue; // 금요일, 토요일 제외
            
            int commute_hour = timelogs[i][j] / 100;
            int commute_minute = timelogs[i][j] % 100;
            
            // 출근 시간이 지각인지 확인
            if (end_hour < commute_hour || (end_hour == commute_hour && end_minute < commute_minute)) {
                isCommuteOnTime = false;
                break;
            }
        }
        
        if (!isCommuteOnTime) answer--;
    }
    
    return answer;
}

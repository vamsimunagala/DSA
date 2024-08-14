#include <bits/stdc++.h>

using namespace std;

class WorkSchedule {
public:
    static void findSchedulesHelper(int workHours, int dayHours, const string& pattern, int index, int sum, string& current, vector<string>& schedules) {
        if (index == pattern.length()) {
            if (sum == workHours) {
                schedules.push_back(current);
            }
            return;
        }

        if (pattern[index] == '?') {
            for (int i = 0; i <= dayHours; i++) {
                current[index] = '0' + i;
                findSchedulesHelper(workHours, dayHours, pattern, index + 1, sum + i, current, schedules);
            }
            current[index] = '?'; 
        } else {
            findSchedulesHelper(workHours, dayHours, pattern, index + 1, sum + (pattern[index] - '0'), current, schedules);
        }
    }

    static vector<string> findSchedules(int workHours, int dayHours, const string& pattern) {
        vector<string> schedules;
        string current = pattern;
        findSchedulesHelper(workHours, dayHours, pattern, 0, 0, current, schedules);
        sort(schedules.begin(), schedules.end()); 
        return schedules;
    }
};

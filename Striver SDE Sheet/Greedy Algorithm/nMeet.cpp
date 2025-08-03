#include<bits/stdc++.h>
using namespace std;

struct Meet{
    int startTime;
    int endTime;
    int pos;
 };

 class FinalSoln{
    public:
        vector<int> maxMeeting(vector<int>& start, vector<int>& end)
        {
            int n = start.size();
            vector<Meet> meeting;

            for (int i =0; i<n; i++) // Saari meeting push krdi
            {
                meeting.push_back({start[i], end[i], i+1});
            }

            sort(meeting.begin(), meeting.end(), [](const Meet &a, const Meet &b){
                if(a.endTime != b.endTime){
                    return a.endTime < b.endTime; // dusri value badi rahegi pehle wali se !!!
                }

                return a.pos < b.pos;
            });

            vector<int>result;
            int prevEndTime = meeting[0].endTime;
            result.push_back(meeting[0].pos);

            for(int i = 0; i<n; i++)
            {
                if(meeting[i].startTime > prevEndTime)
                {
                    prevEndTime = meeting[i].endTime;
                    result.push_back(meeting[i].pos);
                }
            }
            return result;
        }
 };

 int main() {
    FinalSoln s;
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 5, 7, 9, 9};
    
    auto result = s.maxMeeting(start, end);
    
    cout << "Final meetings: ";
    for (int meeting : result) {
        cout << meeting << " ";
    }
    cout << endl;
    
    return 0;
}
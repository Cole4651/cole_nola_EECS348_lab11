#include <vector>
#include <iostream>
using namespace std;


bool fail_lecture(const vector<int>& attendance_records) {
    
    int absent_count = 0;
    for (int i =1; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i] == 0;
    }
    return absent_count >= 3;
}

int main() {
    vector<int> attendance_records = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    bool failed = fail_lecture(attendance_records);
    cout << (failed ? "Failed" : "Passed") << endl;
    return 0;
}

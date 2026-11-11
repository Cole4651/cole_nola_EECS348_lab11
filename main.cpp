#include <vector>
#include <iostream>


//changed const vector<int>& attendance_records to const std::vector<int>& attendance_records in parameter
bool fail_lecture(const std::vector<int>& attendance_records) { 
    
    int absent_count = 0;
    for (int i =1; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i];
    }
    return absent_count >= 3;
}

int main() {
    std::vector<int> attendance_records = {1, 0, 1, 0, 0, 1};
    bool failed = fail_lecture(attendance_records);
    std::cout << (failed ? "Failed" : "Passed") << std::endl;
    return 0;
}

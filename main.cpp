bool fail_leacture(const vector<int>& attendance_records) {
    int absent_count = 0;
    for (int i =1; i < attendance_records.size(); ++i) {
        absent_count += attendance_records[i];
    }
    return absent_count >= 3;
}
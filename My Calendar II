class MyCalendarTwo {
public:
    map<int, int> eventCount;

    MyCalendarTwo() {}

    bool book(int start, int end) {
        eventCount[start]++;
        eventCount[end]--;

        int ongoingEvents = 0;
        for (auto &[time, change] : eventCount) {
            ongoingEvents += change;
            if (ongoingEvents >= 3) {
                eventCount[start]--;
                eventCount[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Usage:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool result = obj->book(start, end);
 */

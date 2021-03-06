
#include "stdafx.h"


struct meetingTime
{
	meetingTime(
		bool aIsStart,
		float aTime,
		int aId,
		int* aRoom)
	{
		mIsStart = aIsStart;
		mTime = aTime;
		mId = aId;
		mRoom = aRoom;
	}

	bool mIsStart;
	float mTime;
	int mId;
	mutable int* mRoom;

	const bool operator < (const meetingTime& aOther) const
	{
		if (mTime != aOther.mTime)
		{
			return mTime < aOther.mTime;
		}

		if (mIsStart != aOther.mIsStart)
		{
			return mIsStart < aOther.mIsStart;
		}

		return mId < aOther.mId;
	}
};

void addMeeting(set<meetingTime>& aMeetingTimes, float aStart, float aEnd)
{
	static int id = 0;
	int* room = new int(-1);
	aMeetingTimes.insert(std::move(meetingTime(true, aStart, ++id, room)));
	aMeetingTimes.insert(std::move(meetingTime(false, aEnd, id, room)));
}

void initMeeting(set<meetingTime>& aMeetingTimes)
{
	addMeeting(aMeetingTimes, 900, 1000);
	addMeeting(aMeetingTimes, 930, 1400);
	addMeeting(aMeetingTimes, 1100, 1300);
	addMeeting(aMeetingTimes, 1100, 1500);
	addMeeting(aMeetingTimes, 1200, 1500);
	addMeeting(aMeetingTimes, 1330, 1500);
}

void main()
{
	set<meetingTime> meetingTimes;
	queue<int> avilablRooms;
	int maxAllocateRooms = 0;
	float maxTime = 0;

	initMeeting(meetingTimes);

	for (auto& m : meetingTimes)
	{
		if (m.mIsStart)
		{
			if (avilablRooms.empty())
			{
				*(m.mRoom) = ++maxAllocateRooms;
				maxTime = m.mTime;
			}
			else
			{
				*(m.mRoom) = avilablRooms.front();
				avilablRooms.pop();
			}
		}
		else
		{
			avilablRooms.push(*m.mRoom);
		}
	}

	for (auto m : meetingTimes)
	{
		if (m.mIsStart)
		{
			cout << "meeting start: " << m.mTime << " room: " << *m.mRoom << endl;
			delete m.mRoom;

		}
	}
	cout << "max=" << maxAllocateRooms << " time " << maxTime << endl;
}







#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stdio.h>



class LIDAR {
	private:
		int angles[90];
		int sensorID;
		int maxRange;
		int minRange;
		int measurements[90];
		bool collisionWarning[90];
	public:
		LIDAR();
		int getDistance(int angle);
		void writeDistance(int distance, int angle);
		void warningSweep();
		int getClosest();
		void setMaxRange(int range);
		void setMinRange(int range);
	
	
};


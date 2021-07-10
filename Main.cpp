#define GetCurrentDir _getcwd
#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
#include <Windows.h>
#include <dirent.h>
#include <sys/types.h>
#include <vector>
#include <stdio.h>
#include <direct.h>
// Adding libraries | May be extended
using namespace std;
using namespace cv;

int value;

int Direct()
{
	char buff[FILENAME_MAX];
	GetCurrentDir(buff, FILENAME_MAX);
	char* current_working_dir(buff);
	cout << current_working_dir << "\n"; // Findind current working DIR

	struct dirent* entry;
	DIR* dir = opendir(current_working_dir); // Actual directory
	vector<string> dirlist; // An array which can increase in size

	if (dir == NULL) {
		cout << "!";
		return 0;
	}
	while ((entry = readdir(dir)) != NULL)
	{
		cout << entry->d_name << endl;
		dirlist.push_back(entry->d_name);
	}

	for (int i = 0; i < value; i++)
	{
		string NameList = dirlist[i];
		
		if (NameList.substr(NameList.find_last_of(".") + 1) == "jpg")
		{
			cout << "Well done.";
			Mat image = imread(NameList);
			imshow("Original Image", image);
			int up_width = 600;
			int up_height = 400;
			
		}
		else {
			cout << "!";
		}
	}
	cin >> value;
	closedir(dir);
	return 0;
}

void ChangeRes()
{
	
}
int main(int argc, char * argv[])
{
	cin >> value;
	Direct();


	
}


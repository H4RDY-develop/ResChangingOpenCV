#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
#include <dirent.h>
#include <filesystem>
#include <sys/types.h>

// Adding libraries | May be extended
using namespace std;
using namespace cv;


void Start(const char *path)
{
	struct dirent* entry;
	DIR* dir = opendir(path);

	if (dir == NULL) {
		return;
	}
	while ((entry = readdir(dir)) != NULL)
	{
		cout << entry->d_name << endl;
	}
	closedir(dir);
}



int main()
{

}
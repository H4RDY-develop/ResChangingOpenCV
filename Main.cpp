#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
#include <dirent.h>
#include <sys/types.h>

// Adding libraries | May be extended
using namespace std;
using namespace cv;


void Direct(const char *path)
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

void Check()
{
	string fn = "filename.conf";
	if (fn.substr(fn.find_last_of(".") + 1) == "conf")
	{
		cout << "yes";
	}
	else {
		cout << "no";
	}
}



int main()
{
	Direct("C:/Users/windo/Desktop/xd");
	Check();
}
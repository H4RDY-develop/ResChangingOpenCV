#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
#include <dirent.h>
#include <sys/types.h>
#include <vector>

// Adding libraries | May be extended
using namespace std;
using namespace cv;

class Resize
{
public:
	int value;
	string path;
	
	void Direct(const char* path)
	{
		struct dirent* entry;
		DIR* dir = opendir(path);
		vector<string> dirlist;

		if (dir == NULL) {
			return;
		}
		while ((entry = readdir(dir)) != NULL)
		{
			cout << entry->d_name << endl;
			dirlist.push_back(entry->d_name);
		}

		string names = dirlist[0, value];
		if (names.substr(names.find_last_of(".") + 1) == "txt")
		{
			cout << "Yes";
		}
		closedir(dir);
	}

};


void Check()
{
	
}



int main()
{
	Resize Def;
	cout << "Количество изображений: ";
	cin >> Def.value;
	cout << "Путь к папке с изображениями: ";
	getline(cin, Def.path);
	const char* path = Def.path.c_str();
	Def.Direct(Def.path);
	
}
#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main() {
	
	if (fs::exists("c://Dev/Cpp200") == true) {
		cout << "폴더가 존재합니다." << endl;
	}
	else
		cout << "폴더가 없습니다." << endl;

	return 0;
}
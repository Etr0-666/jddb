#include"file.h"
void file::createFolder(string folder_name){
    _mkdir(folder_name.c_str());
    showFiles();
}
void file::deleteFolder(string folder_name){
    _rmdir(folder_name.c_str());
}
void file::renameFolder(string before_name, string after_name){
    rename(before_name.c_str(), after_name.c_str());
}
void file::showFiles(){
    char path[_MAX_DIR];
    _getcwd(path, _MAX_DIR);
	strcat(path, "\\*");
    long handle;                                                //用于查找的句柄
	vector<string> files;
    struct _finddata_t fileinfo;                          //文件信息的结构体
	handle = _findfirst(path, &fileinfo);         //第一次查找
	if (-1 == handle)
		cout << "folder not exist" << endl;
	files.push_back(fileinfo.name);                        //打印出找到的文件的文件名
	while (!_findnext(handle, &fileinfo))               //循环查找其他符合的文件，直到找不到其他的为止
	{
		files.push_back(fileinfo.name);
	}
	_findclose(handle);                                      //别忘了关闭句柄
	if (files.size() <= 2)
		cout << "file not exist" << endl;
	else{
		cout << "exist file:" << endl;
		for (int i = 2; i < files.size(); i++)
			cout << files[i] << endl;
	}
}
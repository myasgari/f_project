#include <iostream>

using namespace std;
enum choise { CREATE = 1, ERASE, ERASEALL, LIST, EXPORT };
void create(vector<shape *> &);
void list(vector<shape *>&);
void erase(vector<shape *>&)
int enterChois();
void createFile(vector<shape *>&,fstream &);
int main()
{

	return 0;
}

// SyncGitRevision.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Revision.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "SLG_BRANCH_NAME: " << SLG_BRANCH_NAME << endl;
	cout << "SLG_COMMIT_HASH: " << SLG_COMMIT_HASH << endl;
	cout << "SLG_COMMIT_DATE: " << SLG_COMMIT_DATE << endl;

    return 0;
}


#include<iostream>
#include<mysql.h>
using namespace std;

int main()
{
	MYSQL *connection,mysqlc;
	MYSQL_RES res;
	MYSQL_ROW mrow;

	mysql_init(&mysqlc);
	connection=mysql_real_connect(&mysqlc,"localhost","sanku","testngram","ngram",0,0,0);
	if(connection == NULL)
	{
		cout << "Problem with connection:" << mysql_error(&mysqlc)<<endl;
	}

	else



	return 0;
}

#include <QCoreApplication>
#include <string>
#include <iostream>
#include <Dictionary.h>
#include <Queue.h>
using namespace std;

class keywords
{
public:
const string SHOW = "SHOW";
const string CRT = "CREATE";
const string DBS = "DATABASE";
const string DBSS = "DATABASES";
const string TBLS = "TABLES";
const string TBL = "TABLE";
const string USE = "USE";
const string SURC = "SOURCE";
const string DRP = "DROP";
const string _ = " ";
const string KEY = "KEY";
const string PRIM = "PRIMARY";
const string FRGN = "FOREIGN";
const string RFNC = "REFERENCE";
const string DCRB = "DESCRIBE";
const string INS = "INSERT";
const string INTO = "INTO";
const string VALS = "VALUES";
const string UPD = "UPDATE";
const string SET = "SET";
const string WHR = "WHERE";
const string SEL = "SELECT";
const string FROM = "FROM";
const string STR = "*";
const string DNCT = "DISTINCT";
const string GRPB = "GROUP BY";
const string CNT = "COUNT";
const string MAX = "MAX";
const string MIN = "MIN";
const string SUM = "SUM";
const string AVG = "AVG";
const string HVNG = "HAVING";
const string RDRB = "ORDER BY";
const string BTWN = "BETWEEN";
const string LIKE = "LIKE";
const string IN = "IN";
const string JOIN = "JOIN";
const string VIEW = "VIEW";


};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    dictionary <string> dict;
    queue <string> proc;
    keywords key;
    string expression = key.SEL + key._ + key.DNCT + key._ + key.USE + key._ + key.FROM + key._ + key.TBL;
    dict.add(key.SEL, expression);
    //proc.enqueue(expression);
    expression = key.DCRB + key._ + key.CNT + key._ + key.TBL + key._ + key.SURC + key._ + key.SET;
    dict.add(key.DCRB, expression);
    //proc.enqueue(expression);
    expression = key.IN + key._ + key.MAX + key._ + key.UPD + key._ + key.BTWN + key._ + key.FRGN;
    dict.add(key.IN, expression);
    //proc.enqueue(expression);
    dict.show();
    //proc.headsUp();
    return a.exec();
}

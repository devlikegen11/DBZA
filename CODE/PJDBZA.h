#ifndef DBZA
#define DBZA
#include <mariadb/conncpp.hpp>
#include <string.h>
#include <sstream>

class Input_year
{
protected:
  int year = 0;

public:
  int getYear();
};

class HONEY_DB
{
protected:
  float min = 100.0;
  float max = 0.0;
  char min_city[30];
  char max_city[30];

public:
  void HONEY(std::unique_ptr<sql::Connection> &conn, std::string STR, int year);
};

class Baby_DB
{
protected:
  float min = 100;
  float max = 0;
  char min_city[20];
  char max_city[20];

public:
  void Baby(std::unique_ptr<sql::Connection> &conn, std::string STR, int year);
};

class Move_DB
{
protected:
  float min = 100;
  float max = -5;
  char min_city[20];
  char max_city[20];

public:
  void MOVE(std::unique_ptr<sql::Connection> &conn, std::string STR, int year);
};
void showtime();

#endif

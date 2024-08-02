#include <iostream>
#include <string.h>
#include <sstream>
#include <mariadb/conncpp.hpp>
#include "PJDBZA.h"

int Input_year::getYear()
{
  std::cout << std::endl;
  std::cout << "========================================================" << std::endl;
  std::cout << "검색할 연도를 입력하시오(2013~2022): ";
  std::cin >> year;
  std::cout << std::endl;
  return year;
}

void HONEY_DB::HONEY(std::unique_ptr<sql::Connection> &conn, std::string STR, int year)
{
  try
  {
    std::unique_ptr<sql::Statement> stmnt(conn->createStatement());
    sql::SQLString select = "select * from HONEY";
    sql::ResultSet *HONEY = stmnt->executeQuery(select + " WHERE HONEYNO !=1 ORDER BY H" + STR);
    while (HONEY->next())
    {
      switch (year)
      {
      case 2013:
        if (min > HONEY->getFloat(3))
        {
          min = HONEY->getFloat(3);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(3))
        {
          max = HONEY->getFloat(3);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2014:
        if (min > HONEY->getFloat(4))
        {
          min = HONEY->getFloat(4);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(4))
        {
          max = HONEY->getFloat(4);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2015:
        if (min > HONEY->getFloat(5))
        {
          min = HONEY->getFloat(5);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(5))
        {
          max = HONEY->getFloat(5);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2016:
        if (min > HONEY->getFloat(6))
        {
          min = HONEY->getFloat(6);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(6))
        {
          max = HONEY->getFloat(6);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2017:
        if (min > HONEY->getFloat(7))
        {
          min = HONEY->getFloat(7);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(7))
        {
          max = HONEY->getFloat(7);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2018:
        if (min > HONEY->getFloat(8))
        {
          min = HONEY->getFloat(8);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(8))
        {
          max = HONEY->getFloat(8);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2019:
        if (min > HONEY->getFloat(9))
        {
          min = HONEY->getFloat(9);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(9))
        {
          max = HONEY->getFloat(9);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2020:
        if (min > HONEY->getFloat(10))
        {
          min = HONEY->getFloat(10);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(10))
        {
          max = HONEY->getFloat(10);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2021:
        if (min > HONEY->getFloat(11))
        {
          min = HONEY->getFloat(11);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(11))
        {
          max = HONEY->getFloat(11);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      case 2022:
        if (min > HONEY->getFloat(12))
        {
          min = HONEY->getFloat(12);
          strcpy(min_city, HONEY->getString(2));
        }
        if (max < HONEY->getFloat(12))
        {
          max = HONEY->getFloat(12);
          strcpy(max_city, HONEY->getString(2));
        }
        break;
      }
    }
    std::cout << year << "년의 " << std::endl;
    std::cout << "최저혼인률 : " << min_city << " " << min << "%\t";
    std::cout << "최고혼인률 : " << max_city << " " << max << "%";
  }
  catch (sql::SQLException &e)
  {
    std::cerr << "Error selecting tasks: " << e.what() << std::endl;
  }
}

void Baby_DB::Baby(std::unique_ptr<sql::Connection> &conn, std::string STR, int year)
{
  try
  {
    std::unique_ptr<sql::Statement> stmnt(conn->createStatement());
    sql::SQLString select = "select * from NEWBABY";
    sql::ResultSet *BABY = stmnt->executeQuery(select + " WHERE BABYNO !=1 ORDER BY B" + STR);
    while (BABY->next())
    {
      switch (year)
      {
      case 2013:
        if (min > BABY->getFloat(3) && BABY->getFloat(3) != 0)
        {
          min = BABY->getFloat(3);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(3))
        {
          max = BABY->getFloat(3);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2014:
        if (min > BABY->getFloat(4) && BABY->getFloat(4) != 0)
        {
          min = BABY->getFloat(4);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(4))
        {
          max = BABY->getFloat(4);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2015:
        if (min > BABY->getFloat(5) && BABY->getFloat(5) != 0)
        {
          min = BABY->getFloat(5);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(5))
        {
          max = BABY->getFloat(5);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2016:
        if (min > BABY->getFloat(6) && BABY->getFloat(6) != 0)
        {
          min = BABY->getFloat(6);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(6))
        {
          max = BABY->getFloat(6);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2017:
        if (min > BABY->getFloat(7) && BABY->getFloat(7) != 0)
        {
          min = BABY->getFloat(7);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(7))
        {
          max = BABY->getFloat(7);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2018:
        if (min > BABY->getFloat(8) && BABY->getFloat(8) != 0)
        {
          min = BABY->getFloat(8);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(8))
        {
          max = BABY->getFloat(8);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2019:
        if (min > BABY->getFloat(9) && BABY->getFloat(9) != 0)
        {
          min = BABY->getFloat(9);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(9))
        {
          max = BABY->getFloat(9);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2020:
        if (min > BABY->getFloat(10) && BABY->getFloat(10) != 0)
        {
          min = BABY->getFloat(10);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(10))
        {
          max = BABY->getFloat(10);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2021:
        if (min > BABY->getFloat(11) && BABY->getFloat(11) != 0)
        {
          min = BABY->getFloat(11);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(11))
        {
          max = BABY->getFloat(11);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      case 2022:
        if (min > BABY->getFloat(12) && BABY->getFloat(12) != 0)
        {
          min = BABY->getFloat(12);
          strcpy(min_city, BABY->getString(2));
        }
        if (max < BABY->getFloat(12))
        {
          max = BABY->getFloat(12);
          strcpy(max_city, BABY->getString(2));
        }
        break;
      }
    }
    std::cout << "최저출산율 : " << min_city << " " << min << "%\t";
    std::cout << "최고출산율 : " << max_city << " " << max << "%";
  }
  catch (sql::SQLException &e)
  {
    std::cerr << "Error selecting tasks: " << e.what() << std::endl;
  }
}

void Move_DB::MOVE(std::unique_ptr<sql::Connection> &conn, std::string STR, int year)
{
  try
  {
    std::unique_ptr<sql::Statement> stmnt(conn->createStatement());
    sql::SQLString select = "select * from MOVE";
    sql::ResultSet *MOVE = stmnt->executeQuery(select + " WHERE MOVENO !=1 ORDER BY M" + STR);
    while (MOVE->next())
    {
      switch (year)
      {
      case 2013:
        if (min > MOVE->getFloat(3) && MOVE->getFloat(3) != 0)
        {
          min = MOVE->getFloat(3);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(3))
        {
          max = MOVE->getFloat(3);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2014:
        if (min > MOVE->getFloat(4) && MOVE->getFloat(4) != 0)
        {
          min = MOVE->getFloat(4);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(4))
        {
          max = MOVE->getFloat(4);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2015:
        if (min > MOVE->getFloat(5) && MOVE->getFloat(5) != 0)
        {
          min = MOVE->getFloat(5);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(5))
        {
          max = MOVE->getFloat(5);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2016:
        if (min > MOVE->getFloat(6) && MOVE->getFloat(6) != 0)
        {
          min = MOVE->getFloat(6);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(6))
        {
          max = MOVE->getFloat(6);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2017:
        if (min > MOVE->getFloat(7) && MOVE->getFloat(7) != 0)
        {
          min = MOVE->getFloat(7);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(7))
        {
          max = MOVE->getFloat(7);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2018:
        if (min > MOVE->getFloat(8) && MOVE->getFloat(8) != 0)
        {
          min = MOVE->getFloat(8);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(8))
        {
          max = MOVE->getFloat(8);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2019:
        if (min > MOVE->getFloat(9) && MOVE->getFloat(9) != 0)
        {
          min = MOVE->getFloat(9);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(9))
        {
          max = MOVE->getFloat(9);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2020:
        if (min > MOVE->getFloat(10) && MOVE->getFloat(10) != 0)
        {
          min = MOVE->getFloat(10);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(10))
        {
          max = MOVE->getFloat(10);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2021:
        if (min > MOVE->getFloat(11) && MOVE->getFloat(11) != 0)
        {
          min = MOVE->getFloat(11);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(11))
        {
          max = MOVE->getFloat(11);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      case 2022:
        if (min > MOVE->getFloat(12) && MOVE->getFloat(12) != 0)
        {
          min = MOVE->getFloat(12);
          strcpy(min_city, MOVE->getString(2));
        }
        if (max < MOVE->getFloat(12))
        {
          max = MOVE->getFloat(12);
          strcpy(max_city, MOVE->getString(2));
        }
        break;
      }
    }
    std::cout << "최저인구이동 : " << min_city << " " << min << "%\t";
    std::cout << "최고인구이동 : " << max_city << " " << max << "%" << std::endl;
    std::cout << "========================================================" << std::endl;
  }
  catch (sql::SQLException &e)
  {
    std::cerr << "Error selecting tasks: " << e.what() << std::endl;
  }
}

void showtime()
{
  Move_DB wd;
  HONEY_DB hd;
  Baby_DB bd;
  Input_year cccc;
  int year;
  std::string STR;

  try
  {
    sql::Driver *driver = sql::mariadb::get_driver_instance();
    sql::SQLString url("jdbc:mariadb://10.10.21.115:3306/STATS");
    sql::Properties properties({{"user", "KALA"}, {"password", "1111"}});
    std::unique_ptr<sql::Connection> conn(driver->connect(url, properties));

    year = cccc.getYear();
    if (year < 2013 || year > 2022 || std::cin.fail())
    {
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
      std::cout << "다시 입력해주세요";
    }
    else
    {
      std::stringstream strr;
      strr << year;
      std::string STR = strr.str();

      hd.HONEY(conn, STR, year);
      std::cout << std::endl;
      bd.Baby(conn, STR, year);
      std::cout << std::endl;
      wd.MOVE(conn, STR, year);
    }
  }
  catch (sql::SQLException &e)
  {
    std::cerr << "Error Connecting to MariaDB Platform: " << e.what() << std::endl;
  }
}
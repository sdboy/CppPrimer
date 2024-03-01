#pragma once
#include <string>

class Primer_2_6_1
{

};

typedef struct sales_data
{
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
} Sales_data;


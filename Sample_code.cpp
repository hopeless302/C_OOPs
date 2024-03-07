class Date
{
  // Static member variables
  static Date defaultDate;

public:
  // Constructors
  Date(int aDay = 0, int aMonth = 0, int aYear = 0);

  // Destructor
  ~Date();

  // Interfaces
  void setDay(int aDay);
  int getDay() const;
  void addDay(int x);
  static void setDefaultDate(int aDay, int aMonth, int aYear);

private:
  // Helper Function
  bool leapYear(int x) const;
};

// Implementation of Date Class

// The static member variables must be initialized
Date Date::defaultDate(07, 3, 2005);

// Constructors
Date::Date(int aDay, int aMonth, int aYear)
{
  if (aDay == 0)
  {
    this->day = defaultDate.day;
  }
  else
  {
    setDay(aDay);
  }
  // similarly for other members
}

// Destructor
// We are not required to do any housekeeping chores in destructor
Date::~Date() {}

// Getter and Setter
void Date::setMonth(int a)
{
  if (a > 0 && a <= 12)
  {
    month = a;
  }
}

int Date::getMonth() const
{
  return month;
}

// addYear
void Date::addYear(int x)
{
  year += x;
  if (day == 29 && month == 2 && !leapyear(year))
  {
    day = 1;
    month = 3;
  }
}

// Helper Function
bool Date::leapYear(int x) const
{
  if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
  {
    return true;
  }
  return false;
}

// setDefaultDate
void Date::setDefaultDate(int d, int m, int y)
{
  if (d >= 0 && d <= 31)
  {
    day = d;
  }
  // ...
}

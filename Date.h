

#ifndef RATIONAL_DATE_H
#define RATIONAL_DATE_H


class Date {
private:
    int year;
public:
    Date(int year, int month, int day);

    int getYear() const;

    void setYear(int year);

    int getMonth() const;

    void setMonth(int month);

    int getDay() const;

    void setDay(int day);

private:
    int month;
    int day;

};


#endif //RATIONAL_DATE_H

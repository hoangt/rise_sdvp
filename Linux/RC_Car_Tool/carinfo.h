/*
    Copyright 2012 Benjamin Vedder	benjamin@vedder.se

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef CARINFO_H
#define CARINFO_H

#include <QVector>
#include <QString>
#include "locpoint.h"

class CarInfo
{
public:
    CarInfo(int id = 0, Qt::GlobalColor color = Qt::red);
    int getId();
    void setId(int id, bool changeName);
    QString getName();
    void setName(QString name);
    LocPoint getLocation();
    void setLocation(LocPoint &point);
    Qt::GlobalColor getColor();
    void setColor(Qt::GlobalColor color);

private:
    int mId;
    QString mName;
    LocPoint mLocation;
    Qt::GlobalColor mColor;
};

#endif // CARINFO_H

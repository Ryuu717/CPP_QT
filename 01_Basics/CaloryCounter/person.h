#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT
 public:
     void setWeight(double weight);     //setter

     double weight() const {            //getter
         return m_weight;
     }

 signals:
     void weightChanged();
 
 private:
     double m_weight=0.0;
};

#endif // PERSON_H

#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


/*select * FROM Customer;*/
/*select FirstName FROM Customer;*/
/*select * FROM Customer where country = 'Germany';*/
/*select * FROM Customer where country LIKE '_e%';*/
/*select * FROM Customer where country LIKE '_a%' AND state='AB';*/
/*select * FROM Customer where NOT country LIKE '_a%' AND NOT state='AB';*/
/*select count (*) from Customer where country like '_a%';*/
/*select count (*) as CountryCount from Customer where country like '_a%';*/
/*select *  from Customer where country='Brazil' ORDER by firstname ASC;*/ /*DESC*/
/*select *  from Customer where company isnull;*/
/*select *  from Customer where company NOTnull;*/
/*UPDATE Customer set lastname='Jobs' ,company='Apple' WHERE customerid=1;
select * FROM Customer;*/
/*DELETE  from Customer where firstname='Luis';
select * FROM Customer;*/
/*SELECT MIN(PostalCode) AS Minimum, Max(PostalCode) AS Maximum from Customer;*/

/*select * FROM Employee where City IN ('Calgary', 'Edmonton');*/

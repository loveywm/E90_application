#ifndef UI_SET_2D_TRONE_H
#define UI_SET_2D_TRONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_TRSetOne
{
public:
    QLabel *lblBackground;
    QPushButton *btnOK;
    QPushButton *btnESC;
    QLabel *lblSTime;
    QLabel *lblETime;
    QLabel *lblStatus;
    QLineEdit *txtSTime;
    QLineEdit *txtETime;
    QComboBox *comboStatus;

    void setupUi(QDialog *TRSetOne)
    {
    TRSetOne->setObjectName(QString::fromUtf8("TRSetOne"));
    TRSetOne->resize(QSize(230, 151).expandedTo(TRSetOne->minimumSizeHint()));
    lblBackground = new QLabel(TRSetOne);
    lblBackground->setObjectName(QString::fromUtf8("lblBackground"));
    lblBackground->setGeometry(QRect(0, 0, 230, 151));
    lblBackground->setPixmap(QPixmap(QString::fromUtf8(":/images/res/bg-inputbox.png")));
    lblBackground->setScaledContents(true);
    btnOK = new QPushButton(TRSetOne);
    btnOK->setObjectName(QString::fromUtf8("btnOK"));
    btnOK->setGeometry(QRect(60, 110, 75, 24));
    btnESC = new QPushButton(TRSetOne);
    btnESC->setObjectName(QString::fromUtf8("btnESC"));
    btnESC->setGeometry(QRect(137, 110, 75, 24));
    lblSTime = new QLabel(TRSetOne);
    lblSTime->setObjectName(QString::fromUtf8("lblSTime"));
    lblSTime->setGeometry(QRect(14, 30, 70, 14));
    lblETime = new QLabel(TRSetOne);
    lblETime->setObjectName(QString::fromUtf8("lblETime"));
    lblETime->setGeometry(QRect(14, 53, 70, 16));
    lblStatus = new QLabel(TRSetOne);
    lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
    lblStatus->setGeometry(QRect(14, 80, 70, 14));
    txtSTime = new QLineEdit(TRSetOne);
    txtSTime->setObjectName(QString::fromUtf8("txtSTime"));
    txtSTime->setGeometry(QRect(80, 24, 130, 20));
    txtETime = new QLineEdit(TRSetOne);
    txtETime->setObjectName(QString::fromUtf8("txtETime"));
    txtETime->setGeometry(QRect(80, 50, 130, 20));
    txtETime->setMaxLength(32767);
    comboStatus = new QComboBox(TRSetOne);
    comboStatus->setObjectName(QString::fromUtf8("comboStatus"));
    comboStatus->setGeometry(QRect(80, 75, 130, 22));
    QWidget::setTabOrder(txtSTime, txtETime);
    QWidget::setTabOrder(txtETime, comboStatus);
    QWidget::setTabOrder(comboStatus, btnOK);
    QWidget::setTabOrder(btnOK, btnESC);
    retranslateUi(TRSetOne);

    QMetaObject::connectSlotsByName(TRSetOne);
    } // setupUi

    void retranslateUi(QDialog *TRSetOne)
    {
    TRSetOne->setWindowTitle(QApplication::translate("TRSetOne", "Dialog", 0, QApplication::UnicodeUTF8));
    lblBackground->setText(QApplication::translate("TRSetOne", "", 0, QApplication::UnicodeUTF8));
    btnOK->setText(QApplication::translate("TRSetOne", "OK", 0, QApplication::UnicodeUTF8));
    btnESC->setText(QApplication::translate("TRSetOne", "ESC", 0, QApplication::UnicodeUTF8));
    lblSTime->setText(QApplication::translate("TRSetOne", "STime", 0, QApplication::UnicodeUTF8));
    lblETime->setText(QApplication::translate("TRSetOne", "ETime", 0, QApplication::UnicodeUTF8));
    lblStatus->setText(QApplication::translate("TRSetOne", "Status", 0, QApplication::UnicodeUTF8));
    txtSTime->setInputMask(QApplication::translate("TRSetOne", "", 0, QApplication::UnicodeUTF8));
    txtETime->setInputMask(QApplication::translate("TRSetOne", "", 0, QApplication::UnicodeUTF8));
    txtETime->setText(QApplication::translate("TRSetOne", "", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(TRSetOne);
    } // retranslateUi

};

namespace Ui {
    class TRSetOne: public Ui_TRSetOne {};
} // namespace Ui

#endif // UI_SET_2D_TRONE_H

// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2020 The Learnium developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLLRAWIDGET_H
#define COINCONTROLLRAWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlLraWidget;
}

class CoinControlLraWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlLraWidget(QWidget *parent = nullptr);
    ~CoinControlLraWidget();

private:
    Ui::CoinControlLraWidget *ui;
};

#endif // COINCONTROLLRAWIDGET_H

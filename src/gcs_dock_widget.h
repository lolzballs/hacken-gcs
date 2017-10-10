#pragma once

#include <QDockWidget>

class Window;

class GCSDockWidget : public QDockWidget {
public:
    GCSDockWidget(QString &title, QWidget *parent);

protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;
};


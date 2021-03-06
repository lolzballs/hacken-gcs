#pragma once

#include "./gcs_dock_widget.h"

#include <QList>
#include <QMainWindow>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QMenu>

class Window : public QMainWindow {
    Q_OBJECT

public:
    Window();

    void createDock(QString &title, QWidget *widget, Qt::DockWidgetArea area);
    void createToolbar(QString &title, QActionGroup *actions, Qt::ToolBarArea area);

private:
    QMenu *menuFile;
    QMenu *menuHelp;

    QAction *actAbout;
    QAction *actExit;

    QList<GCSDockWidget*> docks;
    QList<QToolBar*> toolbars;

    void setupActions();
    void setupMenus();

private slots:
    void about();

};

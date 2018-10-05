#include "kubebrowsermainwindow.h"
#include "applicationview.h"
#include "qjsonview.h"

#include <QDockWidget>
#include <QAction>
#include <QComboBox>
#include <QTextEdit>
#include <QMessageBox>

KubeBrowserMainWindow::KubeBrowserMainWindow(QWidget *parent)
    : QMainWindow(parent)
    ,m_viewKubeApp(nullptr)
    ,m_kubeObjectView(nullptr)
{
    _gui();

    setMinimumSize(1000, 600);
    setWindowTitle("QKube - Browse your Kubernetes objects");
}

void KubeBrowserMainWindow::slotAbout()
{

}

void KubeBrowserMainWindow::_gui()
{
    QDockWidget *m_dockWidget = new QDockWidget("Workspace", this);
    m_dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    m_dockWidget->setFeatures(QDockWidget::NoDockWidgetFeatures);

    m_viewKubeApp = new ApplicationView(m_dockWidget);

    m_dockWidget->setWidget(m_viewKubeApp);
    addDockWidget(Qt::LeftDockWidgetArea, m_dockWidget);

    m_kubeObjectView = new QJsonView();

    setCentralWidget(m_kubeObjectView);
}

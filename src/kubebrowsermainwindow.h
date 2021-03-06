/***************************************************************************
 *   Copyright (C) 2018 by peter komar                                     *
 *   udldevel@gmail.com                                                    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef KUBEBROWSERMAINWINDOW_H
#define KUBEBROWSERMAINWINDOW_H

#include <QMainWindow>

class ApplicationView;
class QTextEdit;
class QJsonView;

class KubeBrowserMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit KubeBrowserMainWindow(QWidget *parent = nullptr);

signals:

public slots:
    void slotAbout();

private:
    ApplicationView *m_viewKubeApp;
    QJsonView *m_kubeObjectView;

    void _gui();
};

#endif // KUBEBROWSERMAINWINDOW_H

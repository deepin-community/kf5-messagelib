/*
   SPDX-FileCopyrightText: 2016-2021 Laurent Montel <montel@kde.org>

   SPDX-License-Identifier: LGPL-2.0-or-later
*/

#pragma once

#include <QObject>

class WebHitTestResultTest : public QObject
{
    Q_OBJECT
public:
    explicit WebHitTestResultTest(QObject *parent = nullptr);
    ~WebHitTestResultTest();
private Q_SLOTS:
    void shouldHaveDefaultValues();
    void shouldAssignPosAndUrl();
    void shouldAssignFromQVariant();
    void shouldCopyWebHitTestResult();
};


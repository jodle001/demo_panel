#pragma once

#include <QMainWindow>
#include "rviz_common/panel.hpp"


namespace demo_panel
        {

                class DemoPanel : public rviz_common::Panel // QMainWindow
        {
            Q_OBJECT

            public:
            explicit DemoPanel(QWidget *parent = nullptr);

            void onInitialize() override;

            private:
        };

        } // namespace demo_panel

#include "demo_panel/demo_panel.h"

#include "rviz_common/properties/property_tree_widget.hpp"
#include "rviz_common/interaction/selection_manager.hpp"
#include "rviz_common/visualization_manager.hpp"

#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>

namespace demo_panel
{

    DemoPanel::DemoPanel(QWidget *parent)
            : rviz_common::Panel(parent)
    {
        auto layout = new QVBoxLayout();
        layout->setContentsMargins(0, 0, 0, 0);

        auto text = new QLabel("This is a demo");
        auto lineEdit = new QLineEdit();
        auto radio = new QRadioButton();

        layout->addWidget(text);
        layout->addWidget(lineEdit);
        layout->addWidget(radio);

        setLayout(layout);
    }

    void DemoPanel::onInitialize()
    {
//        tree_widget_->setModel(getDisplayContext()->getSelectionManager()->getPropertyModel());
    }

}  // namespace demo_panel


#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(demo_panel::DemoPanel, rviz_common::Panel)

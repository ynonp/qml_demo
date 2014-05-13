import QtQuick 2.0

Rectangle {
    width: 360
    height: 360
    Text {
        id: t1
        text: "0"
        anchors.centerIn: parent
    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            worker.handleGuiClick();
            t1.text = worker.getCounter();
        }
    }
}

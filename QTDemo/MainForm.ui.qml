import QtQuick 2.6

Rectangle {
    property alias textEdit: textEdit

    width: 360
    height: 360
    property alias myImage: myImage

    MouseArea {
        id: myImage
        anchors.fill: parent

        Image {
            x: 130
            y: 130
            width: 100
            height: 100
            source: "qrc:/qtquickplugin/images/template_image.png"
        }
    }

    TextEdit {
        id: textEdit
        x: 133
        y: 32
        text: qsTr("Enter text...")
        font.pixelSize: 8
        font.family: "Verdana"
        anchors.horizontalCenterOffset: 0
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 99
        Rectangle {
            anchors.fill: parent
            anchors.margins: -10
            color: "transparent"
            border.width: 1
        }
    }

    MouseArea {
        id: mouseArea
        width: 100
        height: 100
    }
}

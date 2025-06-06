#include "bookwriter.hpp"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QWidget>

BookWriter::BookWriter(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("Mon App d'Écriture");
    resize(800, 600);

    // Widget central et layout principal
    QWidget* centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    QHBoxLayout* mainLayout = new QHBoxLayout(centralWidget);

    // Panneau gauche : chapitres et personnages
    QVBoxLayout* leftPanel = new QVBoxLayout();
    chapterList = new QListWidget(this);
    characterList = new QListWidget(this);
    leftPanel->addWidget(chapterList);
    leftPanel->addWidget(characterList);

    // Panneau droit : éditeur et sélecteur de template
    QVBoxLayout* rightPanel = new QVBoxLayout();
    templateCombo = new QComboBox(this);
    templateCombo->addItems({"Fantasy", "Mystery", "Romance", "Sci-Fi"});
    textEditor = new QTextEdit(this);
    rightPanel->addWidget(templateCombo);
    rightPanel->addWidget(textEditor);

    // Combiner les panneaux
    mainLayout->addLayout(leftPanel, 1);  // 1/4 de l’espace
    mainLayout->addLayout(rightPanel, 3); // 3/4 de l’espace
}
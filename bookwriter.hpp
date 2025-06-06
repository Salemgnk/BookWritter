#ifndef BOOKWRITER_H
#define BOOKWRITER_H
#include <QMainWindow>
#include <QTextEdit>
#include <QListWidget>
#include <QComboBox>

class BookWriter : public QMainWindow {
    public:
        BookWriter(QWidget* parent = nullptr);
    private:
        QTextEdit* textEditor;    // Pour écrire les chapitres
        QListWidget* chapterList; // Liste des chapitres
        QListWidget* characterList; // Liste des personnages
        QComboBox* templateCombo; // Sélecteur de type de livre
};

#endif // BOOKWRITER_H
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "messpunkt.h"
#include <vector>

namespace Ui
{
  class MainWindow;
}
/**
 * @brief die Klasse MainWindow ist für die GUI verantwortlich,
 *        sie steuert die Anzeigeelemte der GUI und das Ausführen von Aktionen durch clicken der Buttons
 *
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  Ui::MainWindow *ui;
  bool exit = false; // wird auf True gesetzt, wenn der Button "Programm beenden" betätigt wurde

  /**
   * @brief  die Signals sind mit den Slots der Klasse calculation verbunden und werden emittiert,
   *         wenn Buttons der GUI gedrückt werden (siehe Slots der Klasse MainWindow)
   *
   */
signals:
  void trafom_einlesen_sig(void);
  void robo_mp_einlesen_sig(std::vector<messpunkt> csv_data);
  void trafom_berechnen_sig();
  void start_sig(bool strt);
  void status_mp_einlesen_sig(int state);
  void reset_sig(bool rst);

  /**
   * @brief die Slots sind mit den Signals der Klasse calculation verbunden und werden von ihnen getriggert
   *
   */
public slots:

  /**
   * @brief zeigt die Tracking-Koordinaten in den LCD-Nummern an
   *
   * @param x x-Koordinate aus Sicht des Trackingsystems
   * @param y y-Koordinate aus Sicht des Trackingsystems
   * @param z z-Koordinate aus Sicht des Trackingsystems
   */
  void track_koords(double x, double y, double z);

  /**
   * @brief zeigt die Roboter-Koordinaten in den LCD-Nummern an
   *
   * @param x x-Koordinate aus Sicht des Robotersystems
   * @param y y-Koordinate aus Sicht des Robotersystems
   * @param z z-Koordinate aus Sicht des Robotersystems
   */
  void robo_koords(double x, double y, double z);

  /**
   * @brief färbt das Rechteck auf der GUI entweder rot oder  grün
   *
   * @param state  state==true-> grün , state==false -> rot
   */
  void ampel(bool state);

  /**
   * @brief gibt auf der GUI die Anzahl der bisher erfassten Messpunkte an
   *
   * @param counter int-> Anzahl der bisher erfassten Messounkte
   */
  void anzahl_mp(int counter);
  /**
   * @brief gibt eine Statusmeldung auf der GUI aus
   *
   * @param message  string der auf der Statusleiste ausgegeben wird
   */
  void meldung(const char *message);

  /**
   * @brief diese Slots werden durch clicken der Buttons auf der GUI ausgelöst und
   *        emittieren ein Signale der Klasse MainWindow, das einen Slot der Klasse calculation auslöst
   *
   */
private slots:
  void on_start_btn_clicked();            // "Start"
  void on_reset_btn_clicked();            // "Reset"
  void on_robo_mp_einlesen_btn_clicked(); // "Roboter Messpunkte einlesen"
  void on_trafom_berechnen_btn_clicked(); // "Trafomatrix berechnen"
  void on_trafom_einlesen_btn_clicked();  // "Trafomatrix von csv einlesen"
  void on_prog_beenden_btn_clicked();     // "Programm beenden"
};

#endif // MAINWINDOW_H


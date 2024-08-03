#ifndef SAMPLE_H
#define SAMPLE_H
#include"messpunkt.h"

/**
 * @brief stellt einen Datensatz aus messpunkt-Objekten dar und enthält die wichtigsten statistischen Größen des Datensatzes
 * 
 */
class sample
{
public:
 /**
  * @brief Erstellt ein neues sample Objekt und führt anhand der Daten direkt einen Analyse durch,
  *        sodass die statistischen Größen in den Attributen abgespeichert werden können
  * 
  * @param daten repräsentiert den Datensatz, der analysiert werden soll
  */
  sample(std::vector <messpunkt> daten);

  /**
   * @brief Destroy the sample object
   * 
   */
  ~sample(); 

  private: 
  std::vector <messpunkt> daten;//Datensatz an Messpunkte
  int anzahl_mp;//Anazahl an Messpunkten
  //Maximalen Werte
  double xmax;
  double ymax;
  double zmax;
  //Minimalen Werte
  double xmin;
  double ymin;
  double zmin;
  //Mittelwerte
  double xmittel;
  double ymittel;
  double zmittel;
  //Varianz
  double xvar;
  double yvar;
  double zvar;
};

#endif // SAMPLE_H

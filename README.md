# E1
Hallo alle miteinander,
bei der Bearbeitung von E1 ist ja ein Fehler mit der Nummer LNK2005 aufgetreten.
Dieser entstand dadurch, dass ich in der Headerdatei die Operator<< Funktion implementiert habe.
Diese wurde dann zweifach in eine .cpp Datei eingebunden. Dadurch kam es dazu, dass in beiden Dateien dieselbe Funktion definiert ist, was natürlich zu einem Fehler führt.
Der Compiler geht mit .h Dateien so um, dass er sie quasi eins zu eins in die .cpp Dateien kopiert.
Um diesen Fehler zu vermeiden habe ich die entsprechende Funktion nun in die .Cpp Datei ausgelagert. Auf dem Github ist die neue Version schon live.
Eine alternative ist es, die Funktion als inline zu markieren, dann erstellt der Compiler diese Funktion nie, sondern ersetzt sie am Aufrufort und so wird diese Funktion nie erstellt und es kann auch nicht zu einer Doppelerstellung kommen.

TLDR: schreibt keine Funktionsimplementationen in .h Dateien, auch wenn diese außerhalb der Klasse liegen.

Wer mehr dazu erfahren will kann sich hier Linkertoolfehler LNK2005 | Microsoft Learn unter dem zweiten Punkt umsehen.

Grüße,
und viel Glück für die Prüfungsvorbereitung
Daniel

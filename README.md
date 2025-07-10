Projekt 1, Scheduling Simulator
 Ziele
 Innerhalb dieses Projekts soll eine Simulationsumgebung f¨ ur Prozess Scheduler
 entwickelt und implementiert werden. Hierbei soll es m¨ oglich sein, beliebige
 Scheduling Algorithmen in die Umgebung einzubetten. Um dies zu erreichen soll
 eine Schnittstelle (API) definiert werden, mit welcher Entwickler ihre Scheduling
 Algorithmen einfach implementieren und evaluieren k¨ onnen. Der Fokus liegt
 hierbei auf einer vollst¨ andig vorhandenen Kernfunktionalit¨ at des Simulators.
 Arbeitsbeschreibung
 Wie bereits im Punkt ’Ziele’ beschrieben soll innerhalb dieses Projekts eine
 Simulationsumgebung f¨ ur Scheduling Algorithmen konzipiert und auch imple
mentiert werden. Es wird somit ein Software-Konzept gesucht, welches Prozesse
 mit Hilfe des Discrete-Event (DES) Ansatzes1 simuliert und einem Entwick
ler in diesem Kontext Zugang zum Planungsmechanismus des DES gew¨ ahrt.
 Jedes Scheduling eines Prozesses im Simulator sei hierbei als eine Zuweisung
 von Rechenzeit einer CPU zu sehen. Hierbei wird von einer Single CPU Umge
bung ausgegangen. Weiterhin sollen zur Veranschaulichung der Funktionalit¨ at
 des Simulators elementare Scheduling Algorithmen, die wir in der Vorlesung
 behandelt haben, implementiert werden. Die Algorithmen sind unten gelistet.
 Die zwei untengenannten Vorgehensweise des Scheduling von Threads m¨ ussen
 auch implementiert werden. F¨ ur das Scheduling von Threads k¨ onnen die Algo
rithmen des Prozess-Scheduling eingesetzt werden. F¨ ur dieses Projekt k¨ onnen
 Sie Ihre L¨ osung des 2 Praktikumszettel als Basis nehmen. F¨ ur dieses Projekt
 ist es unabdingbar, dass das entsprechende Kapitel aus dem Buch ’Moderne
 Betriebssysteme’ vollst¨ andig verstanden wurde.
 ˆ
 ˆ
 Scheduling Strategie: Unterbrechendes– First Come First Served, Shortest Job First, Round Robin Schedu
ling, Round Robin mit Periorit¨ at
 Thread Scheduling– Verwaltung auf Kernebene– Verwaltung auf Benutzerebene# cpu-scheduler-simulator

#include "Notification.h"

Notification::Notification(string message, string destinataire)
{
	this->message = message;
	this->destinataire = destinataire;
}

void Notification::afficher() const
{
	cout << "Notification  " << destinataire << " : " << message << endl;
}

Notification::~Notification()
{
	cout << "Destruction de la notification" << endl;
}

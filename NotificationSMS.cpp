#include "NotificationSMS.h"

NotificationSMS::NotificationSMS(string message, string operateur, string numero)
	: Notification(message, numero)
{
	this->numero = numero;
	this->operateur = operateur;
}

void NotificationSMS::envoyer()
{
	cout << " SMS  " << " | numero : " << numero << " | operateur : " << operateur <<" | message : "<< message << endl;
}

void NotificationSMS::afficher() const
{		
	Notification::afficher();
	cout << " numero : " << numero << " operateur : " << operateur << endl;
}

NotificationSMS::~NotificationSMS()
{
	cout << "Destruction de la notification SMS" << endl;
}

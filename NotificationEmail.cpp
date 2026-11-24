#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string message, string destinataire, string objet)
	: Notification(message, destinataire)
{
	this->objet = objet;	

}
void NotificationEmail::afficher() const
{
	Notification::afficher();
	cout << " objet : " << objet << endl;

}

void NotificationEmail::envoyer()
{
	cout << " Email a " << destinataire << "| objet : " << objet << " | message : " << message << endl;
}

NotificationEmail::~NotificationEmail()
{ 
	cout << "Destruction de la notification email" << endl;
}

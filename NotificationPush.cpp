#include "NotificationPush.h"

NotificationPush::NotificationPush(string message, string application, int identifiant)
	: Notification(message, application)
{
	this->application = application;
	this->identifiant = identifiant;
}

void NotificationPush::envoyer()
{
	cout <<  " utilisateur : user_" << identifiant << " | application : " << application << " | message : " << message << endl;
}

void NotificationPush::afficher() const
{
	Notification::afficher();
	cout << " application : " << application << " identifiant : " << identifiant << endl;
}

NotificationPush::~NotificationPush()
{
	cout << "Destruction de la notification push" << endl;
}

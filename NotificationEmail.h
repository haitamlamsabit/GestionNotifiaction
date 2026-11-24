#pragma once
#include "Notification.h"
class NotificationEmail :public Notification
{
private:
	string objet;

public:
	NotificationEmail(string message, string destinataire, string objet);
	void afficher() const ;
	void envoyer() override;
	~NotificationEmail();
};


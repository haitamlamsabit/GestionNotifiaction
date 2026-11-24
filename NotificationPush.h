#pragma once
#include "Notification.h"
class NotificationPush :public Notification
{
private:
	string application;
	int identifiant;
public:
	NotificationPush(string message, string application, int identifiant);
	void envoyer() override;
	void afficher() const override;
	~NotificationPush();
};


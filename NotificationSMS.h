#pragma once
#include "Notification.h"
class NotificationSMS : public Notification
{
	private:
		string operateur;
		string numero;
	public:
		NotificationSMS(string message, string operateur, string numero);
		void envoyer() override;
		void afficher() const override;
		~NotificationSMS();
};


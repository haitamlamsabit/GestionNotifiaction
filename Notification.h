#pragma once
#include <iostream>;
using namespace std;
class Notification
{
protected:
	string message;
	string destinataire;
public:
	Notification(string message, string destinataire);
	virtual void afficher() const ;
    virtual void envoyer()=0 ;
	virtual~Notification();
};


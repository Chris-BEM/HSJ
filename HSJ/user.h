#ifndef USER_H
#define USER_H
#include <QString>

class user
{
public:
    user();

    QString getUsername() const;
    void setUsername(const QString &value);

    QString getPassword() const;
    void setPassword(const QString &value);

private:
    QString username;
    QString password;
};

#endif // USER_H

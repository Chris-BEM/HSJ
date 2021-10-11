#include "user.h"

user::user()
{

}

QString user::getUsername() const
{
    return username;
}

void user::setUsername(const QString &value)
{
    username = value;
}

QString user::getPassword() const
{
    return password;
}

void user::setPassword(const QString &value)
{
    password = value;
}

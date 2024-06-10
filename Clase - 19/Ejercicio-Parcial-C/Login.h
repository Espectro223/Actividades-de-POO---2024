#ifndef LOGIN_H
#define LOGIN_H

#include <QString>

class Login {
public:
    static Login& getInstance();
    bool validateUser(const QString& username, const QString& password);

private:
    Login();
    ~Login();
    Login(const Login&) = delete;
    Login& operator=(const Login&) = delete;
    QString hashPassword(const QString& password);
};

#endif // LOGIN_H

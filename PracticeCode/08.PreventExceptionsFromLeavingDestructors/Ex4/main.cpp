#include <iostream>

class DBConnection {
public:
    static DBConnection create() {
        DBConnection db;
        return db;
    };

    void close() {}
};

class DBConn {
public:
    DBConn(DBConnection db_): db(db_) {}

    ~DBConn() {
        try {
            std::cout << "closing db" << std::endl;
            db.close();
        }
        catch(...) {
            std::cout << "close fail!" << std::endl;
        }
    }
private:
    DBConnection db;
};

int main() {

    {
        DBConn dbc(DBConnection::create()); // 建立 DBConnection 对象并交给 DBConn 以便管理。
    } // dbc 在区块结束点时被销毁，并自动为 DBConnection 对象调用 close 方法
}
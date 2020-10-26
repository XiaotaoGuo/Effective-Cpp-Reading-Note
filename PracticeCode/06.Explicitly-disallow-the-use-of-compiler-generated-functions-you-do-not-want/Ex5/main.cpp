
class Uncopyable {
public:
    Uncopyable() {}

private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator=(const Uncopyable&);
};

/**
 * this class should not be copyable
 */
class HomeForSale : public Uncopyable {
public:
    HomeForSale() {}

    void test() {
        HomeForSale h1;
        HomeForSale h2 = h1;
    }
};

int main() {
    HomeForSale h1;
    h1.test();  // compiles & runs without error, which it shouldn't

    return 0;
}
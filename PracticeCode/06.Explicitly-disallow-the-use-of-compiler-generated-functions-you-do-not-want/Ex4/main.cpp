
/**
 * this class should not be copiable
 */
class HomeForSale {
public:
    HomeForSale() {}

    void test() {

        HomeForSale h1;
        HomeForSale h2 = h1;
    }

private:
    HomeForSale(const HomeForSale&);
    HomeForSale& operator=(const HomeForSale&);
};

int main() {
    
    HomeForSale h1;
    h1.test(); // compiles & runs without error, which it shouldn't

    return 0;
}
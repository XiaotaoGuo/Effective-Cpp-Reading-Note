
/**
 * this class should not be copiable
 */
class HomeForSale {
public:
    HomeForSale() {}

    HomeForSale(const HomeForSale&) = delete;
    HomeForSale& operator=(const HomeForSale&) = delete;

    void test() {

        HomeForSale h1;
        HomeForSale h2 = h1;
        HomeForSale h3(h2);
    }
};

int main() {
    
    HomeForSale h1;
    h1.test(); // compiles & runs without error, which it shouldn't

    return 0;
}
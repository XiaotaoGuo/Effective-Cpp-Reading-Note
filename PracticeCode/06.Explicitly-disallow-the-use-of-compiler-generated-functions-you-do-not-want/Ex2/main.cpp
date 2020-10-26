
/**
 * this class should not be copiable
 */
class HomeForSale {
public:
    HomeForSale() {}

private:
    HomeForSale(const HomeForSale&) {}
    HomeForSale& operator=(const HomeForSale&) {}
};

int main() {
    HomeForSale h1;
    HomeForSale h2;
    HomeForSale h3(h2);  // compiles fails
    h2 = h1;             // compiles fails

    return 0;
}
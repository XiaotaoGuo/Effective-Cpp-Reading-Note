
/**
 * this class should not be copiable
 */
class HomeForSale {
    // ...
};

int main() {
    HomeForSale h1;
    HomeForSale h2;
    HomeForSale h3(h2);  // compiles and runs without error, which it shouldn't
    h2 = h1;             // compiles and runs without error, which it shouldn't

    return 0;
}
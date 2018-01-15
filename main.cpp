#include "simpletests.h"

// Einfaches Beispiel zum Gebrauch der simpletests
int main() {
    int i = 5;
    test(i == 4);
    test(i == 5);
    test_eq(i, 3+1);
    test_eq(i, 3+2);
    test_eq(5+i, 7+1);
    
    std::string h("hallo");
    test_eq(h, "h");
    test_eq(h, "hallo");
    test_eq("hallo",h);
 
	simpletests::test_result();
	return 0;
}

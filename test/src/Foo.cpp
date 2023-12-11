#include "doctest.h"
#include "Foo.h"

TEST_CASE("testing the foo increment function") {
    Foo f;
    CHECK(f.increment(1) == 3);
}
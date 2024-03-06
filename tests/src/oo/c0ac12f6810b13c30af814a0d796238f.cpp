// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
C0 func1 (C0* v0, C0* v1);
C0 func2 (abstract_0 v6, C0* v7, C0* v8, abstract_0 v9);
C0 func3 (C0* v10, abstract_1 v11, abstract_1 v12, abstract_0 v13);
C0 func4 (C0* v17);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

C0 func1 (C0* v0, C0* v1) {
C0* v2;
abstract_0 v3;
abstract_0 v4;
abstract_0 v5;

return *(v1);

}
C0 func2 (abstract_0 v6, C0* v7, C0* v8, abstract_0 v9) {

delete (new C0 ());
return ::func3(v7, abstract_1(), abstract_1(), v6);

}
C0 func3 (C0* v10, abstract_1 v11, abstract_1 v12, abstract_0 v13) {
C0** v14;
C0** v15;
abstract_0 v16;

delete (new C0 ());
return ::func2(abstract_0(), v10, v10, abstract_0());

}
C0 func4 (C0* v17) {
abstract_0 v18;
abstract_1 v19;
abstract_0 v20;
abstract_0 v21;

delete (new C0 ());
return ::func2(v18, v17, v17, v18);

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

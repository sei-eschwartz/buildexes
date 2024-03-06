// type for special constructors
struct special_constructor {};
struct C0;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
C0 func1 (C0* v0, C0* v1);
C0 func2 ();
C0 func3 ();
C0* func4 (C0** v6, C0* v7, C0* v8, C0 v9);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

C0 func1 (C0* v0, C0* v1) {
C0* v2;
C0* v3;
C0 v4;

return ::func2();

}
C0 func2 () {
C0* v5;

v5 = v5;
v5 = v5;
return ::func3();

}
C0 func3 () {

::func1(&(::func2()), ((C0*) 0));
return ::func1(&(::func2()), &(::func2()));

}
C0* func4 (C0** v6, C0* v7, C0* v8, C0 v9) {
C0* v10;
C0* v11;

return v7;

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

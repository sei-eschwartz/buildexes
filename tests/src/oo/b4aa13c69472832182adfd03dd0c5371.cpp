// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
C0 func1 (C0* v0, C0* v1, C0* v2);
abstract_0 func2 (C0* v7, C0* v8);
C0 func3 ();
abstract_0 func4 (C0* v12, C0* v13, C0* v14, C0* v15);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

C0 func1 (C0* v0, C0* v1, C0* v2) {
C0* v3;
C0* v4;
C0* v5;
C0* v6;

delete (new C0 ());
::func3();
::func3();
return ::func3();

}
abstract_0 func2 (C0* v7, C0* v8) {

v8 = &(*(&(::func3())));
v8 = &(*(&(::func3())));
v8 = &(*(&(::func3())));
v8 = &(*(&(::func3())));
return ::func4(v7, v7, v7, (new C0 ()));

}
C0 func3 () {
C0* v9;
C0 v10;
C0* v11;

return ::func1(v11, v11, v11);

}
abstract_0 func4 (C0* v12, C0* v13, C0* v14, C0* v15) {
C0* v16;
C0 v17;
C0 v18;
C0 v19;

delete (new C0 ());
return abstract_0();

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

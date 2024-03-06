// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0* v4;
C0* v5;
C0* v6;
C0* v7;
};
C0 func2 (abstract_0 v8, C0* v9, C0* v10, C0* v11);
C0 func3 (C0* v12, C0* v13);
C0 func4 (abstract_0 v16, C0* v17, abstract_0 v18, abstract_0 v19);
C0 func5 (C0* v21, C0* v22);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = (new C0 ());
C0* v2 = (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

C0 func2 (abstract_0 v8, C0* v9, C0* v10, C0* v11) {

v11 = v9;
return *(v9);

}
C0 func3 (C0* v12, C0* v13) {
abstract_0 v14;
C0* v15;

return *(v13);

}
C0 func4 (abstract_0 v16, C0* v17, abstract_0 v18, abstract_0 v19) {
C0* v20;

v19 = abstract_0();
v19 = abstract_0();
v19 = abstract_0();
return ::func2(v19, (new C0 ()), (new C0 ()), (new C0 ()));

}
C0 func5 (C0* v21, C0* v22) {
C0* v23;

return ::func3((new C0 ()), (new C0 ()));

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
/*
class C1    size(16)
0    +---
0    | var4: PtrType{ClassType{0}}
4    | var5: PtrType{ClassType{0}}
8    | var6: PtrType{ClassType{0}}
12   | var7: PtrType{ClassType{0}}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

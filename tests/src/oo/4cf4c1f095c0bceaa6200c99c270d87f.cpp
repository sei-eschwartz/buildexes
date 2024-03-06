// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
C0* v4;
};
C0 func1 (C0* v5);
C0 func2 ();
C0 func3 (C0* v6);
C0 func4 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = &(*(&(*(((C0*) 0)))));
C0* v2 = &(*(&(*(((C0*) 0)))));
return;

}
/* method id 402 */ C1::~C1 () {
C0* v3 = (new C0 ());
::func2();
return;

}
C1::C1 (special_constructor)  {}

C0 func1 (C0* v5) {

return ::func3(v5);

}
C0 func2 () {

return ::func3(&(::func1(&(::func4()))));

}
C0 func3 (C0* v6) {
C0* v7;
abstract_1 v8;
C0* v9;
abstract_2 v10;

return ::func2();

}
C0 func4 () {
abstract_2 v11;
abstract_2 v12;

delete (new C1 ());
return ::func1(((C0*) 0));

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var4: PtrType{ClassType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
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

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
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
C0* v8;
};
C0 func1 (C0* v9, C0* v10, C0* v11);
C0 func2 (abstract_0 v15);
C0 func3 (C0* v20, abstract_0 v21, C1 v22, C1 v23);
C0 func4 (C0* v25, C1 v26, C0* v27);
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
/* method id 402 */ C1::~C1 () {
C0* v3 = ((C0*) 0);
abstract_0 v4 = abstract_0();
abstract_0 v5 = abstract_0();
C0* v6 = ((C0*) 0);
v3 = &(::func2(abstract_0()));
v3 = &(::func2(abstract_0()));
delete (new C0 ());
v3 = &(::func2(abstract_0()));
return;

}
C1::C1 (special_constructor)  {}

C0 func1 (C0* v9, C0* v10, C0* v11) {
C0* v12;
C0* v13;
C0* v14;

return ::func2(abstract_0());

}
C0 func2 (abstract_0 v15) {
C0* v16;
abstract_0 v17;
abstract_0 v18;
C0* v19;

return *(((C0*) 0));

}
C0 func3 (C0* v20, abstract_0 v21, C1 v22, C1 v23) {
abstract_0 v24;

v23 = *(((C1*) 0));
v23 = *(((C1*) 0));
v23 = *(((C1*) 0));
v23 = *(((C1*) 0));
return *(v20);

}
C0 func4 (C0* v25, C1 v26, C0* v27) {
C0* v28;
C1 v29;

delete (new C1 ());
return ::func1(v25, v25, v25);

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
4    | var8: PtrType{ClassType{0}}
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

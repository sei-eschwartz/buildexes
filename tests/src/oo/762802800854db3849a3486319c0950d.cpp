// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual void func0 (C0 v8, C0 v9);
C2 (special_constructor);
};
struct C3  {
/* method id 405 */ C3 ();
C3 (special_constructor);
C0 v12;
};
void func1 ();
abstract_0 func2 (C0 v13, C0 v14, C0 v15, C0 v16);
void func3 (C0 v17, C0 v18, C0 v19, C0 v20);
abstract_0 func4 (C0 v23, C0 v24, C0 v25, C0 v26);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return ::func1();

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
return;

}
/* method id 404 */ void C2::func0 (C0 v8, C0 v9) {
C0 v10 = *(&(*((new C0 ()))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
C0 v11 = *((new C0 ()));
return;

}
C3::C3 (special_constructor)  {}

void func1 () {

return;

}
abstract_0 func2 (C0 v13, C0 v14, C0 v15, C0 v16) {

return abstract_0();

}
void func3 (C0 v17, C0 v18, C0 v19, C0 v20) {
C0 v21;
C0 v22;

return;

}
abstract_0 func4 (C0 v23, C0 v24, C0 v25, C0 v26) {
C0 v27;

return ::func2(v23, v23, v23, v23);

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
class C1    size(3)
0    +---
0    | var1: ClassType{0}
1    | var2: ClassType{0}
2    | var3: ClassType{0}
3    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 3;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(11)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | var1: ClassType{0}
9    | var2: ClassType{0}
10   | var3: ClassType{0}
11   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 11;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(1)
0    +---
0    | var12: ClassType{0}
1    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

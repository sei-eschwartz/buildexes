// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
};
struct C2 : public virtual C1 {
/* method id 404 */ virtual void func1 ();
/* method id 405 */ virtual void func4 (C0 v6);
/* method id 406 */ ~C2 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v14;
C0 v15;
C0 v16;
};
void func5 (C0 v17, C0 v18);
void func6 (C0 v23, C0 v24, C0 v25);
void func7 (C0 v29, C0 v30, C0 v31);
void func8 (C0 v34, C0 v35, C0 v36, C0 v37);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ void C2::func1 () {
C0 v3 = *(((C0*) 0));
C0 v4 = *(&(*((new C0 ()))));
C0 v5 = *(&(*((new C0 ()))));
::func6(v2, v2, v2);
::func6(v2, v2, v2);
::func6(v2, v2, v2);
::func6(v2, v2, v2);
return ::func8(v2, v2, v2, v2);

}
/* method id 405 */ void C2::func4 (C0 v6) {
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
delete (new C2 ());
return ::func6(v2, v2, v2);

}
/* method id 406 */ C2::~C2 () {
C0 v9 = *(((C0*) 0));
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
C0 v12 = *(((C0*) 0));
delete (new C1 ());
return;

}
/* method id 407 */ C2::C2 () {
C0 v13 = *(&(*(((C0*) 0))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

void func5 (C0 v17, C0 v18) {
C0 v19;
C0 v20;
C0 v21;
C0 v22;

return ::func7(v20, v20, v20);

}
void func6 (C0 v23, C0 v24, C0 v25) {
C0 v26;
C0 v27;
C0 v28;

return;

}
void func7 (C0 v29, C0 v30, C0 v31) {
C0 v32;
C0 v33;

return ::func6(v30, v30, v30);

}
void func8 (C0 v34, C0 v35, C0 v36, C0 v37) {
C0 v38;
C0 v39;

delete (new C2 ());
return ::func6(v38, v38, v38);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(20)
0    +---
0    | {vbptr}
4    | var0: ClassType{0}
8    | var1: ClassType{0}
12   | var2: ClassType{0}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var14: ClassType{0}
12   | var15: ClassType{0}
16   | var16: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var0: ClassType{0}
32   | var1: ClassType{0}
36   | var2: ClassType{0}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

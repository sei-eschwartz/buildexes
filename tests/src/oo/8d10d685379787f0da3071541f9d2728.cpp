// type for special constructors
struct special_constructor {};
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
/* method id 403 */ ~C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 406 */ virtual void func1 ();
/* method id 407 */ virtual void func3 (C0 v4, C0 v5, C0 v6);
/* method id 408 */ virtual void func0 (C0 v7, C0 v8);
/* method id 409 */ virtual void func1 (C0 v10, C0 v11, C0 v12);
/* method id 410 */ C3 ();
C3 (special_constructor);
};
void* func6 (C0 v15);
void func7 (C0 v17, C0 v18, C0 v19, C0 v20);
void func8 (C0 v21, C1 v22);
void* func9 (C1 v24);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
delete (new C2 ());
return ::func8(v2, *((new C1 ())));

}
/* method id 402 */ C1::C1 () {
return;

}
/* method id 403 */ C1::~C1 () {
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ void C3::func1 () {
C0 v3 = *((new C0 ()));
delete (new C3 ());
return ::func8(v3, *((new C1 ())));

}
/* method id 407 */ void C3::func3 (C0 v4, C0 v5, C0 v6) {
return;

}
/* method id 408 */ void C3::func0 (C0 v7, C0 v8) {
C0 v9 = *(&(*((new C0 ()))));
return;

}
/* method id 409 */ void C3::func1 (C0 v10, C0 v11, C0 v12) {
C0 v13 = *(&(*((new C0 ()))));
C0 v14 = *(&(*((new C0 ()))));
delete (new C1 ());
return ::func8(v2, *((new C1 ())));

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void* func6 (C0 v15) {
C0 v16;

return ((void*) 0);

}
void func7 (C0 v17, C0 v18, C0 v19, C0 v20) {

delete (new C1 ());
v19 = *((new C0 ()));
v19 = *((new C0 ()));
return (&(*((new C1 ()))))->C1::func0();

}
void func8 (C0 v21, C1 v22) {
C1 v23;

return (((C1*) 0))->C1::func0();

}
void* func9 (C1 v24) {
C0 v25;

return ((void*) 0);

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
0    | var0: ClassType{0}
1    | var1: ClassType{0}
2    | var2: ClassType{0}
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
class C2    size(7)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | var0: ClassType{0}
5    | var1: ClassType{0}
6    | var2: ClassType{0}
7    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 7;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C1)
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   +---
11   | alignment: 
12   +--- (virtual base class C2)
12   | {vbptr}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }

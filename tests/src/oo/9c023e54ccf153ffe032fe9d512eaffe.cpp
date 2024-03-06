// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void* func2 ();
/* method id 403 */ void* func1 ();
C0 (special_constructor);
void* v3;
void* v4;
void* v5;
};
struct C1 : public C0 {
/* method id 404 */ C1 ();
C1 (special_constructor);
void* v6;
};
struct C2 : public C1 {
/* method id 405 */ C2 ();
C2 (special_constructor);
void* v7;
void* v8;
void* v9;
void* v10;
};
struct C3 : public C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
void* v11;
void* v12;
};
void func6 (void* v13, C3 v14);
void func7 (C3 v18, C3 v19, C3 v20, C3 v21);
void* func8 (C3 v22, C3 v23, C3 v24, void* v25);
void* func9 (void* v29, C3 v30, C3 v31, C3 v32);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
delete (new C1 ());
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
return v3;

}
/* method id 403 */ void* C0::func1 () {
void* v2 = ((void*) 0);
return v5;

}
C0::C0 (special_constructor)  {}

/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func6 (void* v13, C3 v14) {
void* v15;
void* v16;
C3 v17;

return;

}
void func7 (C3 v18, C3 v19, C3 v20, C3 v21) {

return ::func6(((void*) 0), *(((C3*) 0)));

}
void* func8 (C3 v22, C3 v23, C3 v24, void* v25) {
C3 v26;
C3 v27;
C3 v28;

delete (new C2 ());
return v25;

}
void* func9 (void* v29, C3 v30, C3 v31, C3 v32) {
C3 v33;
C3 v34;

return v29;

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | var3: PtrType{VoidType{}}
4    | var4: PtrType{VoidType{}}
8    | var5: PtrType{VoidType{}}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
0    | +--- (base class C0)
0    | | var3: PtrType{VoidType{}}
4    | | var4: PtrType{VoidType{}}
8    | | var5: PtrType{VoidType{}}
12   | +---
12   | var6: PtrType{VoidType{}}
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(32)
0    +---
0    | +--- (base class C1)
0    | | +--- (base class C0)
0    | | | var3: PtrType{VoidType{}}
4    | | | var4: PtrType{VoidType{}}
8    | | | var5: PtrType{VoidType{}}
12   | | +---
12   | | var6: PtrType{VoidType{}}
16   | +---
16   | var7: PtrType{VoidType{}}
20   | var8: PtrType{VoidType{}}
24   | var9: PtrType{VoidType{}}
28   | var10: PtrType{VoidType{}}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | +--- (base class C0)
0    | | | | var3: PtrType{VoidType{}}
4    | | | | var4: PtrType{VoidType{}}
8    | | | | var5: PtrType{VoidType{}}
12   | | | +---
12   | | | var6: PtrType{VoidType{}}
16   | | +---
16   | | var7: PtrType{VoidType{}}
20   | | var8: PtrType{VoidType{}}
24   | | var9: PtrType{VoidType{}}
28   | | var10: PtrType{VoidType{}}
32   | +---
32   | var11: PtrType{VoidType{}}
36   | var12: PtrType{VoidType{}}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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

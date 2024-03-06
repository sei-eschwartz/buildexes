// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ abstract_1 func0 (abstract_1** v4, abstract_1** v5);
/* method id 403 */ abstract_1 func1 (abstract_1** v6, abstract_0 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
abstract_1** v8;
abstract_1** v9;
abstract_1** v10;
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_1 func0 ();
/* method id 406 */ virtual abstract_1 func0 (abstract_1** v14, abstract_1** v15, abstract_1** v16, abstract_1** v17);
/* method id 407 */ virtual abstract_1 func1 ();
/* method id 408 */ virtual ~C1 ();
/* method id 409 */ C1 ();
C1 (special_constructor);
abstract_1** v26;
abstract_1** v27;
abstract_1** v28;
abstract_1** v29;
};
struct C2  {
/* method id 410 */ C2 ();
C2 (special_constructor);
abstract_1** v38;
abstract_1** v39;
abstract_1** v40;
abstract_1** v41;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ C3 ();
/* method id 413 */ virtual abstract_1 func1 (abstract_0 v70);
C3 (special_constructor);
abstract_1** v144;
abstract_1** v145;
abstract_1** v146;
};
abstract_1 func4 (abstract_1** v147);
abstract_1 func5 (abstract_1** v151, abstract_1** v152);
abstract_1 func6 (abstract_1** v157, abstract_1** v158, abstract_1** v159, abstract_2 v160);
abstract_1 func7 (abstract_2 v165, abstract_1** v166, abstract_1** v167, abstract_1** v168);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
::func5(v10, v10);
::func5(v10, v10);
return ::func5(v10, v10);

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
::func5(v10, v10);
::func5(v10, v10);
::func5(v10, v10);
::func5(v10, v10);
return ::func5(v10, v10);

}
/* method id 402 */ abstract_1 C0::func0 (abstract_1** v4, abstract_1** v5) {
::func5(v10, v10);
::func5(v10, v10);
::func5(v10, v10);
::func5(v10, v10);
return ::func5(v10, v10);

}
/* method id 403 */ abstract_1 C0::func1 (abstract_1** v6, abstract_0 v7) {
delete (new C2 ());
return ::func5(v10, v10);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_1** v11 = new abstract_1* ();
abstract_0 v12 = abstract_0();
abstract_0 v13 = abstract_0();
return ::func5(v10, v10);

}
/* method id 406 */ abstract_1 C1::func0 (abstract_1** v14, abstract_1** v15, abstract_1** v16, abstract_1** v17) {
abstract_0 v18 = abstract_0();
abstract_2 v19 = abstract_2();
abstract_1** v20 = new abstract_1* ();
abstract_0 v21 = abstract_0();
::func5(v9, v9);
::func5(v9, v9);
::func5(v9, v9);
::func5(v9, v9);
return ::func5(new abstract_1* (), new abstract_1* ());

}
/* method id 407 */ abstract_1 C1::func1 () {
abstract_2 v22 = abstract_2();
return ::func5(v8, v8);

}
/* method id 408 */ C1::~C1 () {
abstract_1** v23 = new abstract_1* ();
abstract_1** v24 = new abstract_1* ();
abstract_1** v25 = new abstract_1* ();
return;

}
/* method id 409 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 410 */ C2::C2 () {
abstract_1** v30 = new abstract_1* ();
abstract_2 v31 = abstract_2();
abstract_1** v32 = new abstract_1* ();
abstract_1** v33 = new abstract_1* ();
return;

}
C2::C2 (special_constructor)  {}

/* method id 411 */ C3::~C3 () {
abstract_2 v42 = abstract_2();
abstract_1** v43 = new abstract_1* ();
abstract_1** v44 = new abstract_1* ();
abstract_1** v45 = new abstract_1* ();
return;

}
/* method id 412 */ C3::C3 () {
abstract_1** v54 = new abstract_1* ();
abstract_2 v55 = abstract_2();
abstract_1** v56 = new abstract_1* ();
abstract_1** v57 = new abstract_1* ();
return;

}
/* method id 413 */ abstract_1 C3::func1 (abstract_0 v70) {
abstract_2 v71 = abstract_2();
delete (new C1 ());
return ::func5(v10, v10);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_1 func4 (abstract_1** v147) {
abstract_1** v148;
abstract_1** v149;
abstract_1** v150;

delete (new C2 ());
return ::func6(v148, v148, v148, abstract_2());

}
abstract_1 func5 (abstract_1** v151, abstract_1** v152) {
abstract_1** v153;
abstract_1** v154;
abstract_1** v155;
abstract_1** v156;

return abstract_1();

}
abstract_1 func6 (abstract_1** v157, abstract_1** v158, abstract_1** v159, abstract_2 v160) {
abstract_1** v161;
abstract_1** v162;
abstract_1** v163;
abstract_1** v164;

return ::func5(v158, v158);

}
abstract_1 func7 (abstract_2 v165, abstract_1** v166, abstract_1** v167, abstract_1** v168) {
abstract_1** v169;

return ::func5(v167, v167);

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | var8: DeletablePtrType{PtrType{AbstractType{1}}}
4    | var9: DeletablePtrType{PtrType{AbstractType{1}}}
8    | var10: DeletablePtrType{PtrType{AbstractType{1}}}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var26: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var27: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var28: DeletablePtrType{PtrType{AbstractType{1}}}
20   | var29: DeletablePtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | var8: DeletablePtrType{PtrType{AbstractType{1}}}
28   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
32   | var10: DeletablePtrType{PtrType{AbstractType{1}}}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(16)
0    +---
0    | var38: DeletablePtrType{PtrType{AbstractType{1}}}
4    | var39: DeletablePtrType{PtrType{AbstractType{1}}}
8    | var40: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var41: DeletablePtrType{PtrType{AbstractType{1}}}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(72)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var144: DeletablePtrType{PtrType{AbstractType{1}}}
12   | var145: DeletablePtrType{PtrType{AbstractType{1}}}
16   | var146: DeletablePtrType{PtrType{AbstractType{1}}}
20   +---
20   +--- (virtual base class C0)
20   | var8: DeletablePtrType{PtrType{AbstractType{1}}}
24   | var9: DeletablePtrType{PtrType{AbstractType{1}}}
28   | var10: DeletablePtrType{PtrType{AbstractType{1}}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var26: DeletablePtrType{PtrType{AbstractType{1}}}
44   | var27: DeletablePtrType{PtrType{AbstractType{1}}}
48   | var28: DeletablePtrType{PtrType{AbstractType{1}}}
52   | var29: DeletablePtrType{PtrType{AbstractType{1}}}
56   +---
56   +--- (virtual base class C2)
56   | var38: DeletablePtrType{PtrType{AbstractType{1}}}
60   | var39: DeletablePtrType{PtrType{AbstractType{1}}}
64   | var40: DeletablePtrType{PtrType{AbstractType{1}}}
68   | var41: DeletablePtrType{PtrType{AbstractType{1}}}
72   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 72;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 56;
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

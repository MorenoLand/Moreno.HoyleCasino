#include "protos.h"

void f_0060f560(void) /* sub_60F560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060f560);
    /* 0060f560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f561: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f563: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f565: push 0x6aae4e */ { u32 v = 0x6aae4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060f56a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060f570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f571: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060f574: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0060f579: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060f57b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f57c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0060f57f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0060f585: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060f588: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f58b: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x60f590u); f_005f5cc0();
    /* 0060f590: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0060f593: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f594: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0060f597: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f598: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f59b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060f59d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5a0: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0060f5a3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f5a5u); call_ind(t); }
    /* 0060f5a5: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0060f5a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f5a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060f5ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5b1: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0060f5b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60f5b6u); call_ind(t); }
    /* 0060f5b6: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0060f5b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f5ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5bd: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x60f5c2u); f_005f53e0();
    /* 0060f5c2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5c5: mov dword ptr [edx + 0x188], 0 */ W32((u32)(r_edx+0x188u), 0x0u);
    /* 0060f5cf: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0060f5d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0060f5d5: jle 0x60f5e7 */ if ((fZ||fS!=fO)) goto L_0060f5e7;
L_0060f5d7:; BB(0x0060f5d7);
    /* 0060f5d7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5da: mov dx, word ptr [ebp + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 0060f5de: mov word ptr [ecx + 0x184], dx */ W16((u32)(r_ecx+0x184u), (u16)r_edx);
    /* 0060f5e5: jmp 0x60f5f3 */ goto L_0060f5f3;
L_0060f5e7:; BB(0x0060f5e7);
    /* 0060f5e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5ea: mov word ptr [eax + 0x184], 1 */ W16((u32)(r_eax+0x184u), 0x1u);
L_0060f5f3:; BB(0x0060f5f3);
    /* 0060f5f3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f5f6: movsx eax, word ptr [ecx + 0x184] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0060f5fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060f5ff: mov edx, 4 */ r_edx = 0x4u;
    /* 0060f604: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0060f606: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 0060f609: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0060f60b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0060f60d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f60e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60f613u); f_00686d82();
    /* 0060f613: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f616: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060f619: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f61c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060f61f: mov dword ptr [eax + 0x18c], ecx */ W32((u32)(r_eax+0x18cu), r_ecx);
    /* 0060f625: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0060f62b: jmp 0x60f639 */ goto L_0060f639;
L_0060f62d:; BB(0x0060f62d);
    /* 0060f62d: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0060f631: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0060f635: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_0060f639:; BB(0x0060f639);
    /* 0060f639: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f63d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f640: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0060f647: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060f649: jge 0x60f7c2 */ if ((fS==fO)) goto L_0060f7c2;
L_0060f64f:; BB(0x0060f64f);
    /* 0060f64f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f654: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x60f659u); f_00686d82();
    /* 0060f659: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060f65c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0060f65f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060f666: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f66a: je 0x60f679 */ if (fZ) goto L_0060f679;
L_0060f66c:; BB(0x0060f66c);
    /* 0060f66c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060f66f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x60f674u); f_005eaaf0();
    /* 0060f674: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060f677: jmp 0x60f680 */ goto L_0060f680;
L_0060f679:; BB(0x0060f679);
    /* 0060f679: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060f680:; BB(0x0060f680);
    /* 0060f680: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060f683: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0060f686: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060f68d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f691: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f694: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060f69a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060f69d: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 0060f6a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060f6a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f6a4: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f6a8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f6ab: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060f6b1: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060f6b4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x60f6b9u); f_005eaf00();
    /* 0060f6b9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f6bb: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f6bf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f6c2: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060f6c8: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060f6cb: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f6cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f6d2: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0060f6d8: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0060f6db: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060f6dd: mov ecx, edx */ r_ecx = r_edx;
    /* 0060f6df: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0060f6e5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f6e7u); call_ind(t); }
    /* 0060f6e7: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f6eb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f6ee: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f6f4: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0060f6f7: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f6fb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f6fe: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 0060f704: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0060f707: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060f709: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0060f70c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f70eu); call_ind(t); }
    /* 0060f70e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f711: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x60f716u); f_005f53c0();
    /* 0060f716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f717: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f71b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f71e: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f724: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0060f727: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f72b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f72e: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 0060f734: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0060f737: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060f739: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0060f73c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f73eu); call_ind(t); }
    /* 0060f73e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f741: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x60f746u); f_005f5400();
    /* 0060f746: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f747: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f74b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f74e: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f754: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0060f757: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x60f75cu); f_005f53e0();
    /* 0060f75c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f75f: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x60f764u); f_005f54c0();
    /* 0060f764: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0060f767: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060f769: je 0x60f796 */ if (fZ) goto L_0060f796;
L_0060f76b:; BB(0x0060f76b);
    /* 0060f76b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f76f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f772: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060f778: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0060f77b: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f77f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f782: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 0060f788: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0060f78b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060f78d: mov ecx, edx */ r_ecx = r_edx;
    /* 0060f78f: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0060f792: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f794u); call_ind(t); }
    /* 0060f794: jmp 0x60f7bd */ goto L_0060f7bd;
L_0060f796:; BB(0x0060f796);
    /* 0060f796: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f79a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f79d: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f7a3: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0060f7a6: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0060f7aa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f7ad: mov edx, dword ptr [edx + 0x18c] */ r_edx = R32((u32)(r_edx+0x18cu));
    /* 0060f7b3: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0060f7b6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0060f7b8: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0060f7bb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f7bdu); call_ind(t); }
L_0060f7bd:; BB(0x0060f7bd);
    /* 0060f7bd: jmp 0x60f62d */ goto L_0060f62d;
L_0060f7c2:; BB(0x0060f7c2);
    /* 0060f7c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060f7c4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f7c7: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0060f7cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060f7cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f7d2: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 0060f7d8: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0060f7da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0060f7dc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0060f7e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60f7e4u); call_ind(t); }
    /* 0060f7e4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f7e7: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0060f7ed: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0060f7ef: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x60f7f4u); f_005f5550();
    /* 0060f7f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f7f7: mov word ptr [ecx + 0x186], ax */ W16((u32)(r_ecx+0x186u), (u16)r_eax);
    /* 0060f7fe: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f801: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0060f807: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0060f809: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x60f80eu); f_005f5590();
    /* 0060f80e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f80f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f812: movsx edx, word ptr [ecx + 0x186] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x186u));
    /* 0060f819: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f81c: movsx ecx, word ptr [eax + 0x184] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x184u));
    /* 0060f823: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0060f826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f827: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f82a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0060f82c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f82f: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 0060f832: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60f834u); call_ind(t); }
    /* 0060f834: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f837: mov ecx, dword ptr [eax + 0x158] */ r_ecx = R32((u32)(r_eax+0x158u));
    /* 0060f83d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f83e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f841: mov eax, dword ptr [edx + 0x154] */ r_eax = R32((u32)(r_edx+0x154u));
    /* 0060f847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060f848: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f84b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0060f84d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060f850: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0060f853: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60f855u); call_ind(t); }
    /* 0060f855: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060f858: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060f85f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060f860: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f862: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f863: ret 0x18 */ FN_RET(0x0060f560); r_esp += 28; return;
}

void f_0060f870(void) /* sub_60F870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0060f870);
    /* 0060f870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060f871: mov ebp, esp */ r_ebp = r_esp;
    /* 0060f873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060f874: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0060f875: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0060f876: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0060f879: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0060f87c: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060f87f: add edi, 0x190 */ {  u32 a = r_edi; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0060f885: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0060f88a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0060f88c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060f88d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060f88e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060f890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060f891: ret 4 */ FN_RET(0x0060f870); r_esp += 8; return;
}


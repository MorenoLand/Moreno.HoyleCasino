#include "protos.h"

void f_0067f900(void) /* sub_67F900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067f900);
    /* 0067f900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067f901: mov ebp, esp */ r_ebp = r_esp;
    /* 0067f903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067f905: push 0x6adc81 */ { u32 v = 0x6adc81u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f90a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067f910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f911: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067f914: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f915: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067f916: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067f91b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067f91d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f91e: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067f921: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067f927: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0067f92a: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0067f931: jmp 0x67f93c */ goto L_0067f93c;
L_0067f933:; BB(0x0067f933);
    /* 0067f933: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f936: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067f939: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0067f93c:; BB(0x0067f93c);
    /* 0067f93c: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067f940: jge 0x67fba3 */ if ((fS==fO)) goto L_0067fba3;
L_0067f946:; BB(0x0067f946);
    /* 0067f946: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f949: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067f94c: cmp dword ptr [edx + ecx*4 + 0x198], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f954: jne 0x67f9a4 */ if (!fZ) goto L_0067f9a4;
L_0067f956:; BB(0x0067f956);
    /* 0067f956: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f95b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67f960u); f_00686d82();
    /* 0067f960: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f963: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0067f966: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067f96d: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f971: je 0x67f980 */ if (fZ) goto L_0067f980;
L_0067f973:; BB(0x0067f973);
    /* 0067f973: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067f976: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67f97bu); f_005f5f50();
    /* 0067f97b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0067f97e: jmp 0x67f987 */ goto L_0067f987;
L_0067f980:; BB(0x0067f980);
    /* 0067f980: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0067f987:; BB(0x0067f987);
    /* 0067f987: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067f98a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067f98d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067f994: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f997: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067f99a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067f99d: mov dword ptr [edx + ecx*4 + 0x198], eax */ W32((u32)(r_edx+r_ecx*4+0x198u), r_eax);
L_0067f9a4:; BB(0x0067f9a4);
    /* 0067f9a4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f9a7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067f9aa: mov eax, dword ptr [edx + ecx*4 + 0x198] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067f9b1: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067f9b4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0067f9b7: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0067f9ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f9bd: add eax, 0x249f45 */ {  u32 a = r_eax; u32 b = 0x249f45u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067f9c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067f9c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067f9c6: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067f9c9: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067f9d0: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67f9d5u); f_005eaf00();
    /* 0067f9d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f9d7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67f9dcu); f_0062fbf0();
    /* 0067f9dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f9df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067f9e1: je 0x67f9f7 */ if (fZ) goto L_0067f9f7;
L_0067f9e3:; BB(0x0067f9e3);
    /* 0067f9e3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f9e5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67f9eau); f_0062fbf0();
    /* 0067f9ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067f9ed: add eax, 0xe6 */ {  u32 a = r_eax; u32 b = 0xe6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067f9f2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0067f9f5: jmp 0x67fa0b */ goto L_0067fa0b;
L_0067f9f7:; BB(0x0067f9f7);
    /* 0067f9f7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0067f9f9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67f9feu); f_0062fbf0();
    /* 0067f9fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa01: mov ecx, 0xe6 */ r_ecx = 0xe6u;
    /* 0067fa06: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067fa08: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0067fa0b:; BB(0x0067fa0b);
    /* 0067fa0b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0067fa11: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0067fa14: call 0x5f8570 */ r_esp -= 4; W32(r_esp, 0x67fa19u); f_005f8570();
    /* 0067fa19: mov esi, eax */ r_esi = r_eax;
    /* 0067fa1b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa1e: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0067fa21: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa23: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fa28u); f_0062fbf0();
    /* 0067fa28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa2b: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067fa2e: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067fa30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa31: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067fa34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa38: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fa3b: mov eax, dword ptr [edx + ecx*4 + 0x198] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067fa42: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa45: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fa48: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067fa4f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067fa51: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0067fa54: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67fa56u); call_ind(t); }
    /* 0067fa56: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa58: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fa5du); f_0062fbf0();
    /* 0067fa5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fa60: add eax, 0x7c6 */ {  u32 a = r_eax; u32 b = 0x7c6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067fa65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fa66: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa69: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fa6c: mov edx, dword ptr [ecx + eax*4 + 0x198] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0067fa73: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa76: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fa79: mov ecx, dword ptr [ecx + eax*4 + 0x198] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0067fa80: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067fa82: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067fa85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67fa87u); call_ind(t); }
    /* 0067fa87: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa8a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fa8d: mov eax, dword ptr [edx + ecx*4 + 0x198] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067fa94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fa97: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fa9a: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067faa1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067faa3: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0067faa6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67faa8u); call_ind(t); }
    /* 0067faa8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067faab: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067faae: mov edx, dword ptr [ecx + eax*4 + 0x198] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0067fab5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fab8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fabb: mov ecx, dword ptr [ecx + eax*4 + 0x198] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0067fac2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067fac4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067fac7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67fac9u); call_ind(t); }
    /* 0067fac9: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0067facb: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fad0u); f_0062fbf0();
    /* 0067fad0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fad3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fad6: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fad9: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067fae0: mov dword ptr [ecx + 0x178], eax */ W32((u32)(r_ecx+0x178u), r_eax);
    /* 0067fae6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fae8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67faedu); f_0062fbf0();
    /* 0067faed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067faf0: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0067faf4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067faf7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fafa: mov eax, dword ptr [ecx + eax*4 + 0x198] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x198u));
    /* 0067fb01: mov dword ptr [eax + 0x184], edx */ W32((u32)(r_eax+0x184u), r_edx);
    /* 0067fb07: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fb0a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fb0d: mov eax, dword ptr [edx + ecx*4 + 0x198] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067fb14: mov dword ptr [eax + 0x188], 0x1e */ W32((u32)(r_eax+0x188u), 0x1eu);
    /* 0067fb1e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fb20: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fb25u); f_0062fbf0();
    /* 0067fb25: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fb28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fb29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fb2c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fb2f: mov eax, dword ptr [edx + ecx*4 + 0x198] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067fb36: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fb39: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fb3c: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0067fb43: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067fb45: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0067fb4b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67fb4du); call_ind(t); }
    /* 0067fb4d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fb4f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67fb54u); f_00686d82();
    /* 0067fb54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fb57: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0067fb5a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067fb61: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fb65: je 0x67fb74 */ if (fZ) goto L_0067fb74;
L_0067fb67:; BB(0x0067fb67);
    /* 0067fb67: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067fb6a: call 0x6012f0 */ r_esp -= 4; W32(r_esp, 0x67fb6fu); f_006012f0();
    /* 0067fb6f: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0067fb72: jmp 0x67fb7b */ goto L_0067fb7b;
L_0067fb74:; BB(0x0067fb74);
    /* 0067fb74: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_0067fb7b:; BB(0x0067fb7b);
    /* 0067fb7b: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067fb7e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067fb81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067fb88: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067fb8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fb8c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fb8f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fb92: mov ecx, dword ptr [eax + edx*4 + 0x198] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x198u));
    /* 0067fb99: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67fb9eu); f_005f5d50();
    /* 0067fb9e: jmp 0x67f933 */ goto L_0067f933;
L_0067fba3:; BB(0x0067fba3);
    /* 0067fba3: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0067fbaa: jmp 0x67fbb5 */ goto L_0067fbb5;
L_0067fbac:; BB(0x0067fbac);
    /* 0067fbac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fbaf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067fbb2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0067fbb5:; BB(0x0067fbb5);
    /* 0067fbb5: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fbb9: jge 0x67fd55 */ if ((fS==fO)) goto L_0067fd55;
L_0067fbbf:; BB(0x0067fbbf);
    /* 0067fbbf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fbc2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fbc5: cmp dword ptr [eax + edx*4 + 0x1c8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbcd: jne 0x67fc1d */ if (!fZ) goto L_0067fc1d;
L_0067fbcf:; BB(0x0067fbcf);
    /* 0067fbcf: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fbd4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67fbd9u); f_00686d82();
    /* 0067fbd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fbdc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0067fbdf: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067fbe6: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fbea: je 0x67fbf9 */ if (fZ) goto L_0067fbf9;
L_0067fbec:; BB(0x0067fbec);
    /* 0067fbec: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067fbef: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67fbf4u); f_005f5f50();
    /* 0067fbf4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0067fbf7: jmp 0x67fc00 */ goto L_0067fc00;
L_0067fbf9:; BB(0x0067fbf9);
    /* 0067fbf9: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0067fc00:; BB(0x0067fc00);
    /* 0067fc00: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067fc03: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0067fc06: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067fc0d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fc10: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fc13: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067fc16: mov dword ptr [eax + edx*4 + 0x1c8], ecx */ W32((u32)(r_eax+r_edx*4+0x1c8u), r_ecx);
L_0067fc1d:; BB(0x0067fc1d);
    /* 0067fc1d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fc20: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fc23: mov ecx, dword ptr [eax + edx*4 + 0x1c8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1c8u));
    /* 0067fc2a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fc2d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0067fc30: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0067fc33: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fc36: add ecx, 0x249f51 */ {  u32 a = r_ecx; u32 b = 0x249f51u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067fc3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc3d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fc40: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fc43: mov ecx, dword ptr [eax + edx*4 + 0x1c8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1c8u));
    /* 0067fc4a: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67fc4fu); f_005eaf00();
    /* 0067fc4f: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc54: push 0xffffff6a */ { u32 v = 0xffffff6au; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc59: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x67fc5eu); f_0062fc30();
    /* 0067fc5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fc65: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fc68: mov eax, dword ptr [edx + ecx*4 + 0x1c8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0067fc6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fc72: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fc75: mov ecx, dword ptr [edx + ecx*4 + 0x1c8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0067fc7c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067fc7e: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0067fc81: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67fc83u); call_ind(t); }
    /* 0067fc83: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc85: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fc8au); f_0062fbf0();
    /* 0067fc8a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fc8d: add eax, 0x7c6 */ {  u32 a = r_eax; u32 b = 0x7c6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067fc92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fc93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fc96: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fc99: mov edx, dword ptr [ecx + eax*4 + 0x1c8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0067fca0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fca3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fca6: mov ecx, dword ptr [ecx + eax*4 + 0x1c8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0067fcad: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067fcaf: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0067fcb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67fcb4u); call_ind(t); }
    /* 0067fcb4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fcb7: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fcba: mov eax, dword ptr [edx + ecx*4 + 0x1c8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0067fcc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fcc4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fcc7: mov ecx, dword ptr [edx + ecx*4 + 0x1c8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0067fcce: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067fcd0: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0067fcd3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67fcd5u); call_ind(t); }
    /* 0067fcd5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fcd8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fcdb: mov edx, dword ptr [ecx + eax*4 + 0x1c8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0067fce2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fce5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fce8: mov ecx, dword ptr [ecx + eax*4 + 0x1c8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 0067fcef: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067fcf1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0067fcf4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67fcf6u); call_ind(t); }
    /* 0067fcf6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fcf8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fcfdu); f_0062fbf0();
    /* 0067fcfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd00: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067fd03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fd06: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fd09: mov ecx, dword ptr [edx + ecx*4 + 0x1c8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0067fd10: mov dword ptr [ecx + 0x178], eax */ W32((u32)(r_ecx+0x178u), r_eax);
    /* 0067fd16: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd18: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fd1du); f_0062fbf0();
    /* 0067fd1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd20: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fd23: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fd26: mov edx, dword ptr [ecx + edx*4 + 0x1c8] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x1c8u));
    /* 0067fd2d: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
    /* 0067fd33: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd35: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fd3au); f_0062fbf0();
    /* 0067fd3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fd40: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fd43: mov ecx, dword ptr [edx + ecx*4 + 0x1c8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 0067fd4a: mov dword ptr [ecx + 0x188], eax */ W32((u32)(r_ecx+0x188u), r_eax);
    /* 0067fd50: jmp 0x67fbac */ goto L_0067fbac;
L_0067fd55:; BB(0x0067fd55);
    /* 0067fd55: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0067fd5c: jmp 0x67fd67 */ goto L_0067fd67;
L_0067fd5e:; BB(0x0067fd5e);
    /* 0067fd5e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fd61: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067fd64: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0067fd67:; BB(0x0067fd67);
    /* 0067fd67: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067fd6b: jge 0x67feea */ if ((fS==fO)) goto L_0067feea;
L_0067fd71:; BB(0x0067fd71);
    /* 0067fd71: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fd74: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fd77: cmp dword ptr [ecx + eax*4 + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd7f: jne 0x67fdcf */ if (!fZ) goto L_0067fdcf;
L_0067fd81:; BB(0x0067fd81);
    /* 0067fd81: push 0x190 */ { u32 v = 0x190u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fd86: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67fd8bu); f_00686d82();
    /* 0067fd8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fd8e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0067fd91: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0067fd98: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067fd9c: je 0x67fdab */ if (fZ) goto L_0067fdab;
L_0067fd9e:; BB(0x0067fd9e);
    /* 0067fd9e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067fda1: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x67fda6u); f_005f5f50();
    /* 0067fda6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067fda9: jmp 0x67fdb2 */ goto L_0067fdb2;
L_0067fdab:; BB(0x0067fdab);
    /* 0067fdab: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0067fdb2:; BB(0x0067fdb2);
    /* 0067fdb2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0067fdb5: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0067fdb8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067fdbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fdc2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fdc5: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067fdc8: mov dword ptr [ecx + eax*4 + 0x1f8], edx */ W32((u32)(r_ecx+r_eax*4+0x1f8u), r_edx);
L_0067fdcf:; BB(0x0067fdcf);
    /* 0067fdcf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fdd2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fdd5: mov edx, dword ptr [ecx + eax*4 + 0x1f8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1f8u));
    /* 0067fddc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fddf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0067fde2: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0067fde5: push 0x249f5d */ { u32 v = 0x249f5du; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdea: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fded: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fdf0: mov ecx, dword ptr [eax + edx*4 + 0x1f8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1f8u));
    /* 0067fdf7: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x67fdfcu); f_005eaf00();
    /* 0067fdfc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fdfe: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fe03u); f_0062fbf0();
    /* 0067fe03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe06: add eax, 0x7c6 */ {  u32 a = r_eax; u32 b = 0x7c6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067fe0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe0c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fe0f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fe12: mov eax, dword ptr [edx + ecx*4 + 0x1f8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1f8u));
    /* 0067fe19: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fe1c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fe1f: mov ecx, dword ptr [edx + ecx*4 + 0x1f8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1f8u));
    /* 0067fe26: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067fe28: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0067fe2b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67fe2du); call_ind(t); }
    /* 0067fe2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fe30: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fe33: mov edx, dword ptr [ecx + eax*4 + 0x1f8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1f8u));
    /* 0067fe3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fe3d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fe40: mov ecx, dword ptr [ecx + eax*4 + 0x1f8] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x1f8u));
    /* 0067fe47: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067fe49: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0067fe4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67fe4eu); call_ind(t); }
    /* 0067fe4e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fe51: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fe54: mov eax, dword ptr [edx + ecx*4 + 0x1f8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1f8u));
    /* 0067fe5b: mov dword ptr [eax + 0x188], 0x1e */ W32((u32)(r_eax+0x188u), 0x1eu);
    /* 0067fe65: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe67: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x67fe6cu); f_0062fbf0();
    /* 0067fe6c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe70: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fe73: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fe76: mov eax, dword ptr [edx + ecx*4 + 0x1f8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1f8u));
    /* 0067fe7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fe80: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fe83: mov ecx, dword ptr [edx + ecx*4 + 0x1f8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1f8u));
    /* 0067fe8a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067fe8c: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0067fe92: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67fe94u); call_ind(t); }
    /* 0067fe94: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067fe96: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x67fe9bu); f_00686d82();
    /* 0067fe9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067fe9e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067fea1: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0067fea8: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067feac: je 0x67febb */ if (fZ) goto L_0067febb;
L_0067feae:; BB(0x0067feae);
    /* 0067feae: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0067feb1: call 0x6012f0 */ r_esp -= 4; W32(r_esp, 0x67feb6u); f_006012f0();
    /* 0067feb6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0067feb9: jmp 0x67fec2 */ goto L_0067fec2;
L_0067febb:; BB(0x0067febb);
    /* 0067febb: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0067fec2:; BB(0x0067fec2);
    /* 0067fec2: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0067fec5: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067fec8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067fecf: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0067fed2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067fed3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067fed6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fed9: mov ecx, dword ptr [eax + edx*4 + 0x1f8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1f8u));
    /* 0067fee0: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x67fee5u); f_005f5d50();
    /* 0067fee5: jmp 0x67fd5e */ goto L_0067fd5e;
L_0067feea:; BB(0x0067feea);
    /* 0067feea: push 0xffffff38 */ { u32 v = 0xffffff38u; r_esp -= 4; W32(r_esp, v); }
    /* 0067feef: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fef2: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0067fef8: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067fefb: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0067ff01: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ff03: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0067ff06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ff08u); call_ind(t); }
    /* 0067ff08: push 0xfffffea2 */ { u32 v = 0xfffffea2u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ff0d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ff10: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 0067ff16: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ff19: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 0067ff1f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ff21: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0067ff24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ff26u); call_ind(t); }
    /* 0067ff26: push 0xfffffe0c */ { u32 v = 0xfffffe0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ff2b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ff2e: mov edx, dword ptr [ecx + 0x200] */ r_edx = R32((u32)(r_ecx+0x200u));
    /* 0067ff34: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ff37: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 0067ff3d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0067ff3f: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0067ff42: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67ff44u); call_ind(t); }
    /* 0067ff44: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0067ff4b: jmp 0x67ff56 */ goto L_0067ff56;
L_0067ff4d:; BB(0x0067ff4d);
    /* 0067ff4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067ff50: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ff53: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0067ff56:; BB(0x0067ff56);
    /* 0067ff56: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ff5a: jge 0x67ff81 */ if ((fS==fO)) goto L_0067ff81;
L_0067ff5c:; BB(0x0067ff5c);
    /* 0067ff5c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067ff5f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ff62: mov ecx, dword ptr [eax + edx*4 + 0x1f8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1f8u));
    /* 0067ff69: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067ff6c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0067ff6f: mov edx, dword ptr [eax + edx*4 + 0x1f8] */ r_edx = R32((u32)(r_eax+r_edx*4+0x1f8u));
    /* 0067ff76: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0067ff78: mov ecx, edx */ r_ecx = r_edx;
    /* 0067ff7a: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0067ff7d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x67ff7fu); call_ind(t); }
    /* 0067ff7f: jmp 0x67ff4d */ goto L_0067ff4d;
L_0067ff81:; BB(0x0067ff81);
    /* 0067ff81: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067ff84: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067ff8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067ff8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067ff8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067ff8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0067ff90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067ff91: ret  */ FN_RET(0x0067f900); r_esp += 4; return;
}

void f_0067ffa0(void) /* sub_67FFA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0067ffa0);
    /* 0067ffa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffa1: mov ebp, esp */ r_ebp = r_esp;
    /* 0067ffa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffa5: push 0x6adcd3 */ { u32 v = 0x6adcd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067ffb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffb1: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067ffb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0067ffb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067ffbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067ffbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0067ffc5: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0067ffc8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067ffcf: jmp 0x67ffda */ goto L_0067ffda;
L_0067ffd1:; BB(0x0067ffd1);
    /* 0067ffd1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ffd4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067ffd7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0067ffda:; BB(0x0067ffda);
    /* 0067ffda: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067ffde: jge 0x68001f */ if ((fS==fO)) goto L_0068001f;
L_0067ffe0:; BB(0x0067ffe0);
    /* 0067ffe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffe2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067ffe5: add ecx, 0x249f45 */ {  u32 a = r_ecx; u32 b = 0x249f45u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067ffeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067ffec: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0067fff1: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0067fff7: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0067fffa: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x67ffffu); f_006044b0();
    /* 0067ffff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680001: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680004: add eax, 0x249f51 */ {  u32 a = r_eax; u32 b = 0x249f51u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00680009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068000a: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0068000f: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00680015: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00680018: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x68001du); f_006044b0();
    /* 0068001d: jmp 0x67ffd1 */ goto L_0067ffd1;
L_0068001f:; BB(0x0068001f);
    /* 0068001f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680021: push 0x249f5d */ { u32 v = 0x249f5du; r_esp -= 4; W32(r_esp, v); }
    /* 00680026: push 0x20584554 */ { u32 v = 0x20584554u; r_esp -= 4; W32(r_esp, v); }
    /* 0068002b: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00680031: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00680034: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x680039u); f_006044b0();
    /* 00680039: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068003b: push 0x1f69 */ { u32 v = 0x1f69u; r_esp -= 4; W32(r_esp, v); }
    /* 00680040: push 0x20564157 */ { u32 v = 0x20564157u; r_esp -= 4; W32(r_esp, v); }
    /* 00680045: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0068004a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0068004d: call 0x6044b0 */ r_esp -= 4; W32(r_esp, 0x680052u); f_006044b0();
    /* 00680052: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00680055: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00680058: cmp dword ptr [ebp - 0x44], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0068005c: ja 0x680460 */ if ((!fC&&!fZ)) goto L_00680460;
L_00680062:; BB(0x00680062);
    /* 00680062: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00680065: jmp dword ptr [edx*4 + 0x680474] */ { u32 t = R32((u32)(r_edx*4+0x680474u)); switch (t) { case 0x68006cu: goto L_0068006c; case 0x680098u: goto L_00680098; case 0x6803a0u: goto L_006803a0; case 0x680453u: goto L_00680453; default: UNSUP(0x00680065, "jump table entry is not a known target"); } }
L_0068006c:; BB(0x0068006c);
    /* 0068006c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068006f: call 0x67f900 */ r_esp -= 4; W32(r_esp, 0x680074u); f_0067f900();
    /* 00680074: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00680076: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00680078: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068007b: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00680081: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680084: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0068008a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068008c: mov ecx, eax */ r_ecx = r_eax;
    /* 0068008e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00680091: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680093u); call_ind(t); }
    /* 00680093: jmp 0x680460 */ goto L_00680460;
L_00680098:; BB(0x00680098);
    /* 00680098: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068009a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068009d: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 006800a3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006800a6: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 006800ac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006800ae: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006800b1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6800b3u); call_ind(t); }
    /* 006800b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006800b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006800b6: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 006800bc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006800bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006800c0: fld1  */ FPUSH(1.0);
    /* 006800c2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006800c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006800c7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006800c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006800cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006800cd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006800d0: mov edx, dword ptr [ecx + 0x2a0] */ r_edx = R32((u32)(r_ecx+0x2a0u));
    /* 006800d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006800d7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006800dc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006800de: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006800e4: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006800ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6800ecu); call_ind(t); }
    /* 006800ec: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006800f3: jmp 0x6800fe */ goto L_006800fe;
L_006800f5:; BB(0x006800f5);
    /* 006800f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006800f8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006800fb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_006800fe:; BB(0x006800fe);
    /* 006800fe: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00680102: jge 0x680189 */ if ((fS==fO)) goto L_00680189;
L_00680108:; BB(0x00680108);
    /* 00680108: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068010a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x68010fu); f_0062fbf0();
    /* 0068010f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680112: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00680115: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680118: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068011b: mov edx, dword ptr [ecx + edx*4 + 0x1f8] */ r_edx = R32((u32)(r_ecx+r_edx*4+0x1f8u));
    /* 00680122: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
    /* 00680128: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068012a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x68012fu); f_00686d82();
    /* 0068012f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680132: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00680135: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068013c: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680140: je 0x68015a */ if (fZ) goto L_0068015a;
L_00680142:; BB(0x00680142);
    /* 00680142: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680144: push 0x1ea */ { u32 v = 0x1eau; r_esp -= 4; W32(r_esp, v); }
    /* 00680149: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0068014b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068014d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00680150: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x680155u); f_00606e60();
    /* 00680155: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00680158: jmp 0x680161 */ goto L_00680161;
L_0068015a:; BB(0x0068015a);
    /* 0068015a: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00680161:; BB(0x00680161);
    /* 00680161: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00680164: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00680167: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068016e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00680171: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680172: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680175: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680178: mov ecx, dword ptr [eax + edx*4 + 0x1f8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1f8u));
    /* 0068017f: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x680184u); f_005f6050();
    /* 00680184: jmp 0x6800f5 */ goto L_006800f5;
L_00680189:; BB(0x00680189);
    /* 00680189: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00680190: jmp 0x68019b */ goto L_0068019b;
L_00680192:; BB(0x00680192);
    /* 00680192: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680195: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00680198: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0068019b:; BB(0x0068019b);
    /* 0068019b: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068019f: jge 0x680239 */ if ((fS==fO)) goto L_00680239;
L_006801a5:; BB(0x006801a5);
    /* 006801a5: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006801a7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6801acu); f_00686d82();
    /* 006801ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006801af: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006801b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006801b9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006801bd: je 0x6801ea */ if (fZ) goto L_006801ea;
L_006801bf:; BB(0x006801bf);
    /* 006801bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006801c1: push -0x64 */ { u32 v = 0xffffff9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006801c3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006801c9: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006801cc: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x6801d1u); f_005f8550();
    /* 006801d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006801d2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x6801d7u); f_0062fbf0();
    /* 006801d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006801da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006801db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006801dd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006801e0: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x6801e5u); f_00606e60();
    /* 006801e5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006801e8: jmp 0x6801f1 */ goto L_006801f1;
L_006801ea:; BB(0x006801ea);
    /* 006801ea: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006801f1:; BB(0x006801f1);
    /* 006801f1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006801f4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006801f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006801fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00680201: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00680202: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680205: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680208: mov ecx, dword ptr [eax + edx*4 + 0x198] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x198u));
    /* 0068020f: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x680214u); f_005f6050();
    /* 00680214: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00680216: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x68021bu); f_0062fbf0();
    /* 0068021b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068021e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00680221: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680224: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680227: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 0068022e: mov dword ptr [ecx + 0x184], eax */ W32((u32)(r_ecx+0x184u), r_eax);
    /* 00680234: jmp 0x680192 */ goto L_00680192;
L_00680239:; BB(0x00680239);
    /* 00680239: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068023c: mov eax, dword ptr [edx + 0x1c4] */ r_eax = R32((u32)(r_edx+0x1c4u));
    /* 00680242: mov dword ptr [eax + 0x184], 0xc */ W32((u32)(r_eax+0x184u), 0xcu);
    /* 0068024c: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068024e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x680253u); f_00686d82();
    /* 00680253: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680256: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00680259: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00680260: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680264: je 0x680299 */ if (fZ) goto L_00680299;
L_00680266:; BB(0x00680266);
    /* 00680266: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680268: push -0x64 */ { u32 v = 0xffffff9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068026a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00680270: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00680273: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x680278u); f_005f8550();
    /* 00680278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680279: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x68027eu); f_0062fbf0();
    /* 0068027e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00680281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680282: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680285: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0068028b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068028c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068028f: call 0x606e60 */ r_esp -= 4; W32(r_esp, 0x680294u); f_00606e60();
    /* 00680294: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00680297: jmp 0x6802a0 */ goto L_006802a0;
L_00680299:; BB(0x00680299);
    /* 00680299: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_006802a0:; BB(0x006802a0);
    /* 006802a0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006802a3: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006802a6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006802ad: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006802b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006802b1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006802b4: mov ecx, dword ptr [eax + 0x1c4] */ r_ecx = R32((u32)(r_eax+0x1c4u));
    /* 006802ba: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x6802bfu); f_005f6050();
    /* 006802bf: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006802c1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6802c6u); f_00686d82();
    /* 006802c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006802c9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006802cc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006802d3: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006802d7: je 0x6802e8 */ if (fZ) goto L_006802e8;
L_006802d9:; BB(0x006802d9);
    /* 006802d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006802db: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006802de: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x6802e3u); f_00600a70();
    /* 006802e3: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006802e6: jmp 0x6802ef */ goto L_006802ef;
L_006802e8:; BB(0x006802e8);
    /* 006802e8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006802ef:; BB(0x006802ef);
    /* 006802ef: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 006802f2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006802f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006802fc: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006802ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680300: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680303: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x680308u); f_005f5d50();
    /* 00680308: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0068030f: jmp 0x68031a */ goto L_0068031a;
L_00680311:; BB(0x00680311);
    /* 00680311: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00680314: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00680317: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0068031a:; BB(0x0068031a);
    /* 0068031a: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068031e: jge 0x68039b */ if ((fS==fO)) goto L_0068039b;
L_00680320:; BB(0x00680320);
    /* 00680320: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00680322: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x680327u); f_00686d82();
    /* 00680327: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068032a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0068032d: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00680334: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00680338: je 0x680349 */ if (fZ) goto L_00680349;
L_0068033a:; BB(0x0068033a);
    /* 0068033a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068033c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068033f: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x680344u); f_006010a0();
    /* 00680344: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00680347: jmp 0x680350 */ goto L_00680350;
L_00680349:; BB(0x00680349);
    /* 00680349: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00680350:; BB(0x00680350);
    /* 00680350: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00680353: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00680356: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068035d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00680360: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00680363: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00680366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00680367: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068036a: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068036d: mov ecx, dword ptr [edx + ecx*4 + 0x1c8] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 00680374: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x680379u); f_005f5d50();
    /* 00680379: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068037b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068037e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680381: mov edx, dword ptr [ecx + eax*4 + 0x1c8] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x1c8u));
    /* 00680388: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00680389: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068038c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068038e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00680391: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00680394: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680396u); call_ind(t); }
    /* 00680396: jmp 0x680311 */ goto L_00680311;
L_0068039b:; BB(0x0068039b);
    /* 0068039b: jmp 0x680460 */ goto L_00680460;
L_006803a0:; BB(0x006803a0);
    /* 006803a0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006803a3: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6803a8u); f_005eb610();
    /* 006803a8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006803ab: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006803ae: je 0x68041b */ if (fZ) goto L_0068041b;
L_006803b0:; BB(0x006803b0);
    /* 006803b0: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006803b3: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6803b8u); f_005eb610();
    /* 006803b8: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006803bb: sub edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006803be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006803bf: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006803c2: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x6803c7u); f_005eb5d0();
    /* 006803c7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006803ce: jmp 0x6803d9 */ goto L_006803d9;
L_006803d0:; BB(0x006803d0);
    /* 006803d0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006803d3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006803d6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006803d9:; BB(0x006803d9);
    /* 006803d9: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006803dd: jge 0x6803fc */ if ((fS==fO)) goto L_006803fc;
L_006803df:; BB(0x006803df);
    /* 006803df: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006803e2: call 0x5eb610 */ r_esp -= 4; W32(r_esp, 0x6803e7u); f_005eb610();
    /* 006803e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006803e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006803eb: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006803ee: mov ecx, dword ptr [edx + ecx*4 + 0x198] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 006803f5: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x6803fau); f_005eb5d0();
    /* 006803fa: jmp 0x6803d0 */ goto L_006803d0;
L_006803fc:; BB(0x006803fc);
    /* 006803fc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006803fe: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680401: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 00680407: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068040a: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00680410: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00680412: mov ecx, eax */ r_ecx = r_eax;
    /* 00680414: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00680417: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680419u); call_ind(t); }
    /* 00680419: jmp 0x680436 */ goto L_00680436;
L_0068041b:; BB(0x0068041b);
    /* 0068041b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0068041d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680420: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 00680426: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680429: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0068042f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00680431: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00680434: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680436u); call_ind(t); }
L_00680436:; BB(0x00680436);
    /* 00680436: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00680438: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068043b: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 00680441: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00680444: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 0068044a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0068044c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0068044f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x680451u); call_ind(t); }
    /* 00680451: jmp 0x680460 */ goto L_00680460;
L_00680453:; BB(0x00680453);
    /* 00680453: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00680455: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0068045b: call 0x650550 */ r_esp -= 4; W32(r_esp, 0x680460u); f_00650550();
L_00680460:; BB(0x00680460);
    /* 00680460: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00680463: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068046a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068046b: mov esp, ebp */ r_esp = r_ebp;
    /* 0068046d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068046e: ret 4 */ FN_RET(0x0067ffa0); r_esp += 8; return;
}


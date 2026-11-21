#include "protos.h"

void f_0068e3c0(void) /* sub_68E3C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e3c0);
    /* 0068e3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e3c3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e3c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068e3c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e3cc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068e3cf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068e3d2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e3d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e3d8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068e3da: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0068e3dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e3e0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068e3e2: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068e3e6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e3e8: jne 0x68e3f5 */ if (!fZ) goto L_0068e3f5;
L_0068e3ea:; BB(0x0068e3ea);
    /* 0068e3ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e3ed: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068e3ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e3f2: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_0068e3f5:; BB(0x0068e3f5);
    /* 0068e3f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e3f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e3fb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e3fe: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068e401: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e404: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e407: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e40a: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e40d: jne 0x68e41d */ if (!fZ) goto L_0068e41d;
L_0068e40f:; BB(0x0068e40f);
    /* 0068e40f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e412: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e415: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e418: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068e41b: jmp 0x68e44f */ goto L_0068e44f;
L_0068e41d:; BB(0x0068e41d);
    /* 0068e41d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e420: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e423: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068e426: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068e429: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e42c: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e42e: jne 0x68e443 */ if (!fZ) goto L_0068e443;
L_0068e430:; BB(0x0068e430);
    /* 0068e430: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e433: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e436: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068e439: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e43c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e43f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068e441: jmp 0x68e44f */ goto L_0068e44f;
L_0068e443:; BB(0x0068e443);
    /* 0068e443: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e446: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068e449: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e44c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_0068e44f:; BB(0x0068e44f);
    /* 0068e44f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e452: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e455: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068e457: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e45a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e45d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068e460: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e462: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e463: ret 4 */ FN_RET(0x0068e3c0); r_esp += 8; return;
}

void f_0068e470(void) /* sub_68E470 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e470);
    /* 0068e470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e471: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e473: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e476: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068e479: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e47c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068e47e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068e481: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e484: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e487: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068e48a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0068e48c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e48f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068e492: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068e496: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e498: jne 0x68e4a6 */ if (!fZ) goto L_0068e4a6;
L_0068e49a:; BB(0x0068e49a);
    /* 0068e49a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e49d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068e4a0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e4a3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_0068e4a6:; BB(0x0068e4a6);
    /* 0068e4a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e4a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e4ac: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e4af: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068e4b2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e4b5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e4b8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e4bb: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e4be: jne 0x68e4ce */ if (!fZ) goto L_0068e4ce;
L_0068e4c0:; BB(0x0068e4c0);
    /* 0068e4c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e4c3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e4c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e4c9: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068e4cc: jmp 0x68e4fb */ goto L_0068e4fb;
L_0068e4ce:; BB(0x0068e4ce);
    /* 0068e4ce: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e4d1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e4d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e4d7: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e4da: jne 0x68e4ea */ if (!fZ) goto L_0068e4ea;
L_0068e4dc:; BB(0x0068e4dc);
    /* 0068e4dc: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e4df: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e4e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e4e5: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0068e4e8: jmp 0x68e4fb */ goto L_0068e4fb;
L_0068e4ea:; BB(0x0068e4ea);
    /* 0068e4ea: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e4ed: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e4f0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068e4f3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068e4f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e4f9: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0068e4fb:; BB(0x0068e4fb);
    /* 0068e4fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e4fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e501: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0068e504: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e507: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e50a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068e50d: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e50f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e510: ret 4 */ FN_RET(0x0068e470); r_esp += 8; return;
}

void f_0068e520(void) /* sub_68E520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e520);
    /* 0068e520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e521: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068e525: push 0x6ae1d0 */ { u32 v = 0x6ae1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e52a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068e530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e531: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e532: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e535: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e536: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e537: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e538: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068e53d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068e53f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e540: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068e543: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068e549: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068e54c: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0068e54f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e551: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0068e554: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e557: call 0x68ee80 */ r_esp -= 4; W32(r_esp, 0x68e55cu); f_0068ee80();
    /* 0068e55c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068e55f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0068e566: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068e56d: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0068e574: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e577: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0068e57a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068e57d: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0068e580: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e584: je 0x68e596 */ if (fZ) goto L_0068e596;
L_0068e586:; BB(0x0068e586);
    /* 0068e586: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068e589: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e58c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068e58e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068e591: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0068e594: jmp 0x68e59d */ goto L_0068e59d;
L_0068e596:; BB(0x0068e596);
    /* 0068e596: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0068e59d:; BB(0x0068e59d);
    /* 0068e59d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e5a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068e5a3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068e5a6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0068e5ad: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e5b0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068e5b3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0068e5b6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0068e5b9: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0068e5bc: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e5c0: je 0x68e5d2 */ if (fZ) goto L_0068e5d2;
L_0068e5c2:; BB(0x0068e5c2);
    /* 0068e5c2: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0068e5c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068e5c8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068e5ca: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0068e5cd: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0068e5d0: jmp 0x68e5d9 */ goto L_0068e5d9;
L_0068e5d2:; BB(0x0068e5d2);
    /* 0068e5d2: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0068e5d9:; BB(0x0068e5d9);
    /* 0068e5d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e5dc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068e5df: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068e5e2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0068e5e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e5ec: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068e5ef: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0068e5f2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0068e5f5: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0068e5f8: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e5fc: je 0x68e60e */ if (fZ) goto L_0068e60e;
L_0068e5fe:; BB(0x0068e5fe);
    /* 0068e5fe: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0068e601: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068e604: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068e606: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0068e609: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0068e60c: jmp 0x68e615 */ goto L_0068e615;
L_0068e60e:; BB(0x0068e60e);
    /* 0068e60e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0068e615:; BB(0x0068e615);
    /* 0068e615: jmp 0x68e639 */ goto L_0068e639;
L_0068e639:; BB(0x0068e639);
    /* 0068e639: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068e640: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e643: mov byte ptr [eax + 0x34], 1 */ W8((u32)(r_eax+0x34u), 0x1u);
    /* 0068e647: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e64a: mov byte ptr [ecx + 0x35], 0 */ W8((u32)(r_ecx+0x35u), 0x0u);
    /* 0068e64e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e651: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e654: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068e65b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068e65c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068e65d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e65e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e65f: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e661: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e662: ret  */ FN_RET(0x0068e520); r_esp += 4; return;
}

void f_0068e670(void) /* sub_68E670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e670);
    /* 0068e670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e671: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e673: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068e675: push 0x6ae20a */ { u32 v = 0x6ae20au; r_esp -= 4; W32(r_esp, v); }
    /* 0068e67a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068e680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e681: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e682: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e685: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e686: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e687: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068e688: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068e68d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068e68f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e690: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068e693: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068e699: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068e69c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0068e69f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6a3: call 0x68f9d0 */ r_esp -= 4; W32(r_esp, 0x68e6a8u); f_0068f9d0();
    /* 0068e6a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068e6ab: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068e6ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068e6b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e6b8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0068e6bb: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068e6bf: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e6c3: je 0x68e730 */ if (fZ) goto L_0068e730;
L_0068e6c5:; BB(0x0068e6c5);
    /* 0068e6c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e6c8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e6cb: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068e6cd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e6d0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068e6d3: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068e6d6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e6d9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068e6dc: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0068e6df: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e6e2: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e6e5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0068e6e8: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068e6eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e6ec: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0068e6ef: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68e6f5u); call_ind(t); }
    /* 0068e6f5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0068e6f8: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068e6fc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0068e6ff: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068e702: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0068e705: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0068e708: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e70b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e70c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068e70f: call 0x68d530 */ r_esp -= 4; W32(r_esp, 0x68e714u); f_0068d530();
    /* 0068e714: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068e718: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e71b: mov al, byte ptr [ebp + 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0068e71e: mov byte ptr [edx + 0x34], al */ W8((u32)(r_edx+0x34u), (u8)r_eax);
    /* 0068e721: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e724: mov byte ptr [ecx + 0x35], 0 */ W8((u32)(r_ecx+0x35u), 0x0u);
    /* 0068e728: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068e72b: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0068e72e: jmp 0x68e737 */ goto L_0068e737;
L_0068e730:; BB(0x0068e730);
    /* 0068e730: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0068e737:; BB(0x0068e737);
    /* 0068e737: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068e73a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068e73d: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068e741: jmp 0x68e765 */ goto L_0068e765;
L_0068e765:; BB(0x0068e765);
    /* 0068e765: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068e76c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e76f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e772: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068e779: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068e77a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068e77b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068e77c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068e77d: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e77f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e780: ret 0x14 */ FN_RET(0x0068e670); r_esp += 24; return;
}

void f_0068e790(void) /* sub_68E790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e790);
    /* 0068e790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e791: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e793: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e796: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068e799: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e79c: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e79f: jne 0x68e7a7 */ if (!fZ) goto L_0068e7a7;
L_0068e7a1:; BB(0x0068e7a1);
    /* 0068e7a1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e7a7u); call_ind(t); }
L_0068e7a7:; BB(0x0068e7a7);
    /* 0068e7a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e7aa: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068e7ad: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068e7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e7b3: je 0x68e7c0 */ if (fZ) goto L_0068e7c0;
L_0068e7b5:; BB(0x0068e7b5);
    /* 0068e7b5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e7bbu); call_ind(t); }
    /* 0068e7bb: jmp 0x68e848 */ goto L_0068e848;
L_0068e7c0:; BB(0x0068e7c0);
    /* 0068e7c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e7c3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068e7c6: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068e7c9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068e7cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068e7cf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068e7d1: movsx edx, byte ptr [ecx + 0x35] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x35u));
    /* 0068e7d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e7d7: jne 0x68e80f */ if (!fZ) goto L_0068e80f;
L_0068e7d9:; BB(0x0068e7d9);
    /* 0068e7d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e7dc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e7df: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e7e2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068e7e5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068e7e8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068e7ea: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0068e7ed:; BB(0x0068e7ed);
    /* 0068e7ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e7f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e7f2: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068e7f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e7f8: jne 0x68e804 */ if (!fZ) goto L_0068e804;
L_0068e7fa:; BB(0x0068e7fa);
    /* 0068e7fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e7fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068e7ff: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0068e802: jmp 0x68e7ed */ goto L_0068e7ed;
L_0068e804:; BB(0x0068e804);
    /* 0068e804: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e807: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068e80a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068e80d: jmp 0x68e848 */ goto L_0068e848;
L_0068e80f:; BB(0x0068e80f);
    /* 0068e80f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e812: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e815: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e818: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068e81b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e81e: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068e822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e824: jne 0x68e83f */ if (!fZ) goto L_0068e83f;
L_0068e826:; BB(0x0068e826);
    /* 0068e826: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e829: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e82c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0068e82f: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e832: jne 0x68e83f */ if (!fZ) goto L_0068e83f;
L_0068e834:; BB(0x0068e834);
    /* 0068e834: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e837: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e83a: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068e83d: jmp 0x68e80f */ goto L_0068e80f;
L_0068e83f:; BB(0x0068e83f);
    /* 0068e83f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e842: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e845: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_0068e848:; BB(0x0068e848);
    /* 0068e848: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e84a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e84b: ret  */ FN_RET(0x0068e790); r_esp += 4; return;
}

void f_0068e850(void) /* sub_68E850 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e850);
    /* 0068e850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e851: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e853: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e856: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0068e859: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e85c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e85f: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0068e862: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068e865: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068e867: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068e86a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0068e871: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068e874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068e877: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e87b: jne 0x68e883 */ if (!fZ) goto L_0068e883;
L_0068e87d:; BB(0x0068e87d);
    /* 0068e87d: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e883u); call_ind(t); }
L_0068e883:; BB(0x0068e883);
    /* 0068e883: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e886: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068e889: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e88d: je 0x68e897 */ if (fZ) goto L_0068e897;
L_0068e88f:; BB(0x0068e88f);
    /* 0068e88f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068e892: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e895: je 0x68e89d */ if (fZ) goto L_0068e89d;
L_0068e897:; BB(0x0068e897);
    /* 0068e897: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e89du); call_ind(t); }
L_0068e89d:; BB(0x0068e89d);
    /* 0068e89d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068e8a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068e8a2: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8a5: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068e8a8: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068e8ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8ad: je 0x68e947 */ if (fZ) goto L_0068e947;
L_0068e8b3:; BB(0x0068e8b3);
    /* 0068e8b3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e8b6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068e8b9: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0068e8bc: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0068e8c3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068e8c6: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068e8c9: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8cd: jne 0x68e8d5 */ if (!fZ) goto L_0068e8d5;
L_0068e8cf:; BB(0x0068e8cf);
    /* 0068e8cf: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e8d5u); call_ind(t); }
L_0068e8d5:; BB(0x0068e8d5);
    /* 0068e8d5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e8d8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068e8db: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8df: je 0x68e8e9 */ if (fZ) goto L_0068e8e9;
L_0068e8e1:; BB(0x0068e8e1);
    /* 0068e8e1: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068e8e4: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8e7: je 0x68e8ef */ if (fZ) goto L_0068e8ef;
L_0068e8e9:; BB(0x0068e8e9);
    /* 0068e8e9: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e8efu); call_ind(t); }
L_0068e8ef:; BB(0x0068e8ef);
    /* 0068e8ef: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0068e8f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e8f4: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8f7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068e8fa: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 0068e8fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e8ff: je 0x68e947 */ if (fZ) goto L_0068e947;
L_0068e901:; BB(0x0068e901);
    /* 0068e901: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e904: call 0x68f520 */ r_esp -= 4; W32(r_esp, 0x68e909u); f_0068f520();
    /* 0068e909: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e90c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e90f: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0068e912: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0068e915: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068e917: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0068e91a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e91d: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0068e923: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068e926: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068e929: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068e92c: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e930: jne 0x68e938 */ if (!fZ) goto L_0068e938;
L_0068e932:; BB(0x0068e932);
    /* 0068e932: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e938u); call_ind(t); }
L_0068e938:; BB(0x0068e938);
    /* 0068e938: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068e93b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e93e: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068e940: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e943: jmp 0x68e9be */ goto L_0068e9be;
L_0068e947:; BB(0x0068e947);
    /* 0068e947: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e94b: je 0x68e955 */ if (fZ) goto L_0068e955;
L_0068e94d:; BB(0x0068e94d);
    /* 0068e94d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068e950: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e953: je 0x68e95b */ if (fZ) goto L_0068e95b;
L_0068e955:; BB(0x0068e955);
    /* 0068e955: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68e95bu); call_ind(t); }
L_0068e95b:; BB(0x0068e95b);
    /* 0068e95b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068e95e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068e960: cmp ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e963: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0068e966: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0068e969: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0068e96b: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0068e96d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068e970: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068e973: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068e975: je 0x68e9ad */ if (fZ) goto L_0068e9ad;
L_0068e977:; BB(0x0068e977);
    /* 0068e977: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068e97a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068e97d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0068e980: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0068e983: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0068e986: call 0x68edc0 */ r_esp -= 4; W32(r_esp, 0x68e98bu); f_0068edc0();
    /* 0068e98b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0068e98e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0068e991: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068e994: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068e997: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068e99a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068e99b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068e99e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e99f: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 0068e9a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e9a3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0068e9a6: call 0x68ef90 */ r_esp -= 4; W32(r_esp, 0x68e9abu); f_0068ef90();
    /* 0068e9ab: jmp 0x68e947 */ goto L_0068e947;
L_0068e9ad:; BB(0x0068e9ad);
    /* 0068e9ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e9b0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068e9b3: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068e9b5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068e9b8: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0068e9bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0068e9be:; BB(0x0068e9be);
    /* 0068e9be: mov esp, ebp */ r_esp = r_ebp;
    /* 0068e9c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068e9c1: ret 0x14 */ FN_RET(0x0068e850); r_esp += 24; return;
}

void f_0068e9d0(void) /* sub_68E9D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068e9d0);
    /* 0068e9d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068e9d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068e9d3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068e9d6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0068e9d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068e9dc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068e9df: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068e9e2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068e9e5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068e9e8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068e9eb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068e9ee: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068e9f1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068e9f4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068e9f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e9f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068e9fb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068e9fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068e9fe: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068ea01: call 0x68f580 */ r_esp -= 4; W32(r_esp, 0x68ea06u); f_0068f580();
    /* 0068ea06: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068ea09: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068ea0b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ea0e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068ea11: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068ea14: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068ea17: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068ea1a: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0068ea1d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068ea20: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068ea23: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068ea26: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0068ea29: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ea2c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ea2e: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 0068ea32: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ea34: jne 0x68eaad */ if (!fZ) goto L_0068eaad;
L_0068ea36:; BB(0x0068ea36);
    /* 0068ea36: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068ea39: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ea3c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ea3f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068ea42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ea45: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068ea47: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0068ea4a:; BB(0x0068ea4a);
    /* 0068ea4a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ea4d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068ea4f: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068ea53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ea55: jne 0x68ea61 */ if (!fZ) goto L_0068ea61;
L_0068ea57:; BB(0x0068ea57);
    /* 0068ea57: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ea5a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068ea5c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068ea5f: jmp 0x68ea4a */ goto L_0068ea4a;
L_0068ea61:; BB(0x0068ea61);
    /* 0068ea61: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068ea64: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ea67: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0068ea6a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ea6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068ea70: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068ea72: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068ea75: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068ea78: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068ea7b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0068ea7e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ea81: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ea83: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_0068ea86:; BB(0x0068ea86);
    /* 0068ea86: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068ea89: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068ea8c: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068ea90: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ea92: jne 0x68ea9f */ if (!fZ) goto L_0068ea9f;
L_0068ea94:; BB(0x0068ea94);
    /* 0068ea94: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068ea97: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068ea9a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0068ea9d: jmp 0x68ea86 */ goto L_0068ea86;
L_0068ea9f:; BB(0x0068ea9f);
    /* 0068ea9f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068eaa2: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eaa5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068eaa8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0068eaab: jmp 0x68ead0 */ goto L_0068ead0;
L_0068eaad:; BB(0x0068eaad);
    /* 0068eaad: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068eab0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eab3: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0068eab6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068eab9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068eabc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eabf: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0068eac1: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068eac4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068eac7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068eaca: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eacd: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
L_0068ead0:; BB(0x0068ead0);
    /* 0068ead0: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ead2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ead3: ret 4 */ FN_RET(0x0068e9d0); r_esp += 8; return;
}

void f_0068eae0(void) /* sub_68EAE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068eae0);
    /* 0068eae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068eae1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068eae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068eae6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068eae9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eaec: call 0x68f690 */ r_esp -= 4; W32(r_esp, 0x68eaf1u); f_0068f690();
    /* 0068eaf1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eaf4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0068eaf7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eafa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eafd: mov byte ptr [eax + 0x45], 1 */ W8((u32)(r_eax+0x45u), 0x1u);
    /* 0068eb01: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eb04: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eb07: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eb0a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068eb0d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068eb10: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eb13: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eb16: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068eb19: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068eb1c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eb1f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eb22: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0068eb24: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eb27: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eb2a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eb2d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068eb30: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0068eb33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eb36: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0068eb3d: mov esp, ebp */ r_esp = r_ebp;
    /* 0068eb3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068eb40: ret  */ FN_RET(0x0068eae0); r_esp += 4; return;
}

void f_0068eb50(void) /* sub_68EB50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068eb50);
    /* 0068eb50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068eb51: mov ebp, esp */ r_ebp = r_esp;
    /* 0068eb53: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068eb56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068eb59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068eb5c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068eb5f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068eb62: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068eb65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068eb68: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068eb6a: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0068eb6d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068eb70: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068eb72: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068eb76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eb78: jne 0x68eb85 */ if (!fZ) goto L_0068eb85;
L_0068eb7a:; BB(0x0068eb7a);
    /* 0068eb7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068eb7d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068eb7f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068eb82: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_0068eb85:; BB(0x0068eb85);
    /* 0068eb85: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068eb88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068eb8b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068eb8e: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068eb91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068eb94: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eb97: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068eb9a: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eb9d: jne 0x68ebad */ if (!fZ) goto L_0068ebad;
L_0068eb9f:; BB(0x0068eb9f);
    /* 0068eb9f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068eba2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eba5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068eba8: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068ebab: jmp 0x68ebdf */ goto L_0068ebdf;
L_0068ebad:; BB(0x0068ebad);
    /* 0068ebad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ebb0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068ebb3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068ebb6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068ebb9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ebbc: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ebbe: jne 0x68ebd3 */ if (!fZ) goto L_0068ebd3;
L_0068ebc0:; BB(0x0068ebc0);
    /* 0068ebc0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ebc3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ebc6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068ebc9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068ebcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ebcf: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068ebd1: jmp 0x68ebdf */ goto L_0068ebdf;
L_0068ebd3:; BB(0x0068ebd3);
    /* 0068ebd3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ebd6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068ebd9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ebdc: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_0068ebdf:; BB(0x0068ebdf);
    /* 0068ebdf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ebe2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ebe5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068ebe7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ebea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ebed: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068ebf0: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ebf2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ebf3: ret 4 */ FN_RET(0x0068eb50); r_esp += 8; return;
}

void f_0068ec00(void) /* sub_68EC00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068ec00);
    /* 0068ec00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ec01: mov ebp, esp */ r_ebp = r_esp;
    /* 0068ec03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ec06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068ec09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ec0c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ec0e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068ec11: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ec14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec17: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068ec1a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0068ec1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec1f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068ec22: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068ec26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ec28: jne 0x68ec36 */ if (!fZ) goto L_0068ec36;
L_0068ec2a:; BB(0x0068ec2a);
    /* 0068ec2a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec2d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068ec30: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ec33: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_0068ec36:; BB(0x0068ec36);
    /* 0068ec36: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ec3c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ec3f: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0068ec42: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068ec45: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068ec48: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ec4b: cmp ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ec4e: jne 0x68ec5e */ if (!fZ) goto L_0068ec5e;
L_0068ec50:; BB(0x0068ec50);
    /* 0068ec50: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068ec53: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068ec56: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec59: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068ec5c: jmp 0x68ec8b */ goto L_0068ec8b;
L_0068ec5e:; BB(0x0068ec5e);
    /* 0068ec5e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ec61: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068ec64: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ec67: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ec6a: jne 0x68ec7a */ if (!fZ) goto L_0068ec7a;
L_0068ec6c:; BB(0x0068ec6c);
    /* 0068ec6c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ec6f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068ec72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec75: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0068ec78: jmp 0x68ec8b */ goto L_0068ec8b;
L_0068ec7a:; BB(0x0068ec7a);
    /* 0068ec7a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ec7d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068ec80: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068ec83: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068ec86: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec89: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0068ec8b:; BB(0x0068ec8b);
    /* 0068ec8b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec8e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068ec91: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0068ec94: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ec97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ec9a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068ec9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ec9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068eca0: ret 4 */ FN_RET(0x0068ec00); r_esp += 8; return;
}

void f_0068ecb0(void) /* sub_68ECB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068ecb0);
    /* 0068ecb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068ecb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecb5: push 0x6ae24a */ { u32 v = 0x6ae24au; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068ecc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecc1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecc2: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ecc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecc6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecc7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecc8: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068eccd: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068eccf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ecd0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068ecd3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068ecd9: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068ecdc: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0068ecdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ece1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ece3: call 0x68fa30 */ r_esp -= 4; W32(r_esp, 0x68ece8u); f_0068fa30();
    /* 0068ece8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068eceb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068ecee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068ecf5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ecf8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0068ecfb: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068ecff: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ed03: je 0x68ed6b */ if (fZ) goto L_0068ed6b;
L_0068ed05:; BB(0x0068ed05);
    /* 0068ed05: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ed08: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ed0b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0068ed0d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ed10: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068ed13: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068ed16: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ed19: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068ed1c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0068ed1f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ed22: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ed25: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0068ed28: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0068ed2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ed2c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068ed2f: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68ed35u); call_ind(t); }
    /* 0068ed35: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0068ed38: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068ed3c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068ed3f: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068ed42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ed43: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0068ed46: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ed49: call dword ptr [0x6b20f8] */ { u32 t = R32((u32)(0x6b20f8u)); r_esp -= 4; W32(r_esp, 0x68ed4fu); call_ind(t); }
    /* 0068ed4f: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068ed53: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ed56: mov dl, byte ptr [ebp + 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0068ed59: mov byte ptr [ecx + 0x44], dl */ W8((u32)(r_ecx+0x44u), (u8)r_edx);
    /* 0068ed5c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ed5f: mov byte ptr [eax + 0x45], 0 */ W8((u32)(r_eax+0x45u), 0x0u);
    /* 0068ed63: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068ed66: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0068ed69: jmp 0x68ed72 */ goto L_0068ed72;
L_0068ed6b:; BB(0x0068ed6b);
    /* 0068ed6b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0068ed72:; BB(0x0068ed72);
    /* 0068ed72: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068ed75: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0068ed78: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068ed7c: jmp 0x68eda0 */ goto L_0068eda0;
L_0068eda0:; BB(0x0068eda0);
    /* 0068eda0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068eda7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068edaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068edad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068edb4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068edb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068edb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068edb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068edb8: mov esp, ebp */ r_esp = r_ebp;
    /* 0068edba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068edbb: ret 0x14 */ FN_RET(0x0068ecb0); r_esp += 24; return;
}

void f_0068edc0(void) /* sub_68EDC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068edc0);
    /* 0068edc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068edc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068edc3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068edc6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068edc9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068edcc: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068edcf: jne 0x68edd7 */ if (!fZ) goto L_0068edd7;
L_0068edd1:; BB(0x0068edd1);
    /* 0068edd1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68edd7u); call_ind(t); }
L_0068edd7:; BB(0x0068edd7);
    /* 0068edd7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068edda: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eddd: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068ede1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ede3: je 0x68edf0 */ if (fZ) goto L_0068edf0;
L_0068ede5:; BB(0x0068ede5);
    /* 0068ede5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68edebu); call_ind(t); }
    /* 0068edeb: jmp 0x68ee78 */ goto L_0068ee78;
L_0068edf0:; BB(0x0068edf0);
    /* 0068edf0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068edf3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068edf6: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068edf9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0068edfc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068edff: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ee01: movsx edx, byte ptr [ecx + 0x45] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x45u));
    /* 0068ee05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ee07: jne 0x68ee3f */ if (!fZ) goto L_0068ee3f;
L_0068ee09:; BB(0x0068ee09);
    /* 0068ee09: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ee0c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ee0f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068ee12: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068ee15: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068ee18: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0068ee1a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0068ee1d:; BB(0x0068ee1d);
    /* 0068ee1d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ee20: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068ee22: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068ee26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ee28: jne 0x68ee34 */ if (!fZ) goto L_0068ee34;
L_0068ee2a:; BB(0x0068ee2a);
    /* 0068ee2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ee2d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068ee2f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0068ee32: jmp 0x68ee1d */ goto L_0068ee1d;
L_0068ee34:; BB(0x0068ee34);
    /* 0068ee34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ee37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ee3a: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068ee3d: jmp 0x68ee78 */ goto L_0068ee78;
L_0068ee3f:; BB(0x0068ee3f);
    /* 0068ee3f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ee42: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068ee45: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ee48: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068ee4b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ee4e: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068ee52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ee54: jne 0x68ee6f */ if (!fZ) goto L_0068ee6f;
L_0068ee56:; BB(0x0068ee56);
    /* 0068ee56: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ee59: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ee5c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0068ee5f: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ee62: jne 0x68ee6f */ if (!fZ) goto L_0068ee6f;
L_0068ee64:; BB(0x0068ee64);
    /* 0068ee64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ee67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ee6a: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068ee6d: jmp 0x68ee3f */ goto L_0068ee3f;
L_0068ee6f:; BB(0x0068ee6f);
    /* 0068ee6f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ee72: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ee75: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
L_0068ee78:; BB(0x0068ee78);
    /* 0068ee78: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ee7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ee7b: ret  */ FN_RET(0x0068edc0); r_esp += 4; return;
}

void f_0068ee80(void) /* sub_68EE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068ee80);
    /* 0068ee80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ee81: mov ebp, esp */ r_ebp = r_esp;
    /* 0068ee83: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ee86: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068ee89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ee8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068ee8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ee8f: call 0x68f9d0 */ r_esp -= 4; W32(r_esp, 0x68ee94u); f_0068f9d0();
    /* 0068ee94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ee97: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ee99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ee9a: ret 4 */ FN_RET(0x0068ee80); r_esp += 8; return;
}

void f_0068eea0(void) /* sub_68EEA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068eea0);
    /* 0068eea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068eea1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068eea3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068eea6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068eea9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068eeac: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eeaf: jne 0x68eeb7 */ if (!fZ) goto L_0068eeb7;
L_0068eeb1:; BB(0x0068eeb1);
    /* 0068eeb1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68eeb7u); call_ind(t); }
L_0068eeb7:; BB(0x0068eeb7);
    /* 0068eeb7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068eeba: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eebd: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068eec1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eec3: je 0x68eeed */ if (fZ) goto L_0068eeed;
L_0068eec5:; BB(0x0068eec5);
    /* 0068eec5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068eec8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068eecb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068eece: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0068eed1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068eed4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068eed7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eeda: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068eede: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068eee0: je 0x68eee8 */ if (fZ) goto L_0068eee8;
L_0068eee2:; BB(0x0068eee2);
    /* 0068eee2: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68eee8u); call_ind(t); }
L_0068eee8:; BB(0x0068eee8);
    /* 0068eee8: jmp 0x68ef86 */ goto L_0068ef86;
L_0068eeed:; BB(0x0068eeed);
    /* 0068eeed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068eef0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068eef3: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068eef6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068eef9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068eefb: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068eeff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ef01: jne 0x68ef38 */ if (!fZ) goto L_0068ef38;
L_0068ef03:; BB(0x0068ef03);
    /* 0068ef03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ef06: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068ef09: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0068ef0c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068ef0f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ef11: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0068ef14:; BB(0x0068ef14);
    /* 0068ef14: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ef17: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068ef1a: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068ef1e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ef20: jne 0x68ef2d */ if (!fZ) goto L_0068ef2d;
L_0068ef22:; BB(0x0068ef22);
    /* 0068ef22: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ef25: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068ef28: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068ef2b: jmp 0x68ef14 */ goto L_0068ef14;
L_0068ef2d:; BB(0x0068ef2d);
    /* 0068ef2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ef30: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068ef33: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068ef36: jmp 0x68ef86 */ goto L_0068ef86;
L_0068ef38:; BB(0x0068ef38);
    /* 0068ef38: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ef3b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068ef3e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068ef41: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068ef44: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ef47: movsx ecx, byte ptr [eax + 0x35] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x35u));
    /* 0068ef4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ef4d: jne 0x68ef67 */ if (!fZ) goto L_0068ef67;
L_0068ef4f:; BB(0x0068ef4f);
    /* 0068ef4f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ef52: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ef55: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0068ef58: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ef5a: jne 0x68ef67 */ if (!fZ) goto L_0068ef67;
L_0068ef5c:; BB(0x0068ef5c);
    /* 0068ef5c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ef5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ef62: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068ef65: jmp 0x68ef38 */ goto L_0068ef38;
L_0068ef67:; BB(0x0068ef67);
    /* 0068ef67: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ef6a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068ef6d: movsx eax, byte ptr [edx + 0x35] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x35u));
    /* 0068ef71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ef73: je 0x68ef7d */ if (fZ) goto L_0068ef7d;
L_0068ef75:; BB(0x0068ef75);
    /* 0068ef75: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68ef7bu); call_ind(t); }
    /* 0068ef7b: jmp 0x68ef86 */ goto L_0068ef86;
L_0068ef7d:; BB(0x0068ef7d);
    /* 0068ef7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068ef80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068ef83: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0068ef86:; BB(0x0068ef86);
    /* 0068ef86: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ef88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ef89: ret  */ FN_RET(0x0068eea0); r_esp += 4; return;
}


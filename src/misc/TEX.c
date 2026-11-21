#include "protos.h"

void f_0061f480(void) /* TEX::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0061f480);
    /* 0061f480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061f481: mov ebp, esp */ r_ebp = r_esp;
    /* 0061f483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f485: push 0x6ab39b */ { u32 v = 0x6ab39bu; r_esp -= 4; W32(r_esp, v); }
    /* 0061f48a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061f490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f491: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061f494: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061f499: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061f49b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f49c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061f49f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0061f4a5: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0061f4a8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f4ab: mov dword ptr [eax], 0x6d8e20 */ W32((u32)(r_eax), 0x6d8e20u);
    /* 0061f4b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061f4b8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0061f4bf: jmp 0x61f4ca */ goto L_0061f4ca;
L_0061f4c1:; BB(0x0061f4c1);
    /* 0061f4c1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f4c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f4c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0061f4ca:; BB(0x0061f4ca);
    /* 0061f4ca: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f4cd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f4d0: cmp eax, dword ptr [edx + 0x30c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x30cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f4d6: jge 0x61f5e3 */ if ((fS==fO)) goto L_0061f5e3;
L_0061f4dc:; BB(0x0061f4dc);
    /* 0061f4dc: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0061f4e3: jmp 0x61f4ee */ goto L_0061f4ee;
L_0061f4e5:; BB(0x0061f4e5);
    /* 0061f4e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f4e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f4eb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_0061f4ee:; BB(0x0061f4ee);
    /* 0061f4ee: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f4f1: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 0061f4f7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f4fa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f4fd: cmp edx, dword ptr [eax + ecx*8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx*8)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f500: jge 0x61f5bf */ if ((fS==fO)) goto L_0061f5bf;
L_0061f506:; BB(0x0061f506);
    /* 0061f506: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f509: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 0061f50f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f512: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f515: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f518: mov ecx, dword ptr [ecx + eax*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 0061f51c: mov edx, dword ptr [ecx + edx + 0x10] */ r_edx = R32((u32)(r_ecx+r_edx+0x10u));
    /* 0061f520: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0061f523: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061f526: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f527: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f52cu); f_00686cae();
    /* 0061f52c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f52f: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0061f536: jmp 0x61f541 */ goto L_0061f541;
L_0061f538:; BB(0x0061f538);
    /* 0061f538: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f53b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061f53e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0061f541:; BB(0x0061f541);
    /* 0061f541: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f544: mov eax, dword ptr [edx + 0x310] */ r_eax = R32((u32)(r_edx+0x310u));
    /* 0061f54a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f54d: imul ecx, ecx, 0x18 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x18u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f550: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f553: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 0061f557: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f55a: cmp edx, dword ptr [eax + ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061f55e: jge 0x61f591 */ if ((fS==fO)) goto L_0061f591;
L_0061f560:; BB(0x0061f560);
    /* 0061f560: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f563: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 0061f569: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f56c: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f56f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f572: mov ecx, dword ptr [ecx + eax*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 0061f576: mov edx, dword ptr [ecx + edx + 0x14] */ r_edx = R32((u32)(r_ecx+r_edx+0x14u));
    /* 0061f57a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061f57d: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0061f580: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061f583: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061f586: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f587: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f58cu); f_00686cae();
    /* 0061f58c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f58f: jmp 0x61f538 */ goto L_0061f538;
L_0061f591:; BB(0x0061f591);
    /* 0061f591: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f594: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 0061f59a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f59d: imul edx, edx, 0x18 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x18u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061f5a0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f5a3: mov ecx, dword ptr [ecx + eax*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 0061f5a7: mov edx, dword ptr [ecx + edx + 0x14] */ r_edx = R32((u32)(r_ecx+r_edx+0x14u));
    /* 0061f5ab: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0061f5ae: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061f5b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f5b2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f5b7u); f_00686cae();
    /* 0061f5b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f5ba: jmp 0x61f4e5 */ goto L_0061f4e5;
L_0061f5bf:; BB(0x0061f5bf);
    /* 0061f5bf: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f5c2: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 0061f5c8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061f5cb: mov ecx, dword ptr [edx + eax*8 + 4] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0061f5cf: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0061f5d2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061f5d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f5d6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f5dbu); f_00686cae();
    /* 0061f5db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f5de: jmp 0x61f4c1 */ goto L_0061f4c1;
L_0061f5e3:; BB(0x0061f5e3);
    /* 0061f5e3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f5e6: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 0061f5ec: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0061f5ef: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061f5f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061f5f3: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f5f8u); f_00686cae();
    /* 0061f5f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061f5fb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f5fe: cmp dword ptr [eax + 0x31c], 0 */ {  u32 a = R32((u32)(r_eax+0x31cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061f605: je 0x61f61f */ if (fZ) goto L_0061f61f;
L_0061f607:; BB(0x0061f607);
    /* 0061f607: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f60a: mov edx, dword ptr [ecx + 0x31c] */ r_edx = R32((u32)(r_ecx+0x31cu));
    /* 0061f610: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0061f613: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0061f616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061f617: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61f61cu); f_00686cae();
    /* 0061f61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061f61f:; BB(0x0061f61f);
    /* 0061f61f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f622: mov dword ptr [ecx + 0x31c], 0 */ W32((u32)(r_ecx+0x31cu), 0x0u);
    /* 0061f62c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061f633: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0061f636: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x61f63bu); f_0062aef0();
    /* 0061f63b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f63e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f645: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061f646: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f649: ret  */ FN_RET(0x0061f480); r_esp += 4; return;
}

void f_00622150(void) /* tex::func_00622150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00622150);
    /* 00622150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00622151: mov ebp, esp */ r_ebp = r_esp;
    /* 00622153: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00622156: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0062215d: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00622164: mov dword ptr [ebp - 0x2c], 2 */ W32((u32)(r_ebp+0xffffffd4u), 0x2u);
    /* 0062216b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00622172: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00622179: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 00622180: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 00622187: mov dword ptr [ebp - 0x30], 0xffffffff */ W32((u32)(r_ebp+0xffffffd0u), 0xffffffffu);
    /* 0062218e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00622191: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00622194: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00622197: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0062219a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0062219d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006221a0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 006221a7: jmp 0x6221b2 */ goto L_006221b2;
L_006221a9:; BB(0x006221a9);
    /* 006221a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006221ac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006221af: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_006221b2:; BB(0x006221b2);
    /* 006221b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006221b5: cmp ecx, dword ptr [ebp + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006221b8: jge 0x622334 */ if ((fS==fO)) goto L_00622334;
L_006221be:; BB(0x006221be);
    /* 006221be: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006221c5: jmp 0x6221d0 */ goto L_006221d0;
L_006221c7:; BB(0x006221c7);
    /* 006221c7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006221ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006221cd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_006221d0:; BB(0x006221d0);
    /* 006221d0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006221d3: cmp eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006221d6: jge 0x62232f */ if ((fS==fO)) goto L_0062232f;
L_006221dc:; BB(0x006221dc);
    /* 006221dc: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006221df: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006221e2: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 006221e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006221e7: jne 0x6221fa */ if (!fZ) goto L_006221fa;
L_006221e9:; BB(0x006221e9);
    /* 006221e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006221ec: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 006221ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006221f2: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 006221f5: jmp 0x62230f */ goto L_0062230f;
L_006221fa:; BB(0x006221fa);
    /* 006221fa: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006221fd: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622200: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00622203: cmp dword ptr [ebp - 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622206: jne 0x62223e */ if (!fZ) goto L_0062223e;
L_00622208:; BB(0x00622208);
    /* 00622208: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062220b: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062220e: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 00622211: cmp dword ptr [ebp - 0x24], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622214: jne 0x62223e */ if (!fZ) goto L_0062223e;
L_00622216:; BB(0x00622216);
    /* 00622216: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622219: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062221c: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0062221f: cmp dword ptr [ebp - 0x30], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622222: jne 0x62223e */ if (!fZ) goto L_0062223e;
L_00622224:; BB(0x00622224);
    /* 00622224: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00622227: mov al, byte ptr [ebp - 0x34] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffccu))) & 0xffu);
    /* 0062222a: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0062222c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062222f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622232: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00622235: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00622237: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00622239: jmp 0x62230f */ goto L_0062230f;
L_0062223e:; BB(0x0062223e);
    /* 0062223e: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00622245: jmp 0x622250 */ goto L_00622250;
L_00622247:; BB(0x00622247);
    /* 00622247: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062224a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062224d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_00622250:; BB(0x00622250);
    /* 00622250: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00622253: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00622256: jge 0x6222df */ if ((fS==fO)) goto L_006222df;
L_0062225c:; BB(0x0062225c);
    /* 0062225c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062225f: imul eax, eax, 3 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00622262: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00622265: movzx edx, byte ptr [ecx + eax] */ r_edx = (u32)R8((u32)(r_ecx+r_eax));
    /* 00622269: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062226c: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062226f: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 00622272: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00622274: jne 0x6222da */ if (!fZ) goto L_006222da;
L_00622276:; BB(0x00622276);
    /* 00622276: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00622279: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062227c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062227f: movzx ecx, byte ptr [eax + edx + 1] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0x1u));
    /* 00622284: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622287: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062228a: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0062228d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062228f: jne 0x6222da */ if (!fZ) goto L_006222da;
L_00622291:; BB(0x00622291);
    /* 00622291: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00622294: imul ecx, ecx, 3 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00622297: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062229a: movzx eax, byte ptr [edx + ecx + 2] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x2u));
    /* 0062229f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006222a2: add ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006222a5: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 006222a8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006222aa: jne 0x6222da */ if (!fZ) goto L_006222da;
L_006222ac:; BB(0x006222ac);
    /* 006222ac: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006222af: add eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006222b2: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 006222b5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006222b8: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006222bb: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006222be: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 006222c1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006222c4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006222c7: add ecx, dword ptr [ebp - 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006222ca: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 006222cd: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006222d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006222d3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006222d6: jmp 0x6222fa */ goto L_006222fa;
L_006222da:; BB(0x006222da);
    /* 006222da: jmp 0x622247 */ goto L_00622247;
L_006222df:; BB(0x006222df);
    /* 006222df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006222e1: jne 0x6222fa */ if (!fZ) goto L_006222fa;
L_006222e3:; BB(0x006222e3);
    /* 006222e3: push 0x56e */ { u32 v = 0x56eu; r_esp -= 4; W32(r_esp, v); }
    /* 006222e8: push 0x6d8e38 */ { u32 v = 0x6d8e38u; r_esp -= 4; W32(r_esp, v); }
    /* 006222ed: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006222f2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6222f7u); f_005e9f20();
    /* 006222f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006222fa:; BB(0x006222fa);
    /* 006222fa: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006222fd: mov cl, byte ptr [ebp - 0x34] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffccu))) & 0xffu);
    /* 00622300: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 00622302: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622305: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622308: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062230b: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0062230d: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0062230f:; BB(0x0062230f);
    /* 0062230f: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00622312: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00622315: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00622318: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062231b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062231e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00622321: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00622324: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00622327: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062232a: jmp 0x6221c7 */ goto L_006221c7;
L_0062232f:; BB(0x0062232f);
    /* 0062232f: jmp 0x6221a9 */ goto L_006221a9;
L_00622334:; BB(0x00622334);
    /* 00622334: mov esp, ebp */ r_esp = r_ebp;
    /* 00622336: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00622337: ret  */ FN_RET(0x00622150); r_esp += 4; return;
}


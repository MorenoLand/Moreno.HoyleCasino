#include "protos.h"

void f_00623700(void) /* FrameBuffer::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623700);
    /* 00623700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623701: mov ebp, esp */ r_ebp = r_esp;
    /* 00623703: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00623705: push 0x6ab3c8 */ { u32 v = 0x6ab3c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062370a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00623710: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623711: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623714: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00623719: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062371b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062371c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062371f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00623725: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00623728: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062372b: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x623730u); f_0062aea0();
    /* 00623730: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00623737: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062373a: mov dword ptr [eax], 0x6d8e58 */ W32((u32)(r_eax), 0x6d8e58u);
    /* 00623740: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623743: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00623746: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00623749: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062374c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062374f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00623752: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623755: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00623758: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0062375b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062375e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623761: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00623764: imul eax, dword ptr [edx + 0x18] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edx+0x18u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623768: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062376b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062376e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623771: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00623774: imul ecx, dword ptr [edx + 0x18] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edx+0x18u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623778: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062377b: and ecx, 0x80000003 */ {  u32 a = r_ecx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 00623781: jns 0x623788 */ if (!fS) goto L_00623788;
L_00623783:; BB(0x00623783);
    /* 00623783: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00623784: or ecx, 0xfffffffc */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00623787: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00623788:; BB(0x00623788);
    /* 00623788: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062378a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062378d: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00623790: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00623793: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623796: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00623799: imul edx, dword ptr [ecx + 0x10] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x10u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0062379d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062379e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6237a3u); f_00686d82();
    /* 006237a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006237a6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006237a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006237ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006237af: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 006237b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006237b5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006237b8: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006237bb: imul ecx, dword ptr [eax + 0x10] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x10u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006237bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006237c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006237c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006237c5: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006237c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006237c9: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6237ceu); f_00686fa2();
    /* 006237ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006237d1: movzx ecx, byte ptr [ebp + 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0x14u));
    /* 006237d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006237d7: je 0x6237f3 */ if (fZ) goto L_006237f3;
L_006237d9:; BB(0x006237d9);
    /* 006237d9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006237dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006237df: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006237e2: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006237e5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006237e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006237eb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006237ee: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006237f1: jmp 0x62381d */ goto L_0062381d;
L_006237f3:; BB(0x006237f3);
    /* 006237f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006237f6: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 006237f9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006237fb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006237fe: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00623801: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623804: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00623807: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062380a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062380d: imul eax, dword ptr [ecx + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00623811: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623814: add eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00623817: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062381a: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
L_0062381d:; BB(0x0062381d);
    /* 0062381d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00623824: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00623827: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062382a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00623831: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00623832: mov esp, ebp */ r_esp = r_ebp;
    /* 00623834: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00623835: ret 0x10 */ FN_RET(0x00623700); r_esp += 20; return;
}

void f_00623840(void) /* FrameBuffer::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00623840);
    /* 00623840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00623841: mov ebp, esp */ r_ebp = r_esp;
    /* 00623843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00623845: push 0x6ab3eb */ { u32 v = 0x6ab3ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0062384a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00623850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623851: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00623854: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00623859: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062385b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062385c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062385f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00623865: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00623868: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062386b: mov dword ptr [eax], 0x6d8e58 */ W32((u32)(r_eax), 0x6d8e58u);
    /* 00623871: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00623878: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062387b: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0062387e: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00623881: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00623884: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00623885: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62388au); f_00686cae();
    /* 0062388a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062388d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00623894: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00623897: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x62389cu); f_0062aef0();
    /* 0062389c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062389f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006238a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006238a7: mov esp, ebp */ r_esp = r_ebp;
    /* 006238a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006238aa: ret  */ FN_RET(0x00623840); r_esp += 4; return;
}


#include "protos.h"

void f_0068f520(void) /* sub_68F520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f520);
    /* 0068f520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f521: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f523: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f526: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0068f529: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f52c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f52f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f532: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f533: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f536: call 0x68f8f0 */ r_esp -= 4; W32(r_esp, 0x68f53bu); f_0068f8f0();
    /* 0068f53b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f53e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f541: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f544: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068f547: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0068f54a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f54d: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0068f554: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f557: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068f55a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0068f55d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068f560: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f563: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068f566: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0068f568: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f56b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f56e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f571: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f574: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0068f577: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f57a: ret  */ FN_RET(0x0068f520); r_esp += 4; return;
}

void f_0068f580(void) /* sub_68F580 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f580);
    /* 0068f580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f581: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068f585: push 0x6ae2a0 */ { u32 v = 0x6ae2a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f58a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068f590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f591: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f592: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f595: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f596: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f597: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f598: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068f59d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f59f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f5a0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068f5a3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068f5a9: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068f5ac: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0068f5af: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068f5b2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f5b5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068f5b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068f5bb: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f5bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5c1: jne 0x68f671 */ if (!fZ) goto L_0068f671;
L_0068f5c7:; BB(0x0068f5c7);
    /* 0068f5c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068f5ca: mov dl, byte ptr [ecx + 0x44] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x44u))) & 0xffu);
    /* 0068f5cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f5ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f5d1: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068f5d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f5d5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068f5d8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f5db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f5dc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068f5df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f5e0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068f5e3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f5e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f5e7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068f5ea: call 0x68ecb0 */ r_esp -= 4; W32(r_esp, 0x68f5efu); f_0068ecb0();
    /* 0068f5ef: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068f5f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f5f5: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068f5f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5fb: je 0x68f603 */ if (fZ) goto L_0068f603;
L_0068f5fd:; BB(0x0068f5fd);
    /* 0068f5fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f600: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0068f603:; BB(0x0068f603);
    /* 0068f603: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068f60a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f60d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f60e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0068f611: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f613: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f614: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068f617: call 0x68f580 */ r_esp -= 4; W32(r_esp, 0x68f61cu); f_0068f580();
    /* 0068f61c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0068f61f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f622: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0068f625: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0068f627: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f62a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f62b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f62e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0068f631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f632: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068f635: call 0x68f580 */ r_esp -= 4; W32(r_esp, 0x68f63au); f_0068f580();
    /* 0068f63a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0068f63d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f640: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068f643: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0068f646: jmp 0x68f66a */ goto L_0068f66a;
L_0068f66a:; BB(0x0068f66a);
    /* 0068f66a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0068f671:; BB(0x0068f671);
    /* 0068f671: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f674: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068f677: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068f67e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f67f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f680: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f681: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f682: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f684: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f685: ret 8 */ FN_RET(0x0068f580); r_esp += 12; return;
}

void f_0068f690(void) /* sub_68F690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f690);
    /* 0068f690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f691: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f693: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068f695: push 0x6ae2c0 */ { u32 v = 0x6ae2c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f69a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068f6a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6a2: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f6a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6a8: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068f6ad: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f6af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6b0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068f6b3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068f6b9: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068f6bc: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 0068f6bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6c1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0068f6c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068f6c7: call 0x68f7e0 */ r_esp -= 4; W32(r_esp, 0x68f6ccu); f_0068f7e0();
    /* 0068f6cc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0068f6cf: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0068f6d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068f6dd: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0068f6e4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f6e7: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0068f6ea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068f6ed: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0068f6f0: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f6f4: je 0x68f706 */ if (fZ) goto L_0068f706;
L_0068f6f6:; BB(0x0068f6f6);
    /* 0068f6f6: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068f6f9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0068f6fc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068f6fe: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0068f701: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 0068f704: jmp 0x68f70d */ goto L_0068f70d;
L_0068f706:; BB(0x0068f706);
    /* 0068f706: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0068f70d:; BB(0x0068f70d);
    /* 0068f70d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f710: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f713: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068f716: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0068f71d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f720: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068f723: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0068f726: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0068f729: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0068f72c: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f730: je 0x68f742 */ if (fZ) goto L_0068f742;
L_0068f732:; BB(0x0068f732);
    /* 0068f732: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0068f735: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068f738: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068f73a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0068f73d: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0068f740: jmp 0x68f749 */ goto L_0068f749;
L_0068f742:; BB(0x0068f742);
    /* 0068f742: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0068f749:; BB(0x0068f749);
    /* 0068f749: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f74c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f74f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0068f752: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0068f759: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f75c: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068f75f: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0068f762: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0068f765: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0068f768: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f76c: je 0x68f77e */ if (fZ) goto L_0068f77e;
L_0068f76e:; BB(0x0068f76e);
    /* 0068f76e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0068f771: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068f774: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068f776: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0068f779: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 0068f77c: jmp 0x68f785 */ goto L_0068f785;
L_0068f77e:; BB(0x0068f77e);
    /* 0068f77e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0068f785:; BB(0x0068f785);
    /* 0068f785: jmp 0x68f7a9 */ goto L_0068f7a9;
L_0068f7a9:; BB(0x0068f7a9);
    /* 0068f7a9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068f7b0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f7b3: mov byte ptr [eax + 0x44], 1 */ W8((u32)(r_eax+0x44u), 0x1u);
    /* 0068f7b7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f7ba: mov byte ptr [ecx + 0x45], 0 */ W8((u32)(r_ecx+0x45u), 0x0u);
    /* 0068f7be: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068f7c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068f7c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068f7cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f7cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f7cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f7ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f7cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f7d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f7d2: ret  */ FN_RET(0x0068f690); r_esp += 4; return;
}

void f_0068f7e0(void) /* sub_68F7E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f7e0);
    /* 0068f7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f7e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f7e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068f7e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f7ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7ef: call 0x68fa30 */ r_esp -= 4; W32(r_esp, 0x68f7f4u); f_0068fa30();
    /* 0068f7f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f7f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f7f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f7fa: ret 4 */ FN_RET(0x0068f7e0); r_esp += 8; return;
}

void f_0068f800(void) /* sub_68F800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f800);
    /* 0068f800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f801: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f803: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f806: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0068f809: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f80c: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f80f: jne 0x68f817 */ if (!fZ) goto L_0068f817;
L_0068f811:; BB(0x0068f811);
    /* 0068f811: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68f817u); call_ind(t); }
L_0068f817:; BB(0x0068f817);
    /* 0068f817: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f81a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f81d: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f823: je 0x68f84d */ if (fZ) goto L_0068f84d;
L_0068f825:; BB(0x0068f825);
    /* 0068f825: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f828: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f82b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f82e: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0068f831: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0068f834: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f837: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068f83a: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068f83e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f840: je 0x68f848 */ if (fZ) goto L_0068f848;
L_0068f842:; BB(0x0068f842);
    /* 0068f842: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68f848u); call_ind(t); }
L_0068f848:; BB(0x0068f848);
    /* 0068f848: jmp 0x68f8e6 */ goto L_0068f8e6;
L_0068f84d:; BB(0x0068f84d);
    /* 0068f84d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f850: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0068f853: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0068f856: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068f859: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068f85b: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f85f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f861: jne 0x68f898 */ if (!fZ) goto L_0068f898;
L_0068f863:; BB(0x0068f863);
    /* 0068f863: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f866: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f869: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0068f86c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068f86f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f871: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0068f874:; BB(0x0068f874);
    /* 0068f874: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f877: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068f87a: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068f87e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f880: jne 0x68f88d */ if (!fZ) goto L_0068f88d;
L_0068f882:; BB(0x0068f882);
    /* 0068f882: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f885: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0068f888: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068f88b: jmp 0x68f874 */ goto L_0068f874;
L_0068f88d:; BB(0x0068f88d);
    /* 0068f88d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f890: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068f893: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0068f896: jmp 0x68f8e6 */ goto L_0068f8e6;
L_0068f898:; BB(0x0068f898);
    /* 0068f898: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f89b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0068f89e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f8a1: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0068f8a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f8a7: movsx ecx, byte ptr [eax + 0x45] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x45u));
    /* 0068f8ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f8ad: jne 0x68f8c7 */ if (!fZ) goto L_0068f8c7;
L_0068f8af:; BB(0x0068f8af);
    /* 0068f8af: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f8b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f8b5: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0068f8b8: cmp ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f8ba: jne 0x68f8c7 */ if (!fZ) goto L_0068f8c7;
L_0068f8bc:; BB(0x0068f8bc);
    /* 0068f8bc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f8bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f8c2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0068f8c5: jmp 0x68f898 */ goto L_0068f898;
L_0068f8c7:; BB(0x0068f8c7);
    /* 0068f8c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f8ca: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0068f8cd: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f8d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f8d3: je 0x68f8dd */ if (fZ) goto L_0068f8dd;
L_0068f8d5:; BB(0x0068f8d5);
    /* 0068f8d5: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x68f8dbu); call_ind(t); }
    /* 0068f8db: jmp 0x68f8e6 */ goto L_0068f8e6;
L_0068f8dd:; BB(0x0068f8dd);
    /* 0068f8dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068f8e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f8e3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
L_0068f8e6:; BB(0x0068f8e6);
    /* 0068f8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f8e9: ret  */ FN_RET(0x0068f800); r_esp += 4; return;
}

void f_0068f8f0(void) /* sub_68F8F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f8f0);
    /* 0068f8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f8f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f8f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0068f8f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f8fc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068f8ff: jmp 0x68f907 */ goto L_0068f907;
L_0068f901:; BB(0x0068f901);
    /* 0068f901: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f904: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0068f907:; BB(0x0068f907);
    /* 0068f907: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f90a: movsx eax, byte ptr [edx + 0x45] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x45u));
    /* 0068f90e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f910: jne 0x68f943 */ if (!fZ) goto L_0068f943;
L_0068f912:; BB(0x0068f912);
    /* 0068f912: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f915: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0068f918: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f919: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068f91c: call 0x68f8f0 */ r_esp -= 4; W32(r_esp, 0x68f921u); f_0068f8f0();
    /* 0068f921: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068f924: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f926: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068f929: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068f92c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f92d: call 0x68fa90 */ r_esp -= 4; W32(r_esp, 0x68f932u); f_0068fa90();
    /* 0068f932: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f935: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f939: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68f93eu); f_00686cae();
    /* 0068f93e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f941: jmp 0x68f901 */ goto L_0068f901;
L_0068f943:; BB(0x0068f943);
    /* 0068f943: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f945: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f946: ret 4 */ FN_RET(0x0068f8f0); r_esp += 8; return;
}

void f_0068f950(void) /* sub_68F950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068f950);
    /* 0068f950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f951: mov ebp, esp */ r_ebp = r_esp;
    /* 0068f953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068f955: push 0x6ae2e9 */ { u32 v = 0x6ae2e9u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068f960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f961: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f964: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068f969: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f96b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f96c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068f96f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068f975: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f978: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068f97b: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0068f97e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068f985: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068f988: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068f98b: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 0068f98e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0068f991: call 0x68dc60 */ r_esp -= 4; W32(r_esp, 0x68f996u); f_0068dc60();
    /* 0068f996: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068f99d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0068f9a0: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68f9a6u); call_ind(t); }
    /* 0068f9a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068f9a8: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0068f9ab: je 0x68f9b9 */ if (fZ) goto L_0068f9b9;
L_0068f9ad:; BB(0x0068f9ad);
    /* 0068f9ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f9b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f9b1: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68f9b6u); f_00686cae();
    /* 0068f9b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068f9b9:; BB(0x0068f9b9);
    /* 0068f9b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068f9bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068f9c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f9c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0068f9c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f9c7: ret  */ FN_RET(0x0068f950); r_esp += 4; return;
}

void f_0068fa90(void) /* sub_68FA90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fa90);
    /* 0068fa90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa91: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fa93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa95: push 0x6ae319 */ { u32 v = 0x6ae319u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068faa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068faa1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068faa2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0068faa7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068faa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068faaa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0068faad: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0068fab3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068fab6: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068fab9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0068fabc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068fac3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068fac6: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068fac9: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68facfu); call_ind(t); }
    /* 0068facf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068fad6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0068fad9: call dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); r_esp -= 4; W32(r_esp, 0x68fadfu); call_ind(t); }
    /* 0068fadf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068fae1: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0068fae4: je 0x68faf2 */ if (fZ) goto L_0068faf2;
L_0068fae6:; BB(0x0068fae6);
    /* 0068fae6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068fae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068faea: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x68faefu); f_00686cae();
    /* 0068faef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0068faf2:; BB(0x0068faf2);
    /* 0068faf2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0068faf5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068fafc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068fafd: mov esp, ebp */ r_esp = r_ebp;
    /* 0068faff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fb00: ret  */ FN_RET(0x0068fa90); r_esp += 4; return;
}

void f_0068fb10(void) /* sub_68FB10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fb10);
    /* 0068fb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb11: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fb13: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068fb16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb17: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x68fb1cu); f_0062fde0();
    /* 0068fb1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068fb1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fb20: ret  */ FN_RET(0x0068fb10); r_esp += 4; return;
}


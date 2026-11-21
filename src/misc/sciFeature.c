#include "protos.h"

void f_005f49d0(void) /* sciFeature::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f49d0);
    /* 005f49d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f49d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f49d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f49d5: push 0x6a9ee8 */ { u32 v = 0x6a9ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f49da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f49e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f49e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f49e2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f49e7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f49e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f49ea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f49ed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f49f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f49f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f49f9: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5f49feu); f_005e9e20();
    /* 005f49fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f4a05: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a08: mov dword ptr [eax], 0x6d68ac */ W32((u32)(r_eax), 0x6d68acu);
    /* 005f4a0e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a11: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
    /* 005f4a18: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a1b: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 005f4a22: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a25: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005f4a2c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a2f: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 005f4a36: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a39: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 005f4a40: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a43: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005f4a4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a4d: mov byte ptr [ecx + 0x24], 1 */ W8((u32)(r_ecx+0x24u), 0x1u);
    /* 005f4a51: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a54: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005f4a5b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a5e: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005f4a65: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a68: mov byte ptr [ecx + 8], 0 */ W8((u32)(r_ecx+0x8u), 0x0u);
    /* 005f4a6c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a6f: mov byte ptr [edx + 9], 0 */ W8((u32)(r_edx+0x9u), 0x0u);
    /* 005f4a73: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a76: mov byte ptr [eax + 0xa], 0 */ W8((u32)(r_eax+0xau), 0x0u);
    /* 005f4a7a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4a7e: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 005f4a83: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x5f4a88u); f_0060c7d0();
    /* 005f4a88: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a8b: mov dword ptr [edx + 0x2c], 0 */ W32((u32)(r_edx+0x2cu), 0x0u);
    /* 005f4a92: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a95: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005f4a9c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4a9f: mov dword ptr [ecx + 0x40], 1 */ W32((u32)(r_ecx+0x40u), 0x1u);
    /* 005f4aa6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4aa9: mov byte ptr [edx + 0x44], 0 */ W8((u32)(r_edx+0x44u), 0x0u);
    /* 005f4aad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f4ab4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4ab7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4aba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4ac1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4ac2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4ac4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4ac5: ret  */ FN_RET(0x005f49d0); r_esp += 4; return;
}

void f_005f4ad0(void) /* sciFeature::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4ad0);
    /* 005f4ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4ad3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ad5: push 0x6a9f0b */ { u32 v = 0x6a9f0bu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ada: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4ae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ae1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ae2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f4ae7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f4ae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4aea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f4aed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f4af3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f4af6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4af9: mov dword ptr [eax], 0x6d68ac */ W32((u32)(r_eax), 0x6d68acu);
    /* 005f4aff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f4b06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4b09: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b0d: je 0x5f4b29 */ if (fZ) goto L_005f4b29;
L_005f4b0f:; BB(0x005f4b0f);
    /* 005f4b0f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4b12: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b16: je 0x5f4b27 */ if (fZ) goto L_005f4b27;
L_005f4b18:; BB(0x005f4b18);
    /* 005f4b18: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b1c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4b1f: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005f4b22: call 0x5f8ce0 */ r_esp -= 4; W32(r_esp, 0x5f4b27u); f_005f8ce0();
L_005f4b27:; BB(0x005f4b27);
    /* 005f4b27: jmp 0x5f4b37 */ goto L_005f4b37;
L_005f4b29:; BB(0x005f4b29);
    /* 005f4b29: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4b2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b2d: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 005f4b32: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f4b37u); f_0060c890();
L_005f4b37:; BB(0x005f4b37);
    /* 005f4b37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f4b3e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f4b41: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5f4b46u); f_005e9e40();
    /* 005f4b46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4b49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4b50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4b51: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4b53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4b54: ret  */ FN_RET(0x005f4ad0); r_esp += 4; return;
}

void f_005f5010(void) /* sciFeature::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5010);
    /* 005f5010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5011: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5013: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5016: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f5019: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f501c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5020: jne 0x5f5031 */ if (!fZ) goto L_005f5031;
L_005f5022:; BB(0x005f5022);
    /* 005f5022: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5025: mov edx, dword ptr [0x15e55e8] */ r_edx = R32((u32)(0x15e55e8u));
    /* 005f502b: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f502e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
L_005f5031:; BB(0x005f5031);
    /* 005f5031: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5034: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5038: je 0x5f50ae */ if (fZ) goto L_005f50ae;
L_005f503a:; BB(0x005f503a);
    /* 005f503a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f503d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f503e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5041: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f5044: call 0x5f8ba0 */ r_esp -= 4; W32(r_esp, 0x5f5049u); f_005f8ba0();
    /* 005f5049: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f504c: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f5051u); f_005f54a0();
    /* 005f5051: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f5054: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5056: je 0x5f50a0 */ if (fZ) goto L_005f50a0;
L_005f5058:; BB(0x005f5058);
    /* 005f5058: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f505b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f505e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f5061: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5064: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005f5067: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005f506a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f506d: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f5070: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f5073: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5076: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005f5079: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f507c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f507f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f5082: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f5085: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005f5088: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f508b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f508e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5091: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5094: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005f5097: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5098: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f509b: call 0x5f5940 */ r_esp -= 4; W32(r_esp, 0x5f50a0u); f_005f5940();
L_005f50a0:; BB(0x005f50a0);
    /* 005f50a0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f50a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f50a4: mov ecx, 0x795098 */ r_ecx = 0x795098u;
    /* 005f50a9: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x5f50aeu); f_0060c890();
L_005f50ae:; BB(0x005f50ae);
    /* 005f50ae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f50b1: mov dword ptr [ecx + 0x28], 1 */ W32((u32)(r_ecx+0x28u), 0x1u);
    /* 005f50b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005f50ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f50bb: ret  */ FN_RET(0x005f5010); r_esp += 4; return;
}

void f_005f5110(void) /* sciFeature::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5110);
    /* 005f5110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5111: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5113: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5116: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f5119: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f511c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f511f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005f5122: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f5125: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5128: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f512b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f512e: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005f5131: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f5134: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005f5137: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f513a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f513d: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005f5140: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5143: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f5146: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005f5149: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f514c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f514d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5150: call 0x5f5530 */ r_esp -= 4; W32(r_esp, 0x5f5155u); f_005f5530();
    /* 005f5155: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5158: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5159: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f515c: call 0x5f5570 */ r_esp -= 4; W32(r_esp, 0x5f5161u); f_005f5570();
    /* 005f5161: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5163: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5164: ret 8 */ FN_RET(0x005f5110); r_esp += 12; return;
}

void f_005f5170(void) /* sciFeature::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5170);
    /* 005f5170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5171: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5177: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f517a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f517c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f517f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005f5182: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f5184u); call_ind(t); }
    /* 005f5184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5185: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5188: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5189: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f518c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f518e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5191: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 005f5194: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f5196u); call_ind(t); }
    /* 005f5196: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5199: ret 4 */ FN_RET(0x005f5170); r_esp += 8; return;
}

void f_005f51c0(void) /* sciFeature::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f51c0);
    /* 005f51c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f51c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f51c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f51c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f51c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f51ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f51cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f51ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f51d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f51d3: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005f51d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f51d8u); call_ind(t); }
    /* 005f51d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f51d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f51dc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f51de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f51e1: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005f51e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f51e6u); call_ind(t); }
    /* 005f51e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005f51e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f51e9: ret 4 */ FN_RET(0x005f51c0); r_esp += 8; return;
}

void f_005f5440(void) /* sciFeature::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5440);
    /* 005f5440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5441: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5443: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5444: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5447: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f544a: mov byte ptr [eax + 0x24], 0 */ W8((u32)(r_eax+0x24u), 0x0u);
    /* 005f544e: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5450: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5451: ret  */ FN_RET(0x005f5440); r_esp += 4; return;
}

void f_005f55b0(void) /* sciFeature::vfunc31 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f55b0);
    /* 005f55b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f55b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f55b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f55b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f55b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f55ba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f55bd: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 005f55c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f55c3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f55c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f55c8: mov edx, dword ptr [eax + 0xac] */ r_edx = R32((u32)(r_eax+0xacu));
    /* 005f55ce: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f55d0u); call_ind(t); }
    /* 005f55d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f55d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f55d3: ret 4 */ FN_RET(0x005f55b0); r_esp += 8; return;
}

void f_005f5640(void) /* sciFeature::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f5640);
    /* 005f5640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5641: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5643: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5646: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f5649: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f564c: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f5651u); f_005f54a0();
    /* 005f5651: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f5654: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5656: je 0x5f568d */ if (fZ) goto L_005f568d;
L_005f5658:; BB(0x005f5658);
    /* 005f5658: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f565b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f565e: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5661: jl 0x5f568d */ if ((fS!=fO)) goto L_005f568d;
L_005f5663:; BB(0x005f5663);
    /* 005f5663: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5666: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f5669: cmp ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f566c: jg 0x5f568d */ if ((!fZ&&fS==fO)) goto L_005f568d;
L_005f566e:; BB(0x005f566e);
    /* 005f566e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f5671: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f5674: cmp eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5677: jl 0x5f568d */ if ((fS!=fO)) goto L_005f568d;
L_005f5679:; BB(0x005f5679);
    /* 005f5679: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f567c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f567f: cmp edx, dword ptr [ecx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5682: jg 0x5f568d */ if ((!fZ&&fS==fO)) goto L_005f568d;
L_005f5684:; BB(0x005f5684);
    /* 005f5684: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005f568b: jmp 0x5f5694 */ goto L_005f5694;
L_005f568d:; BB(0x005f568d);
    /* 005f568d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
L_005f5694:; BB(0x005f5694);
    /* 005f5694: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 005f5697: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f569a: ret 8 */ FN_RET(0x005f5640); r_esp += 12; return;
}

void f_005f56a0(void) /* sciFeature::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f56a0);
    /* 005f56a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f56a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f56a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f56a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f56a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f56aa: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005f56ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f56ae: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f56b1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005f56b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f56b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f56b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f56ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f56bd: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005f56c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f56c5u); call_ind(t); }
    /* 005f56c5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f56c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f56c8: ret 4 */ FN_RET(0x005f56a0); r_esp += 8; return;
}

void f_005f58d0(void) /* sciFeature::vfunc43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f58d0);
    /* 005f58d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f58d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f58d3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f58d6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f58d9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f58dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f58df: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005f58e2: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f58e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f58e8: add edx, dword ptr [eax + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f58eb: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f58ee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f58f1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f58f4: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005f58f7: sub eax, dword ptr [edx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f58fa: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f58fd: add eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f5900: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f5903: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5906: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f5909: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f590c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f590f: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f5912: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f5915: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f5918: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f591b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f591e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f5921: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f5924: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005f5927: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f592a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f592d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005f5930: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5931: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f5934: call 0x5f5940 */ r_esp -= 4; W32(r_esp, 0x5f5939u); f_005f5940();
    /* 005f5939: mov esp, ebp */ r_esp = r_ebp;
    /* 005f593b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f593c: ret  */ FN_RET(0x005f58d0); r_esp += 4; return;
}


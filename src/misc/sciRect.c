#include "protos.h"

void f_005f6130(void) /* sciRect::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6130);
    /* 005f6130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6131: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6133: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6134: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f613a: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x5f613fu); f_005f49d0();
    /* 005f613f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6142: mov dword ptr [eax], 0x6d6af4 */ W32((u32)(r_eax), 0x6d6af4u);
    /* 005f6148: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f614b: mov byte ptr [ecx + 0x48], 0 */ W8((u32)(r_ecx+0x48u), 0x0u);
    /* 005f614f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6152: mov byte ptr [edx + 0x49], 0 */ W8((u32)(r_edx+0x49u), 0x0u);
    /* 005f6156: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6159: mov byte ptr [eax + 0x50], 0xff */ W8((u32)(r_eax+0x50u), 0xffu);
    /* 005f615d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6160: mov dword ptr [ecx + 0x54], 4 */ W32((u32)(r_ecx+0x54u), 0x4u);
    /* 005f6167: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f616a: mov byte ptr [edx + 0x4a], 0 */ W8((u32)(r_edx+0x4au), 0x0u);
    /* 005f616e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6171: mov byte ptr [eax + 0x4b], 0 */ W8((u32)(r_eax+0x4bu), 0x0u);
    /* 005f6175: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6178: mov byte ptr [ecx + 0x4c], 0 */ W8((u32)(r_ecx+0x4cu), 0x0u);
    /* 005f617c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f617f: mov byte ptr [edx + 0x4d], 0 */ W8((u32)(r_edx+0x4du), 0x0u);
    /* 005f6183: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6186: mov byte ptr [eax + 0x4e], 0 */ W8((u32)(r_eax+0x4eu), 0x0u);
    /* 005f618a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f618d: mov byte ptr [ecx + 0x4f], 0 */ W8((u32)(r_ecx+0x4fu), 0x0u);
    /* 005f6191: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6194: mov byte ptr [edx + 0x58], 0 */ W8((u32)(r_edx+0x58u), 0x0u);
    /* 005f6198: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f619b: mov byte ptr [eax + 0x59], 0 */ W8((u32)(r_eax+0x59u), 0x0u);
    /* 005f619f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f61a2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f61a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f61a5: ret  */ FN_RET(0x005f6130); r_esp += 4; return;
}

void f_005f6210(void) /* sciRect::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6210);
    /* 005f6210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6211: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6213: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6214: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6217: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f621a: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f621fu); f_005f6b60();
    /* 005f621f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f6222: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6223: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f6226: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6227: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f622a: call 0x5f5110 */ r_esp -= 4; W32(r_esp, 0x5f622fu); f_005f5110();
    /* 005f622f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6232: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f6237u); f_005f6b60();
    /* 005f6237: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6239: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f623a: ret 8 */ FN_RET(0x005f6210); r_esp += 12; return;
}

void f_005f6240(void) /* sciRect::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6240);
    /* 005f6240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6241: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f624a: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f624fu); f_005f6b60();
    /* 005f624f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f6252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6253: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f6256: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f625a: call 0x5f5500 */ r_esp -= 4; W32(r_esp, 0x5f625fu); f_005f5500();
    /* 005f625f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6262: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f6267u); f_005f6b60();
    /* 005f6267: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6269: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f626a: ret 8 */ FN_RET(0x005f6240); r_esp += 12; return;
}

void f_005f6270(void) /* sciRect::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6270);
    /* 005f6270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6271: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6274: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f627a: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5f627fu); f_005f54c0();
    /* 005f627f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f6282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6284: je 0x5f629f */ if (fZ) goto L_005f629f;
L_005f6286:; BB(0x005f6286);
    /* 005f6286: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6289: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x5f628eu); f_005f5440();
    /* 005f628e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6291: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6295: je 0x5f629f */ if (fZ) goto L_005f629f;
L_005f6297:; BB(0x005f6297);
    /* 005f6297: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f629a: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f629fu); f_005f6b60();
L_005f629f:; BB(0x005f629f);
    /* 005f629f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f62a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f62a2: ret  */ FN_RET(0x005f6270); r_esp += 4; return;
}

void f_005f62b0(void) /* sciRect::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f62b0);
    /* 005f62b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f62b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f62b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f62b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f62b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f62ba: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5f62bfu); f_005f54a0();
    /* 005f62bf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f62c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f62c4: je 0x5f62df */ if (fZ) goto L_005f62df;
L_005f62c6:; BB(0x005f62c6);
    /* 005f62c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f62c9: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x5f62ceu); f_005f5420();
    /* 005f62ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f62d1: cmp dword ptr [ecx + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f62d5: je 0x5f62df */ if (fZ) goto L_005f62df;
L_005f62d7:; BB(0x005f62d7);
    /* 005f62d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f62da: call 0x5f6b60 */ r_esp -= 4; W32(r_esp, 0x5f62dfu); f_005f6b60();
L_005f62df:; BB(0x005f62df);
    /* 005f62df: mov esp, ebp */ r_esp = r_ebp;
    /* 005f62e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f62e2: ret  */ FN_RET(0x005f62b0); r_esp += 4; return;
}


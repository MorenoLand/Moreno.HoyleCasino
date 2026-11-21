#include "protos.h"

void f_006260e0(void) /* sub_6260E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006260e0);
    /* 006260e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006260e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006260e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006260e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006260e7: mov al, byte ptr [ebp + 0x3c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x3cu))) & 0xffu);
    /* 006260ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006260eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006260ee: call 0x6269e0 */ r_esp -= 4; W32(r_esp, 0x6260f3u); f_006269e0();
    /* 006260f3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006260f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006260f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006260fa: call 0x626b40 */ r_esp -= 4; W32(r_esp, 0x6260ffu); f_00626b40();
    /* 006260ff: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00626102: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626103: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626106: call 0x626a10 */ r_esp -= 4; W32(r_esp, 0x62610bu); f_00626a10();
    /* 0062610b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062610e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062610f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00626112: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626113: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626116: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00626118: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062611b: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 0062611e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x626120u); call_ind(t); }
    /* 00626120: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00626123: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626124: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00626127: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626128: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062612b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062612d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626130: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00626133: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x626135u); call_ind(t); }
    /* 00626135: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00626138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626139: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062613c: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x626141u); f_005f53e0();
    /* 00626141: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626144: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00626146: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626149: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0062614c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62614eu); call_ind(t); }
    /* 0062614e: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00626151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626152: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626155: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00626157: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062615a: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0062615d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62615fu); call_ind(t); }
    /* 0062615f: mov al, byte ptr [ebp + 0x2c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x2cu))) & 0xffu);
    /* 00626162: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626163: mov cl, byte ptr [ebp + 0x28] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 00626166: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626167: mov dl, byte ptr [ebp + 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 0062616a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062616b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062616e: call 0x626800 */ r_esp -= 4; W32(r_esp, 0x626173u); f_00626800();
    /* 00626173: mov al, byte ptr [ebp + 0x38] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x38u))) & 0xffu);
    /* 00626176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626177: mov cl, byte ptr [ebp + 0x34] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x34u))) & 0xffu);
    /* 0062617a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062617b: mov dl, byte ptr [ebp + 0x30] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x30u))) & 0xffu);
    /* 0062617e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062617f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626182: call 0x6268a0 */ r_esp -= 4; W32(r_esp, 0x626187u); f_006268a0();
    /* 00626187: mov esp, ebp */ r_esp = r_ebp;
    /* 00626189: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062618a: ret 0x3c */ FN_RET(0x006260e0); r_esp += 64; return;
}

void f_006267d0(void) /* sub_6267D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006267d0);
    /* 006267d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006267d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006267d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006267d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006267d7: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 006267da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006267db: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 006267de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006267df: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006267e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006267e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006267e6: call 0x626800 */ r_esp -= 4; W32(r_esp, 0x6267ebu); f_00626800();
    /* 006267eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006267ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006267ee: ret 4 */ FN_RET(0x006267d0); r_esp += 8; return;
}

void f_00626800(void) /* sub_626800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626800);
    /* 00626800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626801: mov ebp, esp */ r_ebp = r_esp;
    /* 00626803: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626804: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626807: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062680a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0062680d: mov byte ptr [eax + 0x4b], cl */ W8((u32)(r_eax+0x4bu), (u8)r_ecx);
    /* 00626810: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626813: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00626816: mov byte ptr [edx + 0x4c], al */ W8((u32)(r_edx+0x4cu), (u8)r_eax);
    /* 00626819: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062681c: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0062681f: mov byte ptr [ecx + 0x4d], dl */ W8((u32)(r_ecx+0x4du), (u8)r_edx);
    /* 00626822: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626825: cmp dword ptr [eax + 0x54], 0 */ {  u32 a = R32((u32)(r_eax+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626829: je 0x626867 */ if (fZ) goto L_00626867;
L_0062682b:; BB(0x0062682b);
    /* 0062682b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062682e: add ecx, 0x4b */ {  u32 a = r_ecx; u32 b = 0x4bu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00626831: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626832: mov edx, esp */ r_edx = r_esp;
    /* 00626834: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 00626837: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0062683a: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 0062683d: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 00626840: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626843: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00626846: call 0x5f6430 */ r_esp -= 4; W32(r_esp, 0x62684bu); f_005f6430();
    /* 0062684b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062684e: movzx ecx, byte ptr [eax + 0x68] */ r_ecx = (u32)R8((u32)(r_eax+0x68u));
    /* 00626852: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626854: je 0x626867 */ if (fZ) goto L_00626867;
L_00626856:; BB(0x00626856);
    /* 00626856: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626858: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062685a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062685c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062685f: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00626862: call 0x5f6580 */ r_esp -= 4; W32(r_esp, 0x626867u); f_005f6580();
L_00626867:; BB(0x00626867);
    /* 00626867: mov esp, ebp */ r_esp = r_ebp;
    /* 00626869: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062686a: ret 0xc */ FN_RET(0x00626800); r_esp += 16; return;
}

void f_00626870(void) /* sub_626870 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626870);
    /* 00626870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626871: mov ebp, esp */ r_ebp = r_esp;
    /* 00626873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626877: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 0062687a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062687b: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 0062687e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062687f: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00626882: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626883: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626886: call 0x6268a0 */ r_esp -= 4; W32(r_esp, 0x62688bu); f_006268a0();
    /* 0062688b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062688d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062688e: ret 4 */ FN_RET(0x00626870); r_esp += 8; return;
}

void f_006268a0(void) /* sub_6268A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006268a0);
    /* 006268a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006268a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006268a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006268a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006268a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268aa: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006268ad: mov byte ptr [eax + 0x4e], cl */ W8((u32)(r_eax+0x4eu), (u8)r_ecx);
    /* 006268b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268b3: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 006268b6: mov byte ptr [edx + 0x4f], al */ W8((u32)(r_edx+0x4fu), (u8)r_eax);
    /* 006268b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268bc: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 006268bf: mov byte ptr [ecx + 0x50], dl */ W8((u32)(r_ecx+0x50u), (u8)r_edx);
    /* 006268c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268c5: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006268c9: je 0x626916 */ if (fZ) goto L_00626916;
L_006268cb:; BB(0x006268cb);
    /* 006268cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268ce: add ecx, 0x4e */ {  u32 a = r_ecx; u32 b = 0x4eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006268d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006268d2: mov edx, esp */ r_edx = r_esp;
    /* 006268d4: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 006268d7: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 006268da: mov cl, byte ptr [ecx + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+0x2u))) & 0xffu);
    /* 006268dd: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 006268e0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268e3: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 006268e6: call 0x5f6430 */ r_esp -= 4; W32(r_esp, 0x6268ebu); f_005f6430();
    /* 006268eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268ee: movzx ecx, byte ptr [eax + 0x68] */ r_ecx = (u32)R8((u32)(r_eax+0x68u));
    /* 006268f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006268f4: je 0x626916 */ if (fZ) goto L_00626916;
L_006268f6:; BB(0x006268f6);
    /* 006268f6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006268f9: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006268fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006268fd: mov eax, esp */ r_eax = r_esp;
    /* 006268ff: mov cx, word ptr [edx] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00626902: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00626905: mov dl, byte ptr [edx + 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x2u))) & 0xffu);
    /* 00626908: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 0062690b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062690e: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00626911: call 0x5f6510 */ r_esp -= 4; W32(r_esp, 0x626916u); f_005f6510();
L_00626916:; BB(0x00626916);
    /* 00626916: mov esp, ebp */ r_esp = r_ebp;
    /* 00626918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626919: ret 0xc */ FN_RET(0x006268a0); r_esp += 16; return;
}

void f_00626920(void) /* sub_626920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626920);
    /* 00626920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626921: mov ebp, esp */ r_ebp = r_esp;
    /* 00626923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626927: mov al, byte ptr [ebp + 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xau))) & 0xffu);
    /* 0062692a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062692b: mov cl, byte ptr [ebp + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x9u))) & 0xffu);
    /* 0062692e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062692f: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00626932: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626933: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626936: call 0x626950 */ r_esp -= 4; W32(r_esp, 0x62693bu); f_00626950();
    /* 0062693b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062693d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062693e: ret 4 */ FN_RET(0x00626920); r_esp += 8; return;
}

void f_00626950(void) /* sub_626950 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626950);
    /* 00626950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626951: mov ebp, esp */ r_ebp = r_esp;
    /* 00626953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626957: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062695a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0062695d: mov byte ptr [eax + 0x48], cl */ W8((u32)(r_eax+0x48u), (u8)r_ecx);
    /* 00626960: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626963: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00626966: mov byte ptr [edx + 0x49], al */ W8((u32)(r_edx+0x49u), (u8)r_eax);
    /* 00626969: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062696c: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0062696f: mov byte ptr [ecx + 0x4a], dl */ W8((u32)(r_ecx+0x4au), (u8)r_edx);
    /* 00626972: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626975: movzx ecx, byte ptr [eax + 0x68] */ r_ecx = (u32)R8((u32)(r_eax+0x68u));
    /* 00626979: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062697b: je 0x6269cf */ if (fZ) goto L_006269cf;
L_0062697d:; BB(0x0062697d);
    /* 0062697d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626980: cmp dword ptr [edx + 0x58], 0 */ {  u32 a = R32((u32)(r_edx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626984: je 0x6269a6 */ if (fZ) goto L_006269a6;
L_00626986:; BB(0x00626986);
    /* 00626986: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626989: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062698c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062698d: mov ecx, esp */ r_ecx = r_esp;
    /* 0062698f: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 00626992: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00626995: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 00626998: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0062699b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062699e: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 006269a1: call 0x5f6510 */ r_esp -= 4; W32(r_esp, 0x6269a6u); f_005f6510();
L_006269a6:; BB(0x006269a6);
    /* 006269a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006269a9: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006269ad: je 0x6269cf */ if (fZ) goto L_006269cf;
L_006269af:; BB(0x006269af);
    /* 006269af: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006269b2: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006269b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006269b6: mov ecx, esp */ r_ecx = r_esp;
    /* 006269b8: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 006269bb: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 006269be: mov al, byte ptr [eax + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 006269c1: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 006269c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006269c7: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 006269ca: call 0x5ee920 */ r_esp -= 4; W32(r_esp, 0x6269cfu); f_005ee920();
L_006269cf:; BB(0x006269cf);
    /* 006269cf: mov esp, ebp */ r_esp = r_ebp;
    /* 006269d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006269d2: ret 0xc */ FN_RET(0x00626950); r_esp += 16; return;
}

void f_006269e0(void) /* sub_6269E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006269e0);
    /* 006269e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006269e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006269e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006269e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006269e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006269ea: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006269ed: mov byte ptr [eax + 0x68], cl */ W8((u32)(r_eax+0x68u), (u8)r_ecx);
    /* 006269f0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006269f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006269f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006269f8: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 006269fb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6269fdu); call_ind(t); }
    /* 006269fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006269ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626a00: ret 4 */ FN_RET(0x006269e0); r_esp += 8; return;
}

void f_00626a10(void) /* sub_626A10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626a10);
    /* 00626a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00626a13: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626a17: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00626a1a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a1d: cmp dword ptr [eax + 0x60], 0 */ {  u32 a = R32((u32)(r_eax+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a21: je 0x626a42 */ if (fZ) goto L_00626a42;
L_00626a23:; BB(0x00626a23);
    /* 00626a23: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a26: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00626a29: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00626a2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626a2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626a30: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x626a35u); f_00686cae();
    /* 00626a35: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626a38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a3b: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
L_00626a42:; BB(0x00626a42);
    /* 00626a42: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a46: je 0x626b18 */ if (fZ) goto L_00626b18;
L_00626a4c:; BB(0x00626a4c);
    /* 00626a4c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00626a4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626a50: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x626a55u); f_00686ecc();
    /* 00626a55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626a58: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626a5c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x626a61u); f_00686d82();
    /* 00626a61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626a64: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00626a67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a6a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00626a6d: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 00626a70: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00626a73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626a74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a77: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00626a7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626a7b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x626a80u); f_00686d8e();
    /* 00626a80: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626a83: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a86: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626a8a: je 0x626b18 */ if (fZ) goto L_00626b18;
L_00626a90:; BB(0x00626a90);
    /* 00626a90: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a93: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00626a96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626a97: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a9a: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00626a9d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626aa0: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626aa3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00626aa5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00626aab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x626aadu); call_ind(t); }
    /* 00626aad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626ab0: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626ab3: call 0x5ef050 */ r_esp -= 4; W32(r_esp, 0x626ab8u); f_005ef050();
    /* 00626ab8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00626abb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626abe: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00626ac1: call 0x5ef130 */ r_esp -= 4; W32(r_esp, 0x626ac6u); f_005ef130();
    /* 00626ac6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00626ac9: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626acc: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00626acf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626ad2: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x626ad7u); f_005f5550();
    /* 00626ad7: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626ada: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00626adc: jge 0x626ae9 */ if ((fS==fO)) goto L_00626ae9;
L_00626ade:; BB(0x00626ade);
    /* 00626ade: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626ae1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626ae4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00626ae7: jmp 0x626af7 */ goto L_00626af7;
L_00626ae9:; BB(0x00626ae9);
    /* 00626ae9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626aec: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x626af1u); f_005f5550();
    /* 00626af1: sub eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00626af4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00626af7:; BB(0x00626af7);
    /* 00626af7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00626afa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626afb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626afe: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00626b01: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x626b06u); f_005ecc60();
    /* 00626b06: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00626b09: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00626b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626b0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626b10: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00626b13: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x626b18u); f_005eccb0();
L_00626b18:; BB(0x00626b18);
    /* 00626b18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626b19: mov esp, ebp */ r_esp = r_ebp;
    /* 00626b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626b1c: ret 4 */ FN_RET(0x00626a10); r_esp += 8; return;
}

void f_00626b40(void) /* sub_626B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00626b40);
    /* 00626b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00626b43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626b44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00626b47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626b4a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00626b4d: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 00626b50: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626b53: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626b57: je 0x626b83 */ if (fZ) goto L_00626b83;
L_00626b59:; BB(0x00626b59);
    /* 00626b59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626b5a: mov eax, esp */ r_eax = r_esp;
    /* 00626b5c: mov cx, word ptr [0x75ee1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00626b63: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00626b66: mov dl, byte ptr [0x75ee1e] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00626b6c: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 00626b6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626b71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626b74: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00626b77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00626b78: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00626b7b: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00626b7e: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x626b83u); f_005ecd00();
L_00626b83:; BB(0x00626b83);
    /* 00626b83: mov esp, ebp */ r_esp = r_ebp;
    /* 00626b85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626b86: ret 4 */ FN_RET(0x00626b40); r_esp += 8; return;
}


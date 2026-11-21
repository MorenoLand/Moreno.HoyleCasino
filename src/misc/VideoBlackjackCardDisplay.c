#include "protos.h"

void f_00545f70(void) /* VideoBlackjackCardDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545f70);
    /* 00545f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00545f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545f77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545f79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545f7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545f7e: call 0x643ce0 */ r_esp -= 4; W32(r_esp, 0x545f83u); f_00643ce0();
    /* 00545f83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545f86: mov dword ptr [eax], 0x6c679c */ W32((u32)(r_eax), 0x6c679cu);
    /* 00545f8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545f8f: mov byte ptr [ecx + 0xa], 0 */ W8((u32)(r_ecx+0xau), 0x0u);
    /* 00545f93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545f96: mov esp, ebp */ r_esp = r_ebp;
    /* 00545f98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545f99: ret  */ FN_RET(0x00545f70); r_esp += 4; return;
}

void f_00545fc0(void) /* VideoBlackjackCardDisplay::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545fc0);
    /* 00545fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00545fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545fc7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00545fca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545fcb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545fce: call 0x6447e0 */ r_esp -= 4; W32(r_esp, 0x545fd3u); f_006447e0();
    /* 00545fd3: mov esp, ebp */ r_esp = r_ebp;
    /* 00545fd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545fd6: ret 4 */ FN_RET(0x00545fc0); r_esp += 8; return;
}

void f_00545ff0(void) /* VideoBlackjackCardDisplay::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545ff0);
    /* 00545ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 00545ff3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545ff6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00545ff9: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00546000: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 00546007: mov dword ptr [ebp - 0xc], 2 */ W32((u32)(r_ebp+0xfffffff4u), 0x2u);
    /* 0054600e: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00546015: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054601c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054601f: mov cx, word ptr [eax + 0x190] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+0x190u))) & 0xffffu);
    /* 00546026: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00546027: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54602cu); f_00641280();
    /* 0054602c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054602f: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00546032: jne 0x54603d */ if (!fZ) goto L_0054603d;
L_00546034:; BB(0x00546034);
    /* 00546034: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0054603b: jmp 0x546053 */ goto L_00546053;
L_0054603d:; BB(0x0054603d);
    /* 0054603d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546040: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00546047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546048: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54604du); f_00641280();
    /* 0054604d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00546050: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
L_00546053:; BB(0x00546053);
    /* 00546053: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00546056: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00546059: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054605c: mov ax, word ptr [edx + 0x190] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x190u))) & 0xffffu);
    /* 00546063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00546064: call 0x641290 */ r_esp -= 4; W32(r_esp, 0x546069u); f_00641290();
    /* 00546069: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054606c: mov ecx, dword ptr [ebp + eax*4 - 0x14] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffecu));
    /* 00546070: imul ecx, ecx, 0xd */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xdu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00546073: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00546076: lea eax, [ecx + edx - 1] */ r_eax = (u32)(r_ecx+r_edx+0xffffffffu);
    /* 0054607a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054607b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054607e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00546080: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00546083: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00546089: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x54608bu); call_ind(t); }
    /* 0054608b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054608e: mov dx, word ptr [ecx + 0x190] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x190u))) & 0xffffu);
    /* 00546095: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00546096: call 0x641280 */ r_esp -= 4; W32(r_esp, 0x54609bu); f_00641280();
    /* 0054609b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054609e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005460a1: jne 0x5460b5 */ if (!fZ) goto L_005460b5;
L_005460a3:; BB(0x005460a3);
    /* 005460a3: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 005460a5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005460a8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005460aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005460ad: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005460b3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5460b5u); call_ind(t); }
L_005460b5:; BB(0x005460b5);
    /* 005460b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005460b8: mov dl, byte ptr [ecx + 0x1a4] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x1a4u))) & 0xffu);
    /* 005460be: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 005460c1: movzx eax, byte ptr [ebp - 0x19] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 005460c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005460c7: jne 0x5460db */ if (!fZ) goto L_005460db;
L_005460c9:; BB(0x005460c9);
    /* 005460c9: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005460cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005460ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005460d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005460d3: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005460d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5460dbu); call_ind(t); }
L_005460db:; BB(0x005460db);
    /* 005460db: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005460de: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x5460e3u); f_005eb570();
    /* 005460e3: mov esp, ebp */ r_esp = r_ebp;
    /* 005460e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005460e6: ret  */ FN_RET(0x00545ff0); r_esp += 4; return;
}

void f_005460f0(void) /* VideoBlackjackCardDisplay::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005460f0);
    /* 005460f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005460f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005460f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005460f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005460f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005460fa: call 0x5eb5a0 */ r_esp -= 4; W32(r_esp, 0x5460ffu); f_005eb5a0();
    /* 005460ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00546101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00546102: ret  */ FN_RET(0x005460f0); r_esp += 4; return;
}


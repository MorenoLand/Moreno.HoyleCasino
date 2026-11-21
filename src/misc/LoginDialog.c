#include "protos.h"

void f_0065db00(void) /* LoginDialog::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065db00);
    /* 0065db00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065db01: mov ebp, esp */ r_ebp = r_esp;
    /* 0065db03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065db04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065db07: mov eax, 0x30d4ef */ r_eax = 0x30d4efu;
    /* 0065db0c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065db0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065db0f: ret  */ FN_RET(0x0065db00); r_esp += 4; return;
}

void f_0065dbd0(void) /* LoginDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065dbd0);
    /* 0065dbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065dbd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbd5: push 0x6ac898 */ { u32 v = 0x6ac898u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065dbe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbe1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbe2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065dbe7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065dbe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065dbea: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065dbed: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065dbf3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065dbf6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dbf9: call 0x65ba70 */ r_esp -= 4; W32(r_esp, 0x65dbfeu); f_0065ba70();
    /* 0065dbfe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065dc05: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc08: mov dword ptr [eax], 0x6deac4 */ W32((u32)(r_eax), 0x6deac4u);
    /* 0065dc0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dc10: push 0x30d4d7 */ { u32 v = 0x30d4d7u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dc15: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc18: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x65dc1du); f_005f83d0();
    /* 0065dc1d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc20: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0065dc23: mov byte ptr [ecx + 0x1d4], dl */ W8((u32)(r_ecx+0x1d4u), (u8)r_edx);
    /* 0065dc29: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc2c: mov cl, byte ptr [ebp + 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0065dc2f: mov byte ptr [eax + 0x1d5], cl */ W8((u32)(r_eax+0x1d5u), (u8)r_ecx);
    /* 0065dc35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc38: movzx eax, byte ptr [edx + 0x1d4] */ r_eax = (u32)R8((u32)(r_edx+0x1d4u));
    /* 0065dc3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dc41: je 0x65dc4d */ if (fZ) goto L_0065dc4d;
L_0065dc43:; BB(0x0065dc43);
    /* 0065dc43: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc46: mov byte ptr [ecx + 0x1d5], 1 */ W8((u32)(r_ecx+0x1d5u), 0x1u);
L_0065dc4d:; BB(0x0065dc4d);
    /* 0065dc4d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc50: mov al, byte ptr [ebp + 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0065dc53: mov byte ptr [edx + 0x1d6], al */ W8((u32)(r_edx+0x1d6u), (u8)r_eax);
    /* 0065dc59: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc5c: mov dword ptr [ecx + 0x1c8], 0 */ W32((u32)(r_ecx+0x1c8u), 0x0u);
    /* 0065dc66: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc69: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0065dc6c: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
    /* 0065dc72: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc75: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0065dc78: mov dword ptr [ecx + 0x1e8], edx */ W32((u32)(r_ecx+0x1e8u), r_edx);
    /* 0065dc7e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc81: mov dword ptr [eax + 0x1d0], 0 */ W32((u32)(r_eax+0x1d0u), 0x0u);
    /* 0065dc8b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dc8e: mov dword ptr [ecx + 0x1cc], 0 */ W32((u32)(r_ecx+0x1ccu), 0x0u);
    /* 0065dc98: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065dc9f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dca2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065dca5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065dcac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065dcad: mov esp, ebp */ r_esp = r_ebp;
    /* 0065dcaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065dcb0: ret 0x14 */ FN_RET(0x0065dbd0); r_esp += 24; return;
}

void f_0065dcc0(void) /* LoginDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065dcc0);
    /* 0065dcc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065dcc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065dcc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dcc5: push 0x6ac8bb */ { u32 v = 0x6ac8bbu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dcca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065dcd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065dcd1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065dcd4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065dcd9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065dcdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065dcdc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065dcdf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065dce5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0065dce8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065dceb: mov dword ptr [eax], 0x6deac4 */ W32((u32)(r_eax), 0x6deac4u);
    /* 0065dcf1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065dcf8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065dcfb: cmp dword ptr [ecx + 0x1c8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dd02: je 0x65dd36 */ if (fZ) goto L_0065dd36;
L_0065dd04:; BB(0x0065dd04);
    /* 0065dd04: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065dd07: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0065dd0d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065dd10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065dd13: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065dd16: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dd1a: je 0x65dd2f */ if (fZ) goto L_0065dd2f;
L_0065dd1c:; BB(0x0065dd1c);
    /* 0065dd1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dd1e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dd21: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065dd23: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065dd26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065dd28: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65dd2au); call_ind(t); }
    /* 0065dd2a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0065dd2d: jmp 0x65dd36 */ goto L_0065dd36;
L_0065dd2f:; BB(0x0065dd2f);
    /* 0065dd2f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0065dd36:; BB(0x0065dd36);
    /* 0065dd36: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065dd39: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0065dd3f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065dd42: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065dd45: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0065dd48: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dd4c: je 0x65dd61 */ if (fZ) goto L_0065dd61;
L_0065dd4e:; BB(0x0065dd4e);
    /* 0065dd4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dd50: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065dd53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065dd55: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065dd58: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065dd5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65dd5cu); call_ind(t); }
    /* 0065dd5c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065dd5f: jmp 0x65dd68 */ goto L_0065dd68;
L_0065dd61:; BB(0x0065dd61);
    /* 0065dd61: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0065dd68:; BB(0x0065dd68);
    /* 0065dd68: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065dd6b: mov edx, dword ptr [ecx + 0x1cc] */ r_edx = R32((u32)(r_ecx+0x1ccu));
    /* 0065dd71: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0065dd74: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065dd77: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065dd7a: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065dd7e: je 0x65dd93 */ if (fZ) goto L_0065dd93;
L_0065dd80:; BB(0x0065dd80);
    /* 0065dd80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dd82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065dd85: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065dd87: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065dd8a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065dd8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65dd8eu); call_ind(t); }
    /* 0065dd8e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065dd91: jmp 0x65dd9a */ goto L_0065dd9a;
L_0065dd93:; BB(0x0065dd93);
    /* 0065dd93: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0065dd9a:; BB(0x0065dd9a);
    /* 0065dd9a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065dda1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065dda4: call 0x65bae0 */ r_esp -= 4; W32(r_esp, 0x65dda9u); f_0065bae0();
    /* 0065dda9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065ddac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065ddb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065ddb4: mov esp, ebp */ r_esp = r_ebp;
    /* 0065ddb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065ddb7: ret  */ FN_RET(0x0065dcc0); r_esp += 4; return;
}

void f_0065dee0(void) /* LoginDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065dee0);
    /* 0065dee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065dee1: mov ebp, esp */ r_ebp = r_esp;
    /* 0065dee3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dee5: push 0x6ac8ec */ { u32 v = 0x6ac8ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0065deea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065def0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065def1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065def4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065def9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065defb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065defc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065deff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065df05: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065df08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065df0b: call 0x65bb00 */ r_esp -= 4; W32(r_esp, 0x65df10u); f_0065bb00();
    /* 0065df10: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065df12: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df16: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df18: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df1a: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df1c: push 0x1f9 */ { u32 v = 0x1f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df21: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df23: push 0x6dec64 */ { u32 v = 0x6dec64u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df28: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65df2du); f_00630f40();
    /* 0065df2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065df30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065df31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df35: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065df38: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65df3du); f_005fa5b0();
    /* 0065df3d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065df40: movzx ecx, byte ptr [eax + 0x1d5] */ r_ecx = (u32)R8((u32)(r_eax+0x1d5u));
    /* 0065df47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065df49: je 0x65df71 */ if (fZ) goto L_0065df71;
L_0065df4b:; BB(0x0065df4b);
    /* 0065df4b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065df4e: movzx eax, byte ptr [edx + 0x1d4] */ r_eax = (u32)R8((u32)(r_edx+0x1d4u));
    /* 0065df55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065df57: jne 0x65df71 */ if (!fZ) goto L_0065df71;
L_0065df59:; BB(0x0065df59);
    /* 0065df59: push 0x6dec48 */ { u32 v = 0x6dec48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df5e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65df63u); f_00630f40();
    /* 0065df63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065df66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065df67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065df6c: call 0x5fb5a0 */ r_esp -= 4; W32(r_esp, 0x65df71u); f_005fb5a0();
L_0065df71:; BB(0x0065df71);
    /* 0065df71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df77: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df7c: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065df7e: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df82: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df84: push 0xef */ { u32 v = 0xefu; r_esp -= 4; W32(r_esp, v); }
    /* 0065df89: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df94: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065df97: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65df9cu); f_005fa880();
    /* 0065df9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065df9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfa2: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfa7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfac: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfb3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfb5: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfba: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfc5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065dfc8: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65dfcdu); f_005fa880();
    /* 0065dfcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfd3: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfd8: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfda: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfde: push 0x180 */ { u32 v = 0x180u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfe3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfe5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfe7: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dfee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dff0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065dff3: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65dff8u); f_005fa880();
    /* 0065dff8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dffa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dffc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065dffe: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e003: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e008: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e00d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e00f: push 0x181 */ { u32 v = 0x181u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e014: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e016: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e018: push 0x202 */ { u32 v = 0x202u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e01d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e01f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e021: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e024: call 0x5fa880 */ r_esp -= 4; W32(r_esp, 0x65e029u); f_005fa880();
    /* 0065e029: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e02b: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e030: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e035: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e03a: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e03f: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e041: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e043: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e045: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e047: push 0xf5 */ { u32 v = 0xf5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e04c: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e051: push 0x10e */ { u32 v = 0x10eu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e056: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e058: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e05d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e05f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e061: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e064: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x65e069u); f_005fa790();
    /* 0065e069: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0065e070: jmp 0x65e07b */ goto L_0065e07b;
L_0065e072:; BB(0x0065e072);
    /* 0065e072: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e075: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065e078: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0065e07b:; BB(0x0065e07b);
    /* 0065e07b: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065e07f: jge 0x65e10f */ if ((fS==fO)) goto L_0065e10f;
L_0065e085:; BB(0x0065e085);
    /* 0065e085: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e087: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e089: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065e08b: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e08d: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e08f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e092: mov eax, dword ptr [edx*4 + 0x7709ec] */ r_eax = R32((u32)(r_edx*4+0x7709ecu));
    /* 0065e099: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e09a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65e09fu); f_00630f40();
    /* 0065e09f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e0a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0a3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e0a8: mov edx, dword ptr [ecx*8 + 0x7709c0] */ r_edx = R32((u32)(r_ecx*8+0x7709c0u));
    /* 0065e0af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0b0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e0b3: mov ecx, dword ptr [eax*8 + 0x7709bc] */ r_ecx = R32((u32)(r_eax*8+0x7709bcu));
    /* 0065e0ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0bb: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e0be: mov eax, dword ptr [edx*4 + 0x7709a4] */ r_eax = R32((u32)(r_edx*4+0x7709a4u));
    /* 0065e0c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e0c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e0cf: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65e0d4u); f_005f9de0();
    /* 0065e0d4: movzx edx, byte ptr [0x795f95] */ r_edx = (u32)R8((u32)(0x795f95u));
    /* 0065e0db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e0dd: je 0x65e10a */ if (fZ) goto L_0065e10a;
L_0065e0df:; BB(0x0065e0df);
    /* 0065e0df: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e0e3: je 0x65e0eb */ if (fZ) goto L_0065e0eb;
L_0065e0e5:; BB(0x0065e0e5);
    /* 0065e0e5: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e0e9: jne 0x65e10a */ if (!fZ) goto L_0065e10a;
L_0065e0eb:; BB(0x0065e0eb);
    /* 0065e0eb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065e0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e0ef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e0f2: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e0f7u); f_005fb300();
    /* 0065e0f7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065e0fa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065e0fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e0ff: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065e102: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0065e108: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e10au); call_ind(t); }
L_0065e10a:; BB(0x0065e10a);
    /* 0065e10a: jmp 0x65e072 */ goto L_0065e072;
L_0065e10f:; BB(0x0065e10f);
    /* 0065e10f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e115: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e117: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e11d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0065e123: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e125u); call_ind(t); }
    /* 0065e125: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065e128: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e12a: je 0x65e160 */ if (fZ) goto L_0065e160;
L_0065e12c:; BB(0x0065e12c);
    /* 0065e12c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e12e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e131: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e136u); f_005fb300();
    /* 0065e136: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0065e139: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065e13c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065e13e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065e141: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0065e144: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65e146u); call_ind(t); }
    /* 0065e146: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e148: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e14b: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e150u); f_005fb300();
    /* 0065e150: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0065e153: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065e156: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e158: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065e15b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065e15e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e160u); call_ind(t); }
L_0065e160:; BB(0x0065e160);
    /* 0065e160: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e166: call 0x639840 */ r_esp -= 4; W32(r_esp, 0x65e16bu); f_00639840();
    /* 0065e16b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065e16e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e170: je 0x65e19b */ if (fZ) goto L_0065e19b;
L_0065e172:; BB(0x0065e172);
    /* 0065e172: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e174: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e176: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065e178: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e17a: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e17c: push 0x6dec3c */ { u32 v = 0x6dec3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e181: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e183: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e185: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065e187: push 0x30d4ef */ { u32 v = 0x30d4efu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e18c: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e191: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e193: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e196: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65e19bu); f_005f9de0();
L_0065e19b:; BB(0x0065e19b);
    /* 0065e19b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e19d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e19f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1a1: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1a3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1a5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1a7: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1ac: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1ae: push 0x6dec24 */ { u32 v = 0x6dec24u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1b3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65e1b8u); f_00630f40();
    /* 0065e1b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e1bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1c0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e1c3: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65e1c8u); f_005fa5b0();
    /* 0065e1c8: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e1cd: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65e1d2u); f_00686d82();
    /* 0065e1d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e1d5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065e1d8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065e1df: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e1e3: je 0x65e1f2 */ if (fZ) goto L_0065e1f2;
L_0065e1e5:; BB(0x0065e1e5);
    /* 0065e1e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065e1e8: call 0x660400 */ r_esp -= 4; W32(r_esp, 0x65e1edu); f_00660400();
    /* 0065e1ed: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065e1f0: jmp 0x65e1f9 */ goto L_0065e1f9;
L_0065e1f2:; BB(0x0065e1f2);
    /* 0065e1f2: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0065e1f9:; BB(0x0065e1f9);
    /* 0065e1f9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065e1fc: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0065e1ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e206: push 0x30d4d9 */ { u32 v = 0x30d4d9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e20b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e20d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e20f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e211: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e213: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e215: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e217: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e219: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e21b: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e220: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e222: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e224: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e226: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e228: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e22a: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e22f: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e231: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e233: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e238: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e23d: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e23f: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e244: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e249: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e24b: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e250: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e255: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e257: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e259: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e25b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e25d: push 0x30d4d8 */ { u32 v = 0x30d4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e262: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e264: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065e267: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e268: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e26b: call 0x5fac90 */ r_esp -= 4; W32(r_esp, 0x65e270u); f_005fac90();
    /* 0065e270: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e272: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65e277u); f_00686d82();
    /* 0065e277: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e27a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0065e27d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065e284: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e288: je 0x65e2a3 */ if (fZ) goto L_0065e2a3;
L_0065e28a:; BB(0x0065e28a);
    /* 0065e28a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e28d: call 0x680b70 */ r_esp -= 4; W32(r_esp, 0x65e292u); f_00680b70();
    /* 0065e292: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e295: mov dword ptr [ecx], 0x6deb74 */ W32((u32)(r_ecx), 0x6deb74u);
    /* 0065e29b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065e29e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0065e2a1: jmp 0x65e2aa */ goto L_0065e2aa;
L_0065e2a3:; BB(0x0065e2a3);
    /* 0065e2a3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0065e2aa:; BB(0x0065e2aa);
    /* 0065e2aa: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065e2ad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065e2b0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065e2b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e2ba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065e2bd: mov dword ptr [ecx + 0x1d0], edx */ W32((u32)(r_ecx+0x1d0u), r_edx);
    /* 0065e2c3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e2c6: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0065e2cc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e2cf: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0065e2d2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2d6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2d8: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2da: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2df: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2e1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2e3: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2e5: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2ea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65e2efu); f_00630f40();
    /* 0065e2ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065e2f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2f3: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2f8: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e2fd: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e302: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e307: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e309: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e30b: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e30d: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e312: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e314: push 0x11c */ { u32 v = 0x11cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065e319: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e31b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e31e: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0065e324: call 0x680ca0 */ r_esp -= 4; W32(r_esp, 0x65e329u); f_00680ca0();
    /* 0065e329: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e32c: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 0065e332: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e335: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0065e33b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065e33d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065e340: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e342u); call_ind(t); }
    /* 0065e342: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e348: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e34a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065e350: mov eax, dword ptr [edx + 0x360] */ r_eax = R32((u32)(r_edx+0x360u));
    /* 0065e356: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e358u); call_ind(t); }
    /* 0065e358: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065e35b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065e35d: je 0x65e399 */ if (fZ) goto L_0065e399;
L_0065e35f:; BB(0x0065e35f);
    /* 0065e35f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e361: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e364: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e369u); f_005fb300();
    /* 0065e369: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0065e36c: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e36f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065e371: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065e374: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0065e37a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65e37cu); call_ind(t); }
    /* 0065e37c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0065e37e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e381: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65e386u); f_005fb300();
    /* 0065e386: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0065e389: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0065e38c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065e38e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0065e391: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0065e397: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e399u); call_ind(t); }
L_0065e399:; BB(0x0065e399);
    /* 0065e399: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e39c: call 0x65e3c0 */ r_esp -= 4; W32(r_esp, 0x65e3a1u); f_0065e3c0();
    /* 0065e3a1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e3a4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065e3a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065e3a9: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0065e3af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65e3b1u); call_ind(t); }
    /* 0065e3b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065e3b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065e3bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065e3bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0065e3be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065e3bf: ret  */ FN_RET(0x0065dee0); r_esp += 4; return;
}


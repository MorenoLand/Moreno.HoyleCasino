#include "protos.h"

void f_005dcb80(void) /* CasinoShell::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcb80);
    /* 005dcb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb81: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcb83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb85: push 0x6a9509 */ { u32 v = 0x6a9509u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dcb90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb91: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcb94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dcb99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dcb9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcb9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dcb9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dcba5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dcba8: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbad: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcbb2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcbb5: call 0x6316e0 */ r_esp -= 4; W32(r_esp, 0x5dcbbau); f_006316e0();
    /* 005dcbba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcbc1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcbc4: mov dword ptr [eax], 0x6d4704 */ W32((u32)(r_eax), 0x6d4704u);
    /* 005dcbca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcbcd: mov byte ptr [ecx + 0x4ee8], 0 */ W8((u32)(r_ecx+0x4ee8u), 0x0u);
    /* 005dcbd4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcbd7: mov byte ptr [edx + 0x4ee9], 0 */ W8((u32)(r_edx+0x4ee9u), 0x0u);
    /* 005dcbde: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcbe1: mov byte ptr [eax + 0x4eea], 0 */ W8((u32)(r_eax+0x4eeau), 0x0u);
    /* 005dcbe8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcbeb: mov byte ptr [ecx + 0x4f05], 0 */ W8((u32)(r_ecx+0x4f05u), 0x0u);
    /* 005dcbf2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcbf5: mov dword ptr [edx + 0x4eec], 0 */ W32((u32)(r_edx+0x4eecu), 0x0u);
    /* 005dcbff: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc02: mov dword ptr [eax + 0x4ef0], 0 */ W32((u32)(r_eax+0x4ef0u), 0x0u);
    /* 005dcc0c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc0f: mov dword ptr [ecx + 0x4ef4], 2 */ W32((u32)(r_ecx+0x4ef4u), 0x2u);
    /* 005dcc19: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc1c: mov dword ptr [edx + 0x4ef8], 1 */ W32((u32)(r_edx+0x4ef8u), 0x1u);
    /* 005dcc26: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc29: mov dword ptr [eax + 0x4efc], 0xffffffff */ W32((u32)(r_eax+0x4efcu), 0xffffffffu);
    /* 005dcc33: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc36: mov dword ptr [ecx + 0x4f00], 0xffffffff */ W32((u32)(r_ecx+0x4f00u), 0xffffffffu);
    /* 005dcc40: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc43: mov byte ptr [edx + 0x4f04], 0 */ W8((u32)(r_edx+0x4f04u), 0x0u);
    /* 005dcc4a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc4d: mov byte ptr [eax + 0x94], 0 */ W8((u32)(r_eax+0x94u), 0x0u);
    /* 005dcc54: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc57: mov dword ptr [ecx + 0x4f08], 0x64 */ W32((u32)(r_ecx+0x4f08u), 0x64u);
    /* 005dcc61: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc64: mov dword ptr [edx + 0x4f0c], 5 */ W32((u32)(r_edx+0x4f0cu), 0x5u);
    /* 005dcc6e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc71: mov dword ptr [eax + 0x4f10], 1 */ W32((u32)(r_eax+0x4f10u), 0x1u);
    /* 005dcc7b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc7e: mov dword ptr [ecx + 0x4f24], 0xffffffff */ W32((u32)(r_ecx+0x4f24u), 0xffffffffu);
    /* 005dcc88: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc8b: mov dword ptr [edx + 0x4f28], 0xffffffff */ W32((u32)(r_edx+0x4f28u), 0xffffffffu);
    /* 005dcc95: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcc98: mov dword ptr [eax + 0x4ee4], 0x30d40 */ W32((u32)(r_eax+0x4ee4u), 0x30d40u);
    /* 005dcca2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcca4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcca7: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dccacu); f_005de880();
    /* 005dccac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dccae: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dccb1: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dccb6u); f_005de880();
    /* 005dccb6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dccb8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dccbb: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dccc0u); f_005de880();
    /* 005dccc0: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005dccc2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dccc5: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dcccau); f_005de880();
    /* 005dccca: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcccc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcccf: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dccd4u); f_005de880();
    /* 005dccd4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dccd7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005dccda: add edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dcce0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcce3: mov dword ptr [eax + 0x4f1c], edx */ W32((u32)(r_eax+0x4f1cu), r_edx);
    /* 005dcce9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dccec: call 0x5e0cc0 */ r_esp -= 4; W32(r_esp, 0x5dccf1u); f_005e0cc0();
    /* 005dccf1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dccf4: mov dword ptr [ecx + 0x4f2c], 0 */ W32((u32)(r_ecx+0x4f2cu), 0x0u);
    /* 005dccfe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcd01: mov dword ptr [edx + 0x4f30], 0 */ W32((u32)(r_edx+0x4f30u), 0x0u);
    /* 005dcd0b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcd0e: mov byte ptr [eax + 0x25], 0 */ W8((u32)(r_eax+0x25u), 0x0u);
    /* 005dcd12: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd14: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dcd19u); f_00686d82();
    /* 005dcd19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcd1c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dcd1f: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005dcd23: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcd27: je 0x5dcd36 */ if (fZ) goto L_005dcd36;
L_005dcd29:; BB(0x005dcd29);
    /* 005dcd29: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dcd2c: call 0x5e7450 */ r_esp -= 4; W32(r_esp, 0x5dcd31u); f_005e7450();
    /* 005dcd31: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dcd34: jmp 0x5dcd3d */ goto L_005dcd3d;
L_005dcd36:; BB(0x005dcd36);
    /* 005dcd36: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dcd3d:; BB(0x005dcd3d);
    /* 005dcd3d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dcd40: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dcd43: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcd47: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcd4a: mov dword ptr [0x79506c], edx */ W32((u32)(0x79506cu), r_edx);
    /* 005dcd50: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcd53: mov byte ptr [eax + 0x4f34], 0 */ W8((u32)(r_eax+0x4f34u), 0x0u);
    /* 005dcd5a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dcd61: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcd64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcd67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dcd6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dcd6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcd71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcd72: ret  */ FN_RET(0x005dcb80); r_esp += 4; return;
}

void f_005dcd80(void) /* CasinoShell::vfunc150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcd80);
    /* 005dcd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd81: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcd83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dcd87: mov eax, 0x30d400 */ r_eax = 0x30d400u;
    /* 005dcd8c: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcd8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcd8f: ret  */ FN_RET(0x005dcd80); r_esp += 4; return;
}

void f_005dcd90(void) /* CasinoShell::vfunc37 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcd90);
    /* 005dcd90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcd91: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcd93: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcd96: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dcd99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcda0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dcda7: jmp 0x5dcdb2 */ goto L_005dcdb2;
L_005dcda9:; BB(0x005dcda9);
    /* 005dcda9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcdac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dcdaf: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005dcdb2:; BB(0x005dcdb2);
    /* 005dcdb2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dcdb8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dcdba: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dcdc0: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005dcdc6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dcdc8u); call_ind(t); }
    /* 005dcdc8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcdcb: jge 0x5dce60 */ if ((fS==fO)) goto L_005dce60;
L_005dcdd1:; BB(0x005dcdd1);
    /* 005dcdd1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcdd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcdd5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dcddau); f_005dcb00();
    /* 005dcdda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcddd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dcde0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcde4: je 0x5dce5b */ if (fZ) goto L_005dce5b;
L_005dcde6:; BB(0x005dcde6);
    /* 005dcde6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcde9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcdea: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dcdefu); f_005dcb00();
    /* 005dcdef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcdf2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dcdf5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dcdf8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dcdfdu); f_0063aac0();
    /* 005dcdfd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005dcdff: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dce02: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce06: je 0x5dce24 */ if (fZ) goto L_005dce24;
L_005dce08:; BB(0x005dce08);
    /* 005dce08: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dce0b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dce10u); f_0063aac0();
    /* 005dce10: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dce12: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dce15: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce19: je 0x5dce24 */ if (fZ) goto L_005dce24;
L_005dce1b:; BB(0x005dce1b);
    /* 005dce1b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 005dce22: jmp 0x5dce2b */ goto L_005dce2b;
L_005dce24:; BB(0x005dce24);
    /* 005dce24: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_005dce2b:; BB(0x005dce2b);
    /* 005dce2b: movzx edx, byte ptr [ebp - 0x1c] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 005dce2f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce31: je 0x5dce5b */ if (fZ) goto L_005dce5b;
L_005dce33:; BB(0x005dce33);
    /* 005dce33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dce36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dce37: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dce3cu); f_005dcb00();
    /* 005dce3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dce3f: cmp dword ptr [eax + 0x4b4], 0 */ {  u32 a = R32((u32)(r_eax+0x4b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dce46: je 0x5dce5b */ if (fZ) goto L_005dce5b;
L_005dce48:; BB(0x005dce48);
    /* 005dce48: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dce4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dce4c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dce51u); f_005dcb00();
    /* 005dce51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dce54: mov ecx, eax */ r_ecx = r_eax;
    /* 005dce56: call 0x5d74b0 */ r_esp -= 4; W32(r_esp, 0x5dce5bu); f_005d74b0();
L_005dce5b:; BB(0x005dce5b);
    /* 005dce5b: jmp 0x5dcda9 */ goto L_005dcda9;
L_005dce60:; BB(0x005dce60);
    /* 005dce60: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dce63: call 0x631960 */ r_esp -= 4; W32(r_esp, 0x5dce68u); f_00631960();
    /* 005dce68: mov esp, ebp */ r_esp = r_ebp;
    /* 005dce6a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dce6b: ret  */ FN_RET(0x005dcd90); r_esp += 4; return;
}

void f_005dce70(void) /* CasinoShell::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dce70);
    /* 005dce70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dce71: mov ebp, esp */ r_ebp = r_esp;
    /* 005dce73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dce75: push 0x6a952c */ { u32 v = 0x6a952cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dce7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dce80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dce81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dce84: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dce89: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dce8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dce8c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dce8f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dce95: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dce98: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dce9b: mov dword ptr [eax], 0x6d4704 */ W32((u32)(r_eax), 0x6d4704u);
    /* 005dcea1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcea8: cmp dword ptr [0x79506c], 0 */ {  u32 a = R32((u32)(0x79506cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dceaf: je 0x5dcefd */ if (fZ) goto L_005dcefd;
L_005dceb1:; BB(0x005dceb1);
    /* 005dceb1: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005dceb7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dceba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dcebd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005dcec0: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dcec4: je 0x5dceec */ if (fZ) goto L_005dceec;
L_005dcec6:; BB(0x005dcec6);
    /* 005dcec6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcec9: call 0x5e7470 */ r_esp -= 4; W32(r_esp, 0x5dceceu); f_005e7470();
    /* 005dcece: mov eax, 1 */ r_eax = 0x1u;
    /* 005dced3: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005dced6: je 0x5dcee4 */ if (fZ) goto L_005dcee4;
L_005dced8:; BB(0x005dced8);
    /* 005dced8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcedb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcedc: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5dcee1u); f_00686cae();
    /* 005dcee1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dcee4:; BB(0x005dcee4);
    /* 005dcee4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dcee7: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005dceea: jmp 0x5dcef3 */ goto L_005dcef3;
L_005dceec:; BB(0x005dceec);
    /* 005dceec: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dcef3:; BB(0x005dcef3);
    /* 005dcef3: mov dword ptr [0x79506c], 0 */ W32((u32)(0x79506cu), 0x0u);
L_005dcefd:; BB(0x005dcefd);
    /* 005dcefd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dcf04: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dcf07: call 0x631800 */ r_esp -= 4; W32(r_esp, 0x5dcf0cu); f_00631800();
    /* 005dcf0c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dcf0f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dcf16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dcf17: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcf19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcf1a: ret  */ FN_RET(0x005dce70); r_esp += 4; return;
}

void f_005dcf20(void) /* CasinoShell::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcf20);
    /* 005dcf20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf21: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcf23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dcf27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcf2a: mov byte ptr [eax + 0x4c], 0 */ W8((u32)(r_eax+0x4cu), 0x0u);
    /* 005dcf2e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcf31: call 0x631c30 */ r_esp -= 4; W32(r_esp, 0x5dcf36u); f_00631c30();
    /* 005dcf36: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005dcf3c: call 0x5e7490 */ r_esp -= 4; W32(r_esp, 0x5dcf41u); f_005e7490();
    /* 005dcf41: mov esp, ebp */ r_esp = r_ebp;
    /* 005dcf43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dcf44: ret  */ FN_RET(0x005dcf20); r_esp += 4; return;
}

void f_005dcf70(void) /* CasinoShell::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dcf70);
    /* 005dcf70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf71: mov ebp, esp */ r_ebp = r_esp;
    /* 005dcf73: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dcf76: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005dcf79: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dcf7c: call 0x5f3130 */ r_esp -= 4; W32(r_esp, 0x5dcf81u); f_005f3130();
    /* 005dcf81: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dcf88: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dcf8f: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005dcf92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dcf93: call dword ptr [0x6b229c] */ { u32 t = R32((u32)(0x6b229cu)); r_esp -= 4; W32(r_esp, 0x5dcf99u); call_ind(t); }
    /* 005dcf99: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dcf9c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcfa0: jg 0x5dcfc1 */ if ((!fZ&&fS==fO)) goto L_005dcfc1;
L_005dcfa2:; BB(0x005dcfa2);
    /* 005dcfa2: jl 0x5dcfaa */ if ((fS!=fO)) goto L_005dcfaa;
L_005dcfa4:; BB(0x005dcfa4);
    /* 005dcfa4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005dcfa8: ja 0x5dcfc1 */ if ((!fC&&!fZ)) goto L_005dcfc1;
L_005dcfaa:; BB(0x005dcfaa);
    /* 005dcfaa: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfaf: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfb4: push 0x6d4b4c */ { u32 v = 0x6d4b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dcfb9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5dcfbeu); f_005e9f20();
    /* 005dcfbe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dcfc1:; BB(0x005dcfc1);
    /* 005dcfc1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcfc4: sub edx, dword ptr [0x794900] */ {  u32 a = r_edx; u32 b = R32((u32)(0x794900u)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 005dcfca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcfcd: sbb eax, dword ptr [0x794904] */ { u32 c = fC; u32 a = r_eax; u32 b = R32((u32)(0x794904u)); u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcfd3: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005dcfd6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005dcfd9: js 0x5dd008 */ if (fS) goto L_005dd008;
L_005dcfdb:; BB(0x005dcfdb);
    /* 005dcfdb: jg 0x5dcfe3 */ if ((!fZ&&fS==fO)) goto L_005dcfe3;
L_005dcfdd:; BB(0x005dcfdd);
    /* 005dcfdd: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005dcfe1: jb 0x5dd008 */ if (fC) goto L_005dd008;
L_005dcfe3:; BB(0x005dcfe3);
    /* 005dcfe3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dcfe6: sub ecx, dword ptr [0x794900] */ {  u32 a = r_ecx; u32 b = R32((u32)(0x794900u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 005dcfec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dcfef: sbb edx, dword ptr [0x794904] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(0x794904u)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dcff5: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005dcff8: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005dcffb: js 0x5dd05a */ if (fS) goto L_005dd05a;
L_005dcffd:; BB(0x005dcffd);
    /* 005dcffd: jg 0x5dd008 */ if ((!fZ&&fS==fO)) goto L_005dd008;
L_005dcfff:; BB(0x005dcfff);
    /* 005dcfff: cmp dword ptr [ebp - 0x38], 0xb4 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005dd006: jbe 0x5dd05a */ if ((fC||fZ)) goto L_005dd05a;
L_005dd008:; BB(0x005dd008);
    /* 005dd008: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd00b: mov dword ptr [0x794900], eax */ W32((u32)(0x794900u), r_eax);
    /* 005dd010: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd013: mov dword ptr [0x794904], ecx */ W32((u32)(0x794904u), r_ecx);
    /* 005dd019: cmp dword ptr [0x7960d8], 0 */ {  u32 a = R32((u32)(0x7960d8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd020: je 0x5dd05a */ if (fZ) goto L_005dd05a;
L_005dd022:; BB(0x005dd022);
    /* 005dd022: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005dd028: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd02c: je 0x5dd05a */ if (fZ) goto L_005dd05a;
L_005dd02e:; BB(0x005dd02e);
    /* 005dd02e: cmp dword ptr [0x7947e0], 0 */ {  u32 a = R32((u32)(0x7947e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd035: je 0x5dd05a */ if (fZ) goto L_005dd05a;
L_005dd037:; BB(0x005dd037);
    /* 005dd037: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 005dd03c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005dd03f: call 0x60a4d0 */ r_esp -= 4; W32(r_esp, 0x5dd044u); f_0060a4d0();
    /* 005dd044: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005dd04a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd04c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005dd052: mov eax, dword ptr [edx + 0x384] */ r_eax = R32((u32)(r_edx+0x384u));
    /* 005dd058: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd05au); call_ind(t); }
L_005dd05a:; BB(0x005dd05a);
    /* 005dd05a: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd061: je 0x5dd06e */ if (fZ) goto L_005dd06e;
L_005dd063:; BB(0x005dd063);
    /* 005dd063: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd069: call 0x5d8850 */ r_esp -= 4; W32(r_esp, 0x5dd06eu); f_005d8850();
L_005dd06e:; BB(0x005dd06e);
    /* 005dd06e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd071: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005dd074: mov byte ptr [ebp - 0x11], dl */ W8((u32)(r_ebp+0xffffffefu), (u8)r_edx);
    /* 005dd077: movzx eax, byte ptr [ebp - 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 005dd07b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd07d: je 0x5dd0a5 */ if (fZ) goto L_005dd0a5;
L_005dd07f:; BB(0x005dd07f);
    /* 005dd07f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd082: mov dl, byte ptr [ecx + 0x26] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x26u))) & 0xffu);
    /* 005dd085: mov byte ptr [ebp - 0x12], dl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_edx);
    /* 005dd088: movzx eax, byte ptr [ebp - 0x12] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffeeu));
    /* 005dd08c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd08e: je 0x5dd0a5 */ if (fZ) goto L_005dd0a5;
L_005dd090:; BB(0x005dd090);
    /* 005dd090: movzx ecx, byte ptr [0x79346d] */ r_ecx = (u32)R8((u32)(0x79346du));
    /* 005dd097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd099: je 0x5dd0a5 */ if (fZ) goto L_005dd0a5;
L_005dd09b:; BB(0x005dd09b);
    /* 005dd09b: call 0x579d50 */ r_esp -= 4; W32(r_esp, 0x5dd0a0u); f_00579d50();
    /* 005dd0a0: jmp 0x5dd160 */ goto L_005dd160;
L_005dd0a5:; BB(0x005dd0a5);
    /* 005dd0a5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd0a8: mov al, byte ptr [edx + 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x25u))) & 0xffu);
    /* 005dd0ab: mov byte ptr [ebp - 0x13], al */ W8((u32)(r_ebp+0xffffffedu), (u8)r_eax);
    /* 005dd0ae: movzx ecx, byte ptr [ebp - 0x13] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffedu));
    /* 005dd0b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0b4: je 0x5dd160 */ if (fZ) goto L_005dd160;
L_005dd0ba:; BB(0x005dd0ba);
    /* 005dd0ba: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0c1: je 0x5dd160 */ if (fZ) goto L_005dd160;
L_005dd0c7:; BB(0x005dd0c7);
    /* 005dd0c7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd0ca: call 0x636760 */ r_esp -= 4; W32(r_esp, 0x5dd0cfu); f_00636760();
    /* 005dd0cf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dd0d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0d4: jne 0x5dd160 */ if (!fZ) goto L_005dd160;
L_005dd0da:; BB(0x005dd0da);
    /* 005dd0da: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd0dd: call 0x5f3b50 */ r_esp -= 4; W32(r_esp, 0x5dd0e2u); f_005f3b50();
    /* 005dd0e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dd0e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0e7: jne 0x5dd160 */ if (!fZ) goto L_005dd160;
L_005dd0e9:; BB(0x005dd0e9);
    /* 005dd0e9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd0ec: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005dd0ef: cmp edx, dword ptr [0x793574] */ {  u32 a = r_edx; u32 b = R32((u32)(0x793574u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd0f5: jle 0x5dd160 */ if ((fZ||fS!=fO)) goto L_005dd160;
L_005dd0f7:; BB(0x005dd0f7);
    /* 005dd0f7: movzx eax, byte ptr [0x79346d] */ r_eax = (u32)R8((u32)(0x79346du));
    /* 005dd0fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd100: jne 0x5dd150 */ if (!fZ) goto L_005dd150;
L_005dd102:; BB(0x005dd102);
    /* 005dd102: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dd108: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dd10b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dd10e: mov byte ptr [edx + 0x25], 0 */ W8((u32)(r_edx+0x25u), 0x0u);
    /* 005dd112: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005dd117: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd119: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd11f: mov eax, dword ptr [edx + 0x168] */ r_eax = R32((u32)(r_edx+0x168u));
    /* 005dd125: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd127u); call_ind(t); }
    /* 005dd127: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005dd12a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd12c: je 0x5dd14e */ if (fZ) goto L_005dd14e;
L_005dd12e:; BB(0x005dd12e);
    /* 005dd12e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005dd134: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005dd137: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dd13a: mov byte ptr [eax + 0x25], 1 */ W8((u32)(r_eax+0x25u), 0x1u);
    /* 005dd13e: call 0x579da0 */ r_esp -= 4; W32(r_esp, 0x5dd143u); f_00579da0();
    /* 005dd143: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd146: add eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd149: mov dword ptr [0x793574], eax */ W32((u32)(0x793574u), r_eax);
L_005dd14e:; BB(0x005dd14e);
    /* 005dd14e: jmp 0x5dd160 */ goto L_005dd160;
L_005dd150:; BB(0x005dd150);
    /* 005dd150: call 0x579da0 */ r_esp -= 4; W32(r_esp, 0x5dd155u); f_00579da0();
    /* 005dd155: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd158: add eax, dword ptr [edx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x20u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd15b: mov dword ptr [0x793574], eax */ W32((u32)(0x793574u), r_eax);
L_005dd160:; BB(0x005dd160);
    /* 005dd160: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd163: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd166: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 005dd169: cmp edx, dword ptr [ecx + 0x4f1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4f1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd16f: jle 0x5dd3f1 */ if ((fZ||fS!=fO)) goto L_005dd3f1;
L_005dd175:; BB(0x005dd175);
    /* 005dd175: mov eax, dword ptr [0x7948f8] */ r_eax = R32((u32)(0x7948f8u));
    /* 005dd17a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd17d: mov dword ptr [0x7948f8], eax */ W32((u32)(0x7948f8u), r_eax);
    /* 005dd182: cmp dword ptr [0x7948f8], 0x3e8 */ {  u32 a = R32((u32)(0x7948f8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd18c: jl 0x5dd1f1 */ if ((fS!=fO)) goto L_005dd1f1;
L_005dd18e:; BB(0x005dd18e);
    /* 005dd18e: mov dword ptr [0x7948f8], 0 */ W32((u32)(0x7948f8u), 0x0u);
    /* 005dd198: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd19a: call dword ptr [0x6b229c] */ { u32 t = R32((u32)(0x6b229cu)); r_esp -= 4; W32(r_esp, 0x5dd1a0u); call_ind(t); }
    /* 005dd1a0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd1a3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dd1a6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005dd1a9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dd1ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1ad: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005dd1b3: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005dd1b6: call 0x614670 */ r_esp -= 4; W32(r_esp, 0x5dd1bbu); f_00614670();
    /* 005dd1bb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005dd1c2: jmp 0x5dd1cd */ goto L_005dd1cd;
L_005dd1c4:; BB(0x005dd1c4);
    /* 005dd1c4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dd1c7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd1ca: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005dd1cd:; BB(0x005dd1cd);
    /* 005dd1cd: cmp dword ptr [ebp - 0x10], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd1d1: jge 0x5dd1f1 */ if ((fS==fO)) goto L_005dd1f1;
L_005dd1d3:; BB(0x005dd1d3);
    /* 005dd1d3: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1d8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5dd1ddu); f_0062fbf0();
    /* 005dd1dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd1e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd1e1: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 005dd1e7: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005dd1ea: call 0x614670 */ r_esp -= 4; W32(r_esp, 0x5dd1efu); f_00614670();
    /* 005dd1ef: jmp 0x5dd1c4 */ goto L_005dd1c4;
L_005dd1f1:; BB(0x005dd1f1);
    /* 005dd1f1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd1f4: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 005dd1f7: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd1fc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd1ff: mov dword ptr [ecx + 0x4f1c], eax */ W32((u32)(r_ecx+0x4f1cu), r_eax);
    /* 005dd205: push 0x1f40 */ { u32 v = 0x1f40u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd20a: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5dd20fu); f_0062fbf0();
    /* 005dd20f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd212: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005dd215: cmp dword ptr [ebp - 0xc], 0x62 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd219: jne 0x5dd227 */ if (!fZ) goto L_005dd227;
L_005dd21b:; BB(0x005dd21b);
    /* 005dd21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd21d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd220: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dd225u); f_005de880();
    /* 005dd225: jmp 0x5dd273 */ goto L_005dd273;
L_005dd227:; BB(0x005dd227);
    /* 005dd227: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd229: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5dd22eu); f_0062fbf0();
    /* 005dd22e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd231: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd234: add eax, dword ptr [edx + 0x4ed0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4ed0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd23a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd23d: mov dword ptr [ecx + 0x4ed0], eax */ W32((u32)(r_ecx+0x4ed0u), r_eax);
    /* 005dd243: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd246: cmp dword ptr [edx + 0x4ed0], 0x5e69ec0 */ {  u32 a = R32((u32)(r_edx+0x4ed0u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd250: jge 0x5dd260 */ if ((fS==fO)) goto L_005dd260;
L_005dd252:; BB(0x005dd252);
    /* 005dd252: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd255: mov ecx, dword ptr [eax + 0x4ed0] */ r_ecx = R32((u32)(r_eax+0x4ed0u));
    /* 005dd25b: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005dd25e: jmp 0x5dd267 */ goto L_005dd267;
L_005dd260:; BB(0x005dd260);
    /* 005dd260: mov dword ptr [ebp - 0x3c], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffc4u), 0x5e69ec0u);
L_005dd267:; BB(0x005dd267);
    /* 005dd267: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd26a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005dd26d: mov dword ptr [edx + 0x4ed0], eax */ W32((u32)(r_edx+0x4ed0u), r_eax);
L_005dd273:; BB(0x005dd273);
    /* 005dd273: cmp dword ptr [ebp - 0xc], 0xf */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd277: jne 0x5dd285 */ if (!fZ) goto L_005dd285;
L_005dd279:; BB(0x005dd279);
    /* 005dd279: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd27b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd27e: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dd283u); f_005de880();
    /* 005dd283: jmp 0x5dd2d1 */ goto L_005dd2d1;
L_005dd285:; BB(0x005dd285);
    /* 005dd285: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005dd287: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5dd28cu); f_0062fbf0();
    /* 005dd28c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd28f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd292: add eax, dword ptr [ecx + 0x4ed4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4ed4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd298: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd29b: mov dword ptr [edx + 0x4ed4], eax */ W32((u32)(r_edx+0x4ed4u), r_eax);
    /* 005dd2a1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd2a4: cmp dword ptr [eax + 0x4ed4], 0x5e69ec0 */ {  u32 a = R32((u32)(r_eax+0x4ed4u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd2ae: jge 0x5dd2be */ if ((fS==fO)) goto L_005dd2be;
L_005dd2b0:; BB(0x005dd2b0);
    /* 005dd2b0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd2b3: mov edx, dword ptr [ecx + 0x4ed4] */ r_edx = R32((u32)(r_ecx+0x4ed4u));
    /* 005dd2b9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005dd2bc: jmp 0x5dd2c5 */ goto L_005dd2c5;
L_005dd2be:; BB(0x005dd2be);
    /* 005dd2be: mov dword ptr [ebp - 0x40], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffc0u), 0x5e69ec0u);
L_005dd2c5:; BB(0x005dd2c5);
    /* 005dd2c5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd2c8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005dd2cb: mov dword ptr [eax + 0x4ed4], ecx */ W32((u32)(r_eax+0x4ed4u), r_ecx);
L_005dd2d1:; BB(0x005dd2d1);
    /* 005dd2d1: cmp dword ptr [ebp - 0xc], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd2d5: jne 0x5dd2e3 */ if (!fZ) goto L_005dd2e3;
L_005dd2d7:; BB(0x005dd2d7);
    /* 005dd2d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd2d9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd2dc: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dd2e1u); f_005de880();
    /* 005dd2e1: jmp 0x5dd32f */ goto L_005dd32f;
L_005dd2e3:; BB(0x005dd2e3);
    /* 005dd2e3: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd2e5: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5dd2eau); f_0062fbf0();
    /* 005dd2ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd2ed: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd2f0: add eax, dword ptr [edx + 0x4ed8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4ed8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd2f6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd2f9: mov dword ptr [ecx + 0x4ed8], eax */ W32((u32)(r_ecx+0x4ed8u), r_eax);
    /* 005dd2ff: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd302: cmp dword ptr [edx + 0x4ed8], 0x5e69ec0 */ {  u32 a = R32((u32)(r_edx+0x4ed8u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd30c: jge 0x5dd31c */ if ((fS==fO)) goto L_005dd31c;
L_005dd30e:; BB(0x005dd30e);
    /* 005dd30e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd311: mov ecx, dword ptr [eax + 0x4ed8] */ r_ecx = R32((u32)(r_eax+0x4ed8u));
    /* 005dd317: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005dd31a: jmp 0x5dd323 */ goto L_005dd323;
L_005dd31c:; BB(0x005dd31c);
    /* 005dd31c: mov dword ptr [ebp - 0x44], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffbcu), 0x5e69ec0u);
L_005dd323:; BB(0x005dd323);
    /* 005dd323: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd326: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005dd329: mov dword ptr [edx + 0x4ed8], eax */ W32((u32)(r_edx+0x4ed8u), r_eax);
L_005dd32f:; BB(0x005dd32f);
    /* 005dd32f: cmp dword ptr [ebp - 0xc], 0x2d */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd333: jne 0x5dd341 */ if (!fZ) goto L_005dd341;
L_005dd335:; BB(0x005dd335);
    /* 005dd335: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd337: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd33a: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dd33fu); f_005de880();
    /* 005dd33f: jmp 0x5dd390 */ goto L_005dd390;
L_005dd341:; BB(0x005dd341);
    /* 005dd341: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd346: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5dd34bu); f_0062fbf0();
    /* 005dd34b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd34e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd351: add eax, dword ptr [ecx + 0x4edc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4edcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd357: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd35a: mov dword ptr [edx + 0x4edc], eax */ W32((u32)(r_edx+0x4edcu), r_eax);
    /* 005dd360: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd363: cmp dword ptr [eax + 0x4edc], 0x5e69ec0 */ {  u32 a = R32((u32)(r_eax+0x4edcu)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd36d: jge 0x5dd37d */ if ((fS==fO)) goto L_005dd37d;
L_005dd36f:; BB(0x005dd36f);
    /* 005dd36f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd372: mov edx, dword ptr [ecx + 0x4edc] */ r_edx = R32((u32)(r_ecx+0x4edcu));
    /* 005dd378: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 005dd37b: jmp 0x5dd384 */ goto L_005dd384;
L_005dd37d:; BB(0x005dd37d);
    /* 005dd37d: mov dword ptr [ebp - 0x48], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffb8u), 0x5e69ec0u);
L_005dd384:; BB(0x005dd384);
    /* 005dd384: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd387: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005dd38a: mov dword ptr [eax + 0x4edc], ecx */ W32((u32)(r_eax+0x4edcu), r_ecx);
L_005dd390:; BB(0x005dd390);
    /* 005dd390: cmp dword ptr [ebp - 0xc], 0x39 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd394: jne 0x5dd3a2 */ if (!fZ) goto L_005dd3a2;
L_005dd396:; BB(0x005dd396);
    /* 005dd396: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd398: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd39b: call 0x5de880 */ r_esp -= 4; W32(r_esp, 0x5dd3a0u); f_005de880();
    /* 005dd3a0: jmp 0x5dd3f1 */ goto L_005dd3f1;
L_005dd3a2:; BB(0x005dd3a2);
    /* 005dd3a2: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd3a7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5dd3acu); f_0062fbf0();
    /* 005dd3ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd3af: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd3b2: add eax, dword ptr [edx + 0x4ee0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4ee0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd3b8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd3bb: mov dword ptr [ecx + 0x4ee0], eax */ W32((u32)(r_ecx+0x4ee0u), r_eax);
    /* 005dd3c1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd3c4: cmp dword ptr [edx + 0x4ee0], 0x5e69ec0 */ {  u32 a = R32((u32)(r_edx+0x4ee0u)); u32 b = 0x5e69ec0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd3ce: jge 0x5dd3de */ if ((fS==fO)) goto L_005dd3de;
L_005dd3d0:; BB(0x005dd3d0);
    /* 005dd3d0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd3d3: mov ecx, dword ptr [eax + 0x4ee0] */ r_ecx = R32((u32)(r_eax+0x4ee0u));
    /* 005dd3d9: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 005dd3dc: jmp 0x5dd3e5 */ goto L_005dd3e5;
L_005dd3de:; BB(0x005dd3de);
    /* 005dd3de: mov dword ptr [ebp - 0x4c], 0x5e69ec0 */ W32((u32)(r_ebp+0xffffffb4u), 0x5e69ec0u);
L_005dd3e5:; BB(0x005dd3e5);
    /* 005dd3e5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dd3e8: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005dd3eb: mov dword ptr [edx + 0x4ee0], eax */ W32((u32)(r_edx+0x4ee0u), r_eax);
L_005dd3f1:; BB(0x005dd3f1);
    /* 005dd3f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd3f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd3f4: ret  */ FN_RET(0x005dcf70); r_esp += 4; return;
}

void f_005dd430(void) /* CasinoShell::vfunc225 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd430);
    /* 005dd430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd431: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd433: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd436: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dd439: mov byte ptr [ebp - 6], 0 */ W8((u32)(r_ebp+0xfffffffau), 0x0u);
    /* 005dd43d: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 005dd441: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd448: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd44f: je 0x5dd483 */ if (fZ) goto L_005dd483;
L_005dd451:; BB(0x005dd451);
    /* 005dd451: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005dd456: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd458: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd45e: mov eax, dword ptr [edx + 0x254] */ r_eax = R32((u32)(r_edx+0x254u));
    /* 005dd464: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd466u); call_ind(t); }
    /* 005dd466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd468: je 0x5dd483 */ if (fZ) goto L_005dd483;
L_005dd46a:; BB(0x005dd46a);
    /* 005dd46a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd470: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd472: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd478: mov eax, dword ptr [edx + 0x254] */ r_eax = R32((u32)(r_edx+0x254u));
    /* 005dd47e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd480u); call_ind(t); }
    /* 005dd480: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dd483:; BB(0x005dd483);
    /* 005dd483: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd486: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd487: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd48a: call 0x5f4720 */ r_esp -= 4; W32(r_esp, 0x5dd48fu); f_005f4720();
    /* 005dd48f: mov byte ptr [ebp - 6], al */ W8((u32)(r_ebp+0xfffffffau), (u8)r_eax);
    /* 005dd492: push 0x24b49a */ { u32 v = 0x24b49au; r_esp -= 4; W32(r_esp, v); }
    /* 005dd497: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd49a: call 0x5f4720 */ r_esp -= 4; W32(r_esp, 0x5dd49fu); f_005f4720();
    /* 005dd49f: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 005dd4a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd4a5: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5dd4aau); f_005f3bf0();
    /* 005dd4aa: cmp eax, 0x3ea */ {  u32 a = r_eax; u32 b = 0x3eau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd4af: jne 0x5dd4f2 */ if (!fZ) goto L_005dd4f2;
L_005dd4b1:; BB(0x005dd4b1);
    /* 005dd4b1: movzx edx, byte ptr [ebp - 6] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 005dd4b5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd4b7: je 0x5dd4c5 */ if (fZ) goto L_005dd4c5;
L_005dd4b9:; BB(0x005dd4b9);
    /* 005dd4b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd4bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd4c0: call 0x5f47e0 */ r_esp -= 4; W32(r_esp, 0x5dd4c5u); f_005f47e0();
L_005dd4c5:; BB(0x005dd4c5);
    /* 005dd4c5: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005dd4c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd4cb: je 0x5dd4da */ if (fZ) goto L_005dd4da;
L_005dd4cd:; BB(0x005dd4cd);
    /* 005dd4cd: push 0x24b49a */ { u32 v = 0x24b49au; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd4d5: call 0x5f47e0 */ r_esp -= 4; W32(r_esp, 0x5dd4dau); f_005f47e0();
L_005dd4da:; BB(0x005dd4da);
    /* 005dd4da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4db: fld1  */ FPUSH(1.0);
    /* 005dd4dd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005dd4e0: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd4e8: call 0x5f4620 */ r_esp -= 4; W32(r_esp, 0x5dd4edu); f_005f4620();
    /* 005dd4ed: jmp 0x5dd67e */ goto L_005dd67e;
L_005dd4f2:; BB(0x005dd4f2);
    /* 005dd4f2: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd4fa: call 0x5f4720 */ r_esp -= 4; W32(r_esp, 0x5dd4ffu); f_005f4720();
    /* 005dd4ff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dd502: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd504: je 0x5dd513 */ if (fZ) goto L_005dd513;
L_005dd506:; BB(0x005dd506);
    /* 005dd506: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd50b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd50e: call 0x5f47e0 */ r_esp -= 4; W32(r_esp, 0x5dd513u); f_005f47e0();
L_005dd513:; BB(0x005dd513);
    /* 005dd513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd515: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd518: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd51a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd51d: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005dd523: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd525u); call_ind(t); }
    /* 005dd525: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005dd528: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd52a: jne 0x5dd53f */ if (!fZ) goto L_005dd53f;
L_005dd52c:; BB(0x005dd52c);
    /* 005dd52c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd52f: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5dd534u); f_005f3bf0();
    /* 005dd534: cmp eax, 0x30d400 */ {  u32 a = r_eax; u32 b = 0x30d400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd539: jne 0x5dd67e */ if (!fZ) goto L_005dd67e;
L_005dd53f:; BB(0x005dd53f);
    /* 005dd53f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd542: call 0x6376d0 */ r_esp -= 4; W32(r_esp, 0x5dd547u); f_006376d0();
    /* 005dd547: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dd54a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd54c: je 0x5dd568 */ if (fZ) goto L_005dd568;
L_005dd54e:; BB(0x005dd54e);
    /* 005dd54e: movzx eax, byte ptr [ebp - 6] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 005dd552: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd554: jne 0x5dd568 */ if (!fZ) goto L_005dd568;
L_005dd556:; BB(0x005dd556);
    /* 005dd556: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd557: fld1  */ FPUSH(1.0);
    /* 005dd559: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005dd55c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd55f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd560: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd563: call 0x5f4620 */ r_esp -= 4; W32(r_esp, 0x5dd568u); f_005f4620();
L_005dd568:; BB(0x005dd568);
    /* 005dd568: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd56b: call 0x6376d0 */ r_esp -= 4; W32(r_esp, 0x5dd570u); f_006376d0();
    /* 005dd570: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dd573: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd575: jne 0x5dd58b */ if (!fZ) goto L_005dd58b;
L_005dd577:; BB(0x005dd577);
    /* 005dd577: movzx eax, byte ptr [ebp - 6] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 005dd57b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd57d: je 0x5dd58b */ if (fZ) goto L_005dd58b;
L_005dd57f:; BB(0x005dd57f);
    /* 005dd57f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd582: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd583: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd586: call 0x5f47e0 */ r_esp -= 4; W32(r_esp, 0x5dd58bu); f_005f47e0();
L_005dd58b:; BB(0x005dd58b);
    /* 005dd58b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd58e: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x5dd593u); f_00637670();
    /* 005dd593: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dd596: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd598: je 0x5dd5f4 */ if (fZ) goto L_005dd5f4;
L_005dd59a:; BB(0x005dd59a);
    /* 005dd59a: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005dd59e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd5a0: jne 0x5dd5f4 */ if (!fZ) goto L_005dd5f4;
L_005dd5a2:; BB(0x005dd5a2);
    /* 005dd5a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd5a5: movzx edx, byte ptr [ecx + 0x94] */ r_edx = (u32)R8((u32)(r_ecx+0x94u));
    /* 005dd5ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd5ae: je 0x5dd5bb */ if (fZ) goto L_005dd5bb;
L_005dd5b0:; BB(0x005dd5b0);
    /* 005dd5b0: fld qword ptr [0x6be700] */ FPUSH(R_F64((u32)(0x6be700u)));
    /* 005dd5b6: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005dd5b9: jmp 0x5dd5c0 */ goto L_005dd5c0;
L_005dd5bb:; BB(0x005dd5bb);
    /* 005dd5bb: fld1  */ FPUSH(1.0);
    /* 005dd5bd: fstp qword ptr [ebp - 0x14] */ W_F64((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
L_005dd5c0:; BB(0x005dd5c0);
    /* 005dd5c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd5c3: call 0x6377e0 */ r_esp -= 4; W32(r_esp, 0x5dd5c8u); f_006377e0();
    /* 005dd5c8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005dd5cb: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 005dd5ce: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 005dd5d4: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 005dd5d7: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 005dd5da: fmul qword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffecu));
    /* 005dd5dd: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 005dd5e0: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 005dd5e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5e4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005dd5e7: push 0x24b49a */ { u32 v = 0x24b49au; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd5ef: call 0x5f4620 */ r_esp -= 4; W32(r_esp, 0x5dd5f4u); f_005f4620();
L_005dd5f4:; BB(0x005dd5f4);
    /* 005dd5f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd5f7: call 0x637670 */ r_esp -= 4; W32(r_esp, 0x5dd5fcu); f_00637670();
    /* 005dd5fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dd5ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd601: jne 0x5dd618 */ if (!fZ) goto L_005dd618;
L_005dd603:; BB(0x005dd603);
    /* 005dd603: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 005dd607: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd609: je 0x5dd618 */ if (fZ) goto L_005dd618;
L_005dd60b:; BB(0x005dd60b);
    /* 005dd60b: push 0x24b49a */ { u32 v = 0x24b49au; r_esp -= 4; W32(r_esp, v); }
    /* 005dd610: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd613: call 0x5f47e0 */ r_esp -= 4; W32(r_esp, 0x5dd618u); f_005f47e0();
L_005dd618:; BB(0x005dd618);
    /* 005dd618: push 0x24b49a */ { u32 v = 0x24b49au; r_esp -= 4; W32(r_esp, v); }
    /* 005dd61d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd620: call 0x5f4720 */ r_esp -= 4; W32(r_esp, 0x5dd625u); f_005f4720();
    /* 005dd625: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005dd628: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd62a: je 0x5dd67e */ if (fZ) goto L_005dd67e;
L_005dd62c:; BB(0x005dd62c);
    /* 005dd62c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd62f: movzx ecx, byte ptr [eax + 0x94] */ r_ecx = (u32)R8((u32)(r_eax+0x94u));
    /* 005dd636: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd638: je 0x5dd645 */ if (fZ) goto L_005dd645;
L_005dd63a:; BB(0x005dd63a);
    /* 005dd63a: fld qword ptr [0x6be700] */ FPUSH(R_F64((u32)(0x6be700u)));
    /* 005dd640: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 005dd643: jmp 0x5dd64a */ goto L_005dd64a;
L_005dd645:; BB(0x005dd645);
    /* 005dd645: fld1  */ FPUSH(1.0);
    /* 005dd647: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
L_005dd64a:; BB(0x005dd64a);
    /* 005dd64a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd64d: call 0x6377e0 */ r_esp -= 4; W32(r_esp, 0x5dd652u); f_006377e0();
    /* 005dd652: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005dd655: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 005dd658: fdiv qword ptr [0x6be518] */ ST(0) = ST(0) / R_F64((u32)(0x6be518u));
    /* 005dd65e: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 005dd661: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 005dd664: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 005dd667: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 005dd66a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 005dd66d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd66e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005dd671: push 0x24b49a */ { u32 v = 0x24b49au; r_esp -= 4; W32(r_esp, v); }
    /* 005dd676: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd679: call 0x5f4830 */ r_esp -= 4; W32(r_esp, 0x5dd67eu); f_005f4830();
L_005dd67e:; BB(0x005dd67e);
    /* 005dd67e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd680: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd681: ret  */ FN_RET(0x005dd430); r_esp += 4; return;
}

void f_005dd690(void) /* CasinoShell::vfunc34 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd690);
    /* 005dd690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd691: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd693: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd696: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dd699: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd6a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd6a3: mov byte ptr [eax + 0x94], 0 */ W8((u32)(r_eax+0x94u), 0x0u);
    /* 005dd6aa: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd6b1: je 0x5dd6e6 */ if (fZ) goto L_005dd6e6;
L_005dd6b3:; BB(0x005dd6b3);
    /* 005dd6b3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd6b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd6bb: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd6c1: mov eax, dword ptr [edx + 0x254] */ r_eax = R32((u32)(r_edx+0x254u));
    /* 005dd6c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd6c9u); call_ind(t); }
    /* 005dd6c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd6cb: je 0x5dd6e6 */ if (fZ) goto L_005dd6e6;
L_005dd6cd:; BB(0x005dd6cd);
    /* 005dd6cd: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd6d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd6d5: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd6db: mov eax, dword ptr [edx + 0x254] */ r_eax = R32((u32)(r_edx+0x254u));
    /* 005dd6e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd6e3u); call_ind(t); }
    /* 005dd6e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dd6e6:; BB(0x005dd6e6);
    /* 005dd6e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd6e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd6ea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dd6f0: call 0x5f47e0 */ r_esp -= 4; W32(r_esp, 0x5dd6f5u); f_005f47e0();
    /* 005dd6f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd6f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd6f8: ret  */ FN_RET(0x005dd690); r_esp += 4; return;
}

void f_005dd700(void) /* CasinoShell::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd700);
    /* 005dd700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd701: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd703: sub esp, 0x158 */ {  u32 a = r_esp; u32 b = 0x158u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd709: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dd70e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd710: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005dd713: mov dword ptr [ebp - 0x150], ecx */ W32((u32)(r_ebp+0xfffffeb0u), r_ecx);
    /* 005dd719: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd71f: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 005dd722: mov byte ptr [ebp - 0x149], cl */ W8((u32)(r_ebp+0xfffffeb7u), (u8)r_ecx);
    /* 005dd728: movzx edx, byte ptr [ebp - 0x149] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeb7u));
    /* 005dd72f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd731: je 0x5dd737 */ if (fZ) goto L_005dd737;
L_005dd733:; BB(0x005dd733);
    /* 005dd733: mov byte ptr [ebp + 8], 1 */ W8((u32)(r_ebp+0x8u), 0x1u);
L_005dd737:; BB(0x005dd737);
    /* 005dd737: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd739: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd73f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd741: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd747: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005dd74d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd74fu); call_ind(t); }
    /* 005dd74f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005dd752: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd754: jne 0x5dd76a */ if (!fZ) goto L_005dd76a;
L_005dd756:; BB(0x005dd756);
    /* 005dd756: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005dd759: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd75a: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd760: call 0x5f39c0 */ r_esp -= 4; W32(r_esp, 0x5dd765u); f_005f39c0();
    /* 005dd765: jmp 0x5dd8f5 */ goto L_005dd8f5;
L_005dd76a:; BB(0x005dd76a);
    /* 005dd76a: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd771: je 0x5dd7b0 */ if (fZ) goto L_005dd7b0;
L_005dd773:; BB(0x005dd773);
    /* 005dd773: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005dd778: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd77a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005dd780: mov eax, dword ptr [edx + 0x2d8] */ r_eax = R32((u32)(r_edx+0x2d8u));
    /* 005dd786: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd788u); call_ind(t); }
    /* 005dd788: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 005dd78e: cmp dword ptr [ebp - 0x154], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd795: je 0x5dd7a2 */ if (fZ) goto L_005dd7a2;
L_005dd797:; BB(0x005dd797);
    /* 005dd797: cmp dword ptr [ebp - 0x154], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffeacu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd79e: je 0x5dd7a9 */ if (fZ) goto L_005dd7a9;
L_005dd7a0:; BB(0x005dd7a0);
    /* 005dd7a0: jmp 0x5dd7b0 */ goto L_005dd7b0;
L_005dd7a2:; BB(0x005dd7a2);
    /* 005dd7a2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005dd7a4: jmp 0x5dd8f5 */ goto L_005dd8f5;
L_005dd7a9:; BB(0x005dd7a9);
    /* 005dd7a9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005dd7ab: jmp 0x5dd8f5 */ goto L_005dd8f5;
L_005dd7b0:; BB(0x005dd7b0);
    /* 005dd7b0: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd7b6: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 005dd7ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd7bc: jne 0x5dd7c6 */ if (!fZ) goto L_005dd7c6;
L_005dd7be:; BB(0x005dd7be);
    /* 005dd7be: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005dd7c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd7c4: je 0x5dd7d5 */ if (fZ) goto L_005dd7d5;
L_005dd7c6:; BB(0x005dd7c6);
    /* 005dd7c6: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd7cc: mov byte ptr [ecx + 0x24], 1 */ W8((u32)(r_ecx+0x24u), 0x1u);
    /* 005dd7d0: jmp 0x5dd8bc */ goto L_005dd8bc;
L_005dd7d5:; BB(0x005dd7d5);
    /* 005dd7d5: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005dd7db: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dd7dd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005dd7e3: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005dd7e9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dd7ebu); call_ind(t); }
    /* 005dd7eb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dd7ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd7f0: je 0x5dd817 */ if (fZ) goto L_005dd817;
L_005dd7f2:; BB(0x005dd7f2);
    /* 005dd7f2: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7f7: push 0x6bcd54 */ { u32 v = 0x6bcd54u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dd801u); f_00630f40();
    /* 005dd801: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd804: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd805: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 005dd80b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd80c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5dd812u); call_ind(t); }
    /* 005dd812: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd815: jmp 0x5dd865 */ goto L_005dd865;
L_005dd817:; BB(0x005dd817);
    /* 005dd817: lea edx, [ebp - 0x148] */ r_edx = (u32)(r_ebp+0xfffffeb8u);
    /* 005dd81d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd81e: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd824: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5dd829u); f_005f3bf0();
    /* 005dd829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd82a: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd830: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd832: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd838: mov eax, dword ptr [edx + 0x338] */ r_eax = R32((u32)(r_edx+0x338u));
    /* 005dd83e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd840u); call_ind(t); }
    /* 005dd840: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 005dd846: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd847: push 0x6d4b70 */ { u32 v = 0x6d4b70u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd84c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dd851u); f_00630f40();
    /* 005dd851: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd855: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 005dd85b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd85c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5dd862u); call_ind(t); }
    /* 005dd862: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dd865:; BB(0x005dd865);
    /* 005dd865: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd867: push 0x6bcd40 */ { u32 v = 0x6bcd40u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd86c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dd871u); f_00630f40();
    /* 005dd871: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd875: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 005dd87b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd87c: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5dd881u); f_0062ff10();
    /* 005dd881: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd884: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd887: jne 0x5dd8bc */ if (!fZ) goto L_005dd8bc;
L_005dd889:; BB(0x005dd889);
    /* 005dd889: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd88f: cmp dword ptr [ecx + 0x34], 0x44c */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd896: je 0x5dd8b2 */ if (fZ) goto L_005dd8b2;
L_005dd898:; BB(0x005dd898);
    /* 005dd898: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd89d: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd8a3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dd8a5: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd8ab: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005dd8ae: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dd8b0u); call_ind(t); }
    /* 005dd8b0: jmp 0x5dd8bc */ goto L_005dd8bc;
L_005dd8b2:; BB(0x005dd8b2);
    /* 005dd8b2: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd8b8: mov byte ptr [eax + 0x24], 1 */ W8((u32)(r_eax+0x24u), 0x1u);
L_005dd8bc:; BB(0x005dd8bc);
    /* 005dd8bc: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd8c2: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 005dd8c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd8c8: jne 0x5dd8e5 */ if (!fZ) goto L_005dd8e5;
L_005dd8ca:; BB(0x005dd8ca);
    /* 005dd8ca: mov eax, dword ptr [ebp - 0x150] */ r_eax = R32((u32)(r_ebp+0xfffffeb0u));
    /* 005dd8d0: cmp dword ptr [eax + 0x2c], 0x44c */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x44cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd8d7: je 0x5dd8e5 */ if (fZ) goto L_005dd8e5;
L_005dd8d9:; BB(0x005dd8d9);
    /* 005dd8d9: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
    /* 005dd8e3: jmp 0x5dd8ef */ goto L_005dd8ef;
L_005dd8e5:; BB(0x005dd8e5);
    /* 005dd8e5: mov dword ptr [ebp - 0x158], 1 */ W32((u32)(r_ebp+0xfffffea8u), 0x1u);
L_005dd8ef:; BB(0x005dd8ef);
    /* 005dd8ef: mov al, byte ptr [ebp - 0x158] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffea8u))) & 0xffu);
L_005dd8f5:; BB(0x005dd8f5);
    /* 005dd8f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dd8f8: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd8fa: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5dd8ffu); f_00686d72();
    /* 005dd8ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd901: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd902: ret 4 */ FN_RET(0x005dd700); r_esp += 8; return;
}

void f_005dd910(void) /* CasinoShell::vfunc214 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dd910);
    /* 005dd910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd911: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd913: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd916: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 005dd919: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd91b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd91d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5dd922u); f_0064c8a0();
    /* 005dd922: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd925: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dd928: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005dd92b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dd92e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dd931: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dd934: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dd937: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd93e: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd945: je 0x5dd999 */ if (fZ) goto L_005dd999;
L_005dd947:; BB(0x005dd947);
    /* 005dd947: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005dd94d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dd94f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005dd955: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005dd95b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dd95du); call_ind(t); }
    /* 005dd95d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dd960: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd962: je 0x5dd999 */ if (fZ) goto L_005dd999;
L_005dd964:; BB(0x005dd964);
    /* 005dd964: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd966: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005dd969: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dd96b: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005dd96e: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005dd974: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dd976u); call_ind(t); }
    /* 005dd976: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005dd979: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd97b: je 0x5dd999 */ if (fZ) goto L_005dd999;
L_005dd97d:; BB(0x005dd97d);
    /* 005dd97d: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005dd980: mov byte ptr [edx + 0x4f05], 1 */ W8((u32)(r_edx+0x4f05u), 0x1u);
    /* 005dd987: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005dd98a: call 0x5de170 */ r_esp -= 4; W32(r_esp, 0x5dd98fu); f_005de170();
    /* 005dd98f: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 005dd992: mov byte ptr [eax + 0x4f05], 0 */ W8((u32)(r_eax+0x4f05u), 0x0u);
L_005dd999:; BB(0x005dd999);
    /* 005dd999: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dd9a0: jmp 0x5dd9ab */ goto L_005dd9ab;
L_005dd9a2:; BB(0x005dd9a2);
    /* 005dd9a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd9a5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd9a8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dd9ab:; BB(0x005dd9ab);
    /* 005dd9ab: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005dd9b1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dd9b3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dd9b9: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005dd9bf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dd9c1u); call_ind(t); }
    /* 005dd9c1: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dd9c4: jge 0x5ddaa5 */ if ((fS==fO)) goto L_005ddaa5;
L_005dd9ca:; BB(0x005dd9ca);
    /* 005dd9ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dd9cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9ce: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dd9d3u); f_005dcb00();
    /* 005dd9d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd9d6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005dd9d9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005dd9dc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dd9e1u); f_0063aac0();
    /* 005dd9e1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dd9e3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005dd9e6: cmp dword ptr [ebp - 0x30], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd9ea: je 0x5dda08 */ if (fZ) goto L_005dda08;
L_005dd9ec:; BB(0x005dd9ec);
    /* 005dd9ec: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005dd9ef: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dd9f4u); f_0063aac0();
    /* 005dd9f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dd9f6: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005dd9f9: cmp dword ptr [ebp - 0x34], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd9fd: je 0x5dda08 */ if (fZ) goto L_005dda08;
L_005dd9ff:; BB(0x005dd9ff);
    /* 005dd9ff: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005dda06: jmp 0x5dda0f */ goto L_005dda0f;
L_005dda08:; BB(0x005dda08);
    /* 005dda08: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
L_005dda0f:; BB(0x005dda0f);
    /* 005dda0f: movzx eax, byte ptr [ebp - 0x64] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff9cu));
    /* 005dda13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dda15: je 0x5ddaa0 */ if (fZ) goto L_005ddaa0;
L_005dda1b:; BB(0x005dda1b);
    /* 005dda1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dda1e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005dda21: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dda24: jmp 0x5dda2f */ goto L_005dda2f;
L_005dda26:; BB(0x005dda26);
    /* 005dda26: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dda29: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dda2c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_005dda2f:; BB(0x005dda2f);
    /* 005dda2f: cmp dword ptr [ebp - 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dda33: jle 0x5ddaa0 */ if ((fZ||fS!=fO)) goto L_005ddaa0;
L_005dda35:; BB(0x005dda35);
    /* 005dda35: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dda38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dda39: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dda3eu); f_005dcb00();
    /* 005dda3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dda41: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005dda44: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005dda47: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dda4cu); f_0063aac0();
    /* 005dda4c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dda4f: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005dda52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dda55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda56: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dda5bu); f_005dcb00();
    /* 005dda5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dda5e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005dda61: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005dda64: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dda69u); f_0063aac0();
    /* 005dda69: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dda6c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005dda6f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005dda72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda73: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005dda76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dda77: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5dda7cu); f_00686ec0();
    /* 005dda7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dda7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dda81: jne 0x5dda9e */ if (!fZ) goto L_005dda9e;
L_005dda83:; BB(0x005dda83);
    /* 005dda83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dda85: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dda88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda89: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dda8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda8d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dda92u); f_005dcb00();
    /* 005dda92: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dda95: mov ecx, eax */ r_ecx = r_eax;
    /* 005dda97: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x5dda9cu); f_0063a3e0();
    /* 005dda9c: jmp 0x5ddaa0 */ goto L_005ddaa0;
L_005dda9e:; BB(0x005dda9e);
    /* 005dda9e: jmp 0x5dda26 */ goto L_005dda26;
L_005ddaa0:; BB(0x005ddaa0);
    /* 005ddaa0: jmp 0x5dd9a2 */ goto L_005dd9a2;
L_005ddaa5:; BB(0x005ddaa5);
    /* 005ddaa5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ddaac: jmp 0x5ddab7 */ goto L_005ddab7;
L_005ddaae:; BB(0x005ddaae);
    /* 005ddaae: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddab1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ddab4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005ddab7:; BB(0x005ddab7);
    /* 005ddab7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ddabd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ddabf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ddac5: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005ddacb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ddacdu); call_ind(t); }
    /* 005ddacd: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddad0: jge 0x5ddc4c */ if ((fS==fO)) goto L_005ddc4c;
L_005ddad6:; BB(0x005ddad6);
    /* 005ddad6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddad9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddada: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddadfu); f_005dcb00();
    /* 005ddadf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddae2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005ddae5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddae7: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ddaea: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddaec: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ddaef: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 005ddaf5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ddaf7u); call_ind(t); }
    /* 005ddaf7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ddafa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddafc: je 0x5ddc47 */ if (fZ) goto L_005ddc47;
L_005ddb02:; BB(0x005ddb02);
    /* 005ddb02: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddb05: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb06: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddb0bu); f_005dcb00();
    /* 005ddb0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddb0e: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005ddb11: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ddb14: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ddb19u); f_0063aac0();
    /* 005ddb19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddb1b: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005ddb1e: cmp dword ptr [ebp - 0x4c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddb22: je 0x5ddb40 */ if (fZ) goto L_005ddb40;
L_005ddb24:; BB(0x005ddb24);
    /* 005ddb24: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ddb27: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ddb2cu); f_0063aac0();
    /* 005ddb2c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ddb2e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005ddb31: cmp dword ptr [ebp - 0x50], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddb35: je 0x5ddb40 */ if (fZ) goto L_005ddb40;
L_005ddb37:; BB(0x005ddb37);
    /* 005ddb37: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005ddb3e: jmp 0x5ddb47 */ goto L_005ddb47;
L_005ddb40:; BB(0x005ddb40);
    /* 005ddb40: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
L_005ddb47:; BB(0x005ddb47);
    /* 005ddb47: movzx ecx, byte ptr [ebp - 0x68] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff98u));
    /* 005ddb4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddb4d: je 0x5ddc47 */ if (fZ) goto L_005ddc47;
L_005ddb53:; BB(0x005ddb53);
    /* 005ddb53: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 005ddb59: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddb5b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005ddb61: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005ddb67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ddb69u); call_ind(t); }
    /* 005ddb69: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ddb6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddb6e: jne 0x5ddbff */ if (!fZ) goto L_005ddbff;
L_005ddb74:; BB(0x005ddb74);
    /* 005ddb74: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddb77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb78: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddb7du); f_005dcb00();
    /* 005ddb7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddb80: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005ddb83: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005ddb86: mov al, byte ptr [edx + 0x4a2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4a2u))) & 0xffu);
    /* 005ddb8c: mov byte ptr [ebp - 0x59], al */ W8((u32)(r_ebp+0xffffffa7u), (u8)r_eax);
    /* 005ddb8f: movzx ecx, byte ptr [ebp - 0x59] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffa7u));
    /* 005ddb93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddb95: jne 0x5ddbff */ if (!fZ) goto L_005ddbff;
L_005ddb97:; BB(0x005ddb97);
    /* 005ddb97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb9b: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5ddba0u); f_0064c8a0();
    /* 005ddba0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddba3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ddba6: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005ddba9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ddbac: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005ddbaf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddbb2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005ddbb5: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005ddbb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddbb9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddbbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddbbd: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005ddbc2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddbc4: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddbca: mov eax, dword ptr [edx + 0x27c] */ r_eax = R32((u32)(r_edx+0x27cu));
    /* 005ddbd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ddbd2u); call_ind(t); }
    /* 005ddbd2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddbd5: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ddbd8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005ddbdb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddbde: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ddbe1: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005ddbe4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddbe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddbe8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005ddbeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddbec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddbef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddbf0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddbf5u); f_005dcb00();
    /* 005ddbf5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddbf8: mov ecx, eax */ r_ecx = r_eax;
    /* 005ddbfa: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x5ddbffu); f_005d5fb0();
L_005ddbff:; BB(0x005ddbff);
    /* 005ddbff: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddc05: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5ddc0au); f_005da7b0();
    /* 005ddc0a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ddc0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddc0f: je 0x5ddc2d */ if (fZ) goto L_005ddc2d;
L_005ddc11:; BB(0x005ddc11);
    /* 005ddc11: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddc14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc15: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 005ddc1b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddc1d: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddc23: mov edx, dword ptr [eax + 0x298] */ r_edx = R32((u32)(r_eax+0x298u));
    /* 005ddc29: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ddc2bu); call_ind(t); }
    /* 005ddc2b: jmp 0x5ddc47 */ goto L_005ddc47;
L_005ddc2d:; BB(0x005ddc2d);
    /* 005ddc2d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc31: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddc37: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ddc39: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddc3f: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 005ddc45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ddc47u); call_ind(t); }
L_005ddc47:; BB(0x005ddc47);
    /* 005ddc47: jmp 0x5ddaae */ goto L_005ddaae;
L_005ddc4c:; BB(0x005ddc4c);
    /* 005ddc4c: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005ddc4f: call 0x636250 */ r_esp -= 4; W32(r_esp, 0x5ddc54u); f_00636250();
    /* 005ddc54: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ddc5b: jmp 0x5ddc66 */ goto L_005ddc66;
L_005ddc5d:; BB(0x005ddc5d);
    /* 005ddc5d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddc60: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ddc63: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ddc66:; BB(0x005ddc66);
    /* 005ddc66: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005ddc6c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddc6e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ddc74: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005ddc7a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ddc7cu); call_ind(t); }
    /* 005ddc7c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddc7f: jge 0x5ddd13 */ if ((fS==fO)) goto L_005ddd13;
L_005ddc85:; BB(0x005ddc85);
    /* 005ddc85: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddc88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc89: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddc8eu); f_005dcb00();
    /* 005ddc8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddc91: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005ddc97: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ddc9a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005ddc9d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005ddca0: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddca4: je 0x5ddcb9 */ if (fZ) goto L_005ddcb9;
L_005ddca6:; BB(0x005ddca6);
    /* 005ddca6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddca8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddcab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddcad: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005ddcb0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddcb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ddcb4u); call_ind(t); }
    /* 005ddcb4: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 005ddcb7: jmp 0x5ddcc0 */ goto L_005ddcc0;
L_005ddcb9:; BB(0x005ddcb9);
    /* 005ddcb9: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005ddcc0:; BB(0x005ddcc0);
    /* 005ddcc0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddcc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcc4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddcc9u); f_005dcb00();
    /* 005ddcc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddccc: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
    /* 005ddcd6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddcd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcda: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddcdfu); f_005dcb00();
    /* 005ddcdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddce2: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005ddce5: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 005ddce8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddcea: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005ddced: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005ddcf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ddcf2u); call_ind(t); }
    /* 005ddcf2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddcf5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcf6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddcfbu); f_005dcb00();
    /* 005ddcfb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddcfe: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005ddd01: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005ddd04: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddd06: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 005ddd09: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005ddd0c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ddd0eu); call_ind(t); }
    /* 005ddd0e: jmp 0x5ddc5d */ goto L_005ddc5d;
L_005ddd13:; BB(0x005ddd13);
    /* 005ddd13: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddd15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddd16: ret  */ FN_RET(0x005dd910); r_esp += 4; return;
}

void f_005ddd20(void) /* CasinoShell::vfunc215 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ddd20);
    /* 005ddd20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd21: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddd23: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddd29: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 005ddd2c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ddd33: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddd39: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5ddd3eu); f_005da810();
    /* 005ddd3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ddd41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddd43: je 0x5ddeec */ if (fZ) goto L_005ddeec;
L_005ddd49:; BB(0x005ddd49);
    /* 005ddd49: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 005ddd50: jmp 0x5ddd5b */ goto L_005ddd5b;
L_005ddd52:; BB(0x005ddd52);
    /* 005ddd52: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddd55: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ddd58: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ddd5b:; BB(0x005ddd5b);
    /* 005ddd5b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005ddd61: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddd63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ddd69: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005ddd6f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ddd71u); call_ind(t); }
    /* 005ddd71: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddd74: jge 0x5ddeec */ if ((fS==fO)) goto L_005ddeec;
L_005ddd7a:; BB(0x005ddd7a);
    /* 005ddd7a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddd7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd7e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddd83u); f_005dcb00();
    /* 005ddd83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddd86: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005ddd89: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ddd8c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ddd91u); f_0063aac0();
    /* 005ddd91: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ddd93: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005ddd96: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddd9a: je 0x5dddb8 */ if (fZ) goto L_005dddb8;
L_005ddd9c:; BB(0x005ddd9c);
    /* 005ddd9c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005ddd9f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ddda4u); f_0063aac0();
    /* 005ddda4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddda6: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005ddda9: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dddad: je 0x5dddb8 */ if (fZ) goto L_005dddb8;
L_005dddaf:; BB(0x005dddaf);
    /* 005dddaf: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 005dddb6: jmp 0x5dddbf */ goto L_005dddbf;
L_005dddb8:; BB(0x005dddb8);
    /* 005dddb8: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
L_005dddbf:; BB(0x005dddbf);
    /* 005dddbf: movzx eax, byte ptr [ebp - 0x80] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff80u));
    /* 005dddc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dddc5: je 0x5ddee7 */ if (fZ) goto L_005ddee7;
L_005dddcb:; BB(0x005dddcb);
    /* 005dddcb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dddce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dddcf: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dddd4u); f_005dcb00();
    /* 005dddd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dddd7: mov ecx, eax */ r_ecx = r_eax;
    /* 005dddd9: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5ddddeu); f_005d5a50();
    /* 005dddde: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ddde1: cmp eax, dword ptr [edx + 0x4eec] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4eecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddde7: jge 0x5dde07 */ if ((fS==fO)) goto L_005dde07;
L_005ddde9:; BB(0x005ddde9);
    /* 005ddde9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dddeb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dddee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dddef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dddf2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dddf3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dddf8u); f_005dcb00();
    /* 005dddf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dddfb: mov ecx, eax */ r_ecx = r_eax;
    /* 005dddfd: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x5dde02u); f_0063a3e0();
    /* 005dde02: jmp 0x5ddee7 */ goto L_005ddee7;
L_005dde07:; BB(0x005dde07);
    /* 005dde07: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dde0a: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dde0d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 005dde10: jmp 0x5dde1b */ goto L_005dde1b;
L_005dde12:; BB(0x005dde12);
    /* 005dde12: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dde15: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dde18: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_005dde1b:; BB(0x005dde1b);
    /* 005dde1b: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dde1f: jle 0x5ddee7 */ if ((fZ||fS!=fO)) goto L_005ddee7;
L_005dde25:; BB(0x005dde25);
    /* 005dde25: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dde28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dde29: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dde2eu); f_005dcb00();
    /* 005dde2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dde31: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005dde34: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005dde37: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dde3cu); f_0063aac0();
    /* 005dde3c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dde3e: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 005dde41: cmp dword ptr [ebp - 0x38], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dde45: je 0x5dde66 */ if (fZ) goto L_005dde66;
L_005dde47:; BB(0x005dde47);
    /* 005dde47: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005dde4a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dde4fu); f_0063aac0();
    /* 005dde4f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005dde51: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005dde54: cmp dword ptr [ebp - 0x3c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dde58: je 0x5dde66 */ if (fZ) goto L_005dde66;
L_005dde5a:; BB(0x005dde5a);
    /* 005dde5a: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 005dde64: jmp 0x5dde70 */ goto L_005dde70;
L_005dde66:; BB(0x005dde66);
    /* 005dde66: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
L_005dde70:; BB(0x005dde70);
    /* 005dde70: movzx ecx, byte ptr [ebp - 0x84] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff7cu));
    /* 005dde77: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dde79: je 0x5ddee2 */ if (fZ) goto L_005ddee2;
L_005dde7b:; BB(0x005dde7b);
    /* 005dde7b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dde7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dde7f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dde84u); f_005dcb00();
    /* 005dde84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dde87: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005dde8a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005dde8d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dde92u); f_0063aac0();
    /* 005dde92: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dde95: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005dde98: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dde9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dde9c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddea1u); f_005dcb00();
    /* 005ddea1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddea4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005ddea7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005ddeaa: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ddeafu); f_0063aac0();
    /* 005ddeaf: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ddeb2: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005ddeb5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005ddeb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddeb9: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005ddebc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddebd: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5ddec2u); f_00686ec0();
    /* 005ddec2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddec7: jne 0x5ddee2 */ if (!fZ) goto L_005ddee2;
L_005ddec9:; BB(0x005ddec9);
    /* 005ddec9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddecb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddecf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dded2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dded3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dded8u); f_005dcb00();
    /* 005dded8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddedb: mov ecx, eax */ r_ecx = r_eax;
    /* 005ddedd: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x5ddee2u); f_0063a3e0();
L_005ddee2:; BB(0x005ddee2);
    /* 005ddee2: jmp 0x5dde12 */ goto L_005dde12;
L_005ddee7:; BB(0x005ddee7);
    /* 005ddee7: jmp 0x5ddd52 */ goto L_005ddd52;
L_005ddeec:; BB(0x005ddeec);
    /* 005ddeec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddeee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddef3u); f_005dcb00();
    /* 005ddef3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddef6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005ddef9: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005ddefc: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5ddf01u); f_005d52e0();
    /* 005ddf01: mov dl, byte ptr [eax + 0x5d] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x5du))) & 0xffu);
    /* 005ddf04: mov byte ptr [ebp - 0x55], dl */ W8((u32)(r_ebp+0xffffffabu), (u8)r_edx);
    /* 005ddf07: movzx eax, byte ptr [ebp - 0x55] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffabu));
    /* 005ddf0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddf0d: jne 0x5de15e */ if (!fZ) goto L_005de15e;
L_005ddf13:; BB(0x005ddf13);
    /* 005ddf13: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddf1a: je 0x5de15e */ if (fZ) goto L_005de15e;
L_005ddf20:; BB(0x005ddf20);
    /* 005ddf20: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddf26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ddf28: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddf2e: mov eax, dword ptr [edx + 0x260] */ r_eax = R32((u32)(r_edx+0x260u));
    /* 005ddf34: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ddf36u); call_ind(t); }
    /* 005ddf36: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005ddf39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddf3b: je 0x5de15e */ if (fZ) goto L_005de15e;
L_005ddf41:; BB(0x005ddf41);
    /* 005ddf41: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005ddf47: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5ddf4cu); f_005da810();
    /* 005ddf4c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005ddf4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddf51: jne 0x5de15e */ if (!fZ) goto L_005de15e;
L_005ddf57:; BB(0x005ddf57);
    /* 005ddf57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf59: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005ddf5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf5d: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ddf60: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5ddf65u); f_005f3bf0();
    /* 005ddf65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf66: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ddf69: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ddf6b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005ddf6e: mov eax, dword ptr [edx + 0x364] */ r_eax = R32((u32)(r_edx+0x364u));
    /* 005ddf74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ddf76u); call_ind(t); }
    /* 005ddf76: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005ddf7d: jmp 0x5ddf88 */ goto L_005ddf88;
L_005ddf7f:; BB(0x005ddf7f);
    /* 005ddf7f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddf82: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ddf85: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005ddf88:; BB(0x005ddf88);
    /* 005ddf88: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005ddf8e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005ddf90: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005ddf96: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 005ddf9c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5ddf9eu); call_ind(t); }
    /* 005ddf9e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ddfa1: jge 0x5de06b */ if ((fS==fO)) goto L_005de06b;
L_005ddfa7:; BB(0x005ddfa7);
    /* 005ddfa7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005ddfaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddfab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5ddfb0u); f_005dcb00();
    /* 005ddfb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ddfb3: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 005ddfb6: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ddfb9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ddfbeu); f_0063aac0();
    /* 005ddfbe: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005ddfc0: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 005ddfc3: cmp dword ptr [ebp - 0x5c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddfc7: je 0x5ddfe8 */ if (fZ) goto L_005ddfe8;
L_005ddfc9:; BB(0x005ddfc9);
    /* 005ddfc9: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005ddfcc: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5ddfd1u); f_0063aac0();
    /* 005ddfd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddfd3: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 005ddfd6: cmp dword ptr [ebp - 0x60], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddfda: je 0x5ddfe8 */ if (fZ) goto L_005ddfe8;
L_005ddfdc:; BB(0x005ddfdc);
    /* 005ddfdc: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 005ddfe6: jmp 0x5ddff2 */ goto L_005ddff2;
L_005ddfe8:; BB(0x005ddfe8);
    /* 005ddfe8: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
L_005ddff2:; BB(0x005ddff2);
    /* 005ddff2: movzx eax, byte ptr [ebp - 0x88] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff78u));
    /* 005ddff9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddffb: je 0x5de066 */ if (fZ) goto L_005de066;
L_005ddffd:; BB(0x005ddffd);
    /* 005ddffd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de000: cmp ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de003: jne 0x5de040 */ if (!fZ) goto L_005de040;
L_005de005:; BB(0x005de005);
    /* 005de005: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de007: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de00a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de00b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de00e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de00f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de014u); f_005dcb00();
    /* 005de014: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de017: mov ecx, eax */ r_ecx = r_eax;
    /* 005de019: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x5de01eu); f_0063a3e0();
    /* 005de01e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de021: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de022: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de027u); f_005dcb00();
    /* 005de027: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de02a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005de02d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005de030: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de035u); f_0063aac0();
    /* 005de035: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005de03b: jmp 0x5ddf7f */ goto L_005ddf7f;
L_005de040:; BB(0x005de040);
    /* 005de040: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005de042: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005de044: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005de046: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de048: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de04a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de04d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de04e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5de053u); f_005dcb00();
    /* 005de053: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005de056: mov ecx, eax */ r_ecx = r_eax;
    /* 005de058: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x5de05du); f_0063a8d0();
    /* 005de05d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de060: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de063: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de066:; BB(0x005de066);
    /* 005de066: jmp 0x5ddf7f */ goto L_005ddf7f;
L_005de06b:; BB(0x005de06b);
    /* 005de06b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de06e: cmp ecx, dword ptr [ebp - 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de071: jge 0x5de079 */ if ((fS==fO)) goto L_005de079;
L_005de073:; BB(0x005de073);
    /* 005de073: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de077: jne 0x5de081 */ if (!fZ) goto L_005de081;
L_005de079:; BB(0x005de079);
    /* 005de079: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de07c: jmp 0x5de166 */ goto L_005de166;
L_005de081:; BB(0x005de081);
    /* 005de081: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005de088: jmp 0x5de093 */ goto L_005de093;
L_005de08a:; BB(0x005de08a);
    /* 005de08a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de08d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de090: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005de093:; BB(0x005de093);
    /* 005de093: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005de098: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de09a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005de0a0: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005de0a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de0a8u); call_ind(t); }
    /* 005de0a8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de0ab: jge 0x5de159 */ if ((fS==fO)) goto L_005de159;
L_005de0b1:; BB(0x005de0b1);
    /* 005de0b1: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005de0b4: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005de0b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de0ba: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005de0bd: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 005de0c0: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 005de0c3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de0c8u); f_0063aac0();
    /* 005de0c8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de0ca: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 005de0cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de0cf: cmp dword ptr [ebp - 0x6c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de0d3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005de0d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005de0d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de0db: je 0x5de0fa */ if (fZ) goto L_005de0fa;
L_005de0dd:; BB(0x005de0dd);
    /* 005de0dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005de0df: jne 0x5de0f8 */ if (!fZ) goto L_005de0f8;
L_005de0e1:; BB(0x005de0e1);
    /* 005de0e1: push 0x2d7 */ { u32 v = 0x2d7u; r_esp -= 4; W32(r_esp, v); }
    /* 005de0e6: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005de0eb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005de0f0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5de0f5u); f_005e9f20();
    /* 005de0f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005de0f8:; BB(0x005de0f8);
    /* 005de0f8: jmp 0x5de159 */ goto L_005de159;
L_005de0fa:; BB(0x005de0fa);
    /* 005de0fa: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005de0fd: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005de100: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de103: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005de106: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005de109: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 005de10c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5de111u); f_0063aac0();
    /* 005de111: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de113: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 005de116: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005de118: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de11c: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005de11f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005de122: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de124: je 0x5de14a */ if (fZ) goto L_005de14a;
L_005de126:; BB(0x005de126);
    /* 005de126: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005de128: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005de12a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005de12c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005de12e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005de130: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 005de133: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005de136: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de139: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 005de13c: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x5de141u); f_0063a8d0();
    /* 005de141: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de144: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005de147: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005de14a:; BB(0x005de14a);
    /* 005de14a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de14d: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de150: jne 0x5de154 */ if (!fZ) goto L_005de154;
L_005de152:; BB(0x005de152);
    /* 005de152: jmp 0x5de159 */ goto L_005de159;
L_005de154:; BB(0x005de154);
    /* 005de154: jmp 0x5de08a */ goto L_005de08a;
L_005de159:; BB(0x005de159);
    /* 005de159: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de15c: jmp 0x5de166 */ goto L_005de166;
L_005de15e:; BB(0x005de15e);
    /* 005de15e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005de161: call 0x6363e0 */ r_esp -= 4; W32(r_esp, 0x5de166u); f_006363e0();
L_005de166:; BB(0x005de166);
    /* 005de166: mov esp, ebp */ r_esp = r_ebp;
    /* 005de168: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de169: ret  */ FN_RET(0x005ddd20); r_esp += 4; return;
}

void f_005de530(void) /* CasinoShell::vfunc218 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de530);
    /* 005de530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de531: mov ebp, esp */ r_ebp = r_esp;
    /* 005de533: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de536: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005de537: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de53a: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005de540: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5de545u); f_005da830();
    /* 005de545: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005de548: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de54a: je 0x5de577 */ if (fZ) goto L_005de577;
L_005de54c:; BB(0x005de54c);
    /* 005de54c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de54f: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5de554u); f_005d5a50();
    /* 005de554: mov esi, eax */ r_esi = r_eax;
    /* 005de556: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005de55c: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5de561u); f_005da880();
    /* 005de561: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de563: jge 0x5de569 */ if ((fS==fO)) goto L_005de569;
L_005de565:; BB(0x005de565);
    /* 005de565: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005de567: jmp 0x5de5be */ goto L_005de5be;
L_005de569:; BB(0x005de569);
    /* 005de569: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de56c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de56d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de570: call 0x636950 */ r_esp -= 4; W32(r_esp, 0x5de575u); f_00636950();
    /* 005de575: jmp 0x5de5be */ goto L_005de5be;
L_005de577:; BB(0x005de577);
    /* 005de577: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de57e: je 0x5de5b2 */ if (fZ) goto L_005de5b2;
L_005de580:; BB(0x005de580);
    /* 005de580: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005de583: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005de584: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 005de589: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005de58b: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005de591: mov eax, dword ptr [edx + 0x2e8] */ r_eax = R32((u32)(r_edx+0x2e8u));
    /* 005de597: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de599u); call_ind(t); }
    /* 005de599: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de59c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de5a0: je 0x5de5aa */ if (fZ) goto L_005de5aa;
L_005de5a2:; BB(0x005de5a2);
    /* 005de5a2: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de5a6: je 0x5de5ae */ if (fZ) goto L_005de5ae;
L_005de5a8:; BB(0x005de5a8);
    /* 005de5a8: jmp 0x5de5b2 */ goto L_005de5b2;
L_005de5aa:; BB(0x005de5aa);
    /* 005de5aa: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005de5ac: jmp 0x5de5be */ goto L_005de5be;
L_005de5ae:; BB(0x005de5ae);
    /* 005de5ae: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005de5b0: jmp 0x5de5be */ goto L_005de5be;
L_005de5b2:; BB(0x005de5b2);
    /* 005de5b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005de5b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de5b9: call 0x636950 */ r_esp -= 4; W32(r_esp, 0x5de5beu); f_00636950();
L_005de5be:; BB(0x005de5be);
    /* 005de5be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005de5bf: mov esp, ebp */ r_esp = r_ebp;
    /* 005de5c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de5c2: ret 4 */ FN_RET(0x005de530); r_esp += 8; return;
}

void f_005de5d0(void) /* CasinoShell::vfunc219 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de5d0);
    /* 005de5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005de5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de5d7: mov eax, 0x5a */ r_eax = 0x5au;
    /* 005de5dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005de5de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de5df: ret  */ FN_RET(0x005de5d0); r_esp += 4; return;
}

void f_005de5e0(void) /* CasinoShell::vfunc216 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de5e0);
    /* 005de5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005de5e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de5e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de5e7: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005de5ed: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5de5f2u); f_005da830();
    /* 005de5f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005de5f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de5f5: ret  */ FN_RET(0x005de5e0); r_esp += 4; return;
}

void f_005de880(void) /* casinoshell::func_005de880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de880);
    /* 005de880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de881: mov ebp, esp */ r_ebp = r_esp;
    /* 005de883: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de886: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de889: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005de88c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005de88f: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005de893: ja 0x5de8f1 */ if ((!fC&&!fZ)) goto L_005de8f1;
L_005de895:; BB(0x005de895);
    /* 005de895: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de898: movzx edx, byte ptr [ecx + 0x5de92c] */ r_edx = (u32)R8((u32)(r_ecx+0x5de92cu));
    /* 005de89f: jmp dword ptr [edx*4 + 0x5de914] */ { u32 t = R32((u32)(r_edx*4+0x5de914u)); switch (t) { case 0x5de8a6u: goto L_005de8a6; case 0x5de8b5u: goto L_005de8b5; case 0x5de8c4u: goto L_005de8c4; case 0x5de8d3u: goto L_005de8d3; case 0x5de8e2u: goto L_005de8e2; case 0x5de8f1u: goto L_005de8f1; default: UNSUP(0x005de89f, "jump table entry is not a known target"); } }
L_005de8a6:; BB(0x005de8a6);
    /* 005de8a6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de8a9: mov dword ptr [eax + 0x4ed0], 0x9c4 */ W32((u32)(r_eax+0x4ed0u), 0x9c4u);
    /* 005de8b3: jmp 0x5de90c */ goto L_005de90c;
L_005de8b5:; BB(0x005de8b5);
    /* 005de8b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de8b8: mov dword ptr [ecx + 0x4ed4], 0x2710 */ W32((u32)(r_ecx+0x4ed4u), 0x2710u);
    /* 005de8c2: jmp 0x5de90c */ goto L_005de90c;
L_005de8c4:; BB(0x005de8c4);
    /* 005de8c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de8c7: mov dword ptr [edx + 0x4ed8], 0xc350 */ W32((u32)(r_edx+0x4ed8u), 0xc350u);
    /* 005de8d1: jmp 0x5de90c */ goto L_005de90c;
L_005de8d3:; BB(0x005de8d3);
    /* 005de8d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de8d6: mov dword ptr [eax + 0x4edc], 0x186a0 */ W32((u32)(r_eax+0x4edcu), 0x186a0u);
    /* 005de8e0: jmp 0x5de90c */ goto L_005de90c;
L_005de8e2:; BB(0x005de8e2);
    /* 005de8e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de8e5: mov dword ptr [ecx + 0x4ee0], 0xf4240 */ W32((u32)(r_ecx+0x4ee0u), 0xf4240u);
    /* 005de8ef: jmp 0x5de90c */ goto L_005de90c;
L_005de8f1:; BB(0x005de8f1);
    /* 005de8f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005de8f3: jne 0x5de90c */ if (!fZ) goto L_005de90c;
L_005de8f5:; BB(0x005de8f5);
    /* 005de8f5: push 0x391 */ { u32 v = 0x391u; r_esp -= 4; W32(r_esp, v); }
    /* 005de8fa: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005de8ff: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005de904: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5de909u); f_005e9f20();
    /* 005de909: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005de90c:; BB(0x005de90c);
    /* 005de90c: mov esp, ebp */ r_esp = r_ebp;
    /* 005de90e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de90f: ret 4 */ FN_RET(0x005de880); r_esp += 8; return;
}

void f_005de9a0(void) /* CasinoShell::vfunc59 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de9a0);
    /* 005de9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005de9a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de9a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de9a7: mov eax, 0x16 */ r_eax = 0x16u;
    /* 005de9ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005de9ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de9af: ret  */ FN_RET(0x005de9a0); r_esp += 4; return;
}

void f_005de9b0(void) /* CasinoShell::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de9b0);
    /* 005de9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005de9b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005de9b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005de9b7: mov eax, 0x16 */ r_eax = 0x16u;
    /* 005de9bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005de9be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005de9bf: ret  */ FN_RET(0x005de9b0); r_esp += 4; return;
}

void f_005de9c0(void) /* CasinoShell::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005de9c0);
    /* 005de9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005de9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005de9c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005de9c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005de9c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005de9d0: jmp 0x5de9db */ goto L_005de9db;
L_005de9d2:; BB(0x005de9d2);
    /* 005de9d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de9d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005de9d8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005de9db:; BB(0x005de9db);
    /* 005de9db: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de9de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005de9e0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005de9e3: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005de9e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5de9ebu); call_ind(t); }
    /* 005de9eb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005de9ee: jge 0x5dea11 */ if ((fS==fO)) goto L_005dea11;
L_005de9f0:; BB(0x005de9f0);
    /* 005de9f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005de9f3: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005de9f6: mov edx, dword ptr [ecx + 0x7947f0] */ r_edx = R32((u32)(r_ecx+0x7947f0u));
    /* 005de9fc: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005de9ff: jne 0x5dea0f */ if (!fZ) goto L_005dea0f;
L_005dea01:; BB(0x005dea01);
    /* 005dea01: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dea04: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dea07: mov eax, dword ptr [eax + 0x7947f4] */ r_eax = R32((u32)(r_eax+0x7947f4u));
    /* 005dea0d: jmp 0x5dea13 */ goto L_005dea13;
L_005dea0f:; BB(0x005dea0f);
    /* 005dea0f: jmp 0x5de9d2 */ goto L_005de9d2;
L_005dea11:; BB(0x005dea11);
    /* 005dea11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005dea13:; BB(0x005dea13);
    /* 005dea13: mov esp, ebp */ r_esp = r_ebp;
    /* 005dea15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dea16: ret 4 */ FN_RET(0x005de9c0); r_esp += 8; return;
}

void f_005dea20(void) /* CasinoShell::vfunc207 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dea20);
    /* 005dea20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dea21: mov ebp, esp */ r_ebp = r_esp;
    /* 005dea23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dea24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dea27: cmp dword ptr [ebp + 8], 0x17 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dea2b: jne 0x5dea31 */ if (!fZ) goto L_005dea31;
L_005dea2d:; BB(0x005dea2d);
    /* 005dea2d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005dea2f: jmp 0x5dea3d */ goto L_005dea3d;
L_005dea31:; BB(0x005dea31);
    /* 005dea31: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dea34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dea35: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dea38: call 0x635c40 */ r_esp -= 4; W32(r_esp, 0x5dea3du); f_00635c40();
L_005dea3d:; BB(0x005dea3d);
    /* 005dea3d: mov esp, ebp */ r_esp = r_ebp;
    /* 005dea3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dea40: ret 4 */ FN_RET(0x005dea20); r_esp += 8; return;
}

void f_005deab0(void) /* CasinoShell::vfunc62 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deab0);
    /* 005deab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deab1: mov ebp, esp */ r_ebp = r_esp;
    /* 005deab3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005deab5: push 0x6a95c3 */ { u32 v = 0x6a95c3u; r_esp -= 4; W32(r_esp, v); }
    /* 005deaba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005deac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deac1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005deac4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005deac9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005deacb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deacc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005deacf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dead5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dead8: mov dword ptr [0x7947e4], 0 */ W32((u32)(0x7947e4u), 0x0u);
    /* 005deae2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deae5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005deae7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deaea: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005deaf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5deaf2u); call_ind(t); }
    /* 005deaf2: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005deaf5: jge 0x5deb37 */ if ((fS==fO)) goto L_005deb37;
L_005deaf7:; BB(0x005deaf7);
    /* 005deaf7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005deafa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005deafb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deafe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005deb00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005deb03: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 005deb09: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5deb0bu); call_ind(t); }
    /* 005deb0b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005deb0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005deb10: push 0x706b50 */ { u32 v = 0x706b50u; r_esp -= 4; W32(r_esp, v); }
    /* 005deb15: push 0x706b6c */ { u32 v = 0x706b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005deb1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005deb1c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005deb1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005deb21: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005deb24: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005deb27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5deb29u); call_ind(t); }
    /* 005deb29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005deb2a: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x5deb2fu); f_00686ede();
    /* 005deb2f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005deb32: mov dword ptr [0x7947e4], eax */ W32((u32)(0x7947e4u), r_eax);
L_005deb37:; BB(0x005deb37);
    /* 005deb37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005deb3a: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005deb3d: cmp dword ptr [ebp - 0x28], 0x30d400 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x30d400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deb44: je 0x5deb54 */ if (fZ) goto L_005deb54;
L_005deb46:; BB(0x005deb46);
    /* 005deb46: cmp dword ptr [ebp - 0x28], 0x30d401 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x30d401u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deb4d: je 0x5deb9c */ if (fZ) goto L_005deb9c;
L_005deb4f:; BB(0x005deb4f);
    /* 005deb4f: jmp 0x5debe3 */ goto L_005debe3;
L_005deb54:; BB(0x005deb54);
    /* 005deb54: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 005deb59: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5deb5eu); f_00686d82();
    /* 005deb5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005deb61: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005deb64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005deb6b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005deb6f: je 0x5deb7e */ if (fZ) goto L_005deb7e;
L_005deb71:; BB(0x005deb71);
    /* 005deb71: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005deb74: call 0x661470 */ r_esp -= 4; W32(r_esp, 0x5deb79u); f_00661470();
    /* 005deb79: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005deb7c: jmp 0x5deb85 */ goto L_005deb85;
L_005deb7e:; BB(0x005deb7e);
    /* 005deb7e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005deb85:; BB(0x005deb85);
    /* 005deb85: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005deb88: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005deb8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005deb92: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005deb95: mov dword ptr [0x7947e4], eax */ W32((u32)(0x7947e4u), r_eax);
    /* 005deb9a: jmp 0x5debe3 */ goto L_005debe3;
L_005deb9c:; BB(0x005deb9c);
    /* 005deb9c: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 005deba1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5deba6u); f_00686d82();
    /* 005deba6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005deba9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005debac: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005debb3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005debb7: je 0x5debc6 */ if (fZ) goto L_005debc6;
L_005debb9:; BB(0x005debb9);
    /* 005debb9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005debbc: call 0x51f260 */ r_esp -= 4; W32(r_esp, 0x5debc1u); f_0051f260();
    /* 005debc1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005debc4: jmp 0x5debcd */ goto L_005debcd;
L_005debc6:; BB(0x005debc6);
    /* 005debc6: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005debcd:; BB(0x005debcd);
    /* 005debcd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005debd0: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005debd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005debda: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005debdd: mov dword ptr [0x7947e4], edx */ W32((u32)(0x7947e4u), r_edx);
L_005debe3:; BB(0x005debe3);
    /* 005debe3: cmp dword ptr [0x7947e4], 0 */ {  u32 a = R32((u32)(0x7947e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005debea: jne 0x5debfa */ if (!fZ) goto L_005debfa;
L_005debec:; BB(0x005debec);
    /* 005debec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005debef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005debf0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005debf3: call 0x632890 */ r_esp -= 4; W32(r_esp, 0x5debf8u); f_00632890();
    /* 005debf8: jmp 0x5debff */ goto L_005debff;
L_005debfa:; BB(0x005debfa);
    /* 005debfa: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
L_005debff:; BB(0x005debff);
    /* 005debff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dec09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dec0a: mov esp, ebp */ r_esp = r_ebp;
    /* 005dec0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dec0d: ret 4 */ FN_RET(0x005deab0); r_esp += 8; return;
}

void f_005dec10(void) /* CasinoShell::vfunc199 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dec10);
    /* 005dec10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dec11: mov ebp, esp */ r_ebp = r_esp;
    /* 005dec13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dec15: push 0x6a95e9 */ { u32 v = 0x6a95e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dec1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dec20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dec21: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dec24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dec29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dec2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dec2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dec2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dec35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dec38: push 0x4f4 */ { u32 v = 0x4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dec3d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dec42u); f_00686d82();
    /* 005dec42: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dec45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dec48: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dec4f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dec53: je 0x5dec62 */ if (fZ) goto L_005dec62;
L_005dec55:; BB(0x005dec55);
    /* 005dec55: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dec58: call 0x5d4cf0 */ r_esp -= 4; W32(r_esp, 0x5dec5du); f_005d4cf0();
    /* 005dec5d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dec60: jmp 0x5dec69 */ goto L_005dec69;
L_005dec62:; BB(0x005dec62);
    /* 005dec62: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dec69:; BB(0x005dec69);
    /* 005dec69: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dec6c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dec6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dec76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dec79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dec7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dec83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dec84: mov esp, ebp */ r_esp = r_ebp;
    /* 005dec86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dec87: ret  */ FN_RET(0x005dec10); r_esp += 4; return;
}

void f_005dec90(void) /* CasinoShell::vfunc205 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dec90);
    /* 005dec90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dec91: mov ebp, esp */ r_ebp = r_esp;
    /* 005dec93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dec94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dec97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dec9a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dec9d: mov dword ptr [eax + 0x4f2c], ecx */ W32((u32)(r_eax+0x4f2cu), r_ecx);
    /* 005deca3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deca6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005deca9: mov dword ptr [edx + 0x4f30], eax */ W32((u32)(r_edx+0x4f30u), r_eax);
    /* 005decaf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005decb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005decb3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005decb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005decb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005decba: call 0x635330 */ r_esp -= 4; W32(r_esp, 0x5decbfu); f_00635330();
    /* 005decbf: mov esp, ebp */ r_esp = r_ebp;
    /* 005decc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005decc2: ret 8 */ FN_RET(0x005dec90); r_esp += 12; return;
}

void f_005decd0(void) /* CasinoShell::vfunc247 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005decd0);
    /* 005decd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005decd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005decd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005decd6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005decd9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005decdc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005decdf: cmp dword ptr [ebp - 8], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dece3: je 0x5decf3 */ if (fZ) goto L_005decf3;
L_005dece5:; BB(0x005dece5);
    /* 005dece5: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dece9: je 0x5decfa */ if (fZ) goto L_005decfa;
L_005deceb:; BB(0x005deceb);
    /* 005deceb: cmp dword ptr [ebp - 8], 0x15 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005decef: je 0x5ded01 */ if (fZ) goto L_005ded01;
L_005decf1:; BB(0x005decf1);
    /* 005decf1: jmp 0x5ded08 */ goto L_005ded08;
L_005decf3:; BB(0x005decf3);
    /* 005decf3: mov eax, 0xe */ r_eax = 0xeu;
    /* 005decf8: jmp 0x5ded0b */ goto L_005ded0b;
L_005decfa:; BB(0x005decfa);
    /* 005decfa: mov eax, 0xe */ r_eax = 0xeu;
    /* 005decff: jmp 0x5ded0b */ goto L_005ded0b;
L_005ded01:; BB(0x005ded01);
    /* 005ded01: mov eax, 0xe */ r_eax = 0xeu;
    /* 005ded06: jmp 0x5ded0b */ goto L_005ded0b;
L_005ded08:; BB(0x005ded08);
    /* 005ded08: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005ded0b:; BB(0x005ded0b);
    /* 005ded0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005ded0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ded0e: ret 4 */ FN_RET(0x005decd0); r_esp += 8; return;
}

void f_005ded20(void) /* CasinoShell::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005ded20);
    /* 005ded20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ded21: mov ebp, esp */ r_ebp = r_esp;
    /* 005ded23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ded24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005ded27: push 0x6d4c20 */ { u32 v = 0x6d4c20u; r_esp -= 4; W32(r_esp, v); }
    /* 005ded2c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ded2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ded30: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5ded35u); f_00686ec0();
    /* 005ded35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ded38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ded3a: jne 0x5ded4b */ if (!fZ) goto L_005ded4b;
L_005ded3c:; BB(0x005ded3c);
    /* 005ded3c: push 0x6d4c0c */ { u32 v = 0x6d4c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ded41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ded44: call 0x631fb0 */ r_esp -= 4; W32(r_esp, 0x5ded49u); f_00631fb0();
    /* 005ded49: jmp 0x5ded9f */ goto L_005ded9f;
L_005ded4b:; BB(0x005ded4b);
    /* 005ded4b: push 0x6d4bec */ { u32 v = 0x6d4becu; r_esp -= 4; W32(r_esp, v); }
    /* 005ded50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ded53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ded54: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5ded59u); f_00686ec0();
    /* 005ded59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ded5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ded5e: jne 0x5ded6f */ if (!fZ) goto L_005ded6f;
L_005ded60:; BB(0x005ded60);
    /* 005ded60: push 0x6d4bcc */ { u32 v = 0x6d4bccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ded65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ded68: call 0x631fb0 */ r_esp -= 4; W32(r_esp, 0x5ded6du); f_00631fb0();
    /* 005ded6d: jmp 0x5ded9f */ goto L_005ded9f;
L_005ded6f:; BB(0x005ded6f);
    /* 005ded6f: push 0x6d4bb0 */ { u32 v = 0x6d4bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ded74: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005ded77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ded78: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5ded7du); f_00686ec0();
    /* 005ded7d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ded80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ded82: jne 0x5ded93 */ if (!fZ) goto L_005ded93;
L_005ded84:; BB(0x005ded84);
    /* 005ded84: push 0x6d4b94 */ { u32 v = 0x6d4b94u; r_esp -= 4; W32(r_esp, v); }
    /* 005ded89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ded8c: call 0x631fb0 */ r_esp -= 4; W32(r_esp, 0x5ded91u); f_00631fb0();
    /* 005ded91: jmp 0x5ded9f */ goto L_005ded9f;
L_005ded93:; BB(0x005ded93);
    /* 005ded93: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ded96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ded97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005ded9a: call 0x631fb0 */ r_esp -= 4; W32(r_esp, 0x5ded9fu); f_00631fb0();
L_005ded9f:; BB(0x005ded9f);
    /* 005ded9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005deda1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deda2: ret 4 */ FN_RET(0x005ded20); r_esp += 8; return;
}

void f_005dedb0(void) /* CasinoShell::vfunc41 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dedb0);
    /* 005dedb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dedb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dedb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dedb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dedb7: mov eax, 0x75e048 */ r_eax = 0x75e048u;
    /* 005dedbc: mov esp, ebp */ r_esp = r_ebp;
    /* 005dedbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dedbf: ret  */ FN_RET(0x005dedb0); r_esp += 4; return;
}

void f_005dedc0(void) /* CasinoShell::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dedc0);
    /* 005dedc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dedc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dedc3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dedc6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005dedc9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dedd0: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dedd4: jne 0x5dede1 */ if (!fZ) goto L_005dede1;
L_005dedd6:; BB(0x005dedd6);
    /* 005dedd6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dedd9: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5deddeu); f_005f3bf0();
    /* 005dedde: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_005dede1:; BB(0x005dede1);
    /* 005dede1: cmp dword ptr [ebp + 8], 0x30d401 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30d401u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dede8: jne 0x5dedf1 */ if (!fZ) goto L_005dedf1;
L_005dedea:; BB(0x005dedea);
    /* 005dedea: mov eax, 0x2f7471 */ r_eax = 0x2f7471u;
    /* 005dedef: jmp 0x5dee5e */ goto L_005dee5e;
L_005dedf1:; BB(0x005dedf1);
    /* 005dedf1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dedf8: jmp 0x5dee03 */ goto L_005dee03;
L_005dedfa:; BB(0x005dedfa);
    /* 005dedfa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dedfd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dee00: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005dee03:; BB(0x005dee03);
    /* 005dee03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dee06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dee08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dee0b: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 005dee11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dee13u); call_ind(t); }
    /* 005dee13: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dee16: jge 0x5dee3a */ if ((fS==fO)) goto L_005dee3a;
L_005dee18:; BB(0x005dee18);
    /* 005dee18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dee1b: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dee1e: mov edx, dword ptr [ecx + 0x7947f0] */ r_edx = R32((u32)(r_ecx+0x7947f0u));
    /* 005dee24: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dee27: jne 0x5dee38 */ if (!fZ) goto L_005dee38;
L_005dee29:; BB(0x005dee29);
    /* 005dee29: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005dee2c: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dee2f: mov ecx, dword ptr [eax + 0x7947f8] */ r_ecx = R32((u32)(r_eax+0x7947f8u));
    /* 005dee35: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dee38:; BB(0x005dee38);
    /* 005dee38: jmp 0x5dedfa */ goto L_005dedfa;
L_005dee3a:; BB(0x005dee3a);
    /* 005dee3a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dee3e: jne 0x5dee5b */ if (!fZ) goto L_005dee5b;
L_005dee40:; BB(0x005dee40);
    /* 005dee40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005dee42: jne 0x5dee5b */ if (!fZ) goto L_005dee5b;
L_005dee44:; BB(0x005dee44);
    /* 005dee44: push 0x423 */ { u32 v = 0x423u; r_esp -= 4; W32(r_esp, v); }
    /* 005dee49: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005dee4e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005dee53: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5dee58u); f_005e9f20();
    /* 005dee58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005dee5b:; BB(0x005dee5b);
    /* 005dee5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_005dee5e:; BB(0x005dee5e);
    /* 005dee5e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dee60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dee61: ret 4 */ FN_RET(0x005dedc0); r_esp += 8; return;
}

void f_005deeb0(void) /* CasinoShell::vfunc89 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deeb0);
    /* 005deeb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deeb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005deeb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005deeb4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005deeb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deeba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005deebc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005deebf: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 005deec5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5deec7u); call_ind(t); }
    /* 005deec7: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005deeca: jge 0x5deed8 */ if ((fS==fO)) goto L_005deed8;
L_005deecc:; BB(0x005deecc);
    /* 005deecc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005deecf: mov eax, dword ptr [ecx*4 + 0x75d7e8] */ r_eax = R32((u32)(r_ecx*4+0x75d7e8u));
    /* 005deed6: jmp 0x5deef6 */ goto L_005deef6;
L_005deed8:; BB(0x005deed8);
    /* 005deed8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005deeda: jne 0x5deef3 */ if (!fZ) goto L_005deef3;
L_005deedc:; BB(0x005deedc);
    /* 005deedc: push 0x449 */ { u32 v = 0x449u; r_esp -= 4; W32(r_esp, v); }
    /* 005deee1: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005deee6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005deeeb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5deef0u); f_005e9f20();
    /* 005deef0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005deef3:; BB(0x005deef3);
    /* 005deef3: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_005deef6:; BB(0x005deef6);
    /* 005deef6: mov esp, ebp */ r_esp = r_ebp;
    /* 005deef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005deef9: ret 4 */ FN_RET(0x005deeb0); r_esp += 8; return;
}

void f_005def10(void) /* CasinoShell::vfunc91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005def10);
    /* 005def10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def11: mov ebp, esp */ r_ebp = r_esp;
    /* 005def13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005def14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005def17: mov eax, 0x14 */ r_eax = 0x14u;
    /* 005def1c: mov esp, ebp */ r_esp = r_ebp;
    /* 005def1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def1f: ret  */ FN_RET(0x005def10); r_esp += 4; return;
}

void f_005def20(void) /* CasinoShell::vfunc93 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005def20);
    /* 005def20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def21: mov ebp, esp */ r_ebp = r_esp;
    /* 005def23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005def24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005def27: mov eax, 0x75d838 */ r_eax = 0x75d838u;
    /* 005def2c: mov esp, ebp */ r_esp = r_ebp;
    /* 005def2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def2f: ret  */ FN_RET(0x005def20); r_esp += 4; return;
}

void f_005def30(void) /* CasinoShell::vfunc84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005def30);
    /* 005def30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def31: mov ebp, esp */ r_ebp = r_esp;
    /* 005def33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005def34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005def37: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 005def3c: mov esp, ebp */ r_esp = r_ebp;
    /* 005def3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def3f: ret  */ FN_RET(0x005def30); r_esp += 4; return;
}

void f_005def40(void) /* CasinoShell::vfunc85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005def40);
    /* 005def40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def41: mov ebp, esp */ r_ebp = r_esp;
    /* 005def43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005def46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005def49: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005def4c: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 005def4f: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 005def52: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005def56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005def58: je 0x5def5e */ if (fZ) goto L_005def5e;
L_005def5a:; BB(0x005def5a);
    /* 005def5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005def5c: jmp 0x5def63 */ goto L_005def63;
L_005def5e:; BB(0x005def5e);
    /* 005def5e: mov eax, 0x30d590 */ r_eax = 0x30d590u;
L_005def63:; BB(0x005def63);
    /* 005def63: mov esp, ebp */ r_esp = r_ebp;
    /* 005def65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def66: ret  */ FN_RET(0x005def40); r_esp += 4; return;
}

void f_005def70(void) /* CasinoShell::vfunc86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005def70);
    /* 005def70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005def71: mov ebp, esp */ r_ebp = r_esp;
    /* 005def73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005def74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005def77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005def7a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005def7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005def7f: mov eax, dword ptr [edx + 0x154] */ r_eax = R32((u32)(r_edx+0x154u));
    /* 005def85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5def87u); call_ind(t); }
    /* 005def87: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005def8a: mov esp, ebp */ r_esp = r_ebp;
    /* 005def8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005def8d: ret  */ FN_RET(0x005def70); r_esp += 4; return;
}

void f_005deff0(void) /* CasinoShell::vfunc98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005deff0);
    /* 005deff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005deff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005deff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005deff4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005deff7: mov eax, 0x30d401 */ r_eax = 0x30d401u;
    /* 005deffc: mov esp, ebp */ r_esp = r_ebp;
    /* 005deffe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005defff: ret  */ FN_RET(0x005deff0); r_esp += 4; return;
}

void f_005df000(void) /* CasinoShell::vfunc99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df000);
    /* 005df000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df001: mov ebp, esp */ r_ebp = r_esp;
    /* 005df003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df007: mov eax, 0x30d400 */ r_eax = 0x30d400u;
    /* 005df00c: mov esp, ebp */ r_esp = r_ebp;
    /* 005df00e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df00f: ret  */ FN_RET(0x005df000); r_esp += 4; return;
}

void f_005df010(void) /* CasinoShell::vfunc123 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df010);
    /* 005df010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df011: mov ebp, esp */ r_ebp = r_esp;
    /* 005df013: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df016: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005df019: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005df020: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005df027: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005df02e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df031: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df033: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df036: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 005df03c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df03eu); call_ind(t); }
    /* 005df03e: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df041: jge 0x5df093 */ if ((fS==fO)) goto L_005df093;
L_005df043:; BB(0x005df043);
    /* 005df043: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df046: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005df048: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df04b: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 005df051: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df053u); call_ind(t); }
    /* 005df053: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df056: jge 0x5df07e */ if ((fS==fO)) goto L_005df07e;
L_005df058:; BB(0x005df058);
    /* 005df058: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005df05b: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005df05e: add ecx, 0x75d870 */ {  u32 a = r_ecx; u32 b = 0x75d870u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005df064: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005df067: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005df069: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005df06b: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005df06e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005df071: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005df074: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 005df077: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df07a: jmp 0x5df0aa */ goto L_005df0aa;
L_005df07e:; BB(0x005df07e);
    /* 005df07e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005df081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005df082: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df086: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005df089: call 0x632d40 */ r_esp -= 4; W32(r_esp, 0x5df08eu); f_00632d40();
    /* 005df08e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df091: jmp 0x5df0aa */ goto L_005df0aa;
L_005df093:; BB(0x005df093);
    /* 005df093: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df096: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005df099: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005df09b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df09e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005df0a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df0a4: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005df0a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_005df0aa:; BB(0x005df0aa);
    /* 005df0aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005df0ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df0ad: ret 8 */ FN_RET(0x005df010); r_esp += 12; return;
}

void f_005df0b0(void) /* CasinoShell::vfunc125 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df0b0);
    /* 005df0b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df0b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df0b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df0b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df0b7: mov eax, 0x19 */ r_eax = 0x19u;
    /* 005df0bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df0be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df0bf: ret  */ FN_RET(0x005df0b0); r_esp += 4; return;
}

void f_005df0c0(void) /* CasinoShell::vfunc74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df0c0);
    /* 005df0c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df0c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df0c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df0c7: mov eax, 0x6d4c34 */ r_eax = 0x6d4c34u;
    /* 005df0cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df0ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df0cf: ret  */ FN_RET(0x005df0c0); r_esp += 4; return;
}

void f_005df150(void) /* CasinoShell::vfunc75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df150);
    /* 005df150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df151: mov ebp, esp */ r_ebp = r_esp;
    /* 005df153: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df154: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df157: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df15a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005df15c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df15f: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 005df165: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df167u); call_ind(t); }
    /* 005df167: mov esp, ebp */ r_esp = r_ebp;
    /* 005df169: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df16a: ret  */ FN_RET(0x005df150); r_esp += 4; return;
}

void f_005df2d0(void) /* CasinoShell::vfunc143 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df2d0);
    /* 005df2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df2d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df2d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df2d7: mov eax, 0x30d403 */ r_eax = 0x30d403u;
    /* 005df2dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df2de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df2df: ret  */ FN_RET(0x005df2d0); r_esp += 4; return;
}

void f_005df2f0(void) /* CasinoShell::vfunc144 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df2f0);
    /* 005df2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df2f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df2f6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df2f9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005df300: mov dword ptr [ebp - 4], 0x1c4 */ W32((u32)(r_ebp+0xfffffffcu), 0x1c4u);
    /* 005df307: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df30a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df30d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005df30f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df312: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005df315: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df318: mov esp, ebp */ r_esp = r_ebp;
    /* 005df31a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df31b: ret 4 */ FN_RET(0x005df2f0); r_esp += 8; return;
}

void f_005df320(void) /* CasinoShell::vfunc145 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df320);
    /* 005df320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df321: mov ebp, esp */ r_ebp = r_esp;
    /* 005df323: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df326: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df329: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df32c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df32f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df332: sub ecx, 0x30d400 */ {  u32 a = r_ecx; u32 b = 0x30d400u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005df338: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005df33b: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005df33f: ja 0x5df371 */ if ((!fC&&!fZ)) goto L_005df371;
L_005df341:; BB(0x005df341);
    /* 005df341: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df344: jmp dword ptr [edx*4 + 0x5df37c] */ { u32 t = R32((u32)(r_edx*4+0x5df37cu)); switch (t) { case 0x5df34bu: goto L_005df34b; case 0x5df352u: goto L_005df352; case 0x5df359u: goto L_005df359; case 0x5df367u: goto L_005df367; case 0x5df360u: goto L_005df360; default: UNSUP(0x005df344, "jump table entry is not a known target"); } }
L_005df34b:; BB(0x005df34b);
    /* 005df34b: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 005df350: jmp 0x5df373 */ goto L_005df373;
L_005df352:; BB(0x005df352);
    /* 005df352: mov eax, 0x2e */ r_eax = 0x2eu;
    /* 005df357: jmp 0x5df373 */ goto L_005df373;
L_005df359:; BB(0x005df359);
    /* 005df359: mov eax, 0x39 */ r_eax = 0x39u;
    /* 005df35e: jmp 0x5df373 */ goto L_005df373;
L_005df360:; BB(0x005df360);
    /* 005df360: mov eax, 0x27 */ r_eax = 0x27u;
    /* 005df365: jmp 0x5df373 */ goto L_005df373;
L_005df367:; BB(0x005df367);
    /* 005df367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df36a: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x5df36fu); f_005df2e0();
    /* 005df36f: jmp 0x5df373 */ goto L_005df373;
L_005df371:; BB(0x005df371);
    /* 005df371: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005df373:; BB(0x005df373);
    /* 005df373: mov esp, ebp */ r_esp = r_ebp;
    /* 005df375: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df376: ret 4 */ FN_RET(0x005df320); r_esp += 8; return;
}

void f_005df3b0(void) /* CasinoShell::vfunc148 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df3b0);
    /* 005df3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df3b7: mov eax, 0x75d9c0 */ r_eax = 0x75d9c0u;
    /* 005df3bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3bf: ret  */ FN_RET(0x005df3b0); r_esp += 4; return;
}

void f_005df3c0(void) /* CasinoShell::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df3c0);
    /* 005df3c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df3c7: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 005df3cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3cf: ret  */ FN_RET(0x005df3c0); r_esp += 4; return;
}

void f_005df3d0(void) /* CasinoShell::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df3d0);
    /* 005df3d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df3d7: mov eax, 0x45 */ r_eax = 0x45u;
    /* 005df3dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3df: ret  */ FN_RET(0x005df3d0); r_esp += 4; return;
}

void f_005df3e0(void) /* CasinoShell::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df3e0);
    /* 005df3e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df3e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df3e7: mov eax, 0x42 */ r_eax = 0x42u;
    /* 005df3ec: mov esp, ebp */ r_esp = r_ebp;
    /* 005df3ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df3ef: ret  */ FN_RET(0x005df3e0); r_esp += 4; return;
}

void f_005df3f0(void) /* CasinoShell::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df3f0);
    /* 005df3f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df3f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df3f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df3f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df3f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df3fc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df3ff: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df403: je 0x5df413 */ if (fZ) goto L_005df413;
L_005df405:; BB(0x005df405);
    /* 005df405: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df409: je 0x5df41f */ if (fZ) goto L_005df41f;
L_005df40b:; BB(0x005df40b);
    /* 005df40b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df40f: je 0x5df42b */ if (fZ) goto L_005df42b;
L_005df411:; BB(0x005df411);
    /* 005df411: jmp 0x5df437 */ goto L_005df437;
L_005df413:; BB(0x005df413);
    /* 005df413: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005df416: mov eax, dword ptr [ecx*4 + 0x75d99c] */ r_eax = R32((u32)(r_ecx*4+0x75d99cu));
    /* 005df41d: jmp 0x5df439 */ goto L_005df439;
L_005df41f:; BB(0x005df41f);
    /* 005df41f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005df422: mov eax, dword ptr [edx*4 + 0x75d9b4] */ r_eax = R32((u32)(r_edx*4+0x75d9b4u));
    /* 005df429: jmp 0x5df439 */ goto L_005df439;
L_005df42b:; BB(0x005df42b);
    /* 005df42b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005df42e: mov eax, dword ptr [eax*4 + 0x75d864] */ r_eax = R32((u32)(r_eax*4+0x75d864u));
    /* 005df435: jmp 0x5df439 */ goto L_005df439;
L_005df437:; BB(0x005df437);
    /* 005df437: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005df439:; BB(0x005df439);
    /* 005df439: mov esp, ebp */ r_esp = r_ebp;
    /* 005df43b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df43c: ret 8 */ FN_RET(0x005df3f0); r_esp += 12; return;
}

void f_005df440(void) /* CasinoShell::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df440);
    /* 005df440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df441: mov ebp, esp */ r_ebp = r_esp;
    /* 005df443: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df446: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005df449: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005df44d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005df450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df451: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df454: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df455: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df458: call 0x635190 */ r_esp -= 4; W32(r_esp, 0x5df45du); f_00635190();
    /* 005df45d: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005df460: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df463: mov al, byte ptr [edx + 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x25u))) & 0xffu);
    /* 005df466: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
    /* 005df469: movzx ecx, byte ptr [ebp - 2] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 005df46d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df46f: je 0x5df495 */ if (fZ) goto L_005df495;
L_005df471:; BB(0x005df471);
    /* 005df471: cmp dword ptr [ebp + 0xc], 0x186bf */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x186bfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df478: jne 0x5df495 */ if (!fZ) goto L_005df495;
L_005df47a:; BB(0x005df47a);
    /* 005df47a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df47c: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005df47e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df481: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5df486u); f_005fe640();
    /* 005df486: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df488: push 0x186c1 */ { u32 v = 0x186c1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df48d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df490: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x5df495u); f_005fe640();
L_005df495:; BB(0x005df495);
    /* 005df495: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 005df498: mov esp, ebp */ r_esp = r_ebp;
    /* 005df49a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df49b: ret 8 */ FN_RET(0x005df440); r_esp += 12; return;
}

void f_005df4a0(void) /* CasinoShell::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df4a0);
    /* 005df4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df4a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df4a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df4a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df4ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df4af: cmp dword ptr [ebp - 8], 0x30e789 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x30e789u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df4b6: jg 0x5df4d8 */ if ((!fZ&&fS==fO)) goto L_005df4d8;
L_005df4b8:; BB(0x005df4b8);
    /* 005df4b8: cmp dword ptr [ebp - 8], 0x30e789 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x30e789u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df4bf: je 0x5df52a */ if (fZ) goto L_005df52a;
L_005df4c1:; BB(0x005df4c1);
    /* 005df4c1: cmp dword ptr [ebp - 8], 0x1399 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1399u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df4c8: je 0x5df4f3 */ if (fZ) goto L_005df4f3;
L_005df4ca:; BB(0x005df4ca);
    /* 005df4ca: cmp dword ptr [ebp - 8], 0x139a */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x139au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df4d1: je 0x5df505 */ if (fZ) goto L_005df505;
L_005df4d3:; BB(0x005df4d3);
    /* 005df4d3: jmp 0x5df58f */ goto L_005df58f;
L_005df4d8:; BB(0x005df4d8);
    /* 005df4d8: cmp dword ptr [ebp - 8], 0x30e79b */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x30e79bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df4df: jl 0x5df58f */ if ((fS!=fO)) goto L_005df58f;
L_005df4e5:; BB(0x005df4e5);
    /* 005df4e5: cmp dword ptr [ebp - 8], 0x30e79c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x30e79cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df4ec: jle 0x5df52a */ if ((fZ||fS!=fO)) goto L_005df52a;
L_005df4ee:; BB(0x005df4ee);
    /* 005df4ee: jmp 0x5df58f */ goto L_005df58f;
L_005df4f3:; BB(0x005df4f3);
    /* 005df4f3: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005df4f9: call 0x5dc1c0 */ r_esp -= 4; W32(r_esp, 0x5df4feu); f_005dc1c0();
    /* 005df4fe: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005df500: jmp 0x5df591 */ goto L_005df591;
L_005df505:; BB(0x005df505);
    /* 005df505: cmp dword ptr [0x79506c], 0 */ {  u32 a = R32((u32)(0x79506cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df50c: je 0x5df51b */ if (fZ) goto L_005df51b;
L_005df50e:; BB(0x005df50e);
    /* 005df50e: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005df514: call 0x5e7500 */ r_esp -= 4; W32(r_esp, 0x5df519u); f_005e7500();
    /* 005df519: jmp 0x5df526 */ goto L_005df526;
L_005df51b:; BB(0x005df51b);
    /* 005df51b: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005df521: call 0x5dc0d0 */ r_esp -= 4; W32(r_esp, 0x5df526u); f_005dc0d0();
L_005df526:; BB(0x005df526);
    /* 005df526: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005df528: jmp 0x5df591 */ goto L_005df591;
L_005df52a:; BB(0x005df52a);
    /* 005df52a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005df52c: cmp dword ptr [ebp + 8], 0x30e79c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x30e79cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df533: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005df536: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005df53c: mov byte ptr [edx + 0x4f34], cl */ W8((u32)(r_edx+0x4f34u), (u8)r_ecx);
    /* 005df542: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005df548: call 0x5e2f90 */ r_esp -= 4; W32(r_esp, 0x5df54du); f_005e2f90();
    /* 005df54d: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005df552: mov dword ptr [eax + 0x4f20], 0xffffffff */ W32((u32)(r_eax+0x4f20u), 0xffffffffu);
    /* 005df55c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df55e: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 005df563: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005df569: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005df56b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005df571: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 005df577: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df579u); call_ind(t); }
    /* 005df579: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005df57c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005df57e: jne 0x5df58b */ if (!fZ) goto L_005df58b;
L_005df580:; BB(0x005df580);
    /* 005df580: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005df586: call 0x5e3130 */ r_esp -= 4; W32(r_esp, 0x5df58bu); f_005e3130();
L_005df58b:; BB(0x005df58b);
    /* 005df58b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005df58d: jmp 0x5df591 */ goto L_005df591;
L_005df58f:; BB(0x005df58f);
    /* 005df58f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005df591:; BB(0x005df591);
    /* 005df591: mov esp, ebp */ r_esp = r_ebp;
    /* 005df593: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df594: ret 8 */ FN_RET(0x005df4a0); r_esp += 12; return;
}

void f_005df5b0(void) /* CasinoShell::vfunc182 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df5b0);
    /* 005df5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df5b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df5b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df5b7: mov eax, 0x4ec */ r_eax = 0x4ecu;
    /* 005df5bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df5be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df5bf: ret  */ FN_RET(0x005df5b0); r_esp += 4; return;
}

void f_005df5c0(void) /* CasinoShell::vfunc183 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df5c0);
    /* 005df5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df5c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df5c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df5c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df5c7: mov eax, 0x52f */ r_eax = 0x52fu;
    /* 005df5cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df5ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df5cf: ret  */ FN_RET(0x005df5c0); r_esp += 4; return;
}

void f_005df5d0(void) /* CasinoShell::vfunc184 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df5d0);
    /* 005df5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df5d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df5d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df5d7: mov eax, 0x4ed */ r_eax = 0x4edu;
    /* 005df5dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005df5de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df5df: ret  */ FN_RET(0x005df5d0); r_esp += 4; return;
}

void f_005df5e0(void) /* CasinoShell::vfunc185 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df5e0);
    /* 005df5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df5e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df5e3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df5e6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005df5e9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005df5f0: mov dword ptr [ebp - 4], 0x1e0 */ W32((u32)(r_ebp+0xfffffffcu), 0x1e0u);
    /* 005df5f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df5fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df5fd: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005df5ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005df602: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005df605: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df608: mov esp, ebp */ r_esp = r_ebp;
    /* 005df60a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df60b: ret 4 */ FN_RET(0x005df5e0); r_esp += 8; return;
}

void f_005df630(void) /* CasinoShell::vfunc196 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df630);
    /* 005df630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df631: mov ebp, esp */ r_ebp = r_esp;
    /* 005df633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df637: mov eax, 0x2625a1 */ r_eax = 0x2625a1u;
    /* 005df63c: mov esp, ebp */ r_esp = r_ebp;
    /* 005df63e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df63f: ret  */ FN_RET(0x005df630); r_esp += 4; return;
}

void f_005df660(void) /* CasinoShell::vfunc189 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df660);
    /* 005df660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df661: mov ebp, esp */ r_ebp = r_esp;
    /* 005df663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005df664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df667: mov eax, 0x1fea */ r_eax = 0x1feau;
    /* 005df66c: mov esp, ebp */ r_esp = r_ebp;
    /* 005df66e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df66f: ret  */ FN_RET(0x005df660); r_esp += 4; return;
}

void f_005df6a0(void) /* CasinoShell::vfunc195 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df6a0);
    /* 005df6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005df6a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df6a6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005df6a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005df6ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005df6af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df6b2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005df6b5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005df6b8: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005df6bc: ja 0x5df6e4 */ if ((!fC&&!fZ)) goto L_005df6e4;
L_005df6be:; BB(0x005df6be);
    /* 005df6be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005df6c1: jmp dword ptr [edx*4 + 0x5df6ec] */ { u32 t = R32((u32)(r_edx*4+0x5df6ecu)); switch (t) { case 0x5df6c8u: goto L_005df6c8; case 0x5df6cfu: goto L_005df6cf; case 0x5df6d6u: goto L_005df6d6; case 0x5df6ddu: goto L_005df6dd; default: UNSUP(0x005df6c1, "jump table entry is not a known target"); } }
L_005df6c8:; BB(0x005df6c8);
    /* 005df6c8: mov eax, 0x30d4fa */ r_eax = 0x30d4fau;
    /* 005df6cd: jmp 0x5df6e6 */ goto L_005df6e6;
L_005df6cf:; BB(0x005df6cf);
    /* 005df6cf: mov eax, 0x30d4fb */ r_eax = 0x30d4fbu;
    /* 005df6d4: jmp 0x5df6e6 */ goto L_005df6e6;
L_005df6d6:; BB(0x005df6d6);
    /* 005df6d6: mov eax, 0x30d4fc */ r_eax = 0x30d4fcu;
    /* 005df6db: jmp 0x5df6e6 */ goto L_005df6e6;
L_005df6dd:; BB(0x005df6dd);
    /* 005df6dd: mov eax, 0x30d50f */ r_eax = 0x30d50fu;
    /* 005df6e2: jmp 0x5df6e6 */ goto L_005df6e6;
L_005df6e4:; BB(0x005df6e4);
    /* 005df6e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005df6e6:; BB(0x005df6e6);
    /* 005df6e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005df6e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005df6e9: ret 4 */ FN_RET(0x005df6a0); r_esp += 8; return;
}

void f_005df830(void) /* CasinoShell::vfunc239 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005df830);
    /* 005df830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005df831: mov ebp, esp */ r_ebp = r_esp;
    /* 005df833: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005df836: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005df839: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005df83c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005df83f: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005df843: mov dword ptr [ebp - 0x10], 8 */ W32((u32)(r_ebp+0xfffffff0u), 0x8u);
    /* 005df84a: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005df84e: jge 0x5df857 */ if ((fS==fO)) goto L_005df857;
L_005df850:; BB(0x005df850);
    /* 005df850: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_005df857:; BB(0x005df857);
    /* 005df857: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df859: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df85e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df860: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df862: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df866: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df868: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005df86b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005df86d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005df870: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 005df876: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5df878u); call_ind(t); }
    /* 005df878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df879: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df87b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df87d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df880: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5df885u); f_005f9ce0();
    /* 005df885: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df887: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005df889: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df88b: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005df88d: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005df892: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005df894: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005df899: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005df89b: push 0x6d4fb0 */ { u32 v = 0x6d4fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8a0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df8a5u); f_00630f40();
    /* 005df8a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df8a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df8a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8ad: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df8b0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5df8b5u); f_005fa5b0();
    /* 005df8b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df8b7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8bb: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df8bd: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005df8c2: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005df8c4: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8c9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005df8cb: push 0x6d4f9c */ { u32 v = 0x6d4f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df8d0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df8d5u); f_00630f40();
    /* 005df8d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df8d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df8d9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df8e0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5df8e5u); f_005fa5b0();
    /* 005df8e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df8e7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8eb: push 0x6b */ { u32 v = 0x6bu; r_esp -= 4; W32(r_esp, v); }
    /* 005df8ed: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005df8f2: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8f4: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8f9: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005df8fb: push 0x6d4f88 */ { u32 v = 0x6d4f88u; r_esp -= 4; W32(r_esp, v); }
    /* 005df900: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df905u); f_00630f40();
    /* 005df905: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df908: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df909: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005df90b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df90d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df910: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5df915u); f_005fa5b0();
    /* 005df915: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df917: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005df919: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df91b: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 005df920: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005df925: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df927: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005df92c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005df92e: push 0x6d4f74 */ { u32 v = 0x6d4f74u; r_esp -= 4; W32(r_esp, v); }
    /* 005df933: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df938u); f_00630f40();
    /* 005df938: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df93b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df93c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005df93e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df940: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df943: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5df948u); f_005fa5b0();
    /* 005df948: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df94a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005df94c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df94e: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 005df953: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005df958: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005df95a: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005df95f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005df961: push 0x6d4f60 */ { u32 v = 0x6d4f60u; r_esp -= 4; W32(r_esp, v); }
    /* 005df966: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df96bu); f_00630f40();
    /* 005df96b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df96e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df96f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005df971: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df973: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df976: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5df97bu); f_005fa5b0();
    /* 005df97b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df97d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005df97f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005df981: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 005df986: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005df98b: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df98d: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005df992: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005df994: push 0x6d4f4c */ { u32 v = 0x6d4f4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005df999: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df99eu); f_00630f40();
    /* 005df99e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df9a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df9a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9a6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df9a9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5df9aeu); f_005fa5b0();
    /* 005df9ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9b0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9b2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df9b4: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9b6: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9b8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005df9ba: push 0x6d4f38 */ { u32 v = 0x6d4f38u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9bf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df9c4u); f_00630f40();
    /* 005df9c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df9c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df9c8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9ca: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 005df9cf: push 0x145 */ { u32 v = 0x145u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9d4: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9d9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005df9e0: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5df9e5u); f_005f9ef0();
    /* 005df9e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9e7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9e9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005df9eb: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9ed: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9ef: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005df9f1: push 0x6d4f24 */ { u32 v = 0x6d4f24u; r_esp -= 4; W32(r_esp, v); }
    /* 005df9f6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5df9fbu); f_00630f40();
    /* 005df9fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005df9fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005df9ff: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa01: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa06: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa0b: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa10: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa14: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfa17: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5dfa1cu); f_005f9ef0();
    /* 005dfa1c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa1e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa20: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa22: push 0x12f */ { u32 v = 0x12fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa27: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa2c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa2e: push 0xe7 */ { u32 v = 0xe7u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa33: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa35: push 0x6d4f10 */ { u32 v = 0x6d4f10u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa3a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfa3fu); f_00630f40();
    /* 005dfa3f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfa42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa43: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa47: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfa4a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfa4fu); f_005fa5b0();
    /* 005dfa4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa51: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa53: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa55: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa5a: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa5f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa61: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa63: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa65: push 0x6d4efc */ { u32 v = 0x6d4efcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa6a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfa6fu); f_00630f40();
    /* 005dfa6f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfa72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa73: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa77: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfa7a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfa7fu); f_005fa5b0();
    /* 005dfa7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa81: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa83: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa85: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa8a: push 0x138 */ { u32 v = 0x138u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa8f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa91: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa93: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa95: push 0x6d4ee8 */ { u32 v = 0x6d4ee8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfa9a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfa9fu); f_00630f40();
    /* 005dfa9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfaa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaa3: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaa5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaa7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfaaa: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfaafu); f_005fa5b0();
    /* 005dfaaf: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005dfab1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfab3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfab5: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaba: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfabc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfabe: push 0x30d4d4 */ { u32 v = 0x30d4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfac3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfac5: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaca: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfacf: push 0x30d4d3 */ { u32 v = 0x30d4d3u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfad4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfad6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfad8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfadb: call 0x5faa90 */ r_esp -= 4; W32(r_esp, 0x5dfae0u); f_005faa90();
    /* 005dfae0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfae2: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfae7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfae9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaef: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfaf1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfaf4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dfaf6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfaf9: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 005dfaff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dfb01u); call_ind(t); }
    /* 005dfb01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb02: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb06: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfb09: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5dfb0eu); f_005f9ce0();
    /* 005dfb0e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb10: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb14: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb16: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb1b: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb1d: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb22: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb24: push 0x6d4ed4 */ { u32 v = 0x6d4ed4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb29: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfb2eu); f_00630f40();
    /* 005dfb2e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfb31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb32: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb36: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfb39: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfb3eu); f_005fa5b0();
    /* 005dfb3e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb40: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb44: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb46: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb4b: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb4d: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb52: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb54: push 0x6d4ec0 */ { u32 v = 0x6d4ec0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb59: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfb5eu); f_00630f40();
    /* 005dfb5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfb61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb62: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb66: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfb69: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfb6eu); f_005fa5b0();
    /* 005dfb6e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb70: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb74: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb79: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb7e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb80: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb85: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb87: push 0x6d4eac */ { u32 v = 0x6d4eacu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb8c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfb91u); f_00630f40();
    /* 005dfb91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfb94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb95: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfb99: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfb9c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfba1u); f_005fa5b0();
    /* 005dfba1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfba3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfba5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfba7: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbac: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbb1: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbb3: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbb8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbba: push 0x6d4e98 */ { u32 v = 0x6d4e98u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbbf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfbc4u); f_00630f40();
    /* 005dfbc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfbc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbc8: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbcc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfbcf: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfbd4u); f_005fa5b0();
    /* 005dfbd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbd6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbda: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbdc: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbde: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbe0: push 0x6d4e84 */ { u32 v = 0x6d4e84u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbe5: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfbeau); f_00630f40();
    /* 005dfbea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfbed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbee: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbf0: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbf5: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbfa: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfbff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc03: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfc06: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5dfc0bu); f_005f9ef0();
    /* 005dfc0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc0d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc11: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc13: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc15: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc17: push 0x6d4e70 */ { u32 v = 0x6d4e70u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc1c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfc21u); f_00630f40();
    /* 005dfc21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfc24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc27: push 0x121 */ { u32 v = 0x121u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc2c: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc31: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc36: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc3a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfc3d: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5dfc42u); f_005f9ef0();
    /* 005dfc42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc44: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc51: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc53: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfc56: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dfc58: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfc5b: mov eax, dword ptr [edx + 0x30c] */ r_eax = R32((u32)(r_edx+0x30cu));
    /* 005dfc61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dfc63u); call_ind(t); }
    /* 005dfc63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc64: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc68: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfc6b: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5dfc70u); f_005f9ce0();
    /* 005dfc70: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc72: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc76: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc78: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc7d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc7f: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc84: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc86: push 0x6d4e58 */ { u32 v = 0x6d4e58u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc8b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfc90u); f_00630f40();
    /* 005dfc90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfc93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc94: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfc98: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfc9b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfca0u); f_005fa5b0();
    /* 005dfca0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfca2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfca4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfca6: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfca8: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcad: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcaf: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcb4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcb6: push 0x6d4e3c */ { u32 v = 0x6d4e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcbb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfcc0u); f_00630f40();
    /* 005dfcc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfcc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcc4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcc8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfccb: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfcd0u); f_005fa5b0();
    /* 005dfcd0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dfcd7: jmp 0x5dfce2 */ goto L_005dfce2;
L_005dfcd9:; BB(0x005dfcd9);
    /* 005dfcd9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfcdc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfcdf: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005dfce2:; BB(0x005dfce2);
    /* 005dfce2: cmp dword ptr [ebp - 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dfce6: jge 0x5dfd46 */ if ((fS==fO)) goto L_005dfd46;
L_005dfce8:; BB(0x005dfce8);
    /* 005dfce8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcea: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcee: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcf0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcf2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcf4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfcf7: mov eax, dword ptr [edx*4 + 0x75da80] */ r_eax = R32((u32)(r_edx*4+0x75da80u));
    /* 005dfcfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfcff: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfd04u); f_00630f40();
    /* 005dfd04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfd07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd0a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfd0d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005dfd0e: idiv dword ptr [ebp - 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff0u)); if (!d) UNSUP(0x005dfd0e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005dfd0e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005dfd11: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dfd14: add edx, 0x8c */ {  u32 a = r_edx; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dfd1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd1b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfd1e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005dfd1f: idiv dword ptr [ebp - 0x10] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff0u)); if (!d) UNSUP(0x005dfd1f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005dfd1f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005dfd22: imul eax, eax, 0xb9 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xb9u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005dfd28: add eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dfd2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd2e: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd33: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dfd36: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dfd39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd3a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd3c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfd3f: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x5dfd44u); f_005f9ef0();
    /* 005dfd44: jmp 0x5dfcd9 */ goto L_005dfcd9;
L_005dfd46:; BB(0x005dfd46);
    /* 005dfd46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd48: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd4a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd4c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd4e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd50: push 0x6d4e20 */ { u32 v = 0x6d4e20u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd55: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfd5au); f_00630f40();
    /* 005dfd5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfd5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd60: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd65: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd6a: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd6f: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfd76: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5dfd7bu); f_005f9de0();
    /* 005dfd7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd7d: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd82: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd8a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd8c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfd8f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dfd91: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dfd94: mov edx, dword ptr [eax + 0x30c] */ r_edx = R32((u32)(r_eax+0x30cu));
    /* 005dfd9a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dfd9cu); call_ind(t); }
    /* 005dfd9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd9d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfd9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfda1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfda4: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5dfda9u); f_005f9ce0();
    /* 005dfda9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdab: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdaf: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdb1: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdb6: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdb8: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdbd: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdbf: push 0x6d4e0c */ { u32 v = 0x6d4e0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdc4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfdc9u); f_00630f40();
    /* 005dfdc9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfdcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdcd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdd1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfdd4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfdd9u); f_005fa5b0();
    /* 005dfdd9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfddb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfddf: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfde1: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfde6: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfde8: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfded: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdef: push 0x6d4df8 */ { u32 v = 0x6d4df8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdf4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfdf9u); f_00630f40();
    /* 005dfdf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfdfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdfd: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfdff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe01: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfe04: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfe09u); f_005fa5b0();
    /* 005dfe09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe0b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe0d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe0f: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe14: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe19: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe1b: push 0x154 */ { u32 v = 0x154u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe20: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe22: push 0x6d4de4 */ { u32 v = 0x6d4de4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe27: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dfe2cu); f_00630f40();
    /* 005dfe2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dfe2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe30: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe34: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfe37: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x5dfe3cu); f_005fa5b0();
    /* 005dfe3c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005dfe3f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dfe44u); f_0063aac0();
    /* 005dfe44: mov al, byte ptr [eax + 0x5a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x5au))) & 0xffu);
    /* 005dfe47: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 005dfe4a: movzx ecx, byte ptr [ebp - 0x11] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffefu));
    /* 005dfe4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfe50: je 0x5dfe6f */ if (fZ) goto L_005dfe6f;
L_005dfe52:; BB(0x005dfe52);
    /* 005dfe52: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfe57: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5dfe5cu); f_005fb350();
    /* 005dfe5c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dfe5f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfe62: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dfe64: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dfe67: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005dfe6d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dfe6fu); call_ind(t); }
L_005dfe6f:; BB(0x005dfe6f);
    /* 005dfe6f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dfe72: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5dfe77u); f_005d52e0();
    /* 005dfe77: mov al, byte ptr [eax + 0x5d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x5du))) & 0xffu);
    /* 005dfe7a: mov byte ptr [ebp - 0x12], al */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_eax);
    /* 005dfe7d: movzx ecx, byte ptr [ebp - 0x12] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffeeu));
    /* 005dfe81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfe83: jne 0x5dfea2 */ if (!fZ) goto L_005dfea2;
L_005dfe85:; BB(0x005dfe85);
    /* 005dfe85: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfe87: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfe8a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5dfe8fu); f_005fb350();
    /* 005dfe8f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dfe92: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dfe95: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dfe97: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dfe9a: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005dfea0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dfea2u); call_ind(t); }
L_005dfea2:; BB(0x005dfea2);
    /* 005dfea2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005dfea5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dfeaau); f_0063aac0();
    /* 005dfeaa: mov al, byte ptr [eax + 0x58] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x58u))) & 0xffu);
    /* 005dfead: mov byte ptr [ebp - 0x13], al */ W8((u32)(r_ebp+0xffffffedu), (u8)r_eax);
    /* 005dfeb0: movzx ecx, byte ptr [ebp - 0x13] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffedu));
    /* 005dfeb4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfeb6: je 0x5dfed5 */ if (fZ) goto L_005dfed5;
L_005dfeb8:; BB(0x005dfeb8);
    /* 005dfeb8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfeba: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfebd: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5dfec2u); f_005fb350();
    /* 005dfec2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005dfec5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dfec8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dfeca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005dfecd: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005dfed3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dfed5u); call_ind(t); }
L_005dfed5:; BB(0x005dfed5);
    /* 005dfed5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005dfed8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dfeddu); f_0063aac0();
    /* 005dfedd: mov al, byte ptr [eax + 0x25d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x25du))) & 0xffu);
    /* 005dfee3: mov byte ptr [ebp - 0x14], al */ W8((u32)(r_ebp+0xffffffecu), (u8)r_eax);
    /* 005dfee6: movzx ecx, byte ptr [ebp - 0x14] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005dfeea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfeec: je 0x5dff0b */ if (fZ) goto L_005dff0b;
L_005dfeee:; BB(0x005dfeee);
    /* 005dfeee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005dfef0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dfef3: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5dfef8u); f_005fb350();
    /* 005dfef8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005dfefb: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005dfefe: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dff00: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005dff03: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005dff09: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dff0bu); call_ind(t); }
L_005dff0b:; BB(0x005dff0b);
    /* 005dff0b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005dff12: jmp 0x5dff1d */ goto L_005dff1d;
L_005dff14:; BB(0x005dff14);
    /* 005dff14: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dff17: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dff1a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_005dff1d:; BB(0x005dff1d);
    /* 005dff1d: cmp dword ptr [ebp - 8], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dff21: jge 0x5dff65 */ if ((fS==fO)) goto L_005dff65;
L_005dff23:; BB(0x005dff23);
    /* 005dff23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dff26: mov edx, dword ptr [ecx*4 + 0x75dac0] */ r_edx = R32((u32)(r_ecx*4+0x75dac0u));
    /* 005dff2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dff2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dff31: call 0x5d54a0 */ r_esp -= 4; W32(r_esp, 0x5dff36u); f_005d54a0();
    /* 005dff36: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dff39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dff3b: je 0x5dff63 */ if (fZ) goto L_005dff63;
L_005dff3d:; BB(0x005dff3d);
    /* 005dff3d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005dff40: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dff43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dff44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dff47: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5dff4cu); f_005fb350();
    /* 005dff4c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005dff4f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005dff52: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dff54: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005dff57: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 005dff5d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dff5fu); call_ind(t); }
    /* 005dff5f: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
L_005dff63:; BB(0x005dff63);
    /* 005dff63: jmp 0x5dff14 */ goto L_005dff14;
L_005dff65:; BB(0x005dff65);
    /* 005dff65: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005dff69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dff6b: jne 0x5dff98 */ if (!fZ) goto L_005dff98;
L_005dff6d:; BB(0x005dff6d);
    /* 005dff6d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005dff6f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dff72: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5dff77u); f_005fb300();
    /* 005dff77: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005dff7a: push 0x6d4dc8 */ { u32 v = 0x6d4dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dff7f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dff84u); f_00630f40();
    /* 005dff84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dff87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dff88: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dff8b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dff8d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005dff90: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005dff96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dff98u); call_ind(t); }
L_005dff98:; BB(0x005dff98);
    /* 005dff98: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005dff9b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5dffa0u); f_0063aac0();
    /* 005dffa0: mov cl, byte ptr [eax + 0x5c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x5cu))) & 0xffu);
    /* 005dffa3: mov byte ptr [ebp - 0x15], cl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_ecx);
    /* 005dffa6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dffa8: movsx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffebu));
    /* 005dffac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dffad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dffaf: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dffb2: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5dffb7u); f_005fb860();
    /* 005dffb7: mov ecx, eax */ r_ecx = r_eax;
    /* 005dffb9: call 0x605110 */ r_esp -= 4; W32(r_esp, 0x5dffbeu); f_00605110();
    /* 005dffbe: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 005dffc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dffc7: je 0x5dffe6 */ if (fZ) goto L_005dffe6;
L_005dffc9:; BB(0x005dffc9);
    /* 005dffc9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005dffcb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dffce: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5dffd3u); f_005fb350();
    /* 005dffd3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005dffd6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005dffd9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dffdb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005dffde: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005dffe4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dffe6u); call_ind(t); }
L_005dffe6:; BB(0x005dffe6);
    /* 005dffe6: mov esp, ebp */ r_esp = r_ebp;
    /* 005dffe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dffe9: ret 0xc */ FN_RET(0x005df830); r_esp += 16; return;
}

void f_005dfff0(void) /* CasinoShell::vfunc241 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dfff0);
    /* 005dfff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dfff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dfff3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dfff6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005dfff9: cmp dword ptr [ebp + 0xc], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dfffd: jne 0x5e00ff */ if (!fZ) goto L_005e00ff;
L_005e0003:; BB(0x005e0003);
    /* 005e0003: push 0x6d4e20 */ { u32 v = 0x6d4e20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0008: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e000du); f_00630f40();
    /* 005e000d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0011: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0013: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0016: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e001bu); f_005fb300();
    /* 005e001b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e001d: call 0x602b70 */ r_esp -= 4; W32(r_esp, 0x5e0022u); f_00602b70();
    /* 005e0022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0023: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5e0028u); f_00686ec0();
    /* 005e0028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e002b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e002d: jne 0x5e0098 */ if (!fZ) goto L_005e0098;
L_005e002f:; BB(0x005e002f);
    /* 005e002f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0036: jmp 0x5e0041 */ goto L_005e0041;
L_005e0038:; BB(0x005e0038);
    /* 005e0038: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e003b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e003e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e0041:; BB(0x005e0041);
    /* 005e0041: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0045: jge 0x5e006b */ if ((fS==fO)) goto L_005e006b;
L_005e0047:; BB(0x005e0047);
    /* 005e0047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e004a: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e004d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e004e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0051: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e0056u); f_005fb350();
    /* 005e0056: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e0059: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e005c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e005e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e0061: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 005e0067: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e0069u); call_ind(t); }
    /* 005e0069: jmp 0x5e0038 */ goto L_005e0038;
L_005e006b:; BB(0x005e006b);
    /* 005e006b: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005e006d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0070: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e0075u); f_005fb300();
    /* 005e0075: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e0078: push 0x6d4dc8 */ { u32 v = 0x6d4dc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e007d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e0082u); f_00630f40();
    /* 005e0082: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e0085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0086: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e0089: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e008b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e008e: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005e0094: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0096u); call_ind(t); }
    /* 005e0096: jmp 0x5e00ff */ goto L_005e00ff;
L_005e0098:; BB(0x005e0098);
    /* 005e0098: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e009f: jmp 0x5e00aa */ goto L_005e00aa;
L_005e00a1:; BB(0x005e00a1);
    /* 005e00a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e00a4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e00a7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e00aa:; BB(0x005e00aa);
    /* 005e00aa: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e00ae: jge 0x5e00d4 */ if ((fS==fO)) goto L_005e00d4;
L_005e00b0:; BB(0x005e00b0);
    /* 005e00b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e00b3: add edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e00b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e00b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e00ba: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e00bfu); f_005fb350();
    /* 005e00bf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e00c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e00c7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e00ca: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 005e00d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e00d2u); call_ind(t); }
    /* 005e00d2: jmp 0x5e00a1 */ goto L_005e00a1;
L_005e00d4:; BB(0x005e00d4);
    /* 005e00d4: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005e00d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e00d9: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e00deu); f_005fb300();
    /* 005e00de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e00e1: push 0x6d4e20 */ { u32 v = 0x6d4e20u; r_esp -= 4; W32(r_esp, v); }
    /* 005e00e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5e00ebu); f_00630f40();
    /* 005e00eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e00ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e00ef: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e00f2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e00f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e00f7: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005e00fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e00ffu); call_ind(t); }
L_005e00ff:; BB(0x005e00ff);
    /* 005e00ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0101: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0102: ret 8 */ FN_RET(0x005dfff0); r_esp += 12; return;
}

void f_005e0110(void) /* CasinoShell::vfunc242 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0110);
    /* 005e0110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0111: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0113: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0116: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e0119: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005e011c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e011f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0121: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0124: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e0129u); f_005fb350();
    /* 005e0129: mov ecx, eax */ r_ecx = r_eax;
    /* 005e012b: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e0130u); f_00600230();
    /* 005e0130: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 005e0133: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e0136: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e013bu); f_0063aac0();
    /* 005e013b: mov cl, byte ptr [ebp - 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 005e013e: mov byte ptr [eax + 0x5a], cl */ W8((u32)(r_eax+0x5au), (u8)r_ecx);
    /* 005e0141: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0143: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0146: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e014bu); f_005fb350();
    /* 005e014b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e014d: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e0152u); f_00600230();
    /* 005e0152: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005e0155: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e0157: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005e015a: mov byte ptr [ebp - 0xa], al */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_eax);
    /* 005e015d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0160: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e0165u); f_005d52e0();
    /* 005e0165: mov cl, byte ptr [ebp - 0xa] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 005e0168: mov byte ptr [eax + 0x5d], cl */ W8((u32)(r_eax+0x5du), (u8)r_ecx);
    /* 005e016b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e016d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0170: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5e0175u); f_005fb860();
    /* 005e0175: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0177: call 0x6051d0 */ r_esp -= 4; W32(r_esp, 0x5e017cu); f_006051d0();
    /* 005e017c: mov byte ptr [ebp - 0xb], al */ W8((u32)(r_ebp+0xfffffff5u), (u8)r_eax);
    /* 005e017f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e0182: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e0187u); f_0063aac0();
    /* 005e0187: mov dl, byte ptr [ebp - 0xb] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff5u))) & 0xffu);
    /* 005e018a: mov byte ptr [eax + 0x5c], dl */ W8((u32)(r_eax+0x5cu), (u8)r_edx);
    /* 005e018d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e018f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0192: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e0197u); f_005fb350();
    /* 005e0197: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0199: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e019eu); f_00600230();
    /* 005e019e: mov byte ptr [ebp - 0xc], al */ W8((u32)(r_ebp+0xfffffff4u), (u8)r_eax);
    /* 005e01a1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e01a4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e01a9u); f_0063aac0();
    /* 005e01a9: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 005e01ac: mov byte ptr [eax + 0x58], cl */ W8((u32)(r_eax+0x58u), (u8)r_ecx);
    /* 005e01af: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e01b1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e01b4: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e01b9u); f_005fb350();
    /* 005e01b9: mov ecx, eax */ r_ecx = r_eax;
    /* 005e01bb: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e01c0u); f_00600230();
    /* 005e01c0: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 005e01c3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e01c6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e01cbu); f_0063aac0();
    /* 005e01cb: mov dl, byte ptr [ebp - 0xd] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 005e01ce: mov byte ptr [eax + 0x25d], dl */ W8((u32)(r_eax+0x25du), (u8)r_edx);
    /* 005e01d4: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005e01d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e01db: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005e01e1: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005e01e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e01e9u); call_ind(t); }
    /* 005e01e9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e01ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e01ee: jne 0x5e0207 */ if (!fZ) goto L_005e0207;
L_005e01f0:; BB(0x005e01f0);
    /* 005e01f0: push 0x7db */ { u32 v = 0x7dbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e01f5: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e01fa: push 0x6d4fc4 */ { u32 v = 0x6d4fc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e01ff: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e0204u); f_005e9f20();
    /* 005e0204: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e0207:; BB(0x005e0207);
    /* 005e0207: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0209: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e020c: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e0211u); f_005fb350();
    /* 005e0211: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0213: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e0218u); f_00600230();
    /* 005e0218: mov byte ptr [ebp - 0xe], al */ W8((u32)(r_ebp+0xfffffff2u), (u8)r_eax);
    /* 005e021b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e021e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5e0223u); f_0063aac0();
    /* 005e0223: mov cl, byte ptr [ebp - 0xe] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff2u))) & 0xffu);
    /* 005e0226: mov byte ptr [eax + 0x378], cl */ W8((u32)(r_eax+0x378u), (u8)r_ecx);
    /* 005e022c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0233: jmp 0x5e023e */ goto L_005e023e;
L_005e0235:; BB(0x005e0235);
    /* 005e0235: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0238: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e023b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e023e:; BB(0x005e023e);
    /* 005e023e: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0242: jge 0x5e0270 */ if ((fS==fO)) goto L_005e0270;
L_005e0244:; BB(0x005e0244);
    /* 005e0244: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0247: mov ecx, dword ptr [eax*4 + 0x75dac0] */ r_ecx = R32((u32)(r_eax*4+0x75dac0u));
    /* 005e024e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e024f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0252: add edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0255: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0256: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0259: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e025eu); f_005fb350();
    /* 005e025e: mov ecx, eax */ r_ecx = r_eax;
    /* 005e0260: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x5e0265u); f_00600230();
    /* 005e0265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e0266: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e0269: call 0x5d5500 */ r_esp -= 4; W32(r_esp, 0x5e026eu); f_005d5500();
    /* 005e026e: jmp 0x5e0235 */ goto L_005e0235;
L_005e0270:; BB(0x005e0270);
    /* 005e0270: mov esp, ebp */ r_esp = r_ebp;
    /* 005e0272: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e0273: ret 0xc */ FN_RET(0x005e0110); r_esp += 16; return;
}

void f_005e0280(void) /* CasinoShell::vfunc240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e0280);
    /* 005e0280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e0281: mov ebp, esp */ r_ebp = r_esp;
    /* 005e0283: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e0286: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e0289: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e0290: jmp 0x5e029b */ goto L_005e029b;
L_005e0292:; BB(0x005e0292);
    /* 005e0292: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0295: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e0298: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e029b:; BB(0x005e029b);
    /* 005e029b: cmp dword ptr [ebp - 4], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e029f: jge 0x5e02bf */ if ((fS==fO)) goto L_005e02bf;
L_005e02a1:; BB(0x005e02a1);
    /* 005e02a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e02a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e02a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e02a8: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e02adu); f_005fb550();
    /* 005e02ad: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e02b0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e02b3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e02b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e02b8: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005e02bb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e02bdu); call_ind(t); }
    /* 005e02bd: jmp 0x5e0292 */ goto L_005e0292;
L_005e02bf:; BB(0x005e02bf);
    /* 005e02bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e02c6: jmp 0x5e02d1 */ goto L_005e02d1;
L_005e02c8:; BB(0x005e02c8);
    /* 005e02c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e02cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e02ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e02d1:; BB(0x005e02d1);
    /* 005e02d1: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e02d5: jge 0x5e02f5 */ if ((fS==fO)) goto L_005e02f5;
L_005e02d7:; BB(0x005e02d7);
    /* 005e02d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e02da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e02db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e02de: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e02e3u); f_005fb2b0();
    /* 005e02e3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005e02e6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e02e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e02eb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e02ee: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 005e02f1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5e02f3u); call_ind(t); }
    /* 005e02f3: jmp 0x5e02c8 */ goto L_005e02c8;
L_005e02f5:; BB(0x005e02f5);
    /* 005e02f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e02f7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e02fa: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5e02ffu); f_005fb860();
    /* 005e02ff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e0302: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e0305: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0307: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e030a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005e030d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e030fu); call_ind(t); }
    /* 005e030f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e0316: jmp 0x5e0321 */ goto L_005e0321;
L_005e0318:; BB(0x005e0318);
    /* 005e0318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e031b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e031e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e0321:; BB(0x005e0321);
    /* 005e0321: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e0325: jge 0x5e0348 */ if ((fS==fO)) goto L_005e0348;
L_005e0327:; BB(0x005e0327);
    /* 005e0327: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e032a: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e032d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e032e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0331: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e0336u); f_005fb350();
    /* 005e0336: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e0339: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e033c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e033e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e0341: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005e0344: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0346u); call_ind(t); }
    /* 005e0346: jmp 0x5e0318 */ goto L_005e0318;
L_005e0348:; BB(0x005e0348);
    /* 005e0348: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005e034a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e034d: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e0352u); f_005fb300();
    /* 005e0352: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e0355: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e0358: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e035a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e035d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005e0360: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0362u); call_ind(t); }
    /* 005e0362: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e0365: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e0368: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e036c: ja 0x5e059d */ if ((!fC&&!fZ)) goto L_005e059d;
L_005e0372:; BB(0x005e0372);
    /* 005e0372: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e0375: jmp dword ptr [edx*4 + 0x5e05a4] */ { u32 t = R32((u32)(r_edx*4+0x5e05a4u)); switch (t) { case 0x5e037cu: goto L_005e037c; case 0x5e041fu: goto L_005e041f; case 0x5e04a8u: goto L_005e04a8; case 0x5e054du: goto L_005e054d; default: UNSUP(0x005e0375, "jump table entry is not a known target"); } }
L_005e037c:; BB(0x005e037c);
    /* 005e037c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e037e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0381: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e0386u); f_005fb2b0();
    /* 005e0386: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e0389: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e038c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e038e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e0391: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e0394: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0396u); call_ind(t); }
    /* 005e0396: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0398: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e039b: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e03a0u); f_005fb350();
    /* 005e03a0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005e03a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e03a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e03a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e03ab: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e03ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e03b0u); call_ind(t); }
    /* 005e03b0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e03b2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e03b5: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e03bau); f_005fb350();
    /* 005e03ba: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e03bd: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e03c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e03c2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e03c5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e03c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e03cau); call_ind(t); }
    /* 005e03ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e03cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e03cf: call 0x5fb860 */ r_esp -= 4; W32(r_esp, 0x5e03d4u); f_005fb860();
    /* 005e03d4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e03d7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e03da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e03dc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005e03df: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e03e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e03e4u); call_ind(t); }
    /* 005e03e4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e03eb: jmp 0x5e03f6 */ goto L_005e03f6;
L_005e03ed:; BB(0x005e03ed);
    /* 005e03ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e03f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e03f3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e03f6:; BB(0x005e03f6);
    /* 005e03f6: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e03fa: jge 0x5e041a */ if ((fS==fO)) goto L_005e041a;
L_005e03fc:; BB(0x005e03fc);
    /* 005e03fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e03ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0400: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0403: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e0408u); f_005fb550();
    /* 005e0408: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005e040b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005e040e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0410: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005e0413: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e0416: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0418u); call_ind(t); }
    /* 005e0418: jmp 0x5e03ed */ goto L_005e03ed;
L_005e041a:; BB(0x005e041a);
    /* 005e041a: jmp 0x5e059d */ goto L_005e059d;
L_005e041f:; BB(0x005e041f);
    /* 005e041f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0421: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0424: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e0429u); f_005fb2b0();
    /* 005e0429: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005e042c: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e042f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0431: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005e0434: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e0437: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0439u); call_ind(t); }
    /* 005e0439: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 005e0440: jmp 0x5e044b */ goto L_005e044b;
L_005e0442:; BB(0x005e0442);
    /* 005e0442: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0445: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0448: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e044b:; BB(0x005e044b);
    /* 005e044b: cmp dword ptr [ebp - 4], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e044f: jge 0x5e046f */ if ((fS==fO)) goto L_005e046f;
L_005e0451:; BB(0x005e0451);
    /* 005e0451: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0454: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0455: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0458: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e045du); f_005fb550();
    /* 005e045d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e0460: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e0463: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0465: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005e0468: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e046b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e046du); call_ind(t); }
    /* 005e046d: jmp 0x5e0442 */ goto L_005e0442;
L_005e046f:; BB(0x005e046f);
    /* 005e046f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0471: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0474: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e0479u); f_005fb350();
    /* 005e0479: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005e047c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e047f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0481: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005e0484: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e0487: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0489u); call_ind(t); }
    /* 005e0489: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e048b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e048e: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e0493u); f_005fb350();
    /* 005e0493: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e0496: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e0499: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e049b: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005e049e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e04a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e04a3u); call_ind(t); }
    /* 005e04a3: jmp 0x5e059d */ goto L_005e059d;
L_005e04a8:; BB(0x005e04a8);
    /* 005e04a8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e04aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e04ad: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e04b2u); f_005fb2b0();
    /* 005e04b2: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005e04b5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e04b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e04ba: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005e04bd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e04c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e04c2u); call_ind(t); }
    /* 005e04c2: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 005e04c9: jmp 0x5e04d4 */ goto L_005e04d4;
L_005e04cb:; BB(0x005e04cb);
    /* 005e04cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e04ce: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e04d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e04d4:; BB(0x005e04d4);
    /* 005e04d4: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e04d8: jge 0x5e04f8 */ if ((fS==fO)) goto L_005e04f8;
L_005e04da:; BB(0x005e04da);
    /* 005e04da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e04dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e04de: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e04e1: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e04e6u); f_005fb550();
    /* 005e04e6: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005e04e9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e04ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e04ee: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005e04f1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e04f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e04f6u); call_ind(t); }
    /* 005e04f6: jmp 0x5e04cb */ goto L_005e04cb;
L_005e04f8:; BB(0x005e04f8);
    /* 005e04f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e04ff: jmp 0x5e050a */ goto L_005e050a;
L_005e0501:; BB(0x005e0501);
    /* 005e0501: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0504: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0507: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e050a:; BB(0x005e050a);
    /* 005e050a: cmp dword ptr [ebp - 4], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e050e: jge 0x5e0531 */ if ((fS==fO)) goto L_005e0531;
L_005e0510:; BB(0x005e0510);
    /* 005e0510: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0513: add edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e0516: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0517: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e051a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x5e051fu); f_005fb350();
    /* 005e051f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005e0522: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005e0525: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0527: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005e052a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e052d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e052fu); call_ind(t); }
    /* 005e052f: jmp 0x5e0501 */ goto L_005e0501;
L_005e0531:; BB(0x005e0531);
    /* 005e0531: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0533: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0536: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x5e053bu); f_005fb300();
    /* 005e053b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005e053e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0541: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e0543: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005e0546: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e0549: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e054bu); call_ind(t); }
    /* 005e054b: jmp 0x5e059d */ goto L_005e059d;
L_005e054d:; BB(0x005e054d);
    /* 005e054d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e054f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0552: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5e0557u); f_005fb2b0();
    /* 005e0557: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005e055a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005e055d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e055f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005e0562: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e0565: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e0567u); call_ind(t); }
    /* 005e0567: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 005e056e: jmp 0x5e0579 */ goto L_005e0579;
L_005e0570:; BB(0x005e0570);
    /* 005e0570: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0573: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e0576: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005e0579:; BB(0x005e0579);
    /* 005e0579: cmp dword ptr [ebp - 4], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e057d: jge 0x5e059d */ if ((fS==fO)) goto L_005e059d;
L_005e057f:; BB(0x005e057f);
    /* 005e057f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e0582: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e0583: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e0586: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x5e058bu); f_005fb550();
    /* 005e058b: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005e058e: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e0591: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e0593: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005e0596: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005e0599: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e059bu); call_ind(t); }
    /* 005e059b: jmp 0x5e0570 */ goto L_005e0570;
L_005e059d:; BB(0x005e059d);
    /* 005e059d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e059f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e05a0: ret 0xc */ FN_RET(0x005e0280); r_esp += 16; return;
}

void f_005e05c0(void) /* casinoshell::func_005e05c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e05c0);
    /* 005e05c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e05c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e05c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e05c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e05c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e05cc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e05cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05d2: sub ecx, 0x30ef7c */ {  u32 a = r_ecx; u32 b = 0x30ef7cu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e05d8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005e05db: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e05df: ja 0x5e063c */ if ((!fC&&!fZ)) goto L_005e063c;
L_005e05e1:; BB(0x005e05e1);
    /* 005e05e1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e05e4: jmp dword ptr [edx*4 + 0x5e0660] */ { u32 t = R32((u32)(r_edx*4+0x5e0660u)); switch (t) { case 0x5e05ebu: goto L_005e05eb; case 0x5e05efu: goto L_005e05ef; case 0x5e05f6u: goto L_005e05f6; case 0x5e05fdu: goto L_005e05fd; case 0x5e0604u: goto L_005e0604; case 0x5e060bu: goto L_005e060b; case 0x5e0612u: goto L_005e0612; case 0x5e0619u: goto L_005e0619; case 0x5e0620u: goto L_005e0620; case 0x5e0627u: goto L_005e0627; case 0x5e062eu: goto L_005e062e; case 0x5e0635u: goto L_005e0635; default: UNSUP(0x005e05e4, "jump table entry is not a known target"); } }
L_005e05eb:; BB(0x005e05eb);
    /* 005e05eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e05ed: jmp 0x5e0659 */ goto L_005e0659;
L_005e05ef:; BB(0x005e05ef);
    /* 005e05ef: mov eax, 1 */ r_eax = 0x1u;
    /* 005e05f4: jmp 0x5e0659 */ goto L_005e0659;
L_005e05f6:; BB(0x005e05f6);
    /* 005e05f6: mov eax, 2 */ r_eax = 0x2u;
    /* 005e05fb: jmp 0x5e0659 */ goto L_005e0659;
L_005e05fd:; BB(0x005e05fd);
    /* 005e05fd: mov eax, 3 */ r_eax = 0x3u;
    /* 005e0602: jmp 0x5e0659 */ goto L_005e0659;
L_005e0604:; BB(0x005e0604);
    /* 005e0604: mov eax, 4 */ r_eax = 0x4u;
    /* 005e0609: jmp 0x5e0659 */ goto L_005e0659;
L_005e060b:; BB(0x005e060b);
    /* 005e060b: mov eax, 5 */ r_eax = 0x5u;
    /* 005e0610: jmp 0x5e0659 */ goto L_005e0659;
L_005e0612:; BB(0x005e0612);
    /* 005e0612: mov eax, 6 */ r_eax = 0x6u;
    /* 005e0617: jmp 0x5e0659 */ goto L_005e0659;
L_005e0619:; BB(0x005e0619);
    /* 005e0619: mov eax, 7 */ r_eax = 0x7u;
    /* 005e061e: jmp 0x5e0659 */ goto L_005e0659;
L_005e0620:; BB(0x005e0620);
    /* 005e0620: mov eax, 8 */ r_eax = 0x8u;
    /* 005e0625: jmp 0x5e0659 */ goto L_005e0659;
L_005e0627:; BB(0x005e0627);
    /* 005e0627: mov eax, 9 */ r_eax = 0x9u;
    /* 005e062c: jmp 0x5e0659 */ goto L_005e0659;
L_005e062e:; BB(0x005e062e);
    /* 005e062e: mov eax, 0xa */ r_eax = 0xau;
    /* 005e0633: jmp 0x5e0659 */ goto L_005e0659;
L_005e0635:; BB(0x005e0635);
    /* 005e0635: mov eax, 0xb */ r_eax = 0xbu;
    /* 005e063a: jmp 0x5e0659 */ goto L_005e0659;
L_005e063c:; BB(0x005e063c);
    /* 005e063c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e063e: jne 0x5e0657 */ if (!fZ) goto L_005e0657;
L_005e0640:; BB(0x005e0640);
    /* 005e0640: push 0x828 */ { u32 v = 0x828u; r_esp -= 4; W32(r_esp, v); }
    /* 005e0645: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e064a: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 005e064f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e0654u); f_005e9f20();
    /* 005e0654: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e0657:; BB(0x005e0657);
    /* 005e0657: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e0659:; BB(0x005e0659);
    /* 005e0659: mov esp, ebp */ r_esp = r_ebp;
    /* 005e065b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e065c: ret 4 */ FN_RET(0x005e05c0); r_esp += 8; return;
}

void f_005e1240(void) /* casinoshell::func_005e1240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e1240);
    /* 005e1240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1241: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1243: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1246: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1247: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005e124a: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e1251: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e1254: call 0x5e10d0 */ r_esp -= 4; W32(r_esp, 0x5e1259u); f_005e10d0();
    /* 005e1259: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005e125c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1263: jmp 0x5e126e */ goto L_005e126e;
L_005e1265:; BB(0x005e1265);
    /* 005e1265: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1268: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e126b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e126e:; BB(0x005e126e);
    /* 005e126e: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1272: jge 0x5e1404 */ if ((fS==fO)) goto L_005e1404;
L_005e1278:; BB(0x005e1278);
    /* 005e1278: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e127b: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e127e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e1281: cmp dword ptr [edx + ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1286: je 0x5e13fd */ if (fZ) goto L_005e13fd;
L_005e128c:; BB(0x005e128c);
    /* 005e128c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e128f: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1292: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e1295: movsx edx, byte ptr [ecx + eax + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x4u));
    /* 005e129a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e129c: jne 0x5e13fb */ if (!fZ) goto L_005e13fb;
L_005e12a2:; BB(0x005e12a2);
    /* 005e12a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e12a5: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e12a8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e12ab: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e12ae: cmp edx, dword ptr [ecx + eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e12b2: jl 0x5e12d8 */ if ((fS!=fO)) goto L_005e12d8;
L_005e12b4:; BB(0x005e12b4);
    /* 005e12b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e12b7: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e12ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e12bd: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e12c0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e12c3: movsx ecx, byte ptr [edx + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x2u));
    /* 005e12c8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e12cb: mov eax, dword ptr [edx + eax + 0x1c] */ r_eax = R32((u32)(r_edx+r_eax+0x1cu));
    /* 005e12cf: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 005e12d3: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e12d6: jle 0x5e1324 */ if ((fZ||fS!=fO)) goto L_005e1324;
L_005e12d8:; BB(0x005e12d8);
    /* 005e12d8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e12db: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e12e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e12e4: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e12e7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005e12ea: cmp edx, dword ptr [ecx + eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e12ee: jl 0x5e13fb */ if ((fS!=fO)) goto L_005e13fb;
L_005e12f4:; BB(0x005e12f4);
    /* 005e12f4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e12f7: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e12fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1300: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1303: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1306: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1309: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005e130c: movsx ecx, byte ptr [esi + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+r_ecx+0x2u));
    /* 005e1311: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005e1314: mov eax, dword ptr [esi + eax + 0x1c] */ r_eax = R32((u32)(r_esi+r_eax+0x1cu));
    /* 005e1318: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 005e131c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e131e: jg 0x5e13fb */ if ((!fZ&&fS==fO)) goto L_005e13fb;
L_005e1324:; BB(0x005e1324);
    /* 005e1324: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1327: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e132a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e132d: movsx ecx, byte ptr [eax + edx + 4] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x4u));
    /* 005e1332: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1334: je 0x5e134d */ if (fZ) goto L_005e134d;
L_005e1336:; BB(0x005e1336);
    /* 005e1336: push 0x94c */ { u32 v = 0x94cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e133b: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1340: push 0x6d5060 */ { u32 v = 0x6d5060u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1345: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e134au); f_005e9f20();
    /* 005e134a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e134d:; BB(0x005e134d);
    /* 005e134d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1350: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1353: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1357: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e135a: call 0x5e2860 */ r_esp -= 4; W32(r_esp, 0x5e135fu); f_005e2860();
    /* 005e135f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e1362: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1365: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1368: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e136b: mov eax, dword ptr [edx + ecx + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx+0x20u));
    /* 005e136f: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e1372: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1375: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1378: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e137b: mov dword ptr [edx + ecx + 0x20], eax */ W32((u32)(r_edx+r_ecx+0x20u), r_eax);
    /* 005e137f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1382: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e1385: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e1388: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e138b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e138e: movsx ecx, byte ptr [edx + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x2u));
    /* 005e1393: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e1396: mov eax, dword ptr [edx + eax + 0x1c] */ r_eax = R32((u32)(r_edx+r_eax+0x1cu));
    /* 005e139a: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 005e139e: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e13a1: je 0x5e13cf */ if (fZ) goto L_005e13cf;
L_005e13a3:; BB(0x005e13a3);
    /* 005e13a3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e13a6: add edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e13ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13af: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e13b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13b5: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e13b8: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005e13bb: movsx ecx, byte ptr [esi + ecx + 2] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_esi+r_ecx+0x2u));
    /* 005e13c0: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005e13c3: mov eax, dword ptr [esi + eax + 0x1c] */ r_eax = R32((u32)(r_esi+r_eax+0x1cu));
    /* 005e13c7: lea ecx, [eax + ecx - 1] */ r_ecx = (u32)(r_eax+r_ecx+0xffffffffu);
    /* 005e13cb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e13cd: jne 0x5e13dd */ if (!fZ) goto L_005e13dd;
L_005e13cf:; BB(0x005e13cf);
    /* 005e13cf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13d2: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e13d5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e13d8: mov byte ptr [eax + edx + 4], 1 */ W8((u32)(r_eax+r_edx+0x4u), 0x1u);
L_005e13dd:; BB(0x005e13dd);
    /* 005e13dd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e13e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e13e1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e13e5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e13e8: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e13eb: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e13ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e13ef: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005e13f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e13f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005e13f6: call 0x5e2c40 */ r_esp -= 4; W32(r_esp, 0x5e13fbu); f_005e2c40();
L_005e13fb:; BB(0x005e13fb);
    /* 005e13fb: jmp 0x5e13ff */ goto L_005e13ff;
L_005e13fd:; BB(0x005e13fd);
    /* 005e13fd: jmp 0x5e1404 */ goto L_005e1404;
L_005e13ff:; BB(0x005e13ff);
    /* 005e13ff: jmp 0x5e1265 */ goto L_005e1265;
L_005e1404:; BB(0x005e1404);
    /* 005e1404: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1405: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1407: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1408: ret 8 */ FN_RET(0x005e1240); r_esp += 12; return;
}

void f_005e2b90(void) /* casinoshell::func_005e2b90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2b90);
    /* 005e2b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b91: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2b93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2b96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b98: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e2b9b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2b9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2ba2: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5e2ba7u); f_006369b0();
    /* 005e2ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2ba8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e2badu); f_005dcb00();
    /* 005e2bad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2bb0: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2bb2: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e2bb7u); f_005d52e0();
    /* 005e2bb7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e2bba: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2bbe: jne 0x5e2bd7 */ if (!fZ) goto L_005e2bd7;
L_005e2bc0:; BB(0x005e2bc0);
    /* 005e2bc0: push 0xa41 */ { u32 v = 0xa41u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bc5: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bca: push 0x6d507c */ { u32 v = 0x6d507cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2bcf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e2bd4u); f_005e9f20();
    /* 005e2bd4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e2bd7:; BB(0x005e2bd7);
    /* 005e2bd7: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2bdb: jne 0x5e2c16 */ if (!fZ) goto L_005e2c16;
L_005e2bdd:; BB(0x005e2bdd);
    /* 005e2bdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2be4: jmp 0x5e2bef */ goto L_005e2bef;
L_005e2be6:; BB(0x005e2be6);
    /* 005e2be6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2be9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e2bec: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005e2bef:; BB(0x005e2bef);
    /* 005e2bef: cmp dword ptr [ebp - 4], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2bf3: jge 0x5e2c14 */ if ((fS==fO)) goto L_005e2c14;
L_005e2bf5:; BB(0x005e2bf5);
    /* 005e2bf5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2bf8: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2bfb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2bfe: lea esi, [ecx + eax + 0x60] */ r_esi = (u32)(r_ecx+r_eax+0x60u);
    /* 005e2c02: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2c05: imul edi, edi, 0x24 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x24u; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2c08: add edi, dword ptr [ebp + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e2c0b: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005e2c10: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005e2c12: jmp 0x5e2be6 */ goto L_005e2be6;
L_005e2c14:; BB(0x005e2c14);
    /* 005e2c14: jmp 0x5e2c2d */ goto L_005e2c2d;
L_005e2c16:; BB(0x005e2c16);
    /* 005e2c16: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005e2c19: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2c1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2c1f: lea esi, [eax + edx + 0x60] */ r_esi = (u32)(r_eax+r_edx+0x60u);
    /* 005e2c23: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005e2c28: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 005e2c2b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
L_005e2c2d:; BB(0x005e2c2d);
    /* 005e2c2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e2c2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2c2f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2c31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2c32: ret 0xc */ FN_RET(0x005e2b90); r_esp += 16; return;
}

void f_005e2e40(void) /* casinoshell::func_005e2e40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e2e40);
    /* 005e2e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e41: mov ebp, esp */ r_ebp = r_esp;
    /* 005e2e43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e2e46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e48: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e2e4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e2e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e4f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2e52: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5e2e57u); f_006369b0();
    /* 005e2e57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e58: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e2e5du); f_005dcb00();
    /* 005e2e5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2e60: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2e62: call 0x5d52e0 */ r_esp -= 4; W32(r_esp, 0x5e2e67u); f_005d52e0();
    /* 005e2e67: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005e2e6a: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e2e6e: jne 0x5e2e87 */ if (!fZ) goto L_005e2e87;
L_005e2e70:; BB(0x005e2e70);
    /* 005e2e70: push 0xa6c */ { u32 v = 0xa6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e75: push 0x6d4b54 */ { u32 v = 0x6d4b54u; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e7a: push 0x6d507c */ { u32 v = 0x6d507cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e2e7f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5e2e84u); f_005e9f20();
    /* 005e2e84: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e2e87:; BB(0x005e2e87);
    /* 005e2e87: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e2e8a: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005e2e8d: jmp 0x5e2e98 */ goto L_005e2e98;
L_005e2e8f:; BB(0x005e2e8f);
    /* 005e2e8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2e92: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2e95: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e2e98:; BB(0x005e2e98);
    /* 005e2e98: cmp dword ptr [ebp - 4], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2e9c: jge 0x5e2ec4 */ if ((fS==fO)) goto L_005e2ec4;
L_005e2e9e:; BB(0x005e2e9e);
    /* 005e2e9e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2ea1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2ea4: imul ecx, ecx, 0x24 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x24u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2ea7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2eaa: lea esi, [edx + ecx + 0x60] */ r_esi = (u32)(r_edx+r_ecx+0x60u);
    /* 005e2eae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2eb1: imul eax, eax, 0x24 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x24u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005e2eb4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2eb7: lea edi, [ecx + eax + 0x60] */ r_edi = (u32)(r_ecx+r_eax+0x60u);
    /* 005e2ebb: mov ecx, 9 */ r_ecx = 0x9u;
    /* 005e2ec0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 005e2ec2: jmp 0x5e2e8f */ goto L_005e2e8f;
L_005e2ec4:; BB(0x005e2ec4);
    /* 005e2ec4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2ec7: mov byte ptr [edx + 0xe4c], 0xff */ W8((u32)(r_edx+0xe4cu), 0xffu);
    /* 005e2ece: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2ed1: mov byte ptr [eax + 0xe4d], 1 */ W8((u32)(r_eax+0xe4du), 0x1u);
    /* 005e2ed8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2edb: mov byte ptr [ecx + 0xe4e], 1 */ W8((u32)(r_ecx+0xe4eu), 0x1u);
    /* 005e2ee2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2ee5: mov byte ptr [edx + 0xe4f], 0 */ W8((u32)(r_edx+0xe4fu), 0x0u);
    /* 005e2eec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2eef: mov byte ptr [eax + 0xe50], 0 */ W8((u32)(r_eax+0xe50u), 0x0u);
    /* 005e2ef6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2ef9: mov dword ptr [ecx + 0xe68], 0 */ W32((u32)(r_ecx+0xe68u), 0x0u);
    /* 005e2f03: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2f06: mov dword ptr [edx + 0xe6c], 0xfffffc18 */ W32((u32)(r_edx+0xe6cu), 0xfffffc18u);
    /* 005e2f10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e2f17: jmp 0x5e2f22 */ goto L_005e2f22;
L_005e2f19:; BB(0x005e2f19);
    /* 005e2f19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e2f1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e2f1f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005e2f22:; BB(0x005e2f22);
    /* 005e2f22: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e2f26: jge 0x5e2f37 */ if ((fS==fO)) goto L_005e2f37;
L_005e2f28:; BB(0x005e2f28);
    /* 005e2f28: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e2f2b: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e2f2e: mov byte ptr [ecx + 0xe51], 0 */ W8((u32)(r_ecx+0xe51u), 0x0u);
    /* 005e2f35: jmp 0x5e2f19 */ goto L_005e2f19;
L_005e2f37:; BB(0x005e2f37);
    /* 005e2f37: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005e2f3a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e2f3b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e2f3e: call 0x6369b0 */ r_esp -= 4; W32(r_esp, 0x5e2f43u); f_006369b0();
    /* 005e2f43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2f44: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5e2f49u); f_005dcb00();
    /* 005e2f49: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e2f4c: mov ecx, eax */ r_ecx = r_eax;
    /* 005e2f4e: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x5e2f53u); f_0063b0a0();
    /* 005e2f53: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e2f54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e2f55: mov esp, ebp */ r_esp = r_ebp;
    /* 005e2f57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e2f58: ret 8 */ FN_RET(0x005e2e40); r_esp += 12; return;
}

void f_005e4160(void) /* CasinoShell::vfunc58 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4160);
    /* 005e4160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4161: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e416a: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5e416fu); f_005f3bf0();
    /* 005e416f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e4170: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4173: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e4175: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4178: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005e417e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e4180u); call_ind(t); }
    /* 005e4180: mov esp, ebp */ r_esp = r_ebp;
    /* 005e4182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e4183: ret  */ FN_RET(0x005e4160); r_esp += 4; return;
}

void f_005e41f0(void) /* CasinoShell::vfunc134 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e41f0);
    /* 005e41f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e41f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e41f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e41f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e41f7: mov eax, 0x6d4b24 */ r_eax = 0x6d4b24u;
    /* 005e41fc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e41fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e41ff: ret  */ FN_RET(0x005e41f0); r_esp += 4; return;
}

void f_005e4200(void) /* CasinoShell::vfunc140 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4200);
    /* 005e4200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4201: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4203: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4204: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4207: mov eax, 0x30d4e8 */ r_eax = 0x30d4e8u;
    /* 005e420c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e420e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e420f: ret  */ FN_RET(0x005e4200); r_esp += 4; return;
}

void f_005e4240(void) /* CasinoShell::vfunc168 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4240);
    /* 005e4240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4241: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4247: mov eax, 0x12c */ r_eax = 0x12cu;
    /* 005e424c: mov esp, ebp */ r_esp = r_ebp;
    /* 005e424e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e424f: ret  */ FN_RET(0x005e4240); r_esp += 4; return;
}

void f_005e4250(void) /* CasinoShell::vfunc163 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4250);
    /* 005e4250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4251: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4253: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e4256: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005e4259: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005e4260: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e4267: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e426a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005e426d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e426f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4272: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005e4275: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e4278: mov esp, ebp */ r_esp = r_ebp;
    /* 005e427a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e427b: ret 4 */ FN_RET(0x005e4250); r_esp += 8; return;
}

void f_005e4280(void) /* CasinoShell::vfunc186 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e4280);
    /* 005e4280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e4281: mov ebp, esp */ r_ebp = r_esp;
    /* 005e4283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e4284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e4287: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e428a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e428b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e428e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e4290: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005e4293: mov eax, dword ptr [edx + 0x2e4] */ r_eax = R32((u32)(r_edx+0x2e4u));
    /* 005e4299: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e429bu); call_ind(t); }
    /* 005e429b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e429e: mov esp, ebp */ r_esp = r_ebp;
    /* 005e42a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e42a1: ret 4 */ FN_RET(0x005e4280); r_esp += 8; return;
}

void f_005e42b0(void) /* CasinoShell::vfunc193 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e42b0);
    /* 005e42b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e42b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e42b7: mov eax, 0x30d4f9 */ r_eax = 0x30d4f9u;
    /* 005e42bc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e42be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e42bf: ret  */ FN_RET(0x005e42b0); r_esp += 4; return;
}

void f_005e42c0(void) /* CasinoShell::vfunc198 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e42c0);
    /* 005e42c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e42c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e42c7: mov eax, 0x13c */ r_eax = 0x13cu;
    /* 005e42cc: mov esp, ebp */ r_esp = r_ebp;
    /* 005e42ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e42cf: ret  */ FN_RET(0x005e42c0); r_esp += 4; return;
}

void f_005e42d0(void) /* CasinoShell::vfunc200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e42d0);
    /* 005e42d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e42d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e42d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e42da: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e42dd: mov esp, ebp */ r_esp = r_ebp;
    /* 005e42df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e42e0: ret 0xc */ FN_RET(0x005e42d0); r_esp += 16; return;
}

void f_005f3950(void) /* CasinoShell::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f3950);
    /* 005f3950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f3951: mov ebp, esp */ r_ebp = r_esp;
    /* 005f3953: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f3956: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f3959: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f395c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f395d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f3960: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f3962: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f3965: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f3968: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f396au); call_ind(t); }
    /* 005f396a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005f396d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f3970: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f3971: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x5f3976u); f_00686ecc();
    /* 005f3976: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f3979: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005f397c: jbe 0x5f3995 */ if ((fC||fZ)) goto L_005f3995;
L_005f397e:; BB(0x005f397e);
    /* 005f397e: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 005f3983: push 0x6d681c */ { u32 v = 0x6d681cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f3988: push 0x6d67f0 */ { u32 v = 0x6d67f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f398d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5f3992u); f_005e9f20();
    /* 005f3992: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f3995:; BB(0x005f3995);
    /* 005f3995: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005f3998: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f399b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f399c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f399f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f39a0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f39a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f39a4: call dword ptr [0x6b22c0] */ { u32 t = R32((u32)(0x6b22c0u)); r_esp -= 4; W32(r_esp, 0x5f39aau); call_ind(t); }
    /* 005f39aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f39ad: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f39b0: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f39b3: mov byte ptr [eax - 1], 0 */ W8((u32)(r_eax+0xffffffffu), 0x0u);
    /* 005f39b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f39ba: mov esp, ebp */ r_esp = r_ebp;
    /* 005f39bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f39bd: ret 0xc */ FN_RET(0x005f3950); r_esp += 16; return;
}

void f_005f4000(void) /* CasinoShell::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4000);
    /* 005f4000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4001: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4003: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4006: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005f4009: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f4010: jmp 0x5f401b */ goto L_005f401b;
L_005f4012:; BB(0x005f4012);
    /* 005f4012: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4015: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f4018: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f401b:; BB(0x005f401b);
    /* 005f401b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f401e: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4021: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f4026u); f_0060c9a0();
    /* 005f4026: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4029: jge 0x5f405d */ if ((fS==fO)) goto L_005f405d;
L_005f402b:; BB(0x005f402b);
    /* 005f402b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f402e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f402f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4032: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4035: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f403au); f_0060ca40();
    /* 005f403a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005f403d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f4040: mov eax, dword ptr [edx + 0x170] */ r_eax = R32((u32)(r_edx+0x170u));
    /* 005f4046: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4049: jne 0x5f405b */ if (!fZ) goto L_005f405b;
L_005f404b:; BB(0x005f404b);
    /* 005f404b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f404e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005f4051: mov dword ptr [ecx + 0x170], edx */ W32((u32)(r_ecx+0x170u), r_edx);
    /* 005f4057: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005f4059: jmp 0x5f405f */ goto L_005f405f;
L_005f405b:; BB(0x005f405b);
    /* 005f405b: jmp 0x5f4012 */ goto L_005f4012;
L_005f405d:; BB(0x005f405d);
    /* 005f405d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005f405f:; BB(0x005f405f);
    /* 005f405f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4061: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4062: ret 8 */ FN_RET(0x005f4000); r_esp += 12; return;
}

void f_005f4420(void) /* CasinoShell::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f4420);
    /* 005f4420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4421: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4423: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4424: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f4427: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005f442a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f442b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f442c: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 005f442f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f4432: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4433: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 005f4436: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005f4439: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 005f443c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f443d: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005f4440: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4441: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 005f4444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4445: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005f4448: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4449: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f444c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f444d: push 0x2033504d */ { u32 v = 0x2033504du; r_esp -= 4; W32(r_esp, v); }
    /* 005f4452: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f4455: call 0x5f4210 */ r_esp -= 4; W32(r_esp, 0x5f445au); f_005f4210();
    /* 005f445a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f445c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f445d: ret 0x20 */ FN_RET(0x005f4420); r_esp += 36; return;
}

void f_00631a70(void) /* CasinoShell::vfunc38 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631a70);
    /* 00631a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00631a73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631a74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00631a77: mov al, byte ptr [0x795fa0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x795fa0u))) & 0xffu);
    /* 00631a7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00631a7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631a7f: ret  */ FN_RET(0x00631a70); r_esp += 4; return;
}

void f_00631a80(void) /* CasinoShell::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631a80);
    /* 00631a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00631a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00631a87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631a8a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00631a8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631a8f: mov eax, dword ptr [edx + 0x110] */ r_eax = R32((u32)(r_edx+0x110u));
    /* 00631a95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631a97u); call_ind(t); }
    /* 00631a97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631a98: push 0x795530 */ { u32 v = 0x795530u; r_esp -= 4; W32(r_esp, v); }
    /* 00631a9d: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631aa2u); f_00686d8e();
    /* 00631aa2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631aa5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631aa8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631aaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631aad: mov eax, dword ptr [edx + 0x114] */ r_eax = R32((u32)(r_edx+0x114u));
    /* 00631ab3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631ab5u); call_ind(t); }
    /* 00631ab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631ab6: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 00631abb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631ac0u); f_00686d8e();
    /* 00631ac0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631ac3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631ac6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631ac8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631acb: mov eax, dword ptr [edx + 0x118] */ r_eax = R32((u32)(r_edx+0x118u));
    /* 00631ad1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631ad3u); call_ind(t); }
    /* 00631ad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631ad4: push 0x795738 */ { u32 v = 0x795738u; r_esp -= 4; W32(r_esp, v); }
    /* 00631ad9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631adeu); f_00686d8e();
    /* 00631ade: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631ae1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631ae4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631ae6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631ae9: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 00631aef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631af1u); call_ind(t); }
    /* 00631af1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631af2: push 0x79583c */ { u32 v = 0x79583cu; r_esp -= 4; W32(r_esp, v); }
    /* 00631af7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631afcu); f_00686d8e();
    /* 00631afc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631aff: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631b05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631b07: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631b0d: mov eax, dword ptr [edx + 0x12c] */ r_eax = R32((u32)(r_edx+0x12cu));
    /* 00631b13: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631b15u); call_ind(t); }
    /* 00631b15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631b16: push 0x795940 */ { u32 v = 0x795940u; r_esp -= 4; W32(r_esp, v); }
    /* 00631b1b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631b20u); f_00686d8e();
    /* 00631b20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631b28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b2b: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 00631b31: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631b33u); call_ind(t); }
    /* 00631b33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631b34: push 0x795a44 */ { u32 v = 0x795a44u; r_esp -= 4; W32(r_esp, v); }
    /* 00631b39: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631b3eu); f_00686d8e();
    /* 00631b3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b41: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b44: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631b46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b49: mov eax, dword ptr [edx + 0x140] */ r_eax = R32((u32)(r_edx+0x140u));
    /* 00631b4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631b51u); call_ind(t); }
    /* 00631b51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631b52: push 0x795b48 */ { u32 v = 0x795b48u; r_esp -= 4; W32(r_esp, v); }
    /* 00631b57: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631b5cu); f_00686d8e();
    /* 00631b5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b62: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631b64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b67: mov eax, dword ptr [edx + 0x134] */ r_eax = R32((u32)(r_edx+0x134u));
    /* 00631b6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631b6fu); call_ind(t); }
    /* 00631b6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631b70: push 0x795d50 */ { u32 v = 0x795d50u; r_esp -= 4; W32(r_esp, v); }
    /* 00631b75: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631b7au); f_00686d8e();
    /* 00631b7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b80: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631b82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b85: mov eax, dword ptr [edx + 0x138] */ r_eax = R32((u32)(r_edx+0x138u));
    /* 00631b8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631b8du); call_ind(t); }
    /* 00631b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631b8e: push 0x795e54 */ { u32 v = 0x795e54u; r_esp -= 4; W32(r_esp, v); }
    /* 00631b93: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631b98u); f_00686d8e();
    /* 00631b98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631b9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631b9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631ba0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631ba3: mov eax, dword ptr [edx + 0x13c] */ r_eax = R32((u32)(r_edx+0x13cu));
    /* 00631ba9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631babu); call_ind(t); }
    /* 00631bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631bac: push 0x795c4c */ { u32 v = 0x795c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00631bb1: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631bb6u); f_00686d8e();
    /* 00631bb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631bb9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631bbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631bc1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00631bc7: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 00631bcd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631bcfu); call_ind(t); }
    /* 00631bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631bd0: push 0x795f6d */ { u32 v = 0x795f6du; r_esp -= 4; W32(r_esp, v); }
    /* 00631bd5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631bdau); f_00686d8e();
    /* 00631bda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631bdd: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00631be2: push 0x795f6d */ { u32 v = 0x795f6du; r_esp -= 4; W32(r_esp, v); }
    /* 00631be7: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x631becu); f_00686ec6();
    /* 00631bec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631bef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631bf2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631bf4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631bf7: mov eax, dword ptr [edx + 0x140] */ r_eax = R32((u32)(r_edx+0x140u));
    /* 00631bfd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631bffu); call_ind(t); }
    /* 00631bff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631c00: push 0x795b48 */ { u32 v = 0x795b48u; r_esp -= 4; W32(r_esp, v); }
    /* 00631c05: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631c0au); f_00686d8e();
    /* 00631c0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631c0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631c10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00631c12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631c15: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 00631c1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x631c1du); call_ind(t); }
    /* 00631c1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631c1e: push 0x795f58 */ { u32 v = 0x795f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00631c23: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x631c28u); f_00686d8e();
    /* 00631c28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00631c2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00631c2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631c2e: ret  */ FN_RET(0x00631a80); r_esp += 4; return;
}

void f_00631f40(void) /* CasinoShell::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00631f40);
    /* 00631f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00631f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00631f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00631f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00631f47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631f4a: cmp dword ptr [eax + 0x18], 0x16 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f4e: jne 0x631f83 */ if (!fZ) goto L_00631f83;
L_00631f50:; BB(0x00631f50);
    /* 00631f50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00631f53: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00631f56: and edx, 0x42 */ {  u32 a = r_edx; u32 b = 0x42u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00631f59: je 0x631f83 */ if (fZ) goto L_00631f83;
L_00631f5b:; BB(0x00631f5b);
    /* 00631f5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631f5e: movsx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+0x14u));
    /* 00631f62: cmp ecx, 0x77 */ {  u32 a = r_ecx; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00631f65: jne 0x631f83 */ if (!fZ) goto L_00631f83;
L_00631f67:; BB(0x00631f67);
    /* 00631f67: movzx edx, byte ptr [0x795fbf] */ r_edx = (u32)R8((u32)(0x795fbfu));
    /* 00631f6e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 00631f70: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00631f72: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00631f75: mov byte ptr [0x795fbf], dl */ W8((u32)(0x795fbfu), (u8)r_edx);
    /* 00631f7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631f7e: call 0x6397a0 */ r_esp -= 4; W32(r_esp, 0x631f83u); f_006397a0();
L_00631f83:; BB(0x00631f83);
    /* 00631f83: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00631f86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00631f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00631f8a: call 0x5f37f0 */ r_esp -= 4; W32(r_esp, 0x631f8fu); f_005f37f0();
    /* 00631f8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00631f91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00631f92: ret 4 */ FN_RET(0x00631f40); r_esp += 8; return;
}

void f_00632170(void) /* CasinoShell::vfunc42 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632170);
    /* 00632170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632171: mov ebp, esp */ r_ebp = r_esp;
    /* 00632173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632177: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063217a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063217b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00632181: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00632184: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00632189: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0063218c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0063218e: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00632191: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632193u); call_ind(t); }
    /* 00632193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632194: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632197: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632199: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063219c: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 006321a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6321a4u); call_ind(t); }
    /* 006321a4: mov esp, ebp */ r_esp = r_ebp;
    /* 006321a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006321a7: ret 4 */ FN_RET(0x00632170); r_esp += 8; return;
}

void f_006321b0(void) /* CasinoShell::vfunc43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006321b0);
    /* 006321b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006321b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006321b3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006321b6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006321b9: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 006321bd: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321c1: je 0x6321e2 */ if (fZ) goto L_006321e2;
L_006321c3:; BB(0x006321c3);
    /* 006321c3: push 0x6da3dc */ { u32 v = 0x6da3dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006321c8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006321cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006321cc: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x6321d1u); f_00686ec0();
    /* 006321d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006321d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321d6: jne 0x6321e2 */ if (!fZ) goto L_006321e2;
L_006321d8:; BB(0x006321d8);
    /* 006321d8: mov eax, 0x6b27f8 */ r_eax = 0x6b27f8u;
    /* 006321dd: jmp 0x632524 */ goto L_00632524;
L_006321e2:; BB(0x006321e2);
    /* 006321e2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321e6: je 0x632221 */ if (fZ) goto L_00632221;
L_006321e8:; BB(0x006321e8);
    /* 006321e8: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 006321ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006321ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006321ee: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x6321f4u); call_ind(t); }
    /* 006321f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006321f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321f9: jne 0x632229 */ if (!fZ) goto L_00632229;
L_006321fb:; BB(0x006321fb);
    /* 006321fb: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 006321fd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00632200: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00632201: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x632207u); call_ind(t); }
    /* 00632207: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063220a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063220c: jne 0x632229 */ if (!fZ) goto L_00632229;
L_0063220e:; BB(0x0063220e);
    /* 0063220e: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00632210: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00632213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632214: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x63221au); call_ind(t); }
    /* 0063221a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063221d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063221f: jne 0x632229 */ if (!fZ) goto L_00632229;
L_00632221:; BB(0x00632221);
    /* 00632221: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00632224: jmp 0x632524 */ goto L_00632524;
L_00632229:; BB(0x00632229);
    /* 00632229: mov ecx, dword ptr [0x1630688] */ r_ecx = R32((u32)(0x1630688u));
    /* 0063222f: mov dword ptr [0x1630688], ecx */ W32((u32)(0x1630688u), r_ecx);
    /* 00632235: mov edx, dword ptr [0x1630688] */ r_edx = R32((u32)(0x1630688u));
    /* 0063223b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063223e: mov dword ptr [0x1630688], edx */ W32((u32)(0x1630688u), r_edx);
    /* 00632244: mov eax, dword ptr [0x1630688] */ r_eax = R32((u32)(0x1630688u));
    /* 00632249: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0063224a: mov ecx, 3 */ r_ecx = 0x3u;
    /* 0063224f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0063224f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0063224f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00632251: mov dword ptr [0x1630688], edx */ W32((u32)(0x1630688u), r_edx);
    /* 00632257: mov edx, dword ptr [0x1630688] */ r_edx = R32((u32)(0x1630688u));
    /* 0063225d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00632260: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00632263: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00632266: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632269: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0063226c: add ecx, 0x162ee88 */ {  u32 a = r_ecx; u32 b = 0x162ee88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00632272: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00632275:; BB(0x00632275);
    /* 00632275: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632278: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0063227b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063227d: je 0x6324fc */ if (fZ) goto L_006324fc;
L_00632283:; BB(0x00632283);
    /* 00632283: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632286: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00632289: add ecx, 0x162ee88 */ {  u32 a = r_ecx; u32 b = 0x162ee88u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063228f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632292: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00632294: cmp edx, 0x7ff */ {  u32 a = r_edx; u32 b = 0x7ffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063229a: jge 0x6324fc */ if ((fS==fO)) goto L_006324fc;
L_006322a0:; BB(0x006322a0);
    /* 006322a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006322a3: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 006322a6: cmp ecx, 0x25 */ {  u32 a = r_ecx; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006322a9: jne 0x632489 */ if (!fZ) goto L_00632489;
L_006322af:; BB(0x006322af);
    /* 006322af: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006322b2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006322b5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 006322b8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006322bb: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 006322be: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006322c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006322c4: sub edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006322c7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006322ca: cmp dword ptr [ebp - 0x18], 0x24 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006322ce: ja 0x63243c */ if ((!fC&&!fZ)) goto L_0063243c;
L_006322d4:; BB(0x006322d4);
    /* 006322d4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006322d7: movzx ecx, byte ptr [eax + 0x632548] */ r_ecx = (u32)R8((u32)(r_eax+0x632548u));
    /* 006322de: jmp dword ptr [ecx*4 + 0x63252c] */ { u32 t = R32((u32)(r_ecx*4+0x63252cu)); switch (t) { case 0x6323e0u: goto L_006323e0; case 0x6322e5u: goto L_006322e5; case 0x6323f7u: goto L_006323f7; case 0x6323c6u: goto L_006323c6; case 0x63240eu: goto L_0063240e; case 0x632425u: goto L_00632425; case 0x63243cu: goto L_0063243c; default: UNSUP(0x006322de, "jump table entry is not a known target"); } }
L_006322e5:; BB(0x006322e5);
    /* 006322e5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006322eb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006322ed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006322f3: mov edx, dword ptr [eax + 0xfc] */ r_edx = R32((u32)(r_eax+0xfcu));
    /* 006322f9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6322fbu); call_ind(t); }
    /* 006322fb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006322fe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00632301: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632303: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00632306: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00632309: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63230bu); call_ind(t); }
    /* 0063230b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063230d: je 0x63233c */ if (fZ) goto L_0063233c;
L_0063230f:; BB(0x0063230f);
    /* 0063230f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00632315: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632317: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063231d: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 00632323: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632325u); call_ind(t); }
    /* 00632325: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00632328: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063232b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063232d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632330: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00632333: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632335u); call_ind(t); }
    /* 00632335: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00632338: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063233a: jne 0x63238a */ if (!fZ) goto L_0063238a;
L_0063233c:; BB(0x0063233c);
    /* 0063233c: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00632342: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632344: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0063234a: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 00632350: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632352u); call_ind(t); }
    /* 00632352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632354: je 0x632388 */ if (fZ) goto L_00632388;
L_00632356:; BB(0x00632356);
    /* 00632356: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0063235b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063235d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00632363: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00632369: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63236bu); call_ind(t); }
    /* 0063236b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0063236e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00632371: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632373: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00632376: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00632379: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63237bu); call_ind(t); }
    /* 0063237b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063237c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063237f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632380: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x632385u); f_00686d8e();
    /* 00632385: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632388:; BB(0x00632388);
    /* 00632388: jmp 0x6323bd */ goto L_006323bd;
L_0063238a:; BB(0x0063238a);
    /* 0063238a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00632390: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632392: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00632398: mov edx, dword ptr [eax + 0xfc] */ r_edx = R32((u32)(r_eax+0xfcu));
    /* 0063239e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6323a0u); call_ind(t); }
    /* 006323a0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006323a3: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006323a6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006323a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006323ab: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 006323ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6323b0u); call_ind(t); }
    /* 006323b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006323b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006323b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006323b5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6323bau); f_00686d8e();
    /* 006323ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006323bd:; BB(0x006323bd);
    /* 006323bd: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 006323c1: jmp 0x632464 */ goto L_00632464;
L_006323c6:; BB(0x006323c6);
    /* 006323c6: push 0x795530 */ { u32 v = 0x795530u; r_esp -= 4; W32(r_esp, v); }
    /* 006323cb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006323ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006323cf: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6323d4u); f_00686d8e();
    /* 006323d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006323d7: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 006323db: jmp 0x632464 */ goto L_00632464;
L_006323e0:; BB(0x006323e0);
    /* 006323e0: push 0x795634 */ { u32 v = 0x795634u; r_esp -= 4; W32(r_esp, v); }
    /* 006323e5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006323e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006323e9: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6323eeu); f_00686d8e();
    /* 006323ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006323f1: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 006323f5: jmp 0x632464 */ goto L_00632464;
L_006323f7:; BB(0x006323f7);
    /* 006323f7: push 0x6da3d8 */ { u32 v = 0x6da3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 006323fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006323ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632400: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x632405u); f_00686d8e();
    /* 00632405: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632408: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0063240c: jmp 0x632464 */ goto L_00632464;
L_0063240e:; BB(0x0063240e);
    /* 0063240e: push 0x6da3d4 */ { u32 v = 0x6da3d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00632413: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632416: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00632417: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x63241cu); f_00686d8e();
    /* 0063241c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063241f: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 00632423: jmp 0x632464 */ goto L_00632464;
L_00632425:; BB(0x00632425);
    /* 00632425: push 0x6da3d0 */ { u32 v = 0x6da3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063242a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063242d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063242e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x632433u); f_00686d8e();
    /* 00632433: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632436: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 0063243a: jmp 0x632464 */ goto L_00632464;
L_0063243c:; BB(0x0063243c);
    /* 0063243c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063243f: mov byte ptr [ecx], 0x25 */ W8((u32)(r_ecx), 0x25u);
    /* 00632442: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632445: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00632448: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0063244b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063244e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632451: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00632453: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00632455: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632458: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063245b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0063245e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632461: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
L_00632464:; BB(0x00632464);
    /* 00632464: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632467: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0063246a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063246c: je 0x632479 */ if (fZ) goto L_00632479;
L_0063246e:; BB(0x0063246e);
    /* 0063246e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632471: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00632474: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00632477: jmp 0x632464 */ goto L_00632464;
L_00632479:; BB(0x00632479);
    /* 00632479: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063247c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063247f: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00632482: jmp 0x632275 */ goto L_00632275;
L_00632489:; BB(0x00632489);
    /* 00632489: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063248c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0063248f: cmp ecx, 0x5e */ {  u32 a = r_ecx; u32 b = 0x5eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632492: jne 0x6324b2 */ if (!fZ) goto L_006324b2;
L_00632494:; BB(0x00632494);
    /* 00632494: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632497: mov byte ptr [edx], 0x20 */ W8((u32)(r_edx), 0x20u);
    /* 0063249a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063249d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006324a0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006324a3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006324a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006324a9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006324ac: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 006324b0: jmp 0x6324f7 */ goto L_006324f7;
L_006324b2:; BB(0x006324b2);
    /* 006324b2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006324b5: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 006324b8: cmp eax, 0x7c */ {  u32 a = r_eax; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324bb: jne 0x6324db */ if (!fZ) goto L_006324db;
L_006324bd:; BB(0x006324bd);
    /* 006324bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006324c0: mov byte ptr [ecx], 0xa */ W8((u32)(r_ecx), 0xau);
    /* 006324c3: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006324c6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006324c9: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006324cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006324cf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006324d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006324d5: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 006324d9: jmp 0x6324f7 */ goto L_006324f7;
L_006324db:; BB(0x006324db);
    /* 006324db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006324de: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006324e1: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 006324e3: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 006324e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006324e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006324eb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006324ee: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006324f1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006324f4: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_006324f7:; BB(0x006324f7);
    /* 006324f7: jmp 0x632275 */ goto L_00632275;
L_006324fc:; BB(0x006324fc);
    /* 006324fc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006324ff: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00632502: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00632506: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632508: je 0x63251b */ if (fZ) goto L_0063251b;
L_0063250a:; BB(0x0063250a);
    /* 0063250a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063250d: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00632510: add edx, 0x162ee88 */ {  u32 a = r_edx; u32 b = 0x162ee88u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00632516: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00632519: jmp 0x632521 */ goto L_00632521;
L_0063251b:; BB(0x0063251b);
    /* 0063251b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063251e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00632521:; BB(0x00632521);
    /* 00632521: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_00632524:; BB(0x00632524);
    /* 00632524: mov esp, ebp */ r_esp = r_ebp;
    /* 00632526: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632527: ret 4 */ FN_RET(0x006321b0); r_esp += 8; return;
}

void f_00632570(void) /* CasinoShell::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632570);
    /* 00632570: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632571: mov ebp, esp */ r_ebp = r_esp;
    /* 00632573: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632576: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632579: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063257c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063257f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632582: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00632585: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00632588: cmp dword ptr [ebp - 8], 0x1f */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063258c: ja 0x632617 */ if ((!fC&&!fZ)) goto L_00632617;
L_00632592:; BB(0x00632592);
    /* 00632592: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632595: movzx eax, byte ptr [edx + 0x63263c] */ r_eax = (u32)R8((u32)(r_edx+0x63263cu));
    /* 0063259c: jmp dword ptr [eax*4 + 0x632624] */ { u32 t = R32((u32)(r_eax*4+0x632624u)); switch (t) { case 0x6325a3u: goto L_006325a3; case 0x6325d5u: goto L_006325d5; case 0x6325e6u: goto L_006325e6; case 0x6325f7u: goto L_006325f7; case 0x632608u: goto L_00632608; case 0x632617u: goto L_00632617; default: UNSUP(0x0063259c, "jump table entry is not a known target"); } }
L_006325a3:; BB(0x006325a3);
    /* 006325a3: cmp dword ptr [0x795f90], 3 */ {  u32 a = R32((u32)(0x795f90u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006325aa: jne 0x6325be */ if (!fZ) goto L_006325be;
L_006325ac:; BB(0x006325ac);
    /* 006325ac: push 0x6da43c */ { u32 v = 0x6da43cu; r_esp -= 4; W32(r_esp, v); }
    /* 006325b1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6325b6u); f_00630f40();
    /* 006325b6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006325b9: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006325bc: jmp 0x6325ce */ goto L_006325ce;
L_006325be:; BB(0x006325be);
    /* 006325be: push 0x6da428 */ { u32 v = 0x6da428u; r_esp -= 4; W32(r_esp, v); }
    /* 006325c3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6325c8u); f_00630f40();
    /* 006325c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006325cb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_006325ce:; BB(0x006325ce);
    /* 006325ce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006325d1: jmp 0x63261c */ goto L_0063261c;
L_006325d5:; BB(0x006325d5);
    /* 006325d5: push 0x6da414 */ { u32 v = 0x6da414u; r_esp -= 4; W32(r_esp, v); }
    /* 006325da: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6325dfu); f_00630f40();
    /* 006325df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006325e2: jmp 0x63261c */ goto L_0063261c;
L_006325e6:; BB(0x006325e6);
    /* 006325e6: push 0x6da404 */ { u32 v = 0x6da404u; r_esp -= 4; W32(r_esp, v); }
    /* 006325eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6325f0u); f_00630f40();
    /* 006325f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006325f3: jmp 0x63261c */ goto L_0063261c;
L_006325f7:; BB(0x006325f7);
    /* 006325f7: push 0x6da3f4 */ { u32 v = 0x6da3f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006325fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x632601u); f_00630f40();
    /* 00632601: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632604: jmp 0x63261c */ goto L_0063261c;
L_00632608:; BB(0x00632608);
    /* 00632608: push 0x6da3e0 */ { u32 v = 0x6da3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063260d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x632612u); f_00630f40();
    /* 00632612: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632615: jmp 0x63261c */ goto L_0063261c;
L_00632617:; BB(0x00632617);
    /* 00632617: mov eax, 0x6b27f8 */ r_eax = 0x6b27f8u;
L_0063261c:; BB(0x0063261c);
    /* 0063261c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063261e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063261f: ret 4 */ FN_RET(0x00632570); r_esp += 8; return;
}

void f_006326e0(void) /* CasinoShell::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006326e0);
    /* 006326e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006326e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006326e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006326e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006326e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006326ec: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6326f1u); f_005f3bf0();
    /* 006326f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006326f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006326f5: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x6326fau); f_006352f0();
    /* 006326fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006326fc: je 0x632739 */ if (fZ) goto L_00632739;
L_006326fe:; BB(0x006326fe);
    /* 006326fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632701: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632703: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632706: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 0063270c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63270eu); call_ind(t); }
    /* 0063270e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632710: je 0x632739 */ if (fZ) goto L_00632739;
L_00632712:; BB(0x00632712);
    /* 00632712: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632715: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632717: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063271a: mov eax, dword ptr [edx + 0xe8] */ r_eax = R32((u32)(r_edx+0xe8u));
    /* 00632720: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632722u); call_ind(t); }
    /* 00632722: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00632725: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00632728: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632729: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063272c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063272e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632731: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00632737: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632739u); call_ind(t); }
L_00632739:; BB(0x00632739);
    /* 00632739: mov esp, ebp */ r_esp = r_ebp;
    /* 0063273b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063273c: ret 4 */ FN_RET(0x006326e0); r_esp += 8; return;
}

void f_00632740(void) /* CasinoShell::vfunc235 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632740);
    /* 00632740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632741: mov ebp, esp */ r_ebp = r_esp;
    /* 00632743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632747: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063274b: jl 0x632756 */ if ((fS!=fO)) goto L_00632756;
L_0063274d:; BB(0x0063274d);
    /* 0063274d: cmp dword ptr [ebp + 8], 0x1870c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1870cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632754: jle 0x63275b */ if ((fZ||fS!=fO)) goto L_0063275b;
L_00632756:; BB(0x00632756);
    /* 00632756: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00632759: jmp 0x632765 */ goto L_00632765;
L_0063275b:; BB(0x0063275b);
    /* 0063275b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063275e: mov eax, dword ptr [eax*4 + 0x76fda0] */ r_eax = R32((u32)(r_eax*4+0x76fda0u));
L_00632765:; BB(0x00632765);
    /* 00632765: mov esp, ebp */ r_esp = r_ebp;
    /* 00632767: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632768: ret 4 */ FN_RET(0x00632740); r_esp += 8; return;
}

void f_00632770(void) /* CasinoShell::vfunc236 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632770);
    /* 00632770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632771: mov ebp, esp */ r_ebp = r_esp;
    /* 00632773: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632776: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00632779: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632780: jmp 0x63278b */ goto L_0063278b;
L_00632782:; BB(0x00632782);
    /* 00632782: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632785: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632788: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063278b:; BB(0x0063278b);
    /* 0063278b: cmp dword ptr [ebp - 4], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063278f: jge 0x6327a7 */ if ((fS==fO)) goto L_006327a7;
L_00632791:; BB(0x00632791);
    /* 00632791: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632794: mov edx, dword ptr [ecx*4 + 0x76fda0] */ r_edx = R32((u32)(r_ecx*4+0x76fda0u));
    /* 0063279b: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063279e: jne 0x6327a5 */ if (!fZ) goto L_006327a5;
L_006327a0:; BB(0x006327a0);
    /* 006327a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006327a3: jmp 0x6327aa */ goto L_006327aa;
L_006327a5:; BB(0x006327a5);
    /* 006327a5: jmp 0x632782 */ goto L_00632782;
L_006327a7:; BB(0x006327a7);
    /* 006327a7: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006327aa:; BB(0x006327aa);
    /* 006327aa: mov esp, ebp */ r_esp = r_ebp;
    /* 006327ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006327ad: ret 4 */ FN_RET(0x00632770); r_esp += 8; return;
}

void f_00632aa0(void) /* CasinoShell::vfunc63 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632aa0);
    /* 00632aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00632aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632aa7: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00632aac: mov esp, ebp */ r_esp = r_ebp;
    /* 00632aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632aaf: ret  */ FN_RET(0x00632aa0); r_esp += 4; return;
}

void f_00632ab0(void) /* CasinoShell::vfunc64 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632ab0);
    /* 00632ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00632ab3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632ab6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632ab9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632abd: jl 0x632afa */ if ((fS!=fO)) goto L_00632afa;
L_00632abf:; BB(0x00632abf);
    /* 00632abf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ac2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632ac4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ac7: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00632acd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632acfu); call_ind(t); }
    /* 00632acf: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632ad2: jge 0x632afa */ if ((fS==fO)) goto L_00632afa;
L_00632ad4:; BB(0x00632ad4);
    /* 00632ad4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00632ad7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632ad8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632adb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632add: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ae0: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00632ae6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632ae8u); call_ind(t); }
    /* 00632ae8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00632aeb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632aee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632af0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632af3: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00632af6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632af8u); call_ind(t); }
    /* 00632af8: jmp 0x632b1a */ goto L_00632b1a;
L_00632afa:; BB(0x00632afa);
    /* 00632afa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00632afc: jne 0x632b15 */ if (!fZ) goto L_00632b15;
L_00632afe:; BB(0x00632afe);
    /* 00632afe: push 0x2b8 */ { u32 v = 0x2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b03: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b08: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b0d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x632b12u); f_005e9f20();
    /* 00632b12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632b15:; BB(0x00632b15);
    /* 00632b15: mov eax, 4 */ r_eax = 0x4u;
L_00632b1a:; BB(0x00632b1a);
    /* 00632b1a: mov esp, ebp */ r_esp = r_ebp;
    /* 00632b1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632b1d: ret 4 */ FN_RET(0x00632ab0); r_esp += 8; return;
}

void f_00632b20(void) /* CasinoShell::vfunc65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632b20);
    /* 00632b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00632b23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632b26: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632b29: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632b2d: jl 0x632b6a */ if ((fS!=fO)) goto L_00632b6a;
L_00632b2f:; BB(0x00632b2f);
    /* 00632b2f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632b32: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632b34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632b37: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00632b3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632b3fu); call_ind(t); }
    /* 00632b3f: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632b42: jge 0x632b6a */ if ((fS==fO)) goto L_00632b6a;
L_00632b44:; BB(0x00632b44);
    /* 00632b44: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00632b47: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632b48: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632b4b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632b4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632b50: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00632b56: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632b58u); call_ind(t); }
    /* 00632b58: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00632b5b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632b5e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632b60: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632b63: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00632b66: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632b68u); call_ind(t); }
    /* 00632b68: jmp 0x632b8a */ goto L_00632b8a;
L_00632b6a:; BB(0x00632b6a);
    /* 00632b6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00632b6c: jne 0x632b85 */ if (!fZ) goto L_00632b85;
L_00632b6e:; BB(0x00632b6e);
    /* 00632b6e: push 0x2c1 */ { u32 v = 0x2c1u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b73: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b78: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b7d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x632b82u); f_005e9f20();
    /* 00632b82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632b85:; BB(0x00632b85);
    /* 00632b85: mov eax, 4 */ r_eax = 0x4u;
L_00632b8a:; BB(0x00632b8a);
    /* 00632b8a: mov esp, ebp */ r_esp = r_ebp;
    /* 00632b8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632b8d: ret 4 */ FN_RET(0x00632b20); r_esp += 8; return;
}

void f_00632b90(void) /* CasinoShell::vfunc66 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632b90);
    /* 00632b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00632b93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632b96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632b99: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632b9d: jl 0x632bda */ if ((fS!=fO)) goto L_00632bda;
L_00632b9f:; BB(0x00632b9f);
    /* 00632b9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ba2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632ba4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ba7: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00632bad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632bafu); call_ind(t); }
    /* 00632baf: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632bb2: jge 0x632bda */ if ((fS==fO)) goto L_00632bda;
L_00632bb4:; BB(0x00632bb4);
    /* 00632bb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00632bb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632bb8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632bbb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632bbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632bc0: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00632bc6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632bc8u); call_ind(t); }
    /* 00632bc8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00632bcb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632bce: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632bd0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632bd3: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00632bd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632bd8u); call_ind(t); }
    /* 00632bd8: jmp 0x632bfa */ goto L_00632bfa;
L_00632bda:; BB(0x00632bda);
    /* 00632bda: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00632bdc: jne 0x632bf5 */ if (!fZ) goto L_00632bf5;
L_00632bde:; BB(0x00632bde);
    /* 00632bde: push 0x2ca */ { u32 v = 0x2cau; r_esp -= 4; W32(r_esp, v); }
    /* 00632be3: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00632be8: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00632bed: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x632bf2u); f_005e9f20();
    /* 00632bf2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632bf5:; BB(0x00632bf5);
    /* 00632bf5: mov eax, 1 */ r_eax = 0x1u;
L_00632bfa:; BB(0x00632bfa);
    /* 00632bfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00632bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632bfd: ret 4 */ FN_RET(0x00632b90); r_esp += 8; return;
}

void f_00632c00(void) /* CasinoShell::vfunc67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632c00);
    /* 00632c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00632c03: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632c06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00632c09: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00632c10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632c17: jmp 0x632c22 */ goto L_00632c22;
L_00632c19:; BB(0x00632c19);
    /* 00632c19: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632c1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632c1f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00632c22:; BB(0x00632c22);
    /* 00632c22: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632c25: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632c27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632c2a: mov eax, dword ptr [edx + 0xe4] */ r_eax = R32((u32)(r_edx+0xe4u));
    /* 00632c30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632c32u); call_ind(t); }
    /* 00632c32: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632c35: jge 0x632c97 */ if ((fS==fO)) goto L_00632c97;
L_00632c37:; BB(0x00632c37);
    /* 00632c37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632c3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632c3b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632c3e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632c40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632c43: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00632c49: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632c4bu); call_ind(t); }
    /* 00632c4b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00632c4e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632c51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632c53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00632c56: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00632c59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632c5bu); call_ind(t); }
    /* 00632c5b: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632c5e: jle 0x632c68 */ if ((fZ||fS!=fO)) goto L_00632c68;
L_00632c60:; BB(0x00632c60);
    /* 00632c60: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632c63: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00632c66: jmp 0x632c8f */ goto L_00632c8f;
L_00632c68:; BB(0x00632c68);
    /* 00632c68: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632c6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00632c6c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632c6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632c71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632c74: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00632c7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632c7cu); call_ind(t); }
    /* 00632c7c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00632c7f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00632c82: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632c84: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00632c87: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00632c8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632c8cu); call_ind(t); }
    /* 00632c8c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00632c8f:; BB(0x00632c8f);
    /* 00632c8f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00632c92: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00632c95: jmp 0x632c19 */ goto L_00632c19;
L_00632c97:; BB(0x00632c97);
    /* 00632c97: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632c9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00632c9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632c9d: ret  */ FN_RET(0x00632c00); r_esp += 4; return;
}

void f_00632cc0(void) /* CasinoShell::vfunc92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632cc0);
    /* 00632cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00632cc3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632cc6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00632cc9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632cd0: jmp 0x632cdb */ goto L_00632cdb;
L_00632cd2:; BB(0x00632cd2);
    /* 00632cd2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632cd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632cd8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00632cdb:; BB(0x00632cdb);
    /* 00632cdb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632cde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632ce0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632ce3: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 00632ce9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632cebu); call_ind(t); }
    /* 00632ceb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632cee: jge 0x632d10 */ if ((fS==fO)) goto L_00632d10;
L_00632cf0:; BB(0x00632cf0);
    /* 00632cf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632cf4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632cf7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632cf9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632cfc: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 00632d02: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632d04u); call_ind(t); }
    /* 00632d04: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632d07: jne 0x632d0e */ if (!fZ) goto L_00632d0e;
L_00632d09:; BB(0x00632d09);
    /* 00632d09: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632d0c: jmp 0x632d2e */ goto L_00632d2e;
L_00632d0e:; BB(0x00632d0e);
    /* 00632d0e: jmp 0x632cd2 */ goto L_00632cd2;
L_00632d10:; BB(0x00632d10);
    /* 00632d10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00632d12: jne 0x632d2b */ if (!fZ) goto L_00632d2b;
L_00632d14:; BB(0x00632d14);
    /* 00632d14: push 0x2e5 */ { u32 v = 0x2e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00632d19: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00632d1e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00632d23: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x632d28u); f_005e9f20();
    /* 00632d28: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00632d2b:; BB(0x00632d2b);
    /* 00632d2b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00632d2e:; BB(0x00632d2e);
    /* 00632d2e: mov esp, ebp */ r_esp = r_ebp;
    /* 00632d30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632d31: ret 4 */ FN_RET(0x00632cc0); r_esp += 8; return;
}

void f_00632e30(void) /* CasinoShell::vfunc124 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632e30);
    /* 00632e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00632e33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632e36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00632e39: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632e40: jmp 0x632e4b */ goto L_00632e4b;
L_00632e42:; BB(0x00632e42);
    /* 00632e42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632e45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632e48: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00632e4b:; BB(0x00632e4b);
    /* 00632e4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632e4e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632e50: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632e53: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 00632e59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632e5bu); call_ind(t); }
    /* 00632e5b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632e5e: jge 0x632e9a */ if ((fS==fO)) goto L_00632e9a;
L_00632e60:; BB(0x00632e60);
    /* 00632e60: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632e63: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632e66: mov edx, dword ptr [ecx + 0x762298] */ r_edx = R32((u32)(r_ecx+0x762298u));
    /* 00632e6c: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632e6f: jne 0x632e98 */ if (!fZ) goto L_00632e98;
L_00632e71:; BB(0x00632e71);
    /* 00632e71: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632e74: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632e77: mov ecx, dword ptr [eax + 0x76229c] */ r_ecx = R32((u32)(r_eax+0x76229cu));
    /* 00632e7d: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632e80: jne 0x632e98 */ if (!fZ) goto L_00632e98;
L_00632e82:; BB(0x00632e82);
    /* 00632e82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632e85: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632e88: mov eax, dword ptr [edx + 0x7622a0] */ r_eax = R32((u32)(r_edx+0x7622a0u));
    /* 00632e8e: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632e91: jne 0x632e98 */ if (!fZ) goto L_00632e98;
L_00632e93:; BB(0x00632e93);
    /* 00632e93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632e96: jmp 0x632f0d */ goto L_00632f0d;
L_00632e98:; BB(0x00632e98);
    /* 00632e98: jmp 0x632e42 */ goto L_00632e42;
L_00632e9a:; BB(0x00632e9a);
    /* 00632e9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632ea1: jmp 0x632eac */ goto L_00632eac;
L_00632ea3:; BB(0x00632ea3);
    /* 00632ea3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ea6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00632ea9: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00632eac:; BB(0x00632eac);
    /* 00632eac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632eaf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00632eb1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632eb4: mov edx, dword ptr [eax + 0x1f8] */ r_edx = R32((u32)(r_eax+0x1f8u));
    /* 00632eba: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x632ebcu); call_ind(t); }
    /* 00632ebc: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00632ebf: jge 0x632f0b */ if ((fS==fO)) goto L_00632f0b;
L_00632ec1:; BB(0x00632ec1);
    /* 00632ec1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ec4: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632ec7: mov ecx, dword ptr [eax + 0x762518] */ r_ecx = R32((u32)(r_eax+0x762518u));
    /* 00632ecd: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632ed0: jne 0x632f09 */ if (!fZ) goto L_00632f09;
L_00632ed2:; BB(0x00632ed2);
    /* 00632ed2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ed5: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632ed8: mov eax, dword ptr [edx + 0x76251c] */ r_eax = R32((u32)(r_edx+0x76251cu));
    /* 00632ede: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632ee1: jne 0x632f09 */ if (!fZ) goto L_00632f09;
L_00632ee3:; BB(0x00632ee3);
    /* 00632ee3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632ee6: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00632ee9: mov edx, dword ptr [ecx + 0x762520] */ r_edx = R32((u32)(r_ecx+0x762520u));
    /* 00632eef: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632ef2: jne 0x632f09 */ if (!fZ) goto L_00632f09;
L_00632ef4:; BB(0x00632ef4);
    /* 00632ef4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632ef7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632ef9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632efc: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 00632f02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632f04u); call_ind(t); }
    /* 00632f04: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632f07: jmp 0x632f0d */ goto L_00632f0d;
L_00632f09:; BB(0x00632f09);
    /* 00632f09: jmp 0x632ea3 */ goto L_00632ea3;
L_00632f0b:; BB(0x00632f0b);
    /* 00632f0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00632f0d:; BB(0x00632f0d);
    /* 00632f0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00632f0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632f10: ret 0xc */ FN_RET(0x00632e30); r_esp += 16; return;
}

void f_00632f30(void) /* CasinoShell::vfunc126 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632f30);
    /* 00632f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632f31: mov ebp, esp */ r_ebp = r_esp;
    /* 00632f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632f37: mov eax, dword ptr [0x7626d4] */ r_eax = R32((u32)(0x7626d4u));
    /* 00632f3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00632f3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632f3f: ret  */ FN_RET(0x00632f30); r_esp += 4; return;
}

void f_00632f40(void) /* CasinoShell::vfunc127 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632f40);
    /* 00632f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00632f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00632f44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632f45: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00632f48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632f4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632f4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632f50: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 00632f56: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632f58u); call_ind(t); }
    /* 00632f58: mov esi, eax */ r_esi = r_eax;
    /* 00632f5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632f5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632f5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632f62: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 00632f68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632f6au); call_ind(t); }
    /* 00632f6a: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632f6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632f6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00632f6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632f70: ret  */ FN_RET(0x00632f40); r_esp += 4; return;
}

void f_00632f80(void) /* CasinoShell::vfunc131 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00632f80);
    /* 00632f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00632f83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632f86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00632f89: push 0x6da478 */ { u32 v = 0x6da478u; r_esp -= 4; W32(r_esp, v); }
    /* 00632f8e: call 0x604910 */ r_esp -= 4; W32(r_esp, 0x632f93u); f_00604910();
    /* 00632f93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632f96: push 0x6d61ec */ { u32 v = 0x6d61ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00632f9b: call 0x604910 */ r_esp -= 4; W32(r_esp, 0x632fa0u); f_00604910();
    /* 00632fa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632fa3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632fa6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00632fa8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00632fab: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 00632fb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x632fb3u); call_ind(t); }
    /* 00632fb3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00632fb6:; BB(0x00632fb6);
    /* 00632fb6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632fba: je 0x632fe1 */ if (fZ) goto L_00632fe1;
L_00632fbc:; BB(0x00632fbc);
    /* 00632fbc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632fbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632fc1: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 00632fc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632fc6: je 0x632fe1 */ if (fZ) goto L_00632fe1;
L_00632fc8:; BB(0x00632fc8);
    /* 00632fc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632fcb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00632fcd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00632fce: call 0x604910 */ r_esp -= 4; W32(r_esp, 0x632fd3u); f_00604910();
    /* 00632fd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00632fd6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00632fd9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632fdc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00632fdf: jmp 0x632fb6 */ goto L_00632fb6;
L_00632fe1:; BB(0x00632fe1);
    /* 00632fe1: mov esp, ebp */ r_esp = r_ebp;
    /* 00632fe3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632fe4: ret  */ FN_RET(0x00632f80); r_esp += 4; return;
}

void f_00633000(void) /* CasinoShell::vfunc133 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00633000);
    /* 00633000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633001: mov ebp, esp */ r_ebp = r_esp;
    /* 00633003: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633006: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063300b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063300d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00633010: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00633013: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00633015: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00633018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633019: push 0x6da49c */ { u32 v = 0x6da49cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063301e: push 0x6da48c */ { u32 v = 0x6da48cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633023: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00633029: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0063302c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00633031: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00633034: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00633036: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00633039: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63303bu); call_ind(t); }
    /* 0063303b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633042: jmp 0x63304d */ goto L_0063304d;
L_00633044:; BB(0x00633044);
    /* 00633044: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00633047: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063304a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0063304d:; BB(0x0063304d);
    /* 0063304d: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633051: jge 0x633095 */ if ((fS==fO)) goto L_00633095;
L_00633053:; BB(0x00633053);
    /* 00633053: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00633056: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00633059: add edx, 0x7626d8 */ {  u32 a = r_edx; u32 b = 0x7626d8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063305f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633060: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00633063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633064: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00633067: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633069: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0063306c: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 00633072: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633074u); call_ind(t); }
    /* 00633074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633075: push 0x6da484 */ { u32 v = 0x6da484u; r_esp -= 4; W32(r_esp, v); }
    /* 0063307a: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 0063307d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063307e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x633084u); call_ind(t); }
    /* 00633084: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633087: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0063308a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063308b: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x633090u); f_00604a20();
    /* 00633090: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633093: jmp 0x633044 */ goto L_00633044;
L_00633095:; BB(0x00633095);
    /* 00633095: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00633098: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063309a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x63309fu); f_00686d72();
    /* 0063309f: mov esp, ebp */ r_esp = r_ebp;
    /* 006330a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006330a2: ret  */ FN_RET(0x00633000); r_esp += 4; return;
}

void f_006330b0(void) /* CasinoShell::vfunc135 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006330b0);
    /* 006330b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006330b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006330b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006330b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006330b9: push 0x6da478 */ { u32 v = 0x6da478u; r_esp -= 4; W32(r_esp, v); }
    /* 006330be: call 0x604810 */ r_esp -= 4; W32(r_esp, 0x6330c3u); f_00604810();
    /* 006330c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006330c6: push 0x6d61ec */ { u32 v = 0x6d61ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006330cb: call 0x604810 */ r_esp -= 4; W32(r_esp, 0x6330d0u); f_00604810();
    /* 006330d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006330d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006330d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006330d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006330db: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 006330e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6330e3u); call_ind(t); }
    /* 006330e3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006330e6:; BB(0x006330e6);
    /* 006330e6: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006330ea: je 0x633111 */ if (fZ) goto L_00633111;
L_006330ec:; BB(0x006330ec);
    /* 006330ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006330ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006330f1: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 006330f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006330f6: je 0x633111 */ if (fZ) goto L_00633111;
L_006330f8:; BB(0x006330f8);
    /* 006330f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006330fb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006330fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006330fe: call 0x604810 */ r_esp -= 4; W32(r_esp, 0x633103u); f_00604810();
    /* 00633103: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633106: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00633109: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063310c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063310f: jmp 0x6330e6 */ goto L_006330e6;
L_00633111:; BB(0x00633111);
    /* 00633111: mov esp, ebp */ r_esp = r_ebp;
    /* 00633113: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633114: ret  */ FN_RET(0x006330b0); r_esp += 4; return;
}

void f_00633120(void) /* CasinoShell::vfunc136 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00633120);
    /* 00633120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633121: mov ebp, esp */ r_ebp = r_esp;
    /* 00633123: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633129: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063312e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00633130: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00633133: mov dword ptr [ebp - 0x12c], ecx */ W32((u32)(r_ebp+0xfffffed4u), r_ecx);
    /* 00633139: movsx eax, byte ptr [0x795f6c] */ r_eax = (u32)(i32)(i8)R8((u32)(0x795f6cu));
    /* 00633140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633142: je 0x6331cc */ if (fZ) goto L_006331cc;
L_00633148:; BB(0x00633148);
    /* 00633148: mov cl, byte ptr [0x795f6c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0x795f6cu))) & 0xffu);
    /* 0063314e: mov byte ptr [ebp - 0x128], cl */ W8((u32)(r_ebp+0xfffffed8u), (u8)r_ecx);
    /* 00633154: mov byte ptr [ebp - 0x127], 0 */ W8((u32)(r_ebp+0xfffffed9u), 0x0u);
    /* 0063315b: push 0x6da4ac */ { u32 v = 0x6da4acu; r_esp -= 4; W32(r_esp, v); }
    /* 00633160: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 00633166: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633167: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x63316cu); f_00686ec6();
    /* 0063316c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063316f: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00633174: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0063317a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063317b: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x633180u); f_00686ec6();
    /* 00633180: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633183: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633189: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063318b: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633191: mov eax, dword ptr [edx + 0x120] */ r_eax = R32((u32)(r_edx+0x120u));
    /* 00633197: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633199u); call_ind(t); }
    /* 00633199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063319a: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 006331a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006331a1: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6331a6u); f_00686ec6();
    /* 006331a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006331a9: push 0x6d61f8 */ { u32 v = 0x6d61f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006331ae: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 006331b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006331b5: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6331bau); f_00686ec6();
    /* 006331ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006331bd: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 006331c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006331c4: call 0x604810 */ r_esp -= 4; W32(r_esp, 0x6331c9u); f_00604810();
    /* 006331c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006331cc:; BB(0x006331cc);
    /* 006331cc: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 006331d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006331d4: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 006331da: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 006331e0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6331e2u); call_ind(t); }
    /* 006331e2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006331e5:; BB(0x006331e5);
    /* 006331e5: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006331e9: je 0x633210 */ if (fZ) goto L_00633210;
L_006331eb:; BB(0x006331eb);
    /* 006331eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006331ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006331f0: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 006331f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006331f5: je 0x633210 */ if (fZ) goto L_00633210;
L_006331f7:; BB(0x006331f7);
    /* 006331f7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006331fa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006331fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006331fd: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x633202u); f_00604a20();
    /* 00633202: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633205: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00633208: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063320b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063320e: jmp 0x6331e5 */ goto L_006331e5;
L_00633210:; BB(0x00633210);
    /* 00633210: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633216: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633218: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0063321e: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 00633224: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633226u); call_ind(t); }
    /* 00633226: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633228: je 0x633249 */ if (fZ) goto L_00633249;
L_0063322a:; BB(0x0063322a);
    /* 0063322a: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633230: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633232: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633238: mov eax, dword ptr [edx + 0x124] */ r_eax = R32((u32)(r_edx+0x124u));
    /* 0063323e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633240u); call_ind(t); }
    /* 00633240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633241: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x633246u); f_00604a20();
    /* 00633246: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00633249:; BB(0x00633249);
    /* 00633249: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633250: jmp 0x63325b */ goto L_0063325b;
L_00633252:; BB(0x00633252);
    /* 00633252: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00633255: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00633258: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0063325b:; BB(0x0063325b);
    /* 0063325b: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633261: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00633263: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633269: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 0063326f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x633271u); call_ind(t); }
    /* 00633271: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633274: jge 0x6332dc */ if ((fS==fO)) goto L_006332dc;
L_00633276:; BB(0x00633276);
    /* 00633276: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00633279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063327a: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633280: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633282: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 00633288: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0063328e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633290u); call_ind(t); }
    /* 00633290: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00633296: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0063329c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063329e: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 006332a4: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006332a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6332a9u); call_ind(t); }
    /* 006332a9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006332ac:; BB(0x006332ac);
    /* 006332ac: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006332b0: je 0x6332d7 */ if (fZ) goto L_006332d7;
L_006332b2:; BB(0x006332b2);
    /* 006332b2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006332b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006332b7: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 006332ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006332bc: je 0x6332d7 */ if (fZ) goto L_006332d7;
L_006332be:; BB(0x006332be);
    /* 006332be: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006332c1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006332c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006332c4: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x6332c9u); f_00604a20();
    /* 006332c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006332cc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006332cf: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006332d2: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006332d5: jmp 0x6332ac */ goto L_006332ac;
L_006332d7:; BB(0x006332d7);
    /* 006332d7: jmp 0x633252 */ goto L_00633252;
L_006332dc:; BB(0x006332dc);
    /* 006332dc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006332e3: jmp 0x6332ee */ goto L_006332ee;
L_006332e5:; BB(0x006332e5);
    /* 006332e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006332e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006332eb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006332ee:; BB(0x006332ee);
    /* 006332ee: cmp dword ptr [ebp - 4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006332f2: jg 0x633318 */ if ((!fZ&&fS==fO)) goto L_00633318;
L_006332f4:; BB(0x006332f4);
    /* 006332f4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006332f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006332f8: push 0x6da4a0 */ { u32 v = 0x6da4a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006332fd: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00633300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633301: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x633307u); call_ind(t); }
    /* 00633307: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063330a: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0063330d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063330e: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x633313u); f_00604a20();
    /* 00633313: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633316: jmp 0x6332e5 */ goto L_006332e5;
L_00633318:; BB(0x00633318);
    /* 00633318: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063331b: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063331d: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x633322u); f_00686d72();
    /* 00633322: mov esp, ebp */ r_esp = r_ebp;
    /* 00633324: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633325: ret  */ FN_RET(0x00633120); r_esp += 4; return;
}

void f_00633330(void) /* CasinoShell::vfunc137 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00633330);
    /* 00633330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633331: mov ebp, esp */ r_ebp = r_esp;
    /* 00633333: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633339: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063333e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00633340: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00633343: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 00633349: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633350: jmp 0x63335b */ goto L_0063335b;
L_00633352:; BB(0x00633352);
    /* 00633352: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00633355: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00633358: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063335b:; BB(0x0063335b);
    /* 0063335b: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00633361: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633363: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00633369: mov eax, dword ptr [edx + 0x16c] */ r_eax = R32((u32)(r_edx+0x16cu));
    /* 0063336f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633371u); call_ind(t); }
    /* 00633371: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633374: jge 0x63347f */ if ((fS==fO)) goto L_0063347f;
L_0063337a:; BB(0x0063337a);
    /* 0063337a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063337d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063337e: mov edx, dword ptr [ebp - 0x118] */ r_edx = R32((u32)(r_ebp+0xfffffee8u));
    /* 00633384: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00633386: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 0063338c: mov edx, dword ptr [eax + 0x164] */ r_edx = R32((u32)(r_eax+0x164u));
    /* 00633392: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x633394u); call_ind(t); }
    /* 00633394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633395: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0063339b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063339d: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 006333a3: mov eax, dword ptr [edx + 0x3b8] */ r_eax = R32((u32)(r_edx+0x3b8u));
    /* 006333a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6333abu); call_ind(t); }
    /* 006333ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006333ac: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 006333b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006333b3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6333b8u); f_00686d8e();
    /* 006333b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006333bb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006333bd: lea edx, [ebp - 0x110] */ r_edx = (u32)(r_ebp+0xfffffef0u);
    /* 006333c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006333c4: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x6333cau); call_ind(t); }
    /* 006333ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006333cd: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 006333d3: cmp dword ptr [ebp - 0x114], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffeecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006333da: je 0x6333ed */ if (fZ) goto L_006333ed;
L_006333dc:; BB(0x006333dc);
    /* 006333dc: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 006333e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006333e5: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 006333eb: jmp 0x6333f9 */ goto L_006333f9;
L_006333ed:; BB(0x006333ed);
    /* 006333ed: lea ecx, [ebp - 0x110] */ r_ecx = (u32)(r_ebp+0xfffffef0u);
    /* 006333f3: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
L_006333f9:; BB(0x006333f9);
    /* 006333f9: push 0x6da4b8 */ { u32 v = 0x6da4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006333fe: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00633404: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633405: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x63340au); f_00686ec6();
    /* 0063340a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063340d: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00633413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633414: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x633419u); f_00604a20();
    /* 00633419: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063341c: push 0x6d9718 */ { u32 v = 0x6d9718u; r_esp -= 4; W32(r_esp, v); }
    /* 00633421: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00633423: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00633429: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063342a: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x633430u); call_ind(t); }
    /* 00633430: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633434: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x633439u); f_00686d8e();
    /* 00633439: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063343c: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00633442: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633443: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x633448u); f_00604a20();
    /* 00633448: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063344b: push 0x6d9710 */ { u32 v = 0x6d9710u; r_esp -= 4; W32(r_esp, v); }
    /* 00633450: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00633452: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 00633458: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633459: call dword ptr [0x6b2264] */ { u32 t = R32((u32)(0x6b2264u)); r_esp -= 4; W32(r_esp, 0x63345fu); call_ind(t); }
    /* 0063345f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633463: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x633468u); f_00686d8e();
    /* 00633468: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063346b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 00633471: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633472: call 0x604a20 */ r_esp -= 4; W32(r_esp, 0x633477u); f_00604a20();
    /* 00633477: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063347a: jmp 0x633352 */ goto L_00633352;
L_0063347f:; BB(0x0063347f);
    /* 0063347f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00633482: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00633484: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x633489u); f_00686d72();
    /* 00633489: mov esp, ebp */ r_esp = r_ebp;
    /* 0063348b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063348c: ret  */ FN_RET(0x00633330); r_esp += 4; return;
}

void f_00633490(void) /* CasinoShell::vfunc138 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00633490);
    /* 00633490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633491: mov ebp, esp */ r_ebp = r_esp;
    /* 00633493: sub esp, 0x5cc */ {  u32 a = r_esp; u32 b = 0x5ccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633499: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063349e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006334a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006334a3: mov dword ptr [ebp - 0x5bc], ecx */ W32((u32)(r_ebp+0xfffffa44u), r_ecx);
    /* 006334a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006334ac: sub eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006334af: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 006334b1: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006334b3: and eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006334b6: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006334b9: jmp 0x6334c4 */ goto L_006334c4;
L_006334bb:; BB(0x006334bb);
    /* 006334bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006334be: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006334c1: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_006334c4:; BB(0x006334c4);
    /* 006334c4: mov edx, dword ptr [ebp - 0x5bc] */ r_edx = R32((u32)(r_ebp+0xfffffa44u));
    /* 006334ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006334cc: mov ecx, dword ptr [ebp - 0x5bc] */ r_ecx = R32((u32)(r_ebp+0xfffffa44u));
    /* 006334d2: mov edx, dword ptr [eax + 0xe4] */ r_edx = R32((u32)(r_eax+0xe4u));
    /* 006334d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6334dau); call_ind(t); }
    /* 006334da: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006334dd: jge 0x63374f */ if ((fS==fO)) goto L_0063374f;
L_006334e3:; BB(0x006334e3);
    /* 006334e3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006334e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006334e7: mov ecx, dword ptr [ebp - 0x5bc] */ r_ecx = R32((u32)(r_ebp+0xfffffa44u));
    /* 006334ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006334ef: mov ecx, dword ptr [ebp - 0x5bc] */ r_ecx = R32((u32)(r_ebp+0xfffffa44u));
    /* 006334f5: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006334fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6334fdu); call_ind(t); }
    /* 006334fd: mov dword ptr [ebp - 0x5c0], eax */ W32((u32)(r_ebp+0xfffffa40u), r_eax);
    /* 00633503: mov ecx, dword ptr [ebp - 0x5c0] */ r_ecx = R32((u32)(r_ebp+0xfffffa40u));
    /* 00633509: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063350b: mov ecx, dword ptr [ebp - 0x5c0] */ r_ecx = R32((u32)(r_ebp+0xfffffa40u));
    /* 00633511: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00633517: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633519u); call_ind(t); }
    /* 00633519: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0063351c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063351e: jne 0x633522 */ if (!fZ) goto L_00633522;
L_00633520:; BB(0x00633520);
    /* 00633520: jmp 0x6334bb */ goto L_006334bb;
L_00633522:; BB(0x00633522);
    /* 00633522: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00633525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633526: mov eax, dword ptr [ebp - 0x5bc] */ r_eax = R32((u32)(r_ebp+0xfffffa44u));
    /* 0063352c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063352e: mov ecx, dword ptr [ebp - 0x5bc] */ r_ecx = R32((u32)(r_ebp+0xfffffa44u));
    /* 00633534: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0063353a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63353cu); call_ind(t); }
    /* 0063353c: mov dword ptr [ebp - 0x5c4], eax */ W32((u32)(r_ebp+0xfffffa3cu), r_eax);
    /* 00633542: mov ecx, dword ptr [ebp - 0x5c4] */ r_ecx = R32((u32)(r_ebp+0xfffffa3cu));
    /* 00633548: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063354a: mov ecx, dword ptr [ebp - 0x5c4] */ r_ecx = R32((u32)(r_ebp+0xfffffa3cu));
    /* 00633550: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00633556: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633558u); call_ind(t); }
    /* 00633558: mov dword ptr [ebp - 0x1b8], eax */ W32((u32)(r_ebp+0xfffffe48u), r_eax);
    /* 0063355e: mov byte ptr [ebp - 0x5b8], 0 */ W8((u32)(r_ebp+0xfffffa48u), 0x0u);
    /* 00633565: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063356a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063356c: lea ecx, [ebp - 0x5b7] */ r_ecx = (u32)(r_ebp+0xfffffa49u);
    /* 00633572: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633573: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x633578u); f_00686fa2();
    /* 00633578: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063357b: mov edx, dword ptr [ebp - 0x1b8] */ r_edx = R32((u32)(r_ebp+0xfffffe48u));
    /* 00633581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633582: push 0x6da4e4 */ { u32 v = 0x6da4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00633587: lea eax, [ebp - 0x5b8] */ r_eax = (u32)(r_ebp+0xfffffa48u);
    /* 0063358d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063358e: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x633594u); call_ind(t); }
    /* 00633594: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633597: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063359c: lea ecx, [ebp - 0x5b8] */ r_ecx = (u32)(r_ebp+0xfffffa48u);
    /* 006335a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006335a3: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6335a8u); f_005ea9c0();
    /* 006335a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006335ab: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006335ae: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006335b2: jne 0x6335d4 */ if (!fZ) goto L_006335d4;
L_006335b4:; BB(0x006335b4);
    /* 006335b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006335b6: jne 0x6335cf */ if (!fZ) goto L_006335cf;
L_006335b8:; BB(0x006335b8);
    /* 006335b8: push 0x418 */ { u32 v = 0x418u; r_esp -= 4; W32(r_esp, v); }
    /* 006335bd: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006335c2: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006335c7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6335ccu); f_005e9f20();
    /* 006335cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006335cf:; BB(0x006335cf);
    /* 006335cf: jmp 0x633769 */ goto L_00633769;
L_006335d4:; BB(0x006335d4);
    /* 006335d4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006335db: jmp 0x6335e6 */ goto L_006335e6;
L_006335dd:; BB(0x006335dd);
    /* 006335dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006335e0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006335e3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_006335e6:; BB(0x006335e6);
    /* 006335e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006335e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006335ea: mov eax, dword ptr [ebp - 0x5bc] */ r_eax = R32((u32)(r_ebp+0xfffffa44u));
    /* 006335f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006335f2: mov ecx, dword ptr [ebp - 0x5bc] */ r_ecx = R32((u32)(r_ebp+0xfffffa44u));
    /* 006335f8: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006335fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633600u); call_ind(t); }
    /* 00633600: mov dword ptr [ebp - 0x5c8], eax */ W32((u32)(r_ebp+0xfffffa38u), r_eax);
    /* 00633606: mov ecx, dword ptr [ebp - 0x5c8] */ r_ecx = R32((u32)(r_ebp+0xfffffa38u));
    /* 0063360c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063360e: mov ecx, dword ptr [ebp - 0x5c8] */ r_ecx = R32((u32)(r_ebp+0xfffffa38u));
    /* 00633614: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 0063361a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63361cu); call_ind(t); }
    /* 0063361c: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063361f: jge 0x633735 */ if ((fS==fO)) goto L_00633735;
L_00633625:; BB(0x00633625);
    /* 00633625: mov dword ptr [ebp - 0x1b4], 0 */ W32((u32)(r_ebp+0xfffffe4cu), 0x0u);
    /* 0063362f: jmp 0x633640 */ goto L_00633640;
L_00633631:; BB(0x00633631);
    /* 00633631: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 00633637: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063363a: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
L_00633640:; BB(0x00633640);
    /* 00633640: cmp dword ptr [ebp - 0x1b4], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633647: jge 0x633730 */ if ((fS==fO)) goto L_00633730;
L_0063364d:; BB(0x0063364d);
    /* 0063364d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00633650: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633651: mov eax, dword ptr [ebp - 0x5bc] */ r_eax = R32((u32)(r_ebp+0xfffffa44u));
    /* 00633657: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00633659: mov ecx, dword ptr [ebp - 0x5bc] */ r_ecx = R32((u32)(r_ebp+0xfffffa44u));
    /* 0063365f: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00633665: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633667u); call_ind(t); }
    /* 00633667: mov dword ptr [ebp - 0x5cc], eax */ W32((u32)(r_ebp+0xfffffa34u), r_eax);
    /* 0063366d: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 00633673: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633674: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00633677: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633678: mov eax, dword ptr [ebp - 0x5cc] */ r_eax = R32((u32)(r_ebp+0xfffffa34u));
    /* 0063367e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00633680: mov ecx, dword ptr [ebp - 0x5cc] */ r_ecx = R32((u32)(r_ebp+0xfffffa34u));
    /* 00633686: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 0063368c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63368eu); call_ind(t); }
    /* 0063368e: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 00633694: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00633696: call 0x62fba0 */ r_esp -= 4; W32(r_esp, 0x63369bu); f_0062fba0();
    /* 0063369b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063369e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006336a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006336a4: imul ecx, ecx, 0x44 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x44u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006336a7: add ecx, 0x762708 */ {  u32 a = r_ecx; u32 b = 0x762708u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006336ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006336ae: lea edx, [ebp - 0x1b0] */ r_edx = (u32)(r_ebp+0xfffffe50u);
    /* 006336b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006336b5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6336bau); f_00686d8e();
    /* 006336ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006336bd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006336c0: imul eax, eax, 0x44 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x44u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006336c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006336c5: cmp dword ptr [eax + 0x76273c], -1 */ {  u32 a = R32((u32)(r_eax+0x76273cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006336cc: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006336cf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006336d2: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 006336d8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006336db: imul edx, edx, 0x44 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x44u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006336de: mov eax, dword ptr [edx + 0x76273c] */ r_eax = R32((u32)(r_edx+0x76273cu));
    /* 006336e4: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 006336ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006336ed: imul ecx, ecx, 0x44 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x44u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006336f0: add ecx, 0x762740 */ {  u32 a = r_ecx; u32 b = 0x762740u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006336f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006336f8: mov dword ptr [ebp - 0x170], edx */ W32((u32)(r_ebp+0xfffffe90u), r_edx);
    /* 006336fe: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00633701: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 00633707: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0063370a: mov dword ptr [ebp - 0x168], ecx */ W32((u32)(r_ebp+0xfffffe98u), r_ecx);
    /* 00633710: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00633713: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633714: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00633719: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063371b: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00633721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633722: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x633728u); call_ind(t); }
    /* 00633728: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063372b: jmp 0x633631 */ goto L_00633631;
L_00633730:; BB(0x00633730);
    /* 00633730: jmp 0x6335dd */ goto L_006335dd;
L_00633735:; BB(0x00633735);
    /* 00633735: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00633738: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633739: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x63373fu); call_ind(t); }
    /* 0063373f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633742: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633746: jl 0x63374a */ if ((fS!=fO)) goto L_0063374a;
L_00633748:; BB(0x00633748);
    /* 00633748: jmp 0x63374f */ goto L_0063374f;
L_0063374a:; BB(0x0063374a);
    /* 0063374a: jmp 0x6334bb */ goto L_006334bb;
L_0063374f:; BB(0x0063374f);
    /* 0063374f: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633753: jne 0x633769 */ if (!fZ) goto L_00633769;
L_00633755:; BB(0x00633755);
    /* 00633755: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633757: push 0x6da4dc */ { u32 v = 0x6da4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0063375c: push 0x6da4c0 */ { u32 v = 0x6da4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633761: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x633766u); f_0062ff10();
    /* 00633766: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00633769:; BB(0x00633769);
    /* 00633769: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063376c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063376e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x633773u); f_00686d72();
    /* 00633773: mov esp, ebp */ r_esp = r_ebp;
    /* 00633775: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633776: ret 4 */ FN_RET(0x00633490); r_esp += 8; return;
}

void f_00633780(void) /* CasinoShell::vfunc139 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00633780);
    /* 00633780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00633781: mov ebp, esp */ r_ebp = r_esp;
    /* 00633783: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00633785: push 0x6ab9ad */ { u32 v = 0x6ab9adu; r_esp -= 4; W32(r_esp, v); }
    /* 0063378a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00633790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633791: sub esp, 0xb68 */ {  u32 a = r_esp; u32 b = 0xb68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00633797: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0063379c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063379e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006337a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006337a2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006337a5: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006337ab: mov dword ptr [ebp - 0xb58], ecx */ W32((u32)(r_ebp+0xfffff4a8u), r_ecx);
    /* 006337b1: mov byte ptr [ebp - 0xb25], 0 */ W8((u32)(r_ebp+0xfffff4dbu), 0x0u);
    /* 006337b8: mov dword ptr [ebp - 0x42c], 0 */ W32((u32)(r_ebp+0xfffffbd4u), 0x0u);
    /* 006337c2: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 006337c8: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6337cdu); f_005f3bf0();
    /* 006337cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006337ce: mov eax, dword ptr [ebp - 0xb58] */ r_eax = R32((u32)(r_ebp+0xfffff4a8u));
    /* 006337d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006337d6: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 006337dc: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006337e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6337e4u); call_ind(t); }
    /* 006337e4: mov dword ptr [ebp - 0xb5c], eax */ W32((u32)(r_ebp+0xfffff4a4u), r_eax);
    /* 006337ea: mov ecx, dword ptr [ebp - 0xb5c] */ r_ecx = R32((u32)(r_ebp+0xfffff4a4u));
    /* 006337f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006337f2: mov ecx, dword ptr [ebp - 0xb5c] */ r_ecx = R32((u32)(r_ebp+0xfffff4a4u));
    /* 006337f8: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 006337fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633800u); call_ind(t); }
    /* 00633800: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00633803: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633805: jne 0x63380c */ if (!fZ) goto L_0063380c;
L_00633807:; BB(0x00633807);
    /* 00633807: jmp 0x633e7b */ goto L_00633e7b;
L_0063380c:; BB(0x0063380c);
    /* 0063380c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0063380e: lea edx, [ebp - 0xb1c] */ r_edx = (u32)(r_ebp+0xfffff4e4u);
    /* 00633814: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633815: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 0063381b: call 0x633ea0 */ r_esp -= 4; W32(r_esp, 0x633820u); f_00633ea0();
    /* 00633820: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00633823: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633825: jne 0x63382c */ if (!fZ) goto L_0063382c;
L_00633827:; BB(0x00633827);
    /* 00633827: jmp 0x633e7b */ goto L_00633e7b;
L_0063382c:; BB(0x0063382c);
    /* 0063382c: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633832: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x633837u); f_005f3bf0();
    /* 00633837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633838: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 0063383e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633840: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633846: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0063384c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63384eu); call_ind(t); }
    /* 0063384e: mov dword ptr [ebp - 0xb60], eax */ W32((u32)(r_ebp+0xfffff4a0u), r_eax);
    /* 00633854: mov ecx, dword ptr [ebp - 0xb60] */ r_ecx = R32((u32)(r_ebp+0xfffff4a0u));
    /* 0063385a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063385c: mov ecx, dword ptr [ebp - 0xb60] */ r_ecx = R32((u32)(r_ebp+0xfffff4a0u));
    /* 00633862: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00633868: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63386au); call_ind(t); }
    /* 0063386a: mov dword ptr [ebp - 0x428], eax */ W32((u32)(r_ebp+0xfffffbd8u), r_eax);
    /* 00633870: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633876: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63387bu); f_005f3bf0();
    /* 0063387b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063387c: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633882: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633884: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 0063388a: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00633890: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633892u); call_ind(t); }
    /* 00633892: mov dword ptr [ebp - 0xb64], eax */ W32((u32)(r_ebp+0xfffff49cu), r_eax);
    /* 00633898: mov ecx, dword ptr [ebp - 0xb64] */ r_ecx = R32((u32)(r_ebp+0xfffff49cu));
    /* 0063389e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006338a0: mov ecx, dword ptr [ebp - 0xb64] */ r_ecx = R32((u32)(r_ebp+0xfffff49cu));
    /* 006338a6: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 006338ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6338aeu); call_ind(t); }
    /* 006338ae: mov dword ptr [ebp - 0xb24], eax */ W32((u32)(r_ebp+0xfffff4dcu), r_eax);
    /* 006338b4: mov ecx, dword ptr [ebp - 0xb24] */ r_ecx = R32((u32)(r_ebp+0xfffff4dcu));
    /* 006338ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006338bb: push 0x6da4e4 */ { u32 v = 0x6da4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006338c0: lea edx, [ebp - 0x52c] */ r_edx = (u32)(r_ebp+0xfffffad4u);
    /* 006338c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006338c7: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6338cdu); call_ind(t); }
    /* 006338cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006338d0: mov byte ptr [ebp - 0x414], 0 */ W8((u32)(r_ebp+0xfffffbecu), 0x0u);
    /* 006338d7: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006338dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006338de: lea eax, [ebp - 0x413] */ r_eax = (u32)(r_ebp+0xfffffbedu);
    /* 006338e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006338e5: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6338eau); f_00686fa2();
    /* 006338ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006338ed: lea ecx, [ebp - 0x52c] */ r_ecx = (u32)(r_ebp+0xfffffad4u);
    /* 006338f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006338f4: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 006338fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006338fb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x633900u); f_00686d8e();
    /* 00633900: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633903: mov dword ptr [ebp - 0x41c], 0 */ W32((u32)(r_ebp+0xfffffbe4u), 0x0u);
    /* 0063390d: jmp 0x63391e */ goto L_0063391e;
L_0063390f:; BB(0x0063390f);
    /* 0063390f: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633915: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00633918: mov dword ptr [ebp - 0x41c], eax */ W32((u32)(r_ebp+0xfffffbe4u), r_eax);
L_0063391e:; BB(0x0063391e);
    /* 0063391e: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633924: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633926: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 0063392c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00633932: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633934u); call_ind(t); }
    /* 00633934: cmp dword ptr [ebp - 0x41c], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffbe4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063393a: jge 0x633db7 */ if ((fS==fO)) goto L_00633db7;
L_00633940:; BB(0x00633940);
    /* 00633940: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633946: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x63394bu); f_005f3bf0();
    /* 0063394b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063394c: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633952: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633954: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 0063395a: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00633960: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633962u); call_ind(t); }
    /* 00633962: mov dword ptr [ebp - 0xb68], eax */ W32((u32)(r_ebp+0xfffff498u), r_eax);
    /* 00633968: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 0063396e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063396f: mov edx, dword ptr [ebp - 0xb68] */ r_edx = R32((u32)(r_ebp+0xfffff498u));
    /* 00633975: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00633977: mov ecx, dword ptr [ebp - 0xb68] */ r_ecx = R32((u32)(r_ebp+0xfffff498u));
    /* 0063397d: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 00633983: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x633985u); call_ind(t); }
    /* 00633985: mov dword ptr [ebp - 0x418], eax */ W32((u32)(r_ebp+0xfffffbe8u), r_eax);
    /* 0063398b: cmp dword ptr [ebp - 0x418], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633992: jge 0x633999 */ if ((fS==fO)) goto L_00633999;
L_00633994:; BB(0x00633994);
    /* 00633994: jmp 0x633db7 */ goto L_00633db7;
L_00633999:; BB(0x00633999);
    /* 00633999: mov dword ptr [ebp - 0x420], 0 */ W32((u32)(r_ebp+0xfffffbe0u), 0x0u);
    /* 006339a3: jmp 0x6339b4 */ goto L_006339b4;
L_006339a5:; BB(0x006339a5);
    /* 006339a5: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 006339ab: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006339ae: mov dword ptr [ebp - 0x420], eax */ W32((u32)(r_ebp+0xfffffbe0u), r_eax);
L_006339b4:; BB(0x006339b4);
    /* 006339b4: cmp dword ptr [ebp - 0x420], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffbe0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006339bb: jge 0x633d95 */ if ((fS==fO)) goto L_00633d95;
L_006339c1:; BB(0x006339c1);
    /* 006339c1: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 006339c7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x6339ccu); f_005f3bf0();
    /* 006339cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006339cd: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 006339d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006339d5: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 006339db: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006339e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6339e3u); call_ind(t); }
    /* 006339e3: mov dword ptr [ebp - 0xb6c], eax */ W32((u32)(r_ebp+0xfffff494u), r_eax);
    /* 006339e9: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 006339ef: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006339f5: mov edx, dword ptr [ebp + ecx - 0xae8] */ r_edx = R32((u32)(r_ebp+r_ecx+0xfffff518u));
    /* 006339fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006339fd: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00633a03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633a04: mov ecx, dword ptr [ebp - 0xb6c] */ r_ecx = R32((u32)(r_ebp+0xfffff494u));
    /* 00633a0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633a0c: mov ecx, dword ptr [ebp - 0xb6c] */ r_ecx = R32((u32)(r_ebp+0xfffff494u));
    /* 00633a12: mov eax, dword ptr [edx + 0xd4] */ r_eax = R32((u32)(r_edx+0xd4u));
    /* 00633a18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633a1au); call_ind(t); }
    /* 00633a1a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00633a1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633a1f: je 0x633d90 */ if (fZ) goto L_00633d90;
L_00633a25:; BB(0x00633a25);
    /* 00633a25: mov dword ptr [ebp - 0xb20], 9 */ W32((u32)(r_ebp+0xfffff4e0u), 0x9u);
    /* 00633a2f: jmp 0x633a40 */ goto L_00633a40;
L_00633a31:; BB(0x00633a31);
    /* 00633a31: mov edx, dword ptr [ebp - 0xb20] */ r_edx = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633a37: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00633a3a: mov dword ptr [ebp - 0xb20], edx */ W32((u32)(r_ebp+0xfffff4e0u), r_edx);
L_00633a40:; BB(0x00633a40);
    /* 00633a40: mov eax, dword ptr [ebp - 0xb20] */ r_eax = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633a46: cmp eax, dword ptr [ebp - 0x420] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffbe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633a4c: jle 0x633a88 */ if ((fZ||fS!=fO)) goto L_00633a88;
L_00633a4e:; BB(0x00633a4e);
    /* 00633a4e: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00633a53: mov ecx, dword ptr [ebp - 0xb20] */ r_ecx = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633a59: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00633a5c: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633a62: lea edx, [ebp + ecx - 0xb1c] */ r_edx = (u32)(r_ebp+r_ecx+0xfffff4e4u);
    /* 00633a69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633a6a: mov eax, dword ptr [ebp - 0xb20] */ r_eax = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633a70: imul eax, eax, 0x98 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x98u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633a76: lea ecx, [ebp + eax - 0xb1c] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff4e4u);
    /* 00633a7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633a7e: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x633a83u); f_00686fde();
    /* 00633a83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633a86: jmp 0x633a31 */ goto L_00633a31;
L_00633a88:; BB(0x00633a88);
    /* 00633a88: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633a8e: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633a94: mov eax, dword ptr [ebp - 0x418] */ r_eax = R32((u32)(r_ebp+0xfffffbe8u));
    /* 00633a9a: mov dword ptr [ebp + edx - 0xae8], eax */ W32((u32)(r_ebp+r_edx+0xfffff518u), r_eax);
    /* 00633aa1: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633aa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633aa8: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633aae: call 0x639070 */ r_esp -= 4; W32(r_esp, 0x633ab3u); f_00639070();
    /* 00633ab3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633ab4: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633aba: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633ac0: lea eax, [ebp + edx - 0xb1c] */ r_eax = (u32)(r_ebp+r_edx+0xfffff4e4u);
    /* 00633ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633ac8: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x633acdu); f_00686d8e();
    /* 00633acd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633ad0: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633ad6: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633adc: mov dword ptr [ebp + ecx - 0xae0], 0xffffffff */ W32((u32)(r_ebp+r_ecx+0xfffff520u), 0xffffffffu);
    /* 00633ae7: mov edx, dword ptr [ebp - 0xb58] */ r_edx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633aed: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00633af0: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633af6: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 00633af9: mov dword ptr [ebp - 0xb48], edx */ W32((u32)(r_ebp+0xfffff4b8u), r_edx);
    /* 00633aff: mov ecx, dword ptr [ebp - 0xb48] */ r_ecx = R32((u32)(r_ebp+0xfffff4b8u));
    /* 00633b05: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x633b0au); f_0063aac0();
    /* 00633b0a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00633b0c: mov dword ptr [ebp - 0xb4c], eax */ W32((u32)(r_ebp+0xfffff4b4u), r_eax);
    /* 00633b12: cmp dword ptr [ebp - 0xb4c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffff4b4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633b19: jne 0x633b8f */ if (!fZ) goto L_00633b8f;
L_00633b1b:; BB(0x00633b1b);
    /* 00633b1b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00633b21: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00633b24: mov eax, dword ptr [ebp - 0x41c] */ r_eax = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633b2a: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00633b2d: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x633b32u); f_004842b0();
    /* 00633b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633b33: lea ecx, [ebp - 0xb34] */ r_ecx = (u32)(r_ebp+0xfffff4ccu);
    /* 00633b39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633b3a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00633b40: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00633b42: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00633b48: mov edx, dword ptr [eax + 0x1ec] */ r_edx = R32((u32)(r_eax+0x1ecu));
    /* 00633b4e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x633b50u); call_ind(t); }
    /* 00633b50: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633b56: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633b5c: lea edx, [ebp + ecx - 0xadc] */ r_edx = (u32)(r_ebp+r_ecx+0xfffff524u);
    /* 00633b63: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00633b65: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00633b67: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00633b6a: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00633b6d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00633b70: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00633b73: mov ecx, dword ptr [ebp - 0x420] */ r_ecx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633b79: imul ecx, ecx, 0x98 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x98u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633b7f: mov dword ptr [ebp + ecx - 0xae4], 2 */ W32((u32)(r_ebp+r_ecx+0xfffff51cu), 0x2u);
    /* 00633b8a: jmp 0x633cce */ goto L_00633cce;
L_00633b8f:; BB(0x00633b8f);
    /* 00633b8f: mov edx, dword ptr [ebp - 0x420] */ r_edx = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633b95: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633b9b: mov dword ptr [ebp + edx - 0xae4], 3 */ W32((u32)(r_ebp+r_edx+0xfffff51cu), 0x3u);
    /* 00633ba6: cmp dword ptr [ebp - 0x42c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633bad: jne 0x633c0e */ if (!fZ) goto L_00633c0e;
L_00633baf:; BB(0x00633baf);
    /* 00633baf: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00633bb4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x633bb9u); f_00686d82();
    /* 00633bb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633bbc: mov dword ptr [ebp - 0xb3c], eax */ W32((u32)(r_ebp+0xfffff4c4u), r_eax);
    /* 00633bc2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00633bc9: cmp dword ptr [ebp - 0xb3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff4c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633bd0: je 0x633be5 */ if (fZ) goto L_00633be5;
L_00633bd2:; BB(0x00633bd2);
    /* 00633bd2: mov ecx, dword ptr [ebp - 0xb3c] */ r_ecx = R32((u32)(r_ebp+0xfffff4c4u));
    /* 00633bd8: call 0x6640c0 */ r_esp -= 4; W32(r_esp, 0x633bddu); f_006640c0();
    /* 00633bdd: mov dword ptr [ebp - 0xb70], eax */ W32((u32)(r_ebp+0xfffff490u), r_eax);
    /* 00633be3: jmp 0x633bef */ goto L_00633bef;
L_00633be5:; BB(0x00633be5);
    /* 00633be5: mov dword ptr [ebp - 0xb70], 0 */ W32((u32)(r_ebp+0xfffff490u), 0x0u);
L_00633bef:; BB(0x00633bef);
    /* 00633bef: mov eax, dword ptr [ebp - 0xb70] */ r_eax = R32((u32)(r_ebp+0xfffff490u));
    /* 00633bf5: mov dword ptr [ebp - 0xb38], eax */ W32((u32)(r_ebp+0xfffff4c8u), r_eax);
    /* 00633bfb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00633c02: mov ecx, dword ptr [ebp - 0xb38] */ r_ecx = R32((u32)(r_ebp+0xfffff4c8u));
    /* 00633c08: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
L_00633c0e:; BB(0x00633c0e);
    /* 00633c0e: mov edx, dword ptr [ebp - 0xb58] */ r_edx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633c14: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00633c17: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633c1d: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 00633c20: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x633c25u); f_0057a470();
    /* 00633c25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633c26: mov ecx, dword ptr [ebp - 0x42c] */ r_ecx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00633c2c: call 0x664300 */ r_esp -= 4; W32(r_esp, 0x633c31u); f_00664300();
    /* 00633c31: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00633c34: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633c36: jne 0x633c55 */ if (!fZ) goto L_00633c55;
L_00633c38:; BB(0x00633c38);
    /* 00633c38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00633c3a: jne 0x633c53 */ if (!fZ) goto L_00633c53;
L_00633c3c:; BB(0x00633c3c);
    /* 00633c3c: push 0x46c */ { u32 v = 0x46cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633c41: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00633c46: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00633c4b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x633c50u); f_005e9f20();
    /* 00633c50: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00633c53:; BB(0x00633c53);
    /* 00633c53: jmp 0x633c7d */ goto L_00633c7d;
L_00633c55:; BB(0x00633c55);
    /* 00633c55: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00633c57: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00633c5d: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00633c60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633c61: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633c67: imul eax, eax, 0x98 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x98u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633c6d: lea ecx, [ebp + eax - 0xad0] */ r_ecx = (u32)(r_ebp+r_eax+0xfffff530u);
    /* 00633c74: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633c75: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x633c7au); f_00686fde();
    /* 00633c7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00633c7d:; BB(0x00633c7d);
    /* 00633c7d: mov edx, dword ptr [ebp - 0x42c] */ r_edx = R32((u32)(r_ebp+0xfffffbd4u));
    /* 00633c83: mov dword ptr [ebp - 0xb44], edx */ W32((u32)(r_ebp+0xfffff4bcu), r_edx);
    /* 00633c89: mov eax, dword ptr [ebp - 0xb44] */ r_eax = R32((u32)(r_ebp+0xfffff4bcu));
    /* 00633c8f: mov dword ptr [ebp - 0xb40], eax */ W32((u32)(r_ebp+0xfffff4c0u), r_eax);
    /* 00633c95: cmp dword ptr [ebp - 0xb40], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff4c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633c9c: je 0x633cba */ if (fZ) goto L_00633cba;
L_00633c9e:; BB(0x00633c9e);
    /* 00633c9e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633ca0: mov ecx, dword ptr [ebp - 0xb40] */ r_ecx = R32((u32)(r_ebp+0xfffff4c0u));
    /* 00633ca6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00633ca8: mov ecx, dword ptr [ebp - 0xb40] */ r_ecx = R32((u32)(r_ebp+0xfffff4c0u));
    /* 00633cae: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00633cb0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x633cb2u); call_ind(t); }
    /* 00633cb2: mov dword ptr [ebp - 0xb74], eax */ W32((u32)(r_ebp+0xfffff48cu), r_eax);
    /* 00633cb8: jmp 0x633cc4 */ goto L_00633cc4;
L_00633cba:; BB(0x00633cba);
    /* 00633cba: mov dword ptr [ebp - 0xb74], 0 */ W32((u32)(r_ebp+0xfffff48cu), 0x0u);
L_00633cc4:; BB(0x00633cc4);
    /* 00633cc4: mov dword ptr [ebp - 0x42c], 0 */ W32((u32)(r_ebp+0xfffffbd4u), 0x0u);
L_00633cce:; BB(0x00633cce);
    /* 00633cce: mov byte ptr [ebp - 0xb25], 1 */ W8((u32)(r_ebp+0xfffff4dbu), 0x1u);
    /* 00633cd5: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633cdb: mov edx, dword ptr [ebp - 0xb58] */ r_edx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633ce1: mov eax, dword ptr [ebp - 0x420] */ r_eax = R32((u32)(r_ebp+0xfffffbe0u));
    /* 00633ce7: mov dword ptr [edx + ecx*4 + 0x64], eax */ W32((u32)(r_edx+r_ecx*4+0x64u), r_eax);
    /* 00633ceb: mov ecx, dword ptr [ebp - 0x41c] */ r_ecx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633cf1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00633cf4: mov dword ptr [ebp - 0xb20], ecx */ W32((u32)(r_ebp+0xfffff4e0u), r_ecx);
    /* 00633cfa: jmp 0x633d0b */ goto L_00633d0b;
L_00633cfc:; BB(0x00633cfc);
    /* 00633cfc: mov edx, dword ptr [ebp - 0xb20] */ r_edx = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633d02: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00633d05: mov dword ptr [ebp - 0xb20], edx */ W32((u32)(r_ebp+0xfffff4e0u), r_edx);
L_00633d0b:; BB(0x00633d0b);
    /* 00633d0b: cmp dword ptr [ebp - 0xb20], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff4e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633d12: jl 0x633d8e */ if ((fS!=fO)) goto L_00633d8e;
L_00633d14:; BB(0x00633d14);
    /* 00633d14: mov eax, dword ptr [ebp - 0xb20] */ r_eax = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633d1a: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633d20: cmp dword ptr [ecx + eax*4 + 0x64], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633d25: jl 0x633d89 */ if ((fS!=fO)) goto L_00633d89;
L_00633d27:; BB(0x00633d27);
    /* 00633d27: mov edx, dword ptr [ebp - 0xb20] */ r_edx = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633d2d: mov eax, dword ptr [ebp - 0xb58] */ r_eax = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633d33: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 00633d37: cmp ecx, dword ptr [ebp - 0x420] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffbe0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633d3d: jl 0x633d89 */ if ((fS!=fO)) goto L_00633d89;
L_00633d3f:; BB(0x00633d3f);
    /* 00633d3f: mov edx, dword ptr [ebp - 0xb20] */ r_edx = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633d45: mov eax, dword ptr [ebp - 0xb58] */ r_eax = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633d4b: mov ecx, dword ptr [eax + edx*4 + 0x64] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 00633d4f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00633d52: mov edx, dword ptr [ebp - 0xb20] */ r_edx = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633d58: mov eax, dword ptr [ebp - 0xb58] */ r_eax = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633d5e: mov dword ptr [eax + edx*4 + 0x64], ecx */ W32((u32)(r_eax+r_edx*4+0x64u), r_ecx);
    /* 00633d62: mov ecx, dword ptr [ebp - 0xb20] */ r_ecx = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633d68: mov edx, dword ptr [ebp - 0xb58] */ r_edx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633d6e: cmp dword ptr [edx + ecx*4 + 0x64], 0xa */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x64u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633d73: jl 0x633d89 */ if ((fS!=fO)) goto L_00633d89;
L_00633d75:; BB(0x00633d75);
    /* 00633d75: mov eax, dword ptr [ebp - 0xb20] */ r_eax = R32((u32)(r_ebp+0xfffff4e0u));
    /* 00633d7b: mov ecx, dword ptr [ebp - 0xb58] */ r_ecx = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633d81: mov dword ptr [ecx + eax*4 + 0x64], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0x64u), 0xffffffffu);
L_00633d89:; BB(0x00633d89);
    /* 00633d89: jmp 0x633cfc */ goto L_00633cfc;
L_00633d8e:; BB(0x00633d8e);
    /* 00633d8e: jmp 0x633d95 */ goto L_00633d95;
L_00633d90:; BB(0x00633d90);
    /* 00633d90: jmp 0x6339a5 */ goto L_006339a5;
L_00633d95:; BB(0x00633d95);
    /* 00633d95: cmp dword ptr [ebp - 0x420], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffbe0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633d9c: jne 0x633db2 */ if (!fZ) goto L_00633db2;
L_00633d9e:; BB(0x00633d9e);
    /* 00633d9e: mov edx, dword ptr [ebp - 0x41c] */ r_edx = R32((u32)(r_ebp+0xfffffbe4u));
    /* 00633da4: mov eax, dword ptr [ebp - 0xb58] */ r_eax = R32((u32)(r_ebp+0xfffff4a8u));
    /* 00633daa: mov dword ptr [eax + edx*4 + 0x64], 0xffffffff */ W32((u32)(r_eax+r_edx*4+0x64u), 0xffffffffu);
L_00633db2:; BB(0x00633db2);
    /* 00633db2: jmp 0x63390f */ goto L_0063390f;
L_00633db7:; BB(0x00633db7);
    /* 00633db7: movzx ecx, byte ptr [ebp - 0xb25] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffff4dbu));
    /* 00633dbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633dc0: je 0x633e7b */ if (fZ) goto L_00633e7b;
L_00633dc6:; BB(0x00633dc6);
    /* 00633dc6: push 0x6da4f0 */ { u32 v = 0x6da4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633dcb: lea edx, [ebp - 0x414] */ r_edx = (u32)(r_ebp+0xfffffbecu);
    /* 00633dd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633dd2: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x633dd7u); f_005ea9c0();
    /* 00633dd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633dda: mov dword ptr [ebp - 0x424], eax */ W32((u32)(r_ebp+0xfffffbdcu), r_eax);
    /* 00633de0: cmp dword ptr [ebp - 0x424], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633de7: jne 0x633e06 */ if (!fZ) goto L_00633e06;
L_00633de9:; BB(0x00633de9);
    /* 00633de9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00633deb: jne 0x633e04 */ if (!fZ) goto L_00633e04;
L_00633ded:; BB(0x00633ded);
    /* 00633ded: push 0x48d */ { u32 v = 0x48du; r_esp -= 4; W32(r_esp, v); }
    /* 00633df2: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00633df7: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00633dfc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x633e01u); f_005e9f20();
    /* 00633e01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00633e04:; BB(0x00633e04);
    /* 00633e04: jmp 0x633e7b */ goto L_00633e7b;
L_00633e06:; BB(0x00633e06);
    /* 00633e06: cmp dword ptr [ebp - 0x428], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffbd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00633e0d: jle 0x633e31 */ if ((fZ||fS!=fO)) goto L_00633e31;
L_00633e0f:; BB(0x00633e0f);
    /* 00633e0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00633e11: mov edx, dword ptr [ebp - 0x428] */ r_edx = R32((u32)(r_ebp+0xfffffbd8u));
    /* 00633e17: imul edx, edx, 0x98 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x98u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633e1d: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00633e20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633e21: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00633e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633e28: call dword ptr [0x6b230c] */ { u32 t = R32((u32)(0x6b230cu)); r_esp -= 4; W32(r_esp, 0x633e2eu); call_ind(t); }
    /* 00633e2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00633e31:; BB(0x00633e31);
    /* 00633e31: mov ecx, dword ptr [ebp - 0x424] */ r_ecx = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00633e37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00633e38: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00633e3a: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00633e3f: lea edx, [ebp - 0xb1c] */ r_edx = (u32)(r_ebp+0xfffff4e4u);
    /* 00633e45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00633e46: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x633e4cu); call_ind(t); }
    /* 00633e4c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633e4f: mov eax, dword ptr [ebp - 0x424] */ r_eax = R32((u32)(r_ebp+0xfffffbdcu));
    /* 00633e55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00633e56: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x633e5cu); call_ind(t); }
    /* 00633e5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00633e5f: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00633e65: cmp dword ptr [ecx + 0x4c], 0 */ {  u32 a = R32((u32)(r_ecx+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00633e69: je 0x633e7b */ if (fZ) goto L_00633e7b;
L_00633e6b:; BB(0x00633e6b);
    /* 00633e6b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00633e6d: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00633e73: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 00633e76: call 0x66f610 */ r_esp -= 4; W32(r_esp, 0x633e7bu); f_0066f610();
L_00633e7b:; BB(0x00633e7b);
    /* 00633e7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00633e7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633e85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00633e86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00633e89: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00633e8b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x633e90u); f_00686d72();
    /* 00633e90: mov esp, ebp */ r_esp = r_ebp;
    /* 00633e92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633e93: ret  */ FN_RET(0x00633780); r_esp += 4; return;
}

void f_006340b0(void) /* CasinoShell::vfunc142 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006340b0);
    /* 006340b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006340b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006340b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006340b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006340b7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 006340bb: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 006340bd: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006340bf: add eax, 0x231ad7 */ {  u32 a = r_eax; u32 b = 0x231ad7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006340c4: mov esp, ebp */ r_esp = r_ebp;
    /* 006340c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006340c7: ret 4 */ FN_RET(0x006340b0); r_esp += 8; return;
}

void f_00635130(void) /* CasinoShell::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635130);
    /* 00635130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635131: mov ebp, esp */ r_ebp = r_esp;
    /* 00635133: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635136: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00635139: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00635140: jmp 0x63514b */ goto L_0063514b;
L_00635142:; BB(0x00635142);
    /* 00635142: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635145: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00635148: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0063514b:; BB(0x0063514b);
    /* 0063514b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063514e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635150: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635153: mov eax, dword ptr [edx + 0x25c] */ r_eax = R32((u32)(r_edx+0x25cu));
    /* 00635159: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63515bu); call_ind(t); }
    /* 0063515b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063515e: jge 0x635182 */ if ((fS==fO)) goto L_00635182;
L_00635160:; BB(0x00635160);
    /* 00635160: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635164: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635167: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635169: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063516c: mov edx, dword ptr [eax + 0x268] */ r_edx = R32((u32)(r_eax+0x268u));
    /* 00635172: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635174u); call_ind(t); }
    /* 00635174: cmp eax, 0x7d1 */ {  u32 a = r_eax; u32 b = 0x7d1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635179: jne 0x635180 */ if (!fZ) goto L_00635180;
L_0063517b:; BB(0x0063517b);
    /* 0063517b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063517e: jmp 0x635184 */ goto L_00635184;
L_00635180:; BB(0x00635180);
    /* 00635180: jmp 0x635142 */ goto L_00635142;
L_00635182:; BB(0x00635182);
    /* 00635182: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00635184:; BB(0x00635184);
    /* 00635184: mov esp, ebp */ r_esp = r_ebp;
    /* 00635186: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635187: ret  */ FN_RET(0x00635130); r_esp += 4; return;
}

void f_00635250(void) /* CasinoShell::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635250);
    /* 00635250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635251: mov ebp, esp */ r_ebp = r_esp;
    /* 00635253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635257: mov eax, 0x30d409 */ r_eax = 0x30d409u;
    /* 0063525c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063525e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063525f: ret  */ FN_RET(0x00635250); r_esp += 4; return;
}

void f_00635260(void) /* CasinoShell::vfunc25 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635260);
    /* 00635260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635261: mov ebp, esp */ r_ebp = r_esp;
    /* 00635263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635267: mov eax, 0x30d40a */ r_eax = 0x30d40au;
    /* 0063526c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063526e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063526f: ret  */ FN_RET(0x00635260); r_esp += 4; return;
}

void f_006355b0(void) /* CasinoShell::vfunc206 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006355b0);
    /* 006355b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006355b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006355b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006355b6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006355b9: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006355bd: je 0x6355f6 */ if (fZ) goto L_006355f6;
L_006355bf:; BB(0x006355bf);
    /* 006355bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006355c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006355c3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006355c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006355cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006355d1: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006355d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6355d9u); call_ind(t); }
    /* 006355d9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006355dc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006355df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006355e1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006355e4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006355e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6355e9u); call_ind(t); }
    /* 006355e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006355ea: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006355ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006355ee: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6355f3u); f_00686d8e();
    /* 006355f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006355f6:; BB(0x006355f6);
    /* 006355f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006355f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006355f9: ret 8 */ FN_RET(0x006355b0); r_esp += 12; return;
}

void f_00635600(void) /* CasinoShell::vfunc217 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635600);
    /* 00635600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635601: mov ebp, esp */ r_ebp = r_esp;
    /* 00635603: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635606: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00635609: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063560d: jl 0x6356d6 */ if ((fS!=fO)) goto L_006356d6;
L_00635613:; BB(0x00635613);
    /* 00635613: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635616: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635617: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063561a: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x63561fu); f_006352f0();
    /* 0063561f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635621: je 0x6356d6 */ if (fZ) goto L_006356d6;
L_00635627:; BB(0x00635627);
    /* 00635627: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063562a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063562b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00635631: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x635636u); f_006375b0();
    /* 00635636: mov ecx, eax */ r_ecx = r_eax;
    /* 00635638: call 0x639ea0 */ r_esp -= 4; W32(r_esp, 0x63563du); f_00639ea0();
    /* 0063563d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00635640: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00635642: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635646: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635649: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063564b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063564e: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00635654: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635656u); call_ind(t); }
    /* 00635656: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00635659: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0063565c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063565d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00635660: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635661: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635664: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635666: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635669: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0063566c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63566eu); call_ind(t); }
    /* 0063566e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00635671: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00635674: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00635676: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00635679: jge 0x6356a1 */ if ((fS==fO)) goto L_006356a1;
L_0063567b:; BB(0x0063567b);
    /* 0063567b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0063567d: jne 0x635696 */ if (!fZ) goto L_00635696;
L_0063567f:; BB(0x0063567f);
    /* 0063567f: push 0x6af */ { u32 v = 0x6afu; r_esp -= 4; W32(r_esp, v); }
    /* 00635684: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00635689: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0063568e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x635693u); f_005e9f20();
    /* 00635693: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635696:; BB(0x00635696);
    /* 00635696: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00635699: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063569c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0063569f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_006356a1:; BB(0x006356a1);
    /* 006356a1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006356a4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006356a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006356a9: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006356ac: jle 0x6356d4 */ if ((fZ||fS!=fO)) goto L_006356d4;
L_006356ae:; BB(0x006356ae);
    /* 006356ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006356b0: jne 0x6356c9 */ if (!fZ) goto L_006356c9;
L_006356b2:; BB(0x006356b2);
    /* 006356b2: push 0x6b2 */ { u32 v = 0x6b2u; r_esp -= 4; W32(r_esp, v); }
    /* 006356b7: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006356bc: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006356c1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6356c6u); f_005e9f20();
    /* 006356c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006356c9:; BB(0x006356c9);
    /* 006356c9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006356cc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006356cf: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006356d2: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
L_006356d4:; BB(0x006356d4);
    /* 006356d4: jmp 0x6356fa */ goto L_006356fa;
L_006356d6:; BB(0x006356d6);
    /* 006356d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006356d8: jne 0x6356f1 */ if (!fZ) goto L_006356f1;
L_006356da:; BB(0x006356da);
    /* 006356da: push 0x6b7 */ { u32 v = 0x6b7u; r_esp -= 4; W32(r_esp, v); }
    /* 006356df: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006356e4: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006356e9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6356eeu); f_005e9f20();
    /* 006356ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006356f1:; BB(0x006356f1);
    /* 006356f1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006356f4: mov dword ptr [ecx], 4 */ W32((u32)(r_ecx), 0x4u);
L_006356fa:; BB(0x006356fa);
    /* 006356fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006356fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006356fd: ret 0xc */ FN_RET(0x00635600); r_esp += 16; return;
}

void f_00635700(void) /* CasinoShell::vfunc202 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635700);
    /* 00635700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635701: mov ebp, esp */ r_ebp = r_esp;
    /* 00635703: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635706: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635709: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063570d: jl 0x63574d */ if ((fS!=fO)) goto L_0063574d;
L_0063570f:; BB(0x0063570f);
    /* 0063570f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635713: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635716: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x63571bu); f_006352f0();
    /* 0063571b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063571d: je 0x63574d */ if (fZ) goto L_0063574d;
L_0063571f:; BB(0x0063571f);
    /* 0063571f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635723: je 0x63574d */ if (fZ) goto L_0063574d;
L_00635725:; BB(0x00635725);
    /* 00635725: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635728: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635729: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063572c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063572e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635731: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00635737: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635739u); call_ind(t); }
    /* 00635739: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063573c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063573f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635740: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635743: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635745: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635748: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0063574b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63574du); call_ind(t); }
L_0063574d:; BB(0x0063574d);
    /* 0063574d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063574f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635750: ret 8 */ FN_RET(0x00635700); r_esp += 12; return;
}

void f_00635760(void) /* CasinoShell::vfunc203 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635760);
    /* 00635760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635761: mov ebp, esp */ r_ebp = r_esp;
    /* 00635763: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635766: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635769: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063576d: jl 0x6357ad */ if ((fS!=fO)) goto L_006357ad;
L_0063576f:; BB(0x0063576f);
    /* 0063576f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635772: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635773: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635776: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x63577bu); f_006352f0();
    /* 0063577b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063577d: je 0x6357ad */ if (fZ) goto L_006357ad;
L_0063577f:; BB(0x0063577f);
    /* 0063577f: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635783: je 0x6357ad */ if (fZ) goto L_006357ad;
L_00635785:; BB(0x00635785);
    /* 00635785: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635788: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635789: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0063578c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0063578e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635791: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 00635797: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635799u); call_ind(t); }
    /* 00635799: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063579c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063579f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006357a0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006357a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006357a5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006357a8: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 006357ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6357adu); call_ind(t); }
L_006357ad:; BB(0x006357ad);
    /* 006357ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006357af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006357b0: ret 8 */ FN_RET(0x00635760); r_esp += 12; return;
}

void f_006357c0(void) /* CasinoShell::vfunc204 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006357c0);
    /* 006357c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006357c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006357c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006357c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006357c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006357cd: jl 0x63580d */ if ((fS!=fO)) goto L_0063580d;
L_006357cf:; BB(0x006357cf);
    /* 006357cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006357d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006357d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006357d6: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x6357dbu); f_006352f0();
    /* 006357db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006357dd: je 0x63580d */ if (fZ) goto L_0063580d;
L_006357df:; BB(0x006357df);
    /* 006357df: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006357e3: je 0x63580d */ if (fZ) goto L_0063580d;
L_006357e5:; BB(0x006357e5);
    /* 006357e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006357e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006357e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006357ec: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006357ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006357f1: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 006357f7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6357f9u); call_ind(t); }
    /* 006357f9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006357fc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006357ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635800: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635803: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635805: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635808: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0063580b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63580du); call_ind(t); }
L_0063580d:; BB(0x0063580d);
    /* 0063580d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063580f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635810: ret 8 */ FN_RET(0x006357c0); r_esp += 12; return;
}

void f_00635820(void) /* CasinoShell::vfunc208 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635820);
    /* 00635820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635821: mov ebp, esp */ r_ebp = r_esp;
    /* 00635823: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635826: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635829: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063582c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063582d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635830: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635832: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635835: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0063583b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63583du); call_ind(t); }
    /* 0063583d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00635840: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635843: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635845: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635848: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0063584b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63584du); call_ind(t); }
    /* 0063584d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063584f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635850: ret 4 */ FN_RET(0x00635820); r_esp += 8; return;
}

void f_00635860(void) /* CasinoShell::vfunc244 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635860);
    /* 00635860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635861: mov ebp, esp */ r_ebp = r_esp;
    /* 00635863: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635866: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00635869: cmp dword ptr [0x163069c], 0 */ {  u32 a = R32((u32)(0x163069cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635870: je 0x635894 */ if (fZ) goto L_00635894;
L_00635872:; BB(0x00635872);
    /* 00635872: mov eax, dword ptr [0x163069c] */ r_eax = R32((u32)(0x163069cu));
    /* 00635877: add eax, 0x1c0 */ {  u32 a = r_eax; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063587c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063587f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635882: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x635887u); f_0063aac0();
    /* 00635887: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00635889: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063588c: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635890: jne 0x635894 */ if (!fZ) goto L_00635894;
L_00635892:; BB(0x00635892);
    /* 00635892: jmp 0x635906 */ goto L_00635906;
L_00635894:; BB(0x00635894);
    /* 00635894: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063589b: jmp 0x6358a6 */ goto L_006358a6;
L_0063589d:; BB(0x0063589d);
    /* 0063589d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006358a0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006358a3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006358a6:; BB(0x006358a6);
    /* 006358a6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006358a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006358ab: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006358ae: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 006358b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6358b6u); call_ind(t); }
    /* 006358b6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006358b9: jge 0x635906 */ if ((fS==fO)) goto L_00635906;
L_006358bb:; BB(0x006358bb);
    /* 006358bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006358be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006358bf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006358c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006358c4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006358c7: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 006358cd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6358cfu); call_ind(t); }
    /* 006358cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006358d1: je 0x635904 */ if (fZ) goto L_00635904;
L_006358d3:; BB(0x006358d3);
    /* 006358d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006358d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006358d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006358da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006358dc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006358df: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 006358e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6358e7u); call_ind(t); }
    /* 006358e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006358ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006358ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006358ee: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006358f1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006358f3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006358f6: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 006358f9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6358fbu); call_ind(t); }
    /* 006358fb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006358fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635900: je 0x635904 */ if (fZ) goto L_00635904;
L_00635902:; BB(0x00635902);
    /* 00635902: jmp 0x635906 */ goto L_00635906;
L_00635904:; BB(0x00635904);
    /* 00635904: jmp 0x63589d */ goto L_0063589d;
L_00635906:; BB(0x00635906);
    /* 00635906: mov esp, ebp */ r_esp = r_ebp;
    /* 00635908: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635909: ret 4 */ FN_RET(0x00635860); r_esp += 8; return;
}

void f_00635910(void) /* CasinoShell::vfunc245 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635910);
    /* 00635910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635911: mov ebp, esp */ r_ebp = r_esp;
    /* 00635913: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635916: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00635919: cmp dword ptr [0x163069c], 0 */ {  u32 a = R32((u32)(0x163069cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635920: je 0x635944 */ if (fZ) goto L_00635944;
L_00635922:; BB(0x00635922);
    /* 00635922: mov eax, dword ptr [0x163069c] */ r_eax = R32((u32)(0x163069cu));
    /* 00635927: add eax, 0x1c0 */ {  u32 a = r_eax; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063592c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063592f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635932: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x635937u); f_0063aac0();
    /* 00635937: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00635939: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063593c: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635940: jne 0x635944 */ if (!fZ) goto L_00635944;
L_00635942:; BB(0x00635942);
    /* 00635942: jmp 0x635984 */ goto L_00635984;
L_00635944:; BB(0x00635944);
    /* 00635944: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00635947: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635948: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063594b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063594d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635950: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00635956: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635958u); call_ind(t); }
    /* 00635958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063595a: je 0x635984 */ if (fZ) goto L_00635984;
L_0063595c:; BB(0x0063595c);
    /* 0063595c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0063595f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635960: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635963: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635965: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00635968: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0063596e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635970u); call_ind(t); }
    /* 00635970: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00635973: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635977: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063597a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0063597c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063597f: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00635982: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635984u); call_ind(t); }
L_00635984:; BB(0x00635984);
    /* 00635984: mov esp, ebp */ r_esp = r_ebp;
    /* 00635986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635987: ret 8 */ FN_RET(0x00635910); r_esp += 12; return;
}

void f_00635990(void) /* CasinoShell::vfunc246 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635990);
    /* 00635990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635991: mov ebp, esp */ r_ebp = r_esp;
    /* 00635993: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635996: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00635999: cmp dword ptr [0x163069c], 0 */ {  u32 a = R32((u32)(0x163069cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006359a0: je 0x6359c4 */ if (fZ) goto L_006359c4;
L_006359a2:; BB(0x006359a2);
    /* 006359a2: mov eax, dword ptr [0x163069c] */ r_eax = R32((u32)(0x163069cu));
    /* 006359a7: add eax, 0x1c0 */ {  u32 a = r_eax; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006359ac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006359af: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006359b2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6359b7u); f_0063aac0();
    /* 006359b7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006359b9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006359bc: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006359c0: jne 0x6359c4 */ if (!fZ) goto L_006359c4;
L_006359c2:; BB(0x006359c2);
    /* 006359c2: jmp 0x635a36 */ goto L_00635a36;
L_006359c4:; BB(0x006359c4);
    /* 006359c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006359cb: jmp 0x6359d6 */ goto L_006359d6;
L_006359cd:; BB(0x006359cd);
    /* 006359cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006359d0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006359d3: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006359d6:; BB(0x006359d6);
    /* 006359d6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006359d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006359db: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006359de: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 006359e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6359e6u); call_ind(t); }
    /* 006359e6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006359e9: jge 0x635a36 */ if ((fS==fO)) goto L_00635a36;
L_006359eb:; BB(0x006359eb);
    /* 006359eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006359ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006359ef: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006359f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006359f4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006359f7: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 006359fd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6359ffu); call_ind(t); }
    /* 006359ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635a01: je 0x635a34 */ if (fZ) goto L_00635a34;
L_00635a03:; BB(0x00635a03);
    /* 00635a03: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635a07: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00635a0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635a0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00635a0f: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00635a15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635a17u); call_ind(t); }
    /* 00635a17: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00635a1a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635a1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635a1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00635a21: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635a23: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00635a26: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 00635a29: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635a2bu); call_ind(t); }
    /* 00635a2b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00635a2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635a30: je 0x635a34 */ if (fZ) goto L_00635a34;
L_00635a32:; BB(0x00635a32);
    /* 00635a32: jmp 0x635a36 */ goto L_00635a36;
L_00635a34:; BB(0x00635a34);
    /* 00635a34: jmp 0x6359cd */ goto L_006359cd;
L_00635a36:; BB(0x00635a36);
    /* 00635a36: mov esp, ebp */ r_esp = r_ebp;
    /* 00635a38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635a39: ret 8 */ FN_RET(0x00635990); r_esp += 12; return;
}

void f_00635ad0(void) /* CasinoShell::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635ad0);
    /* 00635ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00635ad3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635ad4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635ad7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635ada: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00635add: cmp dword ptr [ecx], 0 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635ae0: je 0x635af2 */ if (fZ) goto L_00635af2;
L_00635ae2:; BB(0x00635ae2);
    /* 00635ae2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635ae5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635ae7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635aea: mov edx, dword ptr [eax + 0x358] */ r_edx = R32((u32)(r_eax+0x358u));
    /* 00635af0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635af2u); call_ind(t); }
L_00635af2:; BB(0x00635af2);
    /* 00635af2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635af5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635af6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635af9: call 0x5f3b90 */ r_esp -= 4; W32(r_esp, 0x635afeu); f_005f3b90();
    /* 00635afe: mov esp, ebp */ r_esp = r_ebp;
    /* 00635b00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635b01: ret 4 */ FN_RET(0x00635ad0); r_esp += 8; return;
}

void f_00635b10(void) /* CasinoShell::vfunc36 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635b10);
    /* 00635b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00635b13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635b16: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00635b19: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00635b1e: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635b22: je 0x635b32 */ if (fZ) goto L_00635b32;
L_00635b24:; BB(0x00635b24);
    /* 00635b24: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00635b2a: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00635b2d: call 0x613da0 */ r_esp -= 4; W32(r_esp, 0x635b32u); f_00613da0();
L_00635b32:; BB(0x00635b32);
    /* 00635b32: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635b35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635b36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635b39: call 0x5f3c80 */ r_esp -= 4; W32(r_esp, 0x635b3eu); f_005f3c80();
    /* 00635b3e: mov dword ptr [0x162ee80], 0 */ W32((u32)(0x162ee80u), 0x0u);
    /* 00635b48: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635b4c: jne 0x635b53 */ if (!fZ) goto L_00635b53;
L_00635b4e:; BB(0x00635b4e);
    /* 00635b4e: jmp 0x635c33 */ goto L_00635c33;
L_00635b53:; BB(0x00635b53);
    /* 00635b53: cmp dword ptr [ebp + 8], 0x3e9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635b5a: je 0x635bb2 */ if (fZ) goto L_00635bb2;
L_00635b5c:; BB(0x00635b5c);
    /* 00635b5c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00635b61: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635b63: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00635b69: mov eax, dword ptr [edx + 0x154] */ r_eax = R32((u32)(r_edx+0x154u));
    /* 00635b6f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635b71u); call_ind(t); }
    /* 00635b71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635b73: je 0x635bb2 */ if (fZ) goto L_00635bb2;
L_00635b75:; BB(0x00635b75);
    /* 00635b75: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635b78: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00635b7b: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x635b80u); f_005f85d0();
    /* 00635b80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00635b82: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00635b88: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635b8a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00635b90: mov edx, dword ptr [eax + 0x154] */ r_edx = R32((u32)(r_eax+0x154u));
    /* 00635b96: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635b98u); call_ind(t); }
    /* 00635b98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635b99: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635b9c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00635b9f: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x635ba4u); f_005f83d0();
    /* 00635ba4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00635baa: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00635bad: call 0x613f80 */ r_esp -= 4; W32(r_esp, 0x635bb2u); f_00613f80();
L_00635bb2:; BB(0x00635bb2);
    /* 00635bb2: cmp dword ptr [ebp + 8], 0x3eb */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3ebu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635bb9: jne 0x635bd5 */ if (!fZ) goto L_00635bd5;
L_00635bbb:; BB(0x00635bbb);
    /* 00635bbb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635bbe: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x635bc3u); f_006375b0();
    /* 00635bc3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00635bc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635bc9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x635bceu); f_0063aac0();
    /* 00635bce: mov byte ptr [eax + 0x25d], 0 */ W8((u32)(r_eax+0x25du), 0x0u);
L_00635bd5:; BB(0x00635bd5);
    /* 00635bd5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635bd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635bd9: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00635bde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635be0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00635be6: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00635bec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635beeu); call_ind(t); }
    /* 00635bee: mov dword ptr [0x162ee80], eax */ W32((u32)(0x162ee80u), r_eax);
    /* 00635bf3: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635bfa: jne 0x635c20 */ if (!fZ) goto L_00635c20;
L_00635bfc:; BB(0x00635bfc);
    /* 00635bfc: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635c03: jne 0x635c1c */ if (!fZ) goto L_00635c1c;
L_00635c05:; BB(0x00635c05);
    /* 00635c05: push 0x725 */ { u32 v = 0x725u; r_esp -= 4; W32(r_esp, v); }
    /* 00635c0a: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00635c0f: push 0x6da5e4 */ { u32 v = 0x6da5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00635c14: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x635c19u); f_005e9f20();
    /* 00635c19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635c1c:; BB(0x00635c1c);
    /* 00635c1c: jmp 0x635c33 */ goto L_00635c33;
L_00635c20:; BB(0x00635c20);
    /* 00635c20: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 00635c26: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635c28: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00635c2e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00635c31: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635c33u); call_ind(t); }
L_00635c33:; BB(0x00635c33);
    /* 00635c33: mov esp, ebp */ r_esp = r_ebp;
    /* 00635c35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635c36: ret 4 */ FN_RET(0x00635b10); r_esp += 8; return;
}

void f_00635d00(void) /* CasinoShell::vfunc210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635d00);
    /* 00635d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00635d03: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00635d06: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635d09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635d0d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635d12: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d15: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00635d1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635d1du); call_ind(t); }
    /* 00635d1d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00635d20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635d22: je 0x635d67 */ if (fZ) goto L_00635d67;
L_00635d24:; BB(0x00635d24);
    /* 00635d24: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635d27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635d28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d2b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635d2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d30: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00635d36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635d38u); call_ind(t); }
    /* 00635d38: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00635d3b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635d3e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635d40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00635d43: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00635d46: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635d48u); call_ind(t); }
    /* 00635d48: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00635d4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635d4d: jne 0x635d65 */ if (!fZ) goto L_00635d65;
L_00635d4f:; BB(0x00635d4f);
    /* 00635d4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00635d51: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635d54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635d55: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d58: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00635d5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d5d: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 00635d63: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635d65u); call_ind(t); }
L_00635d65:; BB(0x00635d65);
    /* 00635d65: jmp 0x635d78 */ goto L_00635d78;
L_00635d67:; BB(0x00635d67);
    /* 00635d67: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635d6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635d6b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d6e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635d70: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635d73: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00635d76: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635d78u); call_ind(t); }
L_00635d78:; BB(0x00635d78);
    /* 00635d78: mov esp, ebp */ r_esp = r_ebp;
    /* 00635d7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635d7b: ret 4 */ FN_RET(0x00635d00); r_esp += 8; return;
}

void f_00635d80(void) /* CasinoShell::vfunc211 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635d80);
    /* 00635d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00635d83: mov eax, 0x1190 */ r_eax = 0x1190u;
    /* 00635d88: call 0x687340 */ r_esp -= 4; W32(r_esp, 0x635d8du); f_00687340();
    /* 00635d8d: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00635d92: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00635d94: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00635d97: mov dword ptr [ebp - 0x118c], ecx */ W32((u32)(r_ebp+0xffffee74u), r_ecx);
    /* 00635d9d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635da1: je 0x635dad */ if (fZ) goto L_00635dad;
L_00635da3:; BB(0x00635da3);
    /* 00635da3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635da6: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00635da9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635dab: jne 0x635db2 */ if (!fZ) goto L_00635db2;
L_00635dad:; BB(0x00635dad);
    /* 00635dad: jmp 0x635ee4 */ goto L_00635ee4;
L_00635db2:; BB(0x00635db2);
    /* 00635db2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635db5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635db6: lea eax, [ebp - 0x1070] */ r_eax = (u32)(r_ebp+0xffffef90u);
    /* 00635dbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635dbd: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x635dc2u); f_00686d8e();
    /* 00635dc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635dc5: push 0x6da624 */ { u32 v = 0x6da624u; r_esp -= 4; W32(r_esp, v); }
    /* 00635dca: lea ecx, [ebp - 0x1070] */ r_ecx = (u32)(r_ebp+0xffffef90u);
    /* 00635dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635dd1: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x635dd6u); f_00686ec6();
    /* 00635dd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635dd9: push 0x6da618 */ { u32 v = 0x6da618u; r_esp -= 4; W32(r_esp, v); }
    /* 00635dde: lea edx, [ebp - 0x1180] */ r_edx = (u32)(r_ebp+0xffffee80u);
    /* 00635de4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635de5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x635deau); f_00686d8e();
    /* 00635dea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635ded: push 0x6da610 */ { u32 v = 0x6da610u; r_esp -= 4; W32(r_esp, v); }
    /* 00635df2: lea eax, [ebp - 0x1180] */ r_eax = (u32)(r_ebp+0xffffee80u);
    /* 00635df8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635df9: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00635dff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635e01: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00635e07: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00635e0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635e0cu); call_ind(t); }
    /* 00635e0c: mov dword ptr [ebp - 0x1074], eax */ W32((u32)(r_ebp+0xffffef8cu), r_eax);
    /* 00635e12: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00635e14: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00635e17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635e18: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00635e1d: push 0x6da600 */ { u32 v = 0x6da600u; r_esp -= 4; W32(r_esp, v); }
    /* 00635e22: mov edx, dword ptr [ebp - 0x1074] */ r_edx = R32((u32)(r_ebp+0xffffef8cu));
    /* 00635e28: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635e2a: mov ecx, dword ptr [ebp - 0x1074] */ r_ecx = R32((u32)(r_ebp+0xffffef8cu));
    /* 00635e30: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00635e33: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635e35u); call_ind(t); }
    /* 00635e35: movsx eax, byte ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff90u));
    /* 00635e39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635e3b: jne 0x635e60 */ if (!fZ) goto L_00635e60;
L_00635e3d:; BB(0x00635e3d);
    /* 00635e3d: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00635e3f: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00635e42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635e43: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00635e48: push 0x6da5f4 */ { u32 v = 0x6da5f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00635e4d: mov edx, dword ptr [ebp - 0x1074] */ r_edx = R32((u32)(r_ebp+0xffffef8cu));
    /* 00635e53: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635e55: mov ecx, dword ptr [ebp - 0x1074] */ r_ecx = R32((u32)(r_ebp+0xffffef8cu));
    /* 00635e5b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00635e5e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x635e60u); call_ind(t); }
L_00635e60:; BB(0x00635e60);
    /* 00635e60: movsx eax, byte ptr [ebp - 0x70] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffff90u));
    /* 00635e64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635e66: jne 0x635e7e */ if (!fZ) goto L_00635e7e;
L_00635e68:; BB(0x00635e68);
    /* 00635e68: push 0x6da5ec */ { u32 v = 0x6da5ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00635e6d: lea ecx, [ebp - 0x1070] */ r_ecx = (u32)(r_ebp+0xffffef90u);
    /* 00635e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635e74: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x635e79u); f_00686ec6();
    /* 00635e79: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635e7c: jmp 0x635e91 */ goto L_00635e91;
L_00635e7e:; BB(0x00635e7e);
    /* 00635e7e: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 00635e81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635e82: lea eax, [ebp - 0x1070] */ r_eax = (u32)(r_ebp+0xffffef90u);
    /* 00635e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00635e89: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x635e8eu); f_00686ec6();
    /* 00635e8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635e91:; BB(0x00635e91);
    /* 00635e91: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00635e94: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635e95: call 0x5ea220 */ r_esp -= 4; W32(r_esp, 0x635e9au); f_005ea220();
    /* 00635e9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00635e9d: mov edx, dword ptr [ebp - 0x1074] */ r_edx = R32((u32)(r_ebp+0xffffef8cu));
    /* 00635ea3: mov dword ptr [ebp - 0x1188], edx */ W32((u32)(r_ebp+0xffffee78u), r_edx);
    /* 00635ea9: mov eax, dword ptr [ebp - 0x1188] */ r_eax = R32((u32)(r_ebp+0xffffee78u));
    /* 00635eaf: mov dword ptr [ebp - 0x1184], eax */ W32((u32)(r_ebp+0xffffee7cu), r_eax);
    /* 00635eb5: cmp dword ptr [ebp - 0x1184], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffee7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635ebc: je 0x635eda */ if (fZ) goto L_00635eda;
L_00635ebe:; BB(0x00635ebe);
    /* 00635ebe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00635ec0: mov ecx, dword ptr [ebp - 0x1184] */ r_ecx = R32((u32)(r_ebp+0xffffee7cu));
    /* 00635ec6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00635ec8: mov ecx, dword ptr [ebp - 0x1184] */ r_ecx = R32((u32)(r_ebp+0xffffee7cu));
    /* 00635ece: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00635ed0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x635ed2u); call_ind(t); }
    /* 00635ed2: mov dword ptr [ebp - 0x1190], eax */ W32((u32)(r_ebp+0xffffee70u), r_eax);
    /* 00635ed8: jmp 0x635ee4 */ goto L_00635ee4;
L_00635eda:; BB(0x00635eda);
    /* 00635eda: mov dword ptr [ebp - 0x1190], 0 */ W32((u32)(r_ebp+0xffffee70u), 0x0u);
L_00635ee4:; BB(0x00635ee4);
    /* 00635ee4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00635ee7: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00635ee9: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x635eeeu); f_00686d72();
    /* 00635eee: mov esp, ebp */ r_esp = r_ebp;
    /* 00635ef0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635ef1: ret 4 */ FN_RET(0x00635d80); r_esp += 8; return;
}

void f_00635f00(void) /* CasinoShell::vfunc212 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00635f00);
    /* 00635f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00635f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00635f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00635f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00635f07: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f0b: je 0x635f17 */ if (fZ) goto L_00635f17;
L_00635f0d:; BB(0x00635f0d);
    /* 00635f0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00635f10: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00635f13: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00635f15: jne 0x635f19 */ if (!fZ) goto L_00635f19;
L_00635f17:; BB(0x00635f17);
    /* 00635f17: jmp 0x635f25 */ goto L_00635f25;
L_00635f19:; BB(0x00635f19);
    /* 00635f19: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00635f1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00635f1d: call 0x5ea220 */ r_esp -= 4; W32(r_esp, 0x635f22u); f_005ea220();
    /* 00635f22: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00635f25:; BB(0x00635f25);
    /* 00635f25: mov esp, ebp */ r_esp = r_ebp;
    /* 00635f27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00635f28: ret 4 */ FN_RET(0x00635f00); r_esp += 8; return;
}

void f_00636a50(void) /* CasinoShell::vfunc220 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00636a50);
    /* 00636a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00636a53: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636a56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00636a59: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00636a60: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636a64: jg 0x636a6e */ if ((!fZ&&fS==fO)) goto L_00636a6e;
L_00636a66:; BB(0x00636a66);
    /* 00636a66: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00636a69: jmp 0x636c49 */ goto L_00636c49;
L_00636a6e:; BB(0x00636a6e);
    /* 00636a6e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636a71: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636a73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636a76: mov eax, dword ptr [edx + 0x374] */ r_eax = R32((u32)(r_edx+0x374u));
    /* 00636a7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636a7eu); call_ind(t); }
    /* 00636a7e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00636a81: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636a85: je 0x636a8f */ if (fZ) goto L_00636a8f;
L_00636a87:; BB(0x00636a87);
    /* 00636a87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636a8a: jmp 0x636c49 */ goto L_00636c49;
L_00636a8f:; BB(0x00636a8f);
    /* 00636a8f: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00636a96: jmp 0x636aa1 */ goto L_00636aa1;
L_00636a98:; BB(0x00636a98);
    /* 00636a98: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636a9b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00636a9e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00636aa1:; BB(0x00636aa1);
    /* 00636aa1: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00636aa7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00636aa9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636aaf: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 00636ab5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x636ab7u); call_ind(t); }
    /* 00636ab7: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636aba: jge 0x636b11 */ if ((fS==fO)) goto L_00636b11;
L_00636abc:; BB(0x00636abc);
    /* 00636abc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636abf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636ac0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636ac6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00636ac8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636ace: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 00636ad4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636ad6u); call_ind(t); }
    /* 00636ad6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00636ad9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636add: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636ae0: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x636ae5u); f_006375b0();
    /* 00636ae5: mov ecx, eax */ r_ecx = r_eax;
    /* 00636ae7: call 0x63b560 */ r_esp -= 4; W32(r_esp, 0x636aecu); f_0063b560();
    /* 00636aec: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00636aef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636af1: je 0x636b0f */ if (fZ) goto L_00636b0f;
L_00636af3:; BB(0x00636af3);
    /* 00636af3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636af7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636afa: call 0x6367d0 */ r_esp -= 4; W32(r_esp, 0x636affu); f_006367d0();
    /* 00636aff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636b02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636b04: jne 0x636b0f */ if (!fZ) goto L_00636b0f;
L_00636b06:; BB(0x00636b06);
    /* 00636b06: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636b09: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00636b0c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00636b0f:; BB(0x00636b0f);
    /* 00636b0f: jmp 0x636a98 */ goto L_00636a98;
L_00636b11:; BB(0x00636b11);
    /* 00636b11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00636b14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636b15: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x636b1au); f_0062fbf0();
    /* 00636b1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636b1d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00636b20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00636b23: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636b26: jge 0x636ba2 */ if ((fS==fO)) goto L_00636ba2;
L_00636b28:; BB(0x00636b28);
    /* 00636b28: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636b2c: je 0x636b9d */ if (fZ) goto L_00636b9d;
L_00636b2e:; BB(0x00636b2e);
    /* 00636b2e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00636b34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00636b36: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636b3c: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 00636b42: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x636b44u); call_ind(t); }
    /* 00636b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636b45: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x636b4au); f_0062fbf0();
    /* 00636b4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636b4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636b4e: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00636b53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636b55: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636b5b: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 00636b61: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636b63u); call_ind(t); }
    /* 00636b63: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00636b66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636b69: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636b6a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636b6d: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x636b72u); f_006375b0();
    /* 00636b72: mov ecx, eax */ r_ecx = r_eax;
    /* 00636b74: call 0x63b560 */ r_esp -= 4; W32(r_esp, 0x636b79u); f_0063b560();
    /* 00636b79: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00636b7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636b7e: je 0x636b9b */ if (fZ) goto L_00636b9b;
L_00636b80:; BB(0x00636b80);
    /* 00636b80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636b83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636b84: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636b87: call 0x6367d0 */ r_esp -= 4; W32(r_esp, 0x636b8cu); f_006367d0();
    /* 00636b8c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636b8f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636b91: jne 0x636b9b */ if (!fZ) goto L_00636b9b;
L_00636b93:; BB(0x00636b93);
    /* 00636b93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636b96: jmp 0x636c49 */ goto L_00636c49;
L_00636b9b:; BB(0x00636b9b);
    /* 00636b9b: jmp 0x636b28 */ goto L_00636b28;
L_00636b9d:; BB(0x00636b9d);
    /* 00636b9d: jmp 0x636c46 */ goto L_00636c46;
L_00636ba2:; BB(0x00636ba2);
    /* 00636ba2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00636ba8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00636baa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636bb0: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 00636bb6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x636bb8u); call_ind(t); }
    /* 00636bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636bb9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x636bbeu); f_0062fbf0();
    /* 00636bbe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636bc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636bc2: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00636bc7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636bc9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636bcf: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 00636bd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636bd7u); call_ind(t); }
    /* 00636bd7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00636bda:; BB(0x00636bda);
    /* 00636bda: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636bdd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00636bde: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636be1: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x636be6u); f_006375b0();
    /* 00636be6: mov ecx, eax */ r_ecx = r_eax;
    /* 00636be8: call 0x63b560 */ r_esp -= 4; W32(r_esp, 0x636bedu); f_0063b560();
    /* 00636bed: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00636bf0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636bf2: jne 0x636c07 */ if (!fZ) goto L_00636c07;
L_00636bf4:; BB(0x00636bf4);
    /* 00636bf4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636bf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636bf8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00636bfb: call 0x6367d0 */ r_esp -= 4; W32(r_esp, 0x636c00u); f_006367d0();
    /* 00636c00: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00636c03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636c05: je 0x636c41 */ if (fZ) goto L_00636c41;
L_00636c07:; BB(0x00636c07);
    /* 00636c07: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00636c0d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00636c0f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636c15: mov edx, dword ptr [eax + 0x168] */ r_edx = R32((u32)(r_eax+0x168u));
    /* 00636c1b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x636c1du); call_ind(t); }
    /* 00636c1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636c1e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x636c23u); f_0062fbf0();
    /* 00636c23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636c26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636c27: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00636c2c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00636c2e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00636c34: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 00636c3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x636c3cu); call_ind(t); }
    /* 00636c3c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00636c3f: jmp 0x636bda */ goto L_00636bda;
L_00636c41:; BB(0x00636c41);
    /* 00636c41: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00636c44: jmp 0x636c49 */ goto L_00636c49;
L_00636c46:; BB(0x00636c46);
    /* 00636c46: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00636c49:; BB(0x00636c49);
    /* 00636c49: mov esp, ebp */ r_esp = r_ebp;
    /* 00636c4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636c4c: ret 4 */ FN_RET(0x00636a50); r_esp += 8; return;
}

void f_00637550(void) /* CasinoShell::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637550);
    /* 00637550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637551: mov ebp, esp */ r_ebp = r_esp;
    /* 00637553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637557: cmp dword ptr [0x162ee80], 0 */ {  u32 a = R32((u32)(0x162ee80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063755e: je 0x63756f */ if (fZ) goto L_0063756f;
L_00637560:; BB(0x00637560);
    /* 00637560: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x637566u); call_ind(t); }
    /* 00637566: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0063756c: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
L_0063756f:; BB(0x0063756f);
    /* 0063756f: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00637572: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00637573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637574: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00637577: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0063757a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0063757b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 0063757e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00637581: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00637584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637585: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00637588: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637589: mov dl, byte ptr [ebp + 0x10] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0063758c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063758d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00637590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637591: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00637594: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637595: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637598: call 0x5f43e0 */ r_esp -= 4; W32(r_esp, 0x63759du); f_005f43e0();
    /* 0063759d: mov esp, ebp */ r_esp = r_ebp;
    /* 0063759f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006375a0: ret 0x20 */ FN_RET(0x00637550); r_esp += 36; return;
}

void f_00637700(void) /* CasinoShell::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637700);
    /* 00637700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637701: mov ebp, esp */ r_ebp = r_esp;
    /* 00637703: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637706: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00637709: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063770c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637711u); f_006375b0();
    /* 00637711: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637714: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637717: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63771cu); f_0063aac0();
    /* 0063771c: mov al, byte ptr [eax + 0x59] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x59u))) & 0xffu);
    /* 0063771f: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 00637722: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 00637725: mov esp, ebp */ r_esp = r_ebp;
    /* 00637727: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637728: ret  */ FN_RET(0x00637700); r_esp += 4; return;
}

void f_00637910(void) /* CasinoShell::vfunc226 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637910);
    /* 00637910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637911: mov ebp, esp */ r_ebp = r_esp;
    /* 00637913: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637916: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00637919: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0063791c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637921u); f_006375b0();
    /* 00637921: mov ecx, eax */ r_ecx = r_eax;
    /* 00637923: call 0x639f50 */ r_esp -= 4; W32(r_esp, 0x637928u); f_00639f50();
    /* 00637928: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063792b: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063792f: jne 0x637963 */ if (!fZ) goto L_00637963;
L_00637931:; BB(0x00637931);
    /* 00637931: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637934: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00637936: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637939: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0063793f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637941u); call_ind(t); }
    /* 00637941: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637942: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x637947u); f_0062fbf0();
    /* 00637947: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063794a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063794d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637950: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637951: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637954: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00637956: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00637959: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 0063795f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x637961u); call_ind(t); }
    /* 00637961: jmp 0x637966 */ goto L_00637966;
L_00637963:; BB(0x00637963);
    /* 00637963: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_00637966:; BB(0x00637966);
    /* 00637966: mov esp, ebp */ r_esp = r_ebp;
    /* 00637968: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637969: ret  */ FN_RET(0x00637910); r_esp += 4; return;
}

void f_00637970(void) /* CasinoShell::vfunc227 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637970);
    /* 00637970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637971: mov ebp, esp */ r_ebp = r_esp;
    /* 00637973: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637976: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00637979: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063797c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637981u); f_006375b0();
    /* 00637981: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637984: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637987: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x63798cu); f_0063aac0();
    /* 0063798c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0063798f: mov dword ptr [eax + 0x264], ecx */ W32((u32)(r_eax+0x264u), r_ecx);
    /* 00637995: mov esp, ebp */ r_esp = r_ebp;
    /* 00637997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637998: ret 4 */ FN_RET(0x00637970); r_esp += 8; return;
}

void f_006379a0(void) /* CasinoShell::vfunc228 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006379a0);
    /* 006379a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006379a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006379a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006379a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006379a9: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 006379ae: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006379b0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006379b6: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 006379bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6379beu); call_ind(t); }
    /* 006379be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006379c0: je 0x6379da */ if (fZ) goto L_006379da;
L_006379c2:; BB(0x006379c2);
    /* 006379c2: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006379c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006379ca: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006379d0: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 006379d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6379d8u); call_ind(t); }
    /* 006379d8: jmp 0x6379e9 */ goto L_006379e9;
L_006379da:; BB(0x006379da);
    /* 006379da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006379dd: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x6379e2u); f_006375b0();
    /* 006379e2: mov ecx, eax */ r_ecx = r_eax;
    /* 006379e4: call 0x639fa0 */ r_esp -= 4; W32(r_esp, 0x6379e9u); f_00639fa0();
L_006379e9:; BB(0x006379e9);
    /* 006379e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006379eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006379ec: ret  */ FN_RET(0x006379a0); r_esp += 4; return;
}

void f_006379f0(void) /* CasinoShell::vfunc229 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006379f0);
    /* 006379f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006379f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006379f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006379f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006379f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006379fc: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637a01u); f_006375b0();
    /* 00637a01: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637a04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637a07: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x637a0cu); f_0063aac0();
    /* 00637a0c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00637a0f: mov dword ptr [eax + 0x36c], ecx */ W32((u32)(r_eax+0x36cu), r_ecx);
    /* 00637a15: mov esp, ebp */ r_esp = r_ebp;
    /* 00637a17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637a18: ret 4 */ FN_RET(0x006379f0); r_esp += 8; return;
}

void f_00637a20(void) /* CasinoShell::vfunc230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637a20);
    /* 00637a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00637a23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637a26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00637a29: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637a2c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637a31u); f_006375b0();
    /* 00637a31: mov ecx, eax */ r_ecx = r_eax;
    /* 00637a33: call 0x639ff0 */ r_esp -= 4; W32(r_esp, 0x637a38u); f_00639ff0();
    /* 00637a38: mov esp, ebp */ r_esp = r_ebp;
    /* 00637a3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637a3b: ret  */ FN_RET(0x00637a20); r_esp += 4; return;
}

void f_00637a40(void) /* CasinoShell::vfunc231 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637a40);
    /* 00637a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00637a43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637a46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00637a49: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637a4c: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637a51u); f_006375b0();
    /* 00637a51: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637a54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637a57: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x637a5cu); f_0063aac0();
    /* 00637a5c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00637a5f: mov dword ptr [eax + 0x370], ecx */ W32((u32)(r_eax+0x370u), r_ecx);
    /* 00637a65: mov esp, ebp */ r_esp = r_ebp;
    /* 00637a67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637a68: ret 4 */ FN_RET(0x00637a40); r_esp += 8; return;
}

void f_00637a70(void) /* CasinoShell::vfunc232 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637a70);
    /* 00637a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00637a73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637a76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00637a79: movzx eax, byte ptr [0x795f94] */ r_eax = (u32)R8((u32)(0x795f94u));
    /* 00637a80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637a82: je 0x637a96 */ if (fZ) goto L_00637a96;
L_00637a84:; BB(0x00637a84);
    /* 00637a84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637a87: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00637a89: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637a8c: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00637a92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637a94u); call_ind(t); }
    /* 00637a94: jmp 0x637ac4 */ goto L_00637ac4;
L_00637a96:; BB(0x00637a96);
    /* 00637a96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637a99: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637a9eu); f_006375b0();
    /* 00637a9e: mov ecx, eax */ r_ecx = r_eax;
    /* 00637aa0: call 0x63a040 */ r_esp -= 4; W32(r_esp, 0x637aa5u); f_0063a040();
    /* 00637aa5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637aa8: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637aac: jne 0x637ac1 */ if (!fZ) goto L_00637ac1;
L_00637aae:; BB(0x00637aae);
    /* 00637aae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637ab1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00637ab3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637ab6: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00637abc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637abeu); call_ind(t); }
    /* 00637abe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00637ac1:; BB(0x00637ac1);
    /* 00637ac1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00637ac4:; BB(0x00637ac4);
    /* 00637ac4: mov esp, ebp */ r_esp = r_ebp;
    /* 00637ac6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637ac7: ret  */ FN_RET(0x00637a70); r_esp += 4; return;
}

void f_00637ad0(void) /* CasinoShell::vfunc233 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637ad0);
    /* 00637ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 00637ad3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637ad6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00637ad9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637adc: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x637ae1u); f_006375b0();
    /* 00637ae1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637ae4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637ae7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x637aecu); f_0063aac0();
    /* 00637aec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00637aef: mov dword ptr [eax + 0x374], ecx */ W32((u32)(r_eax+0x374u), r_ecx);
    /* 00637af5: mov esp, ebp */ r_esp = r_ebp;
    /* 00637af7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637af8: ret 4 */ FN_RET(0x00637ad0); r_esp += 8; return;
}

void f_00637b00(void) /* CasinoShell::vfunc97 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637b00);
    /* 00637b00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637b01: mov ebp, esp */ r_ebp = r_esp;
    /* 00637b03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637b06: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00637b09: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637b0c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00637b0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637b11: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 00637b17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637b19u); call_ind(t); }
    /* 00637b19: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637b1c: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00637b23: jmp 0x637b2e */ goto L_00637b2e;
L_00637b25:; BB(0x00637b25);
    /* 00637b25: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637b28: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637b2b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00637b2e:; BB(0x00637b2e);
    /* 00637b2e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637b31: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637b34: jge 0x637b56 */ if ((fS==fO)) goto L_00637b56;
L_00637b36:; BB(0x00637b36);
    /* 00637b36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637b39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637b3a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637b3d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00637b3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637b42: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 00637b48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637b4au); call_ind(t); }
    /* 00637b4a: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637b4d: jne 0x637b54 */ if (!fZ) goto L_00637b54;
L_00637b4f:; BB(0x00637b4f);
    /* 00637b4f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637b52: jmp 0x637b73 */ goto L_00637b73;
L_00637b54:; BB(0x00637b54);
    /* 00637b54: jmp 0x637b25 */ goto L_00637b25;
L_00637b56:; BB(0x00637b56);
    /* 00637b56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00637b58: jne 0x637b71 */ if (!fZ) goto L_00637b71;
L_00637b5a:; BB(0x00637b5a);
    /* 00637b5a: push 0xa69 */ { u32 v = 0xa69u; r_esp -= 4; W32(r_esp, v); }
    /* 00637b5f: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00637b64: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00637b69: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x637b6eu); f_005e9f20();
    /* 00637b6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00637b71:; BB(0x00637b71);
    /* 00637b71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00637b73:; BB(0x00637b73);
    /* 00637b73: mov esp, ebp */ r_esp = r_ebp;
    /* 00637b75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637b76: ret 4 */ FN_RET(0x00637b00); r_esp += 8; return;
}

void f_00637b80(void) /* CasinoShell::vfunc100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637b80);
    /* 00637b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00637b83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637b86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637b89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00637b8c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00637b8f: cmp dword ptr [ebp - 8], 0x24b47c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x24b47cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637b96: jg 0x637bc5 */ if ((!fZ&&fS==fO)) goto L_00637bc5;
L_00637b98:; BB(0x00637b98);
    /* 00637b98: cmp dword ptr [ebp - 8], 0x24b47c */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x24b47cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637b9f: je 0x637ce7 */ if (fZ) goto L_00637ce7;
L_00637ba5:; BB(0x00637ba5);
    /* 00637ba5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637ba8: sub ecx, 0x24b288 */ {  u32 a = r_ecx; u32 b = 0x24b288u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00637bae: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00637bb1: cmp dword ptr [ebp - 8], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00637bb5: ja 0x637d50 */ if ((!fC&&!fZ)) goto L_00637d50;
L_00637bbb:; BB(0x00637bbb);
    /* 00637bbb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637bbe: jmp dword ptr [edx*4 + 0x637d74] */ { u32 t = R32((u32)(r_edx*4+0x637d74u)); switch (t) { case 0x637c7bu: goto L_00637c7b; case 0x637c69u: goto L_00637c69; case 0x637c0fu: goto L_00637c0f; case 0x637bfdu: goto L_00637bfd; case 0x637bebu: goto L_00637beb; case 0x637c33u: goto L_00637c33; case 0x637c21u: goto L_00637c21; case 0x637c45u: goto L_00637c45; case 0x637c57u: goto L_00637c57; case 0x637d50u: goto L_00637d50; case 0x637c8du: goto L_00637c8d; case 0x637c9fu: goto L_00637c9f; case 0x637cb1u: goto L_00637cb1; case 0x637cc3u: goto L_00637cc3; case 0x637cd5u: goto L_00637cd5; case 0x637cf6u: goto L_00637cf6; case 0x637d05u: goto L_00637d05; case 0x637d14u: goto L_00637d14; case 0x637d23u: goto L_00637d23; case 0x637d32u: goto L_00637d32; case 0x637d41u: goto L_00637d41; default: UNSUP(0x00637bbe, "jump table entry is not a known target"); } }
L_00637bc5:; BB(0x00637bc5);
    /* 00637bc5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637bc8: sub eax, 0x24b486 */ {  u32 a = r_eax; u32 b = 0x24b486u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00637bcd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00637bd0: cmp dword ptr [ebp - 8], 0x46 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00637bd4: ja 0x637d50 */ if ((!fC&&!fZ)) goto L_00637d50;
L_00637bda:; BB(0x00637bda);
    /* 00637bda: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637bdd: movzx edx, byte ptr [ecx + 0x637de0] */ r_edx = (u32)R8((u32)(r_ecx+0x637de0u));
    /* 00637be4: jmp dword ptr [edx*4 + 0x637dc4] */ { u32 t = R32((u32)(r_edx*4+0x637dc4u)); switch (t) { case 0x637cd5u: goto L_00637cd5; case 0x637cc3u: goto L_00637cc3; case 0x637cb1u: goto L_00637cb1; case 0x637c9fu: goto L_00637c9f; case 0x637c8du: goto L_00637c8d; case 0x637d50u: goto L_00637d50; case 0x637c57u: goto L_00637c57; case 0x637c45u: goto L_00637c45; case 0x637c21u: goto L_00637c21; case 0x637c33u: goto L_00637c33; case 0x637bebu: goto L_00637beb; case 0x637bfdu: goto L_00637bfd; case 0x637c0fu: goto L_00637c0f; case 0x637c69u: goto L_00637c69; case 0x637c7bu: goto L_00637c7b; case 0x637cf6u: goto L_00637cf6; case 0x637d05u: goto L_00637d05; case 0x637d14u: goto L_00637d14; case 0x637d23u: goto L_00637d23; case 0x637d32u: goto L_00637d32; case 0x637d41u: goto L_00637d41; default: UNSUP(0x00637be4, "jump table entry is not a known target"); } }
L_00637beb:; BB(0x00637beb);
    /* 00637beb: push 0x6da914 */ { u32 v = 0x6da914u; r_esp -= 4; W32(r_esp, v); }
    /* 00637bf0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637bf5u); f_00630f40();
    /* 00637bf5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637bf8: jmp 0x637d6d */ goto L_00637d6d;
L_00637bfd:; BB(0x00637bfd);
    /* 00637bfd: push 0x6da8f0 */ { u32 v = 0x6da8f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c02: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c07u); f_00630f40();
    /* 00637c07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c0a: jmp 0x637d6d */ goto L_00637d6d;
L_00637c0f:; BB(0x00637c0f);
    /* 00637c0f: push 0x6da8d0 */ { u32 v = 0x6da8d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c14: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c19u); f_00630f40();
    /* 00637c19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c1c: jmp 0x637d6d */ goto L_00637d6d;
L_00637c21:; BB(0x00637c21);
    /* 00637c21: push 0x6da8a8 */ { u32 v = 0x6da8a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c26: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c2bu); f_00630f40();
    /* 00637c2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c2e: jmp 0x637d6d */ goto L_00637d6d;
L_00637c33:; BB(0x00637c33);
    /* 00637c33: push 0x6da884 */ { u32 v = 0x6da884u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c38: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c3du); f_00630f40();
    /* 00637c3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c40: jmp 0x637d6d */ goto L_00637d6d;
L_00637c45:; BB(0x00637c45);
    /* 00637c45: push 0x6da860 */ { u32 v = 0x6da860u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c4fu); f_00630f40();
    /* 00637c4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c52: jmp 0x637d6d */ goto L_00637d6d;
L_00637c57:; BB(0x00637c57);
    /* 00637c57: push 0x6da840 */ { u32 v = 0x6da840u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c5c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c61u); f_00630f40();
    /* 00637c61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c64: jmp 0x637d6d */ goto L_00637d6d;
L_00637c69:; BB(0x00637c69);
    /* 00637c69: push 0x6da820 */ { u32 v = 0x6da820u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c6e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c73u); f_00630f40();
    /* 00637c73: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c76: jmp 0x637d6d */ goto L_00637d6d;
L_00637c7b:; BB(0x00637c7b);
    /* 00637c7b: push 0x6da7fc */ { u32 v = 0x6da7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00637c80: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c85u); f_00630f40();
    /* 00637c85: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c88: jmp 0x637d6d */ goto L_00637d6d;
L_00637c8d:; BB(0x00637c8d);
    /* 00637c8d: push 0x6da7d8 */ { u32 v = 0x6da7d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c92: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637c97u); f_00630f40();
    /* 00637c97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637c9a: jmp 0x637d6d */ goto L_00637d6d;
L_00637c9f:; BB(0x00637c9f);
    /* 00637c9f: push 0x6da7b0 */ { u32 v = 0x6da7b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00637ca4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637ca9u); f_00630f40();
    /* 00637ca9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637cac: jmp 0x637d6d */ goto L_00637d6d;
L_00637cb1:; BB(0x00637cb1);
    /* 00637cb1: push 0x6da788 */ { u32 v = 0x6da788u; r_esp -= 4; W32(r_esp, v); }
    /* 00637cb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637cbbu); f_00630f40();
    /* 00637cbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637cbe: jmp 0x637d6d */ goto L_00637d6d;
L_00637cc3:; BB(0x00637cc3);
    /* 00637cc3: push 0x6da764 */ { u32 v = 0x6da764u; r_esp -= 4; W32(r_esp, v); }
    /* 00637cc8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637ccdu); f_00630f40();
    /* 00637ccd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637cd0: jmp 0x637d6d */ goto L_00637d6d;
L_00637cd5:; BB(0x00637cd5);
    /* 00637cd5: push 0x6da744 */ { u32 v = 0x6da744u; r_esp -= 4; W32(r_esp, v); }
    /* 00637cda: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637cdfu); f_00630f40();
    /* 00637cdf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637ce2: jmp 0x637d6d */ goto L_00637d6d;
L_00637ce7:; BB(0x00637ce7);
    /* 00637ce7: push 0x6da720 */ { u32 v = 0x6da720u; r_esp -= 4; W32(r_esp, v); }
    /* 00637cec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637cf1u); f_00630f40();
    /* 00637cf1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637cf4: jmp 0x637d6d */ goto L_00637d6d;
L_00637cf6:; BB(0x00637cf6);
    /* 00637cf6: push 0x6da6fc */ { u32 v = 0x6da6fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00637cfb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637d00u); f_00630f40();
    /* 00637d00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637d03: jmp 0x637d6d */ goto L_00637d6d;
L_00637d05:; BB(0x00637d05);
    /* 00637d05: push 0x6da6d4 */ { u32 v = 0x6da6d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00637d0a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637d0fu); f_00630f40();
    /* 00637d0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637d12: jmp 0x637d6d */ goto L_00637d6d;
L_00637d14:; BB(0x00637d14);
    /* 00637d14: push 0x6da6ac */ { u32 v = 0x6da6acu; r_esp -= 4; W32(r_esp, v); }
    /* 00637d19: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637d1eu); f_00630f40();
    /* 00637d1e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637d21: jmp 0x637d6d */ goto L_00637d6d;
L_00637d23:; BB(0x00637d23);
    /* 00637d23: push 0x6da684 */ { u32 v = 0x6da684u; r_esp -= 4; W32(r_esp, v); }
    /* 00637d28: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637d2du); f_00630f40();
    /* 00637d2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637d30: jmp 0x637d6d */ goto L_00637d6d;
L_00637d32:; BB(0x00637d32);
    /* 00637d32: push 0x6da65c */ { u32 v = 0x6da65cu; r_esp -= 4; W32(r_esp, v); }
    /* 00637d37: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637d3cu); f_00630f40();
    /* 00637d3c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637d3f: jmp 0x637d6d */ goto L_00637d6d;
L_00637d41:; BB(0x00637d41);
    /* 00637d41: push 0x6da638 */ { u32 v = 0x6da638u; r_esp -= 4; W32(r_esp, v); }
    /* 00637d46: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637d4bu); f_00630f40();
    /* 00637d4b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637d4e: jmp 0x637d6d */ goto L_00637d6d;
L_00637d50:; BB(0x00637d50);
    /* 00637d50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00637d52: jne 0x637d6b */ if (!fZ) goto L_00637d6b;
L_00637d54:; BB(0x00637d54);
    /* 00637d54: push 0xa88 */ { u32 v = 0xa88u; r_esp -= 4; W32(r_esp, v); }
    /* 00637d59: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00637d5e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00637d63: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x637d68u); f_005e9f20();
    /* 00637d68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00637d6b:; BB(0x00637d6b);
    /* 00637d6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00637d6d:; BB(0x00637d6d);
    /* 00637d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00637d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637d70: ret 4 */ FN_RET(0x00637b80); r_esp += 8; return;
}

void f_00637e30(void) /* CasinoShell::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637e30);
    /* 00637e30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637e31: mov ebp, esp */ r_ebp = r_esp;
    /* 00637e33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637e34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637e37: mov eax, dword ptr [0x762278] */ r_eax = R32((u32)(0x762278u));
    /* 00637e3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00637e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637e3f: ret  */ FN_RET(0x00637e30); r_esp += 4; return;
}

void f_00637e40(void) /* CasinoShell::vfunc102 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637e40);
    /* 00637e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00637e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00637e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637e47: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637e4b: jl 0x637e6e */ if ((fS!=fO)) goto L_00637e6e;
L_00637e4d:; BB(0x00637e4d);
    /* 00637e4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637e50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00637e52: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00637e55: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00637e5b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637e5du); call_ind(t); }
    /* 00637e5d: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637e60: jge 0x637e6e */ if ((fS==fO)) goto L_00637e6e;
L_00637e62:; BB(0x00637e62);
    /* 00637e62: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00637e65: mov eax, dword ptr [ecx*4 + 0x762178] */ r_eax = R32((u32)(r_ecx*4+0x762178u));
    /* 00637e6c: jmp 0x637e8b */ goto L_00637e8b;
L_00637e6e:; BB(0x00637e6e);
    /* 00637e6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00637e70: jne 0x637e89 */ if (!fZ) goto L_00637e89;
L_00637e72:; BB(0x00637e72);
    /* 00637e72: push 0xa9b */ { u32 v = 0xa9bu; r_esp -= 4; W32(r_esp, v); }
    /* 00637e77: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00637e7c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00637e81: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x637e86u); f_005e9f20();
    /* 00637e86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00637e89:; BB(0x00637e89);
    /* 00637e89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00637e8b:; BB(0x00637e8b);
    /* 00637e8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00637e8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637e8e: ret 4 */ FN_RET(0x00637e40); r_esp += 8; return;
}

void f_00637ea0(void) /* CasinoShell::vfunc103 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637ea0);
    /* 00637ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00637ea3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637ea6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00637ea7: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00637eaa: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637ead: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00637eaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637eb2: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00637eb8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637ebau); call_ind(t); }
    /* 00637eba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00637ebd: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00637ec4: jmp 0x637ecf */ goto L_00637ecf;
L_00637ec6:; BB(0x00637ec6);
    /* 00637ec6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637ec9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00637ecc: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00637ecf:; BB(0x00637ecf);
    /* 00637ecf: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637ed2: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637ed5: jge 0x637efa */ if ((fS==fO)) goto L_00637efa;
L_00637ed7:; BB(0x00637ed7);
    /* 00637ed7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637edb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637ede: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00637ee0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637ee3: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00637ee9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637eebu); call_ind(t); }
    /* 00637eeb: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637eee: jne 0x637ef8 */ if (!fZ) goto L_00637ef8;
L_00637ef0:; BB(0x00637ef0);
    /* 00637ef0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637ef3: jmp 0x637f7d */ goto L_00637f7d;
L_00637ef8:; BB(0x00637ef8);
    /* 00637ef8: jmp 0x637ec6 */ goto L_00637ec6;
L_00637efa:; BB(0x00637efa);
    /* 00637efa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00637efc: jne 0x637f15 */ if (!fZ) goto L_00637f15;
L_00637efe:; BB(0x00637efe);
    /* 00637efe: push 0xaaa */ { u32 v = 0xaaau; r_esp -= 4; W32(r_esp, v); }
    /* 00637f03: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00637f08: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00637f0d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x637f12u); f_005e9f20();
    /* 00637f12: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00637f15:; BB(0x00637f15);
    /* 00637f15: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00637f1c: jmp 0x637f27 */ goto L_00637f27;
L_00637f1e:; BB(0x00637f1e);
    /* 00637f1e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637f21: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00637f24: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00637f27:; BB(0x00637f27);
    /* 00637f27: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637f2a: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637f2d: jge 0x637f60 */ if ((fS==fO)) goto L_00637f60;
L_00637f2f:; BB(0x00637f2f);
    /* 00637f2f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637f32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00637f33: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637f36: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00637f38: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637f3b: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00637f41: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637f43u); call_ind(t); }
    /* 00637f43: mov esi, eax */ r_esi = r_eax;
    /* 00637f45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637f48: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00637f4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637f4d: mov eax, dword ptr [edx + 0x1a0] */ r_eax = R32((u32)(r_edx+0x1a0u));
    /* 00637f53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x637f55u); call_ind(t); }
    /* 00637f55: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637f57: jne 0x637f5e */ if (!fZ) goto L_00637f5e;
L_00637f59:; BB(0x00637f59);
    /* 00637f59: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637f5c: jmp 0x637f7d */ goto L_00637f7d;
L_00637f5e:; BB(0x00637f5e);
    /* 00637f5e: jmp 0x637f1e */ goto L_00637f1e;
L_00637f60:; BB(0x00637f60);
    /* 00637f60: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00637f62: jne 0x637f7b */ if (!fZ) goto L_00637f7b;
L_00637f64:; BB(0x00637f64);
    /* 00637f64: push 0xab0 */ { u32 v = 0xab0u; r_esp -= 4; W32(r_esp, v); }
    /* 00637f69: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00637f6e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00637f73: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x637f78u); f_005e9f20();
    /* 00637f78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00637f7b:; BB(0x00637f7b);
    /* 00637f7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00637f7d:; BB(0x00637f7d);
    /* 00637f7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00637f7e: mov esp, ebp */ r_esp = r_ebp;
    /* 00637f80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637f81: ret 4 */ FN_RET(0x00637ea0); r_esp += 8; return;
}

void f_00637f90(void) /* CasinoShell::vfunc106 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00637f90);
    /* 00637f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00637f93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637f96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00637f99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00637f9c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00637f9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637fa2: sub ecx, 0x301330 */ {  u32 a = r_ecx; u32 b = 0x301330u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00637fa8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00637fab: cmp dword ptr [ebp - 8], 0x83 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x83u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00637fb2: ja 0x638434 */ if ((!fC&&!fZ)) goto L_00638434;
L_00637fb8:; BB(0x00637fb8);
    /* 00637fb8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00637fbb: movzx eax, byte ptr [edx + 0x63855c] */ r_eax = (u32)R8((u32)(r_edx+0x63855cu));
    /* 00637fc2: jmp dword ptr [eax*4 + 0x638458] */ { u32 t = R32((u32)(r_eax*4+0x638458u)); switch (t) { case 0x637fc9u: goto L_00637fc9; case 0x637fdbu: goto L_00637fdb; case 0x637fedu: goto L_00637fed; case 0x637fffu: goto L_00637fff; case 0x638011u: goto L_00638011; case 0x638023u: goto L_00638023; case 0x638035u: goto L_00638035; case 0x638047u: goto L_00638047; case 0x638059u: goto L_00638059; case 0x63806bu: goto L_0063806b; case 0x63807du: goto L_0063807d; case 0x63808fu: goto L_0063808f; case 0x6380a1u: goto L_006380a1; case 0x6380b3u: goto L_006380b3; case 0x6380c5u: goto L_006380c5; case 0x6380d7u: goto L_006380d7; case 0x6380e9u: goto L_006380e9; case 0x6380fbu: goto L_006380fb; case 0x63810du: goto L_0063810d; case 0x63811fu: goto L_0063811f; case 0x638131u: goto L_00638131; case 0x638143u: goto L_00638143; case 0x638155u: goto L_00638155; case 0x638167u: goto L_00638167; case 0x638179u: goto L_00638179; case 0x63818bu: goto L_0063818b; case 0x63819du: goto L_0063819d; case 0x6381afu: goto L_006381af; case 0x6381c1u: goto L_006381c1; case 0x6381d3u: goto L_006381d3; case 0x6381e5u: goto L_006381e5; case 0x6381f7u: goto L_006381f7; case 0x638209u: goto L_00638209; case 0x63821bu: goto L_0063821b; case 0x63822du: goto L_0063822d; case 0x63823fu: goto L_0063823f; case 0x638251u: goto L_00638251; case 0x638263u: goto L_00638263; case 0x638275u: goto L_00638275; case 0x638287u: goto L_00638287; case 0x638299u: goto L_00638299; case 0x6382abu: goto L_006382ab; case 0x6382bdu: goto L_006382bd; case 0x6382cfu: goto L_006382cf; case 0x6382e1u: goto L_006382e1; case 0x6382f3u: goto L_006382f3; case 0x638305u: goto L_00638305; case 0x638317u: goto L_00638317; case 0x638329u: goto L_00638329; case 0x63833bu: goto L_0063833b; case 0x63834du: goto L_0063834d; case 0x63835fu: goto L_0063835f; case 0x638371u: goto L_00638371; case 0x638383u: goto L_00638383; case 0x638395u: goto L_00638395; case 0x6383a7u: goto L_006383a7; case 0x6383b9u: goto L_006383b9; case 0x6383cbu: goto L_006383cb; case 0x6383dau: goto L_006383da; case 0x6383e9u: goto L_006383e9; case 0x6383f8u: goto L_006383f8; case 0x638407u: goto L_00638407; case 0x638416u: goto L_00638416; case 0x638425u: goto L_00638425; case 0x638434u: goto L_00638434; default: UNSUP(0x00637fc2, "jump table entry is not a known target"); } }
L_00637fc9:; BB(0x00637fc9);
    /* 00637fc9: push 0x6db1ec */ { u32 v = 0x6db1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00637fce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637fd3u); f_00630f40();
    /* 00637fd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637fd6: jmp 0x638451 */ goto L_00638451;
L_00637fdb:; BB(0x00637fdb);
    /* 00637fdb: push 0x6db1cc */ { u32 v = 0x6db1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00637fe0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637fe5u); f_00630f40();
    /* 00637fe5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637fe8: jmp 0x638451 */ goto L_00638451;
L_00637fed:; BB(0x00637fed);
    /* 00637fed: push 0x6db1a8 */ { u32 v = 0x6db1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00637ff2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x637ff7u); f_00630f40();
    /* 00637ff7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637ffa: jmp 0x638451 */ goto L_00638451;
L_00637fff:; BB(0x00637fff);
    /* 00637fff: push 0x6db184 */ { u32 v = 0x6db184u; r_esp -= 4; W32(r_esp, v); }
    /* 00638004: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638009u); f_00630f40();
    /* 00638009: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063800c: jmp 0x638451 */ goto L_00638451;
L_00638011:; BB(0x00638011);
    /* 00638011: push 0x6db168 */ { u32 v = 0x6db168u; r_esp -= 4; W32(r_esp, v); }
    /* 00638016: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63801bu); f_00630f40();
    /* 0063801b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063801e: jmp 0x638451 */ goto L_00638451;
L_00638023:; BB(0x00638023);
    /* 00638023: push 0x6db148 */ { u32 v = 0x6db148u; r_esp -= 4; W32(r_esp, v); }
    /* 00638028: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63802du); f_00630f40();
    /* 0063802d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638030: jmp 0x638451 */ goto L_00638451;
L_00638035:; BB(0x00638035);
    /* 00638035: push 0x6db124 */ { u32 v = 0x6db124u; r_esp -= 4; W32(r_esp, v); }
    /* 0063803a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63803fu); f_00630f40();
    /* 0063803f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638042: jmp 0x638451 */ goto L_00638451;
L_00638047:; BB(0x00638047);
    /* 00638047: push 0x6db104 */ { u32 v = 0x6db104u; r_esp -= 4; W32(r_esp, v); }
    /* 0063804c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638051u); f_00630f40();
    /* 00638051: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638054: jmp 0x638451 */ goto L_00638451;
L_00638059:; BB(0x00638059);
    /* 00638059: push 0x6db0e0 */ { u32 v = 0x6db0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063805e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638063u); f_00630f40();
    /* 00638063: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638066: jmp 0x638451 */ goto L_00638451;
L_0063806b:; BB(0x0063806b);
    /* 0063806b: push 0x6db0bc */ { u32 v = 0x6db0bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00638070: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638075u); f_00630f40();
    /* 00638075: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638078: jmp 0x638451 */ goto L_00638451;
L_0063807d:; BB(0x0063807d);
    /* 0063807d: push 0x6db098 */ { u32 v = 0x6db098u; r_esp -= 4; W32(r_esp, v); }
    /* 00638082: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638087u); f_00630f40();
    /* 00638087: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063808a: jmp 0x638451 */ goto L_00638451;
L_0063808f:; BB(0x0063808f);
    /* 0063808f: push 0x6db078 */ { u32 v = 0x6db078u; r_esp -= 4; W32(r_esp, v); }
    /* 00638094: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638099u); f_00630f40();
    /* 00638099: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063809c: jmp 0x638451 */ goto L_00638451;
L_006380a1:; BB(0x006380a1);
    /* 006380a1: push 0x6db058 */ { u32 v = 0x6db058u; r_esp -= 4; W32(r_esp, v); }
    /* 006380a6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6380abu); f_00630f40();
    /* 006380ab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006380ae: jmp 0x638451 */ goto L_00638451;
L_006380b3:; BB(0x006380b3);
    /* 006380b3: push 0x6db038 */ { u32 v = 0x6db038u; r_esp -= 4; W32(r_esp, v); }
    /* 006380b8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6380bdu); f_00630f40();
    /* 006380bd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006380c0: jmp 0x638451 */ goto L_00638451;
L_006380c5:; BB(0x006380c5);
    /* 006380c5: push 0x6db018 */ { u32 v = 0x6db018u; r_esp -= 4; W32(r_esp, v); }
    /* 006380ca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6380cfu); f_00630f40();
    /* 006380cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006380d2: jmp 0x638451 */ goto L_00638451;
L_006380d7:; BB(0x006380d7);
    /* 006380d7: push 0x6daff4 */ { u32 v = 0x6daff4u; r_esp -= 4; W32(r_esp, v); }
    /* 006380dc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6380e1u); f_00630f40();
    /* 006380e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006380e4: jmp 0x638451 */ goto L_00638451;
L_006380e9:; BB(0x006380e9);
    /* 006380e9: push 0x6dafd8 */ { u32 v = 0x6dafd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006380ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6380f3u); f_00630f40();
    /* 006380f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006380f6: jmp 0x638451 */ goto L_00638451;
L_006380fb:; BB(0x006380fb);
    /* 006380fb: push 0x6dafbc */ { u32 v = 0x6dafbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00638100: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638105u); f_00630f40();
    /* 00638105: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638108: jmp 0x638451 */ goto L_00638451;
L_0063810d:; BB(0x0063810d);
    /* 0063810d: push 0x6daf9c */ { u32 v = 0x6daf9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638112: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638117u); f_00630f40();
    /* 00638117: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063811a: jmp 0x638451 */ goto L_00638451;
L_0063811f:; BB(0x0063811f);
    /* 0063811f: push 0x6daf7c */ { u32 v = 0x6daf7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638124: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638129u); f_00630f40();
    /* 00638129: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063812c: jmp 0x638451 */ goto L_00638451;
L_00638131:; BB(0x00638131);
    /* 00638131: push 0x6daf5c */ { u32 v = 0x6daf5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638136: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63813bu); f_00630f40();
    /* 0063813b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063813e: jmp 0x638451 */ goto L_00638451;
L_00638143:; BB(0x00638143);
    /* 00638143: push 0x6daf3c */ { u32 v = 0x6daf3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638148: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63814du); f_00630f40();
    /* 0063814d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638150: jmp 0x638451 */ goto L_00638451;
L_00638155:; BB(0x00638155);
    /* 00638155: push 0x6daf1c */ { u32 v = 0x6daf1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063815a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63815fu); f_00630f40();
    /* 0063815f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638162: jmp 0x638451 */ goto L_00638451;
L_00638167:; BB(0x00638167);
    /* 00638167: push 0x6daf00 */ { u32 v = 0x6daf00u; r_esp -= 4; W32(r_esp, v); }
    /* 0063816c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638171u); f_00630f40();
    /* 00638171: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638174: jmp 0x638451 */ goto L_00638451;
L_00638179:; BB(0x00638179);
    /* 00638179: push 0x6daee4 */ { u32 v = 0x6daee4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063817e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638183u); f_00630f40();
    /* 00638183: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638186: jmp 0x638451 */ goto L_00638451;
L_0063818b:; BB(0x0063818b);
    /* 0063818b: push 0x6daec4 */ { u32 v = 0x6daec4u; r_esp -= 4; W32(r_esp, v); }
    /* 00638190: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638195u); f_00630f40();
    /* 00638195: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638198: jmp 0x638451 */ goto L_00638451;
L_0063819d:; BB(0x0063819d);
    /* 0063819d: push 0x6daea4 */ { u32 v = 0x6daea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006381a2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6381a7u); f_00630f40();
    /* 006381a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006381aa: jmp 0x638451 */ goto L_00638451;
L_006381af:; BB(0x006381af);
    /* 006381af: push 0x6dae84 */ { u32 v = 0x6dae84u; r_esp -= 4; W32(r_esp, v); }
    /* 006381b4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6381b9u); f_00630f40();
    /* 006381b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006381bc: jmp 0x638451 */ goto L_00638451;
L_006381c1:; BB(0x006381c1);
    /* 006381c1: push 0x6dae68 */ { u32 v = 0x6dae68u; r_esp -= 4; W32(r_esp, v); }
    /* 006381c6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6381cbu); f_00630f40();
    /* 006381cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006381ce: jmp 0x638451 */ goto L_00638451;
L_006381d3:; BB(0x006381d3);
    /* 006381d3: push 0x6dae48 */ { u32 v = 0x6dae48u; r_esp -= 4; W32(r_esp, v); }
    /* 006381d8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6381ddu); f_00630f40();
    /* 006381dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006381e0: jmp 0x638451 */ goto L_00638451;
L_006381e5:; BB(0x006381e5);
    /* 006381e5: push 0x6dae2c */ { u32 v = 0x6dae2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006381ea: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6381efu); f_00630f40();
    /* 006381ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006381f2: jmp 0x638451 */ goto L_00638451;
L_006381f7:; BB(0x006381f7);
    /* 006381f7: push 0x6dae0c */ { u32 v = 0x6dae0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006381fc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638201u); f_00630f40();
    /* 00638201: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638204: jmp 0x638451 */ goto L_00638451;
L_00638209:; BB(0x00638209);
    /* 00638209: push 0x6dade4 */ { u32 v = 0x6dade4u; r_esp -= 4; W32(r_esp, v); }
    /* 0063820e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638213u); f_00630f40();
    /* 00638213: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638216: jmp 0x638451 */ goto L_00638451;
L_0063821b:; BB(0x0063821b);
    /* 0063821b: push 0x6dadbc */ { u32 v = 0x6dadbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00638220: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638225u); f_00630f40();
    /* 00638225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638228: jmp 0x638451 */ goto L_00638451;
L_0063822d:; BB(0x0063822d);
    /* 0063822d: push 0x6dad90 */ { u32 v = 0x6dad90u; r_esp -= 4; W32(r_esp, v); }
    /* 00638232: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638237u); f_00630f40();
    /* 00638237: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063823a: jmp 0x638451 */ goto L_00638451;
L_0063823f:; BB(0x0063823f);
    /* 0063823f: push 0x6dad64 */ { u32 v = 0x6dad64u; r_esp -= 4; W32(r_esp, v); }
    /* 00638244: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638249u); f_00630f40();
    /* 00638249: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063824c: jmp 0x638451 */ goto L_00638451;
L_00638251:; BB(0x00638251);
    /* 00638251: push 0x6dad40 */ { u32 v = 0x6dad40u; r_esp -= 4; W32(r_esp, v); }
    /* 00638256: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63825bu); f_00630f40();
    /* 0063825b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063825e: jmp 0x638451 */ goto L_00638451;
L_00638263:; BB(0x00638263);
    /* 00638263: push 0x6dad18 */ { u32 v = 0x6dad18u; r_esp -= 4; W32(r_esp, v); }
    /* 00638268: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63826du); f_00630f40();
    /* 0063826d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638270: jmp 0x638451 */ goto L_00638451;
L_00638275:; BB(0x00638275);
    /* 00638275: push 0x6dacf0 */ { u32 v = 0x6dacf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063827a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63827fu); f_00630f40();
    /* 0063827f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638282: jmp 0x638451 */ goto L_00638451;
L_00638287:; BB(0x00638287);
    /* 00638287: push 0x6dacc8 */ { u32 v = 0x6dacc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063828c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638291u); f_00630f40();
    /* 00638291: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638294: jmp 0x638451 */ goto L_00638451;
L_00638299:; BB(0x00638299);
    /* 00638299: push 0x6daca0 */ { u32 v = 0x6daca0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063829e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6382a3u); f_00630f40();
    /* 006382a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006382a6: jmp 0x638451 */ goto L_00638451;
L_006382ab:; BB(0x006382ab);
    /* 006382ab: push 0x6dac78 */ { u32 v = 0x6dac78u; r_esp -= 4; W32(r_esp, v); }
    /* 006382b0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6382b5u); f_00630f40();
    /* 006382b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006382b8: jmp 0x638451 */ goto L_00638451;
L_006382bd:; BB(0x006382bd);
    /* 006382bd: push 0x6dac50 */ { u32 v = 0x6dac50u; r_esp -= 4; W32(r_esp, v); }
    /* 006382c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6382c7u); f_00630f40();
    /* 006382c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006382ca: jmp 0x638451 */ goto L_00638451;
L_006382cf:; BB(0x006382cf);
    /* 006382cf: push 0x6dac28 */ { u32 v = 0x6dac28u; r_esp -= 4; W32(r_esp, v); }
    /* 006382d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6382d9u); f_00630f40();
    /* 006382d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006382dc: jmp 0x638451 */ goto L_00638451;
L_006382e1:; BB(0x006382e1);
    /* 006382e1: push 0x6dac00 */ { u32 v = 0x6dac00u; r_esp -= 4; W32(r_esp, v); }
    /* 006382e6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6382ebu); f_00630f40();
    /* 006382eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006382ee: jmp 0x638451 */ goto L_00638451;
L_006382f3:; BB(0x006382f3);
    /* 006382f3: push 0x6dabdc */ { u32 v = 0x6dabdcu; r_esp -= 4; W32(r_esp, v); }
    /* 006382f8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6382fdu); f_00630f40();
    /* 006382fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638300: jmp 0x638451 */ goto L_00638451;
L_00638305:; BB(0x00638305);
    /* 00638305: push 0x6dabb8 */ { u32 v = 0x6dabb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063830a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63830fu); f_00630f40();
    /* 0063830f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638312: jmp 0x638451 */ goto L_00638451;
L_00638317:; BB(0x00638317);
    /* 00638317: push 0x6dab90 */ { u32 v = 0x6dab90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063831c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638321u); f_00630f40();
    /* 00638321: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638324: jmp 0x638451 */ goto L_00638451;
L_00638329:; BB(0x00638329);
    /* 00638329: push 0x6dab6c */ { u32 v = 0x6dab6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063832e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638333u); f_00630f40();
    /* 00638333: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638336: jmp 0x638451 */ goto L_00638451;
L_0063833b:; BB(0x0063833b);
    /* 0063833b: push 0x6dab48 */ { u32 v = 0x6dab48u; r_esp -= 4; W32(r_esp, v); }
    /* 00638340: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638345u); f_00630f40();
    /* 00638345: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638348: jmp 0x638451 */ goto L_00638451;
L_0063834d:; BB(0x0063834d);
    /* 0063834d: push 0x6dab20 */ { u32 v = 0x6dab20u; r_esp -= 4; W32(r_esp, v); }
    /* 00638352: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638357u); f_00630f40();
    /* 00638357: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063835a: jmp 0x638451 */ goto L_00638451;
L_0063835f:; BB(0x0063835f);
    /* 0063835f: push 0x6daaf8 */ { u32 v = 0x6daaf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00638364: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638369u); f_00630f40();
    /* 00638369: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063836c: jmp 0x638451 */ goto L_00638451;
L_00638371:; BB(0x00638371);
    /* 00638371: push 0x6daad0 */ { u32 v = 0x6daad0u; r_esp -= 4; W32(r_esp, v); }
    /* 00638376: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63837bu); f_00630f40();
    /* 0063837b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063837e: jmp 0x638451 */ goto L_00638451;
L_00638383:; BB(0x00638383);
    /* 00638383: push 0x6daaa8 */ { u32 v = 0x6daaa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00638388: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63838du); f_00630f40();
    /* 0063838d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638390: jmp 0x638451 */ goto L_00638451;
L_00638395:; BB(0x00638395);
    /* 00638395: push 0x6daa80 */ { u32 v = 0x6daa80u; r_esp -= 4; W32(r_esp, v); }
    /* 0063839a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63839fu); f_00630f40();
    /* 0063839f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006383a2: jmp 0x638451 */ goto L_00638451;
L_006383a7:; BB(0x006383a7);
    /* 006383a7: push 0x6daa60 */ { u32 v = 0x6daa60u; r_esp -= 4; W32(r_esp, v); }
    /* 006383ac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6383b1u); f_00630f40();
    /* 006383b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006383b4: jmp 0x638451 */ goto L_00638451;
L_006383b9:; BB(0x006383b9);
    /* 006383b9: push 0x6daa40 */ { u32 v = 0x6daa40u; r_esp -= 4; W32(r_esp, v); }
    /* 006383be: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6383c3u); f_00630f40();
    /* 006383c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006383c6: jmp 0x638451 */ goto L_00638451;
L_006383cb:; BB(0x006383cb);
    /* 006383cb: push 0x6daa18 */ { u32 v = 0x6daa18u; r_esp -= 4; W32(r_esp, v); }
    /* 006383d0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6383d5u); f_00630f40();
    /* 006383d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006383d8: jmp 0x638451 */ goto L_00638451;
L_006383da:; BB(0x006383da);
    /* 006383da: push 0x6da9f4 */ { u32 v = 0x6da9f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006383df: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6383e4u); f_00630f40();
    /* 006383e4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006383e7: jmp 0x638451 */ goto L_00638451;
L_006383e9:; BB(0x006383e9);
    /* 006383e9: push 0x6da9cc */ { u32 v = 0x6da9ccu; r_esp -= 4; W32(r_esp, v); }
    /* 006383ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6383f3u); f_00630f40();
    /* 006383f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006383f6: jmp 0x638451 */ goto L_00638451;
L_006383f8:; BB(0x006383f8);
    /* 006383f8: push 0x6da9ac */ { u32 v = 0x6da9acu; r_esp -= 4; W32(r_esp, v); }
    /* 006383fd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638402u); f_00630f40();
    /* 00638402: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638405: jmp 0x638451 */ goto L_00638451;
L_00638407:; BB(0x00638407);
    /* 00638407: push 0x6da988 */ { u32 v = 0x6da988u; r_esp -= 4; W32(r_esp, v); }
    /* 0063840c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638411u); f_00630f40();
    /* 00638411: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638414: jmp 0x638451 */ goto L_00638451;
L_00638416:; BB(0x00638416);
    /* 00638416: push 0x6da964 */ { u32 v = 0x6da964u; r_esp -= 4; W32(r_esp, v); }
    /* 0063841b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638420u); f_00630f40();
    /* 00638420: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638423: jmp 0x638451 */ goto L_00638451;
L_00638425:; BB(0x00638425);
    /* 00638425: push 0x6da93c */ { u32 v = 0x6da93cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063842a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63842fu); f_00630f40();
    /* 0063842f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638432: jmp 0x638451 */ goto L_00638451;
L_00638434:; BB(0x00638434);
    /* 00638434: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00638436: jne 0x63844f */ if (!fZ) goto L_0063844f;
L_00638438:; BB(0x00638438);
    /* 00638438: push 0xb2c */ { u32 v = 0xb2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063843d: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00638442: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638447: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x63844cu); f_005e9f20();
    /* 0063844c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063844f:; BB(0x0063844f);
    /* 0063844f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00638451:; BB(0x00638451);
    /* 00638451: mov esp, ebp */ r_esp = r_ebp;
    /* 00638453: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638454: ret 4 */ FN_RET(0x00637f90); r_esp += 8; return;
}

void f_006385e0(void) /* CasinoShell::vfunc107 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006385e0);
    /* 006385e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006385e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006385e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006385e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006385e7: mov eax, dword ptr [0x762294] */ r_eax = R32((u32)(0x762294u));
    /* 006385ec: mov esp, ebp */ r_esp = r_ebp;
    /* 006385ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006385ef: ret  */ FN_RET(0x006385e0); r_esp += 4; return;
}

void f_006385f0(void) /* CasinoShell::vfunc108 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006385f0);
    /* 006385f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006385f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006385f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006385f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006385f7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006385fb: jl 0x63861e */ if ((fS!=fO)) goto L_0063861e;
L_006385fd:; BB(0x006385fd);
    /* 006385fd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638600: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638602: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638605: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 0063860b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63860du); call_ind(t); }
    /* 0063860d: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638610: jge 0x63861e */ if ((fS==fO)) goto L_0063861e;
L_00638612:; BB(0x00638612);
    /* 00638612: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00638615: mov eax, dword ptr [ecx*4 + 0x76227c] */ r_eax = R32((u32)(r_ecx*4+0x76227cu));
    /* 0063861c: jmp 0x63863b */ goto L_0063863b;
L_0063861e:; BB(0x0063861e);
    /* 0063861e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00638620: jne 0x638639 */ if (!fZ) goto L_00638639;
L_00638622:; BB(0x00638622);
    /* 00638622: push 0xb40 */ { u32 v = 0xb40u; r_esp -= 4; W32(r_esp, v); }
    /* 00638627: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063862c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638631: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x638636u); f_005e9f20();
    /* 00638636: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00638639:; BB(0x00638639);
    /* 00638639: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0063863b:; BB(0x0063863b);
    /* 0063863b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063863d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063863e: ret 4 */ FN_RET(0x006385f0); r_esp += 8; return;
}

void f_00638650(void) /* CasinoShell::vfunc109 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638650);
    /* 00638650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638651: mov ebp, esp */ r_ebp = r_esp;
    /* 00638653: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638656: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638657: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063865a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063865d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063865f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638662: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 00638668: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63866au); call_ind(t); }
    /* 0063866a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063866d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00638674: jmp 0x63867f */ goto L_0063867f;
L_00638676:; BB(0x00638676);
    /* 00638676: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638679: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0063867c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0063867f:; BB(0x0063867f);
    /* 0063867f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638682: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638685: jge 0x6386aa */ if ((fS==fO)) goto L_006386aa;
L_00638687:; BB(0x00638687);
    /* 00638687: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063868a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063868b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063868e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00638690: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638693: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 00638699: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63869bu); call_ind(t); }
    /* 0063869b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063869e: jne 0x6386a8 */ if (!fZ) goto L_006386a8;
L_006386a0:; BB(0x006386a0);
    /* 006386a0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006386a3: jmp 0x63872d */ goto L_0063872d;
L_006386a8:; BB(0x006386a8);
    /* 006386a8: jmp 0x638676 */ goto L_00638676;
L_006386aa:; BB(0x006386aa);
    /* 006386aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006386ac: jne 0x6386c5 */ if (!fZ) goto L_006386c5;
L_006386ae:; BB(0x006386ae);
    /* 006386ae: push 0xb4f */ { u32 v = 0xb4fu; r_esp -= 4; W32(r_esp, v); }
    /* 006386b3: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006386b8: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006386bd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6386c2u); f_005e9f20();
    /* 006386c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006386c5:; BB(0x006386c5);
    /* 006386c5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006386cc: jmp 0x6386d7 */ goto L_006386d7;
L_006386ce:; BB(0x006386ce);
    /* 006386ce: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006386d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006386d4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_006386d7:; BB(0x006386d7);
    /* 006386d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006386da: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006386dd: jge 0x638710 */ if ((fS==fO)) goto L_00638710;
L_006386df:; BB(0x006386df);
    /* 006386df: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006386e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006386e3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006386e6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006386e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006386eb: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 006386f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6386f3u); call_ind(t); }
    /* 006386f3: mov esi, eax */ r_esi = r_eax;
    /* 006386f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006386f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006386fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006386fd: mov eax, dword ptr [edx + 0x1b8] */ r_eax = R32((u32)(r_edx+0x1b8u));
    /* 00638703: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x638705u); call_ind(t); }
    /* 00638705: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638707: jne 0x63870e */ if (!fZ) goto L_0063870e;
L_00638709:; BB(0x00638709);
    /* 00638709: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0063870c: jmp 0x63872d */ goto L_0063872d;
L_0063870e:; BB(0x0063870e);
    /* 0063870e: jmp 0x6386ce */ goto L_006386ce;
L_00638710:; BB(0x00638710);
    /* 00638710: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00638712: jne 0x63872b */ if (!fZ) goto L_0063872b;
L_00638714:; BB(0x00638714);
    /* 00638714: push 0xb55 */ { u32 v = 0xb55u; r_esp -= 4; W32(r_esp, v); }
    /* 00638719: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 0063871e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638723: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x638728u); f_005e9f20();
    /* 00638728: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0063872b:; BB(0x0063872b);
    /* 0063872b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0063872d:; BB(0x0063872d);
    /* 0063872d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063872e: mov esp, ebp */ r_esp = r_ebp;
    /* 00638730: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638731: ret 4 */ FN_RET(0x00638650); r_esp += 8; return;
}

void f_00638740(void) /* CasinoShell::vfunc115 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638740);
    /* 00638740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638741: mov ebp, esp */ r_ebp = r_esp;
    /* 00638743: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638746: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638749: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0063874c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0063874f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638752: sub ecx, 0x30113c */ {  u32 a = r_ecx; u32 b = 0x30113cu; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00638758: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0063875b: cmp dword ptr [ebp - 8], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063875f: ja 0x6387cc */ if ((!fC&&!fZ)) goto L_006387cc;
L_00638761:; BB(0x00638761);
    /* 00638761: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638764: movzx eax, byte ptr [edx + 0x63880c] */ r_eax = (u32)R8((u32)(r_edx+0x63880cu));
    /* 0063876b: jmp dword ptr [eax*4 + 0x6387f0] */ { u32 t = R32((u32)(r_eax*4+0x6387f0u)); switch (t) { case 0x638772u: goto L_00638772; case 0x638781u: goto L_00638781; case 0x638790u: goto L_00638790; case 0x63879fu: goto L_0063879f; case 0x6387aeu: goto L_006387ae; case 0x6387bdu: goto L_006387bd; case 0x6387ccu: goto L_006387cc; default: UNSUP(0x0063876b, "jump table entry is not a known target"); } }
L_00638772:; BB(0x00638772);
    /* 00638772: push 0x6db2b8 */ { u32 v = 0x6db2b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00638777: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63877cu); f_00630f40();
    /* 0063877c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063877f: jmp 0x6387e9 */ goto L_006387e9;
L_00638781:; BB(0x00638781);
    /* 00638781: push 0x6db298 */ { u32 v = 0x6db298u; r_esp -= 4; W32(r_esp, v); }
    /* 00638786: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63878bu); f_00630f40();
    /* 0063878b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063878e: jmp 0x6387e9 */ goto L_006387e9;
L_00638790:; BB(0x00638790);
    /* 00638790: push 0x6db274 */ { u32 v = 0x6db274u; r_esp -= 4; W32(r_esp, v); }
    /* 00638795: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x63879au); f_00630f40();
    /* 0063879a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063879d: jmp 0x6387e9 */ goto L_006387e9;
L_0063879f:; BB(0x0063879f);
    /* 0063879f: push 0x6db258 */ { u32 v = 0x6db258u; r_esp -= 4; W32(r_esp, v); }
    /* 006387a4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6387a9u); f_00630f40();
    /* 006387a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006387ac: jmp 0x6387e9 */ goto L_006387e9;
L_006387ae:; BB(0x006387ae);
    /* 006387ae: push 0x6db230 */ { u32 v = 0x6db230u; r_esp -= 4; W32(r_esp, v); }
    /* 006387b3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6387b8u); f_00630f40();
    /* 006387b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006387bb: jmp 0x6387e9 */ goto L_006387e9;
L_006387bd:; BB(0x006387bd);
    /* 006387bd: push 0x6db210 */ { u32 v = 0x6db210u; r_esp -= 4; W32(r_esp, v); }
    /* 006387c2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6387c7u); f_00630f40();
    /* 006387c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006387ca: jmp 0x6387e9 */ goto L_006387e9;
L_006387cc:; BB(0x006387cc);
    /* 006387cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006387ce: jne 0x6387e7 */ if (!fZ) goto L_006387e7;
L_006387d0:; BB(0x006387d0);
    /* 006387d0: push 0xb6f */ { u32 v = 0xb6fu; r_esp -= 4; W32(r_esp, v); }
    /* 006387d5: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006387da: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006387df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6387e4u); f_005e9f20();
    /* 006387e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006387e7:; BB(0x006387e7);
    /* 006387e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006387e9:; BB(0x006387e9);
    /* 006387e9: mov esp, ebp */ r_esp = r_ebp;
    /* 006387eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006387ec: ret 4 */ FN_RET(0x00638740); r_esp += 8; return;
}

void f_00638830(void) /* CasinoShell::vfunc111 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638830);
    /* 00638830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638831: mov ebp, esp */ r_ebp = r_esp;
    /* 00638833: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638834: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00638839: cmp dword ptr [ebp + 8], 0x3010b0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3010b0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638840: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00638843: mov esp, ebp */ r_esp = r_ebp;
    /* 00638845: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638846: ret 4 */ FN_RET(0x00638830); r_esp += 8; return;
}

void f_00638850(void) /* CasinoShell::vfunc112 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638850);
    /* 00638850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638851: mov ebp, esp */ r_ebp = r_esp;
    /* 00638853: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638854: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638857: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00638859: cmp dword ptr [ebp + 8], 0x3010b0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3010b0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638860: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00638863: mov esp, ebp */ r_esp = r_ebp;
    /* 00638865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638866: ret 4 */ FN_RET(0x00638850); r_esp += 8; return;
}

void f_00638870(void) /* CasinoShell::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638870);
    /* 00638870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638871: mov ebp, esp */ r_ebp = r_esp;
    /* 00638873: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638876: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638879: cmp dword ptr [ebp + 8], 0x3010b1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3010b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638880: je 0x638894 */ if (fZ) goto L_00638894;
L_00638882:; BB(0x00638882);
    /* 00638882: cmp dword ptr [ebp + 8], 0x3010b2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3010b2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638889: je 0x638894 */ if (fZ) goto L_00638894;
L_0063888b:; BB(0x0063888b);
    /* 0063888b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00638892: jmp 0x63889b */ goto L_0063889b;
L_00638894:; BB(0x00638894);
    /* 00638894: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0063889b:; BB(0x0063889b);
    /* 0063889b: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0063889e: mov esp, ebp */ r_esp = r_ebp;
    /* 006388a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006388a1: ret 4 */ FN_RET(0x00638870); r_esp += 8; return;
}

void f_00638930(void) /* CasinoShell::vfunc117 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638930);
    /* 00638930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638931: mov ebp, esp */ r_ebp = r_esp;
    /* 00638933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638937: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063893b: jl 0x63895e */ if ((fS!=fO)) goto L_0063895e;
L_0063893d:; BB(0x0063893d);
    /* 0063893d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638940: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638942: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638945: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0063894b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63894du); call_ind(t); }
    /* 0063894d: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638950: jge 0x63895e */ if ((fS==fO)) goto L_0063895e;
L_00638952:; BB(0x00638952);
    /* 00638952: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00638955: mov eax, dword ptr [ecx*4 + 0x762108] */ r_eax = R32((u32)(r_ecx*4+0x762108u));
    /* 0063895c: jmp 0x638961 */ goto L_00638961;
L_0063895e:; BB(0x0063895e);
    /* 0063895e: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00638961:; BB(0x00638961);
    /* 00638961: mov esp, ebp */ r_esp = r_ebp;
    /* 00638963: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638964: ret 4 */ FN_RET(0x00638930); r_esp += 8; return;
}

void f_00638970(void) /* CasinoShell::vfunc116 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638970);
    /* 00638970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638971: mov ebp, esp */ r_ebp = r_esp;
    /* 00638973: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638974: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638977: mov eax, dword ptr [0x762174] */ r_eax = R32((u32)(0x762174u));
    /* 0063897c: mov esp, ebp */ r_esp = r_ebp;
    /* 0063897e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063897f: ret  */ FN_RET(0x00638970); r_esp += 4; return;
}

void f_00638980(void) /* CasinoShell::vfunc118 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638980);
    /* 00638980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638981: mov ebp, esp */ r_ebp = r_esp;
    /* 00638983: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00638987: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0063898a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063898d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0063898f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638992: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 00638998: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x63899au); call_ind(t); }
    /* 0063899a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0063899d: movzx ecx, byte ptr [0x795f94] */ r_ecx = (u32)R8((u32)(0x795f94u));
    /* 006389a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006389a6: je 0x6389f3 */ if (fZ) goto L_006389f3;
L_006389a8:; BB(0x006389a8);
    /* 006389a8: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006389af: jmp 0x6389ba */ goto L_006389ba;
L_006389b1:; BB(0x006389b1);
    /* 006389b1: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006389b4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006389b7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_006389ba:; BB(0x006389ba);
    /* 006389ba: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006389bd: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006389c0: jge 0x6389f3 */ if ((fS==fO)) goto L_006389f3;
L_006389c2:; BB(0x006389c2);
    /* 006389c2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006389c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006389c6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006389c9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006389cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006389ce: mov edx, dword ptr [eax + 0x1d4] */ r_edx = R32((u32)(r_eax+0x1d4u));
    /* 006389d4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6389d6u); call_ind(t); }
    /* 006389d6: mov esi, eax */ r_esi = r_eax;
    /* 006389d8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006389db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006389dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006389e0: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 006389e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6389e8u); call_ind(t); }
    /* 006389e8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006389ea: jne 0x6389f1 */ if (!fZ) goto L_006389f1;
L_006389ec:; BB(0x006389ec);
    /* 006389ec: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006389ef: jmp 0x638a4a */ goto L_00638a4a;
L_006389f1:; BB(0x006389f1);
    /* 006389f1: jmp 0x6389b1 */ goto L_006389b1;
L_006389f3:; BB(0x006389f3);
    /* 006389f3: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006389fa: jmp 0x638a05 */ goto L_00638a05;
L_006389fc:; BB(0x006389fc);
    /* 006389fc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006389ff: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00638a02: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00638a05:; BB(0x00638a05);
    /* 00638a05: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638a08: cmp edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00638a0b: jge 0x638a2d */ if ((fS==fO)) goto L_00638a2d;
L_00638a0d:; BB(0x00638a0d);
    /* 00638a0d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638a11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638a14: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00638a16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638a19: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 00638a1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x638a21u); call_ind(t); }
    /* 00638a21: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00638a24: jne 0x638a2b */ if (!fZ) goto L_00638a2b;
L_00638a26:; BB(0x00638a26);
    /* 00638a26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638a29: jmp 0x638a4a */ goto L_00638a4a;
L_00638a2b:; BB(0x00638a2b);
    /* 00638a2b: jmp 0x6389fc */ goto L_006389fc;
L_00638a2d:; BB(0x00638a2d);
    /* 00638a2d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00638a2f: jne 0x638a48 */ if (!fZ) goto L_00638a48;
L_00638a31:; BB(0x00638a31);
    /* 00638a31: push 0xbb6 */ { u32 v = 0xbb6u; r_esp -= 4; W32(r_esp, v); }
    /* 00638a36: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00638a3b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638a40: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x638a45u); f_005e9f20();
    /* 00638a45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00638a48:; BB(0x00638a48);
    /* 00638a48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00638a4a:; BB(0x00638a4a);
    /* 00638a4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00638a4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00638a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638a4e: ret 4 */ FN_RET(0x00638980); r_esp += 8; return;
}

void f_00638a60(void) /* CasinoShell::vfunc120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638a60);
    /* 00638a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00638a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00638a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638a67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638a6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00638a6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638a6f: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 00638a75: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x638a77u); call_ind(t); }
    /* 00638a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638a78: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x638a7du); f_0062fbf0();
    /* 00638a7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638a81: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638a84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00638a86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00638a89: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 00638a8f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x638a91u); call_ind(t); }
    /* 00638a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00638a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638a94: ret  */ FN_RET(0x00638a60); r_esp += 4; return;
}

void f_00638aa0(void) /* CasinoShell::vfunc121 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638aa0);
    /* 00638aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00638aa3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638aa6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638aa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00638aac: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00638aaf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638ab2: sub ecx, 0x231860 */ {  u32 a = r_ecx; u32 b = 0x231860u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00638ab8: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00638abb: cmp dword ptr [ebp - 8], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00638abf: ja 0x638ca0 */ if ((!fC&&!fZ)) goto L_00638ca0;
L_00638ac5:; BB(0x00638ac5);
    /* 00638ac5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638ac8: jmp dword ptr [edx*4 + 0x638cc4] */ { u32 t = R32((u32)(r_edx*4+0x638cc4u)); switch (t) { case 0x638acfu: goto L_00638acf; case 0x638af3u: goto L_00638af3; case 0x638ae1u: goto L_00638ae1; case 0x638b05u: goto L_00638b05; case 0x638b17u: goto L_00638b17; case 0x638b29u: goto L_00638b29; case 0x638b3bu: goto L_00638b3b; case 0x638b4du: goto L_00638b4d; case 0x638b5fu: goto L_00638b5f; case 0x638b71u: goto L_00638b71; case 0x638b83u: goto L_00638b83; case 0x638b95u: goto L_00638b95; case 0x638ba7u: goto L_00638ba7; case 0x638bb9u: goto L_00638bb9; case 0x638bcbu: goto L_00638bcb; case 0x638bddu: goto L_00638bdd; case 0x638befu: goto L_00638bef; case 0x638c01u: goto L_00638c01; case 0x638c13u: goto L_00638c13; case 0x638c25u: goto L_00638c25; case 0x638c37u: goto L_00638c37; case 0x638c46u: goto L_00638c46; case 0x638c55u: goto L_00638c55; case 0x638c64u: goto L_00638c64; case 0x638c73u: goto L_00638c73; case 0x638c82u: goto L_00638c82; case 0x638c91u: goto L_00638c91; default: UNSUP(0x00638ac8, "jump table entry is not a known target"); } }
L_00638acf:; BB(0x00638acf);
    /* 00638acf: push 0x6db67c */ { u32 v = 0x6db67cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638ad4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638ad9u); f_00630f40();
    /* 00638ad9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638adc: jmp 0x638cbd */ goto L_00638cbd;
L_00638ae1:; BB(0x00638ae1);
    /* 00638ae1: push 0x6db65c */ { u32 v = 0x6db65cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638ae6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638aebu); f_00630f40();
    /* 00638aeb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638aee: jmp 0x638cbd */ goto L_00638cbd;
L_00638af3:; BB(0x00638af3);
    /* 00638af3: push 0x6db638 */ { u32 v = 0x6db638u; r_esp -= 4; W32(r_esp, v); }
    /* 00638af8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638afdu); f_00630f40();
    /* 00638afd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b00: jmp 0x638cbd */ goto L_00638cbd;
L_00638b05:; BB(0x00638b05);
    /* 00638b05: push 0x6db614 */ { u32 v = 0x6db614u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b0a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b0fu); f_00630f40();
    /* 00638b0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b12: jmp 0x638cbd */ goto L_00638cbd;
L_00638b17:; BB(0x00638b17);
    /* 00638b17: push 0x6db5f0 */ { u32 v = 0x6db5f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b1c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b21u); f_00630f40();
    /* 00638b21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b24: jmp 0x638cbd */ goto L_00638cbd;
L_00638b29:; BB(0x00638b29);
    /* 00638b29: push 0x6db5cc */ { u32 v = 0x6db5ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00638b2e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b33u); f_00630f40();
    /* 00638b33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b36: jmp 0x638cbd */ goto L_00638cbd;
L_00638b3b:; BB(0x00638b3b);
    /* 00638b3b: push 0x6db5ac */ { u32 v = 0x6db5acu; r_esp -= 4; W32(r_esp, v); }
    /* 00638b40: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b45u); f_00630f40();
    /* 00638b45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b48: jmp 0x638cbd */ goto L_00638cbd;
L_00638b4d:; BB(0x00638b4d);
    /* 00638b4d: push 0x6db584 */ { u32 v = 0x6db584u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b57u); f_00630f40();
    /* 00638b57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b5a: jmp 0x638cbd */ goto L_00638cbd;
L_00638b5f:; BB(0x00638b5f);
    /* 00638b5f: push 0x6db564 */ { u32 v = 0x6db564u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b64: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b69u); f_00630f40();
    /* 00638b69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b6c: jmp 0x638cbd */ goto L_00638cbd;
L_00638b71:; BB(0x00638b71);
    /* 00638b71: push 0x6db544 */ { u32 v = 0x6db544u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b76: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b7bu); f_00630f40();
    /* 00638b7b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b7e: jmp 0x638cbd */ goto L_00638cbd;
L_00638b83:; BB(0x00638b83);
    /* 00638b83: push 0x6db520 */ { u32 v = 0x6db520u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b88: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b8du); f_00630f40();
    /* 00638b8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638b90: jmp 0x638cbd */ goto L_00638cbd;
L_00638b95:; BB(0x00638b95);
    /* 00638b95: push 0x6db500 */ { u32 v = 0x6db500u; r_esp -= 4; W32(r_esp, v); }
    /* 00638b9a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638b9fu); f_00630f40();
    /* 00638b9f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638ba2: jmp 0x638cbd */ goto L_00638cbd;
L_00638ba7:; BB(0x00638ba7);
    /* 00638ba7: push 0x6db4d8 */ { u32 v = 0x6db4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00638bac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638bb1u); f_00630f40();
    /* 00638bb1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638bb4: jmp 0x638cbd */ goto L_00638cbd;
L_00638bb9:; BB(0x00638bb9);
    /* 00638bb9: push 0x6db4b4 */ { u32 v = 0x6db4b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00638bbe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638bc3u); f_00630f40();
    /* 00638bc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638bc6: jmp 0x638cbd */ goto L_00638cbd;
L_00638bcb:; BB(0x00638bcb);
    /* 00638bcb: push 0x6db490 */ { u32 v = 0x6db490u; r_esp -= 4; W32(r_esp, v); }
    /* 00638bd0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638bd5u); f_00630f40();
    /* 00638bd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638bd8: jmp 0x638cbd */ goto L_00638cbd;
L_00638bdd:; BB(0x00638bdd);
    /* 00638bdd: push 0x6db470 */ { u32 v = 0x6db470u; r_esp -= 4; W32(r_esp, v); }
    /* 00638be2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638be7u); f_00630f40();
    /* 00638be7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638bea: jmp 0x638cbd */ goto L_00638cbd;
L_00638bef:; BB(0x00638bef);
    /* 00638bef: push 0x6db450 */ { u32 v = 0x6db450u; r_esp -= 4; W32(r_esp, v); }
    /* 00638bf4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638bf9u); f_00630f40();
    /* 00638bf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638bfc: jmp 0x638cbd */ goto L_00638cbd;
L_00638c01:; BB(0x00638c01);
    /* 00638c01: push 0x6db42c */ { u32 v = 0x6db42cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638c06: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c0bu); f_00630f40();
    /* 00638c0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c0e: jmp 0x638cbd */ goto L_00638cbd;
L_00638c13:; BB(0x00638c13);
    /* 00638c13: push 0x6db408 */ { u32 v = 0x6db408u; r_esp -= 4; W32(r_esp, v); }
    /* 00638c18: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c1du); f_00630f40();
    /* 00638c1d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c20: jmp 0x638cbd */ goto L_00638cbd;
L_00638c25:; BB(0x00638c25);
    /* 00638c25: push 0x6db3e4 */ { u32 v = 0x6db3e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00638c2a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c2fu); f_00630f40();
    /* 00638c2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c32: jmp 0x638cbd */ goto L_00638cbd;
L_00638c37:; BB(0x00638c37);
    /* 00638c37: push 0x6db3bc */ { u32 v = 0x6db3bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00638c3c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c41u); f_00630f40();
    /* 00638c41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c44: jmp 0x638cbd */ goto L_00638cbd;
L_00638c46:; BB(0x00638c46);
    /* 00638c46: push 0x6db394 */ { u32 v = 0x6db394u; r_esp -= 4; W32(r_esp, v); }
    /* 00638c4b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c50u); f_00630f40();
    /* 00638c50: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c53: jmp 0x638cbd */ goto L_00638cbd;
L_00638c55:; BB(0x00638c55);
    /* 00638c55: push 0x6db36c */ { u32 v = 0x6db36cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638c5a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c5fu); f_00630f40();
    /* 00638c5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c62: jmp 0x638cbd */ goto L_00638cbd;
L_00638c64:; BB(0x00638c64);
    /* 00638c64: push 0x6db344 */ { u32 v = 0x6db344u; r_esp -= 4; W32(r_esp, v); }
    /* 00638c69: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c6eu); f_00630f40();
    /* 00638c6e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c71: jmp 0x638cbd */ goto L_00638cbd;
L_00638c73:; BB(0x00638c73);
    /* 00638c73: push 0x6db31c */ { u32 v = 0x6db31cu; r_esp -= 4; W32(r_esp, v); }
    /* 00638c78: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c7du); f_00630f40();
    /* 00638c7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c80: jmp 0x638cbd */ goto L_00638cbd;
L_00638c82:; BB(0x00638c82);
    /* 00638c82: push 0x6db2fc */ { u32 v = 0x6db2fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00638c87: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c8cu); f_00630f40();
    /* 00638c8c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c8f: jmp 0x638cbd */ goto L_00638cbd;
L_00638c91:; BB(0x00638c91);
    /* 00638c91: push 0x6db2dc */ { u32 v = 0x6db2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00638c96: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x638c9bu); f_00630f40();
    /* 00638c9b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00638c9e: jmp 0x638cbd */ goto L_00638cbd;
L_00638ca0:; BB(0x00638ca0);
    /* 00638ca0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00638ca2: jne 0x638cbb */ if (!fZ) goto L_00638cbb;
L_00638ca4:; BB(0x00638ca4);
    /* 00638ca4: push 0xbf5 */ { u32 v = 0xbf5u; r_esp -= 4; W32(r_esp, v); }
    /* 00638ca9: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00638cae: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638cb3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x638cb8u); f_005e9f20();
    /* 00638cb8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00638cbb:; BB(0x00638cbb);
    /* 00638cbb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00638cbd:; BB(0x00638cbd);
    /* 00638cbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00638cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638cc0: ret 4 */ FN_RET(0x00638aa0); r_esp += 8; return;
}

void f_00638d30(void) /* CasinoShell::vfunc122 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00638d30);
    /* 00638d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00638d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00638d33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638d36: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00638d39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00638d3c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00638d3f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638d42: sub ecx, 0x231860 */ {  u32 a = r_ecx; u32 b = 0x231860u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00638d48: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00638d4b: cmp dword ptr [ebp - 8], 0x1a */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00638d4f: ja 0x638e40 */ if ((!fC&&!fZ)) goto L_00638e40;
L_00638d55:; BB(0x00638d55);
    /* 00638d55: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00638d58: jmp dword ptr [edx*4 + 0x638e64] */ { u32 t = R32((u32)(r_edx*4+0x638e64u)); switch (t) { case 0x638d5fu: goto L_00638d5f; case 0x638d73u: goto L_00638d73; case 0x638d69u: goto L_00638d69; case 0x638d7du: goto L_00638d7d; case 0x638d87u: goto L_00638d87; case 0x638d91u: goto L_00638d91; case 0x638d9bu: goto L_00638d9b; case 0x638da5u: goto L_00638da5; case 0x638dafu: goto L_00638daf; case 0x638db9u: goto L_00638db9; case 0x638dc3u: goto L_00638dc3; case 0x638dcdu: goto L_00638dcd; case 0x638dd7u: goto L_00638dd7; case 0x638ddeu: goto L_00638dde; case 0x638de5u: goto L_00638de5; case 0x638decu: goto L_00638dec; case 0x638df3u: goto L_00638df3; case 0x638dfau: goto L_00638dfa; case 0x638e01u: goto L_00638e01; case 0x638e08u: goto L_00638e08; case 0x638e0fu: goto L_00638e0f; case 0x638e16u: goto L_00638e16; case 0x638e1du: goto L_00638e1d; case 0x638e24u: goto L_00638e24; case 0x638e2bu: goto L_00638e2b; case 0x638e32u: goto L_00638e32; case 0x638e39u: goto L_00638e39; default: UNSUP(0x00638d58, "jump table entry is not a known target"); } }
L_00638d5f:; BB(0x00638d5f);
    /* 00638d5f: mov eax, 0x231a54 */ r_eax = 0x231a54u;
    /* 00638d64: jmp 0x638e5d */ goto L_00638e5d;
L_00638d69:; BB(0x00638d69);
    /* 00638d69: mov eax, 0x231a56 */ r_eax = 0x231a56u;
    /* 00638d6e: jmp 0x638e5d */ goto L_00638e5d;
L_00638d73:; BB(0x00638d73);
    /* 00638d73: mov eax, 0x231a55 */ r_eax = 0x231a55u;
    /* 00638d78: jmp 0x638e5d */ goto L_00638e5d;
L_00638d7d:; BB(0x00638d7d);
    /* 00638d7d: mov eax, 0x231a57 */ r_eax = 0x231a57u;
    /* 00638d82: jmp 0x638e5d */ goto L_00638e5d;
L_00638d87:; BB(0x00638d87);
    /* 00638d87: mov eax, 0x231a58 */ r_eax = 0x231a58u;
    /* 00638d8c: jmp 0x638e5d */ goto L_00638e5d;
L_00638d91:; BB(0x00638d91);
    /* 00638d91: mov eax, 0x231a59 */ r_eax = 0x231a59u;
    /* 00638d96: jmp 0x638e5d */ goto L_00638e5d;
L_00638d9b:; BB(0x00638d9b);
    /* 00638d9b: mov eax, 0x231a5a */ r_eax = 0x231a5au;
    /* 00638da0: jmp 0x638e5d */ goto L_00638e5d;
L_00638da5:; BB(0x00638da5);
    /* 00638da5: mov eax, 0x231a5b */ r_eax = 0x231a5bu;
    /* 00638daa: jmp 0x638e5d */ goto L_00638e5d;
L_00638daf:; BB(0x00638daf);
    /* 00638daf: mov eax, 0x231a5c */ r_eax = 0x231a5cu;
    /* 00638db4: jmp 0x638e5d */ goto L_00638e5d;
L_00638db9:; BB(0x00638db9);
    /* 00638db9: mov eax, 0x231a5d */ r_eax = 0x231a5du;
    /* 00638dbe: jmp 0x638e5d */ goto L_00638e5d;
L_00638dc3:; BB(0x00638dc3);
    /* 00638dc3: mov eax, 0x231a5e */ r_eax = 0x231a5eu;
    /* 00638dc8: jmp 0x638e5d */ goto L_00638e5d;
L_00638dcd:; BB(0x00638dcd);
    /* 00638dcd: mov eax, 0x231a5f */ r_eax = 0x231a5fu;
    /* 00638dd2: jmp 0x638e5d */ goto L_00638e5d;
L_00638dd7:; BB(0x00638dd7);
    /* 00638dd7: mov eax, 0x231a60 */ r_eax = 0x231a60u;
    /* 00638ddc: jmp 0x638e5d */ goto L_00638e5d;
L_00638dde:; BB(0x00638dde);
    /* 00638dde: mov eax, 0x231a61 */ r_eax = 0x231a61u;
    /* 00638de3: jmp 0x638e5d */ goto L_00638e5d;
L_00638de5:; BB(0x00638de5);
    /* 00638de5: mov eax, 0x231a62 */ r_eax = 0x231a62u;
    /* 00638dea: jmp 0x638e5d */ goto L_00638e5d;
L_00638dec:; BB(0x00638dec);
    /* 00638dec: mov eax, 0x231a63 */ r_eax = 0x231a63u;
    /* 00638df1: jmp 0x638e5d */ goto L_00638e5d;
L_00638df3:; BB(0x00638df3);
    /* 00638df3: mov eax, 0x231a64 */ r_eax = 0x231a64u;
    /* 00638df8: jmp 0x638e5d */ goto L_00638e5d;
L_00638dfa:; BB(0x00638dfa);
    /* 00638dfa: mov eax, 0x231a65 */ r_eax = 0x231a65u;
    /* 00638dff: jmp 0x638e5d */ goto L_00638e5d;
L_00638e01:; BB(0x00638e01);
    /* 00638e01: mov eax, 0x231a66 */ r_eax = 0x231a66u;
    /* 00638e06: jmp 0x638e5d */ goto L_00638e5d;
L_00638e08:; BB(0x00638e08);
    /* 00638e08: mov eax, 0x231a67 */ r_eax = 0x231a67u;
    /* 00638e0d: jmp 0x638e5d */ goto L_00638e5d;
L_00638e0f:; BB(0x00638e0f);
    /* 00638e0f: mov eax, 0x231a68 */ r_eax = 0x231a68u;
    /* 00638e14: jmp 0x638e5d */ goto L_00638e5d;
L_00638e16:; BB(0x00638e16);
    /* 00638e16: mov eax, 0x231a69 */ r_eax = 0x231a69u;
    /* 00638e1b: jmp 0x638e5d */ goto L_00638e5d;
L_00638e1d:; BB(0x00638e1d);
    /* 00638e1d: mov eax, 0x231a6a */ r_eax = 0x231a6au;
    /* 00638e22: jmp 0x638e5d */ goto L_00638e5d;
L_00638e24:; BB(0x00638e24);
    /* 00638e24: mov eax, 0x231a6b */ r_eax = 0x231a6bu;
    /* 00638e29: jmp 0x638e5d */ goto L_00638e5d;
L_00638e2b:; BB(0x00638e2b);
    /* 00638e2b: mov eax, 0x231a6c */ r_eax = 0x231a6cu;
    /* 00638e30: jmp 0x638e5d */ goto L_00638e5d;
L_00638e32:; BB(0x00638e32);
    /* 00638e32: mov eax, 0x231a6d */ r_eax = 0x231a6du;
    /* 00638e37: jmp 0x638e5d */ goto L_00638e5d;
L_00638e39:; BB(0x00638e39);
    /* 00638e39: mov eax, 0x231a6e */ r_eax = 0x231a6eu;
    /* 00638e3e: jmp 0x638e5d */ goto L_00638e5d;
L_00638e40:; BB(0x00638e40);
    /* 00638e40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00638e42: jne 0x638e5b */ if (!fZ) goto L_00638e5b;
L_00638e44:; BB(0x00638e44);
    /* 00638e44: push 0xc1f */ { u32 v = 0xc1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00638e49: push 0x6d9e90 */ { u32 v = 0x6d9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 00638e4e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00638e53: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x638e58u); f_005e9f20();
    /* 00638e58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00638e5b:; BB(0x00638e5b);
    /* 00638e5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00638e5d:; BB(0x00638e5d);
    /* 00638e5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00638e5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00638e60: ret 4 */ FN_RET(0x00638d30); r_esp += 8; return;
}

void f_00639690(void) /* CasinoShell::vfunc238 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00639690);
    /* 00639690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639691: mov ebp, esp */ r_ebp = r_esp;
    /* 00639693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00639697: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063969b: jl 0x6396a3 */ if ((fS!=fO)) goto L_006396a3;
L_0063969d:; BB(0x0063969d);
    /* 0063969d: cmp dword ptr [ebp + 8], 0x2c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006396a1: jl 0x6396ac */ if ((fS!=fO)) goto L_006396ac;
L_006396a3:; BB(0x006396a3);
    /* 006396a3: mov eax, 0x6b27f8 */ r_eax = 0x6b27f8u;
    /* 006396a8: jmp 0x6396bf */ goto L_006396bf;
L_006396ac:; BB(0x006396ac);
    /* 006396ac: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006396af: mov ecx, dword ptr [eax*4 + 0x76fe28] */ r_ecx = R32((u32)(r_eax*4+0x76fe28u));
    /* 006396b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006396b7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x6396bcu); f_00630f40();
    /* 006396bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006396bf:; BB(0x006396bf);
    /* 006396bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006396c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006396c2: ret 4 */ FN_RET(0x00639690); r_esp += 8; return;
}

void f_006396d0(void) /* CasinoShell::vfunc237 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006396d0);
    /* 006396d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006396d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006396d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006396d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006396d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006396da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006396db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006396de: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006396e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006396e3: mov eax, dword ptr [edx + 0x3b8] */ r_eax = R32((u32)(r_edx+0x3b8u));
    /* 006396e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6396ebu); call_ind(t); }
    /* 006396eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006396ec: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006396ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006396f0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6396f5u); f_00686d8e();
    /* 006396f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006396f8: mov esp, ebp */ r_esp = r_ebp;
    /* 006396fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006396fb: ret 8 */ FN_RET(0x006396d0); r_esp += 12; return;
}


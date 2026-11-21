#include "protos.h"

void f_0040fb80(void) /* FlickPad::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fb80);
    /* 0040fb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb81: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fb83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fb84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0040fb87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fb8a: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x40fb8fu); f_005f49d0();
    /* 0040fb8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fb92: mov dword ptr [eax], 0x6b39f4 */ W32((u32)(r_eax), 0x6b39f4u);
    /* 0040fb98: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fb9b: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 0040fba2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fba5: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
    /* 0040fbac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbaf: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 0040fbb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbb9: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 0040fbc0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbc3: mov dword ptr [edx + 0x14], 0 */ W32((u32)(r_edx+0x14u), 0x0u);
    /* 0040fbca: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbcd: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0040fbd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbd7: mov dword ptr [ecx + 0x18], 0x280 */ W32((u32)(r_ecx+0x18u), 0x280u);
    /* 0040fbde: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbe1: mov dword ptr [edx + 0x1c], 0x1e0 */ W32((u32)(r_edx+0x1cu), 0x1e0u);
    /* 0040fbe8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbeb: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 0040fbf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040fbf5: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fbf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fbf8: ret  */ FN_RET(0x0040fb80); r_esp += 4; return;
}

void f_0040fc20(void) /* FlickPad::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0040fc20);
    /* 0040fc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc21: mov ebp, esp */ r_ebp = r_esp;
    /* 0040fc23: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040fc26: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0040fc29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040fc2c: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 0040fc30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fc32: je 0x40fc39 */ if (fZ) goto L_0040fc39;
L_0040fc34:; BB(0x0040fc34);
    /* 0040fc34: jmp 0x40fdb1 */ goto L_0040fdb1;
L_0040fc39:; BB(0x0040fc39);
    /* 0040fc39: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0040fc3f: mov eax, dword ptr [edx + 0x4d0] */ r_eax = R32((u32)(r_edx+0x4d0u));
    /* 0040fc45: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0040fc48: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fc4c: je 0x40fcc9 */ if (fZ) goto L_0040fcc9;
L_0040fc4e:; BB(0x0040fc4e);
    /* 0040fc4e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0040fc54: mov edx, dword ptr [ecx + 0x4d0] */ r_edx = R32((u32)(r_ecx+0x4d0u));
    /* 0040fc5a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0040fc5d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fc61: je 0x40fcc9 */ if (fZ) goto L_0040fcc9;
L_0040fc63:; BB(0x0040fc63);
    /* 0040fc63: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0040fc68: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 0040fc6e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0040fc71: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040fc74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040fc75: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40fc7au); f_005dcb00();
    /* 0040fc7a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040fc7d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040fc80: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040fc83: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40fc88u); f_0063aac0();
    /* 0040fc88: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040fc8a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0040fc8d: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fc91: je 0x40fcaf */ if (fZ) goto L_0040fcaf;
L_0040fc93:; BB(0x0040fc93);
    /* 0040fc93: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040fc96: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40fc9bu); f_0063aac0();
    /* 0040fc9b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0040fc9d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040fca0: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fca4: je 0x40fcaf */ if (fZ) goto L_0040fcaf;
L_0040fca6:; BB(0x0040fca6);
    /* 0040fca6: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0040fcad: jmp 0x40fcb6 */ goto L_0040fcb6;
L_0040fcaf:; BB(0x0040fcaf);
    /* 0040fcaf: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0040fcb6:; BB(0x0040fcb6);
    /* 0040fcb6: movzx edx, byte ptr [ebp - 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0040fcba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fcbc: je 0x40fcc9 */ if (fZ) goto L_0040fcc9;
L_0040fcbe:; BB(0x0040fcbe);
    /* 0040fcbe: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 0040fcc3: cmp dword ptr [eax + 0x34], 0 */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fcc7: jne 0x40fcce */ if (!fZ) goto L_0040fcce;
L_0040fcc9:; BB(0x0040fcc9);
    /* 0040fcc9: jmp 0x40fdb1 */ goto L_0040fdb1;
L_0040fcce:; BB(0x0040fcce);
    /* 0040fcce: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040fcd1: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0040fcd4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0040fcd7: cmp dword ptr [ebp - 0x24], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fcdb: je 0x40fce8 */ if (fZ) goto L_0040fce8;
L_0040fcdd:; BB(0x0040fcdd);
    /* 0040fcdd: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fce1: je 0x40fd5e */ if (fZ) goto L_0040fd5e;
L_0040fce3:; BB(0x0040fce3);
    /* 0040fce3: jmp 0x40fdb1 */ goto L_0040fdb1;
L_0040fce8:; BB(0x0040fce8);
    /* 0040fce8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040fceb: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040fcee: and ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0040fcf1: je 0x40fd5c */ if (fZ) goto L_0040fd5c;
L_0040fcf3:; BB(0x0040fcf3);
    /* 0040fcf3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fcf6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040fcf8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fcfb: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 0040fd01: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40fd03u); call_ind(t); }
    /* 0040fd03: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040fd06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fd08: jne 0x40fd5c */ if (!fZ) goto L_0040fd5c;
L_0040fd0a:; BB(0x0040fd0a);
    /* 0040fd0a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd0d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040fd10: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0040fd13: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 0040fd16: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd19: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040fd1c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0040fd1f: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0040fd22: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd25: mov byte ptr [ecx + 8], 1 */ W8((u32)(r_ecx+0x8u), 0x1u);
    /* 0040fd29: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd2c: mov byte ptr [edx + 9], 1 */ W8((u32)(r_edx+0x9u), 0x1u);
    /* 0040fd30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040fd33: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040fd36: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0040fd39: je 0x40fd47 */ if (fZ) goto L_0040fd47;
L_0040fd3b:; BB(0x0040fd3b);
    /* 0040fd3b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd3e: mov dword ptr [edx + 0x58], 8 */ W32((u32)(r_edx+0x58u), 0x8u);
    /* 0040fd45: jmp 0x40fd5c */ goto L_0040fd5c;
L_0040fd47:; BB(0x0040fd47);
    /* 0040fd47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040fd4a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040fd4d: and ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0040fd50: je 0x40fd5c */ if (fZ) goto L_0040fd5c;
L_0040fd52:; BB(0x0040fd52);
    /* 0040fd52: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd55: mov dword ptr [edx + 0x58], 0x10 */ W32((u32)(r_edx+0x58u), 0x10u);
L_0040fd5c:; BB(0x0040fd5c);
    /* 0040fd5c: jmp 0x40fdb1 */ goto L_0040fdb1;
L_0040fd5e:; BB(0x0040fd5e);
    /* 0040fd5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040fd61: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd64: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0040fd67: and edx, dword ptr [ecx + 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x58u)); u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0040fd6a: je 0x40fdb1 */ if (fZ) goto L_0040fdb1;
L_0040fd6c:; BB(0x0040fd6c);
    /* 0040fd6c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd6f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040fd71: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd74: mov eax, dword ptr [edx + 0xa8] */ r_eax = R32((u32)(r_edx+0xa8u));
    /* 0040fd7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40fd7cu); call_ind(t); }
    /* 0040fd7c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040fd7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040fd81: je 0x40fdb1 */ if (fZ) goto L_0040fdb1;
L_0040fd83:; BB(0x0040fd83);
    /* 0040fd83: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd86: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040fd89: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0040fd8c: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0040fd8f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040fd95: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0040fd98: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 0040fd9b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fd9e: call 0x40fdc0 */ r_esp -= 4; W32(r_esp, 0x40fda3u); f_0040fdc0();
    /* 0040fda3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fda6: mov byte ptr [edx + 8], 0 */ W8((u32)(r_edx+0x8u), 0x0u);
    /* 0040fdaa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040fdad: mov byte ptr [eax + 9], 0 */ W8((u32)(r_eax+0x9u), 0x0u);
L_0040fdb1:; BB(0x0040fdb1);
    /* 0040fdb1: mov esp, ebp */ r_esp = r_ebp;
    /* 0040fdb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040fdb4: ret 4 */ FN_RET(0x0040fc20); r_esp += 8; return;
}


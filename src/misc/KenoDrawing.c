#include "protos.h"

void f_0057ea10(void) /* KenoDrawing::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057ea10);
    /* 0057ea10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea11: mov ebp, esp */ r_ebp = r_esp;
    /* 0057ea13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea15: push 0x6a691e */ { u32 v = 0x6a691eu; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057ea20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea22: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057ea27: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057ea29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea2a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057ea2d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057ea33: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0057ea36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea38: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea3b: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x57ea40u); f_005fc0d0();
    /* 0057ea40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ea47: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea4a: mov dword ptr [eax], 0x6cbff8 */ W32((u32)(r_eax), 0x6cbff8u);
    /* 0057ea50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea53: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057ea56: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0057ea59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ea5b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea5e: call 0x5fc4c0 */ r_esp -= 4; W32(r_esp, 0x57ea63u); f_005fc4c0();
    /* 0057ea63: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea66: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea69: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0057ea6c: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0057ea6f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea72: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0057ea79: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057ea80: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057ea83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057ea86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057ea8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057ea8e: mov esp, ebp */ r_esp = r_ebp;
    /* 0057ea90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057ea91: ret 4 */ FN_RET(0x0057ea10); r_esp += 8; return;
}

void f_0057eac0(void) /* KenoDrawing::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057eac0);
    /* 0057eac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057eac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057eac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057eac5: push 0x6a695a */ { u32 v = 0x6a695au; r_esp -= 4; W32(r_esp, v); }
    /* 0057eaca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057ead0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ead1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057ead4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0057ead9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057eadb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057eadc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057eadf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0057eae5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0057eae8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eaeb: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x57eaf0u); f_005fc360();
    /* 0057eaf0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057eaf3: cmp dword ptr [ebp - 0x2c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0057eaf7: ja 0x57f0bd */ if ((!fC&&!fZ)) goto L_0057f0bd;
L_0057eafd:; BB(0x0057eafd);
    /* 0057eafd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057eb00: jmp dword ptr [eax*4 + 0x57f0cc] */ { u32 t = R32((u32)(r_eax*4+0x57f0ccu)); switch (t) { case 0x57eb07u: goto L_0057eb07; case 0x57ebf7u: goto L_0057ebf7; case 0x57ec30u: goto L_0057ec30; case 0x57ecb7u: goto L_0057ecb7; case 0x57ee0eu: goto L_0057ee0e; case 0x57eed7u: goto L_0057eed7; case 0x57ef36u: goto L_0057ef36; case 0x57efd8u: goto L_0057efd8; case 0x57f0b2u: goto L_0057f0b2; default: UNSUP(0x0057eb00, "jump table entry is not a known target"); } }
L_0057eb07:; BB(0x0057eb07);
    /* 0057eb07: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb0a: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 0057eb11: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb14: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0057eb17: call 0x57e4c0 */ r_esp -= 4; W32(r_esp, 0x57eb1cu); f_0057e4c0();
    /* 0057eb1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb1e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb21: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057eb23: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb26: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057eb29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57eb2bu); call_ind(t); }
    /* 0057eb2b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb2e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057eb31: mov eax, dword ptr [edx + 0x184] */ r_eax = R32((u32)(r_edx+0x184u));
    /* 0057eb37: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb3a: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057eb3d: mov ecx, dword ptr [edx + 0x184] */ r_ecx = R32((u32)(r_edx+0x184u));
    /* 0057eb43: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057eb45: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057eb48: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57eb4au); call_ind(t); }
    /* 0057eb4a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb4d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057eb50: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 0057eb56: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb59: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057eb5c: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0057eb62: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057eb64: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057eb67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57eb69u); call_ind(t); }
    /* 0057eb69: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb6c: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057eb6f: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0057eb75: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb78: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057eb7b: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 0057eb81: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057eb83: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0057eb86: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57eb88u); call_ind(t); }
    /* 0057eb88: push 0x30dfe5 */ { u32 v = 0x30dfe5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eb8d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eb90: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057eb93: mov ecx, dword ptr [ecx + 0x18c] */ r_ecx = R32((u32)(r_ecx+0x18cu));
    /* 0057eb99: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57eb9eu); f_005eaf00();
    /* 0057eb9e: push 0x30dfcc */ { u32 v = 0x30dfccu; r_esp -= 4; W32(r_esp, v); }
    /* 0057eba3: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eba6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057eba9: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057ebaf: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57ebb4u); f_005eaf00();
    /* 0057ebb4: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ebb7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ebba: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0057ebc0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ebc3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ebc6: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057ebcc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057ebce: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0057ebd1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57ebd3u); call_ind(t); }
    /* 0057ebd3: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ebd8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ebdb: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057ebde: call 0x57e9f0 */ r_esp -= 4; W32(r_esp, 0x57ebe3u); f_0057e9f0();
    /* 0057ebe3: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0057ebe5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ebe8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ebea: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ebed: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057ebf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ebf2u); call_ind(t); }
    /* 0057ebf2: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057ebf7:; BB(0x0057ebf7);
    /* 0057ebf7: push 0x30dfe6 */ { u32 v = 0x30dfe6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ebfc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ebff: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ec02: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0057ec08: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57ec0du); f_005eaf00();
    /* 0057ec0d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ec0f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec12: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057ec14: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec17: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057ec1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ec1cu); call_ind(t); }
    /* 0057ec1c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0057ec1e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec21: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ec23: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec26: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057ec29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ec2bu); call_ind(t); }
    /* 0057ec2b: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057ec30:; BB(0x0057ec30);
    /* 0057ec30: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ec32: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec35: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ec37: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec3a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057ec3d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ec3fu); call_ind(t); }
    /* 0057ec3f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec42: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ec45: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0057ec4b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec4e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ec51: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 0057ec57: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057ec59: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057ec5c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57ec5eu); call_ind(t); }
    /* 0057ec5e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ec60: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ec65u); f_00686d82();
    /* 0057ec65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ec68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057ec6b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057ec72: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ec76: je 0x57ec89 */ if (fZ) goto L_0057ec89;
L_0057ec78:; BB(0x0057ec78);
    /* 0057ec78: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ec7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ec7c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057ec7f: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x57ec84u); f_006010a0();
    /* 0057ec84: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057ec87: jmp 0x57ec90 */ goto L_0057ec90;
L_0057ec89:; BB(0x0057ec89);
    /* 0057ec89: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0057ec90:; BB(0x0057ec90);
    /* 0057ec90: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057ec93: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0057ec96: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057ec9d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057eca0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057eca1: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eca4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057eca7: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0057ecad: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57ecb2u); f_005f5d50();
    /* 0057ecb2: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057ecb7:; BB(0x0057ecb7);
    /* 0057ecb7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ecba: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0057ecbd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057ecc0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ecc3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0057ecc6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ecc8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eccb: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057ecce: mov ecx, dword ptr [eax + 0x188] */ r_ecx = R32((u32)(r_eax+0x188u));
    /* 0057ecd4: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57ecd9u); f_005f5d50();
    /* 0057ecd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ecdb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ecde: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ece1: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 0057ece7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ecea: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057eced: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 0057ecf3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057ecf5: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0057ecfb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57ecfdu); call_ind(t); }
    /* 0057ecfd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed00: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057ed03: mov edx, dword ptr [ecx + 0x188] */ r_edx = R32((u32)(r_ecx+0x188u));
    /* 0057ed09: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed0c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057ed0f: mov ecx, dword ptr [ecx + 0x188] */ r_ecx = R32((u32)(r_ecx+0x188u));
    /* 0057ed15: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057ed17: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057ed1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ed1cu); call_ind(t); }
    /* 0057ed1c: push 0x30dfe5 */ { u32 v = 0x30dfe5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ed21: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed24: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ed27: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0057ed2d: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57ed32u); f_005eaf00();
    /* 0057ed32: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0057ed37: mov ecx, dword ptr [eax + 0x98] */ r_ecx = R32((u32)(r_eax+0x98u));
    /* 0057ed3d: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057ed40: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0057ed46: lea eax, [edx + ecx + 0x9c] */ r_eax = (u32)(r_edx+r_ecx+0x9cu);
    /* 0057ed4d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed50: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0057ed53: movsx eax, byte ptr [eax + edx - 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0xffffffffu));
    /* 0057ed58: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057ed5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ed5c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed5f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ed62: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed65: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0057ed68: mov edx, dword ptr [edx + ecx*4 + 0x190] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x190u));
    /* 0057ed6f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed72: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0057ed75: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed78: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0057ed7b: mov ecx, dword ptr [eax + ecx*4 + 0x190] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x190u));
    /* 0057ed82: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057ed84: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057ed8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ed8cu); call_ind(t); }
    /* 0057ed8c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed8f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ed92: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ed95: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0057ed98: mov edx, dword ptr [edx + ecx*4 + 0x190] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x190u));
    /* 0057ed9f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eda2: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0057eda5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eda8: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0057edab: mov ecx, dword ptr [eax + ecx*4 + 0x190] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x190u));
    /* 0057edb2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057edb4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057edb7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57edb9u); call_ind(t); }
    /* 0057edb9: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057edbf: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 0057edc5: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057edc8: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0057edcd: lea ecx, [eax + edx + 0x9c] */ r_ecx = (u32)(r_eax+r_edx+0x9cu);
    /* 0057edd4: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057edd7: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0057edda: movsx ecx, byte ptr [ecx + eax - 1] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0xffffffffu));
    /* 0057eddf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ede0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ede3: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0057ede6: call 0x57e9d0 */ r_esp -= 4; W32(r_esp, 0x57edebu); f_0057e9d0();
    /* 0057edeb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eded: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057edf0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057edf2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057edf5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057edf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57edfau); call_ind(t); }
    /* 0057edfa: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0057edfc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057edff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ee01: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ee04: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057ee07: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ee09u); call_ind(t); }
    /* 0057ee09: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057ee0e:; BB(0x0057ee0e);
    /* 0057ee0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee10: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ee13: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ee16: mov eax, dword ptr [edx + 0x190] */ r_eax = R32((u32)(r_edx+0x190u));
    /* 0057ee1c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ee1f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ee22: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057ee28: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057ee2a: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0057ee30: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57ee32u); call_ind(t); }
    /* 0057ee32: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ee35: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0057ee38: add ecx, 0x30dfcb */ {  u32 a = r_ecx; u32 b = 0x30dfcbu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057ee3e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee3f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ee42: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057ee45: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057ee4b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57ee50u); f_005eaf00();
    /* 0057ee50: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee52: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ee57u); f_00686d82();
    /* 0057ee57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ee5a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057ee5d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057ee64: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ee68: je 0x57ee7b */ if (fZ) goto L_0057ee7b;
L_0057ee6a:; BB(0x0057ee6a);
    /* 0057ee6a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ee6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee6e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057ee71: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x57ee76u); f_006010a0();
    /* 0057ee76: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057ee79: jmp 0x57ee82 */ goto L_0057ee82;
L_0057ee7b:; BB(0x0057ee7b);
    /* 0057ee7b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0057ee82:; BB(0x0057ee82);
    /* 0057ee82: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057ee85: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0057ee88: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057ee8f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057ee92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057ee93: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ee96: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ee99: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057ee9f: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57eea4u); f_005f5d50();
    /* 0057eea4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eea7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057eeaa: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057eeb0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eeb3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057eeb6: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0057eebc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057eebe: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057eec1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57eec3u); call_ind(t); }
    /* 0057eec3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eec5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eec8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057eeca: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eecd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057eed0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57eed2u); call_ind(t); }
    /* 0057eed2: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057eed7:; BB(0x0057eed7);
    /* 0057eed7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eed9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eedc: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057eedf: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057eee5: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57eeeau); f_005f5d50();
    /* 0057eeea: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eeed: cmp dword ptr [eax + 0x24], 0x14 */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057eef1: jne 0x57ef13 */ if (!fZ) goto L_0057ef13;
L_0057eef3:; BB(0x0057eef3);
    /* 0057eef3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0057eef5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eef8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057eefa: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eefd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057ef00: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ef02u); call_ind(t); }
    /* 0057ef02: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef04: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef07: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ef09: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef0c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057ef0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ef11u); call_ind(t); }
    /* 0057ef11: jmp 0x57ef31 */ goto L_0057ef31;
L_0057ef13:; BB(0x0057ef13);
    /* 0057ef13: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef15: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ef1a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef1d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057ef20: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ef22u); call_ind(t); }
    /* 0057ef22: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef24: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef27: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057ef29: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef2c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057ef2f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ef31u); call_ind(t); }
L_0057ef31:; BB(0x0057ef31);
    /* 0057ef31: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057ef36:; BB(0x0057ef36);
    /* 0057ef36: push 0x30dfe0 */ { u32 v = 0x30dfe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef3b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef3e: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057ef41: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057ef47: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57ef4cu); f_005eaf00();
    /* 0057ef4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef4e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef51: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057ef54: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057ef5a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef5d: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057ef60: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0057ef66: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057ef68: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057ef6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57ef70u); call_ind(t); }
    /* 0057ef70: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef72: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57ef77u); f_00686d82();
    /* 0057ef77: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057ef7a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057ef7d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057ef84: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ef88: je 0x57ef9b */ if (fZ) goto L_0057ef9b;
L_0057ef8a:; BB(0x0057ef8a);
    /* 0057ef8a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057ef8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057ef8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057ef91: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x57ef96u); f_006010a0();
    /* 0057ef96: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057ef99: jmp 0x57efa2 */ goto L_0057efa2;
L_0057ef9b:; BB(0x0057ef9b);
    /* 0057ef9b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0057efa2:; BB(0x0057efa2);
    /* 0057efa2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057efa5: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0057efa8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057efaf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057efb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057efb3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057efb6: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057efb9: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057efbf: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57efc4u); f_005f5d50();
    /* 0057efc4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057efc6: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057efc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057efcb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057efce: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057efd1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57efd3u); call_ind(t); }
    /* 0057efd3: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057efd8:; BB(0x0057efd8);
    /* 0057efd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057efda: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057efdd: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057efe0: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 0057efe6: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x57efebu); f_005f5d50();
    /* 0057efeb: push 0x30dfcc */ { u32 v = 0x30dfccu; r_esp -= 4; W32(r_esp, v); }
    /* 0057eff0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057eff3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057eff6: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0057effc: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x57f001u); f_005eaf00();
    /* 0057f001: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f003: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f006: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057f009: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 0057f00f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f012: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057f015: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 0057f01b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057f01d: mov ecx, edx */ r_ecx = r_edx;
    /* 0057f01f: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0057f025: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57f027u); call_ind(t); }
    /* 0057f027: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f02a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057f02d: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0057f033: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f036: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057f039: mov ecx, dword ptr [ecx + 0x190] */ r_ecx = R32((u32)(r_ecx+0x190u));
    /* 0057f03f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f041: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f044: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f046u); call_ind(t); }
    /* 0057f046: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f049: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057f04c: mov eax, dword ptr [edx + 0x18c] */ r_eax = R32((u32)(r_edx+0x18cu));
    /* 0057f052: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f055: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0057f058: mov ecx, dword ptr [edx + 0x18c] */ r_ecx = R32((u32)(r_edx+0x18cu));
    /* 0057f05e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0057f060: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0057f063: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57f065u); call_ind(t); }
    /* 0057f065: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f068: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057f06b: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 0057f071: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f074: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0057f077: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 0057f07d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057f07f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057f082: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f084u); call_ind(t); }
    /* 0057f084: mov ecx, dword ptr [0x79357c] */ r_ecx = R32((u32)(0x79357cu));
    /* 0057f08a: call 0x583aa0 */ r_esp -= 4; W32(r_esp, 0x57f08fu); f_00583aa0();
    /* 0057f08f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f091: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f094: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f096: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f099: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057f09c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f09eu); call_ind(t); }
    /* 0057f09e: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0057f0a3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f0a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057f0a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f0ab: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057f0ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57f0b0u); call_ind(t); }
    /* 0057f0b0: jmp 0x57f0bd */ goto L_0057f0bd;
L_0057f0b2:; BB(0x0057f0b2);
    /* 0057f0b2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057f0b5: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0057f0b8: call 0x57e820 */ r_esp -= 4; W32(r_esp, 0x57f0bdu); f_0057e820();
L_0057f0bd:; BB(0x0057f0bd);
    /* 0057f0bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057f0c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057f0c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057f0c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0057f0ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057f0cb: ret  */ FN_RET(0x0057eac0); r_esp += 4; return;
}


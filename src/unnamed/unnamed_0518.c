#include "protos.h"

void f_00518ac0(void) /* sub_518AC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00518ac0);
    /* 00518ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00518ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00518ac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00518ac5: push 0x6a3ce6 */ { u32 v = 0x6a3ce6u; r_esp -= 4; W32(r_esp, v); }
    /* 00518aca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00518ad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518ad1: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00518ad4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00518ad5: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00518ada: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00518adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518add: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00518ae0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00518ae6: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00518ae9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00518aec: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00518aef: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00518af2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00518af5: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00518af8: cmp dword ptr [ebp - 0x5c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00518afc: ja 0x51988f */ if ((!fC&&!fZ)) goto L_0051988f;
L_00518b02:; BB(0x00518b02);
    /* 00518b02: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00518b05: jmp dword ptr [edx*4 + 0x5198a4] */ { u32 t = R32((u32)(r_edx*4+0x5198a4u)); switch (t) { case 0x518b0cu: goto L_00518b0c; case 0x518cb9u: goto L_00518cb9; case 0x518e1cu: goto L_00518e1c; case 0x51911fu: goto L_0051911f; case 0x519422u: goto L_00519422; default: UNSUP(0x00518b05, "jump table entry is not a known target"); } }
L_00518b0c:; BB(0x00518b0c);
    /* 00518b0c: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518b11: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x518b16u); f_00686d82();
    /* 00518b16: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518b19: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00518b1c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00518b23: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518b27: je 0x518b3a */ if (fZ) goto L_00518b3a;
L_00518b29:; BB(0x00518b29);
    /* 00518b29: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518b2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00518b30: call 0x519ae0 */ r_esp -= 4; W32(r_esp, 0x518b35u); f_00519ae0();
    /* 00518b35: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00518b38: jmp 0x518b41 */ goto L_00518b41;
L_00518b3a:; BB(0x00518b3a);
    /* 00518b3a: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00518b41:; BB(0x00518b41);
    /* 00518b41: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00518b44: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00518b47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00518b4e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b51: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00518b54: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 00518b5a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b5d: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518b63: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b66: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00518b69: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b6c: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518b72: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b75: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518b7b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518b7d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00518b80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518b82u); call_ind(t); }
    /* 00518b82: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00518b87: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b8a: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518b90: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518b93: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518b99: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518b9b: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00518ba1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518ba3u); call_ind(t); }
    /* 00518ba3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ba5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ba7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00518ba9: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00518bab: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00518bad: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00518baf: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 00518bb4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x518bb9u); f_00630f40();
    /* 00518bb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518bbd: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518bc0: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518bc6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518bc9: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518bcf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518bd1: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00518bd7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518bd9u); call_ind(t); }
    /* 00518bd9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518bdc: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518be2: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518be5: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518beb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518bed: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00518bf0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518bf2u); call_ind(t); }
    /* 00518bf2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518bf5: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518bfb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518bfe: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518c04: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518c06: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00518c0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518c0eu); call_ind(t); }
    /* 00518c0e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00518c10: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c13: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00518c19: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x518c1eu); f_006026f0();
    /* 00518c1e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00518c20: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c23: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 00518c29: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x518c2eu); f_00602740();
    /* 00518c2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00518c30: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c33: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518c39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518c3a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c3d: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x518c42u); f_00519900();
    /* 00518c42: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c45: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c48: mov esi, dword ptr [edx + 0x10c] */ r_esi = R32((u32)(r_edx+0x10cu));
    /* 00518c4e: sub esi, dword ptr [eax + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518c54: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c57: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00518c5d: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x518c62u); f_005f5590();
    /* 00518c62: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518c64: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518c67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00518c68: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c6b: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c6e: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 00518c74: sub ecx, dword ptr [eax + 0x108] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x108u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00518c7a: mov eax, ecx */ r_eax = r_ecx;
    /* 00518c7c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00518c7d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00518c7f: mov esi, eax */ r_esi = r_eax;
    /* 00518c81: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00518c83: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c86: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 00518c8c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x518c91u); f_005f5550();
    /* 00518c91: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00518c92: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00518c94: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00518c96: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518c98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00518c99: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518c9c: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518ca2: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518ca5: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00518cab: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00518cad: mov ecx, eax */ r_ecx = r_eax;
    /* 00518caf: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00518cb2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518cb4u); call_ind(t); }
    /* 00518cb4: jmp 0x51988f */ goto L_0051988f;
L_00518cb9:; BB(0x00518cb9);
    /* 00518cb9: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00518cbe: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x518cc3u); f_00686d82();
    /* 00518cc3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518cc6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00518cc9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00518cd0: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518cd4: je 0x518ce7 */ if (fZ) goto L_00518ce7;
L_00518cd6:; BB(0x00518cd6);
    /* 00518cd6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518cd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518cda: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00518cdd: call 0x519bc0 */ r_esp -= 4; W32(r_esp, 0x518ce2u); f_00519bc0();
    /* 00518ce2: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00518ce5: jmp 0x518cee */ goto L_00518cee;
L_00518ce7:; BB(0x00518ce7);
    /* 00518ce7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_00518cee:; BB(0x00518cee);
    /* 00518cee: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00518cf1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00518cf4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00518cfb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518cfe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00518d01: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
    /* 00518d07: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d0a: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00518d10: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d13: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00518d16: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d19: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00518d1f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d22: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 00518d28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00518d2a: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00518d2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518d2fu); call_ind(t); }
    /* 00518d2f: push 0x2071 */ { u32 v = 0x2071u; r_esp -= 4; W32(r_esp, v); }
    /* 00518d34: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d37: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 00518d3d: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d40: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00518d46: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518d48: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00518d4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518d50u); call_ind(t); }
    /* 00518d50: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d53: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 00518d59: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d5c: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00518d62: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518d64: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00518d67: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518d69u); call_ind(t); }
    /* 00518d69: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d6c: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 00518d72: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d75: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00518d7b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518d7d: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00518d83: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518d85u); call_ind(t); }
    /* 00518d85: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00518d87: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d8a: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 00518d90: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x518d95u); f_006026f0();
    /* 00518d95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00518d97: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518d9a: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00518da0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518da1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518da4: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x518da9u); f_00519900();
    /* 00518da9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518dac: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518daf: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 00518db5: sub esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518dbb: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518dbe: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00518dc4: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x518dc9u); f_005f5590();
    /* 00518dc9: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518dcb: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518dce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00518dcf: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518dd2: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518dd5: mov eax, dword ptr [ecx + 0x110] */ r_eax = R32((u32)(r_ecx+0x110u));
    /* 00518ddb: sub eax, dword ptr [edx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x108u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00518de1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00518de2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00518de4: mov esi, eax */ r_esi = r_eax;
    /* 00518de6: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00518de8: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518deb: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00518df1: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x518df6u); f_005f5550();
    /* 00518df6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00518df7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00518df9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00518dfb: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00518dfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00518dfe: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e01: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 00518e07: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e0a: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00518e10: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518e12: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00518e15: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518e17u); call_ind(t); }
    /* 00518e17: jmp 0x51988f */ goto L_0051988f;
L_00518e1c:; BB(0x00518e1c);
    /* 00518e1c: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518e21: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x518e26u); f_00686d82();
    /* 00518e26: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518e29: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00518e2c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00518e33: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518e37: je 0x518e4a */ if (fZ) goto L_00518e4a;
L_00518e39:; BB(0x00518e39);
    /* 00518e39: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e3c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518e3d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00518e40: call 0x519ae0 */ r_esp -= 4; W32(r_esp, 0x518e45u); f_00519ae0();
    /* 00518e45: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00518e48: jmp 0x518e51 */ goto L_00518e51;
L_00518e4a:; BB(0x00518e4a);
    /* 00518e4a: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00518e51:; BB(0x00518e51);
    /* 00518e51: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00518e54: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00518e57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00518e5e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e61: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00518e64: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
    /* 00518e6a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e6d: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00518e73: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e76: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00518e79: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e7c: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00518e82: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e85: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00518e8b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00518e8d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00518e90: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518e92u); call_ind(t); }
    /* 00518e92: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00518e97: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518e9a: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518ea0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518ea3: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518ea9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518eab: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00518eb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518eb3u); call_ind(t); }
    /* 00518eb3: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00518eb5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00518eb7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00518eb9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ebb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518ebe: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00518ec4: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x518ec9u); f_006023d0();
    /* 00518ec9: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 00518ece: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x518ed3u); f_00630f40();
    /* 00518ed3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00518ed7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518eda: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00518ee0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518ee3: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00518ee9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00518eeb: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00518ef1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518ef3u); call_ind(t); }
    /* 00518ef3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518ef6: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00518efc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518eff: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518f05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518f07: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00518f0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518f0cu); call_ind(t); }
    /* 00518f0c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00518f0e: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518f11: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00518f17: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x518f1cu); f_006026f0();
    /* 00518f1c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00518f1e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518f21: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 00518f27: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x518f2cu); f_00602740();
    /* 00518f2c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518f2f: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00518f35: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518f38: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00518f3e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00518f40: mov ecx, eax */ r_ecx = r_eax;
    /* 00518f42: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00518f48: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518f4au); call_ind(t); }
    /* 00518f4a: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00518f4f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x518f54u); f_00686d82();
    /* 00518f54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00518f57: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00518f5a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00518f61: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00518f65: je 0x518f78 */ if (fZ) goto L_00518f78;
L_00518f67:; BB(0x00518f67);
    /* 00518f67: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518f6a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00518f6b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00518f6e: call 0x519b50 */ r_esp -= 4; W32(r_esp, 0x518f73u); f_00519b50();
    /* 00518f73: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00518f76: jmp 0x518f7f */ goto L_00518f7f;
L_00518f78:; BB(0x00518f78);
    /* 00518f78: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00518f7f:; BB(0x00518f7f);
    /* 00518f7f: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00518f82: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00518f85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00518f8c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518f8f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00518f92: mov dword ptr [eax + 0x1c0], ecx */ W32((u32)(r_eax+0x1c0u), r_ecx);
    /* 00518f98: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518f9b: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00518fa1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518fa4: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00518fa7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518faa: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00518fb0: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518fb3: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 00518fb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00518fbb: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00518fbe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518fc0u); call_ind(t); }
    /* 00518fc0: push 0x206f */ { u32 v = 0x206fu; r_esp -= 4; W32(r_esp, v); }
    /* 00518fc5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518fc8: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 00518fce: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518fd1: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 00518fd7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518fd9: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 00518fdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518fe1u); call_ind(t); }
    /* 00518fe1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518fe4: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 00518fea: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518fed: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 00518ff3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00518ff5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00518ff8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x518ffau); call_ind(t); }
    /* 00518ffa: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00518ffc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00518fff: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 00519005: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x51900au); f_006026f0();
    /* 0051900a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051900d: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00519013: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519016: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 0051901c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051901e: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00519024: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519026u); call_ind(t); }
    /* 00519026: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00519028: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051902b: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00519031: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519032: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519035: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x51903au); f_00519900();
    /* 0051903a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051903c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051903f: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 00519045: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519046: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519049: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x51904eu); f_00519900();
    /* 0051904e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519051: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519054: mov esi, dword ptr [edx + 0x10c] */ r_esi = R32((u32)(r_edx+0x10cu));
    /* 0051905a: sub esi, dword ptr [eax + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519060: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519063: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00519069: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x51906eu); f_005f5590();
    /* 0051906e: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519070: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519073: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519074: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519077: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051907a: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 00519080: sub ecx, dword ptr [eax + 0x108] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x108u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00519086: mov eax, ecx */ r_eax = r_ecx;
    /* 00519088: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00519089: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051908b: mov esi, eax */ r_esi = r_eax;
    /* 0051908d: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0051908f: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519092: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 00519098: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x51909du); f_005f5550();
    /* 0051909d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0051909f: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005190a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005190a3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005190a6: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005190ac: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005190af: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005190b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005190b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005190b9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005190bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5190beu); call_ind(t); }
    /* 005190be: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005190c1: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005190c4: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 005190ca: sub esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005190d0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005190d3: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005190d9: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5190deu); f_005f5590();
    /* 005190de: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005190e0: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005190e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005190e4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005190e7: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005190ea: mov eax, dword ptr [ecx + 0x110] */ r_eax = R32((u32)(r_ecx+0x110u));
    /* 005190f0: sub eax, dword ptr [edx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x108u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005190f6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005190f7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005190f9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005190fb: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005190fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005190ff: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519102: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 00519108: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051910b: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00519111: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00519113: mov ecx, eax */ r_ecx = r_eax;
    /* 00519115: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00519118: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51911au); call_ind(t); }
    /* 0051911a: jmp 0x51988f */ goto L_0051988f;
L_0051911f:; BB(0x0051911f);
    /* 0051911f: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00519124: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x519129u); f_00686d82();
    /* 00519129: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051912c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0051912f: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00519136: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051913a: je 0x51914d */ if (fZ) goto L_0051914d;
L_0051913c:; BB(0x0051913c);
    /* 0051913c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051913f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519140: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00519143: call 0x519ae0 */ r_esp -= 4; W32(r_esp, 0x519148u); f_00519ae0();
    /* 00519148: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0051914b: jmp 0x519154 */ goto L_00519154;
L_0051914d:; BB(0x0051914d);
    /* 0051914d: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00519154:; BB(0x00519154);
    /* 00519154: mov edx, dword ptr [ebp - 0x70] */ r_edx = R32((u32)(r_ebp+0xffffff90u));
    /* 00519157: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0051915a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00519161: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519164: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00519167: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
    /* 0051916d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519170: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00519176: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519179: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0051917c: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051917f: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00519185: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519188: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0051918e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519190: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00519193: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519195u); call_ind(t); }
    /* 00519195: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051919a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051919d: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005191a3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005191a6: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005191ac: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005191ae: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005191b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5191b6u); call_ind(t); }
    /* 005191b6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005191b8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005191ba: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005191bc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005191be: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005191c1: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005191c7: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x5191ccu); f_006023d0();
    /* 005191cc: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005191d1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5191d6u); f_00630f40();
    /* 005191d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005191d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005191da: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005191dd: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005191e3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005191e6: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005191ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005191ee: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005191f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5191f6u); call_ind(t); }
    /* 005191f6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005191f9: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005191ff: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519202: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00519208: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0051920a: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051920d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51920fu); call_ind(t); }
    /* 0051920f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00519211: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519214: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0051921a: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x51921fu); f_006026f0();
    /* 0051921f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00519221: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519224: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0051922a: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x51922fu); f_00602740();
    /* 0051922f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519232: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 00519238: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051923b: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00519241: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00519243: mov ecx, eax */ r_ecx = r_eax;
    /* 00519245: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0051924b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51924du); call_ind(t); }
    /* 0051924d: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00519252: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x519257u); f_00686d82();
    /* 00519257: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051925a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0051925d: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00519264: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519268: je 0x51927b */ if (fZ) goto L_0051927b;
L_0051926a:; BB(0x0051926a);
    /* 0051926a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051926d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051926e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00519271: call 0x519bc0 */ r_esp -= 4; W32(r_esp, 0x519276u); f_00519bc0();
    /* 00519276: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00519279: jmp 0x519282 */ goto L_00519282;
L_0051927b:; BB(0x0051927b);
    /* 0051927b: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00519282:; BB(0x00519282);
    /* 00519282: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00519285: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00519288: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051928f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519292: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00519295: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
    /* 0051929b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051929e: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 005192a4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005192a7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005192aa: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005192ad: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 005192b3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005192b6: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 005192bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005192be: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005192c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5192c3u); call_ind(t); }
    /* 005192c3: push 0x2071 */ { u32 v = 0x2071u; r_esp -= 4; W32(r_esp, v); }
    /* 005192c8: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005192cb: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 005192d1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005192d4: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 005192da: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005192dc: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005192e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5192e4u); call_ind(t); }
    /* 005192e4: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005192e7: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 005192ed: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005192f0: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 005192f6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005192f8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005192fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5192fdu); call_ind(t); }
    /* 005192fd: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 005192ff: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519302: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 00519308: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x51930du); f_006026f0();
    /* 0051930d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519310: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00519316: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519319: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 0051931f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519321: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00519327: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519329u); call_ind(t); }
    /* 00519329: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051932b: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051932e: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00519334: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519335: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519338: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x51933du); f_00519900();
    /* 0051933d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051933f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519342: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 00519348: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519349: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051934c: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x519351u); f_00519900();
    /* 00519351: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519354: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519357: mov esi, dword ptr [edx + 0x10c] */ r_esi = R32((u32)(r_edx+0x10cu));
    /* 0051935d: sub esi, dword ptr [eax + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519363: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519366: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0051936c: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x519371u); f_005f5590();
    /* 00519371: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519373: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519376: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519377: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051937a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051937d: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 00519383: sub ecx, dword ptr [eax + 0x108] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x108u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00519389: mov eax, ecx */ r_eax = r_ecx;
    /* 0051938b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051938c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051938e: mov esi, eax */ r_esi = r_eax;
    /* 00519390: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00519392: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519395: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0051939b: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x5193a0u); f_005f5550();
    /* 005193a0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005193a2: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005193a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005193a6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005193a9: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005193af: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005193b2: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005193b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005193ba: mov ecx, eax */ r_ecx = r_eax;
    /* 005193bc: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005193bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5193c1u); call_ind(t); }
    /* 005193c1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005193c4: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005193c7: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 005193cd: sub esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005193d3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005193d6: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 005193dc: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5193e1u); f_005f5590();
    /* 005193e1: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005193e3: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005193e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005193e7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005193ea: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005193ed: mov eax, dword ptr [ecx + 0x110] */ r_eax = R32((u32)(r_ecx+0x110u));
    /* 005193f3: sub eax, dword ptr [edx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x108u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005193f9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005193fa: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005193fc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005193fe: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00519401: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00519402: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519405: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0051940b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051940e: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00519414: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00519416: mov ecx, eax */ r_ecx = r_eax;
    /* 00519418: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0051941b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51941du); call_ind(t); }
    /* 0051941d: jmp 0x51988f */ goto L_0051988f;
L_00519422:; BB(0x00519422);
    /* 00519422: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00519427: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51942cu); f_00686d82();
    /* 0051942c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051942f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00519432: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00519439: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051943d: je 0x519450 */ if (fZ) goto L_00519450;
L_0051943f:; BB(0x0051943f);
    /* 0051943f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519442: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519443: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00519446: call 0x519ae0 */ r_esp -= 4; W32(r_esp, 0x51944bu); f_00519ae0();
    /* 0051944b: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0051944e: jmp 0x519457 */ goto L_00519457;
L_00519450:; BB(0x00519450);
    /* 00519450: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_00519457:; BB(0x00519457);
    /* 00519457: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0051945a: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0051945d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00519464: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519467: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0051946a: mov dword ptr [eax + 0x1bc], ecx */ W32((u32)(r_eax+0x1bcu), r_ecx);
    /* 00519470: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519473: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00519479: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051947c: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0051947f: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519482: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00519488: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051948b: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00519491: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519493: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00519496: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519498u); call_ind(t); }
    /* 00519498: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051949d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005194a0: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 005194a6: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005194a9: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005194af: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005194b1: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005194b7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5194b9u); call_ind(t); }
    /* 005194b9: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005194bb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005194bd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005194bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005194c1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005194c4: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005194ca: call 0x6023d0 */ r_esp -= 4; W32(r_esp, 0x5194cfu); f_006023d0();
    /* 005194cf: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 005194d4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5194d9u); f_00630f40();
    /* 005194d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005194dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005194dd: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005194e0: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 005194e6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005194e9: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005194ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005194f1: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 005194f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5194f9u); call_ind(t); }
    /* 005194f9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005194fc: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00519502: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519505: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0051950b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0051950d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00519510: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519512u); call_ind(t); }
    /* 00519512: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00519514: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519517: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0051951d: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x519522u); f_006026f0();
    /* 00519522: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00519524: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519527: mov ecx, dword ptr [edx + 0x1bc] */ r_ecx = R32((u32)(r_edx+0x1bcu));
    /* 0051952d: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x519532u); f_00602740();
    /* 00519532: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519535: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0051953b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051953e: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00519544: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00519546: mov ecx, eax */ r_ecx = r_eax;
    /* 00519548: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0051954e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519550u); call_ind(t); }
    /* 00519550: push 0x1e4 */ { u32 v = 0x1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00519555: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x51955au); f_00686d82();
    /* 0051955a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051955d: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00519560: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00519567: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051956b: je 0x51957e */ if (fZ) goto L_0051957e;
L_0051956d:; BB(0x0051956d);
    /* 0051956d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519570: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519571: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00519574: call 0x519b50 */ r_esp -= 4; W32(r_esp, 0x519579u); f_00519b50();
    /* 00519579: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0051957c: jmp 0x519585 */ goto L_00519585;
L_0051957e:; BB(0x0051957e);
    /* 0051957e: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00519585:; BB(0x00519585);
    /* 00519585: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 00519588: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0051958b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00519592: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519595: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00519598: mov dword ptr [eax + 0x1c0], ecx */ W32((u32)(r_eax+0x1c0u), r_ecx);
    /* 0051959e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195a1: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005195a7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195aa: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005195ad: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195b0: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 005195b6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195b9: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 005195bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005195c1: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005195c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5195c6u); call_ind(t); }
    /* 005195c6: push 0x206f */ { u32 v = 0x206fu; r_esp -= 4; W32(r_esp, v); }
    /* 005195cb: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195ce: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 005195d4: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195d7: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005195dd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005195df: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005195e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5195e7u); call_ind(t); }
    /* 005195e7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195ea: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 005195f0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005195f3: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005195f9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005195fb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005195fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519600u); call_ind(t); }
    /* 00519600: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00519602: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519605: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 0051960b: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x519610u); f_006026f0();
    /* 00519610: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519613: mov eax, dword ptr [edx + 0x1c0] */ r_eax = R32((u32)(r_edx+0x1c0u));
    /* 00519619: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051961c: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 00519622: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519624: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 0051962a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51962cu); call_ind(t); }
    /* 0051962c: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00519631: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x519636u); f_00686d82();
    /* 00519636: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00519639: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0051963c: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00519643: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519647: je 0x51965a */ if (fZ) goto L_0051965a;
L_00519649:; BB(0x00519649);
    /* 00519649: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051964c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051964d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00519650: call 0x519bc0 */ r_esp -= 4; W32(r_esp, 0x519655u); f_00519bc0();
    /* 00519655: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00519658: jmp 0x519661 */ goto L_00519661;
L_0051965a:; BB(0x0051965a);
    /* 0051965a: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00519661:; BB(0x00519661);
    /* 00519661: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 00519664: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00519667: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0051966e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519671: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00519674: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
    /* 0051967a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051967d: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00519683: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519686: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00519689: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051968c: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00519692: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519695: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 0051969b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051969d: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005196a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5196a2u); call_ind(t); }
    /* 005196a2: push 0x2071 */ { u32 v = 0x2071u; r_esp -= 4; W32(r_esp, v); }
    /* 005196a7: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005196aa: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 005196b0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005196b3: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 005196b9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005196bb: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005196c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5196c3u); call_ind(t); }
    /* 005196c3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005196c6: mov edx, dword ptr [ecx + 0x1c8] */ r_edx = R32((u32)(r_ecx+0x1c8u));
    /* 005196cc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005196cf: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 005196d5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005196d7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005196da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5196dcu); call_ind(t); }
    /* 005196dc: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 005196de: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005196e1: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 005196e7: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x5196ecu); f_006026f0();
    /* 005196ec: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005196ef: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 005196f5: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005196f8: mov ecx, dword ptr [ecx + 0x1c8] */ r_ecx = R32((u32)(r_ecx+0x1c8u));
    /* 005196fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00519700: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00519706: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519708u); call_ind(t); }
    /* 00519708: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051970a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051970d: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 00519713: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519714: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519717: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x51971cu); f_00519900();
    /* 0051971c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051971e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519721: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 00519727: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519728: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051972b: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x519730u); f_00519900();
    /* 00519730: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00519732: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519735: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0051973b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051973c: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051973f: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x519744u); f_00519900();
    /* 00519744: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519747: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051974a: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 00519750: sub esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519756: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519759: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0051975f: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x519764u); f_005f5590();
    /* 00519764: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519766: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519769: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051976a: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051976d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519770: mov eax, dword ptr [ecx + 0x110] */ r_eax = R32((u32)(r_ecx+0x110u));
    /* 00519776: sub eax, dword ptr [edx + 0x108] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x108u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051977c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0051977d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051977f: mov esi, eax */ r_esi = r_eax;
    /* 00519781: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00519783: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519786: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 0051978c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x519791u); f_005f5550();
    /* 00519791: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00519792: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00519794: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00519796: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519798: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519799: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051979c: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 005197a2: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005197a5: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005197ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005197ad: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005197b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5197b2u); call_ind(t); }
    /* 005197b2: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005197b5: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005197b8: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 005197be: sub esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005197c4: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005197c7: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 005197cd: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x5197d2u); f_005f5590();
    /* 005197d2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005197d4: sub esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005197d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005197d8: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005197db: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 005197e1: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005197e4: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 005197ea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005197ec: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005197ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5197f1u); call_ind(t); }
    /* 005197f1: mov esi, eax */ r_esi = r_eax;
    /* 005197f3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005197f6: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 005197fc: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x519801u); f_005f5550();
    /* 00519801: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519803: sub esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519806: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519807: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0051980a: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 00519810: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519813: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 00519819: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0051981b: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0051981e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x519820u); call_ind(t); }
    /* 00519820: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519823: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519826: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 0051982c: sub esi, dword ptr [edx + 0x104] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x104u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519832: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519835: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0051983b: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x519840u); f_005f5590();
    /* 00519840: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519842: sub esi, 0x26 */ {  u32 a = r_esi; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00519845: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00519846: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519849: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 0051984f: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519852: mov ecx, dword ptr [eax + 0x1c0] */ r_ecx = R32((u32)(r_eax+0x1c0u));
    /* 00519858: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0051985a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0051985d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51985fu); call_ind(t); }
    /* 0051985f: mov esi, eax */ r_esi = r_eax;
    /* 00519861: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519864: mov ecx, dword ptr [ecx + 0x1c0] */ r_ecx = R32((u32)(r_ecx+0x1c0u));
    /* 0051986a: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x51986fu); f_005f5550();
    /* 0051986f: lea edx, [esi + eax + 5] */ r_edx = (u32)(r_esi+r_eax+0x5u);
    /* 00519873: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519874: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519877: mov ecx, dword ptr [eax + 0x1c8] */ r_ecx = R32((u32)(r_eax+0x1c8u));
    /* 0051987d: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00519880: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 00519886: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00519888: mov ecx, eax */ r_ecx = r_eax;
    /* 0051988a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0051988d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51988fu); call_ind(t); }
L_0051988f:; BB(0x0051988f);
    /* 0051988f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00519892: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00519899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051989a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051989b: mov esp, ebp */ r_esp = r_ebp;
    /* 0051989d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051989e: ret 4 */ FN_RET(0x00518ac0); r_esp += 8; return;
}


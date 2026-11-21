#include "protos.h"

void f_0068fb30(void) /* PrintJob::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fb30);
    /* 0068fb30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb31: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fb33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068fb37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb3a: call 0x6252d0 */ r_esp -= 4; W32(r_esp, 0x68fb3fu); f_006252d0();
    /* 0068fb3f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb42: mov dword ptr [eax], 0x6e56a0 */ W32((u32)(r_eax), 0x6e56a0u);
    /* 0068fb48: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb4c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb4f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0068fb52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb53: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68fb58u); f_00686fa2();
    /* 0068fb58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068fb5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb5e: mov esp, ebp */ r_esp = r_ebp;
    /* 0068fb60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fb61: ret  */ FN_RET(0x0068fb30); r_esp += 4; return;
}

void f_0068fb70(void) /* PrintJob::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fb70);
    /* 0068fb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb71: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fb73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0068fb77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb7a: mov dword ptr [eax], 0x6e56a0 */ W32((u32)(r_eax), 0x6e56a0u);
    /* 0068fb80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb83: cmp dword ptr [ecx + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fb87: je 0x68fba3 */ if (fZ) goto L_0068fba3;
L_0068fb89:; BB(0x0068fb89);
    /* 0068fb89: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb8c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0068fb8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb90: call dword ptr [0x6b2018] */ { u32 t = R32((u32)(0x6b2018u)); r_esp -= 4; W32(r_esp, 0x68fb96u); call_ind(t); }
    /* 0068fb96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fb99: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0068fb9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb9d: call dword ptr [0x6b2034] */ { u32 t = R32((u32)(0x6b2034u)); r_esp -= 4; W32(r_esp, 0x68fba3u); call_ind(t); }
L_0068fba3:; BB(0x0068fba3);
    /* 0068fba3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0068fba6: call 0x6252f0 */ r_esp -= 4; W32(r_esp, 0x68fbabu); f_006252f0();
    /* 0068fbab: mov esp, ebp */ r_esp = r_ebp;
    /* 0068fbad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fbae: ret  */ FN_RET(0x0068fb70); r_esp += 4; return;
}

void f_0068fe30(void) /* PrintJob::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fe30);
    /* 0068fe30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe31: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fe33: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068fe36: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068fe39: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068fe3c: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fe40: jne 0x68fe46 */ if (!fZ) goto L_0068fe46;
L_0068fe42:; BB(0x0068fe42);
    /* 0068fe42: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068fe44: jmp 0x68fe6f */ goto L_0068fe6f;
L_0068fe46:; BB(0x0068fe46);
    /* 0068fe46: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068fe49: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0068fe4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe4d: call dword ptr [0x6b2024] */ { u32 t = R32((u32)(0x6b2024u)); r_esp -= 4; W32(r_esp, 0x68fe53u); call_ind(t); }
    /* 0068fe53: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068fe56: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068fe5a: jg 0x68fe6d */ if ((!fZ&&fS==fO)) goto L_0068fe6d;
L_0068fe5c:; BB(0x0068fe5c);
    /* 0068fe5c: push 0x6e56fc */ { u32 v = 0x6e56fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe61: call 0x68fb10 */ r_esp -= 4; W32(r_esp, 0x68fe66u); f_0068fb10();
    /* 0068fe66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068fe69: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068fe6b: jmp 0x68fe6f */ goto L_0068fe6f;
L_0068fe6d:; BB(0x0068fe6d);
    /* 0068fe6d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0068fe6f:; BB(0x0068fe6f);
    /* 0068fe6f: mov esp, ebp */ r_esp = r_ebp;
    /* 0068fe71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fe72: ret  */ FN_RET(0x0068fe30); r_esp += 4; return;
}

void f_0068fe80(void) /* PrintJob::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fe80);
    /* 0068fe80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe81: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fe83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068fe86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068fe89: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068fe8c: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0068fe8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe90: call dword ptr [0x6b2028] */ { u32 t = R32((u32)(0x6b2028u)); r_esp -= 4; W32(r_esp, 0x68fe96u); call_ind(t); }
    /* 0068fe96: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068fe99: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068fe9d: jg 0x68feb0 */ if ((!fZ&&fS==fO)) goto L_0068feb0;
L_0068fe9f:; BB(0x0068fe9f);
    /* 0068fe9f: push 0x6e5708 */ { u32 v = 0x6e5708u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fea4: call 0x68fb10 */ r_esp -= 4; W32(r_esp, 0x68fea9u); f_0068fb10();
    /* 0068fea9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068feac: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068feae: jmp 0x68feb2 */ goto L_0068feb2;
L_0068feb0:; BB(0x0068feb0);
    /* 0068feb0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0068feb2:; BB(0x0068feb2);
    /* 0068feb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0068feb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068feb5: ret  */ FN_RET(0x0068fe80); r_esp += 4; return;
}

void f_0068fec0(void) /* PrintJob::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068fec0);
    /* 0068fec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fec1: mov ebp, esp */ r_ebp = r_esp;
    /* 0068fec3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068fec6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0068fec9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068fecc: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0068fecf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fed0: call dword ptr [0x6b202c] */ { u32 t = R32((u32)(0x6b202cu)); r_esp -= 4; W32(r_esp, 0x68fed6u); call_ind(t); }
    /* 0068fed6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0068fed9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068fedc: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0068fedf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fee0: call dword ptr [0x6b2034] */ { u32 t = R32((u32)(0x6b2034u)); r_esp -= 4; W32(r_esp, 0x68fee6u); call_ind(t); }
    /* 0068fee6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068fee9: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0068feec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068feed: call dword ptr [0x6b203c] */ { u32 t = R32((u32)(0x6b203cu)); r_esp -= 4; W32(r_esp, 0x68fef3u); call_ind(t); }
    /* 0068fef3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068fef6: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0068fef9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fefa: call dword ptr [0x6b203c] */ { u32 t = R32((u32)(0x6b203cu)); r_esp -= 4; W32(r_esp, 0x68ff00u); call_ind(t); }
    /* 0068ff00: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff04: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0068ff07: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068ff0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff0b: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68ff10u); f_00686fa2();
    /* 0068ff10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ff13: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068ff17: jg 0x68ff2a */ if ((!fZ&&fS==fO)) goto L_0068ff2a;
L_0068ff19:; BB(0x0068ff19);
    /* 0068ff19: push 0x6e5710 */ { u32 v = 0x6e5710u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff1e: call 0x68fb10 */ r_esp -= 4; W32(r_esp, 0x68ff23u); f_0068fb10();
    /* 0068ff23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ff26: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068ff28: jmp 0x68ff2c */ goto L_0068ff2c;
L_0068ff2a:; BB(0x0068ff2a);
    /* 0068ff2a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0068ff2c:; BB(0x0068ff2c);
    /* 0068ff2c: mov esp, ebp */ r_esp = r_ebp;
    /* 0068ff2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068ff2f: ret  */ FN_RET(0x0068fec0); r_esp += 4; return;
}

void f_0068ff30(void) /* PrintJob::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0068ff30);
    /* 0068ff30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff31: mov ebp, esp */ r_ebp = r_esp;
    /* 0068ff33: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ff36: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0068ff39: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ff3c: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff40: jne 0x68ff49 */ if (!fZ) goto L_0068ff49;
L_0068ff42:; BB(0x0068ff42);
    /* 0068ff42: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068ff44: jmp 0x690038 */ goto L_00690038;
L_0068ff49:; BB(0x0068ff49);
    /* 0068ff49: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff4d: jne 0x68ff65 */ if (!fZ) goto L_0068ff65;
L_0068ff4f:; BB(0x0068ff4f);
    /* 0068ff4f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff53: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0068ff56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff57: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x68ff5cu); f_00686fa2();
    /* 0068ff5c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068ff5f: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0068ff62: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
L_0068ff65:; BB(0x0068ff65);
    /* 0068ff65: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0068ff68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff69: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068ff6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff6d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0068ff70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff71: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ff74: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ff76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ff79: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0068ff7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68ff7eu); call_ind(t); }
    /* 0068ff7e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068ff81: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff83: jne 0x68ff8c */ if (!fZ) goto L_0068ff8c;
L_0068ff85:; BB(0x0068ff85);
    /* 0068ff85: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068ff87: jmp 0x690038 */ goto L_00690038;
L_0068ff8c:; BB(0x0068ff8c);
    /* 0068ff8c: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0068ff8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff90: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068ff93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff94: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ff97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0068ff99: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ff9c: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0068ff9f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68ffa1u); call_ind(t); }
    /* 0068ffa1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0068ffa4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ffa6: jne 0x68ffaf */ if (!fZ) goto L_0068ffaf;
L_0068ffa8:; BB(0x0068ffa8);
    /* 0068ffa8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068ffaa: jmp 0x690038 */ goto L_00690038;
L_0068ffaf:; BB(0x0068ffaf);
    /* 0068ffaf: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0068ffb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ffb3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068ffb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068ffb7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0068ffba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ffbb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0068ffbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ffbf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ffc2: call 0x6901b0 */ r_esp -= 4; W32(r_esp, 0x68ffc7u); f_006901b0();
    /* 0068ffc7: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0068ffca: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0068ffce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ffd0: je 0x690035 */ if (fZ) goto L_00690035;
L_0068ffd2:; BB(0x0068ffd2);
    /* 0068ffd2: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0068ffd5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ffd6: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0068ffd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ffda: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ffdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0068ffdf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068ffe2: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0068ffe5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x68ffe7u); call_ind(t); }
    /* 0068ffe7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0068ffea: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 0068ffec: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0068ffef: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x68fff4u); f_00686cc0();
    /* 0068fff4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068fff7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0068fff9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0068fffc: fild dword ptr [eax + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8u)));
    /* 0068ffff: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 00690002: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x690007u); f_00686cc0();
    /* 00690007: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0069000a: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0069000d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00690010: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 00690013: fdiv dword ptr [ebp - 0x1c] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe4u));
    /* 00690016: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x69001bu); f_00686cc0();
    /* 0069001b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0069001e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00690021: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00690024: fild dword ptr [edx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_edx+0xcu)));
    /* 00690027: fdiv dword ptr [ebp - 0x1c] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0069002a: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x69002fu); f_00686cc0();
    /* 0069002f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00690032: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
L_00690035:; BB(0x00690035);
    /* 00690035: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
L_00690038:; BB(0x00690038);
    /* 00690038: mov esp, ebp */ r_esp = r_ebp;
    /* 0069003a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069003b: ret 0x14 */ FN_RET(0x0068ff30); r_esp += 24; return;
}

void f_00690040(void) /* PrintJob::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690040);
    /* 00690040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690041: mov ebp, esp */ r_ebp = r_esp;
    /* 00690043: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00690046: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00690049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069004b: call dword ptr [0x6b23c4] */ { u32 t = R32((u32)(0x6b23c4u)); r_esp -= 4; W32(r_esp, 0x690051u); call_ind(t); }
    /* 00690051: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00690054: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00690056: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00690059: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069005a: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x690060u); call_ind(t); }
    /* 00690060: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00690063: fild dword ptr [ebp - 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe4u)));
    /* 00690066: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00690069: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0069006b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0069006e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069006f: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x690075u); call_ind(t); }
    /* 00690075: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00690078: fild dword ptr [ebp - 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe0u)));
    /* 0069007b: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0069007e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00690081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690082: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00690084: call dword ptr [0x6b23b4] */ { u32 t = R32((u32)(0x6b23b4u)); r_esp -= 4; W32(r_esp, 0x69008au); call_ind(t); }
    /* 0069008a: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0069008c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069008f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00690092: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690093: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x690099u); call_ind(t); }
    /* 00690099: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0069009c: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 0069009f: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 006900a2: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 006900a4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006900a7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006900aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006900ab: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x6900b1u); call_ind(t); }
    /* 006900b1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006900b4: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 006900b7: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 006900ba: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900be: je 0x6900cb */ if (fZ) goto L_006900cb;
L_006900c0:; BB(0x006900c0);
    /* 006900c0: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 006900c3: fdiv dword ptr [ebp - 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xfffffff0u));
    /* 006900c6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006900c9: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
L_006900cb:; BB(0x006900cb);
    /* 006900cb: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900cf: je 0x6900dc */ if (fZ) goto L_006900dc;
L_006900d1:; BB(0x006900d1);
    /* 006900d1: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 006900d4: fdiv dword ptr [ebp - 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffecu));
    /* 006900d7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006900da: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
L_006900dc:; BB(0x006900dc);
    /* 006900dc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 006900de: mov esp, ebp */ r_esp = r_ebp;
    /* 006900e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006900e1: ret 8 */ FN_RET(0x00690040); r_esp += 12; return;
}

void f_006900f0(void) /* PrintJob::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006900f0);
    /* 006900f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006900f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006900f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006900f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006900f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006900fa: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900fe: jne 0x690107 */ if (!fZ) goto L_00690107;
L_00690100:; BB(0x00690100);
    /* 00690100: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690102: jmp 0x6901a5 */ goto L_006901a5;
L_00690107:; BB(0x00690107);
    /* 00690107: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069010b: je 0x690121 */ if (fZ) goto L_00690121;
L_0069010d:; BB(0x0069010d);
    /* 0069010d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069010f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00690112: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00690115: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690116: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x69011cu); call_ind(t); }
    /* 0069011c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0069011f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00690121:; BB(0x00690121);
    /* 00690121: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690125: je 0x69013b */ if (fZ) goto L_0069013b;
L_00690127:; BB(0x00690127);
    /* 00690127: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00690129: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069012c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0069012f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690130: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x690136u); call_ind(t); }
    /* 00690136: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00690139: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0069013b:; BB(0x0069013b);
    /* 0069013b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069013f: je 0x690155 */ if (fZ) goto L_00690155;
L_00690141:; BB(0x00690141);
    /* 00690141: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 00690143: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00690146: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00690149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069014a: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x690150u); call_ind(t); }
    /* 00690150: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00690153: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00690155:; BB(0x00690155);
    /* 00690155: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690159: je 0x69016f */ if (fZ) goto L_0069016f;
L_0069015b:; BB(0x0069015b);
    /* 0069015b: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 0069015d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00690160: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00690163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690164: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x69016au); call_ind(t); }
    /* 0069016a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0069016d: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_0069016f:; BB(0x0069016f);
    /* 0069016f: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690173: je 0x690189 */ if (fZ) goto L_00690189;
L_00690175:; BB(0x00690175);
    /* 00690175: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 00690177: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069017a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0069017d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069017e: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x690184u); call_ind(t); }
    /* 00690184: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00690187: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00690189:; BB(0x00690189);
    /* 00690189: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069018d: je 0x6901a3 */ if (fZ) goto L_006901a3;
L_0069018f:; BB(0x0069018f);
    /* 0069018f: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 00690191: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00690194: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00690197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690198: call dword ptr [0x6b2014] */ { u32 t = R32((u32)(0x6b2014u)); r_esp -= 4; W32(r_esp, 0x69019eu); call_ind(t); }
    /* 0069019e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006901a1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_006901a3:; BB(0x006901a3);
    /* 006901a3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_006901a5:; BB(0x006901a5);
    /* 006901a5: mov esp, ebp */ r_esp = r_ebp;
    /* 006901a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006901a8: ret 0x18 */ FN_RET(0x006900f0); r_esp += 28; return;
}


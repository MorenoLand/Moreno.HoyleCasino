#include "protos.h"

void f_0062d8f0(void) /* StringManager::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d8f0);
    /* 0062d8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d8f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d8f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d8f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d8fa: call 0x62ec40 */ r_esp -= 4; W32(r_esp, 0x62d8ffu); f_0062ec40();
    /* 0062d8ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d902: mov dword ptr [eax], 0x6d9a7c */ W32((u32)(r_eax), 0x6d9a7cu);
    /* 0062d908: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d90b: mov byte ptr [ecx + 0x3c], 0x20 */ W8((u32)(r_ecx+0x3cu), 0x20u);
    /* 0062d90f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d912: mov byte ptr [edx + 0x3d], 0xa */ W8((u32)(r_edx+0x3du), 0xau);
    /* 0062d916: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062d919: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d91b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d91c: ret  */ FN_RET(0x0062d8f0); r_esp += 4; return;
}

void f_0062d920(void) /* StringManager::vfunc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d920);
    /* 0062d920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d921: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d924: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d927: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d929: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d92c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d92d: push 0x20545854 */ { u32 v = 0x20545854u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d932: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0062d938: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0062d93b: call 0x603c50 */ r_esp -= 4; W32(r_esp, 0x62d940u); f_00603c50();
    /* 0062d940: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d942: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d943: ret 4 */ FN_RET(0x0062d920); r_esp += 8; return;
}

void f_0062d950(void) /* StringManager::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d950);
    /* 0062d950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d951: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d954: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d957: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d95a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d95b: push 0x20545854 */ { u32 v = 0x20545854u; r_esp -= 4; W32(r_esp, v); }
    /* 0062d960: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0062d966: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0062d969: call 0x603fb0 */ r_esp -= 4; W32(r_esp, 0x62d96eu); f_00603fb0();
    /* 0062d96e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d971: ret 4 */ FN_RET(0x0062d950); r_esp += 8; return;
}

void f_0062d980(void) /* StringManager::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d980);
    /* 0062d980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d981: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d987: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d98a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062d98b: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0062d991: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0062d994: call 0x6041d0 */ r_esp -= 4; W32(r_esp, 0x62d999u); f_006041d0();
    /* 0062d999: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d99b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d99c: ret 4 */ FN_RET(0x0062d980); r_esp += 8; return;
}

void f_0062d9a0(void) /* StringManager::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d9a0);
    /* 0062d9a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d9a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9a4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d9a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d9aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062d9ac: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062d9af: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062d9b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62d9b4u); call_ind(t); }
    /* 0062d9b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d9b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d9b7: ret 4 */ FN_RET(0x0062d9a0); r_esp += 8; return;
}

void f_0062d9c0(void) /* StringManager::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d9c0);
    /* 0062d9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d9c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062d9c7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062d9ca: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x62d9cfu); f_0061ed80();
    /* 0062d9cf: mov esp, ebp */ r_esp = r_ebp;
    /* 0062d9d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062d9d2: ret 4 */ FN_RET(0x0062d9c0); r_esp += 8; return;
}

void f_0062d9e0(void) /* StringManager::vfunc24 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062d9e0);
    /* 0062d9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062d9e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062d9e6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062d9e9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d9ed: je 0x62d9f9 */ if (fZ) goto L_0062d9f9;
L_0062d9ef:; BB(0x0062d9ef);
    /* 0062d9ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062d9f2: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0062d9f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062d9f7: jne 0x62da18 */ if (!fZ) goto L_0062da18;
L_0062d9f9:; BB(0x0062d9f9);
    /* 0062d9f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0062d9fb: jne 0x62da11 */ if (!fZ) goto L_0062da11;
L_0062d9fd:; BB(0x0062d9fd);
    /* 0062d9fd: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062d9ff: push 0x6d9b04 */ { u32 v = 0x6d9b04u; r_esp -= 4; W32(r_esp, v); }
    /* 0062da04: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062da09: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62da0eu); f_005e9f20();
    /* 0062da0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062da11:; BB(0x0062da11);
    /* 0062da11: mov eax, 0x761fbc */ r_eax = 0x761fbcu;
    /* 0062da16: jmp 0x62da65 */ goto L_0062da65;
L_0062da18:; BB(0x0062da18);
    /* 0062da18: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062da1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062da1c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062da1f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062da21: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062da24: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0062da27: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62da29u); call_ind(t); }
    /* 0062da29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062da2c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062da30: jne 0x62da62 */ if (!fZ) goto L_0062da62;
L_0062da32:; BB(0x0062da32);
    /* 0062da32: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062da35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062da36: push 0x6d9ae0 */ { u32 v = 0x6d9ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062da3b: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62da40u); f_0062fde0();
    /* 0062da40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062da43: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062da45: jne 0x62da5b */ if (!fZ) goto L_0062da5b;
L_0062da47:; BB(0x0062da47);
    /* 0062da47: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0062da49: push 0x6d9b04 */ { u32 v = 0x6d9b04u; r_esp -= 4; W32(r_esp, v); }
    /* 0062da4e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062da53: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62da58u); f_005e9f20();
    /* 0062da58: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062da5b:; BB(0x0062da5b);
    /* 0062da5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062da5e: jmp 0x62da65 */ goto L_0062da65;
L_0062da62:; BB(0x0062da62);
    /* 0062da62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0062da65:; BB(0x0062da65);
    /* 0062da65: mov esp, ebp */ r_esp = r_ebp;
    /* 0062da67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062da68: ret 4 */ FN_RET(0x0062d9e0); r_esp += 8; return;
}

void f_0062ee00(void) /* StringManager::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ee00);
    /* 0062ee00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee01: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ee03: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee06: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0062ee09: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ee0c: mov byte ptr [eax + 0x3e], 0 */ W8((u32)(r_eax+0x3eu), 0x0u);
    /* 0062ee10: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062ee13: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062ee16: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062ee19: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0062ee1c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ee1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ee23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee24: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062ee27: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ee2a: call 0x62fa00 */ r_esp -= 4; W32(r_esp, 0x62ee2fu); f_0062fa00();
    /* 0062ee2f: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ee31: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ee32: ret 8 */ FN_RET(0x0062ee00); r_esp += 12; return;
}

void f_0062ee40(void) /* StringManager::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ee40);
    /* 0062ee40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee41: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ee43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee46: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062ee49: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ee4c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0062ee4f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062ee52: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ee55: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062ee58: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062ee5b: push 0x62f8e0 */ { u32 v = 0x62f8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee60: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee62: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ee65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee66: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062ee69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ee6a: call dword ptr [0x6b2248] */ { u32 t = R32((u32)(0x6b2248u)); r_esp -= 4; W32(r_esp, 0x62ee70u); call_ind(t); }
    /* 0062ee70: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ee73: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062ee76: mov byte ptr [eax + 0x3e], 1 */ W8((u32)(r_eax+0x3eu), 0x1u);
    /* 0062ee7a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062ee7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062ee7d: ret  */ FN_RET(0x0062ee40); r_esp += 4; return;
}

void f_0062ef70(void) /* StringManager::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062ef70);
    /* 0062ef70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef71: mov ebp, esp */ r_ebp = r_esp;
    /* 0062ef73: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062ef76: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062ef79: cmp dword ptr [ebp + 8], 0x20 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef7d: je 0x62efa3 */ if (fZ) goto L_0062efa3;
L_0062ef7f:; BB(0x0062ef7f);
    /* 0062ef7f: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef83: je 0x62efa3 */ if (fZ) goto L_0062efa3;
L_0062ef85:; BB(0x0062ef85);
    /* 0062ef85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062ef88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ef89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef8c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062ef8e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062ef91: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0062ef94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62ef96u); call_ind(t); }
    /* 0062ef96: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0062ef99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ef9b: jne 0x62efa3 */ if (!fZ) goto L_0062efa3;
L_0062ef9d:; BB(0x0062ef9d);
    /* 0062ef9d: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 0062efa1: jmp 0x62efa7 */ goto L_0062efa7;
L_0062efa3:; BB(0x0062efa3);
    /* 0062efa3: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_0062efa7:; BB(0x0062efa7);
    /* 0062efa7: mov al, byte ptr [ebp - 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffbu))) & 0xffu);
    /* 0062efaa: mov esp, ebp */ r_esp = r_ebp;
    /* 0062efac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062efad: ret 4 */ FN_RET(0x0062ef70); r_esp += 8; return;
}

void f_0062efb0(void) /* StringManager::vfunc7 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062efb0);
    /* 0062efb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062efb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0062efb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062efb6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062efb9: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062efbd: je 0x62efce */ if (fZ) goto L_0062efce;
L_0062efbf:; BB(0x0062efbf);
    /* 0062efbf: cmp dword ptr [ebp + 8], 0xd */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062efc3: je 0x62efce */ if (fZ) goto L_0062efce;
L_0062efc5:; BB(0x0062efc5);
    /* 0062efc5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0062efcc: jmp 0x62efd5 */ goto L_0062efd5;
L_0062efce:; BB(0x0062efce);
    /* 0062efce: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0062efd5:; BB(0x0062efd5);
    /* 0062efd5: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 0062efd8: mov esp, ebp */ r_esp = r_ebp;
    /* 0062efda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062efdb: ret 4 */ FN_RET(0x0062efb0); r_esp += 8; return;
}

void f_0062f090(void) /* StringManager::vfunc8 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f090);
    /* 0062f090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f091: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f096: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062f099: cmp dword ptr [ebp + 8], 0x5c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f09d: je 0x62f0a4 */ if (fZ) goto L_0062f0a4;
L_0062f09f:; BB(0x0062f09f);
    /* 0062f09f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f0a2: jmp 0x62f0f7 */ goto L_0062f0f7;
L_0062f0a4:; BB(0x0062f0a4);
    /* 0062f0a4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f0a7: call 0x62ee80 */ r_esp -= 4; W32(r_esp, 0x62f0acu); f_0062ee80();
    /* 0062f0ac: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0062f0af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f0b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0b3: call dword ptr [0x6b2188] */ { u32 t = R32((u32)(0x6b2188u)); r_esp -= 4; W32(r_esp, 0x62f0b9u); call_ind(t); }
    /* 0062f0b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f0be: je 0x62f0f4 */ if (fZ) goto L_0062f0f4;
L_0062f0c0:; BB(0x0062f0c0);
    /* 0062f0c0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062f0c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0c4: push 0x7620b4 */ { u32 v = 0x7620b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0c9: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x62f0cfu); call_ind(t); }
    /* 0062f0cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f0d4: je 0x62f0f4 */ if (fZ) goto L_0062f0f4;
L_0062f0d6:; BB(0x0062f0d6);
    /* 0062f0d6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062f0d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0da: push 0x7620b4 */ { u32 v = 0x7620b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0df: call dword ptr [0x6b22b8] */ { u32 t = R32((u32)(0x6b22b8u)); r_esp -= 4; W32(r_esp, 0x62f0e5u); call_ind(t); }
    /* 0062f0e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f0eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f0ee: movsx eax, byte ptr [eax + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x1u));
    /* 0062f0f2: jmp 0x62f0f7 */ goto L_0062f0f7;
L_0062f0f4:; BB(0x0062f0f4);
    /* 0062f0f4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0062f0f7:; BB(0x0062f0f7);
    /* 0062f0f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f0f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f0fa: ret 4 */ FN_RET(0x0062f090); r_esp += 8; return;
}

void f_0062f100(void) /* StringManager::vfunc10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f100);
    /* 0062f100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f101: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f103: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f106: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0062f109:; BB(0x0062f109);
    /* 0062f109: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f10c: call 0x62ee80 */ r_esp -= 4; W32(r_esp, 0x62f111u); f_0062ee80();
    /* 0062f111: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f114: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f117: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062f119: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f11c: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0062f11f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f121u); call_ind(t); }
    /* 0062f121: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f124: jne 0x62f109 */ if (!fZ) goto L_0062f109;
L_0062f126:; BB(0x0062f126);
    /* 0062f126: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f129: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f12a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f12d: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f132u); f_0062eef0();
    /* 0062f132: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f134: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f135: ret  */ FN_RET(0x0062f100); r_esp += 4; return;
}

void f_0062f140(void) /* StringManager::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f140);
    /* 0062f140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f141: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f143: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f146: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062f149: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f14c: call 0x62ee80 */ r_esp -= 4; W32(r_esp, 0x62f151u); f_0062ee80();
    /* 0062f151: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f154: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f157: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f15a: jne 0x62f161 */ if (!fZ) goto L_0062f161;
L_0062f15c:; BB(0x0062f15c);
    /* 0062f15c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062f15f: jmp 0x62f170 */ goto L_0062f170;
L_0062f161:; BB(0x0062f161);
    /* 0062f161: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f164: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f165: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f168: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f16du); f_0062eef0();
    /* 0062f16d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0062f170:; BB(0x0062f170);
    /* 0062f170: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f172: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f173: ret 0xc */ FN_RET(0x0062f140); r_esp += 16; return;
}

void f_0062f180(void) /* StringManager::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f180);
    /* 0062f180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f181: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f183: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f186: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062f189: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062f18c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062f18f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062f192: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062f195: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f198: call 0x62ee80 */ r_esp -= 4; W32(r_esp, 0x62f19du); f_0062ee80();
    /* 0062f19d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062f1a0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f1a3: movzx eax, byte ptr [edx + 0x3f] */ r_eax = (u32)R8((u32)(r_edx+0x3fu));
    /* 0062f1a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1a9: je 0x62f1b8 */ if (fZ) goto L_0062f1b8;
L_0062f1ab:; BB(0x0062f1ab);
    /* 0062f1ab: cmp dword ptr [ebp - 0xc], 0x22 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1af: jne 0x62f1b8 */ if (!fZ) goto L_0062f1b8;
L_0062f1b1:; BB(0x0062f1b1);
    /* 0062f1b1: mov dword ptr [ebp - 4], 0x22 */ W32((u32)(r_ebp+0xfffffffcu), 0x22u);
L_0062f1b8:; BB(0x0062f1b8);
    /* 0062f1b8: cmp dword ptr [ebp - 4], 0x20 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1bc: jne 0x62f1de */ if (!fZ) goto L_0062f1de;
L_0062f1be:; BB(0x0062f1be);
    /* 0062f1be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f1c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f1c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f1c7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f1ca: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0062f1cd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f1cfu); call_ind(t); }
    /* 0062f1cf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062f1d2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0062f1d4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0062f1d6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f1d9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062f1dc: jmp 0x62f1ec */ goto L_0062f1ec;
L_0062f1de:; BB(0x0062f1de);
    /* 0062f1de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f1e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062f1e3: cmp ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1e6: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0062f1e9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_0062f1ec:; BB(0x0062f1ec);
    /* 0062f1ec: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1f0: je 0x62f345 */ if (fZ) goto L_0062f345;
L_0062f1f6:; BB(0x0062f1f6);
    /* 0062f1f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f1f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f1fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f1ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f202: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0062f205: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f207u); call_ind(t); }
    /* 0062f207: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0062f20a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f20c: jne 0x62f345 */ if (!fZ) goto L_0062f345;
L_0062f212:; BB(0x0062f212);
    /* 0062f212: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0062f215: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062f218: lea ecx, [eax + edx - 1] */ r_ecx = (u32)(r_eax+r_edx+0xffffffffu);
    /* 0062f21c: cmp dword ptr [ebp - 8], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f21f: jb 0x62f28d */ if (fC) goto L_0062f28d;
L_0062f221:; BB(0x0062f221);
    /* 0062f221: push 0x6d9c50 */ { u32 v = 0x6d9c50u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f226: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62f22bu); f_0062fde0();
    /* 0062f22b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f22e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0062f230: jne 0x62f249 */ if (!fZ) goto L_0062f249;
L_0062f232:; BB(0x0062f232);
    /* 0062f232: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 0062f237: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f23c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f241: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62f246u); f_005e9f20();
    /* 0062f246: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f249:; BB(0x0062f249);
    /* 0062f249: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f24c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f24f: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f252: jb 0x62f27f */ if (fC) goto L_0062f27f;
L_0062f254:; BB(0x0062f254);
    /* 0062f254: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f257: mov byte ptr [edx - 1], 0x2e */ W8((u32)(r_edx+0xffffffffu), 0x2eu);
    /* 0062f25b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f25e: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062f261: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f264: jb 0x62f27f */ if (fC) goto L_0062f27f;
L_0062f266:; BB(0x0062f266);
    /* 0062f266: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f269: mov byte ptr [ecx - 2], 0x2e */ W8((u32)(r_ecx+0xfffffffeu), 0x2eu);
    /* 0062f26d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f270: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0062f273: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f276: jb 0x62f27f */ if (fC) goto L_0062f27f;
L_0062f278:; BB(0x0062f278);
    /* 0062f278: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f27b: mov byte ptr [eax - 3], 0x2e */ W8((u32)(r_eax+0xfffffffdu), 0x2eu);
L_0062f27f:; BB(0x0062f27f);
    /* 0062f27f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f282: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0062f285: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0062f288: jmp 0x62f34e */ goto L_0062f34e;
L_0062f28d:; BB(0x0062f28d);
    /* 0062f28d: cmp dword ptr [ebp - 0xc], 0x100 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f294: jge 0x62f2a0 */ if ((fS==fO)) goto L_0062f2a0;
L_0062f296:; BB(0x0062f296);
    /* 0062f296: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f299: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0062f29c: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 0062f29e: jmp 0x62f2ea */ goto L_0062f2ea;
L_0062f2a0:; BB(0x0062f2a0);
    /* 0062f2a0: cmp dword ptr [ebp - 0xc], 0x10000 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f2a7: jge 0x62f2b5 */ if ((fS==fO)) goto L_0062f2b5;
L_0062f2a9:; BB(0x0062f2a9);
    /* 0062f2a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f2ac: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 0062f2b0: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0062f2b3: jmp 0x62f2ea */ goto L_0062f2ea;
L_0062f2b5:; BB(0x0062f2b5);
    /* 0062f2b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f2b8: mov cl, byte ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 0062f2bb: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0062f2bd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f2c0: mov al, byte ptr [ebp - 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff5u))) & 0xffu);
    /* 0062f2c3: mov byte ptr [edx + 1], al */ W8((u32)(r_edx+0x1u), (u8)r_eax);
    /* 0062f2c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f2c9: mov dl, byte ptr [ebp - 0xa] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 0062f2cc: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 0062f2cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0062f2d1: jne 0x62f2ea */ if (!fZ) goto L_0062f2ea;
L_0062f2d3:; BB(0x0062f2d3);
    /* 0062f2d3: push 0x109 */ { u32 v = 0x109u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f2d8: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f2dd: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f2e2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62f2e7u); f_005e9f20();
    /* 0062f2e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f2ea:; BB(0x0062f2ea);
    /* 0062f2ea: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f2ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f2ee: call dword ptr [0x6b2194] */ { u32 t = R32((u32)(0x6b2194u)); r_esp -= 4; W32(r_esp, 0x62f2f4u); call_ind(t); }
    /* 0062f2f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f2f7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062f2fa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f2fd: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0062f300: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0062f303: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f305: je 0x62f324 */ if (fZ) goto L_0062f324;
L_0062f307:; BB(0x0062f307);
    /* 0062f307: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f30a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0062f30d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f310: add ecx, dword ptr [edx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f313: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f316: cmp dword ptr [eax + 0x24], ecx */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f319: jae 0x62f324 */ if (!fC) goto L_0062f324;
L_0062f31b:; BB(0x0062f31b);
    /* 0062f31b: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0062f322: jmp 0x62f32b */ goto L_0062f32b;
L_0062f324:; BB(0x0062f324);
    /* 0062f324: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0062f32b:; BB(0x0062f32b);
    /* 0062f32b: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 0062f32f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f331: je 0x62f335 */ if (fZ) goto L_0062f335;
L_0062f333:; BB(0x0062f333);
    /* 0062f333: jmp 0x62f345 */ goto L_0062f345;
L_0062f335:; BB(0x0062f335);
    /* 0062f335: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f338: call 0x62ee80 */ r_esp -= 4; W32(r_esp, 0x62f33du); f_0062ee80();
    /* 0062f33d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0062f340: jmp 0x62f1b8 */ goto L_0062f1b8;
L_0062f345:; BB(0x0062f345);
    /* 0062f345: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f348: mov byte ptr [edx], 0 */ W8((u32)(r_edx), 0x0u);
    /* 0062f34b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_0062f34e:; BB(0x0062f34e);
    /* 0062f34e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f350: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f351: ret 0xc */ FN_RET(0x0062f180); r_esp += 16; return;
}

void f_0062f360(void) /* StringManager::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f360);
    /* 0062f360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f361: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f363: sub esp, 0x210 */ {  u32 a = r_esp; u32 b = 0x210u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f369: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062f36e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f370: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062f373: mov dword ptr [ebp - 0x210], ecx */ W32((u32)(r_ebp+0xfffffdf0u), r_ecx);
    /* 0062f379: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f37e: lea eax, [ebp - 0x208] */ r_eax = (u32)(r_ebp+0xfffffdf8u);
    /* 0062f384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f385: mov ecx, dword ptr [ebp - 0x210] */ r_ecx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0062f38b: movsx edx, byte ptr [ecx + 0x3c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x3cu));
    /* 0062f38f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f390: mov eax, dword ptr [ebp - 0x210] */ r_eax = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0062f396: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062f398: mov ecx, dword ptr [ebp - 0x210] */ r_ecx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 0062f39e: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0062f3a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f3a3u); call_ind(t); }
    /* 0062f3a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f3a5: jne 0x62f3ab */ if (!fZ) goto L_0062f3ab;
L_0062f3a7:; BB(0x0062f3a7);
    /* 0062f3a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f3a9: jmp 0x62f3eb */ goto L_0062f3eb;
L_0062f3ab:; BB(0x0062f3ab);
    /* 0062f3ab: lea ecx, [ebp - 0x208] */ r_ecx = (u32)(r_ebp+0xfffffdf8u);
    /* 0062f3b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f3b2: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62f3b7u); f_00686ecc();
    /* 0062f3b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f3ba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f3bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f3be: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62f3c3u); f_00686d82();
    /* 0062f3c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f3c6: mov dword ptr [ebp - 0x20c], eax */ W32((u32)(r_ebp+0xfffffdf4u), r_eax);
    /* 0062f3cc: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 0062f3d2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0062f3d5: lea eax, [ebp - 0x208] */ r_eax = (u32)(r_ebp+0xfffffdf8u);
    /* 0062f3db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f3dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f3df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f3e0: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x62f3e5u); f_00686d8e();
    /* 0062f3e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f3e8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0062f3eb:; BB(0x0062f3eb);
    /* 0062f3eb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f3ee: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f3f0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x62f3f5u); f_00686d72();
    /* 0062f3f5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f3f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f3f8: ret  */ FN_RET(0x0062f360); r_esp += 4; return;
}

void f_0062f400(void) /* StringManager::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f400);
    /* 0062f400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f401: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f403: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f406: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062f409: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f40e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f411: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0062f414: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f415: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f418: movsx eax, byte ptr [edx + 0x3d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x3du));
    /* 0062f41c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f41d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f420: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f422: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f425: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0062f428: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f42au); call_ind(t); }
    /* 0062f42a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f42c: jne 0x62f432 */ if (!fZ) goto L_0062f432;
L_0062f42e:; BB(0x0062f42e);
    /* 0062f42e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f430: jmp 0x62f46c */ goto L_0062f46c;
L_0062f432:; BB(0x0062f432);
    /* 0062f432: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f435: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0062f438: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f439: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62f43eu); f_00686ecc();
    /* 0062f43e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f441: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f445: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62f44au); f_00686d82();
    /* 0062f44a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f44d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062f450: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f453: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f456: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f459: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0062f45c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f45d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f461: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x62f466u); f_00686d8e();
    /* 0062f466: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f469: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_0062f46c:; BB(0x0062f46c);
    /* 0062f46c: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f46e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f46f: ret  */ FN_RET(0x0062f400); r_esp += 4; return;
}

void f_0062f470(void) /* StringManager::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f470);
    /* 0062f470: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f471: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f473: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f476: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062f479: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f47c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062f47e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f481: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0062f484: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f486u); call_ind(t); }
    /* 0062f486: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062f489: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f48d: jne 0x62f4b9 */ if (!fZ) goto L_0062f4b9;
L_0062f48f:; BB(0x0062f48f);
    /* 0062f48f: push 0x6d9cb0 */ { u32 v = 0x6d9cb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f494: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62f499u); f_0062fde0();
    /* 0062f499: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f49c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0062f49e: jne 0x62f4b7 */ if (!fZ) goto L_0062f4b7;
L_0062f4a0:; BB(0x0062f4a0);
    /* 0062f4a0: push 0x14a */ { u32 v = 0x14au; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4a5: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4aa: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4af: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62f4b4u); f_005e9f20();
    /* 0062f4b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f4b7:; BB(0x0062f4b7);
    /* 0062f4b7: jmp 0x62f524 */ goto L_0062f524;
L_0062f4b9:; BB(0x0062f4b9);
    /* 0062f4b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f4bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062f4be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f4c1: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0062f4c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f4c6u); call_ind(t); }
    /* 0062f4c6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f4c9: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f4cd: jne 0x62f50f */ if (!fZ) goto L_0062f50f;
L_0062f4cf:; BB(0x0062f4cf);
    /* 0062f4cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f4d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4d3: push 0x6d9c7c */ { u32 v = 0x6d9c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4d8: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x62f4ddu); f_0062fde0();
    /* 0062f4dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f4e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0062f4e2: jne 0x62f4fb */ if (!fZ) goto L_0062f4fb;
L_0062f4e4:; BB(0x0062f4e4);
    /* 0062f4e4: push 0x153 */ { u32 v = 0x153u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4e9: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4ee: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f4f3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62f4f8u); f_005e9f20();
    /* 0062f4f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f4fb:; BB(0x0062f4fb);
    /* 0062f4fb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f4fe: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0062f501: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f504: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f505: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62f50au); f_00686cae();
    /* 0062f50a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f50d: jmp 0x62f524 */ goto L_0062f524;
L_0062f50f:; BB(0x0062f50f);
    /* 0062f50f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f512: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f513: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f516: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f517: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f51a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f51c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f51f: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0062f522: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f524u); call_ind(t); }
L_0062f524:; BB(0x0062f524);
    /* 0062f524: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f526: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f527: ret  */ FN_RET(0x0062f470); r_esp += 4; return;
}

void f_0062f530(void) /* StringManager::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f530);
    /* 0062f530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f531: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f533: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f536: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0062f539:; BB(0x0062f539);
    /* 0062f539: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f53c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0062f53f: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 0062f542: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f544: je 0x62f563 */ if (fZ) goto L_0062f563;
L_0062f546:; BB(0x0062f546);
    /* 0062f546: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f549: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0062f54c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f54f: add ecx, dword ptr [edx + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f552: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f555: cmp dword ptr [eax + 0x24], ecx */ {  u32 a = R32((u32)(r_eax+0x24u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f558: jae 0x62f563 */ if (!fC) goto L_0062f563;
L_0062f55a:; BB(0x0062f55a);
    /* 0062f55a: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0062f561: jmp 0x62f56a */ goto L_0062f56a;
L_0062f563:; BB(0x0062f563);
    /* 0062f563: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_0062f56a:; BB(0x0062f56a);
    /* 0062f56a: movzx ecx, byte ptr [ebp - 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff4u));
    /* 0062f56e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f570: jne 0x62f629 */ if (!fZ) goto L_0062f629;
L_0062f576:; BB(0x0062f576);
    /* 0062f576: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f579: call 0x62efe0 */ r_esp -= 4; W32(r_esp, 0x62f57eu); f_0062efe0();
    /* 0062f57e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f581: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0062f584: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 0062f587: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f589: je 0x62f5a8 */ if (fZ) goto L_0062f5a8;
L_0062f58b:; BB(0x0062f58b);
    /* 0062f58b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f58e: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0062f591: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f594: add eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062f597: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f59a: cmp dword ptr [edx + 0x24], eax */ {  u32 a = R32((u32)(r_edx+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0062f59d: jae 0x62f5a8 */ if (!fC) goto L_0062f5a8;
L_0062f59f:; BB(0x0062f59f);
    /* 0062f59f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0062f5a6: jmp 0x62f5af */ goto L_0062f5af;
L_0062f5a8:; BB(0x0062f5a8);
    /* 0062f5a8: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_0062f5af:; BB(0x0062f5af);
    /* 0062f5af: movzx eax, byte ptr [ebp - 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff0u));
    /* 0062f5b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f5b5: je 0x62f5b9 */ if (fZ) goto L_0062f5b9;
L_0062f5b7:; BB(0x0062f5b7);
    /* 0062f5b7: jmp 0x62f629 */ goto L_0062f629;
L_0062f5b9:; BB(0x0062f5b9);
    /* 0062f5b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f5bc: call 0x62ee80 */ r_esp -= 4; W32(r_esp, 0x62f5c1u); f_0062ee80();
    /* 0062f5c1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f5c4: cmp dword ptr [ebp - 4], 0x23 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f5c8: jne 0x62f5dc */ if (!fZ) goto L_0062f5dc;
L_0062f5ca:; BB(0x0062f5ca);
    /* 0062f5ca: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f5cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f5cf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f5d2: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0062f5d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f5d7u); call_ind(t); }
    /* 0062f5d7: jmp 0x62f539 */ goto L_0062f539;
L_0062f5dc:; BB(0x0062f5dc);
    /* 0062f5dc: cmp dword ptr [ebp - 4], 0x2f */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f5e0: jne 0x62f60b */ if (!fZ) goto L_0062f60b;
L_0062f5e2:; BB(0x0062f5e2);
    /* 0062f5e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f5e4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f5e6: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f5e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f5eb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f5ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f5f0: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0062f5f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f5f5u); call_ind(t); }
    /* 0062f5f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f5f7: je 0x62f60b */ if (fZ) goto L_0062f60b;
L_0062f5f9:; BB(0x0062f5f9);
    /* 0062f5f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f5fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f5fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f601: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0062f604: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f606u); call_ind(t); }
    /* 0062f606: jmp 0x62f539 */ goto L_0062f539;
L_0062f60b:; BB(0x0062f60b);
    /* 0062f60b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f60e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f60f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f612: call 0x62eef0 */ r_esp -= 4; W32(r_esp, 0x62f617u); f_0062eef0();
    /* 0062f617: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f61a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f61c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f61f: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0062f622: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f624u); call_ind(t); }
    /* 0062f624: jmp 0x62f539 */ goto L_0062f539;
L_0062f629:; BB(0x0062f629);
    /* 0062f629: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f62b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f62c: ret  */ FN_RET(0x0062f530); r_esp += 4; return;
}

void f_0062f630(void) /* StringManager::vfunc21 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f630);
    /* 0062f630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f631: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f633: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f634: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0062f637: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f63b: jne 0x62f644 */ if (!fZ) goto L_0062f644;
L_0062f63d:; BB(0x0062f63d);
    /* 0062f63d: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062f63f: jmp 0x62f707 */ goto L_0062f707;
L_0062f644:; BB(0x0062f644);
    /* 0062f644: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f647: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f64b: je 0x62f664 */ if (fZ) goto L_0062f664;
L_0062f64d:; BB(0x0062f64d);
    /* 0062f64d: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f652: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f657: push 0x6d9c0c */ { u32 v = 0x6d9c0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f65c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62f661u); f_005e9f20();
    /* 0062f661: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f664:; BB(0x0062f664);
    /* 0062f664: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062f667: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f668: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f66b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062f66d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f670: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062f673: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f675u); call_ind(t); }
    /* 0062f675: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f678: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0062f67b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f67e: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f682: jne 0x62f699 */ if (!fZ) goto L_0062f699;
L_0062f684:; BB(0x0062f684);
    /* 0062f684: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f687: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f688: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f68b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f68d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f690: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062f693: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f695u); call_ind(t); }
    /* 0062f695: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0062f697: jmp 0x62f707 */ goto L_0062f707;
L_0062f699:; BB(0x0062f699);
    /* 0062f699: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f69c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f69f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0062f6a2: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0062f6a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062f6a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6a9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f6ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6b1: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0062f6b4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f6b6u); call_ind(t); }
    /* 0062f6b6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6b9: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0062f6bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6bf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f6c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6c4: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0062f6c7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f6c9u); call_ind(t); }
    /* 0062f6c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f6cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6cd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6d0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f6d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6d5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0062f6d8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f6dau); call_ind(t); }
    /* 0062f6da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6dd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f6df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6e2: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0062f6e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f6e7u); call_ind(t); }
    /* 0062f6e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6ea: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 0062f6f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6f4: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 0062f6fb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f6fe: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0062f705: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0062f707:; BB(0x0062f707);
    /* 0062f707: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f709: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f70a: ret 4 */ FN_RET(0x0062f630); r_esp += 8; return;
}

void f_0062f710(void) /* StringManager::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f710);
    /* 0062f710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f711: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f713: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f716: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062f719: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f71c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f71d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f720: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f722: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f725: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f727: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f729u); call_ind(t); }
    /* 0062f729: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f72c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f72f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f730: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f733: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f735: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f738: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0062f73b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f73du); call_ind(t); }
    /* 0062f73d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f73f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f740: ret 4 */ FN_RET(0x0062f710); r_esp += 8; return;
}

void f_0062f750(void) /* StringManager::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f750);
    /* 0062f750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f751: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f753: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f756: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062f759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f75c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f75d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f760: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f762: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f765: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0062f768: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f76au); call_ind(t); }
    /* 0062f76a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f76d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f770: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f771: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f774: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0062f776: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f779: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0062f77c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62f77eu); call_ind(t); }
    /* 0062f77e: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f780: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f781: ret 4 */ FN_RET(0x0062f750); r_esp += 8; return;
}

void f_0062f790(void) /* StringManager::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f790);
    /* 0062f790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f791: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f793: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f796: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062f799: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f79c: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0062f79f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f7a1: jne 0x62f7a7 */ if (!fZ) goto L_0062f7a7;
L_0062f7a3:; BB(0x0062f7a3);
    /* 0062f7a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f7a5: jmp 0x62f821 */ goto L_0062f821;
L_0062f7a7:; BB(0x0062f7a7);
    /* 0062f7a7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f7aa: mov al, byte ptr [edx + 0x3e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x3eu))) & 0xffu);
    /* 0062f7ad: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 0062f7b0: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0062f7b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f7b6: jne 0x62f7e0 */ if (!fZ) goto L_0062f7e0;
L_0062f7b8:; BB(0x0062f7b8);
    /* 0062f7b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0062f7ba: jne 0x62f7d3 */ if (!fZ) goto L_0062f7d3;
L_0062f7bc:; BB(0x0062f7bc);
    /* 0062f7bc: push 0x1c9 */ { u32 v = 0x1c9u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7c1: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7c6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7cb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62f7d0u); f_005e9f20();
    /* 0062f7d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f7d3:; BB(0x0062f7d3);
    /* 0062f7d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f7d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f7d8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f7db: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0062f7de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f7e0u); call_ind(t); }
L_0062f7e0:; BB(0x0062f7e0);
    /* 0062f7e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f7e3: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0062f7e6: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0062f7e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f7ec: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0062f7ef: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0062f7f2: push 0x62f900 */ { u32 v = 0x62f900u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7f7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7f9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f7fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7fd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062f800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f801: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062f804: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f805: call dword ptr [0x6b2184] */ { u32 t = R32((u32)(0x6b2184u)); r_esp -= 4; W32(r_esp, 0x62f80bu); call_ind(t); }
    /* 0062f80b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f80e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f811: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f815: jne 0x62f81b */ if (!fZ) goto L_0062f81b;
L_0062f817:; BB(0x0062f817);
    /* 0062f817: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f819: jmp 0x62f821 */ goto L_0062f821;
L_0062f81b:; BB(0x0062f81b);
    /* 0062f81b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f81e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
L_0062f821:; BB(0x0062f821);
    /* 0062f821: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f823: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f824: ret 4 */ FN_RET(0x0062f790); r_esp += 8; return;
}

void f_0062f830(void) /* StringManager::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062f830);
    /* 0062f830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f831: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f833: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f836: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0062f839: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f83c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f83d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f840: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f842: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062f845: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0062f848: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62f84au); call_ind(t); }
    /* 0062f84a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0062f84d: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f851: jne 0x62f893 */ if (!fZ) goto L_0062f893;
L_0062f853:; BB(0x0062f853);
    /* 0062f853: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062f856: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f857: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x62f85cu); f_00686ecc();
    /* 0062f85c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f85f: cmp dword ptr [ebp + 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062f862: jbe 0x62f87b */ if ((fC||fZ)) goto L_0062f87b;
L_0062f864:; BB(0x0062f864);
    /* 0062f864: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f869: push 0x6d9c18 */ { u32 v = 0x6d9c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f86e: push 0x6d9cd4 */ { u32 v = 0x6d9cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f873: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x62f878u); f_005e9f20();
    /* 0062f878: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f87b:; BB(0x0062f87b);
    /* 0062f87b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0062f87e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0062f881: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f882: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062f885: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f886: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0062f889: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f88a: call dword ptr [0x6b22c0] */ { u32 t = R32((u32)(0x6b22c0u)); r_esp -= 4; W32(r_esp, 0x62f890u); call_ind(t); }
    /* 0062f890: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062f893:; BB(0x0062f893);
    /* 0062f893: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062f896: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f897: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0062f89a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f89b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x62f8a0u); f_00686d8e();
    /* 0062f8a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f8a3: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0062f8a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f8a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f8a8: ret 0xc */ FN_RET(0x0062f830); r_esp += 16; return;
}


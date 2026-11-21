#include "protos.h"

void f_00402ed0(void) /* ScoreCardScroller::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402ed0);
    /* 00402ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00402ed3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402ed4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402ed7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00402ed9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402edc: call 0x5845c0 */ r_esp -= 4; W32(r_esp, 0x402ee1u); f_005845c0();
    /* 00402ee1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402ee4: mov dword ptr [eax], 0x6b29f4 */ W32((u32)(r_eax), 0x6b29f4u);
    /* 00402eea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402eed: mov esp, ebp */ r_esp = r_ebp;
    /* 00402eef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402ef0: ret  */ FN_RET(0x00402ed0); r_esp += 4; return;
}

void f_00402f70(void) /* ScoreCardScroller::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402f70);
    /* 00402f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00402f73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402f77: mov eax, 0x63 */ r_eax = 0x63u;
    /* 00402f7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00402f7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402f7f: ret  */ FN_RET(0x00402f70); r_esp += 4; return;
}

void f_00402f80(void) /* ScoreCardScroller::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402f80);
    /* 00402f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00402f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402f87: mov eax, 0x13 */ r_eax = 0x13u;
    /* 00402f8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00402f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402f8f: ret  */ FN_RET(0x00402f80); r_esp += 4; return;
}

void f_00402f90(void) /* ScoreCardScroller::vfunc47 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00402f90);
    /* 00402f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00402f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00402f93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402f94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00402f97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00402f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00402f9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00402f9e: call 0x5855e0 */ r_esp -= 4; W32(r_esp, 0x402fa3u); f_005855e0();
    /* 00402fa3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00402fa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00402fa7: mov edx, dword ptr [0x7902ec] */ r_edx = R32((u32)(0x7902ecu));
    /* 00402fad: mov ecx, dword ptr [edx + 0x80] */ r_ecx = R32((u32)(r_edx+0x80u));
    /* 00402fb3: call 0x4037c0 */ r_esp -= 4; W32(r_esp, 0x402fb8u); f_004037c0();
    /* 00402fb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00402fba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00402fbb: ret 4 */ FN_RET(0x00402f90); r_esp += 8; return;
}

void f_00584880(void) /* ScoreCardScroller::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584880);
    /* 00584880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584881: mov ebp, esp */ r_ebp = r_esp;
    /* 00584883: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584884: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00584889: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058488b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058488d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584890: call 0x5f6490 */ r_esp -= 4; W32(r_esp, 0x584895u); f_005f6490();
    /* 00584895: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584898: call 0x5f5010 */ r_esp -= 4; W32(r_esp, 0x58489du); f_005f5010();
    /* 0058489d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848a0: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005848a3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848a6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005848a9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005848ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848af: cmp dword ptr [ecx + 0x78], 0 */ {  u32 a = R32((u32)(r_ecx+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005848b3: je 0x5848d4 */ if (fZ) goto L_005848d4;
L_005848b5:; BB(0x005848b5);
    /* 005848b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848b8: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 005848bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005848bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848bf: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005848c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848c5: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005848c8: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005848ca: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005848d0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5848d2u); call_ind(t); }
    /* 005848d2: jmp 0x5848ef */ goto L_005848ef;
L_005848d4:; BB(0x005848d4);
    /* 005848d4: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 005848d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848dc: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005848df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848e2: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005848e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005848e7: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 005848ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5848efu); call_ind(t); }
L_005848ef:; BB(0x005848ef);
    /* 005848ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005848f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848f4: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 005848f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005848fa: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005848fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005848ff: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00584905: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584907u); call_ind(t); }
    /* 00584907: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058490a: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 0058490d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584910: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00584913: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584915: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00584918: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58491au); call_ind(t); }
    /* 0058491a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058491d: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584920: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584923: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00584926: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00584929: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058492c: cmp dword ptr [edx + 0x7c], 0 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584930: je 0x584951 */ if (fZ) goto L_00584951;
L_00584932:; BB(0x00584932);
    /* 00584932: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584935: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00584938: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584939: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058493c: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0058493f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584942: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00584945: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584947: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0058494d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58494fu); call_ind(t); }
    /* 0058494f: jmp 0x58496c */ goto L_0058496c;
L_00584951:; BB(0x00584951);
    /* 00584951: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00584956: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584959: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058495c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058495f: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584962: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584964: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0058496a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58496cu); call_ind(t); }
L_0058496c:; BB(0x0058496c);
    /* 0058496c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058496e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584971: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584974: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584977: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058497a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058497c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00584982: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584984u); call_ind(t); }
    /* 00584984: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584987: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0058498a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058498d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584990: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584992: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00584995: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584997u); call_ind(t); }
    /* 00584997: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058499a: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 0058499d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849a0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005849a3: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 005849a6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849a9: cmp dword ptr [edx + 0x80], 0 */ {  u32 a = R32((u32)(r_edx+0x80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005849b0: je 0x5849c9 */ if (fZ) goto L_005849c9;
L_005849b2:; BB(0x005849b2);
    /* 005849b2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849b5: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005849bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005849bc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849bf: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 005849c2: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5849c7u); f_005eaf00();
    /* 005849c7: jmp 0x5849d9 */ goto L_005849d9;
L_005849c9:; BB(0x005849c9);
    /* 005849c9: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 005849ce: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849d1: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005849d4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5849d9u); f_005eaf00();
L_005849d9:; BB(0x005849d9);
    /* 005849d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005849db: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849de: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005849e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849e4: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005849e7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005849e9: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005849ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5849f1u); call_ind(t); }
    /* 005849f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849f4: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005849f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005849fa: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 005849fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005849ff: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00584a02: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584a04u); call_ind(t); }
    /* 00584a04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584a07: call 0x585070 */ r_esp -= 4; W32(r_esp, 0x584a0cu); f_00585070();
    /* 00584a0c: mov esp, ebp */ r_esp = r_ebp;
    /* 00584a0e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584a0f: ret  */ FN_RET(0x00584880); r_esp += 4; return;
}

void f_00584a10(void) /* ScoreCardScroller::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584a10);
    /* 00584a10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584a11: mov ebp, esp */ r_ebp = r_esp;
    /* 00584a13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00584a16: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584a19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00584a1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584a1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584a20: call 0x5f56a0 */ r_esp -= 4; W32(r_esp, 0x584a25u); f_005f56a0();
    /* 00584a25: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00584a28: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a2a: je 0x584a42 */ if (fZ) goto L_00584a42;
L_00584a2c:; BB(0x00584a2c);
    /* 00584a2c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584a2f: movzx eax, byte ptr [edx + 0x6c] */ r_eax = (u32)R8((u32)(r_edx+0x6cu));
    /* 00584a33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a35: je 0x584a42 */ if (fZ) goto L_00584a42;
L_00584a37:; BB(0x00584a37);
    /* 00584a37: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584a3a: movzx edx, byte ptr [ecx + 4] */ r_edx = (u32)R8((u32)(r_ecx+0x4u));
    /* 00584a3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a40: je 0x584a47 */ if (fZ) goto L_00584a47;
L_00584a42:; BB(0x00584a42);
    /* 00584a42: jmp 0x584ad8 */ goto L_00584ad8;
L_00584a47:; BB(0x00584a47);
    /* 00584a47: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00584a4a: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00584a4d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00584a50: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a54: je 0x584a5e */ if (fZ) goto L_00584a5e;
L_00584a56:; BB(0x00584a56);
    /* 00584a56: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a5a: je 0x584ac6 */ if (fZ) goto L_00584ac6;
L_00584a5c:; BB(0x00584a5c);
    /* 00584a5c: jmp 0x584ad8 */ goto L_00584ad8;
L_00584a5e:; BB(0x00584a5e);
    /* 00584a5e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584a61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584a62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584a65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584a67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584a6a: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00584a70: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584a72u); call_ind(t); }
    /* 00584a72: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00584a75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584a77: je 0x584a8b */ if (fZ) goto L_00584a8b;
L_00584a79:; BB(0x00584a79);
    /* 00584a79: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584a7c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00584a7f: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00584a82: je 0x584a8b */ if (fZ) goto L_00584a8b;
L_00584a84:; BB(0x00584a84);
    /* 00584a84: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584a87: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
L_00584a8b:; BB(0x00584a8b);
    /* 00584a8b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584a8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584a8f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584a92: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584a94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584a97: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00584a9d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584a9fu); call_ind(t); }
    /* 00584a9f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00584aa2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584aa4: je 0x584ac4 */ if (fZ) goto L_00584ac4;
L_00584aa6:; BB(0x00584aa6);
    /* 00584aa6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584aa9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00584aac: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00584aaf: je 0x584ac4 */ if (fZ) goto L_00584ac4;
L_00584ab1:; BB(0x00584ab1);
    /* 00584ab1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584ab4: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 00584ab8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584abb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584abc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584abf: call 0x585240 */ r_esp -= 4; W32(r_esp, 0x584ac4u); f_00585240();
L_00584ac4:; BB(0x00584ac4);
    /* 00584ac4: jmp 0x584ad8 */ goto L_00584ad8;
L_00584ac6:; BB(0x00584ac6);
    /* 00584ac6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00584ac9: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00584acc: and ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00584acf: je 0x584ad8 */ if (fZ) goto L_00584ad8;
L_00584ad1:; BB(0x00584ad1);
    /* 00584ad1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584ad4: mov byte ptr [edx + 4], 1 */ W8((u32)(r_edx+0x4u), 0x1u);
L_00584ad8:; BB(0x00584ad8);
    /* 00584ad8: mov esp, ebp */ r_esp = r_ebp;
    /* 00584ada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584adb: ret 4 */ FN_RET(0x00584a10); r_esp += 8; return;
}

void f_00584ae0(void) /* ScoreCardScroller::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584ae0);
    /* 00584ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00584ae3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584ae4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584ae5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584ae8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00584aeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584aec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584aef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584af0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584af3: call 0x5f6210 */ r_esp -= 4; W32(r_esp, 0x584af8u); f_005f6210();
    /* 00584af8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00584afb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584afc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00584aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584b00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b03: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 00584b06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b09: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00584b0c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584b0e: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584b11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584b13u); call_ind(t); }
    /* 00584b13: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b16: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584b1a: jne 0x584bc4 */ if (!fZ) goto L_00584bc4;
L_00584b20:; BB(0x00584b20);
    /* 00584b20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b23: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584b28u); f_005f5590();
    /* 00584b28: mov esi, eax */ r_esi = r_eax;
    /* 00584b2a: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00584b2d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b30: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00584b33: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584b38u); f_005f5590();
    /* 00584b38: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00584b3b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584b3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584b3e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00584b41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584b42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b45: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584b48: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b4b: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584b4e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584b50: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584b53: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584b55u); call_ind(t); }
    /* 00584b55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b58: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00584b5b: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584b60u); f_005f5590();
    /* 00584b60: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584b64: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00584b67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584b68: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b6b: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584b6e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b71: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584b74: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584b76: mov ecx, eax */ r_ecx = r_eax;
    /* 00584b78: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584b7b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584b7du); call_ind(t); }
    /* 00584b7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b80: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584b83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b86: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584b89: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584b8b: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00584b8e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584b90u); call_ind(t); }
    /* 00584b90: mov esi, eax */ r_esi = r_eax;
    /* 00584b92: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584b95: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584b98: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584b9du); f_005f5590();
    /* 00584b9d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584b9f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584ba0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584ba3: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584ba6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584ba9: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584bac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584bae: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00584bb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584bb3u); call_ind(t); }
    /* 00584bb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584bb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584bb7: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584bba: call 0x584210 */ r_esp -= 4; W32(r_esp, 0x584bbfu); f_00584210();
    /* 00584bbf: jmp 0x584c63 */ goto L_00584c63;
L_00584bc4:; BB(0x00584bc4);
    /* 00584bc4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00584bc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584bc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584bcb: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584bd0u); f_005f5550();
    /* 00584bd0: mov esi, eax */ r_esi = r_eax;
    /* 00584bd2: add esi, dword ptr [ebp + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00584bd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584bd8: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584bdb: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584be0u); f_005f5550();
    /* 00584be0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00584be3: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584be5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584be6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584be9: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584bec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584bef: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584bf2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584bf4: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584bf7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584bf9u); call_ind(t); }
    /* 00584bf9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00584bfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584bfd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c00: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00584c03: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584c08u); f_005f5550();
    /* 00584c08: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584c0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584c0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c0f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584c12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c15: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584c18: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584c1a: mov ecx, eax */ r_ecx = r_eax;
    /* 00584c1c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584c1f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584c21u); call_ind(t); }
    /* 00584c21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c24: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584c27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c2a: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584c2d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584c2f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00584c32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584c34u); call_ind(t); }
    /* 00584c34: mov esi, eax */ r_esi = r_eax;
    /* 00584c36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c39: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584c3c: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584c41u); f_005f5550();
    /* 00584c41: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584c43: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584c44: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c47: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584c4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c4d: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584c50: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584c52: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00584c55: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584c57u); call_ind(t); }
    /* 00584c57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584c58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c5b: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584c5e: call 0x584210 */ r_esp -= 4; W32(r_esp, 0x584c63u); f_00584210();
L_00584c63:; BB(0x00584c63);
    /* 00584c63: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c66: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 00584c69: call 0x584260 */ r_esp -= 4; W32(r_esp, 0x584c6eu); f_00584260();
    /* 00584c6e: mov esi, eax */ r_esi = r_eax;
    /* 00584c70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c73: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584c76: call 0x584240 */ r_esp -= 4; W32(r_esp, 0x584c7bu); f_00584240();
    /* 00584c7b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584c7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584c80: mov dword ptr [ecx + 0x70], esi */ W32((u32)(r_ecx+0x70u), r_esi);
    /* 00584c83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584c84: mov esp, ebp */ r_esp = r_ebp;
    /* 00584c86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584c87: ret 8 */ FN_RET(0x00584ae0); r_esp += 12; return;
}

void f_00584c90(void) /* ScoreCardScroller::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584c90);
    /* 00584c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00584c93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00584c96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584c97: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00584c9a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00584c9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584c9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584ca1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584ca2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584ca5: call 0x5f6240 */ r_esp -= 4; W32(r_esp, 0x584caau); f_005f6240();
    /* 00584caa: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cad: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00584caf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cb2: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00584cb5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x584cb7u); call_ind(t); }
    /* 00584cb7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00584cba: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584cbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cc2: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00584cc5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584cc7u); call_ind(t); }
    /* 00584cc7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00584cca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584ccd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584cce: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00584cd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584cd2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cd5: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00584cd8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cdb: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00584cde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584ce0: mov ecx, eax */ r_ecx = r_eax;
    /* 00584ce2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584ce5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ce7u); call_ind(t); }
    /* 00584ce7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cea: cmp dword ptr [ecx + 0x68], 0 */ {  u32 a = R32((u32)(r_ecx+0x68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584cee: jne 0x584d98 */ if (!fZ) goto L_00584d98;
L_00584cf4:; BB(0x00584cf4);
    /* 00584cf4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584cf7: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584cfcu); f_005f5590();
    /* 00584cfc: mov esi, eax */ r_esi = r_eax;
    /* 00584cfe: add esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00584d01: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d04: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00584d07: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584d0cu); f_005f5590();
    /* 00584d0c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00584d0f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584d11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584d12: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00584d15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584d16: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d19: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584d1c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d1f: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584d22: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584d24: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584d27: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584d29u); call_ind(t); }
    /* 00584d29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d2c: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00584d2f: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584d34u); f_005f5590();
    /* 00584d34: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584d37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584d38: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00584d3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584d3c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d3f: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584d42: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d45: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584d48: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584d4a: mov ecx, eax */ r_ecx = r_eax;
    /* 00584d4c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584d4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584d51u); call_ind(t); }
    /* 00584d51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d54: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584d57: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d5a: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584d5d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584d5f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00584d62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584d64u); call_ind(t); }
    /* 00584d64: mov esi, eax */ r_esi = r_eax;
    /* 00584d66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d69: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584d6c: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x584d71u); f_005f5590();
    /* 00584d71: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584d73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584d74: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d77: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584d7a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d7d: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584d80: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584d82: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00584d85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584d87u); call_ind(t); }
    /* 00584d87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584d88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d8b: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584d8e: call 0x584210 */ r_esp -= 4; W32(r_esp, 0x584d93u); f_00584210();
    /* 00584d93: jmp 0x584e37 */ goto L_00584e37;
L_00584d98:; BB(0x00584d98);
    /* 00584d98: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584d9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00584d9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584d9f: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584da4u); f_005f5550();
    /* 00584da4: mov esi, eax */ r_esi = r_eax;
    /* 00584da6: add esi, dword ptr [ebp - 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00584da9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584dac: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584daf: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584db4u); f_005f5550();
    /* 00584db4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00584db7: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584db9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584dba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584dbd: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584dc0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584dc3: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584dc6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584dc8: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584dcb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584dcdu); call_ind(t); }
    /* 00584dcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584dd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584dd1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584dd4: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 00584dd7: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584ddcu); f_005f5550();
    /* 00584ddc: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00584ddf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584de0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584de3: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584de6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584de9: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584dec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584dee: mov ecx, eax */ r_ecx = r_eax;
    /* 00584df0: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00584df3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584df5u); call_ind(t); }
    /* 00584df5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584df8: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584dfb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584dfe: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584e01: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584e03: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00584e06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584e08u); call_ind(t); }
    /* 00584e08: mov esi, eax */ r_esi = r_eax;
    /* 00584e0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584e0d: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584e10: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x584e15u); f_005f5550();
    /* 00584e15: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584e17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00584e18: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584e1b: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584e1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584e21: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584e24: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584e26: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00584e29: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584e2bu); call_ind(t); }
    /* 00584e2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584e2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584e2f: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584e32: call 0x584210 */ r_esp -= 4; W32(r_esp, 0x584e37u); f_00584210();
L_00584e37:; BB(0x00584e37);
    /* 00584e37: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584e3a: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 00584e3d: call 0x584260 */ r_esp -= 4; W32(r_esp, 0x584e42u); f_00584260();
    /* 00584e42: mov esi, eax */ r_esi = r_eax;
    /* 00584e44: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584e47: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584e4a: call 0x584240 */ r_esp -= 4; W32(r_esp, 0x584e4fu); f_00584240();
    /* 00584e4f: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00584e51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00584e54: mov dword ptr [ecx + 0x70], esi */ W32((u32)(r_ecx+0x70u), r_esi);
    /* 00584e57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00584e58: mov esp, ebp */ r_esp = r_ebp;
    /* 00584e5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584e5b: ret 8 */ FN_RET(0x00584c90); r_esp += 12; return;
}

void f_00584e60(void) /* ScoreCardScroller::vfunc27 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584e60);
    /* 00584e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00584e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584e67: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00584e6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584e6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584e6e: call 0x5f5300 */ r_esp -= 4; W32(r_esp, 0x584e73u); f_005f5300();
    /* 00584e73: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584e76: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00584e79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584e7a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584e7d: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00584e80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584e83: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 00584e86: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584e88: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00584e8b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584e8du); call_ind(t); }
    /* 00584e8d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584e90: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00584e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584e94: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584e97: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00584e9a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584e9d: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00584ea0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584ea2: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00584ea5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ea7u); call_ind(t); }
    /* 00584ea7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00584eaa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00584ead: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584eae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584eb1: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584eb4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584eb7: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00584eba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00584ebc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00584ebf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ec1u); call_ind(t); }
    /* 00584ec1: mov esp, ebp */ r_esp = r_ebp;
    /* 00584ec3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584ec4: ret 4 */ FN_RET(0x00584e60); r_esp += 8; return;
}

void f_00584f50(void) /* ScoreCardScroller::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584f50);
    /* 00584f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00584f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584f57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f5a: call 0x5f6270 */ r_esp -= 4; W32(r_esp, 0x584f5fu); f_005f6270();
    /* 00584f5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f62: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00584f65: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f68: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00584f6b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584f6d: mov ecx, eax */ r_ecx = r_eax;
    /* 00584f6f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00584f72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584f74u); call_ind(t); }
    /* 00584f74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f77: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584f7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f7d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584f80: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584f82: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00584f85: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584f87u); call_ind(t); }
    /* 00584f87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f8a: movzx edx, byte ptr [ecx + 0x6c] */ r_edx = (u32)R8((u32)(r_ecx+0x6cu));
    /* 00584f8e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584f90: je 0x584fa9 */ if (fZ) goto L_00584fa9;
L_00584f92:; BB(0x00584f92);
    /* 00584f92: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f95: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584f98: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584f9b: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 00584f9e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584fa0: mov ecx, eax */ r_ecx = r_eax;
    /* 00584fa2: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00584fa5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584fa7u); call_ind(t); }
    /* 00584fa7: jmp 0x584fbc */ goto L_00584fbc;
L_00584fa9:; BB(0x00584fa9);
    /* 00584fa9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584fac: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00584faf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584fb2: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00584fb5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584fb7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00584fba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584fbcu); call_ind(t); }
L_00584fbc:; BB(0x00584fbc);
    /* 00584fbc: mov esp, ebp */ r_esp = r_ebp;
    /* 00584fbe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00584fbf: ret  */ FN_RET(0x00584f50); r_esp += 4; return;
}

void f_00584fc0(void) /* ScoreCardScroller::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00584fc0);
    /* 00584fc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00584fc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00584fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00584fc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00584fc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584fca: call 0x5f62b0 */ r_esp -= 4; W32(r_esp, 0x584fcfu); f_005f62b0();
    /* 00584fcf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584fd2: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00584fd5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584fd8: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 00584fdb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00584fdd: mov ecx, eax */ r_ecx = r_eax;
    /* 00584fdf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00584fe2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584fe4u); call_ind(t); }
    /* 00584fe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584fe7: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00584fea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584fed: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00584ff0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00584ff2: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00584ff5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x584ff7u); call_ind(t); }
    /* 00584ff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00584ffa: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 00584ffd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585000: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00585003: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00585005: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00585008: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58500au); call_ind(t); }
    /* 0058500a: mov esp, ebp */ r_esp = r_ebp;
    /* 0058500c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058500d: ret  */ FN_RET(0x00584fc0); r_esp += 4; return;
}

void f_00585500(void) /* ScoreCardScroller::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00585500);
    /* 00585500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00585501: mov ebp, esp */ r_ebp = r_esp;
    /* 00585503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00585504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00585505: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00585508: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058550c: jne 0x585536 */ if (!fZ) goto L_00585536;
L_0058550e:; BB(0x0058550e);
    /* 0058550e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585511: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00585514: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 00585517: jns 0x585525 */ if (!fS) goto L_00585525;
L_00585519:; BB(0x00585519);
    /* 00585519: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058551c: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 00585523: jmp 0x585534 */ goto L_00585534;
L_00585525:; BB(0x00585525);
    /* 00585525: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585528: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0058552b: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0058552e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585531: mov dword ptr [edx + 0x74], ecx */ W32((u32)(r_edx+0x74u), r_ecx);
L_00585534:; BB(0x00585534);
    /* 00585534: jmp 0x585580 */ goto L_00585580;
L_00585536:; BB(0x00585536);
    /* 00585536: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585539: mov esi, dword ptr [eax + 0x74] */ r_esi = R32((u32)(r_eax+0x74u));
    /* 0058553c: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058553f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585542: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00585544: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585547: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0058554d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58554fu); call_ind(t); }
    /* 0058554f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00585552: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585554: jle 0x585571 */ if ((fZ||fS!=fO)) goto L_00585571;
L_00585556:; BB(0x00585556);
    /* 00585556: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585559: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058555b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058555e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00585564: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585566u); call_ind(t); }
    /* 00585566: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00585569: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058556c: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0058556f: jmp 0x585580 */ goto L_00585580;
L_00585571:; BB(0x00585571);
    /* 00585571: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585574: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00585577: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058557a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058557d: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
L_00585580:; BB(0x00585580);
    /* 00585580: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585583: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00585587: jl 0x5855a4 */ if ((fS!=fO)) goto L_005855a4;
L_00585589:; BB(0x00585589);
    /* 00585589: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058558c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058558e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00585591: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00585597: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x585599u); call_ind(t); }
    /* 00585599: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0058559c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058559f: cmp dword ptr [ecx + 0x74], eax */ {  u32 a = R32((u32)(r_ecx+0x74u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005855a2: jle 0x5855bb */ if ((fZ||fS!=fO)) goto L_005855bb;
L_005855a4:; BB(0x005855a4);
    /* 005855a4: push 0x19e */ { u32 v = 0x19eu; r_esp -= 4; W32(r_esp, v); }
    /* 005855a9: push 0x6ccc60 */ { u32 v = 0x6ccc60u; r_esp -= 4; W32(r_esp, v); }
    /* 005855ae: push 0x6ccc7c */ { u32 v = 0x6ccc7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005855b3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5855b8u); f_005e9f20();
    /* 005855b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005855bb:; BB(0x005855bb);
    /* 005855bb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005855be: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005855c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005855c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005855c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005855c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005855ca: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 005855d0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5855d2u); call_ind(t); }
    /* 005855d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005855d3: mov esp, ebp */ r_esp = r_ebp;
    /* 005855d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005855d6: ret 8 */ FN_RET(0x00585500); r_esp += 12; return;
}

void f_005f6820(void) /* ScoreCardScroller::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f6820);
    /* 005f6820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f6821: mov ebp, esp */ r_ebp = r_esp;
    /* 005f6823: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f6826: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005f6829: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f682c: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5f6831u); f_005f54c0();
    /* 005f6831: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005f6834: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6836: je 0x5f683d */ if (fZ) goto L_005f683d;
L_005f6838:; BB(0x005f6838);
    /* 005f6838: jmp 0x5f6acf */ goto L_005f6acf;
L_005f683d:; BB(0x005f683d);
    /* 005f683d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6840: mov dl, byte ptr [ecx + 0x58] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x58u))) & 0xffu);
    /* 005f6843: mov byte ptr [ebp - 0x29], dl */ W8((u32)(r_ebp+0xffffffd7u), (u8)r_edx);
    /* 005f6846: movzx eax, byte ptr [ebp - 0x29] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd7u));
    /* 005f684a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f684c: je 0x5f6898 */ if (fZ) goto L_005f6898;
L_005f684e:; BB(0x005f684e);
    /* 005f684e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6851: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f6854: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f6857: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005f685a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f685d: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f6860: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6863: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005f6866: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6869: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f686c: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f686f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005f6872: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6875: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f6878: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f687b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005f687e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005f6881: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f6884: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f6887: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f688a: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f688d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f6890: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005f6893: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f6896: jmp 0x5f68d4 */ goto L_005f68d4;
L_005f6898:; BB(0x005f6898);
    /* 005f6898: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f689b: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005f689e: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005f68a1: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f68a4: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f68a7: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005f68aa: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f68ad: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f68b0: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005f68b3: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f68b6: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005f68b9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005f68bc: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005f68bf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f68c2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005f68c5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f68c8: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005f68cb: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005f68ce: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 005f68d1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_005f68d4:; BB(0x005f68d4);
    /* 005f68d4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005f68d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f68d9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005f68dc: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005f68df: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f68e2: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005f68e5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005f68e8: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 005f68eb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f68ee: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f68f1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f68f4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005f68f7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f68fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f68fd: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005f6900: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 005f6903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6904: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005f6907: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6908: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 005f690b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f690c: call 0x5ec3a0 */ r_esp -= 4; W32(r_esp, 0x5f6911u); f_005ec3a0();
    /* 005f6911: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f6914: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6917: mov cl, byte ptr [eax + 0x58] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x58u))) & 0xffu);
    /* 005f691a: mov byte ptr [ebp - 0x4d], cl */ W8((u32)(r_ebp+0xffffffb3u), (u8)r_ecx);
    /* 005f691d: movzx edx, byte ptr [ebp - 0x4d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb3u));
    /* 005f6921: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6923: je 0x5f693d */ if (fZ) goto L_005f693d;
L_005f6925:; BB(0x005f6925);
    /* 005f6925: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6928: movzx ecx, byte ptr [eax + 0x49] */ r_ecx = (u32)R8((u32)(r_eax+0x49u));
    /* 005f692c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f692e: je 0x5f6938 */ if (fZ) goto L_005f6938;
L_005f6930:; BB(0x005f6930);
    /* 005f6930: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6933: call 0x5f6640 */ r_esp -= 4; W32(r_esp, 0x5f6938u); f_005f6640();
L_005f6938:; BB(0x005f6938);
    /* 005f6938: jmp 0x5f6acf */ goto L_005f6acf;
L_005f693d:; BB(0x005f693d);
    /* 005f693d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6940: mov al, byte ptr [edx + 0x4a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4au))) & 0xffu);
    /* 005f6943: mov byte ptr [ebp - 8], al */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_eax);
    /* 005f6946: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6949: mov dl, byte ptr [ecx + 0x4b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4bu))) & 0xffu);
    /* 005f694c: mov byte ptr [ebp - 7], dl */ W8((u32)(r_ebp+0xfffffff9u), (u8)r_edx);
    /* 005f694f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6952: mov cl, byte ptr [eax + 0x4c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4cu))) & 0xffu);
    /* 005f6955: mov byte ptr [ebp - 6], cl */ W8((u32)(r_ebp+0xfffffffau), (u8)r_ecx);
    /* 005f6958: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f695b: call 0x5f63f0 */ r_esp -= 4; W32(r_esp, 0x5f6960u); f_005f63f0();
    /* 005f6960: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 005f6963: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6966: movzx eax, byte ptr [edx + 0x48] */ r_eax = (u32)R8((u32)(r_edx+0x48u));
    /* 005f696a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f696c: je 0x5f69b0 */ if (fZ) goto L_005f69b0;
L_005f696e:; BB(0x005f696e);
    /* 005f696e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f6971: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005f6974: jmp 0x5f697f */ goto L_005f697f;
L_005f6976:; BB(0x005f6976);
    /* 005f6976: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6979: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f697c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005f697f:; BB(0x005f697f);
    /* 005f697f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6982: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f6985: jge 0x5f69b0 */ if ((fS==fO)) goto L_005f69b0;
L_005f6987:; BB(0x005f6987);
    /* 005f6987: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f698a: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f698fu); f_005f6620();
    /* 005f698f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6990: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6993: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6994: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f6997: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6998: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f699b: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f699e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f699f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f69a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f69a3: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69a6: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f69a9: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x5f69aeu); f_005f9380();
    /* 005f69ae: jmp 0x5f6976 */ goto L_005f6976;
L_005f69b0:; BB(0x005f69b0);
    /* 005f69b0: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69b3: mov cl, byte ptr [eax + 0x4d] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4du))) & 0xffu);
    /* 005f69b6: mov byte ptr [ebp - 8], cl */ W8((u32)(r_ebp+0xfffffff8u), (u8)r_ecx);
    /* 005f69b9: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69bc: mov al, byte ptr [edx + 0x4e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x4eu))) & 0xffu);
    /* 005f69bf: mov byte ptr [ebp - 7], al */ W8((u32)(r_ebp+0xfffffff9u), (u8)r_eax);
    /* 005f69c2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69c5: mov dl, byte ptr [ecx + 0x4f] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4fu))) & 0xffu);
    /* 005f69c8: mov byte ptr [ebp - 6], dl */ W8((u32)(r_ebp+0xfffffffau), (u8)r_edx);
    /* 005f69cb: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69ce: call 0x5f63f0 */ r_esp -= 4; W32(r_esp, 0x5f69d3u); f_005f63f0();
    /* 005f69d3: mov byte ptr [ebp - 5], al */ W8((u32)(r_ebp+0xfffffffbu), (u8)r_eax);
    /* 005f69d6: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69d9: movzx ecx, byte ptr [eax + 0x49] */ r_ecx = (u32)R8((u32)(r_eax+0x49u));
    /* 005f69dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f69df: je 0x5f6acf */ if (fZ) goto L_005f6acf;
L_005f69e5:; BB(0x005f69e5);
    /* 005f69e5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f69eb: cmp eax, dword ptr [edx + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f69ee: jne 0x5f6a1a */ if (!fZ) goto L_005f6a1a;
L_005f69f0:; BB(0x005f69f0);
    /* 005f69f0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f69f3: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f69f8u); f_005f6620();
    /* 005f69f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f69f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f69fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f69fd: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a00: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 005f6a03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a04: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6a07: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6a0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a0b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f6a0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a0f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a12: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f6a15: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x5f6a1au); f_005f9380();
L_005f6a1a:; BB(0x005f6a1a);
    /* 005f6a1a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6a1d: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6a20: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a23: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f6a26: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f6a29: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6a2b: jne 0x5f6a5a */ if (!fZ) goto L_005f6a5a;
L_005f6a2d:; BB(0x005f6a2d);
    /* 005f6a2d: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a30: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f6a35u); f_005f6620();
    /* 005f6a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a36: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6a39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a3a: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a3d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005f6a40: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f6a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a44: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6a47: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6a4a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a4b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f6a4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a4f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a52: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005f6a55: call 0x5f9380 */ r_esp -= 4; W32(r_esp, 0x5f6a5au); f_005f9380();
L_005f6a5a:; BB(0x005f6a5a);
    /* 005f6a5a: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a5d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f6a60: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6a63: jne 0x5f6a8f */ if (!fZ) goto L_005f6a8f;
L_005f6a65:; BB(0x005f6a65);
    /* 005f6a65: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a68: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f6a6du); f_005f6620();
    /* 005f6a6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a6e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6a71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a72: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6a75: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6a78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a79: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f6a7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a7d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a80: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005f6a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6a84: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a87: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f6a8a: call 0x5f93e0 */ r_esp -= 4; W32(r_esp, 0x5f6a8fu); f_005f93e0();
L_005f6a8f:; BB(0x005f6a8f);
    /* 005f6a8f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6a92: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f6a95: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6a98: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 005f6a9b: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f6a9e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6aa0: jne 0x5f6acf */ if (!fZ) goto L_005f6acf;
L_005f6aa2:; BB(0x005f6aa2);
    /* 005f6aa2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6aa5: call 0x5f6620 */ r_esp -= 4; W32(r_esp, 0x5f6aaau); f_005f6620();
    /* 005f6aaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6aab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f6aae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6aaf: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f6ab2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6ab5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ab6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f6ab9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6aba: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6abd: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005f6ac0: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f6ac3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f6ac4: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005f6ac7: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005f6aca: call 0x5f93e0 */ r_esp -= 4; W32(r_esp, 0x5f6acfu); f_005f93e0();
L_005f6acf:; BB(0x005f6acf);
    /* 005f6acf: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6ad1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6ad2: ret 4 */ FN_RET(0x005f6820); r_esp += 8; return;
}


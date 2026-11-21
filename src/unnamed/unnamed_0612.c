#include "protos.h"

void f_00612690(void) /* sub_612690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612690);
    /* 00612690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612691: mov ebp, esp */ r_ebp = r_esp;
    /* 00612693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612694: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00612697: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061269a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006126a0: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006126a4: je 0x6126bc */ if (fZ) goto L_006126bc;
L_006126a6:; BB(0x006126a6);
    /* 006126a6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006126a9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006126ac: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006126af: ja 0x6126bc */ if ((!fC&&!fZ)) goto L_006126bc;
L_006126b1:; BB(0x006126b1);
    /* 006126b1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006126b4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006126b7: cmp ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006126ba: jbe 0x6126c2 */ if ((fC||fZ)) goto L_006126c2;
L_006126bc:; BB(0x006126bc);
    /* 006126bc: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6126c2u); call_ind(t); }
L_006126c2:; BB(0x006126c2);
    /* 006126c2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006126c5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006126c8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006126ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006126cd: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006126d0: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006126d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006126d6: mov esp, ebp */ r_esp = r_ebp;
    /* 006126d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006126d9: ret 8 */ FN_RET(0x00612690); r_esp += 12; return;
}

void f_00612780(void) /* sub_612780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612780);
    /* 00612780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612781: mov ebp, esp */ r_ebp = r_esp;
    /* 00612783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00612787: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061278a: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061278d: jne 0x612795 */ if (!fZ) goto L_00612795;
L_0061278f:; BB(0x0061278f);
    /* 0061278f: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x612795u); call_ind(t); }
L_00612795:; BB(0x00612795);
    /* 00612795: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00612798: imul ecx, ecx, 0x48 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x48u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061279b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061279e: add ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006127a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006127a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006127a6: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006127a9: ja 0x6127c1 */ if ((!fC&&!fZ)) goto L_006127c1;
L_006127ab:; BB(0x006127ab);
    /* 006127ab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006127ae: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006127b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006127b4: add eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006127b7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006127ba: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006127bc: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006127bf: jae 0x6127c7 */ if (!fC) goto L_006127c7;
L_006127c1:; BB(0x006127c1);
    /* 006127c1: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x6127c7u); call_ind(t); }
L_006127c7:; BB(0x006127c7);
    /* 006127c7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006127ca: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006127cd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006127d0: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006127d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006127d6: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006127d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006127dc: mov esp, ebp */ r_esp = r_ebp;
    /* 006127de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006127df: ret 4 */ FN_RET(0x00612780); r_esp += 8; return;
}

void f_006127f0(void) /* sub_6127F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006127f0);
    /* 006127f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006127f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006127f3: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006127f9: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 006127ff: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00612805: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00612808: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0061280b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00612812: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612819: je 0x612837 */ if (fZ) goto L_00612837;
L_0061281b:; BB(0x0061281b);
    /* 0061281b: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00612821: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00612824: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00612827: ja 0x612837 */ if ((!fC&&!fZ)) goto L_00612837;
L_00612829:; BB(0x00612829);
    /* 00612829: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061282f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00612832: cmp edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00612835: jbe 0x61283d */ if ((fC||fZ)) goto L_0061283d;
L_00612837:; BB(0x00612837);
    /* 00612837: call dword ptr [0x6b2274] */ { u32 t = R32((u32)(0x6b2274u)); r_esp -= 4; W32(r_esp, 0x61283du); call_ind(t); }
L_0061283d:; BB(0x0061283d);
    /* 0061283d: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00612843: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00612846: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00612849: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0061284c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061284f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00612852: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00612855: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00612858: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0061285b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061285c: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 0061285f: call 0x612780 */ r_esp -= 4; W32(r_esp, 0x612864u); f_00612780();
    /* 00612864: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612867: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061286a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0061286d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00612870: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00612873: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00612879: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061287c: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00612882: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00612888: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612889: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0061288f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612890: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00612893: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612894: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0061289a: call 0x6128b0 */ r_esp -= 4; W32(r_esp, 0x61289fu); f_006128b0();
    /* 0061289f: mov esp, ebp */ r_esp = r_ebp;
    /* 006128a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006128a2: ret 4 */ FN_RET(0x006127f0); r_esp += 8; return;
}

void f_006128b0(void) /* sub_6128B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006128b0);
    /* 006128b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006128b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006128b3: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006128b6: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 006128b9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006128bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006128bd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 006128c0: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006128c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006128c4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006128c7: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006128ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006128cb: call 0x612b80 */ r_esp -= 4; W32(r_esp, 0x6128d0u); f_00612b80();
    /* 006128d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006128d3: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 006128d6: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006128d9: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 006128dc: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 006128df: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006128e2: sub ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006128e5: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 006128e8: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006128eb: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006128ee: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006128f1: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 006128f4: mov cl, byte ptr [ebp - 0x30] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd0u))) & 0xffu);
    /* 006128f7: mov byte ptr [ebp - 0x2f], cl */ W8((u32)(r_ebp+0xffffffd1u), (u8)r_ecx);
    /* 006128fa: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006128fd: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00612900: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612903: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00612906: jmp 0x612911 */ goto L_00612911;
L_00612908:; BB(0x00612908);
    /* 00612908: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0061290b: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061290e: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
L_00612911:; BB(0x00612911);
    /* 00612911: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00612914: cmp edx, dword ptr [ebp - 0x58] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612917: je 0x61293f */ if (fZ) goto L_0061293f;
L_00612919:; BB(0x00612919);
    /* 00612919: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0061291c: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061291f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00612922: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00612925: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x61292au); f_005be450();
    /* 0061292a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061292c: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0061292f: je 0x61293d */ if (fZ) goto L_0061293d;
L_00612931:; BB(0x00612931);
    /* 00612931: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00612934: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612935: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61293au); f_00686cae();
    /* 0061293a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061293d:; BB(0x0061293d);
    /* 0061293d: jmp 0x612908 */ goto L_00612908;
L_0061293f:; BB(0x0061293f);
    /* 0061293f: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00612942: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00612945: sub ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00612948: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 0061294b: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0061294e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612951: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00612954: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00612956: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00612959: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0061295c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061295f: mov esp, ebp */ r_esp = r_ebp;
    /* 00612961: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612962: ret 0xc */ FN_RET(0x006128b0); r_esp += 16; return;
}

void f_00612970(void) /* sub_612970 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612970);
    /* 00612970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612971: mov ebp, esp */ r_ebp = r_esp;
    /* 00612973: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612975: push 0x6aaff1 */ { u32 v = 0x6aaff1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061297a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612981: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612982: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612985: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00612987: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00612988: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0061298d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061298f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612990: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00612993: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00612999: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061299c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0061299f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006129a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006129a9: jmp 0x6129bd */ goto L_006129bd;
L_006129ab:; BB(0x006129ab);
    /* 006129ab: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006129ae: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006129b1: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 006129b4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006129b7: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006129ba: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_006129bd:; BB(0x006129bd);
    /* 006129bd: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006129c1: jbe 0x612a03 */ if ((fC||fZ)) goto L_00612a03;
L_006129c3:; BB(0x006129c3);
    /* 006129c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006129c6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006129c9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006129cc: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006129cf: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006129d3: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006129d7: je 0x6129f0 */ if (fZ) goto L_006129f0;
L_006129d9:; BB(0x006129d9);
    /* 006129d9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006129dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006129dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006129e0: call 0x610570 */ r_esp -= 4; W32(r_esp, 0x6129e5u); f_00610570();
    /* 006129e5: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006129e8: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 006129eb: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006129ee: jmp 0x6129f7 */ goto L_006129f7;
L_006129f0:; BB(0x006129f0);
    /* 006129f0: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006129f7:; BB(0x006129f7);
    /* 006129f7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 006129fa: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006129fd: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00612a01: jmp 0x6129ab */ goto L_006129ab;
L_00612a03:; BB(0x00612a03);
    /* 00612a03: jmp 0x612a54 */ goto L_00612a54;
L_00612a54:; BB(0x00612a54);
    /* 00612a54: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00612a5b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612a5e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00612a65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612a66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612a67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00612a68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612a69: mov esp, ebp */ r_esp = r_ebp;
    /* 00612a6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612a6c: ret  */ FN_RET(0x00612970); r_esp += 4; return;
}

void f_00612a70(void) /* sub_612A70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612a70);
    /* 00612a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00612a73: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612a76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612a78: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00612a7b: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 00612a7e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 00612a81: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00612a84: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00612a87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612a8a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00612a8d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00612a90: mov byte ptr [ebp - 0x31], cl */ W8((u32)(r_ebp+0xffffffcfu), (u8)r_ecx);
    /* 00612a93: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00612a96: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00612a99: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00612a9c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00612a9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00612aa2: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00612aa5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00612aa8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00612aab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612aad: mov byte ptr [ebp - 0x11], al */ W8((u32)(r_ebp+0xffffffefu), (u8)r_eax);
    /* 00612ab0: mov cl, byte ptr [ebp - 0x13] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffedu))) & 0xffu);
    /* 00612ab3: mov byte ptr [ebp - 0x12], cl */ W8((u32)(r_ebp+0xffffffeeu), (u8)r_ecx);
    /* 00612ab6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00612ab9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00612abc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612abf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00612ac2: mov cl, byte ptr [ebp - 0x11] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffefu))) & 0xffu);
    /* 00612ac5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612ac6: mov dl, byte ptr [ebp - 0x12] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffeeu))) & 0xffu);
    /* 00612ac9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612aca: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00612acd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612ace: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00612ad1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612ad2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00612ad5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612ad6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612ad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612ada: call 0x612c70 */ r_esp -= 4; W32(r_esp, 0x612adfu); f_00612c70();
    /* 00612adf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612ae2: mov esp, ebp */ r_esp = r_ebp;
    /* 00612ae4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612ae5: ret  */ FN_RET(0x00612a70); r_esp += 4; return;
}

void f_00612af0(void) /* sub_612AF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612af0);
    /* 00612af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612af1: mov ebp, esp */ r_ebp = r_esp;
    /* 00612af3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612af6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612af8: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00612afb: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 00612afe: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 00612b01: mov dl, byte ptr [ebp - 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00612b04: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 00612b07: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00612b0a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00612b0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00612b10: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00612b13: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00612b16: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00612b19: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00612b1a: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00612b1f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00612b1f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00612b1f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00612b21: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612b24: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612b27: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00612b29: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00612b2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612b2e: mov byte ptr [ebp - 9], al */ W8((u32)(r_ebp+0xfffffff7u), (u8)r_eax);
    /* 00612b31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00612b33: mov byte ptr [ebp - 0xa], cl */ W8((u32)(r_ebp+0xfffffff6u), (u8)r_ecx);
    /* 00612b36: mov dl, byte ptr [ebp - 9] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff7u))) & 0xffu);
    /* 00612b39: mov byte ptr [ebp - 0x16], dl */ W8((u32)(r_ebp+0xffffffeau), (u8)r_edx);
    /* 00612b3c: mov al, byte ptr [ebp - 0xa] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff6u))) & 0xffu);
    /* 00612b3f: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 00612b42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612b45: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00612b48: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00612b4b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00612b4e:; BB(0x00612b4e);
    /* 00612b4e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00612b51: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612b54: je 0x612b76 */ if (fZ) goto L_00612b76;
L_00612b56:; BB(0x00612b56);
    /* 00612b56: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00612b59: sub ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00612b5c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00612b5f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00612b62: sub edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00612b65: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00612b68: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00612b6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612b6c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00612b6f: call 0x610650 */ r_esp -= 4; W32(r_esp, 0x612b74u); f_00610650();
    /* 00612b74: jmp 0x612b4e */ goto L_00612b4e;
L_00612b76:; BB(0x00612b76);
    /* 00612b76: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00612b79: mov esp, ebp */ r_esp = r_ebp;
    /* 00612b7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612b7c: ret  */ FN_RET(0x00612af0); r_esp += 4; return;
}

void f_00612b80(void) /* sub_612B80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612b80);
    /* 00612b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00612b83: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612b86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612b88: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00612b8b: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 00612b8e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 00612b91: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00612b94: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00612b97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612b9a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00612b9d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00612ba0: mov byte ptr [ebp - 0x2e], cl */ W8((u32)(r_ebp+0xffffffd2u), (u8)r_ecx);
    /* 00612ba3: mov dl, byte ptr [ebp - 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 00612ba6: mov byte ptr [ebp - 0x2d], dl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_edx);
    /* 00612ba9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00612bac: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00612baf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612bb2: sub eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00612bb5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00612bb6: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00612bbb: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00612bbb, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00612bbb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00612bbd: imul eax, eax, 0x48 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x48u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612bc0: add eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612bc3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00612bc6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00612bc8: mov byte ptr [ebp - 0x19], dl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_edx);
    /* 00612bcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612bcd: mov byte ptr [ebp - 0x1a], al */ W8((u32)(r_ebp+0xffffffe6u), (u8)r_eax);
    /* 00612bd0: mov cl, byte ptr [ebp - 0x19] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 00612bd3: mov byte ptr [ebp - 0x26], cl */ W8((u32)(r_ebp+0xffffffdau), (u8)r_ecx);
    /* 00612bd6: mov dl, byte ptr [ebp - 0x1a] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe6u))) & 0xffu);
    /* 00612bd9: mov byte ptr [ebp - 0x25], dl */ W8((u32)(r_ebp+0xffffffdbu), (u8)r_edx);
    /* 00612bdc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00612bdf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00612be2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00612be5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00612be8: jmp 0x612bfc */ goto L_00612bfc;
L_00612bea:; BB(0x00612bea);
    /* 00612bea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612bed: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00612bf0: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00612bf3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612bf6: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612bf9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00612bfc:; BB(0x00612bfc);
    /* 00612bfc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612bff: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612c02: je 0x612c12 */ if (fZ) goto L_00612c12;
L_00612c04:; BB(0x00612c04);
    /* 00612c04: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612c07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612c08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612c0b: call 0x610650 */ r_esp -= 4; W32(r_esp, 0x612c10u); f_00610650();
    /* 00612c10: jmp 0x612bea */ goto L_00612bea;
L_00612c12:; BB(0x00612c12);
    /* 00612c12: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00612c15: mov esp, ebp */ r_esp = r_ebp;
    /* 00612c17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612c18: ret  */ FN_RET(0x00612b80); r_esp += 4; return;
}

void f_00612c20(void) /* sub_612C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612c20);
    /* 00612c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00612c23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612c26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612c28: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00612c2b: mov cl, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffdu))) & 0xffu);
    /* 00612c2e: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 00612c31: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00612c34: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00612c37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612c3a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00612c3d: mov cl, byte ptr [ebp - 1] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00612c40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612c41: mov dl, byte ptr [ebp - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 00612c44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612c45: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00612c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612c49: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00612c4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612c4d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00612c50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612c51: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00612c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612c55: call 0x612c70 */ r_esp -= 4; W32(r_esp, 0x612c5au); f_00612c70();
    /* 00612c5a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612c5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00612c5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612c60: ret  */ FN_RET(0x00612c20); r_esp += 4; return;
}

void f_00612c70(void) /* sub_612C70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612c70);
    /* 00612c70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612c71: mov ebp, esp */ r_ebp = r_esp;
    /* 00612c73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00612c75: push 0x6ab021 */ { u32 v = 0x6ab021u; r_esp -= 4; W32(r_esp, v); }
    /* 00612c7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00612c80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612c81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612c82: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612c85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00612c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00612c87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00612c88: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00612c8d: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00612c8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612c90: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00612c93: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00612c99: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00612c9c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00612c9f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00612ca2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00612ca9: jmp 0x612cbd */ goto L_00612cbd;
L_00612cab:; BB(0x00612cab);
    /* 00612cab: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00612cae: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00612cb1: mov dword ptr [ebp + 0x10], ecx */ W32((u32)(r_ebp+0x10u), r_ecx);
    /* 00612cb4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00612cb7: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00612cba: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_00612cbd:; BB(0x00612cbd);
    /* 00612cbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612cc0: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612cc3: je 0x612d05 */ if (fZ) goto L_00612d05;
L_00612cc5:; BB(0x00612cc5);
    /* 00612cc5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00612cc8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00612ccb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00612cce: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00612cd1: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00612cd5: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612cd9: je 0x612cf2 */ if (fZ) goto L_00612cf2;
L_00612cdb:; BB(0x00612cdb);
    /* 00612cdb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612cde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612cdf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612ce2: call 0x610570 */ r_esp -= 4; W32(r_esp, 0x612ce7u); f_00610570();
    /* 00612ce7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00612cea: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612ced: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00612cf0: jmp 0x612cf9 */ goto L_00612cf9;
L_00612cf2:; BB(0x00612cf2);
    /* 00612cf2: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00612cf9:; BB(0x00612cf9);
    /* 00612cf9: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00612cfc: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00612cff: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00612d03: jmp 0x612cab */ goto L_00612cab;
L_00612d05:; BB(0x00612d05);
    /* 00612d05: jmp 0x612d56 */ goto L_00612d56;
L_00612d56:; BB(0x00612d56);
    /* 00612d56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00612d5d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00612d60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612d63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00612d6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00612d6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00612d6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00612d6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00612d6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00612d70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612d71: ret  */ FN_RET(0x00612c70); r_esp += 4; return;
}

void f_00612d80(void) /* sub_612D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612d80);
    /* 00612d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00612d83: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612d86: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 00612d89: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612d8c: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 00612d93: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612d96: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00612d9d: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612da0: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00612da7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612dab: jne 0x612db3 */ if (!fZ) goto L_00612db3;
L_00612dad:; BB(0x00612dad);
    /* 00612dad: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00612daf: jmp 0x612e12 */ goto L_00612e12;
L_00612db3:; BB(0x00612db3);
    /* 00612db3: mov dword ptr [ebp - 4], 0x38e38e3 */ W32((u32)(r_ebp+0xfffffffcu), 0x38e38e3u);
    /* 00612dba: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00612dbe: jbe 0x612dc8 */ if ((fC||fZ)) goto L_00612dc8;
L_00612dc0:; BB(0x00612dc0);
    /* 00612dc0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00612dc3: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00612dc6: jmp 0x612dcf */ goto L_00612dcf;
L_00612dc8:; BB(0x00612dc8);
    /* 00612dc8: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
L_00612dcf:; BB(0x00612dcf);
    /* 00612dcf: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00612dd2: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00612dd5: jae 0x612dde */ if (!fC) goto L_00612dde;
L_00612dd7:; BB(0x00612dd7);
    /* 00612dd7: call 0x6126e0 */ r_esp -= 4; W32(r_esp, 0x612ddcu); f_006126e0();
    /* 00612ddc: jmp 0x612e10 */ goto L_00612e10;
L_00612dde:; BB(0x00612dde);
    /* 00612dde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00612de0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00612de3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612de4: call 0x68fa30 */ r_esp -= 4; W32(r_esp, 0x612de9u); f_0068fa30();
    /* 00612de9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612dec: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612def: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00612df2: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612df5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612df8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00612dfb: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00612dfe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00612e01: imul edx, edx, 0x48 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x48u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612e04: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612e07: add edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00612e0a: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00612e0d: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_00612e10:; BB(0x00612e10);
    /* 00612e10: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00612e12:; BB(0x00612e12);
    /* 00612e12: mov esp, ebp */ r_esp = r_ebp;
    /* 00612e14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612e15: ret 4 */ FN_RET(0x00612d80); r_esp += 8; return;
}

void f_00612e20(void) /* sub_612E20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612e20);
    /* 00612e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00612e23: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612e26: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00612e29: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612e2c: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612e30: je 0x612ecb */ if (fZ) goto L_00612ecb;
L_00612e36:; BB(0x00612e36);
    /* 00612e36: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612e39: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00612e3c: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00612e3f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612e42: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00612e45: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00612e48: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00612e4b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00612e4e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00612e51: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00612e54: mov cl, byte ptr [ebp - 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffeu))) & 0xffu);
    /* 00612e57: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00612e5a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00612e5d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00612e60: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00612e63: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00612e66: jmp 0x612e71 */ goto L_00612e71;
L_00612e68:; BB(0x00612e68);
    /* 00612e68: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612e6b: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00612e6e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_00612e71:; BB(0x00612e71);
    /* 00612e71: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612e74: cmp edx, dword ptr [ebp - 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612e77: je 0x612e9f */ if (fZ) goto L_00612e9f;
L_00612e79:; BB(0x00612e79);
    /* 00612e79: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612e7c: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00612e7f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00612e82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00612e85: call 0x5be450 */ r_esp -= 4; W32(r_esp, 0x612e8au); f_005be450();
    /* 00612e8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00612e8c: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00612e8f: je 0x612e9d */ if (fZ) goto L_00612e9d;
L_00612e91:; BB(0x00612e91);
    /* 00612e91: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00612e94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00612e95: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x612e9au); f_00686cae();
    /* 00612e9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00612e9d:; BB(0x00612e9d);
    /* 00612e9d: jmp 0x612e68 */ goto L_00612e68;
L_00612e9f:; BB(0x00612e9f);
    /* 00612e9f: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612ea2: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612ea5: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00612ea8: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00612eab: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00612eac: mov ecx, 0x48 */ r_ecx = 0x48u;
    /* 00612eb1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00612eb1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00612eb1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00612eb3: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00612eb6: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612eb9: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00612ebc: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00612ebf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00612ec2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612ec3: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x612ec8u); f_00686cae();
    /* 00612ec8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00612ecb:; BB(0x00612ecb);
    /* 00612ecb: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612ece: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00612ed5: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612ed8: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 00612edf: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00612ee2: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00612ee9: mov esp, ebp */ r_esp = r_ebp;
    /* 00612eeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612eec: ret  */ FN_RET(0x00612e20); r_esp += 4; return;
}

void f_00612ef0(void) /* sub_612EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612ef0);
    /* 00612ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00612ef3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00612ef6: cmp dword ptr [ebp + 8], 0x1c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612efa: je 0x612f0d */ if (fZ) goto L_00612f0d;
L_00612efc:; BB(0x00612efc);
    /* 00612efc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612eff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612f00: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x612f05u); f_00686d82();
    /* 00612f05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612f08: jmp 0x612f91 */ goto L_00612f91;
L_00612f0d:; BB(0x00612f0d);
    /* 00612f0d: mov ecx, dword ptr [0x15e5600] */ r_ecx = R32((u32)(0x15e5600u));
    /* 00612f13: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00612f16: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612f1a: je 0x612f2c */ if (fZ) goto L_00612f2c;
L_00612f1c:; BB(0x00612f1c);
    /* 00612f1c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00612f1f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00612f22: mov dword ptr [0x15e5600], eax */ W32((u32)(0x15e5600u), r_eax);
    /* 00612f27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00612f2a: jmp 0x612f91 */ goto L_00612f91;
L_00612f2c:; BB(0x00612f2c);
    /* 00612f2c: push 0x380 */ { u32 v = 0x380u; r_esp -= 4; W32(r_esp, v); }
    /* 00612f31: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x612f36u); f_00686d82();
    /* 00612f36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612f39: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00612f3c: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00612f43: jmp 0x612f4e */ goto L_00612f4e;
L_00612f45:; BB(0x00612f45);
    /* 00612f45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612f48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00612f4b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00612f4e:; BB(0x00612f4e);
    /* 00612f4e: cmp dword ptr [ebp - 0xc], 0x1f */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00612f52: jge 0x612f6f */ if ((fS==fO)) goto L_00612f6f;
L_00612f54:; BB(0x00612f54);
    /* 00612f54: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612f57: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00612f5a: imul edx, edx, 0x1c */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1cu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612f5d: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00612f60: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00612f63: imul eax, eax, 0x1c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00612f66: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00612f69: mov dword ptr [ecx + eax + 0x18], edx */ W32((u32)(r_ecx+r_eax+0x18u), r_edx);
    /* 00612f6d: jmp 0x612f45 */ goto L_00612f45;
L_00612f6f:; BB(0x00612f6f);
    /* 00612f6f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00612f72: mov dword ptr [edx + 0x37c], 0 */ W32((u32)(r_edx+0x37cu), 0x0u);
    /* 00612f7c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00612f7f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00612f82: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00612f85: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00612f88: mov dword ptr [0x15e5600], ecx */ W32((u32)(0x15e5600u), r_ecx);
    /* 00612f8e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00612f91:; BB(0x00612f91);
    /* 00612f91: mov esp, ebp */ r_esp = r_ebp;
    /* 00612f93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612f94: ret  */ FN_RET(0x00612ef0); r_esp += 4; return;
}

void f_00612fa0(void) /* sub_612FA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00612fa0);
    /* 00612fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00612fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00612fa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00612fa4: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612fa8: jne 0x612fac */ if (!fZ) goto L_00612fac;
L_00612faa:; BB(0x00612faa);
    /* 00612faa: jmp 0x612fda */ goto L_00612fda;
L_00612fac:; BB(0x00612fac);
    /* 00612fac: cmp dword ptr [ebp + 0xc], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00612fb0: je 0x612fc0 */ if (fZ) goto L_00612fc0;
L_00612fb2:; BB(0x00612fb2);
    /* 00612fb2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00612fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00612fb6: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x612fbbu); f_00686cae();
    /* 00612fbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00612fbe: jmp 0x612fda */ goto L_00612fda;
L_00612fc0:; BB(0x00612fc0);
    /* 00612fc0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00612fc3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00612fc6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00612fc9: mov eax, dword ptr [0x15e5600] */ r_eax = R32((u32)(0x15e5600u));
    /* 00612fce: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00612fd1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00612fd4: mov dword ptr [0x15e5600], ecx */ W32((u32)(0x15e5600u), r_ecx);
L_00612fda:; BB(0x00612fda);
    /* 00612fda: mov esp, ebp */ r_esp = r_ebp;
    /* 00612fdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00612fdd: ret  */ FN_RET(0x00612fa0); r_esp += 4; return;
}


#include "protos.h"

void f_00627090(void) /* sciLine::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627090);
    /* 00627090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627091: mov ebp, esp */ r_ebp = r_esp;
    /* 00627093: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627094: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627097: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062709a: call 0x5f49d0 */ r_esp -= 4; W32(r_esp, 0x62709fu); f_005f49d0();
    /* 0062709f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270a2: mov dword ptr [eax], 0x6d91d4 */ W32((u32)(r_eax), 0x6d91d4u);
    /* 006270a8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006270aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006270ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270af: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006270b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006270b3: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x6270b8u); f_00686fa2();
    /* 006270b8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006270bb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270be: mov byte ptr [edx + 0x4b], 0xff */ W8((u32)(r_edx+0x4bu), 0xffu);
    /* 006270c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270c5: mov dword ptr [eax + 0x4c], 4 */ W32((u32)(r_eax+0x4cu), 0x4u);
    /* 006270cc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270cf: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 006270d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270d9: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
    /* 006270e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270e3: mov dword ptr [eax + 0x58], 0 */ W32((u32)(r_eax+0x58u), 0x0u);
    /* 006270ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270ed: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 006270f4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006270f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006270f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006270fa: ret  */ FN_RET(0x00627090); r_esp += 4; return;
}

void f_00627100(void) /* sciLine::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627100);
    /* 00627100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627101: mov ebp, esp */ r_ebp = r_esp;
    /* 00627103: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00627105: push 0x6ab4b8 */ { u32 v = 0x6ab4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062710a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00627110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627111: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627112: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00627117: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00627119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062711a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062711d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00627123: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00627126: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627129: mov dword ptr [eax], 0x6d91d4 */ W32((u32)(r_eax), 0x6d91d4u);
    /* 0062712f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00627136: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627139: call 0x627c00 */ r_esp -= 4; W32(r_esp, 0x62713eu); f_00627c00();
    /* 0062713e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00627145: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00627148: call 0x5f4ad0 */ r_esp -= 4; W32(r_esp, 0x62714du); f_005f4ad0();
    /* 0062714d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00627150: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00627157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627158: mov esp, ebp */ r_esp = r_ebp;
    /* 0062715a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062715b: ret  */ FN_RET(0x00627100); r_esp += 4; return;
}

void f_00627160(void) /* sciLine::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627160);
    /* 00627160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627161: mov ebp, esp */ r_ebp = r_esp;
    /* 00627163: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627164: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627167: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062716a: call 0x5f5010 */ r_esp -= 4; W32(r_esp, 0x62716fu); f_005f5010();
    /* 0062716f: mov esp, ebp */ r_esp = r_ebp;
    /* 00627171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627172: ret  */ FN_RET(0x00627160); r_esp += 4; return;
}

void f_00627180(void) /* sciLine::vfunc44 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627180);
    /* 00627180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627181: mov ebp, esp */ r_ebp = r_esp;
    /* 00627183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627187: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0062718a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062718b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0062718e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062718f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00627192: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627193: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062719a: call 0x627220 */ r_esp -= 4; W32(r_esp, 0x62719fu); f_00627220();
    /* 0062719f: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006271a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006271a3: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 006271a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006271a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006271aa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006271ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006271af: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 006271b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6271b4u); call_ind(t); }
    /* 006271b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006271b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006271b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006271ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006271bd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 006271c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6271c2u); call_ind(t); }
    /* 006271c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006271c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006271c6: call 0x5f50c0 */ r_esp -= 4; W32(r_esp, 0x6271cbu); f_005f50c0();
    /* 006271cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006271cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006271ce: ret 0x18 */ FN_RET(0x00627180); r_esp += 28; return;
}

void f_006276e0(void) /* sciLine::vfunc29 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006276e0);
    /* 006276e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006276e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006276e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006276e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006276e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006276ea: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 006276ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006276f0: je 0x627713 */ if (fZ) goto L_00627713;
L_006276f2:; BB(0x006276f2);
    /* 006276f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006276f5: call 0x5f5440 */ r_esp -= 4; W32(r_esp, 0x6276fau); f_005f5440();
    /* 006276fa: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006276fd: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627701: je 0x627713 */ if (fZ) goto L_00627713;
L_00627703:; BB(0x00627703);
    /* 00627703: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627706: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00627708: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062770b: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00627711: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x627713u); call_ind(t); }
L_00627713:; BB(0x00627713);
    /* 00627713: mov esp, ebp */ r_esp = r_ebp;
    /* 00627715: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627716: ret  */ FN_RET(0x006276e0); r_esp += 4; return;
}

void f_00627720(void) /* sciLine::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627720);
    /* 00627720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627721: mov ebp, esp */ r_ebp = r_esp;
    /* 00627723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00627724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062772a: movzx ecx, byte ptr [eax + 0x24] */ r_ecx = (u32)R8((u32)(r_eax+0x24u));
    /* 0062772e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627730: jne 0x627753 */ if (!fZ) goto L_00627753;
L_00627732:; BB(0x00627732);
    /* 00627732: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627735: call 0x5f5420 */ r_esp -= 4; W32(r_esp, 0x62773au); f_005f5420();
    /* 0062773a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062773d: cmp dword ptr [edx + 0x28], 0 */ {  u32 a = R32((u32)(r_edx+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627741: je 0x627753 */ if (fZ) goto L_00627753;
L_00627743:; BB(0x00627743);
    /* 00627743: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00627746: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00627748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062774b: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 00627751: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x627753u); call_ind(t); }
L_00627753:; BB(0x00627753);
    /* 00627753: mov esp, ebp */ r_esp = r_ebp;
    /* 00627755: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627756: ret  */ FN_RET(0x00627720); r_esp += 4; return;
}

void f_00627760(void) /* sciLine::vfunc39 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627760);
    /* 00627760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627761: mov ebp, esp */ r_ebp = r_esp;
    /* 00627763: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627766: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00627769: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062776c: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x627771u); f_005f54c0();
    /* 00627771: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00627774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627776: je 0x62777a */ if (fZ) goto L_0062777a;
L_00627778:; BB(0x00627778);
    /* 00627778: jmp 0x6277e5 */ goto L_006277e5;
L_0062777a:; BB(0x0062777a);
    /* 0062777a: lea ecx, [ebp - 0xc] */ r_ecx = (u32)(r_ebp+0xfffffff4u);
    /* 0062777d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062777e: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 00627781: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627782: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00627785: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00627786: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00627789: call 0x6277f0 */ r_esp -= 4; W32(r_esp, 0x62778eu); f_006277f0();
    /* 0062778e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00627791: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00627793: jne 0x627797 */ if (!fZ) goto L_00627797;
L_00627795:; BB(0x00627795);
    /* 00627795: jmp 0x6277e5 */ goto L_006277e5;
L_00627797:; BB(0x00627797);
    /* 00627797: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062779a: mov al, byte ptr [edx + 0x48] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x48u))) & 0xffu);
    /* 0062779d: mov byte ptr [ebp - 4], al */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_eax);
    /* 006277a0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006277a3: mov dl, byte ptr [ecx + 0x49] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x49u))) & 0xffu);
    /* 006277a6: mov byte ptr [ebp - 3], dl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_edx);
    /* 006277a9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006277ac: mov cl, byte ptr [eax + 0x4a] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4au))) & 0xffu);
    /* 006277af: mov byte ptr [ebp - 2], cl */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_ecx);
    /* 006277b2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006277b5: call 0x627660 */ r_esp -= 4; W32(r_esp, 0x6277bau); f_00627660();
    /* 006277ba: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 006277bd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006277c0: call 0x6276c0 */ r_esp -= 4; W32(r_esp, 0x6277c5u); f_006276c0();
    /* 006277c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006277c6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006277c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006277ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006277cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006277ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006277d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006277d2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006277d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006277d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006277d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006277da: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006277dd: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 006277e0: call 0x5f9440 */ r_esp -= 4; W32(r_esp, 0x6277e5u); f_005f9440();
L_006277e5:; BB(0x006277e5);
    /* 006277e5: mov esp, ebp */ r_esp = r_ebp;
    /* 006277e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006277e8: ret 4 */ FN_RET(0x00627760); r_esp += 8; return;
}

void f_00627c00(void) /* sciLine::vfunc43 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00627c00);
    /* 00627c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00627c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00627c03: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00627c06: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00627c09: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c0c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c0f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00627c12: sub edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00627c15: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c18: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00627c1b: lea edx, [ecx + edx + 1] */ r_edx = (u32)(r_ecx+r_edx+0x1u);
    /* 00627c1f: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00627c22: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c25: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c28: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00627c2b: sub edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00627c2e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c31: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00627c34: lea edx, [ecx + edx + 1] */ r_edx = (u32)(r_ecx+r_edx+0x1u);
    /* 00627c38: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00627c3b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c3e: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00627c41: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00627c44: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c47: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00627c4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00627c4d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00627c50: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00627c53: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00627c56: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00627c59: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00627c5c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00627c5f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00627c62: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00627c65: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 00627c68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00627c69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627c6c: call 0x5f5940 */ r_esp -= 4; W32(r_esp, 0x627c71u); f_005f5940();
    /* 00627c71: mov esp, ebp */ r_esp = r_ebp;
    /* 00627c73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00627c74: ret  */ FN_RET(0x00627c00); r_esp += 4; return;
}


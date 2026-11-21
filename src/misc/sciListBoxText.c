#include "protos.h"

void f_00629730(void) /* sciListBoxText::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629730);
    /* 00629730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629731: mov ebp, esp */ r_ebp = r_esp;
    /* 00629733: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629734: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629737: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062973a: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x62973fu); f_005ec5a0();
    /* 0062973f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629742: mov dword ptr [eax], 0x6d944c */ W32((u32)(r_eax), 0x6d944cu);
    /* 00629748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062974b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0062974e: mov dword ptr [ecx + 0x1d0], edx */ W32((u32)(r_ecx+0x1d0u), r_edx);
    /* 00629754: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629757: mov dword ptr [eax + 0x1d4], 0 */ W32((u32)(r_eax+0x1d4u), 0x0u);
    /* 00629761: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629764: mov esp, ebp */ r_esp = r_ebp;
    /* 00629766: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629767: ret 4 */ FN_RET(0x00629730); r_esp += 8; return;
}

void f_00629770(void) /* sciListBoxText::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629770);
    /* 00629770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629771: mov ebp, esp */ r_ebp = r_esp;
    /* 00629773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629775: push 0x6ab5be */ { u32 v = 0x6ab5beu; r_esp -= 4; W32(r_esp, v); }
    /* 0062977a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629781: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629784: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00629789: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062978b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062978c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062978f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00629795: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00629798: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062979b: mov dword ptr [eax], 0x6d944c */ W32((u32)(r_eax), 0x6d944cu);
    /* 006297a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006297a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006297ab: cmp dword ptr [ecx + 0x1d4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297b2: je 0x6297e6 */ if (fZ) goto L_006297e6;
L_006297b4:; BB(0x006297b4);
    /* 006297b4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006297b7: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 006297bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006297c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006297c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006297c6: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297ca: je 0x6297df */ if (fZ) goto L_006297df;
L_006297cc:; BB(0x006297cc);
    /* 006297cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006297ce: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006297d1: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006297d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006297d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006297d8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6297dau); call_ind(t); }
    /* 006297da: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006297dd: jmp 0x6297e6 */ goto L_006297e6;
L_006297df:; BB(0x006297df);
    /* 006297df: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006297e6:; BB(0x006297e6);
    /* 006297e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006297ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006297f0: call 0x5ec760 */ r_esp -= 4; W32(r_esp, 0x6297f5u); f_005ec760();
    /* 006297f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006297f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006297ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629800: mov esp, ebp */ r_esp = r_ebp;
    /* 00629802: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629803: ret  */ FN_RET(0x00629770); r_esp += 4; return;
}

void f_00629810(void) /* sciListBoxText::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629810);
    /* 00629810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629811: mov ebp, esp */ r_ebp = r_esp;
    /* 00629813: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629814: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629817: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062981a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062981b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062981e: call 0x5f4ed0 */ r_esp -= 4; W32(r_esp, 0x629823u); f_005f4ed0();
    /* 00629823: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00629826: mov byte ptr [ecx + 4], 1 */ W8((u32)(r_ecx+0x4u), 0x1u);
    /* 0062982a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062982d: mov ecx, dword ptr [edx + 0x1d0] */ r_ecx = R32((u32)(r_edx+0x1d0u));
    /* 00629833: call 0x615140 */ r_esp -= 4; W32(r_esp, 0x629838u); f_00615140();
    /* 00629838: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062983b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062983d: je 0x62988a */ if (fZ) goto L_0062988a;
L_0062983f:; BB(0x0062983f);
    /* 0062983f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629842: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629843: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629846: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0062984c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062984f: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 00629855: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629857: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 0062985d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62985fu); call_ind(t); }
    /* 0062985f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00629862: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00629865: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00629868: je 0x62988a */ if (fZ) goto L_0062988a;
L_0062986a:; BB(0x0062986a);
    /* 0062986a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062986d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062986e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00629871: mov edx, dword ptr [ecx + 0x1d0] */ r_edx = R32((u32)(r_ecx+0x1d0u));
    /* 00629877: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062987a: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 00629880: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00629882: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00629888: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62988au); call_ind(t); }
L_0062988a:; BB(0x0062988a);
    /* 0062988a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062988c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062988d: ret 4 */ FN_RET(0x00629810); r_esp += 8; return;
}

void f_00629890(void) /* sciListBoxText::vfunc28 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00629890);
    /* 00629890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629891: mov ebp, esp */ r_ebp = r_esp;
    /* 00629893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00629897: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0062989a: cmp dword ptr [eax + 0x1d4], 0 */ {  u32 a = R32((u32)(r_eax+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006298a1: je 0x6298bc */ if (fZ) goto L_006298bc;
L_006298a3:; BB(0x006298a3);
    /* 006298a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006298a6: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 006298ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006298af: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 006298b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006298b7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006298ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6298bcu); call_ind(t); }
L_006298bc:; BB(0x006298bc);
    /* 006298bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006298bf: call 0x5f62b0 */ r_esp -= 4; W32(r_esp, 0x6298c4u); f_005f62b0();
    /* 006298c4: mov esp, ebp */ r_esp = r_ebp;
    /* 006298c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006298c7: ret  */ FN_RET(0x00629890); r_esp += 4; return;
}

void f_006298d0(void) /* sciListBoxText::vfunc49 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006298d0);
    /* 006298d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006298d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006298d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006298d5: push 0x6ab5e4 */ { u32 v = 0x6ab5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006298da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006298e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006298e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006298e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006298e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006298eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006298ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006298ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006298f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 006298f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006298fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006298fc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006298ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00629901: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629904: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0062990a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x62990cu); call_ind(t); }
    /* 0062990c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062990d: mov ecx, esp */ r_ecx = r_esp;
    /* 0062990f: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00629916: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00629919: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0062991e: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00629921: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629923: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00629926: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629927: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062992a: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x62992fu); f_005ecd00();
    /* 0062992f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629930: mov edx, esp */ r_edx = r_esp;
    /* 00629932: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00629936: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 00629939: mov cl, byte ptr [ebp + 0x12] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x12u))) & 0xffu);
    /* 0062993c: mov byte ptr [edx + 2], cl */ W8((u32)(r_edx+0x2u), (u8)r_ecx);
    /* 0062993f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629942: call 0x5ee920 */ r_esp -= 4; W32(r_esp, 0x629947u); f_005ee920();
    /* 00629947: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0062994a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062994b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062994e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629950: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629953: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00629956: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629958u); call_ind(t); }
    /* 00629958: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062995b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062995d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629960: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00629963: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629965u); call_ind(t); }
    /* 00629965: movzx ecx, byte ptr [ebp + 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0x18u));
    /* 00629969: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062996b: je 0x629a77 */ if (fZ) goto L_00629a77;
L_00629971:; BB(0x00629971);
    /* 00629971: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629974: mov ecx, dword ptr [edx + 0x1d0] */ r_ecx = R32((u32)(r_edx+0x1d0u));
    /* 0062997a: call 0x629280 */ r_esp -= 4; W32(r_esp, 0x62997fu); f_00629280();
    /* 0062997f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00629981: jle 0x629a77 */ if ((fZ||fS!=fO)) goto L_00629a77;
L_00629987:; BB(0x00629987);
    /* 00629987: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062998a: cmp dword ptr [eax + 0x1d4], 0 */ {  u32 a = R32((u32)(r_eax+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629991: jne 0x6299ef */ if (!fZ) goto L_006299ef;
L_00629993:; BB(0x00629993);
    /* 00629993: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00629998: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62999du); f_00686d82();
    /* 0062999d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006299a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006299a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006299aa: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006299ae: je 0x6299bd */ if (fZ) goto L_006299bd;
L_006299b0:; BB(0x006299b0);
    /* 006299b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006299b3: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x6299b8u); f_005f5bf0();
    /* 006299b8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006299bb: jmp 0x6299c4 */ goto L_006299c4;
L_006299bd:; BB(0x006299bd);
    /* 006299bd: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_006299c4:; BB(0x006299c4);
    /* 006299c4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006299c7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006299ca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006299d1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006299d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006299d7: mov dword ptr [edx + 0x1d4], eax */ W32((u32)(r_edx+0x1d4u), r_eax);
    /* 006299dd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006299e0: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 006299e6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006299e9: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006299ec: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_006299ef:; BB(0x006299ef);
    /* 006299ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006299f1: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006299f4: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006299f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006299f8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006299fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006299fd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a00: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00629a03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629a05u); call_ind(t); }
    /* 00629a05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629a06: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a09: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00629a0b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a0e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00629a11: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629a13u); call_ind(t); }
    /* 00629a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629a14: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a17: mov ecx, dword ptr [ecx + 0x1d0] */ r_ecx = R32((u32)(r_ecx+0x1d0u));
    /* 00629a1d: call 0x629280 */ r_esp -= 4; W32(r_esp, 0x629a22u); f_00629280();
    /* 00629a22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629a23: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a26: mov ecx, dword ptr [edx + 0x1d4] */ r_ecx = R32((u32)(r_edx+0x1d4u));
    /* 00629a2c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x629a31u); f_005eae80();
    /* 00629a31: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a34: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 00629a3a: call 0x6292a0 */ r_esp -= 4; W32(r_esp, 0x629a3fu); f_006292a0();
    /* 00629a3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629a40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a43: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 00629a49: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a4c: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 00629a52: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00629a54: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00629a5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629a5cu); call_ind(t); }
    /* 00629a5c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a5f: mov edx, dword ptr [ecx + 0x1d4] */ r_edx = R32((u32)(r_ecx+0x1d4u));
    /* 00629a65: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a68: mov ecx, dword ptr [eax + 0x1d4] */ r_ecx = R32((u32)(r_eax+0x1d4u));
    /* 00629a6e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00629a70: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00629a73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629a75u); call_ind(t); }
    /* 00629a75: jmp 0x629a9c */ goto L_00629a9c;
L_00629a77:; BB(0x00629a77);
    /* 00629a77: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a7a: cmp dword ptr [ecx + 0x1d4], 0 */ {  u32 a = R32((u32)(r_ecx+0x1d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629a81: je 0x629a9c */ if (fZ) goto L_00629a9c;
L_00629a83:; BB(0x00629a83);
    /* 00629a83: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a86: mov eax, dword ptr [edx + 0x1d4] */ r_eax = R32((u32)(r_edx+0x1d4u));
    /* 00629a8c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629a8f: mov ecx, dword ptr [ecx + 0x1d4] */ r_ecx = R32((u32)(r_ecx+0x1d4u));
    /* 00629a95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629a97: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00629a9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x629a9cu); call_ind(t); }
L_00629a9c:; BB(0x00629a9c);
    /* 00629a9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629a9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629aa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629aa7: mov esp, ebp */ r_esp = r_ebp;
    /* 00629aa9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629aaa: ret 0x14 */ FN_RET(0x006298d0); r_esp += 24; return;
}


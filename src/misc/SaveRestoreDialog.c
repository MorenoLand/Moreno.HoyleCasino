#include "protos.h"

void f_00672fe0(void) /* SaveRestoreDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00672fe0);
    /* 00672fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00672fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00672fe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00672fe5: push 0x6ad2c8 */ { u32 v = 0x6ad2c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00672fea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00672ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672ff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00672ff2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00672ff7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00672ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00672ffa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00672ffd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00673003: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00673006: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673008: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067300a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067300d: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x673012u); f_005f71f0();
    /* 00673012: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00673019: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067301c: mov dword ptr [eax], 0x6e137c */ W32((u32)(r_eax), 0x6e137cu);
    /* 00673022: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00673024: push 0x30d4f5 */ { u32 v = 0x30d4f5u; r_esp -= 4; W32(r_esp, v); }
    /* 00673029: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067302c: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x673031u); f_005f83d0();
    /* 00673031: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673034: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 0067303e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673041: mov dword ptr [edx + 0x1c0], 0 */ W32((u32)(r_edx+0x1c0u), 0x0u);
    /* 0067304b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673052: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00673055: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00673058: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067305f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673060: mov esp, ebp */ r_esp = r_ebp;
    /* 00673062: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673063: ret  */ FN_RET(0x00672fe0); r_esp += 4; return;
}

void f_00673070(void) /* SaveRestoreDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673070);
    /* 00673070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673071: mov ebp, esp */ r_ebp = r_esp;
    /* 00673073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00673075: push 0x6ad2eb */ { u32 v = 0x6ad2ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0067307a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00673080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00673081: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673084: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00673089: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067308b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067308c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067308f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00673095: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00673098: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067309b: mov dword ptr [eax], 0x6e137c */ W32((u32)(r_eax), 0x6e137cu);
    /* 006730a1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006730a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006730ab: mov edx, dword ptr [ecx + 0x1bc] */ r_edx = R32((u32)(r_ecx+0x1bcu));
    /* 006730b1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006730b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006730b7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006730ba: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006730be: je 0x6730d3 */ if (fZ) goto L_006730d3;
L_006730c0:; BB(0x006730c0);
    /* 006730c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006730c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006730c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006730c7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006730ca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006730cc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6730ceu); call_ind(t); }
    /* 006730ce: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006730d1: jmp 0x6730da */ goto L_006730da;
L_006730d3:; BB(0x006730d3);
    /* 006730d3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006730da:; BB(0x006730da);
    /* 006730da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006730dd: mov edx, dword ptr [ecx + 0x1c0] */ r_edx = R32((u32)(r_ecx+0x1c0u));
    /* 006730e3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006730e6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006730e9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006730ec: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006730f0: je 0x673105 */ if (fZ) goto L_00673105;
L_006730f2:; BB(0x006730f2);
    /* 006730f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006730f4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006730f7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006730f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006730fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006730fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x673100u); call_ind(t); }
    /* 00673100: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00673103: jmp 0x67310c */ goto L_0067310c;
L_00673105:; BB(0x00673105);
    /* 00673105: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0067310c:; BB(0x0067310c);
    /* 0067310c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00673113: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00673116: call 0x5f7260 */ r_esp -= 4; W32(r_esp, 0x67311bu); f_005f7260();
    /* 0067311b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067311e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00673125: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00673126: mov esp, ebp */ r_esp = r_ebp;
    /* 00673128: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00673129: ret  */ FN_RET(0x00673070); r_esp += 4; return;
}

void f_00673980(void) /* SaveRestoreDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00673980);
    /* 00673980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00673981: mov ebp, esp */ r_ebp = r_esp;
    /* 00673983: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00673986: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00673989: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067398c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0067398f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673993: je 0x6739a3 */ if (fZ) goto L_006739a3;
L_00673995:; BB(0x00673995);
    /* 00673995: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00673999: je 0x6739ad */ if (fZ) goto L_006739ad;
L_0067399b:; BB(0x0067399b);
    /* 0067399b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067399f: je 0x6739b7 */ if (fZ) goto L_006739b7;
L_006739a1:; BB(0x006739a1);
    /* 006739a1: jmp 0x6739bf */ goto L_006739bf;
L_006739a3:; BB(0x006739a3);
    /* 006739a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006739a6: call 0x6739d0 */ r_esp -= 4; W32(r_esp, 0x6739abu); f_006739d0();
    /* 006739ab: jmp 0x6739bf */ goto L_006739bf;
L_006739ad:; BB(0x006739ad);
    /* 006739ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006739b0: call 0x673a50 */ r_esp -= 4; W32(r_esp, 0x6739b5u); f_00673a50();
    /* 006739b5: jmp 0x6739bf */ goto L_006739bf;
L_006739b7:; BB(0x006739b7);
    /* 006739b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006739ba: call 0x673a70 */ r_esp -= 4; W32(r_esp, 0x6739bfu); f_00673a70();
L_006739bf:; BB(0x006739bf);
    /* 006739bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006739c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006739c2: ret 4 */ FN_RET(0x00673980); r_esp += 8; return;
}


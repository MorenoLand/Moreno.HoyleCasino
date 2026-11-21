#include "protos.h"

void f_005d67d0(void) /* CasinoShowNetPlaqueCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d67d0);
    /* 005d67d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d67d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d67d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d67d5: push 0x6a9091 */ { u32 v = 0x6a9091u; r_esp -= 4; W32(r_esp, v); }
    /* 005d67da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d67e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d67e1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d67e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d67e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d67eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d67ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d67ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d67f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d67f8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005d67ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6802: cmp dword ptr [eax + 0x49c], 0 */ {  u32 a = R32((u32)(r_eax+0x49cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6809: je 0x5d6820 */ if (fZ) goto L_005d6820;
L_005d680b:; BB(0x005d680b);
    /* 005d680b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d680e: mov ecx, dword ptr [ecx + 0x49c] */ r_ecx = R32((u32)(r_ecx+0x49cu));
    /* 005d6814: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x5d6819u); f_005f54c0();
    /* 005d6819: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d681c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d681e: jne 0x5d6860 */ if (!fZ) goto L_005d6860;
L_005d6820:; BB(0x005d6820);
    /* 005d6820: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6823: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d6828u); f_0063aac0();
    /* 005d6828: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d682b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d682e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6831: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d6834: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6835: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d6838: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6839: push 0x6d3db4 */ { u32 v = 0x6d3db4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d683e: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5d6843u); f_0062fde0();
    /* 005d6843: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6846: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d684a: je 0x5d685b */ if (fZ) goto L_005d685b;
L_005d684c:; BB(0x005d684c);
    /* 005d684c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d684e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d6851: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d6853: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6856: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005d6859: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d685bu); call_ind(t); }
L_005d685b:; BB(0x005d685b);
    /* 005d685b: jmp 0x5d6969 */ goto L_005d6969;
L_005d6860:; BB(0x005d6860);
    /* 005d6860: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6863: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d6868u); f_0063aac0();
    /* 005d6868: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d686b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d686e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6871: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d6874: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6875: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d6878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d6879: push 0x6d3d8c */ { u32 v = 0x6d3d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d687e: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x5d6883u); f_0062fde0();
    /* 005d6883: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d6886: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6889: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005d688c: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d6890: je 0x5d68a8 */ if (fZ) goto L_005d68a8;
L_005d6892:; BB(0x005d6892);
    /* 005d6892: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6895: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005d6898: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005d689b: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5d68a0u); f_005f53c0();
    /* 005d68a0: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d68a3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d68a6: jmp 0x5d68c0 */ goto L_005d68c0;
L_005d68a8:; BB(0x005d68a8);
    /* 005d68a8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d68ab: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005d68ae: call 0x646f80 */ r_esp -= 4; W32(r_esp, 0x5d68b3u); f_00646f80();
    /* 005d68b3: mov ecx, eax */ r_ecx = r_eax;
    /* 005d68b5: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x5d68bau); f_005f53c0();
    /* 005d68ba: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d68bd: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_005d68c0:; BB(0x005d68c0);
    /* 005d68c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d68c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d68c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d68c7: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 005d68cd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d68d0: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005d68d6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d68d8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 005d68db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d68ddu); call_ind(t); }
    /* 005d68dd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005d68e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d68e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d68e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d68e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d68e8: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005d68ee: call 0x5d7680 */ r_esp -= 4; W32(r_esp, 0x5d68f3u); f_005d7680();
    /* 005d68f3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d68f5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d68fau); f_00686d82();
    /* 005d68fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d68fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d6900: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d6907: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d690b: je 0x5d692a */ if (fZ) goto L_005d692a;
L_005d690d:; BB(0x005d690d);
    /* 005d690d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d6910: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6911: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6914: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5d6919u); f_006010a0();
    /* 005d6919: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d691c: mov dword ptr [edx], 0x6d3d74 */ W32((u32)(r_edx), 0x6d3d74u);
    /* 005d6922: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d6925: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d6928: jmp 0x5d6931 */ goto L_005d6931;
L_005d692a:; BB(0x005d692a);
    /* 005d692a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005d6931:; BB(0x005d6931);
    /* 005d6931: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d6934: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d6937: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d693e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d6941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d6942: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6945: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005d694b: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d6950u); f_005f5d50();
    /* 005d6950: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d6953: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 005d6959: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d695c: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005d6962: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d6964: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d6967: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d6969u); call_ind(t); }
L_005d6969:; BB(0x005d6969);
    /* 005d6969: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d696c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d6973: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d6974: mov esp, ebp */ r_esp = r_ebp;
    /* 005d6976: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d6977: ret 0xc */ FN_RET(0x005d67d0); r_esp += 16; return;
}

void f_005d79c0(void) /* CasinoShowNetPlaqueCycle::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d79c0);
    /* 005d79c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d79c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d79c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d79c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d79c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d79ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d79cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d79cf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d79d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d79d4u); call_ind(t); }
    /* 005d79d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d79d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d79d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d79db: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d79de: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005d79e4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d79e6u); call_ind(t); }
    /* 005d79e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d79e8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d79eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d79ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d79ef: call 0x6010d0 */ r_esp -= 4; W32(r_esp, 0x5d79f4u); f_006010d0();
    /* 005d79f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005d79f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d79f7: ret 8 */ FN_RET(0x005d79c0); r_esp += 12; return;
}

void f_005d7a00(void) /* CasinoShowNetPlaqueCycle::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d7a00);
    /* 005d7a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d7a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d7a07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a0a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d7a0d: mov edx, dword ptr [ecx + 0x184] */ r_edx = R32((u32)(r_ecx+0x184u));
    /* 005d7a13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a16: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d7a19: mov ecx, dword ptr [ecx + 0x184] */ r_ecx = R32((u32)(r_ecx+0x184u));
    /* 005d7a1f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d7a21: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d7a24: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7a26u); call_ind(t); }
    /* 005d7a26: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a29: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d7a2c: mov eax, dword ptr [edx + 0x188] */ r_eax = R32((u32)(r_edx+0x188u));
    /* 005d7a32: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a35: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005d7a38: mov ecx, dword ptr [edx + 0x188] */ r_ecx = R32((u32)(r_edx+0x188u));
    /* 005d7a3e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d7a40: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005d7a43: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d7a45u); call_ind(t); }
    /* 005d7a45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d7a47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a4a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005d7a4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a50: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005d7a53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d7a55: mov ecx, eax */ r_ecx = r_eax;
    /* 005d7a57: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005d7a5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d7a5fu); call_ind(t); }
    /* 005d7a5f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d7a62: call 0x6005d0 */ r_esp -= 4; W32(r_esp, 0x5d7a67u); f_006005d0();
    /* 005d7a67: mov esp, ebp */ r_esp = r_ebp;
    /* 005d7a69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d7a6a: ret  */ FN_RET(0x005d7a00); r_esp += 4; return;
}


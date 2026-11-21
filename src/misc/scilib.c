#include "protos.h"

void f_006102a0(void) /* scilib::func_006102a0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006102a0);
    /* 006102a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006102a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006102a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006102a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_006102ab:; BB(0x006102ab);
    /* 006102ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006102ae: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006102b1: cmp dword ptr [eax + 0x76fed8], -1 */ {  u32 a = R32((u32)(r_eax+0x76fed8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006102b8: je 0x6102ff */ if (fZ) goto L_006102ff;
L_006102ba:; BB(0x006102ba);
    /* 006102ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006102bd: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006102c0: mov edx, dword ptr [ecx + 0x76fed8] */ r_edx = R32((u32)(r_ecx+0x76fed8u));
    /* 006102c6: cmp edx, dword ptr [ebp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006102c9: jne 0x6102f4 */ if (!fZ) goto L_006102f4;
L_006102cb:; BB(0x006102cb);
    /* 006102cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006102ce: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006102d1: add eax, 0x76fed8 */ {  u32 a = r_eax; u32 b = 0x76fed8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006102d6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006102d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006102db: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006102dd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006102e0: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006102e3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006102e6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006102e9: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 006102ec: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006102ef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006102f2: jmp 0x61033f */ goto L_0061033f;
L_006102f4:; BB(0x006102f4);
    /* 006102f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006102f7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006102fa: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006102fd: jmp 0x6102ab */ goto L_006102ab;
L_006102ff:; BB(0x006102ff);
    /* 006102ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00610301: jne 0x610317 */ if (!fZ) goto L_00610317;
L_00610303:; BB(0x00610303);
    /* 00610303: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00610305: push 0x6d844c */ { u32 v = 0x6d844cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061030a: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0061030f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x610314u); f_005e9f20();
    /* 00610314: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00610317:; BB(0x00610317);
    /* 00610317: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061031a: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0061031d: add ecx, 0x76fed8 */ {  u32 a = r_ecx; u32 b = 0x76fed8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00610323: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00610326: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00610328: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0061032a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0061032d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00610330: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00610333: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00610336: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00610339: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0061033c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0061033f:; BB(0x0061033f);
    /* 0061033f: mov esp, ebp */ r_esp = r_ebp;
    /* 00610341: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00610342: ret  */ FN_RET(0x006102a0); r_esp += 4; return;
}


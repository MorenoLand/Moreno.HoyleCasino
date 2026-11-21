#include "protos.h"

void f_006631e0(void) /* NavHideSubscreenScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006631e0);
    /* 006631e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006631e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006631e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006631e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006631e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006631ea: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x6631efu); f_005fc360();
    /* 006631ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006631f1: jne 0x663216 */ if (!fZ) goto L_00663216;
L_006631f3:; BB(0x006631f3);
    /* 006631f3: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 006631f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006631fb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006631fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663200: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00663203: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x663205u); call_ind(t); }
    /* 00663205: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663207: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066320a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066320c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066320f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00663212: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x663214u); call_ind(t); }
    /* 00663214: jmp 0x663268 */ goto L_00663268;
L_00663216:; BB(0x00663216);
    /* 00663216: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663219: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x66321eu); f_005fc360();
    /* 0066321e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00663221: je 0x663225 */ if (fZ) goto L_00663225;
L_00663223:; BB(0x00663223);
    /* 00663223: jmp 0x663268 */ goto L_00663268;
L_00663225:; BB(0x00663225);
    /* 00663225: push 0x6df898 */ { u32 v = 0x6df898u; r_esp -= 4; W32(r_esp, v); }
    /* 0066322a: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x66322fu); f_0062fde0();
    /* 0066322f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00663232: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00663234: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663237: call 0x5fc2a0 */ r_esp -= 4; W32(r_esp, 0x66323cu); f_005fc2a0();
    /* 0066323c: push 0xf4240 */ { u32 v = 0xf4240u; r_esp -= 4; W32(r_esp, v); }
    /* 00663241: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663244: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00663246: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663249: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0066324c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66324eu); call_ind(t); }
    /* 0066324e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00663250: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663253: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00663255: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663258: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066325b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66325du); call_ind(t); }
    /* 0066325d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00663260: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00663263: call 0x6622a0 */ r_esp -= 4; W32(r_esp, 0x663268u); f_006622a0();
L_00663268:; BB(0x00663268);
    /* 00663268: mov esp, ebp */ r_esp = r_ebp;
    /* 0066326a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066326b: ret  */ FN_RET(0x006631e0); r_esp += 4; return;
}


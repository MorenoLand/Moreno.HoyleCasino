#include "protos.h"

void f_005fc0d0(void) /* sciScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc0d0);
    /* 005fc0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc0d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc0d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005fc0d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc0da: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5fc0dfu); f_005e9e20();
    /* 005fc0df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc0e2: mov dword ptr [eax], 0x6d6e94 */ W32((u32)(r_eax), 0x6d6e94u);
    /* 005fc0e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc0eb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005fc0ee: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005fc0f1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc0f4: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc0f8: je 0x5fc106 */ if (fZ) goto L_005fc106;
L_005fc0fa:; BB(0x005fc0fa);
    /* 005fc0fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc0fd: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005fc100: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc103: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
L_005fc106:; BB(0x005fc106);
    /* 005fc106: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc109: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005fc110: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc113: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005fc11a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc11d: mov dword ptr [eax + 0x14], 0xffffffff */ W32((u32)(r_eax+0x14u), 0xffffffffu);
    /* 005fc124: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc127: mov dword ptr [ecx + 0x1c], 0xffffffff */ W32((u32)(r_ecx+0x1cu), 0xffffffffu);
    /* 005fc12e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc131: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 005fc138: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc13b: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005fc142: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005fc145: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc147: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc148: ret 4 */ FN_RET(0x005fc0d0); r_esp += 8; return;
}

void f_005fc150(void) /* sciScript::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005fc150);
    /* 005fc150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fc151: mov ebp, esp */ r_ebp = r_esp;
    /* 005fc153: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc155: push 0x6aa578 */ { u32 v = 0x6aa578u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc15a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fc160: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc161: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc162: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005fc167: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fc169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fc16a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005fc16d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005fc173: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005fc176: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc179: mov dword ptr [eax], 0x6d6e94 */ W32((u32)(r_eax), 0x6d6e94u);
    /* 005fc17f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fc186: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fc18a: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 005fc190: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005fc193: call 0x608980 */ r_esp -= 4; W32(r_esp, 0x5fc198u); f_00608980();
    /* 005fc198: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc19a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc19d: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x5fc1a2u); f_005fc420();
    /* 005fc1a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1a5: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc1a9: je 0x5fc1cd */ if (fZ) goto L_005fc1cd;
L_005fc1ab:; BB(0x005fc1ab);
    /* 005fc1ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc1ad: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1b0: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005fc1b3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1b6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005fc1b9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005fc1bb: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005fc1be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5fc1c0u); call_ind(t); }
    /* 005fc1c0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1c3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005fc1c6: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
L_005fc1cd:; BB(0x005fc1cd);
    /* 005fc1cd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1d0: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fc1d4: je 0x5fc1e3 */ if (fZ) goto L_005fc1e3;
L_005fc1d6:; BB(0x005fc1d6);
    /* 005fc1d6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1d9: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005fc1dc: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
L_005fc1e3:; BB(0x005fc1e3);
    /* 005fc1e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1e6: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005fc1ed: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc1f0: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005fc1f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fc1fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005fc201: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x5fc206u); f_005e9e40();
    /* 005fc206: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fc209: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fc210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fc211: mov esp, ebp */ r_esp = r_ebp;
    /* 005fc213: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fc214: ret  */ FN_RET(0x005fc150); r_esp += 4; return;
}


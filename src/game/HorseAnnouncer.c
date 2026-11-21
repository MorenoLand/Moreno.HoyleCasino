#include "protos.h"

void f_0043d170(void) /* HorseAnnouncer::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d170);
    /* 0043d170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d171: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d173: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043d175: push 0x69e883 */ { u32 v = 0x69e883u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d17a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043d180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d181: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043d184: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0043d189: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043d18b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043d18c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0043d18f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0043d195: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043d198: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d19b: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x43d1a0u); f_005f5bf0();
    /* 0043d1a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043d1a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d1aa: mov dword ptr [eax], 0x6b81f4 */ W32((u32)(r_eax), 0x6b81f4u);
    /* 0043d1b0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d1b3: mov dword ptr [ecx + 0x184], 0 */ W32((u32)(r_ecx+0x184u), 0x0u);
    /* 0043d1bd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d1c0: mov byte ptr [edx + 0x188], 0 */ W8((u32)(r_edx+0x188u), 0x0u);
    /* 0043d1c7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d1ca: call 0x43da90 */ r_esp -= 4; W32(r_esp, 0x43d1cfu); f_0043da90();
    /* 0043d1cf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d1d2: call 0x5f5cc0 */ r_esp -= 4; W32(r_esp, 0x43d1d7u); f_005f5cc0();
    /* 0043d1d7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d1da: call 0x5eb570 */ r_esp -= 4; W32(r_esp, 0x43d1dfu); f_005eb570();
    /* 0043d1df: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d1e1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x43d1e6u); f_00686d82();
    /* 0043d1e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043d1e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043d1ec: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043d1f0: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043d1f4: je 0x43d203 */ if (fZ) goto L_0043d203;
L_0043d1f6:; BB(0x0043d1f6);
    /* 0043d1f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043d1f9: call 0x43e2c0 */ r_esp -= 4; W32(r_esp, 0x43d1feu); f_0043e2c0();
    /* 0043d1fe: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0043d201: jmp 0x43d20a */ goto L_0043d20a;
L_0043d203:; BB(0x0043d203);
    /* 0043d203: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0043d20a:; BB(0x0043d20a);
    /* 0043d20a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043d20d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043d210: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043d214: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043d217: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d218: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d21b: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x43d220u); f_005f5df0();
    /* 0043d220: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d222: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043d224: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d227: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0043d22d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d230: mov ecx, dword ptr [ecx + 0x17c] */ r_ecx = R32((u32)(r_ecx+0x17cu));
    /* 0043d236: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043d238: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0043d23b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x43d23du); call_ind(t); }
    /* 0043d23d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043d244: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043d247: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043d24a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043d251: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043d252: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d254: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d255: ret  */ FN_RET(0x0043d170); r_esp += 4; return;
}

void f_0043d280(void) /* HorseAnnouncer::vfunc46 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043d280);
    /* 0043d280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043d281: mov ebp, esp */ r_ebp = r_esp;
    /* 0043d283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043d284: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043d287: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043d28a: call 0x5f5cf0 */ r_esp -= 4; W32(r_esp, 0x43d28fu); f_005f5cf0();
    /* 0043d28f: mov esp, ebp */ r_esp = r_ebp;
    /* 0043d291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043d292: ret  */ FN_RET(0x0043d280); r_esp += 4; return;
}


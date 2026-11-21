#include "protos.h"

void f_0062a870(void) /* List::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a870);
    /* 0062a870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a871: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a875: push 0x6ab6c8 */ { u32 v = 0x6ab6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a87a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a881: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a884: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062a889: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a88b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a88c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062a88f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062a895: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062a898: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a89b: call 0x62aea0 */ r_esp -= 4; W32(r_esp, 0x62a8a0u); f_0062aea0();
    /* 0062a8a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a8a7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a8aa: mov dword ptr [eax], 0x6d96d8 */ W32((u32)(r_eax), 0x6d96d8u);
    /* 0062a8b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a8b3: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0062a8ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a8bd: mov dword ptr [edx + 0x10], 0xa */ W32((u32)(r_edx+0x10u), 0xau);
    /* 0062a8c4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0062a8c6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x62a8cbu); f_00686d82();
    /* 0062a8cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062a8ce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062a8d1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a8d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062a8d7: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0062a8da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a8dd: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 0062a8e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a8eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a8ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a8f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a8f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a8f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a8fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a8fc: ret  */ FN_RET(0x0062a870); r_esp += 4; return;
}

void f_0062a900(void) /* List::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0062a900);
    /* 0062a900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062a901: mov ebp, esp */ r_ebp = r_esp;
    /* 0062a903: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a905: push 0x6ab6eb */ { u32 v = 0x6ab6ebu; r_esp -= 4; W32(r_esp, v); }
    /* 0062a90a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062a910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a911: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062a914: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0062a919: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062a91b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062a91c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062a91f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0062a925: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062a928: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a92b: mov dword ptr [eax], 0x6d96d8 */ W32((u32)(r_eax), 0x6d96d8u);
    /* 0062a931: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062a938: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a93b: call 0x62ad70 */ r_esp -= 4; W32(r_esp, 0x62a940u); f_0062ad70();
    /* 0062a940: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a943: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062a947: je 0x62a95e */ if (fZ) goto L_0062a95e;
L_0062a949:; BB(0x0062a949);
    /* 0062a949: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a94c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0062a94f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0062a952: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0062a955: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062a956: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x62a95bu); f_00686cae();
    /* 0062a95b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062a95e:; BB(0x0062a95e);
    /* 0062a95e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062a965: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062a968: call 0x62aef0 */ r_esp -= 4; W32(r_esp, 0x62a96du); f_0062aef0();
    /* 0062a96d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a970: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a977: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a978: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a97a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a97b: ret  */ FN_RET(0x0062a900); r_esp += 4; return;
}


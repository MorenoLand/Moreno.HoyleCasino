#include "protos.h"

void f_0048cc10(void) /* sub_48CC10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0048cc10);
    /* 0048cc10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc11: mov ebp, esp */ r_ebp = r_esp;
    /* 0048cc13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc15: push 0x6a03c5 */ { u32 v = 0x6a03c5u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048cc20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc21: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048cc24: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0048cc29: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048cc2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc2c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0048cc2f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0048cc35: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0048cc38: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0048cc3f: mov al, byte ptr [ebp + 0x28] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 0048cc42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc43: mov cl, byte ptr [ebp + 0x24] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 0048cc46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc47: mov dl, byte ptr [ebp + 0x20] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x20u))) & 0xffu);
    /* 0048cc4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc4b: mov al, byte ptr [ebp + 0x1c] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x1cu))) & 0xffu);
    /* 0048cc4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc4f: mov cl, byte ptr [ebp + 0x18] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0048cc52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc53: mov dl, byte ptr [ebp + 0x14] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0048cc56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc57: mov al, byte ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0048cc5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc5b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0048cc5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc5f: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 0048cc62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc63: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048cc66: call 0x48c7b0 */ r_esp -= 4; W32(r_esp, 0x48cc6bu); f_0048c7b0();
    /* 0048cc6b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048cc6e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048cc71: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048cc74: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048cc7b: mov cl, byte ptr [ebp + 0x28] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x28u))) & 0xffu);
    /* 0048cc7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc7f: mov dl, byte ptr [ebp + 0x24] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x24u))) & 0xffu);
    /* 0048cc82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc83: mov al, byte ptr [ebp + 0x20] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x20u))) & 0xffu);
    /* 0048cc86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc87: mov cl, byte ptr [ebp + 0x1c] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x1cu))) & 0xffu);
    /* 0048cc8a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc8b: mov dl, byte ptr [ebp + 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0048cc8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc8f: mov al, byte ptr [ebp + 0x14] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x14u))) & 0xffu);
    /* 0048cc92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc93: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 0048cc96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc97: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048cc9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc9b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048cc9e: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x48cca3u); f_00485940();
    /* 0048cca3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048cca6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048cca9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0048ccac: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ccb0: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0048ccb3: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x48ccb8u); f_00484470();
    /* 0048ccb8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048ccbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048ccbe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048ccc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ccc6: mov esp, ebp */ r_esp = r_ebp;
    /* 0048ccc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ccc9: ret 0x24 */ FN_RET(0x0048cc10); r_esp += 40; return;
}


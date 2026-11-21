#include "protos.h"

void f_00559230(void) /* VPMultiAI::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00559230);
    /* 00559230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00559231: mov ebp, esp */ r_ebp = r_esp;
    /* 00559233: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00559236: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00559239: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055923c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x559241u); f_005e9e20();
    /* 00559241: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559244: mov dword ptr [eax], 0x6c8e64 */ W32((u32)(r_eax), 0x6c8e64u);
    /* 0055924a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055924d: mov byte ptr [ecx + 0x19], 0 */ W8((u32)(r_ecx+0x19u), 0x0u);
    /* 00559251: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559254: mov dword ptr [edx + 0x10], 0xffffffff */ W32((u32)(r_edx+0x10u), 0xffffffffu);
    /* 0055925b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00559262: jmp 0x55926d */ goto L_0055926d;
L_00559264:; BB(0x00559264);
    /* 00559264: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559267: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055926a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055926d:; BB(0x0055926d);
    /* 0055926d: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00559271: jge 0x55928c */ if ((fS==fO)) goto L_0055928c;
L_00559273:; BB(0x00559273);
    /* 00559273: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00559276: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559279: mov word ptr [edx + ecx*2 + 4], 0 */ W16((u32)(r_edx+r_ecx*2+0x4u), 0x0u);
    /* 00559280: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00559283: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00559286: mov byte ptr [eax + 0x14], 0xff */ W8((u32)(r_eax+0x14u), 0xffu);
    /* 0055928a: jmp 0x559264 */ goto L_00559264;
L_0055928c:; BB(0x0055928c);
    /* 0055928c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055928f: mov esp, ebp */ r_esp = r_ebp;
    /* 00559291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00559292: ret  */ FN_RET(0x00559230); r_esp += 4; return;
}


#include "protos.h"

void f_00571660(void) /* RoadKillSlotDebug::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571660);
    /* 00571660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571661: mov ebp, esp */ r_ebp = r_esp;
    /* 00571663: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00571666: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00571669: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057166c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x571671u); f_005e9e20();
    /* 00571671: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571674: mov dword ptr [eax], 0x6ca77c */ W32((u32)(r_eax), 0x6ca77cu);
    /* 0057167a: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00571680: jmp 0x57168e */ goto L_0057168e;
L_00571682:; BB(0x00571682);
    /* 00571682: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00571686: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0057168a: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_0057168e:; BB(0x0057168e);
    /* 0057168e: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571692: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571695: jge 0x5716a8 */ if ((fS==fO)) goto L_005716a8;
L_00571697:; BB(0x00571697);
    /* 00571697: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057169b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057169e: mov dword ptr [ecx + eax*4 + 8], 0 */ W32((u32)(r_ecx+r_eax*4+0x8u), 0x0u);
    /* 005716a6: jmp 0x571682 */ goto L_00571682;
L_005716a8:; BB(0x005716a8);
    /* 005716a8: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005716ae: jmp 0x5716bc */ goto L_005716bc;
L_005716b0:; BB(0x005716b0);
    /* 005716b0: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005716b4: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005716b8: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_005716bc:; BB(0x005716bc);
    /* 005716bc: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005716c0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005716c3: jge 0x5716d6 */ if ((fS==fO)) goto L_005716d6;
L_005716c5:; BB(0x005716c5);
    /* 005716c5: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005716c9: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005716cc: mov dword ptr [edx + ecx*4 + 0x18], 0xffffffff */ W32((u32)(r_edx+r_ecx*4+0x18u), 0xffffffffu);
    /* 005716d4: jmp 0x5716b0 */ goto L_005716b0;
L_005716d6:; BB(0x005716d6);
    /* 005716d6: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005716dc: jmp 0x5716ea */ goto L_005716ea;
L_005716de:; BB(0x005716de);
    /* 005716de: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 005716e2: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005716e6: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_005716ea:; BB(0x005716ea);
    /* 005716ea: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005716ee: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005716f1: jge 0x571704 */ if ((fS==fO)) goto L_00571704;
L_005716f3:; BB(0x005716f3);
    /* 005716f3: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005716f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005716fa: mov dword ptr [eax + edx*4 + 0x40], 0 */ W32((u32)(r_eax+r_edx*4+0x40u), 0x0u);
    /* 00571702: jmp 0x5716de */ goto L_005716de;
L_00571704:; BB(0x00571704);
    /* 00571704: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057170a: jmp 0x571718 */ goto L_00571718;
L_0057170c:; BB(0x0057170c);
    /* 0057170c: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00571710: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00571714: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00571718:; BB(0x00571718);
    /* 00571718: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057171c: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057171f: jge 0x571732 */ if ((fS==fO)) goto L_00571732;
L_00571721:; BB(0x00571721);
    /* 00571721: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00571725: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571728: mov dword ptr [ecx + eax*4 + 0x64], 0 */ W32((u32)(r_ecx+r_eax*4+0x64u), 0x0u);
    /* 00571730: jmp 0x57170c */ goto L_0057170c;
L_00571732:; BB(0x00571732);
    /* 00571732: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571735: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 0057173c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057173f: mov byte ptr [eax + 4], 0 */ W8((u32)(r_eax+0x4u), 0x0u);
    /* 00571743: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571746: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 0057174d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00571750: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 00571757: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057175a: mov esp, ebp */ r_esp = r_ebp;
    /* 0057175c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057175d: ret  */ FN_RET(0x00571660); r_esp += 4; return;
}


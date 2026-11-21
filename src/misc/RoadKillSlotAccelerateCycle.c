#include "protos.h"

void f_005714a0(void) /* RoadKillSlotAccelerateCycle::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005714a0);
    /* 005714a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005714a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005714a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005714a5: push 0x6a6071 */ { u32 v = 0x6a6071u; r_esp -= 4; W32(r_esp, v); }
    /* 005714aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005714b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005714b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005714b2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005714b7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005714b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005714ba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005714bd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005714c3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005714c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005714c8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005714cb: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5714d0u); f_00600a70();
    /* 005714d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005714d7: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005714da: mov dword ptr [eax], 0x6ca760 */ W32((u32)(r_eax), 0x6ca760u);
    /* 005714e0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005714e3: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005714e6: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 005714e9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005714ec: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005714ef: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005714f2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005714f5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005714f8: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005714fb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00571501: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x571506u); f_005f3e50();
    /* 00571506: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571509: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0057150c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00571513: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00571516: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00571519: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00571520: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00571521: mov esp, ebp */ r_esp = r_ebp;
    /* 00571523: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571524: ret 0xc */ FN_RET(0x005714a0); r_esp += 16; return;
}

void f_00571550(void) /* RoadKillSlotAccelerateCycle::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571550);
    /* 00571550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571551: mov ebp, esp */ r_ebp = r_esp;
    /* 00571553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571557: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00571559: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057155c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057155d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571560: call 0x6004e0 */ r_esp -= 4; W32(r_esp, 0x571565u); f_006004e0();
    /* 00571565: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571568: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057156b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057156e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00571571: mov dword ptr [edx + 0x178], ecx */ W32((u32)(r_edx+0x178u), r_ecx);
    /* 00571577: mov esp, ebp */ r_esp = r_ebp;
    /* 00571579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057157a: ret 8 */ FN_RET(0x00571550); r_esp += 12; return;
}

void f_00571580(void) /* RoadKillSlotAccelerateCycle::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00571580);
    /* 00571580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00571581: mov ebp, esp */ r_ebp = r_esp;
    /* 00571583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00571584: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00571587: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057158d: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x571592u); f_005f3e50();
    /* 00571592: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571595: sub eax, dword ptr [ecx + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00571598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00571599: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x57159eu); f_00686eba();
    /* 0057159e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005715a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715a4: cmp eax, dword ptr [edx + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005715a7: jle 0x5715fb */ if ((fZ||fS!=fO)) goto L_005715fb;
L_005715a9:; BB(0x005715a9);
    /* 005715a9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005715af: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x5715b4u); f_005f3e50();
    /* 005715b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715b7: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005715ba: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715bd: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005715c0: mov ecx, dword ptr [eax + 0x178] */ r_ecx = R32((u32)(r_eax+0x178u));
    /* 005715c6: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005715c9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715cc: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005715cf: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
    /* 005715d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715d8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005715db: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715de: mov ecx, dword ptr [edx + 0x178] */ r_ecx = R32((u32)(r_edx+0x178u));
    /* 005715e4: cmp ecx, dword ptr [eax + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005715e7: jge 0x5715fb */ if ((fS==fO)) goto L_005715fb;
L_005715e9:; BB(0x005715e9);
    /* 005715e9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715ec: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005715ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005715f2: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005715f5: mov dword ptr [eax + 0x178], edx */ W32((u32)(r_eax+0x178u), r_edx);
L_005715fb:; BB(0x005715fb);
    /* 005715fb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00571601: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x571606u); f_005f3e50();
    /* 00571606: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571609: sub eax, dword ptr [ecx + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057160c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057160d: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x571612u); f_00686eba();
    /* 00571612: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00571615: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571618: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0057161b: cmp eax, dword ptr [ecx + 0x178] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x178u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00571621: jge 0x571632 */ if ((fS==fO)) goto L_00571632;
L_00571623:; BB(0x00571623);
    /* 00571623: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571626: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00571629: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x57162eu); f_005eb220();
    /* 0057162e: jmp 0x571654 */ goto L_00571654;
L_00571632:; BB(0x00571632);
    /* 00571632: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00571638: call 0x5f3e50 */ r_esp -= 4; W32(r_esp, 0x57163du); f_005f3e50();
    /* 0057163d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571640: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00571643: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571646: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00571649: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x57164eu); f_005eb220();
    /* 0057164e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00571651: add eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00571654:; BB(0x00571654);
    /* 00571654: mov esp, ebp */ r_esp = r_ebp;
    /* 00571656: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00571657: ret  */ FN_RET(0x00571580); r_esp += 4; return;
}


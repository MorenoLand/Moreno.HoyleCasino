#include "protos.h"

void f_006ae010(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae010);
    /* 006ae010: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 006ae013: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae060(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae060);
    /* 006ae060: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006ae063: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae090(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae090);
    /* 006ae090: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ae093: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae0c0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae0c0);
    /* 006ae0c0: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 006ae0c3: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae0f0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae0f0);
    /* 006ae0f0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ae0f3: jmp dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); call_ind(t); return; }
}

void f_006ae140(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae140);
    /* 006ae140: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 006ae143: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae170(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae170);
    /* 006ae170: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006ae173: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae1a0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae1a0);
    /* 006ae1a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ae1a3: jmp dword ptr [0x6b2278] */ { u32 t = R32((u32)(0x6b2278u)); call_ind(t); return; }
}

void f_006ae1f0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae1f0);
    /* 006ae1f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ae1f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae1f4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ae1f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ae1f8: call 0x5bc5c0 */ r_esp -= 4; W32(r_esp, 0x6ae1fdu); f_005bc5c0();
    /* 006ae1fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae200: ret  */ FN_RET(0x006ae1f0); r_esp += 4; return;
}

void f_006ae230(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae230);
    /* 006ae230: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006ae233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ae234: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ae237: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ae238: call 0x5bc5c0 */ r_esp -= 4; W32(r_esp, 0x6ae23du); f_005bc5c0();
    /* 006ae23d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ae240: ret  */ FN_RET(0x006ae230); r_esp += 4; return;
}

void f_006ae270(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae270);
    /* 006ae270: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006ae273: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae2e0(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae2e0);
    /* 006ae2e0: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006ae2e3: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae310(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae310);
    /* 006ae310: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ae313: jmp dword ptr [0x6b20f4] */ { u32 t = R32((u32)(0x6b20f4u)); call_ind(t); return; }
}

void f_006ae340(void) /* sub_6AE340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae340);
    /* 006ae340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ae341: mov ebp, esp */ r_ebp = r_esp;
    /* 006ae343: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ae349: mov dword ptr [ebp - 0x10], 0x437cd0 */ W32((u32)(r_ebp+0xfffffff0u), 0x437cd0u);
    /* 006ae350: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006ae357: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006ae35e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ae365: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ae368: mov dword ptr [0x790370], eax */ W32((u32)(0x790370u), r_eax);
    /* 006ae36d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae370: mov dword ptr [0x790374], ecx */ W32((u32)(0x790374u), r_ecx);
    /* 006ae376: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006ae379: mov dword ptr [0x790378], edx */ W32((u32)(0x790378u), r_edx);
    /* 006ae37f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006ae382: mov dword ptr [0x79037c], eax */ W32((u32)(0x79037cu), r_eax);
    /* 006ae387: mov dword ptr [ebp - 0x20], 0x4311d0 */ W32((u32)(r_ebp+0xffffffe0u), 0x4311d0u);
    /* 006ae38e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 006ae395: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 006ae39c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006ae3a3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ae3a6: mov dword ptr [0x790380], ecx */ W32((u32)(0x790380u), r_ecx);
    /* 006ae3ac: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ae3af: mov dword ptr [0x790384], edx */ W32((u32)(0x790384u), r_edx);
    /* 006ae3b5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae3b8: mov dword ptr [0x790388], eax */ W32((u32)(0x790388u), r_eax);
    /* 006ae3bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ae3c0: mov dword ptr [0x79038c], ecx */ W32((u32)(0x79038cu), r_ecx);
    /* 006ae3c6: mov dword ptr [ebp - 0x30], 0x4380d0 */ W32((u32)(r_ebp+0xffffffd0u), 0x4380d0u);
    /* 006ae3cd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006ae3d4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006ae3db: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ae3e2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae3e5: mov dword ptr [0x790390], edx */ W32((u32)(0x790390u), r_edx);
    /* 006ae3eb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae3ee: mov dword ptr [0x790394], eax */ W32((u32)(0x790394u), r_eax);
    /* 006ae3f3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae3f6: mov dword ptr [0x790398], ecx */ W32((u32)(0x790398u), r_ecx);
    /* 006ae3fc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ae3ff: mov dword ptr [0x79039c], edx */ W32((u32)(0x79039cu), r_edx);
    /* 006ae405: mov dword ptr [ebp - 0x40], 0x4312c0 */ W32((u32)(r_ebp+0xffffffc0u), 0x4312c0u);
    /* 006ae40c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006ae413: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006ae41a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006ae421: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006ae424: mov dword ptr [0x7903a0], eax */ W32((u32)(0x7903a0u), r_eax);
    /* 006ae429: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006ae42c: mov dword ptr [0x7903a4], ecx */ W32((u32)(0x7903a4u), r_ecx);
    /* 006ae432: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006ae435: mov dword ptr [0x7903a8], edx */ W32((u32)(0x7903a8u), r_edx);
    /* 006ae43b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006ae43e: mov dword ptr [0x7903ac], eax */ W32((u32)(0x7903acu), r_eax);
    /* 006ae443: mov dword ptr [ebp - 0x50], 0x437ed0 */ W32((u32)(r_ebp+0xffffffb0u), 0x437ed0u);
    /* 006ae44a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006ae451: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006ae458: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006ae45f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006ae462: mov dword ptr [0x7903b0], ecx */ W32((u32)(0x7903b0u), r_ecx);
    /* 006ae468: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006ae46b: mov dword ptr [0x7903b4], edx */ W32((u32)(0x7903b4u), r_edx);
    /* 006ae471: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006ae474: mov dword ptr [0x7903b8], eax */ W32((u32)(0x7903b8u), r_eax);
    /* 006ae479: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006ae47c: mov dword ptr [0x7903bc], ecx */ W32((u32)(0x7903bcu), r_ecx);
    /* 006ae482: mov dword ptr [ebp - 0x60], 0x4311d0 */ W32((u32)(r_ebp+0xffffffa0u), 0x4311d0u);
    /* 006ae489: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006ae490: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 006ae497: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006ae49e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006ae4a1: mov dword ptr [0x7903c0], edx */ W32((u32)(0x7903c0u), r_edx);
    /* 006ae4a7: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 006ae4aa: mov dword ptr [0x7903c4], eax */ W32((u32)(0x7903c4u), r_eax);
    /* 006ae4af: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006ae4b2: mov dword ptr [0x7903c8], ecx */ W32((u32)(0x7903c8u), r_ecx);
    /* 006ae4b8: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 006ae4bb: mov dword ptr [0x7903cc], edx */ W32((u32)(0x7903ccu), r_edx);
    /* 006ae4c1: mov dword ptr [ebp - 0x70], 0x438180 */ W32((u32)(r_ebp+0xffffff90u), 0x438180u);
    /* 006ae4c8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006ae4cf: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 006ae4d6: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006ae4dd: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 006ae4e0: mov dword ptr [0x7903d0], eax */ W32((u32)(0x7903d0u), r_eax);
    /* 006ae4e5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 006ae4e8: mov dword ptr [0x7903d4], ecx */ W32((u32)(0x7903d4u), r_ecx);
    /* 006ae4ee: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006ae4f1: mov dword ptr [0x7903d8], edx */ W32((u32)(0x7903d8u), r_edx);
    /* 006ae4f7: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006ae4fa: mov dword ptr [0x7903dc], eax */ W32((u32)(0x7903dcu), r_eax);
    /* 006ae4ff: mov dword ptr [ebp - 0x80], 0x4312c0 */ W32((u32)(r_ebp+0xffffff80u), 0x4312c0u);
    /* 006ae506: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 006ae50d: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 006ae514: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 006ae51b: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 006ae51e: mov dword ptr [0x7903e0], ecx */ W32((u32)(0x7903e0u), r_ecx);
    /* 006ae524: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 006ae527: mov dword ptr [0x7903e4], edx */ W32((u32)(0x7903e4u), r_edx);
    /* 006ae52d: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 006ae530: mov dword ptr [0x7903e8], eax */ W32((u32)(0x7903e8u), r_eax);
    /* 006ae535: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006ae538: mov dword ptr [0x7903ec], ecx */ W32((u32)(0x7903ecu), r_ecx);
    /* 006ae53e: mov dword ptr [ebp - 0x90], 0x437ed0 */ W32((u32)(r_ebp+0xffffff70u), 0x437ed0u);
    /* 006ae548: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 006ae552: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006ae55c: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 006ae566: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 006ae56c: mov dword ptr [0x7903f0], edx */ W32((u32)(0x7903f0u), r_edx);
    /* 006ae572: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 006ae578: mov dword ptr [0x7903f4], eax */ W32((u32)(0x7903f4u), r_eax);
    /* 006ae57d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 006ae583: mov dword ptr [0x7903f8], ecx */ W32((u32)(0x7903f8u), r_ecx);
    /* 006ae589: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 006ae58f: mov dword ptr [0x7903fc], edx */ W32((u32)(0x7903fcu), r_edx);
    /* 006ae595: mov dword ptr [ebp - 0xa0], 0x431270 */ W32((u32)(r_ebp+0xffffff60u), 0x431270u);
    /* 006ae59f: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 006ae5a9: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 006ae5b3: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 006ae5bd: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 006ae5c3: mov dword ptr [0x790400], eax */ W32((u32)(0x790400u), r_eax);
    /* 006ae5c8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006ae5ce: mov dword ptr [0x790404], ecx */ W32((u32)(0x790404u), r_ecx);
    /* 006ae5d4: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 006ae5da: mov dword ptr [0x790408], edx */ W32((u32)(0x790408u), r_edx);
    /* 006ae5e0: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 006ae5e6: mov dword ptr [0x79040c], eax */ W32((u32)(0x79040cu), r_eax);
    /* 006ae5eb: mov dword ptr [ebp - 0xb0], 0x437cd0 */ W32((u32)(r_ebp+0xffffff50u), 0x437cd0u);
    /* 006ae5f5: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 006ae5ff: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
    /* 006ae609: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 006ae613: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 006ae619: mov dword ptr [0x790410], ecx */ W32((u32)(0x790410u), r_ecx);
    /* 006ae61f: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 006ae625: mov dword ptr [0x790414], edx */ W32((u32)(0x790414u), r_edx);
    /* 006ae62b: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 006ae631: mov dword ptr [0x790418], eax */ W32((u32)(0x790418u), r_eax);
    /* 006ae636: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 006ae63c: mov dword ptr [0x79041c], ecx */ W32((u32)(0x79041cu), r_ecx);
    /* 006ae642: mov dword ptr [ebp - 0xc0], 0x431220 */ W32((u32)(r_ebp+0xffffff40u), 0x431220u);
    /* 006ae64c: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 006ae656: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 006ae660: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 006ae66a: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 006ae670: mov dword ptr [0x790420], edx */ W32((u32)(0x790420u), r_edx);
    /* 006ae676: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 006ae67c: mov dword ptr [0x790424], eax */ W32((u32)(0x790424u), r_eax);
    /* 006ae681: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 006ae687: mov dword ptr [0x790428], ecx */ W32((u32)(0x790428u), r_ecx);
    /* 006ae68d: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 006ae693: mov dword ptr [0x79042c], edx */ W32((u32)(0x79042cu), r_edx);
    /* 006ae699: mov dword ptr [ebp - 0xd0], 0x438230 */ W32((u32)(r_ebp+0xffffff30u), 0x438230u);
    /* 006ae6a3: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 006ae6ad: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 006ae6b7: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 006ae6c1: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 006ae6c7: mov dword ptr [0x790430], eax */ W32((u32)(0x790430u), r_eax);
    /* 006ae6cc: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006ae6d2: mov dword ptr [0x790434], ecx */ W32((u32)(0x790434u), r_ecx);
    /* 006ae6d8: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006ae6de: mov dword ptr [0x790438], edx */ W32((u32)(0x790438u), r_edx);
    /* 006ae6e4: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006ae6ea: mov dword ptr [0x79043c], eax */ W32((u32)(0x79043cu), r_eax);
    /* 006ae6ef: mov dword ptr [ebp - 0xe0], 0x431180 */ W32((u32)(r_ebp+0xffffff20u), 0x431180u);
    /* 006ae6f9: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 006ae703: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 006ae70d: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 006ae717: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 006ae71d: mov dword ptr [0x790440], ecx */ W32((u32)(0x790440u), r_ecx);
    /* 006ae723: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 006ae729: mov dword ptr [0x790444], edx */ W32((u32)(0x790444u), r_edx);
    /* 006ae72f: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 006ae735: mov dword ptr [0x790448], eax */ W32((u32)(0x790448u), r_eax);
    /* 006ae73a: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 006ae740: mov dword ptr [0x79044c], ecx */ W32((u32)(0x79044cu), r_ecx);
    /* 006ae746: mov dword ptr [ebp - 0xf0], 0x438330 */ W32((u32)(r_ebp+0xffffff10u), 0x438330u);
    /* 006ae750: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 006ae75a: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 006ae764: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
    /* 006ae76e: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 006ae774: mov dword ptr [0x790450], edx */ W32((u32)(0x790450u), r_edx);
    /* 006ae77a: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 006ae780: mov dword ptr [0x790454], eax */ W32((u32)(0x790454u), r_eax);
    /* 006ae785: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 006ae78b: mov dword ptr [0x790458], ecx */ W32((u32)(0x790458u), r_ecx);
    /* 006ae791: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 006ae797: mov dword ptr [0x79045c], edx */ W32((u32)(0x79045cu), r_edx);
    /* 006ae79d: mov dword ptr [ebp - 0x100], 0x431310 */ W32((u32)(r_ebp+0xffffff00u), 0x431310u);
    /* 006ae7a7: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
    /* 006ae7b1: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 006ae7bb: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 006ae7c5: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 006ae7cb: mov dword ptr [0x790460], eax */ W32((u32)(0x790460u), r_eax);
    /* 006ae7d0: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 006ae7d6: mov dword ptr [0x790464], ecx */ W32((u32)(0x790464u), r_ecx);
    /* 006ae7dc: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 006ae7e2: mov dword ptr [0x790468], edx */ W32((u32)(0x790468u), r_edx);
    /* 006ae7e8: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 006ae7ee: mov dword ptr [0x79046c], eax */ W32((u32)(0x79046cu), r_eax);
    /* 006ae7f3: mov esp, ebp */ r_esp = r_ebp;
    /* 006ae7f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ae7f6: ret  */ FN_RET(0x006ae340); r_esp += 4; return;
}

void f_006ae800(void) /* sub_6AE800 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006ae800);
    /* 006ae800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006ae801: mov ebp, esp */ r_ebp = r_esp;
    /* 006ae803: sub esp, 0x260 */ {  u32 a = r_esp; u32 b = 0x260u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006ae809: mov dword ptr [ebp - 0x10], 0x437c30 */ W32((u32)(r_ebp+0xfffffff0u), 0x437c30u);
    /* 006ae810: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 006ae817: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 006ae81e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006ae825: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006ae828: mov dword ptr [0x790470], eax */ W32((u32)(0x790470u), r_eax);
    /* 006ae82d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ae830: mov dword ptr [0x790474], ecx */ W32((u32)(0x790474u), r_ecx);
    /* 006ae836: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006ae839: mov dword ptr [0x790478], edx */ W32((u32)(0x790478u), r_edx);
    /* 006ae83f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006ae842: mov dword ptr [0x79047c], eax */ W32((u32)(0x79047cu), r_eax);
    /* 006ae847: mov dword ptr [ebp - 0x20], 0x4311d0 */ W32((u32)(r_ebp+0xffffffe0u), 0x4311d0u);
    /* 006ae84e: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 006ae855: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 006ae85c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 006ae863: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ae866: mov dword ptr [0x790480], ecx */ W32((u32)(0x790480u), r_ecx);
    /* 006ae86c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ae86f: mov dword ptr [0x790484], edx */ W32((u32)(0x790484u), r_edx);
    /* 006ae875: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ae878: mov dword ptr [0x790488], eax */ W32((u32)(0x790488u), r_eax);
    /* 006ae87d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ae880: mov dword ptr [0x79048c], ecx */ W32((u32)(0x79048cu), r_ecx);
    /* 006ae886: mov dword ptr [ebp - 0x30], 0x438280 */ W32((u32)(r_ebp+0xffffffd0u), 0x438280u);
    /* 006ae88d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006ae894: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006ae89b: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006ae8a2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006ae8a5: mov dword ptr [0x790490], edx */ W32((u32)(0x790490u), r_edx);
    /* 006ae8ab: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006ae8ae: mov dword ptr [0x790494], eax */ W32((u32)(0x790494u), r_eax);
    /* 006ae8b3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ae8b6: mov dword ptr [0x790498], ecx */ W32((u32)(0x790498u), r_ecx);
    /* 006ae8bc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ae8bf: mov dword ptr [0x79049c], edx */ W32((u32)(0x79049cu), r_edx);
    /* 006ae8c5: mov dword ptr [ebp - 0x40], 0x4312c0 */ W32((u32)(r_ebp+0xffffffc0u), 0x4312c0u);
    /* 006ae8cc: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006ae8d3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006ae8da: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006ae8e1: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 006ae8e4: mov dword ptr [0x7904a0], eax */ W32((u32)(0x7904a0u), r_eax);
    /* 006ae8e9: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006ae8ec: mov dword ptr [0x7904a4], ecx */ W32((u32)(0x7904a4u), r_ecx);
    /* 006ae8f2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 006ae8f5: mov dword ptr [0x7904a8], edx */ W32((u32)(0x7904a8u), r_edx);
    /* 006ae8fb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006ae8fe: mov dword ptr [0x7904ac], eax */ W32((u32)(0x7904acu), r_eax);
    /* 006ae903: mov dword ptr [ebp - 0x50], 0x437970 */ W32((u32)(r_ebp+0xffffffb0u), 0x437970u);
    /* 006ae90a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006ae911: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006ae918: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006ae91f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006ae922: mov dword ptr [0x7904b0], ecx */ W32((u32)(0x7904b0u), r_ecx);
    /* 006ae928: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006ae92b: mov dword ptr [0x7904b4], edx */ W32((u32)(0x7904b4u), r_edx);
    /* 006ae931: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 006ae934: mov dword ptr [0x7904b8], eax */ W32((u32)(0x7904b8u), r_eax);
    /* 006ae939: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 006ae93c: mov dword ptr [0x7904bc], ecx */ W32((u32)(0x7904bcu), r_ecx);
    /* 006ae942: mov dword ptr [ebp - 0x60], 0x4314a0 */ W32((u32)(r_ebp+0xffffffa0u), 0x4314a0u);
    /* 006ae949: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006ae950: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 006ae957: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006ae95e: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 006ae961: mov dword ptr [0x7904c0], edx */ W32((u32)(0x7904c0u), r_edx);
    /* 006ae967: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 006ae96a: mov dword ptr [0x7904c4], eax */ W32((u32)(0x7904c4u), r_eax);
    /* 006ae96f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 006ae972: mov dword ptr [0x7904c8], ecx */ W32((u32)(0x7904c8u), r_ecx);
    /* 006ae978: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 006ae97b: mov dword ptr [0x7904cc], edx */ W32((u32)(0x7904ccu), r_edx);
    /* 006ae981: mov dword ptr [ebp - 0x70], 0x4379b0 */ W32((u32)(r_ebp+0xffffff90u), 0x4379b0u);
    /* 006ae988: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006ae98f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 006ae996: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006ae99d: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 006ae9a0: mov dword ptr [0x7904d0], eax */ W32((u32)(0x7904d0u), r_eax);
    /* 006ae9a5: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 006ae9a8: mov dword ptr [0x7904d4], ecx */ W32((u32)(0x7904d4u), r_ecx);
    /* 006ae9ae: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 006ae9b1: mov dword ptr [0x7904d8], edx */ W32((u32)(0x7904d8u), r_edx);
    /* 006ae9b7: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006ae9ba: mov dword ptr [0x7904dc], eax */ W32((u32)(0x7904dcu), r_eax);
    /* 006ae9bf: mov dword ptr [ebp - 0x80], 0x431360 */ W32((u32)(r_ebp+0xffffff80u), 0x431360u);
    /* 006ae9c6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 006ae9cd: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 006ae9d4: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 006ae9db: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 006ae9de: mov dword ptr [0x7904e0], ecx */ W32((u32)(0x7904e0u), r_ecx);
    /* 006ae9e4: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 006ae9e7: mov dword ptr [0x7904e4], edx */ W32((u32)(0x7904e4u), r_edx);
    /* 006ae9ed: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 006ae9f0: mov dword ptr [0x7904e8], eax */ W32((u32)(0x7904e8u), r_eax);
    /* 006ae9f5: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006ae9f8: mov dword ptr [0x7904ec], ecx */ W32((u32)(0x7904ecu), r_ecx);
    /* 006ae9fe: mov dword ptr [ebp - 0x90], 0x437b50 */ W32((u32)(r_ebp+0xffffff70u), 0x437b50u);
    /* 006aea08: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 006aea12: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006aea1c: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 006aea26: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 006aea2c: mov dword ptr [0x7904f0], edx */ W32((u32)(0x7904f0u), r_edx);
    /* 006aea32: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 006aea38: mov dword ptr [0x7904f4], eax */ W32((u32)(0x7904f4u), r_eax);
    /* 006aea3d: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 006aea43: mov dword ptr [0x7904f8], ecx */ W32((u32)(0x7904f8u), r_ecx);
    /* 006aea49: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 006aea4f: mov dword ptr [0x7904fc], edx */ W32((u32)(0x7904fcu), r_edx);
    /* 006aea55: mov dword ptr [ebp - 0xa0], 0x4315e0 */ W32((u32)(r_ebp+0xffffff60u), 0x4315e0u);
    /* 006aea5f: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 006aea69: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
    /* 006aea73: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 006aea7d: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 006aea83: mov dword ptr [0x790500], eax */ W32((u32)(0x790500u), r_eax);
    /* 006aea88: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 006aea8e: mov dword ptr [0x790504], ecx */ W32((u32)(0x790504u), r_ecx);
    /* 006aea94: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 006aea9a: mov dword ptr [0x790508], edx */ W32((u32)(0x790508u), r_edx);
    /* 006aeaa0: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 006aeaa6: mov dword ptr [0x79050c], eax */ W32((u32)(0x79050cu), r_eax);
    /* 006aeaab: mov dword ptr [ebp - 0xb0], 0x4319d0 */ W32((u32)(r_ebp+0xffffff50u), 0x4319d0u);
    /* 006aeab5: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 006aeabf: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
    /* 006aeac9: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 006aead3: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 006aead9: mov dword ptr [0x790510], ecx */ W32((u32)(0x790510u), r_ecx);
    /* 006aeadf: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 006aeae5: mov dword ptr [0x790514], edx */ W32((u32)(0x790514u), r_edx);
    /* 006aeaeb: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 006aeaf1: mov dword ptr [0x790518], eax */ W32((u32)(0x790518u), r_eax);
    /* 006aeaf6: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 006aeafc: mov dword ptr [0x79051c], ecx */ W32((u32)(0x79051cu), r_ecx);
    /* 006aeb02: mov dword ptr [ebp - 0xc0], 0x431630 */ W32((u32)(r_ebp+0xffffff40u), 0x431630u);
    /* 006aeb0c: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
    /* 006aeb16: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 006aeb20: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 006aeb2a: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 006aeb30: mov dword ptr [0x790520], edx */ W32((u32)(0x790520u), r_edx);
    /* 006aeb36: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 006aeb3c: mov dword ptr [0x790524], eax */ W32((u32)(0x790524u), r_eax);
    /* 006aeb41: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 006aeb47: mov dword ptr [0x790528], ecx */ W32((u32)(0x790528u), r_ecx);
    /* 006aeb4d: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 006aeb53: mov dword ptr [0x79052c], edx */ W32((u32)(0x79052cu), r_edx);
    /* 006aeb59: mov dword ptr [ebp - 0xd0], 0x431a30 */ W32((u32)(r_ebp+0xffffff30u), 0x431a30u);
    /* 006aeb63: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 006aeb6d: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 006aeb77: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 006aeb81: mov eax, dword ptr [ebp - 0xd0] */ r_eax = R32((u32)(r_ebp+0xffffff30u));
    /* 006aeb87: mov dword ptr [0x790530], eax */ W32((u32)(0x790530u), r_eax);
    /* 006aeb8c: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006aeb92: mov dword ptr [0x790534], ecx */ W32((u32)(0x790534u), r_ecx);
    /* 006aeb98: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 006aeb9e: mov dword ptr [0x790538], edx */ W32((u32)(0x790538u), r_edx);
    /* 006aeba4: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 006aebaa: mov dword ptr [0x79053c], eax */ W32((u32)(0x79053cu), r_eax);
    /* 006aebaf: mov dword ptr [ebp - 0xe0], 0x4316d0 */ W32((u32)(r_ebp+0xffffff20u), 0x4316d0u);
    /* 006aebb9: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 006aebc3: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 006aebcd: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
    /* 006aebd7: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 006aebdd: mov dword ptr [0x790540], ecx */ W32((u32)(0x790540u), r_ecx);
    /* 006aebe3: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 006aebe9: mov dword ptr [0x790544], edx */ W32((u32)(0x790544u), r_edx);
    /* 006aebef: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 006aebf5: mov dword ptr [0x790548], eax */ W32((u32)(0x790548u), r_eax);
    /* 006aebfa: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 006aec00: mov dword ptr [0x79054c], ecx */ W32((u32)(0x79054cu), r_ecx);
    /* 006aec06: mov dword ptr [ebp - 0xf0], 0x431a90 */ W32((u32)(r_ebp+0xffffff10u), 0x431a90u);
    /* 006aec10: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
    /* 006aec1a: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
    /* 006aec24: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
    /* 006aec2e: mov edx, dword ptr [ebp - 0xf0] */ r_edx = R32((u32)(r_ebp+0xffffff10u));
    /* 006aec34: mov dword ptr [0x790550], edx */ W32((u32)(0x790550u), r_edx);
    /* 006aec3a: mov eax, dword ptr [ebp - 0xec] */ r_eax = R32((u32)(r_ebp+0xffffff14u));
    /* 006aec40: mov dword ptr [0x790554], eax */ W32((u32)(0x790554u), r_eax);
    /* 006aec45: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 006aec4b: mov dword ptr [0x790558], ecx */ W32((u32)(0x790558u), r_ecx);
    /* 006aec51: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 006aec57: mov dword ptr [0x79055c], edx */ W32((u32)(0x79055cu), r_edx);
    /* 006aec5d: mov dword ptr [ebp - 0x100], 0x431680 */ W32((u32)(r_ebp+0xffffff00u), 0x431680u);
    /* 006aec67: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
    /* 006aec71: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
    /* 006aec7b: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 006aec85: mov eax, dword ptr [ebp - 0x100] */ r_eax = R32((u32)(r_ebp+0xffffff00u));
    /* 006aec8b: mov dword ptr [0x790560], eax */ W32((u32)(0x790560u), r_eax);
    /* 006aec90: mov ecx, dword ptr [ebp - 0xfc] */ r_ecx = R32((u32)(r_ebp+0xffffff04u));
    /* 006aec96: mov dword ptr [0x790564], ecx */ W32((u32)(0x790564u), r_ecx);
    /* 006aec9c: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 006aeca2: mov dword ptr [0x790568], edx */ W32((u32)(0x790568u), r_edx);
    /* 006aeca8: mov eax, dword ptr [ebp - 0xf4] */ r_eax = R32((u32)(r_ebp+0xffffff0cu));
    /* 006aecae: mov dword ptr [0x79056c], eax */ W32((u32)(0x79056cu), r_eax);
    /* 006aecb3: mov dword ptr [ebp - 0x110], 0x431af0 */ W32((u32)(r_ebp+0xfffffef0u), 0x431af0u);
    /* 006aecbd: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
    /* 006aecc7: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
    /* 006aecd1: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
    /* 006aecdb: mov ecx, dword ptr [ebp - 0x110] */ r_ecx = R32((u32)(r_ebp+0xfffffef0u));
    /* 006aece1: mov dword ptr [0x790570], ecx */ W32((u32)(0x790570u), r_ecx);
    /* 006aece7: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 006aeced: mov dword ptr [0x790574], edx */ W32((u32)(0x790574u), r_edx);
    /* 006aecf3: mov eax, dword ptr [ebp - 0x108] */ r_eax = R32((u32)(r_ebp+0xfffffef8u));
    /* 006aecf9: mov dword ptr [0x790578], eax */ W32((u32)(0x790578u), r_eax);
    /* 006aecfe: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 006aed04: mov dword ptr [0x79057c], ecx */ W32((u32)(0x79057cu), r_ecx);
    /* 006aed0a: mov dword ptr [ebp - 0x120], 0x4314f0 */ W32((u32)(r_ebp+0xfffffee0u), 0x4314f0u);
    /* 006aed14: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
    /* 006aed1e: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
    /* 006aed28: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
    /* 006aed32: mov edx, dword ptr [ebp - 0x120] */ r_edx = R32((u32)(r_ebp+0xfffffee0u));
    /* 006aed38: mov dword ptr [0x790580], edx */ W32((u32)(0x790580u), r_edx);
    /* 006aed3e: mov eax, dword ptr [ebp - 0x11c] */ r_eax = R32((u32)(r_ebp+0xfffffee4u));
    /* 006aed44: mov dword ptr [0x790584], eax */ W32((u32)(0x790584u), r_eax);
    /* 006aed49: mov ecx, dword ptr [ebp - 0x118] */ r_ecx = R32((u32)(r_ebp+0xfffffee8u));
    /* 006aed4f: mov dword ptr [0x790588], ecx */ W32((u32)(0x790588u), r_ecx);
    /* 006aed55: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 006aed5b: mov dword ptr [0x79058c], edx */ W32((u32)(0x79058cu), r_edx);
    /* 006aed61: mov dword ptr [ebp - 0x130], 0x431b50 */ W32((u32)(r_ebp+0xfffffed0u), 0x431b50u);
    /* 006aed6b: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
    /* 006aed75: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
    /* 006aed7f: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
    /* 006aed89: mov eax, dword ptr [ebp - 0x130] */ r_eax = R32((u32)(r_ebp+0xfffffed0u));
    /* 006aed8f: mov dword ptr [0x790590], eax */ W32((u32)(0x790590u), r_eax);
    /* 006aed94: mov ecx, dword ptr [ebp - 0x12c] */ r_ecx = R32((u32)(r_ebp+0xfffffed4u));
    /* 006aed9a: mov dword ptr [0x790594], ecx */ W32((u32)(0x790594u), r_ecx);
    /* 006aeda0: mov edx, dword ptr [ebp - 0x128] */ r_edx = R32((u32)(r_ebp+0xfffffed8u));
    /* 006aeda6: mov dword ptr [0x790598], edx */ W32((u32)(0x790598u), r_edx);
    /* 006aedac: mov eax, dword ptr [ebp - 0x124] */ r_eax = R32((u32)(r_ebp+0xfffffedcu));
    /* 006aedb2: mov dword ptr [0x79059c], eax */ W32((u32)(0x79059cu), r_eax);
    /* 006aedb7: mov dword ptr [ebp - 0x140], 0x431540 */ W32((u32)(r_ebp+0xfffffec0u), 0x431540u);
    /* 006aedc1: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
    /* 006aedcb: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
    /* 006aedd5: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
    /* 006aeddf: mov ecx, dword ptr [ebp - 0x140] */ r_ecx = R32((u32)(r_ebp+0xfffffec0u));
    /* 006aede5: mov dword ptr [0x7905a0], ecx */ W32((u32)(0x7905a0u), r_ecx);
    /* 006aedeb: mov edx, dword ptr [ebp - 0x13c] */ r_edx = R32((u32)(r_ebp+0xfffffec4u));
    /* 006aedf1: mov dword ptr [0x7905a4], edx */ W32((u32)(0x7905a4u), r_edx);
    /* 006aedf7: mov eax, dword ptr [ebp - 0x138] */ r_eax = R32((u32)(r_ebp+0xfffffec8u));
    /* 006aedfd: mov dword ptr [0x7905a8], eax */ W32((u32)(0x7905a8u), r_eax);
    /* 006aee02: mov ecx, dword ptr [ebp - 0x134] */ r_ecx = R32((u32)(r_ebp+0xfffffeccu));
    /* 006aee08: mov dword ptr [0x7905ac], ecx */ W32((u32)(0x7905acu), r_ecx);
    /* 006aee0e: mov dword ptr [ebp - 0x150], 0x4318b0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x4318b0u);
    /* 006aee18: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
    /* 006aee22: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
    /* 006aee2c: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
    /* 006aee36: mov edx, dword ptr [ebp - 0x150] */ r_edx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 006aee3c: mov dword ptr [0x7905b0], edx */ W32((u32)(0x7905b0u), r_edx);
    /* 006aee42: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 006aee48: mov dword ptr [0x7905b4], eax */ W32((u32)(0x7905b4u), r_eax);
    /* 006aee4d: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 006aee53: mov dword ptr [0x7905b8], ecx */ W32((u32)(0x7905b8u), r_ecx);
    /* 006aee59: mov edx, dword ptr [ebp - 0x144] */ r_edx = R32((u32)(r_ebp+0xfffffebcu));
    /* 006aee5f: mov dword ptr [0x7905bc], edx */ W32((u32)(0x7905bcu), r_edx);
    /* 006aee65: mov dword ptr [ebp - 0x160], 0x431400 */ W32((u32)(r_ebp+0xfffffea0u), 0x431400u);
    /* 006aee6f: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
    /* 006aee79: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
    /* 006aee83: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
    /* 006aee8d: mov eax, dword ptr [ebp - 0x160] */ r_eax = R32((u32)(r_ebp+0xfffffea0u));
    /* 006aee93: mov dword ptr [0x7905c0], eax */ W32((u32)(0x7905c0u), r_eax);
    /* 006aee98: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 006aee9e: mov dword ptr [0x7905c4], ecx */ W32((u32)(0x7905c4u), r_ecx);
    /* 006aeea4: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 006aeeaa: mov dword ptr [0x7905c8], edx */ W32((u32)(0x7905c8u), r_edx);
    /* 006aeeb0: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 006aeeb6: mov dword ptr [0x7905cc], eax */ W32((u32)(0x7905ccu), r_eax);
    /* 006aeebb: mov dword ptr [ebp - 0x170], 0x431910 */ W32((u32)(r_ebp+0xfffffe90u), 0x431910u);
    /* 006aeec5: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
    /* 006aeecf: mov dword ptr [ebp - 0x168], 0 */ W32((u32)(r_ebp+0xfffffe98u), 0x0u);
    /* 006aeed9: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
    /* 006aeee3: mov ecx, dword ptr [ebp - 0x170] */ r_ecx = R32((u32)(r_ebp+0xfffffe90u));
    /* 006aeee9: mov dword ptr [0x7905d0], ecx */ W32((u32)(0x7905d0u), r_ecx);
    /* 006aeeef: mov edx, dword ptr [ebp - 0x16c] */ r_edx = R32((u32)(r_ebp+0xfffffe94u));
    /* 006aeef5: mov dword ptr [0x7905d4], edx */ W32((u32)(0x7905d4u), r_edx);
    /* 006aeefb: mov eax, dword ptr [ebp - 0x168] */ r_eax = R32((u32)(r_ebp+0xfffffe98u));
    /* 006aef01: mov dword ptr [0x7905d8], eax */ W32((u32)(0x7905d8u), r_eax);
    /* 006aef06: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 006aef0c: mov dword ptr [0x7905dc], ecx */ W32((u32)(0x7905dcu), r_ecx);
    /* 006aef12: mov dword ptr [ebp - 0x180], 0x431450 */ W32((u32)(r_ebp+0xfffffe80u), 0x431450u);
    /* 006aef1c: mov dword ptr [ebp - 0x17c], 0 */ W32((u32)(r_ebp+0xfffffe84u), 0x0u);
    /* 006aef26: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
    /* 006aef30: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
    /* 006aef3a: mov edx, dword ptr [ebp - 0x180] */ r_edx = R32((u32)(r_ebp+0xfffffe80u));
    /* 006aef40: mov dword ptr [0x7905e0], edx */ W32((u32)(0x7905e0u), r_edx);
    /* 006aef46: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 006aef4c: mov dword ptr [0x7905e4], eax */ W32((u32)(0x7905e4u), r_eax);
    /* 006aef51: mov ecx, dword ptr [ebp - 0x178] */ r_ecx = R32((u32)(r_ebp+0xfffffe88u));
    /* 006aef57: mov dword ptr [0x7905e8], ecx */ W32((u32)(0x7905e8u), r_ecx);
    /* 006aef5d: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 006aef63: mov dword ptr [0x7905ec], edx */ W32((u32)(0x7905ecu), r_edx);
    /* 006aef69: mov dword ptr [ebp - 0x190], 0x431970 */ W32((u32)(r_ebp+0xfffffe70u), 0x431970u);
    /* 006aef73: mov dword ptr [ebp - 0x18c], 0 */ W32((u32)(r_ebp+0xfffffe74u), 0x0u);
    /* 006aef7d: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 006aef87: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
    /* 006aef91: mov eax, dword ptr [ebp - 0x190] */ r_eax = R32((u32)(r_ebp+0xfffffe70u));
    /* 006aef97: mov dword ptr [0x7905f0], eax */ W32((u32)(0x7905f0u), r_eax);
    /* 006aef9c: mov ecx, dword ptr [ebp - 0x18c] */ r_ecx = R32((u32)(r_ebp+0xfffffe74u));
    /* 006aefa2: mov dword ptr [0x7905f4], ecx */ W32((u32)(0x7905f4u), r_ecx);
    /* 006aefa8: mov edx, dword ptr [ebp - 0x188] */ r_edx = R32((u32)(r_ebp+0xfffffe78u));
    /* 006aefae: mov dword ptr [0x7905f8], edx */ W32((u32)(0x7905f8u), r_edx);
    /* 006aefb4: mov eax, dword ptr [ebp - 0x184] */ r_eax = R32((u32)(r_ebp+0xfffffe7cu));
    /* 006aefba: mov dword ptr [0x7905fc], eax */ W32((u32)(0x7905fcu), r_eax);
    /* 006aefbf: mov dword ptr [ebp - 0x1a0], 0x431720 */ W32((u32)(r_ebp+0xfffffe60u), 0x431720u);
    /* 006aefc9: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
    /* 006aefd3: mov dword ptr [ebp - 0x198], 0 */ W32((u32)(r_ebp+0xfffffe68u), 0x0u);
    /* 006aefdd: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 006aefe7: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006aefed: mov dword ptr [0x790600], ecx */ W32((u32)(0x790600u), r_ecx);
    /* 006aeff3: mov edx, dword ptr [ebp - 0x19c] */ r_edx = R32((u32)(r_ebp+0xfffffe64u));
    /* 006aeff9: mov dword ptr [0x790604], edx */ W32((u32)(0x790604u), r_edx);
    /* 006aefff: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
    /* 006af005: mov dword ptr [0x790608], eax */ W32((u32)(0x790608u), r_eax);
    /* 006af00a: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 006af010: mov dword ptr [0x79060c], ecx */ W32((u32)(0x79060cu), r_ecx);
    /* 006af016: mov dword ptr [ebp - 0x1b0], 0x4383c0 */ W32((u32)(r_ebp+0xfffffe50u), 0x4383c0u);
    /* 006af020: mov dword ptr [ebp - 0x1ac], 0 */ W32((u32)(r_ebp+0xfffffe54u), 0x0u);
    /* 006af02a: mov dword ptr [ebp - 0x1a8], 0 */ W32((u32)(r_ebp+0xfffffe58u), 0x0u);
    /* 006af034: mov dword ptr [ebp - 0x1a4], 0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x0u);
    /* 006af03e: mov edx, dword ptr [ebp - 0x1b0] */ r_edx = R32((u32)(r_ebp+0xfffffe50u));
    /* 006af044: mov dword ptr [0x790610], edx */ W32((u32)(0x790610u), r_edx);
    /* 006af04a: mov eax, dword ptr [ebp - 0x1ac] */ r_eax = R32((u32)(r_ebp+0xfffffe54u));
    /* 006af050: mov dword ptr [0x790614], eax */ W32((u32)(0x790614u), r_eax);
    /* 006af055: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006af05b: mov dword ptr [0x790618], ecx */ W32((u32)(0x790618u), r_ecx);
    /* 006af061: mov edx, dword ptr [ebp - 0x1a4] */ r_edx = R32((u32)(r_ebp+0xfffffe5cu));
    /* 006af067: mov dword ptr [0x79061c], edx */ W32((u32)(0x79061cu), r_edx);
    /* 006af06d: mov dword ptr [ebp - 0x1c0], 0x4313b0 */ W32((u32)(r_ebp+0xfffffe40u), 0x4313b0u);
    /* 006af077: mov dword ptr [ebp - 0x1bc], 0 */ W32((u32)(r_ebp+0xfffffe44u), 0x0u);
    /* 006af081: mov dword ptr [ebp - 0x1b8], 0 */ W32((u32)(r_ebp+0xfffffe48u), 0x0u);
    /* 006af08b: mov dword ptr [ebp - 0x1b4], 0 */ W32((u32)(r_ebp+0xfffffe4cu), 0x0u);
    /* 006af095: mov eax, dword ptr [ebp - 0x1c0] */ r_eax = R32((u32)(r_ebp+0xfffffe40u));
    /* 006af09b: mov dword ptr [0x790620], eax */ W32((u32)(0x790620u), r_eax);
    /* 006af0a0: mov ecx, dword ptr [ebp - 0x1bc] */ r_ecx = R32((u32)(r_ebp+0xfffffe44u));
    /* 006af0a6: mov dword ptr [0x790624], ecx */ W32((u32)(0x790624u), r_ecx);
    /* 006af0ac: mov edx, dword ptr [ebp - 0x1b8] */ r_edx = R32((u32)(r_ebp+0xfffffe48u));
    /* 006af0b2: mov dword ptr [0x790628], edx */ W32((u32)(0x790628u), r_edx);
    /* 006af0b8: mov eax, dword ptr [ebp - 0x1b4] */ r_eax = R32((u32)(r_ebp+0xfffffe4cu));
    /* 006af0be: mov dword ptr [0x79062c], eax */ W32((u32)(0x79062cu), r_eax);
    /* 006af0c3: mov dword ptr [ebp - 0x1d0], 0x437620 */ W32((u32)(r_ebp+0xfffffe30u), 0x437620u);
    /* 006af0cd: mov dword ptr [ebp - 0x1cc], 0 */ W32((u32)(r_ebp+0xfffffe34u), 0x0u);
    /* 006af0d7: mov dword ptr [ebp - 0x1c8], 0 */ W32((u32)(r_ebp+0xfffffe38u), 0x0u);
    /* 006af0e1: mov dword ptr [ebp - 0x1c4], 0 */ W32((u32)(r_ebp+0xfffffe3cu), 0x0u);
    /* 006af0eb: mov ecx, dword ptr [ebp - 0x1d0] */ r_ecx = R32((u32)(r_ebp+0xfffffe30u));
    /* 006af0f1: mov dword ptr [0x790630], ecx */ W32((u32)(0x790630u), r_ecx);
    /* 006af0f7: mov edx, dword ptr [ebp - 0x1cc] */ r_edx = R32((u32)(r_ebp+0xfffffe34u));
    /* 006af0fd: mov dword ptr [0x790634], edx */ W32((u32)(0x790634u), r_edx);
    /* 006af103: mov eax, dword ptr [ebp - 0x1c8] */ r_eax = R32((u32)(r_ebp+0xfffffe38u));
    /* 006af109: mov dword ptr [0x790638], eax */ W32((u32)(0x790638u), r_eax);
    /* 006af10e: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 006af114: mov dword ptr [0x79063c], ecx */ W32((u32)(0x79063cu), r_ecx);
    /* 006af11a: mov dword ptr [ebp - 0x1e0], 0x431590 */ W32((u32)(r_ebp+0xfffffe20u), 0x431590u);
    /* 006af124: mov dword ptr [ebp - 0x1dc], 0 */ W32((u32)(r_ebp+0xfffffe24u), 0x0u);
    /* 006af12e: mov dword ptr [ebp - 0x1d8], 0 */ W32((u32)(r_ebp+0xfffffe28u), 0x0u);
    /* 006af138: mov dword ptr [ebp - 0x1d4], 0 */ W32((u32)(r_ebp+0xfffffe2cu), 0x0u);
    /* 006af142: mov edx, dword ptr [ebp - 0x1e0] */ r_edx = R32((u32)(r_ebp+0xfffffe20u));
    /* 006af148: mov dword ptr [0x790640], edx */ W32((u32)(0x790640u), r_edx);
    /* 006af14e: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 006af154: mov dword ptr [0x790644], eax */ W32((u32)(0x790644u), r_eax);
    /* 006af159: mov ecx, dword ptr [ebp - 0x1d8] */ r_ecx = R32((u32)(r_ebp+0xfffffe28u));
    /* 006af15f: mov dword ptr [0x790648], ecx */ W32((u32)(0x790648u), r_ecx);
    /* 006af165: mov edx, dword ptr [ebp - 0x1d4] */ r_edx = R32((u32)(r_ebp+0xfffffe2cu));
    /* 006af16b: mov dword ptr [0x79064c], edx */ W32((u32)(0x79064cu), r_edx);
    /* 006af171: mov dword ptr [ebp - 0x1f0], 0x437860 */ W32((u32)(r_ebp+0xfffffe10u), 0x437860u);
    /* 006af17b: mov dword ptr [ebp - 0x1ec], 0 */ W32((u32)(r_ebp+0xfffffe14u), 0x0u);
    /* 006af185: mov dword ptr [ebp - 0x1e8], 0 */ W32((u32)(r_ebp+0xfffffe18u), 0x0u);
    /* 006af18f: mov dword ptr [ebp - 0x1e4], 0 */ W32((u32)(r_ebp+0xfffffe1cu), 0x0u);
    /* 006af199: mov eax, dword ptr [ebp - 0x1f0] */ r_eax = R32((u32)(r_ebp+0xfffffe10u));
    /* 006af19f: mov dword ptr [0x790650], eax */ W32((u32)(0x790650u), r_eax);
    /* 006af1a4: mov ecx, dword ptr [ebp - 0x1ec] */ r_ecx = R32((u32)(r_ebp+0xfffffe14u));
    /* 006af1aa: mov dword ptr [0x790654], ecx */ W32((u32)(0x790654u), r_ecx);
    /* 006af1b0: mov edx, dword ptr [ebp - 0x1e8] */ r_edx = R32((u32)(r_ebp+0xfffffe18u));
    /* 006af1b6: mov dword ptr [0x790658], edx */ W32((u32)(0x790658u), r_edx);
    /* 006af1bc: mov eax, dword ptr [ebp - 0x1e4] */ r_eax = R32((u32)(r_ebp+0xfffffe1cu));
    /* 006af1c2: mov dword ptr [0x79065c], eax */ W32((u32)(0x79065cu), r_eax);
    /* 006af1c7: mov dword ptr [ebp - 0x200], 0x4317c0 */ W32((u32)(r_ebp+0xfffffe00u), 0x4317c0u);
    /* 006af1d1: mov dword ptr [ebp - 0x1fc], 0 */ W32((u32)(r_ebp+0xfffffe04u), 0x0u);
    /* 006af1db: mov dword ptr [ebp - 0x1f8], 0 */ W32((u32)(r_ebp+0xfffffe08u), 0x0u);
    /* 006af1e5: mov dword ptr [ebp - 0x1f4], 0 */ W32((u32)(r_ebp+0xfffffe0cu), 0x0u);
    /* 006af1ef: mov ecx, dword ptr [ebp - 0x200] */ r_ecx = R32((u32)(r_ebp+0xfffffe00u));
    /* 006af1f5: mov dword ptr [0x790660], ecx */ W32((u32)(0x790660u), r_ecx);
    /* 006af1fb: mov edx, dword ptr [ebp - 0x1fc] */ r_edx = R32((u32)(r_ebp+0xfffffe04u));
    /* 006af201: mov dword ptr [0x790664], edx */ W32((u32)(0x790664u), r_edx);
    /* 006af207: mov eax, dword ptr [ebp - 0x1f8] */ r_eax = R32((u32)(r_ebp+0xfffffe08u));
    /* 006af20d: mov dword ptr [0x790668], eax */ W32((u32)(0x790668u), r_eax);
    /* 006af212: mov ecx, dword ptr [ebp - 0x1f4] */ r_ecx = R32((u32)(r_ebp+0xfffffe0cu));
    /* 006af218: mov dword ptr [0x79066c], ecx */ W32((u32)(0x79066cu), r_ecx);
    /* 006af21e: mov dword ptr [ebp - 0x210], 0x438600 */ W32((u32)(r_ebp+0xfffffdf0u), 0x438600u);
    /* 006af228: mov dword ptr [ebp - 0x20c], 0 */ W32((u32)(r_ebp+0xfffffdf4u), 0x0u);
    /* 006af232: mov dword ptr [ebp - 0x208], 0 */ W32((u32)(r_ebp+0xfffffdf8u), 0x0u);
    /* 006af23c: mov dword ptr [ebp - 0x204], 0 */ W32((u32)(r_ebp+0xfffffdfcu), 0x0u);
    /* 006af246: mov edx, dword ptr [ebp - 0x210] */ r_edx = R32((u32)(r_ebp+0xfffffdf0u));
    /* 006af24c: mov dword ptr [0x790670], edx */ W32((u32)(0x790670u), r_edx);
    /* 006af252: mov eax, dword ptr [ebp - 0x20c] */ r_eax = R32((u32)(r_ebp+0xfffffdf4u));
    /* 006af258: mov dword ptr [0x790674], eax */ W32((u32)(0x790674u), r_eax);
    /* 006af25d: mov ecx, dword ptr [ebp - 0x208] */ r_ecx = R32((u32)(r_ebp+0xfffffdf8u));
    /* 006af263: mov dword ptr [0x790678], ecx */ W32((u32)(0x790678u), r_ecx);
    /* 006af269: mov edx, dword ptr [ebp - 0x204] */ r_edx = R32((u32)(r_ebp+0xfffffdfcu));
    /* 006af26f: mov dword ptr [0x79067c], edx */ W32((u32)(0x79067cu), r_edx);
    /* 006af275: mov dword ptr [ebp - 0x220], 0x431770 */ W32((u32)(r_ebp+0xfffffde0u), 0x431770u);
    /* 006af27f: mov dword ptr [ebp - 0x21c], 0 */ W32((u32)(r_ebp+0xfffffde4u), 0x0u);
    /* 006af289: mov dword ptr [ebp - 0x218], 0 */ W32((u32)(r_ebp+0xfffffde8u), 0x0u);
    /* 006af293: mov dword ptr [ebp - 0x214], 0 */ W32((u32)(r_ebp+0xfffffdecu), 0x0u);
    /* 006af29d: mov eax, dword ptr [ebp - 0x220] */ r_eax = R32((u32)(r_ebp+0xfffffde0u));
    /* 006af2a3: mov dword ptr [0x790680], eax */ W32((u32)(0x790680u), r_eax);
    /* 006af2a8: mov ecx, dword ptr [ebp - 0x21c] */ r_ecx = R32((u32)(r_ebp+0xfffffde4u));
    /* 006af2ae: mov dword ptr [0x790684], ecx */ W32((u32)(0x790684u), r_ecx);
    /* 006af2b4: mov edx, dword ptr [ebp - 0x218] */ r_edx = R32((u32)(r_ebp+0xfffffde8u));
    /* 006af2ba: mov dword ptr [0x790688], edx */ W32((u32)(0x790688u), r_edx);
    /* 006af2c0: mov eax, dword ptr [ebp - 0x214] */ r_eax = R32((u32)(r_ebp+0xfffffdecu));
    /* 006af2c6: mov dword ptr [0x79068c], eax */ W32((u32)(0x79068cu), r_eax);
    /* 006af2cb: mov dword ptr [ebp - 0x230], 0x438670 */ W32((u32)(r_ebp+0xfffffdd0u), 0x438670u);
    /* 006af2d5: mov dword ptr [ebp - 0x22c], 0 */ W32((u32)(r_ebp+0xfffffdd4u), 0x0u);
    /* 006af2df: mov dword ptr [ebp - 0x228], 0 */ W32((u32)(r_ebp+0xfffffdd8u), 0x0u);
    /* 006af2e9: mov dword ptr [ebp - 0x224], 0 */ W32((u32)(r_ebp+0xfffffddcu), 0x0u);
    /* 006af2f3: mov ecx, dword ptr [ebp - 0x230] */ r_ecx = R32((u32)(r_ebp+0xfffffdd0u));
    /* 006af2f9: mov dword ptr [0x790690], ecx */ W32((u32)(0x790690u), r_ecx);
    /* 006af2ff: mov edx, dword ptr [ebp - 0x22c] */ r_edx = R32((u32)(r_ebp+0xfffffdd4u));
    /* 006af305: mov dword ptr [0x790694], edx */ W32((u32)(0x790694u), r_edx);
    /* 006af30b: mov eax, dword ptr [ebp - 0x228] */ r_eax = R32((u32)(r_ebp+0xfffffdd8u));
    /* 006af311: mov dword ptr [0x790698], eax */ W32((u32)(0x790698u), r_eax);
    /* 006af316: mov ecx, dword ptr [ebp - 0x224] */ r_ecx = R32((u32)(r_ebp+0xfffffddcu));
    /* 006af31c: mov dword ptr [0x79069c], ecx */ W32((u32)(0x79069cu), r_ecx);
    /* 006af322: mov dword ptr [ebp - 0x240], 0x431810 */ W32((u32)(r_ebp+0xfffffdc0u), 0x431810u);
    /* 006af32c: mov dword ptr [ebp - 0x23c], 0 */ W32((u32)(r_ebp+0xfffffdc4u), 0x0u);
    /* 006af336: mov dword ptr [ebp - 0x238], 0 */ W32((u32)(r_ebp+0xfffffdc8u), 0x0u);
    /* 006af340: mov dword ptr [ebp - 0x234], 0 */ W32((u32)(r_ebp+0xfffffdccu), 0x0u);
    /* 006af34a: mov edx, dword ptr [ebp - 0x240] */ r_edx = R32((u32)(r_ebp+0xfffffdc0u));
    /* 006af350: mov dword ptr [0x7906a0], edx */ W32((u32)(0x7906a0u), r_edx);
    /* 006af356: mov eax, dword ptr [ebp - 0x23c] */ r_eax = R32((u32)(r_ebp+0xfffffdc4u));
    /* 006af35c: mov dword ptr [0x7906a4], eax */ W32((u32)(0x7906a4u), r_eax);
    /* 006af361: mov ecx, dword ptr [ebp - 0x238] */ r_ecx = R32((u32)(r_ebp+0xfffffdc8u));
    /* 006af367: mov dword ptr [0x7906a8], ecx */ W32((u32)(0x7906a8u), r_ecx);
    /* 006af36d: mov edx, dword ptr [ebp - 0x234] */ r_edx = R32((u32)(r_ebp+0xfffffdccu));
    /* 006af373: mov dword ptr [0x7906ac], edx */ W32((u32)(0x7906acu), r_edx);
    /* 006af379: mov dword ptr [ebp - 0x250], 0x438740 */ W32((u32)(r_ebp+0xfffffdb0u), 0x438740u);
    /* 006af383: mov dword ptr [ebp - 0x24c], 0 */ W32((u32)(r_ebp+0xfffffdb4u), 0x0u);
    /* 006af38d: mov dword ptr [ebp - 0x248], 0 */ W32((u32)(r_ebp+0xfffffdb8u), 0x0u);
    /* 006af397: mov dword ptr [ebp - 0x244], 0 */ W32((u32)(r_ebp+0xfffffdbcu), 0x0u);
    /* 006af3a1: mov eax, dword ptr [ebp - 0x250] */ r_eax = R32((u32)(r_ebp+0xfffffdb0u));
    /* 006af3a7: mov dword ptr [0x7906b0], eax */ W32((u32)(0x7906b0u), r_eax);
    /* 006af3ac: mov ecx, dword ptr [ebp - 0x24c] */ r_ecx = R32((u32)(r_ebp+0xfffffdb4u));
    /* 006af3b2: mov dword ptr [0x7906b4], ecx */ W32((u32)(0x7906b4u), r_ecx);
    /* 006af3b8: mov edx, dword ptr [ebp - 0x248] */ r_edx = R32((u32)(r_ebp+0xfffffdb8u));
    /* 006af3be: mov dword ptr [0x7906b8], edx */ W32((u32)(0x7906b8u), r_edx);
    /* 006af3c4: mov eax, dword ptr [ebp - 0x244] */ r_eax = R32((u32)(r_ebp+0xfffffdbcu));
    /* 006af3ca: mov dword ptr [0x7906bc], eax */ W32((u32)(0x7906bcu), r_eax);
    /* 006af3cf: mov dword ptr [ebp - 0x260], 0x431860 */ W32((u32)(r_ebp+0xfffffda0u), 0x431860u);
    /* 006af3d9: mov dword ptr [ebp - 0x25c], 0 */ W32((u32)(r_ebp+0xfffffda4u), 0x0u);
    /* 006af3e3: mov dword ptr [ebp - 0x258], 0 */ W32((u32)(r_ebp+0xfffffda8u), 0x0u);
    /* 006af3ed: mov dword ptr [ebp - 0x254], 0 */ W32((u32)(r_ebp+0xfffffdacu), 0x0u);
    /* 006af3f7: mov ecx, dword ptr [ebp - 0x260] */ r_ecx = R32((u32)(r_ebp+0xfffffda0u));
    /* 006af3fd: mov dword ptr [0x7906c0], ecx */ W32((u32)(0x7906c0u), r_ecx);
    /* 006af403: mov edx, dword ptr [ebp - 0x25c] */ r_edx = R32((u32)(r_ebp+0xfffffda4u));
    /* 006af409: mov dword ptr [0x7906c4], edx */ W32((u32)(0x7906c4u), r_edx);
    /* 006af40f: mov eax, dword ptr [ebp - 0x258] */ r_eax = R32((u32)(r_ebp+0xfffffda8u));
    /* 006af415: mov dword ptr [0x7906c8], eax */ W32((u32)(0x7906c8u), r_eax);
    /* 006af41a: mov ecx, dword ptr [ebp - 0x254] */ r_ecx = R32((u32)(r_ebp+0xfffffdacu));
    /* 006af420: mov dword ptr [0x7906cc], ecx */ W32((u32)(0x7906ccu), r_ecx);
    /* 006af426: mov esp, ebp */ r_esp = r_ebp;
    /* 006af428: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006af429: ret  */ FN_RET(0x006ae800); r_esp += 4; return;
}


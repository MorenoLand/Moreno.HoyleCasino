#include "protos.h"

void f_00465390(void) /* sub_465390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465390);
    /* 00465390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465391: mov ebp, esp */ r_ebp = r_esp;
    /* 00465393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465395: push 0x69f492 */ { u32 v = 0x69f492u; r_esp -= 4; W32(r_esp, v); }
    /* 0046539a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004653a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004653a1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004653a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004653a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004653ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004653ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004653af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004653b5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004653b8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004653bc: je 0x465464 */ if (fZ) goto L_00465464;
L_004653c2:; BB(0x004653c2);
    /* 004653c2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004653c5: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004653c8: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004653cb: je 0x465462 */ if (fZ) goto L_00465462;
L_004653d1:; BB(0x004653d1);
    /* 004653d1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004653d4: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004653d8: je 0x4653e2 */ if (fZ) goto L_004653e2;
L_004653da:; BB(0x004653da);
    /* 004653da: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004653dd: call 0x465480 */ r_esp -= 4; W32(r_esp, 0x4653e2u); f_00465480();
L_004653e2:; BB(0x004653e2);
    /* 004653e2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004653e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004653e8: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 004653eb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004653f2: jmp 0x4653fd */ goto L_004653fd;
L_004653f4:; BB(0x004653f4);
    /* 004653f4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004653f7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004653fa: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_004653fd:; BB(0x004653fd);
    /* 004653fd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465400: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00465403: cmp ecx, dword ptr [eax + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00465406: jge 0x465462 */ if ((fS==fO)) goto L_00465462;
L_00465408:; BB(0x00465408);
    /* 00465408: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0046540a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46540fu); f_00686d82();
    /* 0046540f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465412: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00465415: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046541c: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465420: je 0x46542f */ if (fZ) goto L_0046542f;
L_00465422:; BB(0x00465422);
    /* 00465422: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00465425: call 0x463c70 */ r_esp -= 4; W32(r_esp, 0x46542au); f_00463c70();
    /* 0046542a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0046542d: jmp 0x465436 */ goto L_00465436;
L_0046542f:; BB(0x0046542f);
    /* 0046542f: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_00465436:; BB(0x00465436);
    /* 00465436: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00465439: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0046543c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465443: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00465446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465447: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046544a: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x46544fu); f_0060c7d0();
    /* 0046544f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465451: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465454: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x465459u); f_0060ca40();
    /* 00465459: mov dword ptr [eax + 4], 0xc */ W32((u32)(r_eax+0x4u), 0xcu);
    /* 00465460: jmp 0x4653f4 */ goto L_004653f4;
L_00465462:; BB(0x00465462);
    /* 00465462: jmp 0x46546c */ goto L_0046546c;
L_00465464:; BB(0x00465464);
    /* 00465464: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465467: call 0x465480 */ r_esp -= 4; W32(r_esp, 0x46546cu); f_00465480();
L_0046546c:; BB(0x0046546c);
    /* 0046546c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046546f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00465476: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00465477: mov esp, ebp */ r_esp = r_ebp;
    /* 00465479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046547a: ret 4 */ FN_RET(0x00465390); r_esp += 8; return;
}

void f_00465480(void) /* sub_465480 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465480);
    /* 00465480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465481: mov ebp, esp */ r_ebp = r_esp;
    /* 00465483: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00465486: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00465489: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00465490: jmp 0x46549b */ goto L_0046549b;
L_00465492:; BB(0x00465492);
    /* 00465492: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00465495: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00465498: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0046549b:; BB(0x0046549b);
    /* 0046549b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046549e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004654a1: cmp edx, dword ptr [ecx + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004654a4: jge 0x4654bb */ if ((fS==fO)) goto L_004654bb;
L_004654a6:; BB(0x004654a6);
    /* 004654a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004654a8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004654ab: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4654b0u); f_0060ca40();
    /* 004654b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004654b1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004654b4: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x4654b9u); f_0060c890();
    /* 004654b9: jmp 0x465492 */ goto L_00465492;
L_004654bb:; BB(0x004654bb);
    /* 004654bb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004654be: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 004654c5: mov esp, ebp */ r_esp = r_ebp;
    /* 004654c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004654c8: ret  */ FN_RET(0x00465480); r_esp += 4; return;
}

void f_004654d0(void) /* sub_4654D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004654d0);
    /* 004654d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004654d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004654d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004654d6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004654d9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004654df: call 0x47fae0 */ r_esp -= 4; W32(r_esp, 0x4654e4u); f_0047fae0();
    /* 004654e4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004654eb: jmp 0x4654f6 */ goto L_004654f6;
L_004654ed:; BB(0x004654ed);
    /* 004654ed: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004654f0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004654f3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004654f6:; BB(0x004654f6);
    /* 004654f6: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004654fa: jge 0x465577 */ if ((fS==fO)) goto L_00465577;
L_004654fc:; BB(0x004654fc);
    /* 004654fc: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00465503: jmp 0x46550e */ goto L_0046550e;
L_00465505:; BB(0x00465505);
    /* 00465505: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00465508: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0046550b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0046550e:; BB(0x0046550e);
    /* 0046550e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00465511: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x465516u); f_0060c9a0();
    /* 00465516: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00465519: jge 0x465572 */ if ((fS==fO)) goto L_00465572;
L_0046551b:; BB(0x0046551b);
    /* 0046551b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046551e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046551f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00465522: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x465527u); f_0060ca40();
    /* 00465527: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0046552a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046552d: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x465532u); f_0060c9a0();
    /* 00465532: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00465535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465536: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x46553bu); f_0062fbf0();
    /* 0046553b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046553e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00465541: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00465544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465545: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00465548: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x46554du); f_0060ca40();
    /* 0046554d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00465550: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00465553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465554: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00465557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465558: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046555b: call 0x60ca70 */ r_esp -= 4; W32(r_esp, 0x465560u); f_0060ca70();
    /* 00465560: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00465563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465564: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00465567: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465568: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046556b: call 0x60ca70 */ r_esp -= 4; W32(r_esp, 0x465570u); f_0060ca70();
    /* 00465570: jmp 0x465505 */ goto L_00465505;
L_00465572:; BB(0x00465572);
    /* 00465572: jmp 0x4654ed */ goto L_004654ed;
L_00465577:; BB(0x00465577);
    /* 00465577: mov esp, ebp */ r_esp = r_ebp;
    /* 00465579: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046557a: ret  */ FN_RET(0x004654d0); r_esp += 4; return;
}

void f_00465650(void) /* sub_465650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465650);
    /* 00465650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465651: mov ebp, esp */ r_ebp = r_esp;
    /* 00465653: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00465656: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00465659: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00465660: jmp 0x46566b */ goto L_0046566b;
L_00465662:; BB(0x00465662);
    /* 00465662: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00465665: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00465668: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0046566b:; BB(0x0046566b);
    /* 0046566b: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046566f: jge 0x465728 */ if ((fS==fO)) goto L_00465728;
L_00465675:; BB(0x00465675);
    /* 00465675: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0046567c: jmp 0x465687 */ goto L_00465687;
L_0046567e:; BB(0x0046567e);
    /* 0046567e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00465681: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00465684: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00465687:; BB(0x00465687);
    /* 00465687: cmp dword ptr [ebp - 0xc], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046568b: jge 0x465723 */ if ((fS==fO)) goto L_00465723;
L_00465691:; BB(0x00465691);
    /* 00465691: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00465694: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00465697: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0046569a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046569b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046569e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x4656a3u); f_0060ca40();
    /* 004656a3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004656a6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004656a9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004656ac: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004656af: jle 0x4656bd */ if ((fZ||fS!=fO)) goto L_004656bd;
L_004656b1:; BB(0x004656b1);
    /* 004656b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004656b4: mov dword ptr [ecx + 4], 0xa */ W32((u32)(r_ecx+0x4u), 0xau);
    /* 004656bb: jmp 0x4656c9 */ goto L_004656c9;
L_004656bd:; BB(0x004656bd);
    /* 004656bd: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004656c0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004656c3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004656c6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
L_004656c9:; BB(0x004656c9);
    /* 004656c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004656cc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004656cf: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 004656d2: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004656d6: jne 0x46570c */ if (!fZ) goto L_0046570c;
L_004656d8:; BB(0x004656d8);
    /* 004656d8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004656db: mov dword ptr [eax + 4], 0xb */ W32((u32)(r_eax+0x4u), 0xbu);
    /* 004656e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004656e8: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4656edu); f_0047ce60();
    /* 004656ed: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004656f0: je 0x46570c */ if (fZ) goto L_0046570c;
L_004656f2:; BB(0x004656f2);
    /* 004656f2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004656f8: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4656fdu); f_0047ce60();
    /* 004656fd: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465700: je 0x46570c */ if (fZ) goto L_0046570c;
L_00465702:; BB(0x00465702);
    /* 00465702: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00465705: mov dword ptr [ecx + 0xc], 0xd */ W32((u32)(r_ecx+0xcu), 0xdu);
L_0046570c:; BB(0x0046570c);
    /* 0046570c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046570f: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00465712: add edx, dword ptr [ebp - 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00465715: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465716: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00465719: call 0x463e30 */ r_esp -= 4; W32(r_esp, 0x46571eu); f_00463e30();
    /* 0046571e: jmp 0x46567e */ goto L_0046567e;
L_00465723:; BB(0x00465723);
    /* 00465723: jmp 0x465662 */ goto L_00465662;
L_00465728:; BB(0x00465728);
    /* 00465728: mov esp, ebp */ r_esp = r_ebp;
    /* 0046572a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046572b: ret  */ FN_RET(0x00465650); r_esp += 4; return;
}

void f_00465a40(void) /* sub_465A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465a40);
    /* 00465a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00465a43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465a45: push 0x69f4f4 */ { u32 v = 0x69f4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00465a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465a51: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00465a54: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00465a59: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00465a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465a5c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00465a5f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00465a65: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00465a68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a6a: push 0x421 */ { u32 v = 0x421u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a6f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465a72: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x465a77u); f_005f83d0();
    /* 00465a77: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a7b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465a7e: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x465a83u); f_005f7340();
    /* 00465a83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a85: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465a88: call 0x518ac0 */ r_esp -= 4; W32(r_esp, 0x465a8du); f_00518ac0();
    /* 00465a8d: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a92: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x465a97u); f_00686d82();
    /* 00465a97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465a9a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00465a9d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00465aa4: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465aa8: je 0x465abb */ if (fZ) goto L_00465abb;
L_00465aaa:; BB(0x00465aaa);
    /* 00465aaa: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465aad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465aae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00465ab1: call 0x466fb0 */ r_esp -= 4; W32(r_esp, 0x465ab6u); f_00466fb0();
    /* 00465ab6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00465ab9: jmp 0x465ac2 */ goto L_00465ac2;
L_00465abb:; BB(0x00465abb);
    /* 00465abb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00465ac2:; BB(0x00465ac2);
    /* 00465ac2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00465ac5: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00465ac8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465acf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465ad2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00465ad5: mov dword ptr [edx + 0x1e0], eax */ W32((u32)(r_edx+0x1e0u), r_eax);
    /* 00465adb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465ade: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00465ae4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465ae7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00465aea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465aec: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00465aee: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00465af0: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00465af2: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00465af7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465afa: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00465b00: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x465b05u); f_005eae80();
    /* 00465b05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465b07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465b09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465b0b: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00465b0d: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00465b0f: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00465b11: push 0x6bace8 */ { u32 v = 0x6bace8u; r_esp -= 4; W32(r_esp, v); }
    /* 00465b16: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x465b1bu); f_00630f40();
    /* 00465b1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465b1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465b1f: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465b22: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00465b28: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465b2b: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00465b31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00465b33: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00465b39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465b3bu); call_ind(t); }
    /* 00465b3b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00465b3d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465b40: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00465b46: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x465b4bu); f_006026f0();
    /* 00465b4b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00465b4d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465b50: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 00465b56: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x465b5bu); f_00602740();
    /* 00465b5b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465b5e: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00465b64: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465b67: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00465b6d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00465b6f: mov ecx, eax */ r_ecx = r_eax;
    /* 00465b71: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00465b77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465b79u); call_ind(t); }
    /* 00465b79: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465b7e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x465b83u); f_00686d82();
    /* 00465b83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465b86: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00465b89: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00465b90: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465b94: je 0x465ba3 */ if (fZ) goto L_00465ba3;
L_00465b96:; BB(0x00465b96);
    /* 00465b96: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465b99: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x465b9eu); f_005ec5a0();
    /* 00465b9e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00465ba1: jmp 0x465baa */ goto L_00465baa;
L_00465ba3:; BB(0x00465ba3);
    /* 00465ba3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00465baa:; BB(0x00465baa);
    /* 00465baa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00465bad: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00465bb0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465bb7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465bba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00465bbd: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
    /* 00465bc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465bc4: mov ecx, esp */ r_ecx = r_esp;
    /* 00465bc6: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00465bcd: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00465bd0: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00465bd5: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00465bd8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465bda: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00465bdc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465bdf: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00465be5: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x465beau); f_005ecd00();
    /* 00465bea: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00465bec: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465bef: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00465bf5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465bf8: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00465bfe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00465c00: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00465c03: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465c05u); call_ind(t); }
    /* 00465c05: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465c08: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x465c0du); f_005f8550();
    /* 00465c0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465c0e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465c11: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00465c17: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x465c1cu); f_005ecc60();
    /* 00465c1c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00465c1e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465c21: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 00465c27: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x465c2cu); f_005eccb0();
    /* 00465c2c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00465c2e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465c31: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00465c37: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x465c3cu); f_005ef310();
    /* 00465c3c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00465c3e: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 00465c40: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465c43: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00465c49: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465c4c: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00465c52: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00465c54: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00465c57: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465c59u); call_ind(t); }
    /* 00465c59: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465c5e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x465c63u); f_00686d82();
    /* 00465c63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465c66: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00465c69: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00465c70: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465c74: je 0x465c83 */ if (fZ) goto L_00465c83;
L_00465c76:; BB(0x00465c76);
    /* 00465c76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00465c79: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x465c7eu); f_005ec5a0();
    /* 00465c7e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00465c81: jmp 0x465c8a */ goto L_00465c8a;
L_00465c83:; BB(0x00465c83);
    /* 00465c83: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00465c8a:; BB(0x00465c8a);
    /* 00465c8a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00465c8d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00465c90: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465c97: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465c9a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00465c9d: mov dword ptr [edx + 0x1e8], eax */ W32((u32)(r_edx+0x1e8u), r_eax);
    /* 00465ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465ca4: mov ecx, esp */ r_ecx = r_esp;
    /* 00465ca6: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00465cad: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00465cb0: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00465cb5: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00465cb8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465cba: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00465cbc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465cbf: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 00465cc5: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x465ccau); f_005ecd00();
    /* 00465cca: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00465ccc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465ccf: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 00465cd5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465cd8: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 00465cde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00465ce0: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00465ce3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465ce5u); call_ind(t); }
    /* 00465ce5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465ce8: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x465cedu); f_005f8550();
    /* 00465ced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465cee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465cf1: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 00465cf7: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x465cfcu); f_005ecc60();
    /* 00465cfc: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00465cfe: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d01: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 00465d07: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x465d0cu); f_005eccb0();
    /* 00465d0c: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00465d0e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d11: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00465d17: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x465d1cu); f_005ef310();
    /* 00465d1c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00465d1e: push -9 */ { u32 v = 0xfffffff7u; r_esp -= 4; W32(r_esp, v); }
    /* 00465d20: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d23: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 00465d29: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d2c: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00465d32: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00465d34: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00465d37: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465d39u); call_ind(t); }
    /* 00465d39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00465d3b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d3e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00465d44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465d45: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d48: call 0x5199c0 */ r_esp -= 4; W32(r_esp, 0x465d4du); f_005199c0();
    /* 00465d4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00465d4f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d52: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00465d58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465d59: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d5c: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x465d61u); f_00519960();
    /* 00465d61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00465d63: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d66: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 00465d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465d6d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465d70: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x465d75u); f_00519960();
    /* 00465d75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00465d78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00465d7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00465d80: mov esp, ebp */ r_esp = r_ebp;
    /* 00465d82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00465d83: ret  */ FN_RET(0x00465a40); r_esp += 4; return;
}

void f_00465d90(void) /* sub_465D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465d90);
    /* 00465d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00465d93: sub esp, 0x194 */ {  u32 a = r_esp; u32 b = 0x194u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00465d99: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00465d9e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00465da0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00465da3: mov dword ptr [ebp - 0x194], ecx */ W32((u32)(r_ebp+0xfffffe6cu), r_ecx);
    /* 00465da9: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00465dac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465dad: lea ecx, [ebp - 0x10c] */ r_ecx = (u32)(r_ebp+0xfffffef4u);
    /* 00465db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465db4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465dba: call 0x47ce00 */ r_esp -= 4; W32(r_esp, 0x465dbfu); f_0047ce00();
    /* 00465dbf: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465dc5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00465dc6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00465dc8: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00465dca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465dcb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465dd1: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x465dd6u); f_0047bc40();
    /* 00465dd6: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465ddc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00465ddd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00465ddf: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00465de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465de2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465de8: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x465dedu); f_0047bc80();
    /* 00465ded: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465df3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465df4: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465dfa: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x465dffu); f_0047bcc0();
    /* 00465dff: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465e05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465e06: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465e0c: call 0x47bd40 */ r_esp -= 4; W32(r_esp, 0x465e11u); f_0047bd40();
    /* 00465e11: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465e17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465e18: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465e1e: call 0x47bd80 */ r_esp -= 4; W32(r_esp, 0x465e23u); f_0047bd80();
    /* 00465e23: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465e29: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00465e2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465e2c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465e32: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x465e37u); f_0047bd00();
    /* 00465e37: mov eax, dword ptr [ebp - 0x10c] */ r_eax = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465e3d: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00465e3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465e40: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00465e46: call 0x47bdc0 */ r_esp -= 4; W32(r_esp, 0x465e4bu); f_0047bdc0();
    /* 00465e4b: lea ecx, [ebp - 0x190] */ r_ecx = (u32)(r_ebp+0xfffffe70u);
    /* 00465e51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465e52: mov edx, dword ptr [ebp - 0x10c] */ r_edx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465e58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465e59: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x465e5eu); f_006311e0();
    /* 00465e5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465e61: lea eax, [ebp - 0x150] */ r_eax = (u32)(r_ebp+0xfffffeb0u);
    /* 00465e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465e68: mov ecx, dword ptr [ebp - 0x10c] */ r_ecx = R32((u32)(r_ebp+0xfffffef4u));
    /* 00465e6e: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00465e70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465e71: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x465e76u); f_006311e0();
    /* 00465e76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465e79: lea edx, [ebp - 0x150] */ r_edx = (u32)(r_ebp+0xfffffeb0u);
    /* 00465e7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465e80: lea eax, [ebp - 0x190] */ r_eax = (u32)(r_ebp+0xfffffe70u);
    /* 00465e86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465e87: push 0x6bacf8 */ { u32 v = 0x6bacf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00465e8c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x465e91u); f_00630f40();
    /* 00465e91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465e95: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00465e9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465e9c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x465ea2u); call_ind(t); }
    /* 00465ea2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465ea5: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 00465eab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00465eac: mov eax, dword ptr [ebp - 0x194] */ r_eax = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00465eb2: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00465eb8: mov edx, dword ptr [ebp - 0x194] */ r_edx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00465ebe: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 00465ec4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00465ec6: mov ecx, eax */ r_ecx = r_eax;
    /* 00465ec8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 00465ece: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465ed0u); call_ind(t); }
    /* 00465ed0: mov ecx, dword ptr [ebp - 0x194] */ r_ecx = R32((u32)(r_ebp+0xfffffe6cu));
    /* 00465ed6: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x465edbu); f_005f85d0();
    /* 00465edb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00465ede: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00465ee0: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x465ee5u); f_00686d72();
    /* 00465ee5: mov esp, ebp */ r_esp = r_ebp;
    /* 00465ee7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00465ee8: ret  */ FN_RET(0x00465d90); r_esp += 4; return;
}

void f_00465ef0(void) /* sub_465EF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465ef0);
    /* 00465ef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465ef1: mov ebp, esp */ r_ebp = r_esp;
    /* 00465ef3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465ef5: push 0x69f567 */ { u32 v = 0x69f567u; r_esp -= 4; W32(r_esp, v); }
    /* 00465efa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00465f00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465f01: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00465f04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00465f09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00465f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465f0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00465f0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00465f15: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00465f18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465f1a: push 0x30e7fb */ { u32 v = 0x30e7fbu; r_esp -= 4; W32(r_esp, v); }
    /* 00465f1f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465f22: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x465f27u); f_005f83d0();
    /* 00465f27: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00465f29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465f2b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465f2e: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x465f33u); f_005f7340();
    /* 00465f33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465f35: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465f38: call 0x518ac0 */ r_esp -= 4; W32(r_esp, 0x465f3du); f_00518ac0();
    /* 00465f3d: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465f42: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x465f47u); f_00686d82();
    /* 00465f47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465f4a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00465f4d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00465f54: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465f58: je 0x465f6b */ if (fZ) goto L_00465f6b;
L_00465f5a:; BB(0x00465f5a);
    /* 00465f5a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465f5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465f5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00465f61: call 0x466fb0 */ r_esp -= 4; W32(r_esp, 0x465f66u); f_00466fb0();
    /* 00465f66: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00465f69: jmp 0x465f72 */ goto L_00465f72;
L_00465f6b:; BB(0x00465f6b);
    /* 00465f6b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00465f72:; BB(0x00465f72);
    /* 00465f72: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00465f75: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00465f78: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465f7f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465f82: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00465f85: mov dword ptr [edx + 0x1e0], eax */ W32((u32)(r_edx+0x1e0u), r_eax);
    /* 00465f8b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465f8e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00465f94: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465f97: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00465f9a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465f9c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00465f9e: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00465fa0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00465fa2: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00465fa7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465faa: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00465fb0: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x465fb5u); f_005eae80();
    /* 00465fb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465fb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465fb9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00465fbb: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00465fbd: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00465fbf: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00465fc1: push 0x6bace8 */ { u32 v = 0x6bace8u; r_esp -= 4; W32(r_esp, v); }
    /* 00465fc6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x465fcbu); f_00630f40();
    /* 00465fcb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00465fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465fcf: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465fd2: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00465fd8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465fdb: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00465fe1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00465fe3: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 00465fe9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465febu); call_ind(t); }
    /* 00465feb: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00465fed: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465ff0: mov ecx, dword ptr [ecx + 0x1e0] */ r_ecx = R32((u32)(r_ecx+0x1e0u));
    /* 00465ff6: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x465ffbu); f_006026f0();
    /* 00465ffb: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00465ffd: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466000: mov ecx, dword ptr [edx + 0x1e0] */ r_ecx = R32((u32)(r_edx+0x1e0u));
    /* 00466006: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x46600bu); f_00602740();
    /* 0046600b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046600e: mov ecx, dword ptr [eax + 0x1e0] */ r_ecx = R32((u32)(r_eax+0x1e0u));
    /* 00466014: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466017: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046601d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046601f: mov ecx, eax */ r_ecx = r_eax;
    /* 00466021: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00466027: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466029u); call_ind(t); }
    /* 00466029: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046602e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x466033u); f_00686d82();
    /* 00466033: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466036: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00466039: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00466040: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466044: je 0x466057 */ if (fZ) goto L_00466057;
L_00466046:; BB(0x00466046);
    /* 00466046: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046604a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046604d: call 0x466f00 */ r_esp -= 4; W32(r_esp, 0x466052u); f_00466f00();
    /* 00466052: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00466055: jmp 0x46605e */ goto L_0046605e;
L_00466057:; BB(0x00466057);
    /* 00466057: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0046605e:; BB(0x0046605e);
    /* 0046605e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00466061: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00466064: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046606b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046606e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00466071: mov dword ptr [eax + 0x1ec], ecx */ W32((u32)(r_eax+0x1ecu), r_ecx);
    /* 00466077: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046607a: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 00466080: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466083: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00466086: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00466088: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046608a: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0046608c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0046608e: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 00466093: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466096: mov ecx, dword ptr [edx + 0x1ec] */ r_ecx = R32((u32)(r_edx+0x1ecu));
    /* 0046609c: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x4660a1u); f_005eae80();
    /* 004660a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004660a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004660a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004660a7: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 004660a9: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004660ab: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 004660ad: push 0x6bad14 */ { u32 v = 0x6bad14u; r_esp -= 4; W32(r_esp, v); }
    /* 004660b2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4660b7u); f_00630f40();
    /* 004660b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004660ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004660bb: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004660be: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 004660c4: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004660c7: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 004660cd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004660cf: mov ecx, eax */ r_ecx = r_eax;
    /* 004660d1: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 004660d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4660d9u); call_ind(t); }
    /* 004660d9: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004660db: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004660de: mov ecx, dword ptr [ecx + 0x1ec] */ r_ecx = R32((u32)(r_ecx+0x1ecu));
    /* 004660e4: call 0x6026f0 */ r_esp -= 4; W32(r_esp, 0x4660e9u); f_006026f0();
    /* 004660e9: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004660eb: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004660ee: mov ecx, dword ptr [edx + 0x1ec] */ r_ecx = R32((u32)(r_edx+0x1ecu));
    /* 004660f4: call 0x602740 */ r_esp -= 4; W32(r_esp, 0x4660f9u); f_00602740();
    /* 004660f9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004660fc: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00466102: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466105: mov eax, dword ptr [edx + 0x1ec] */ r_eax = R32((u32)(r_edx+0x1ecu));
    /* 0046610b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046610d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046610f: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00466115: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466117u); call_ind(t); }
    /* 00466117: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046611c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x466121u); f_00686d82();
    /* 00466121: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466124: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00466127: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0046612e: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466132: je 0x466141 */ if (fZ) goto L_00466141;
L_00466134:; BB(0x00466134);
    /* 00466134: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00466137: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46613cu); f_005ec5a0();
    /* 0046613c: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0046613f: jmp 0x466148 */ goto L_00466148;
L_00466141:; BB(0x00466141);
    /* 00466141: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00466148:; BB(0x00466148);
    /* 00466148: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0046614b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0046614e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00466155: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466158: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0046615b: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
    /* 00466161: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466162: mov ecx, esp */ r_ecx = r_esp;
    /* 00466164: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0046616b: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0046616e: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00466173: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00466176: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00466178: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046617a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046617d: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 00466183: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x466188u); f_005ecd00();
    /* 00466188: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046618a: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046618d: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 00466193: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466196: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 0046619c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046619e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004661a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4661a3u); call_ind(t); }
    /* 004661a3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004661a6: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x4661abu); f_005f8550();
    /* 004661ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004661ac: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004661af: mov ecx, dword ptr [ecx + 0x1e4] */ r_ecx = R32((u32)(r_ecx+0x1e4u));
    /* 004661b5: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4661bau); f_005ecc60();
    /* 004661ba: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004661bc: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004661bf: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 004661c5: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4661cau); f_005eccb0();
    /* 004661ca: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004661cc: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004661cf: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 004661d5: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x4661dau); f_005ef310();
    /* 004661da: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004661dc: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 004661de: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004661e1: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 004661e7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004661ea: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 004661f0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004661f2: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004661f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4661f7u); call_ind(t); }
    /* 004661f7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004661fa: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 00466200: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466203: mov ecx, dword ptr [eax + 0x1e4] */ r_ecx = R32((u32)(r_eax+0x1e4u));
    /* 00466209: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046620b: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0046620e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466210u); call_ind(t); }
    /* 00466210: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00466215: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46621au); f_00686d82();
    /* 0046621a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046621d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00466220: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00466227: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046622b: je 0x46623a */ if (fZ) goto L_0046623a;
L_0046622d:; BB(0x0046622d);
    /* 0046622d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00466230: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x466235u); f_005ec5a0();
    /* 00466235: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00466238: jmp 0x466241 */ goto L_00466241;
L_0046623a:; BB(0x0046623a);
    /* 0046623a: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00466241:; BB(0x00466241);
    /* 00466241: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00466244: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00466247: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046624e: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466251: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00466254: mov dword ptr [edx + 0x1e8], eax */ W32((u32)(r_edx+0x1e8u), r_eax);
    /* 0046625a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046625b: mov ecx, esp */ r_ecx = r_esp;
    /* 0046625d: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00466264: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00466267: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0046626c: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0046626f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00466271: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00466273: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466276: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0046627c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x466281u); f_005ecd00();
    /* 00466281: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00466283: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466286: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0046628c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046628f: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 00466295: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00466297: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0046629a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46629cu); call_ind(t); }
    /* 0046629c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046629f: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x4662a4u); f_005f8550();
    /* 004662a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004662a5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004662a8: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 004662ae: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4662b3u); f_005ecc60();
    /* 004662b3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004662b5: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004662b8: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 004662be: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4662c3u); f_005eccb0();
    /* 004662c3: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004662c5: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004662c8: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 004662ce: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x4662d3u); f_005ef310();
    /* 004662d3: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004662d5: push -9 */ { u32 v = 0xfffffff7u; r_esp -= 4; W32(r_esp, v); }
    /* 004662d7: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004662da: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 004662e0: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004662e3: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 004662e9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004662eb: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004662ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4662f0u); call_ind(t); }
    /* 004662f0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004662f3: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 004662f9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004662fc: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 00466302: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466304: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00466307: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466309u); call_ind(t); }
    /* 00466309: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046630e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x466313u); f_00686d82();
    /* 00466313: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466316: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00466319: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00466320: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466324: je 0x466333 */ if (fZ) goto L_00466333;
L_00466326:; BB(0x00466326);
    /* 00466326: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00466329: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46632eu); f_005ec5a0();
    /* 0046632e: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00466331: jmp 0x46633a */ goto L_0046633a;
L_00466333:; BB(0x00466333);
    /* 00466333: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0046633a:; BB(0x0046633a);
    /* 0046633a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0046633d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00466340: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00466347: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046634a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046634d: mov dword ptr [edx + 0x1f0], eax */ W32((u32)(r_edx+0x1f0u), r_eax);
    /* 00466353: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466356: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 0046635c: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046635f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00466362: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466363: mov ecx, esp */ r_ecx = r_esp;
    /* 00466365: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 0046636c: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0046636f: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00466374: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00466377: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00466379: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0046637b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046637e: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 00466384: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x466389u); f_005ecd00();
    /* 00466389: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0046638b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046638e: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00466394: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466397: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 0046639d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046639f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004663a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4663a4u); call_ind(t); }
    /* 004663a4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004663a9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004663ac: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 004663b2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004663b5: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 004663bb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004663bd: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004663c3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4663c5u); call_ind(t); }
    /* 004663c5: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 004663ca: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004663cd: mov ecx, dword ptr [ecx + 0x1f0] */ r_ecx = R32((u32)(r_ecx+0x1f0u));
    /* 004663d3: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4663d8u); f_005ecc60();
    /* 004663d8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004663da: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004663dd: mov ecx, dword ptr [edx + 0x1f0] */ r_ecx = R32((u32)(r_edx+0x1f0u));
    /* 004663e3: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4663e8u); f_005eccb0();
    /* 004663e8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004663ea: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004663ed: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 004663f3: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x4663f8u); f_005ef310();
    /* 004663f8: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 004663fa: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 004663fc: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004663ff: mov edx, dword ptr [ecx + 0x1f0] */ r_edx = R32((u32)(r_ecx+0x1f0u));
    /* 00466405: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466408: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 0046640e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466410: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466413: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466415u); call_ind(t); }
    /* 00466415: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046641a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46641fu); f_00686d82();
    /* 0046641f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00466422: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00466425: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0046642c: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466430: je 0x46643f */ if (fZ) goto L_0046643f;
L_00466432:; BB(0x00466432);
    /* 00466432: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00466435: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x46643au); f_005ec5a0();
    /* 0046643a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0046643d: jmp 0x466446 */ goto L_00466446;
L_0046643f:; BB(0x0046643f);
    /* 0046643f: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_00466446:; BB(0x00466446);
    /* 00466446: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00466449: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0046644c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00466453: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466456: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00466459: mov dword ptr [edx + 0x1f4], eax */ W32((u32)(r_edx+0x1f4u), r_eax);
    /* 0046645f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466462: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00466468: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046646b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0046646e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046646f: mov ecx, esp */ r_ecx = r_esp;
    /* 00466471: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00466478: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 0046647b: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00466480: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 00466483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00466485: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00466487: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046648a: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 00466490: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x466495u); f_005ecd00();
    /* 00466495: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00466497: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046649a: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 004664a0: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004664a3: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 004664a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004664ab: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004664ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4664b0u); call_ind(t); }
    /* 004664b0: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004664b5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004664b8: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 004664be: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004664c1: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 004664c7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004664c9: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004664cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4664d1u); call_ind(t); }
    /* 004664d1: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 004664d6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004664d9: mov ecx, dword ptr [ecx + 0x1f4] */ r_ecx = R32((u32)(r_ecx+0x1f4u));
    /* 004664df: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4664e4u); f_005ecc60();
    /* 004664e4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004664e6: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004664e9: mov ecx, dword ptr [edx + 0x1f4] */ r_ecx = R32((u32)(r_edx+0x1f4u));
    /* 004664ef: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x4664f4u); f_005eccb0();
    /* 004664f4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004664f6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004664f9: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 004664ff: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x466504u); f_005ef310();
    /* 00466504: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00466506: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00466508: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046650b: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00466511: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466514: mov ecx, dword ptr [eax + 0x1f4] */ r_ecx = R32((u32)(r_eax+0x1f4u));
    /* 0046651a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046651c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046651f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466521u); call_ind(t); }
    /* 00466521: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00466526: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x46652bu); f_00686d82();
    /* 0046652b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046652e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00466531: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00466538: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046653c: je 0x46654b */ if (fZ) goto L_0046654b;
L_0046653e:; BB(0x0046653e);
    /* 0046653e: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00466541: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x466546u); f_005ec5a0();
    /* 00466546: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00466549: jmp 0x466552 */ goto L_00466552;
L_0046654b:; BB(0x0046654b);
    /* 0046654b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_00466552:; BB(0x00466552);
    /* 00466552: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00466555: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00466558: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046655f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466562: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00466565: mov dword ptr [edx + 0x1f8], eax */ W32((u32)(r_edx+0x1f8u), r_eax);
    /* 0046656b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046656e: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 00466574: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466577: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0046657a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046657b: mov ecx, esp */ r_ecx = r_esp;
    /* 0046657d: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00466584: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00466587: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 0046658c: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0046658f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00466591: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00466593: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466596: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 0046659c: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4665a1u); f_005ecd00();
    /* 004665a1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004665a3: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004665a6: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 004665ac: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004665af: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 004665b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004665b7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004665ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4665bcu); call_ind(t); }
    /* 004665bc: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004665c1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004665c4: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 004665ca: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004665cd: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 004665d3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004665d5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004665db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4665ddu); call_ind(t); }
    /* 004665dd: push 0xaa */ { u32 v = 0xaau; r_esp -= 4; W32(r_esp, v); }
    /* 004665e2: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004665e5: mov ecx, dword ptr [ecx + 0x1f8] */ r_ecx = R32((u32)(r_ecx+0x1f8u));
    /* 004665eb: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4665f0u); f_005ecc60();
    /* 004665f0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004665f2: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004665f5: mov ecx, dword ptr [edx + 0x1f8] */ r_ecx = R32((u32)(r_edx+0x1f8u));
    /* 004665fb: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x466600u); f_005eccb0();
    /* 00466600: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00466602: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466605: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 0046660b: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x466610u); f_005ef310();
    /* 00466610: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00466612: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00466614: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466617: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 0046661d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466620: mov ecx, dword ptr [eax + 0x1f8] */ r_ecx = R32((u32)(r_eax+0x1f8u));
    /* 00466626: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466628: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0046662b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46662du); call_ind(t); }
    /* 0046662d: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00466632: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x466637u); f_00686d82();
    /* 00466637: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046663a: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0046663d: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00466644: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466648: je 0x466657 */ if (fZ) goto L_00466657;
L_0046664a:; BB(0x0046664a);
    /* 0046664a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0046664d: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x466652u); f_005ec5a0();
    /* 00466652: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00466655: jmp 0x46665e */ goto L_0046665e;
L_00466657:; BB(0x00466657);
    /* 00466657: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0046665e:; BB(0x0046665e);
    /* 0046665e: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00466661: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00466664: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0046666b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046666e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00466671: mov dword ptr [edx + 0x1fc], eax */ W32((u32)(r_edx+0x1fcu), r_eax);
    /* 00466677: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046667a: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 00466680: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466683: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00466686: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466687: mov ecx, esp */ r_ecx = r_esp;
    /* 00466689: mov dx, word ptr [0x75ee1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(0x75ee1cu))) & 0xffffu);
    /* 00466690: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00466693: mov al, byte ptr [0x75ee1e] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x75ee1eu))) & 0xffu);
    /* 00466698: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 0046669b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046669d: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0046669f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004666a2: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 004666a8: call 0x5ecd00 */ r_esp -= 4; W32(r_esp, 0x4666adu); f_005ecd00();
    /* 004666ad: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004666af: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004666b2: mov eax, dword ptr [edx + 0x1fc] */ r_eax = R32((u32)(r_edx+0x1fcu));
    /* 004666b8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004666bb: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 004666c1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004666c3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 004666c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4666c8u); call_ind(t); }
    /* 004666c8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004666cd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004666d0: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 004666d6: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004666d9: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 004666df: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004666e1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 004666e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4666e9u); call_ind(t); }
    /* 004666e9: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 004666ee: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004666f1: mov ecx, dword ptr [ecx + 0x1fc] */ r_ecx = R32((u32)(r_ecx+0x1fcu));
    /* 004666f7: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x4666fcu); f_005ecc60();
    /* 004666fc: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 004666fe: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466701: mov ecx, dword ptr [edx + 0x1fc] */ r_ecx = R32((u32)(r_edx+0x1fcu));
    /* 00466707: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x46670cu); f_005eccb0();
    /* 0046670c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046670e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466711: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00466717: call 0x5ef310 */ r_esp -= 4; W32(r_esp, 0x46671cu); f_005ef310();
    /* 0046671c: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0046671e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00466720: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466723: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 00466729: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046672c: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 00466732: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00466734: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00466737: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x466739u); call_ind(t); }
    /* 00466739: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046673b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046673e: mov edx, dword ptr [ecx + 0x1e0] */ r_edx = R32((u32)(r_ecx+0x1e0u));
    /* 00466744: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00466745: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466748: call 0x5199c0 */ r_esp -= 4; W32(r_esp, 0x46674du); f_005199c0();
    /* 0046674d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046674f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466752: mov ecx, dword ptr [eax + 0x1ec] */ r_ecx = R32((u32)(r_eax+0x1ecu));
    /* 00466758: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466759: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046675c: call 0x519900 */ r_esp -= 4; W32(r_esp, 0x466761u); f_00519900();
    /* 00466761: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00466763: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466766: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0046676c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046676d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466770: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x466775u); f_00519960();
    /* 00466775: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00466777: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046677a: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 00466780: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00466781: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466784: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x466789u); f_00519960();
    /* 00466789: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046678b: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046678e: mov ecx, dword ptr [eax + 0x1f0] */ r_ecx = R32((u32)(r_eax+0x1f0u));
    /* 00466794: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466795: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00466798: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x46679du); f_00519960();
    /* 0046679d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046679f: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004667a2: mov eax, dword ptr [edx + 0x1f4] */ r_eax = R32((u32)(r_edx+0x1f4u));
    /* 004667a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004667a9: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004667ac: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x4667b1u); f_00519960();
    /* 004667b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004667b3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004667b6: mov edx, dword ptr [ecx + 0x1f8] */ r_edx = R32((u32)(r_ecx+0x1f8u));
    /* 004667bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004667bd: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004667c0: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x4667c5u); f_00519960();
    /* 004667c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004667c7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004667ca: mov ecx, dword ptr [eax + 0x1fc] */ r_ecx = R32((u32)(r_eax+0x1fcu));
    /* 004667d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004667d1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004667d4: call 0x519960 */ r_esp -= 4; W32(r_esp, 0x4667d9u); f_00519960();
    /* 004667d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004667db: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004667de: call 0x466800 */ r_esp -= 4; W32(r_esp, 0x4667e3u); f_00466800();
    /* 004667e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004667e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004667ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004667ee: mov esp, ebp */ r_esp = r_ebp;
    /* 004667f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004667f1: ret  */ FN_RET(0x00465ef0); r_esp += 4; return;
}


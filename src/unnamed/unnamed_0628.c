#include "protos.h"

void f_00628540(void) /* sub_628540 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628540);
    /* 00628540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628541: mov ebp, esp */ r_ebp = r_esp;
    /* 00628543: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628546: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00628549: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 0062854f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628550: mov ecx, dword ptr [ebp + 0x50] */ r_ecx = R32((u32)(r_ebp+0x50u));
    /* 00628553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628554: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 00628557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628558: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 0062855b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062855c: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 0062855f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628560: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00628563: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628564: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00628567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628568: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0062856b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062856c: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 0062856f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628570: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00628573: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628574: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00628577: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628578: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0062857b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062857c: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0062857f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628580: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00628583: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628584: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00628587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628588: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0062858b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062858c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062858f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628590: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00628593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628594: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00628597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628598: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0062859b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0062859c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062859f: call 0x614b60 */ r_esp -= 4; W32(r_esp, 0x6285a4u); f_00614b60();
    /* 006285a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285a7: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 006285aa: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 006285b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285b3: mov edx, dword ptr [ebp + 0x58] */ r_edx = R32((u32)(r_ebp+0x58u));
    /* 006285b6: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 006285bc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285bf: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 006285c2: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 006285c8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285cb: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006285ce: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 006285d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285d7: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 006285da: mov dword ptr [ecx + 0xbc], edx */ W32((u32)(r_ecx+0xbcu), r_edx);
    /* 006285e0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285e3: mov ecx, dword ptr [ebp + 0x68] */ r_ecx = R32((u32)(r_ebp+0x68u));
    /* 006285e6: mov dword ptr [eax + 0xa8], ecx */ W32((u32)(r_eax+0xa8u), r_ecx);
    /* 006285ec: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285ef: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 006285f2: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 006285f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006285fb: mov edx, dword ptr [ebp + 0x70] */ r_edx = R32((u32)(r_ebp+0x70u));
    /* 006285fe: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 00628604: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628607: mov cl, byte ptr [ebp + 0x74] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x74u))) & 0xffu);
    /* 0062860a: mov byte ptr [eax + 0xb4], cl */ W8((u32)(r_eax+0xb4u), (u8)r_ecx);
    /* 00628610: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628613: mov al, byte ptr [ebp + 0x78] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x78u))) & 0xffu);
    /* 00628616: mov byte ptr [edx + 0xb5], al */ W8((u32)(r_edx+0xb5u), (u8)r_eax);
    /* 0062861c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062861f: mov dl, byte ptr [ebp + 0x7c] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x7cu))) & 0xffu);
    /* 00628622: mov byte ptr [ecx + 0xb6], dl */ W8((u32)(r_ecx+0xb6u), (u8)r_edx);
    /* 00628628: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062862a: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 00628630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628631: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628634: call 0x629220 */ r_esp -= 4; W32(r_esp, 0x628639u); f_00629220();
    /* 00628639: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00628640: jmp 0x62864b */ goto L_0062864b;
L_00628642:; BB(0x00628642);
    /* 00628642: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628645: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628648: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0062864b:; BB(0x0062864b);
    /* 0062864b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062864e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628650: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628653: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00628659: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x62865bu); call_ind(t); }
    /* 0062865b: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062865e: jge 0x628711 */ if ((fS==fO)) goto L_00628711;
L_00628664:; BB(0x00628664);
    /* 00628664: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628668: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062866b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062866d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628670: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 00628676: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628678u); call_ind(t); }
    /* 00628678: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0062867b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0062867e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628681: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00628684: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00628687: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628689: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0062868b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0062868e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628691: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628692: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628695: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00628698: add eax, dword ptr [edx + 0xa4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062869e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006286a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006286a4: imul edx, dword ptr [ecx + 0x9c] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+0x9cu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006286ab: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006286ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006286ae: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006286b1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006286b4: add ecx, dword ptr [eax + 0xa0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xa0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006286ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006286bb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006286be: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 006286c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006286c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006286c8: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 006286ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006286cf: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006286d2: mov ecx, dword ptr [eax + 0xa8] */ r_ecx = R32((u32)(r_eax+0xa8u));
    /* 006286d8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006286d9: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006286de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006286e1: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x6286e6u); f_005ec8f0();
    /* 006286e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006286e8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006286eb: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 006286f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006286f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006286f5: call 0x5ef340 */ r_esp -= 4; W32(r_esp, 0x6286fau); f_005ef340();
    /* 006286fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006286fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006286fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628701: add ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628707: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x62870cu); f_0060c840();
    /* 0062870c: jmp 0x628642 */ goto L_00628642;
L_00628711:; BB(0x00628711);
    /* 00628711: mov esp, ebp */ r_esp = r_ebp;
    /* 00628713: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628714: ret 0x80 */ FN_RET(0x00628540); r_esp += 132; return;
}

void f_00628980(void) /* sub_628980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628980);
    /* 00628980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628981: mov ebp, esp */ r_ebp = r_esp;
    /* 00628983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628985: push 0x6ab59b */ { u32 v = 0x6ab59bu; r_esp -= 4; W32(r_esp, v); }
    /* 0062898a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00628990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628991: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628994: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00628999: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062899b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062899c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0062899f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006289a5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006289a8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006289ac: jne 0x6289ef */ if (!fZ) goto L_006289ef;
L_006289ae:; BB(0x006289ae);
    /* 006289ae: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006289b0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6289b5u); f_00686d82();
    /* 006289b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006289b8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006289bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006289c2: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006289c6: je 0x6289d5 */ if (fZ) goto L_006289d5;
L_006289c8:; BB(0x006289c8);
    /* 006289c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006289cb: call 0x629ab0 */ r_esp -= 4; W32(r_esp, 0x6289d0u); f_00629ab0();
    /* 006289d0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006289d3: jmp 0x6289dc */ goto L_006289dc;
L_006289d5:; BB(0x006289d5);
    /* 006289d5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006289dc:; BB(0x006289dc);
    /* 006289dc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006289df: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006289e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006289e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006289ec: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_006289ef:; BB(0x006289ef);
    /* 006289ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006289f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006289f3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006289f6: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006289f9: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x6289feu); f_0060c840();
    /* 006289fe: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00628a01: call 0x5f5400 */ r_esp -= 4; W32(r_esp, 0x628a06u); f_005f5400();
    /* 00628a06: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00628a09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628a0c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00628a0f: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00628a12: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00628a15: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00628a18: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00628a1b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00628a1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628a1f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00628a22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628a23: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00628a26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628a28: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628a2b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00628a2e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628a30u); call_ind(t); }
    /* 00628a30: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00628a33: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628a35: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00628a38: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00628a3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628a40u); call_ind(t); }
    /* 00628a40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628a43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00628a4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00628a4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00628a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628a4e: ret 0x10 */ FN_RET(0x00628980); r_esp += 20; return;
}

void f_00628ab0(void) /* sub_628AB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628ab0);
    /* 00628ab0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628ab1: mov ebp, esp */ r_ebp = r_esp;
    /* 00628ab3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00628ab6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00628ab9: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628abd: jne 0x628ad6 */ if (!fZ) goto L_00628ad6;
L_00628abf:; BB(0x00628abf);
    /* 00628abf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00628ac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628ac3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628ac6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628ac8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628acb: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 00628ad1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628ad3u); call_ind(t); }
    /* 00628ad3: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00628ad6:; BB(0x00628ad6);
    /* 00628ad6: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628ada: je 0x628b29 */ if (fZ) goto L_00628b29;
L_00628adc:; BB(0x00628adc);
    /* 00628adc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628adf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628ae0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628ae3: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628ae6: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x628aebu); f_0060ca40();
    /* 00628aeb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00628aee: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628af1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00628af2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628af5: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628af8: call 0x60c890 */ r_esp -= 4; W32(r_esp, 0x628afdu); f_0060c890();
    /* 00628afd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628b00: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00628b03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00628b06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00628b09: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b0d: je 0x628b22 */ if (fZ) goto L_00628b22;
L_00628b0f:; BB(0x00628b0f);
    /* 00628b0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b11: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628b14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628b16: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00628b19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628b1b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x628b1du); call_ind(t); }
    /* 00628b1d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00628b20: jmp 0x628b29 */ goto L_00628b29;
L_00628b22:; BB(0x00628b22);
    /* 00628b22: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_00628b29:; BB(0x00628b29);
    /* 00628b29: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b2c: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x628b31u); f_00615260();
    /* 00628b31: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b34: jne 0x628b7e */ if (!fZ) goto L_00628b7e;
L_00628b36:; BB(0x00628b36);
    /* 00628b36: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b39: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628b3b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b3e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00628b44: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628b46u); call_ind(t); }
    /* 00628b46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628b48: jne 0x628b60 */ if (!fZ) goto L_00628b60;
L_00628b4a:; BB(0x00628b4a);
    /* 00628b4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b4c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628b4e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b51: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628b53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b56: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00628b5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628b5eu); call_ind(t); }
    /* 00628b5e: jmp 0x628b7e */ goto L_00628b7e;
L_00628b60:; BB(0x00628b60);
    /* 00628b60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628b62: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b65: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x628b6au); f_00615260();
    /* 00628b6a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00628b6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628b6e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b71: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628b73: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b76: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00628b7c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628b7eu); call_ind(t); }
L_00628b7e:; BB(0x00628b7e);
    /* 00628b7e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628b83: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00628b86: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00628b8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628b8eu); call_ind(t); }
    /* 00628b8e: mov esp, ebp */ r_esp = r_ebp;
    /* 00628b90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628b91: ret 8 */ FN_RET(0x00628ab0); r_esp += 12; return;
}

void f_00628ba0(void) /* sub_628BA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628ba0);
    /* 00628ba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628ba1: mov ebp, esp */ r_ebp = r_esp;
    /* 00628ba3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628ba4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00628ba7:; BB(0x00628ba7);
    /* 00628ba7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628baa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628bac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628baf: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00628bb5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628bb7u); call_ind(t); }
    /* 00628bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628bb9: je 0x628bc9 */ if (fZ) goto L_00628bc9;
L_00628bbb:; BB(0x00628bbb);
    /* 00628bbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bbf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628bc2: call 0x628ab0 */ r_esp -= 4; W32(r_esp, 0x628bc7u); f_00628ab0();
    /* 00628bc7: jmp 0x628ba7 */ goto L_00628ba7;
L_00628bc9:; BB(0x00628bc9);
    /* 00628bc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00628bcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00628bcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628bd0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628bd2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628bd5: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00628bdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628bddu); call_ind(t); }
    /* 00628bdd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628be0: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 00628be7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628bea: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00628bed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628bf0: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00628bf3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628bf5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00628bf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628bfau); call_ind(t); }
    /* 00628bfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628bfd: call 0x615160 */ r_esp -= 4; W32(r_esp, 0x628c02u); f_00615160();
    /* 00628c02: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00628c05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00628c07: je 0x628c2c */ if (fZ) goto L_00628c2c;
L_00628c09:; BB(0x00628c09);
    /* 00628c09: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c0c: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 00628c0f: call 0x615eb0 */ r_esp -= 4; W32(r_esp, 0x628c14u); f_00615eb0();
    /* 00628c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628c15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c18: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 00628c1b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c1e: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00628c21: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00628c23: mov ecx, eax */ r_ecx = r_eax;
    /* 00628c25: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 00628c28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628c2au); call_ind(t); }
    /* 00628c2a: jmp 0x628c4b */ goto L_00628c4b;
L_00628c2c:; BB(0x00628c2c);
    /* 00628c2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c2f: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00628c32: call 0x615eb0 */ r_esp -= 4; W32(r_esp, 0x628c37u); f_00615eb0();
    /* 00628c37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628c38: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c3b: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00628c3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628c41: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 00628c44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628c46: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 00628c49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628c4bu); call_ind(t); }
L_00628c4b:; BB(0x00628c4b);
    /* 00628c4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00628c4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628c4e: ret  */ FN_RET(0x00628ba0); r_esp += 4; return;
}

void f_00628d80(void) /* sub_628D80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628d80);
    /* 00628d80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628d81: mov ebp, esp */ r_ebp = r_esp;
    /* 00628d83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628d84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00628d87: push 0x629d20 */ { u32 v = 0x629d20u; r_esp -= 4; W32(r_esp, v); }
    /* 00628d8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628d8f: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00628d92: call 0x60cbb0 */ r_esp -= 4; W32(r_esp, 0x628d97u); f_0060cbb0();
    /* 00628d97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628d9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628d9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628d9f: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 00628da5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628da7u); call_ind(t); }
    /* 00628da7: mov esp, ebp */ r_esp = r_ebp;
    /* 00628da9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628daa: ret  */ FN_RET(0x00628d80); r_esp += 4; return;
}

void f_00628f40(void) /* sub_628F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00628f40);
    /* 00628f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00628f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00628f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628f44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00628f47: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 00628f4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628f4b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00628f4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00628f4f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628f52: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00628f54: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628f57: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 00628f5d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x628f5fu); call_ind(t); }
    /* 00628f5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00628f60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628f63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00628f65: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00628f68: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 00628f6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x628f70u); call_ind(t); }
    /* 00628f70: mov esp, ebp */ r_esp = r_ebp;
    /* 00628f72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00628f73: ret 8 */ FN_RET(0x00628f40); r_esp += 12; return;
}


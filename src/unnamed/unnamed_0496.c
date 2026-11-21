#include "protos.h"

void f_00496200(void) /* sub_496200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00496200);
    /* 00496200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00496201: mov ebp, esp */ r_ebp = r_esp;
    /* 00496203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00496205: push 0x6a0a17 */ { u32 v = 0x6a0a17u; r_esp -= 4; W32(r_esp, v); }
    /* 0049620a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00496210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496211: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00496214: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00496219: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049621b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049621c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0049621f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00496225: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00496228: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0049622f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00496236: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00496239: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x49623eu); f_004a20d0();
    /* 0049623e: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00496242: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00496247: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049624c: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00496251: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00496256: push 0x7913ff */ { u32 v = 0x7913ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0049625b: mov eax, dword ptr [0x791390] */ r_eax = R32((u32)(0x791390u));
    /* 00496260: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496261: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00496264: call 0x4a2100 */ r_esp -= 4; W32(r_esp, 0x496269u); f_004a2100();
    /* 00496269: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0049626c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049626d: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00496270: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x496275u); f_00484320();
    /* 00496275: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00496279: lea ecx, [ebp - 0x1d] */ r_ecx = (u32)(r_ebp+0xffffffe3u);
    /* 0049627c: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x496281u); f_00464110();
    /* 00496281: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00496285: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00496288: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x49628du); f_004a20d0();
    /* 0049628d: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
L_00496291:; BB(0x00496291);
    /* 00496291: lea edx, [ebp - 0x1d] */ r_edx = (u32)(r_ebp+0xffffffe3u);
    /* 00496294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496295: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 00496298: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x49629du); f_00464a10();
    /* 0049629d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004962a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004962a2: je 0x496304 */ if (fZ) goto L_00496304;
L_004962a4:; BB(0x004962a4);
    /* 004962a4: lea ecx, [ebp - 0x1d] */ r_ecx = (u32)(r_ebp+0xffffffe3u);
    /* 004962a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004962a8: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004962ab: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x4962b0u); f_00484830();
    /* 004962b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004962b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004962b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004962b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004962b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004962ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004962bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004962be: lea edx, [ebp - 0x22] */ r_edx = (u32)(r_ebp+0xffffffdeu);
    /* 004962c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004962c2: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004962c5: call 0x485940 */ r_esp -= 4; W32(r_esp, 0x4962cau); f_00485940();
    /* 004962ca: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004962cd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004962d0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004962d2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004962d5: lea ecx, [ebp - 0x22] */ r_ecx = (u32)(r_ebp+0xffffffdeu);
    /* 004962d8: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x4962ddu); f_004a20f0();
    /* 004962dd: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 004962e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004962e1: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004962e4: call 0x4a2440 */ r_esp -= 4; W32(r_esp, 0x4962e9u); f_004a2440();
    /* 004962e9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004962ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004962ee: je 0x4962f6 */ if (fZ) goto L_004962f6;
L_004962f0:; BB(0x004962f0);
    /* 004962f0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004962f3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_004962f6:; BB(0x004962f6);
    /* 004962f6: lea edx, [ebp - 0x1d] */ r_edx = (u32)(r_ebp+0xffffffe3u);
    /* 004962f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004962fa: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 004962fd: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x496302u); f_00484ad0();
    /* 00496302: jmp 0x496291 */ goto L_00496291;
L_00496304:; BB(0x00496304);
    /* 00496304: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00496307: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0049630a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0049630c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0049630f: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00496312: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00496315: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00496319: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0049631c: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x496321u); f_004a20f0();
    /* 00496321: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00496325: lea ecx, [ebp - 0x1d] */ r_ecx = (u32)(r_ebp+0xffffffe3u);
    /* 00496328: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x49632du); f_00464210();
    /* 0049632d: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00496331: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00496334: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x496339u); f_00484470();
    /* 00496339: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0049633d: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 00496340: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x496345u); f_004a20f0();
    /* 00496345: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00496349: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 0049634c: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x496351u); f_004646e0();
    /* 00496351: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00496354: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00496357: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0049635e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049635f: mov esp, ebp */ r_esp = r_ebp;
    /* 00496361: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496362: ret 0x10 */ FN_RET(0x00496200); r_esp += 20; return;
}

void f_004966e0(void) /* sub_4966E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004966e0);
    /* 004966e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004966e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004966e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004966e5: push 0x6a0ac5 */ { u32 v = 0x6a0ac5u; r_esp -= 4; W32(r_esp, v); }
    /* 004966ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004966f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004966f1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004966f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004966f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004966fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004966fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004966ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00496705: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00496708: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049670f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00496712: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00496717: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0049671a: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 0049671f: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00496722: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00496727: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0049672a: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 0049672f: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00496732: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 00496737: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0049673a: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 0049673f: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00496742: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 00496747: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0049674a: mov word ptr [ecx], 0 */ W16((u32)(r_ecx), 0x0u);
    /* 0049674f: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00496752: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00496757: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0049675a: mov word ptr [eax], 0 */ W16((u32)(r_eax), 0x0u);
    /* 0049675f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00496762: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00496763: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496766: call 0x484320 */ r_esp -= 4; W32(r_esp, 0x49676bu); f_00484320();
    /* 0049676b: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0049676f: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 00496772: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x496777u); f_00464110();
    /* 00496777: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0049677b: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 0049677e: call 0x464110 */ r_esp -= 4; W32(r_esp, 0x496783u); f_00464110();
    /* 00496783: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00496787: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0049678a: call 0x4a20d0 */ r_esp -= 4; W32(r_esp, 0x49678fu); f_004a20d0();
    /* 0049678f: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00496793: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00496796: call 0x4646a0 */ r_esp -= 4; W32(r_esp, 0x49679bu); f_004646a0();
    /* 0049679b: mov byte ptr [ebp - 4], 5 */ W8((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0049679f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004967a2: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 004967a6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004967a9: jle 0x4967b1 */ if ((fZ||fS!=fO)) goto L_004967b1;
L_004967ab:; BB(0x004967ab);
    /* 004967ab: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
    /* 004967af: jmp 0x4967b5 */ goto L_004967b5;
L_004967b1:; BB(0x004967b1);
    /* 004967b1: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
L_004967b5:; BB(0x004967b5);
    /* 004967b5: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004967b8: movsx edx, word ptr [ecx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 004967bc: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004967bf: jle 0x4967c7 */ if ((fZ||fS!=fO)) goto L_004967c7;
L_004967c1:; BB(0x004967c1);
    /* 004967c1: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
    /* 004967c5: jmp 0x4967cb */ goto L_004967cb;
L_004967c7:; BB(0x004967c7);
    /* 004967c7: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
L_004967cb:; BB(0x004967cb);
    /* 004967cb: movzx eax, byte ptr [ebp - 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 004967cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004967d1: jne 0x4967ea */ if (!fZ) goto L_004967ea;
L_004967d3:; BB(0x004967d3);
    /* 004967d3: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 004967d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004967d7: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 004967da: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x4967dfu); f_00464a10();
    /* 004967df: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004967e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004967e4: je 0x496ac3 */ if (fZ) goto L_00496ac3;
L_004967ea:; BB(0x004967ea);
    /* 004967ea: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 004967ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004967f0: jne 0x496806 */ if (!fZ) goto L_00496806;
L_004967f2:; BB(0x004967f2);
    /* 004967f2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004967f5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004967f8: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004967fb: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004967fe: mov ax, word ptr [ebp + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0x10u))) & 0xffffu);
    /* 00496802: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_00496806:; BB(0x00496806);
    /* 00496806: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0049680a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049680c: jne 0x496825 */ if (!fZ) goto L_00496825;
L_0049680e:; BB(0x0049680e);
    /* 0049680e: lea edx, [ebp - 0xe] */ r_edx = (u32)(r_ebp+0xfffffff2u);
    /* 00496811: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496812: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00496815: call 0x464a10 */ r_esp -= 4; W32(r_esp, 0x49681au); f_00464a10();
    /* 0049681a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0049681d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049681f: je 0x496ab4 */ if (fZ) goto L_00496ab4;
L_00496825:; BB(0x00496825);
    /* 00496825: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00496829: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049682b: jne 0x496839 */ if (!fZ) goto L_00496839;
L_0049682d:; BB(0x0049682d);
    /* 0049682d: lea edx, [ebp - 0x2d] */ r_edx = (u32)(r_ebp+0xffffffd3u);
    /* 00496830: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496831: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496834: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x496839u); f_00484830();
L_00496839:; BB(0x00496839);
    /* 00496839: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 0049683d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049683f: jne 0x49684d */ if (!fZ) goto L_0049684d;
L_00496841:; BB(0x00496841);
    /* 00496841: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00496844: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00496845: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496848: call 0x484830 */ r_esp -= 4; W32(r_esp, 0x49684du); f_00484830();
L_0049684d:; BB(0x0049684d);
    /* 0049684d: lea edx, [ebp - 0x32] */ r_edx = (u32)(r_ebp+0xffffffceu);
    /* 00496850: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496851: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496854: call 0x4a1910 */ r_esp -= 4; W32(r_esp, 0x496859u); f_004a1910();
    /* 00496859: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0049685c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0049685f: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00496861: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00496864: lea ecx, [ebp - 0x32] */ r_ecx = (u32)(r_ebp+0xffffffceu);
    /* 00496867: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x49686cu); f_004a20f0();
    /* 0049686c: mov edx, dword ptr [0x791390] */ r_edx = R32((u32)(0x791390u));
    /* 00496872: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496873: lea eax, [ebp - 0x33] */ r_eax = (u32)(r_ebp+0xffffffcdu);
    /* 00496876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496877: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0049687a: call 0x4a2160 */ r_esp -= 4; W32(r_esp, 0x49687fu); f_004a2160();
    /* 0049687f: mov ecx, eax */ r_ecx = r_eax;
    /* 00496881: call 0x4a1e40 */ r_esp -= 4; W32(r_esp, 0x496886u); f_004a1e40();
    /* 00496886: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00496889: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049688b: je 0x4968a2 */ if (fZ) goto L_004968a2;
L_0049688d:; BB(0x0049688d);
    /* 0049688d: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00496890: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00496893: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496897: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 0049689a: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 0049689d: jmp 0x496a7d */ goto L_00496a7d;
L_004968a2:; BB(0x004968a2);
    /* 004968a2: mov edx, dword ptr [0x7913a4] */ r_edx = R32((u32)(0x7913a4u));
    /* 004968a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004968a9: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004968ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004968ad: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004968b0: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x4968b5u); f_004a21b0();
    /* 004968b5: mov ecx, eax */ r_ecx = r_eax;
    /* 004968b7: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4968bcu); f_004a1fb0();
    /* 004968bc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004968bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004968c1: je 0x4968d8 */ if (fZ) goto L_004968d8;
L_004968c3:; BB(0x004968c3);
    /* 004968c3: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004968c6: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 004968c9: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004968cd: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004968d0: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004968d3: jmp 0x496a7d */ goto L_00496a7d;
L_004968d8:; BB(0x004968d8);
    /* 004968d8: mov edx, dword ptr [0x791404] */ r_edx = R32((u32)(0x791404u));
    /* 004968de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004968df: lea eax, [ebp - 0x35] */ r_eax = (u32)(r_ebp+0xffffffcbu);
    /* 004968e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004968e3: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004968e6: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x4968ebu); f_004a21b0();
    /* 004968eb: mov ecx, eax */ r_ecx = r_eax;
    /* 004968ed: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4968f2u); f_004a1fb0();
    /* 004968f2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004968f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004968f7: je 0x49690e */ if (fZ) goto L_0049690e;
L_004968f9:; BB(0x004968f9);
    /* 004968f9: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004968fc: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 004968ff: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496903: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00496906: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00496909: jmp 0x496a7d */ goto L_00496a7d;
L_0049690e:; BB(0x0049690e);
    /* 0049690e: mov edx, dword ptr [0x7913f8] */ r_edx = R32((u32)(0x7913f8u));
    /* 00496914: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496915: lea eax, [ebp - 0x36] */ r_eax = (u32)(r_ebp+0xffffffcau);
    /* 00496918: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496919: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0049691c: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x496921u); f_004a21b0();
    /* 00496921: mov ecx, eax */ r_ecx = r_eax;
    /* 00496923: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x496928u); f_004a1fb0();
    /* 00496928: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0049692b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049692d: je 0x496944 */ if (fZ) goto L_00496944;
L_0049692f:; BB(0x0049692f);
    /* 0049692f: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00496932: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00496935: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496939: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0049693c: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 0049693f: jmp 0x496a7d */ goto L_00496a7d;
L_00496944:; BB(0x00496944);
    /* 00496944: mov edx, dword ptr [0x791410] */ r_edx = R32((u32)(0x791410u));
    /* 0049694a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0049694b: lea eax, [ebp - 0x37] */ r_eax = (u32)(r_ebp+0xffffffc9u);
    /* 0049694e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049694f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00496952: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x496957u); f_004a21b0();
    /* 00496957: mov ecx, eax */ r_ecx = r_eax;
    /* 00496959: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x49695eu); f_004a1fb0();
    /* 0049695e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00496961: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496963: je 0x49697a */ if (fZ) goto L_0049697a;
L_00496965:; BB(0x00496965);
    /* 00496965: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00496968: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0049696b: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0049696f: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00496972: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00496975: jmp 0x496a7d */ goto L_00496a7d;
L_0049697a:; BB(0x0049697a);
    /* 0049697a: mov edx, dword ptr [0x7913f4] */ r_edx = R32((u32)(0x7913f4u));
    /* 00496980: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496981: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00496984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496985: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00496988: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x49698du); f_004a21b0();
    /* 0049698d: mov ecx, eax */ r_ecx = r_eax;
    /* 0049698f: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x496994u); f_004a1fb0();
    /* 00496994: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00496997: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496999: je 0x4969b0 */ if (fZ) goto L_004969b0;
L_0049699b:; BB(0x0049699b);
    /* 0049699b: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0049699e: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 004969a1: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004969a5: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004969a8: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004969ab: jmp 0x496a7d */ goto L_00496a7d;
L_004969b0:; BB(0x004969b0);
    /* 004969b0: mov edx, dword ptr [0x79138c] */ r_edx = R32((u32)(0x79138cu));
    /* 004969b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004969b7: lea eax, [ebp - 0x39] */ r_eax = (u32)(r_ebp+0xffffffc7u);
    /* 004969ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004969bb: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004969be: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x4969c3u); f_004a21b0();
    /* 004969c3: mov ecx, eax */ r_ecx = r_eax;
    /* 004969c5: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4969cau); f_004a1fb0();
    /* 004969ca: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004969cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004969cf: je 0x4969e6 */ if (fZ) goto L_004969e6;
L_004969d1:; BB(0x004969d1);
    /* 004969d1: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 004969d4: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 004969d7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004969db: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 004969de: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 004969e1: jmp 0x496a7d */ goto L_00496a7d;
L_004969e6:; BB(0x004969e6);
    /* 004969e6: mov edx, dword ptr [0x791400] */ r_edx = R32((u32)(0x791400u));
    /* 004969ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004969ed: lea eax, [ebp - 0x3a] */ r_eax = (u32)(r_ebp+0xffffffc6u);
    /* 004969f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004969f1: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004969f4: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x4969f9u); f_004a21b0();
    /* 004969f9: mov ecx, eax */ r_ecx = r_eax;
    /* 004969fb: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x496a00u); f_004a1fb0();
    /* 00496a00: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00496a03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a05: je 0x496a19 */ if (fZ) goto L_00496a19;
L_00496a07:; BB(0x00496a07);
    /* 00496a07: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00496a0a: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00496a0d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496a11: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00496a14: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00496a17: jmp 0x496a7d */ goto L_00496a7d;
L_00496a19:; BB(0x00496a19);
    /* 00496a19: mov edx, dword ptr [0x7913bc] */ r_edx = R32((u32)(0x7913bcu));
    /* 00496a1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496a20: lea eax, [ebp - 0x3b] */ r_eax = (u32)(r_ebp+0xffffffc5u);
    /* 00496a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496a24: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00496a27: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x496a2cu); f_004a21b0();
    /* 00496a2c: mov ecx, eax */ r_ecx = r_eax;
    /* 00496a2e: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x496a33u); f_004a1fb0();
    /* 00496a33: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00496a36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a38: je 0x496a4c */ if (fZ) goto L_00496a4c;
L_00496a3a:; BB(0x00496a3a);
    /* 00496a3a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00496a3d: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00496a40: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496a44: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00496a47: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00496a4a: jmp 0x496a7d */ goto L_00496a7d;
L_00496a4c:; BB(0x00496a4c);
    /* 00496a4c: mov edx, dword ptr [0x7913e0] */ r_edx = R32((u32)(0x7913e0u));
    /* 00496a52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496a53: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00496a56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496a57: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00496a5a: call 0x4a21b0 */ r_esp -= 4; W32(r_esp, 0x496a5fu); f_004a21b0();
    /* 00496a5f: mov ecx, eax */ r_ecx = r_eax;
    /* 00496a61: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x496a66u); f_004a1fb0();
    /* 00496a66: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00496a69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a6b: je 0x496a7d */ if (fZ) goto L_00496a7d;
L_00496a6d:; BB(0x00496a6d);
    /* 00496a6d: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00496a70: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00496a73: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00496a77: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00496a7a: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
L_00496a7d:; BB(0x00496a7d);
    /* 00496a7d: movzx edx, byte ptr [ebp - 0xd] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00496a81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a83: jne 0x496a91 */ if (!fZ) goto L_00496a91;
L_00496a85:; BB(0x00496a85);
    /* 00496a85: lea eax, [ebp - 0x2d] */ r_eax = (u32)(r_ebp+0xffffffd3u);
    /* 00496a88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00496a89: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496a8c: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x496a91u); f_00484ad0();
L_00496a91:; BB(0x00496a91);
    /* 00496a91: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00496a95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496a97: jne 0x496aa5 */ if (!fZ) goto L_00496aa5;
L_00496a99:; BB(0x00496a99);
    /* 00496a99: lea edx, [ebp - 0xe] */ r_edx = (u32)(r_ebp+0xfffffff2u);
    /* 00496a9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00496a9d: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496aa0: call 0x484ad0 */ r_esp -= 4; W32(r_esp, 0x496aa5u); f_00484ad0();
L_00496aa5:; BB(0x00496aa5);
    /* 00496aa5: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 00496aa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496aab: je 0x496aaf */ if (fZ) goto L_00496aaf;
L_00496aad:; BB(0x00496aad);
    /* 00496aad: jmp 0x496ab4 */ goto L_00496ab4;
L_00496aaf:; BB(0x00496aaf);
    /* 00496aaf: jmp 0x496806 */ goto L_00496806;
L_00496ab4:; BB(0x00496ab4);
    /* 00496ab4: movzx ecx, byte ptr [ebp - 0xd] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff3u));
    /* 00496ab8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00496aba: je 0x496abe */ if (fZ) goto L_00496abe;
L_00496abc:; BB(0x00496abc);
    /* 00496abc: jmp 0x496ac3 */ goto L_00496ac3;
L_00496abe:; BB(0x00496abe);
    /* 00496abe: jmp 0x4967cb */ goto L_004967cb;
L_00496ac3:; BB(0x00496ac3);
    /* 00496ac3: mov byte ptr [ebp - 4], 4 */ W8((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00496ac7: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00496aca: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x496acfu); f_004646e0();
    /* 00496acf: mov byte ptr [ebp - 4], 3 */ W8((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00496ad3: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00496ad6: call 0x4a20f0 */ r_esp -= 4; W32(r_esp, 0x496adbu); f_004a20f0();
    /* 00496adb: mov byte ptr [ebp - 4], 2 */ W8((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00496adf: lea ecx, [ebp - 0xe] */ r_ecx = (u32)(r_ebp+0xfffffff2u);
    /* 00496ae2: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x496ae7u); f_00464210();
    /* 00496ae7: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00496aeb: lea ecx, [ebp - 0x2d] */ r_ecx = (u32)(r_ebp+0xffffffd3u);
    /* 00496aee: call 0x464210 */ r_esp -= 4; W32(r_esp, 0x496af3u); f_00464210();
    /* 00496af3: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00496af7: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 00496afa: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x496affu); f_00484470();
    /* 00496aff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00496b06: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 00496b09: call 0x4646e0 */ r_esp -= 4; W32(r_esp, 0x496b0eu); f_004646e0();
    /* 00496b0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00496b11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00496b18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00496b19: mov esp, ebp */ r_esp = r_ebp;
    /* 00496b1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00496b1c: ret 0x34 */ FN_RET(0x004966e0); r_esp += 56; return;
}


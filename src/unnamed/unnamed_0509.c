#include "protos.h"

void f_00509500(void) /* sub_509500 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00509500);
    /* 00509500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00509501: mov ebp, esp */ r_ebp = r_esp;
    /* 00509503: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00509506: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050950c: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x509511u); f_0047e420();
    /* 00509511: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00509514: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00509518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00509519: mov ecx, dword ptr [0x7926f8] */ r_ecx = R32((u32)(0x7926f8u));
    /* 0050951f: call 0x4d8df0 */ r_esp -= 4; W32(r_esp, 0x509524u); f_004d8df0();
    /* 00509524: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
    /* 00509528: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050952c: jne 0x50955f */ if (!fZ) goto L_0050955f;
L_0050952e:; BB(0x0050952e);
    /* 0050952e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00509534: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00509537: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x50953cu); f_004f6640();
    /* 0050953c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0050953f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509541: je 0x50955f */ if (fZ) goto L_0050955f;
L_00509543:; BB(0x00509543);
    /* 00509543: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00509547: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050954b: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00509550: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00509552: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00509553: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00509555: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00509557: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00509559: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
    /* 0050955d: jmp 0x5095a6 */ goto L_005095a6;
L_0050955f:; BB(0x0050955f);
    /* 0050955f: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00509563: jge 0x5095a6 */ if ((fS==fO)) goto L_005095a6;
L_00509565:; BB(0x00509565);
    /* 00509565: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050956b: call 0x47d770 */ r_esp -= 4; W32(r_esp, 0x509570u); f_0047d770();
    /* 00509570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509572: je 0x5095a6 */ if (fZ) goto L_005095a6;
L_00509574:; BB(0x00509574);
    /* 00509574: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00509577: movsx ecx, word ptr [eax*2 + 0x792498] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x792498u));
    /* 0050957f: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509582: je 0x5095a6 */ if (fZ) goto L_005095a6;
L_00509584:; BB(0x00509584);
    /* 00509584: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0050958a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050958d: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x509592u); f_004f6640();
    /* 00509592: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00509595: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00509597: jne 0x5095a6 */ if (!fZ) goto L_005095a6;
L_00509599:; BB(0x00509599);
    /* 00509599: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0050959d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050959e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005095a0: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005095a2: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_005095a6:; BB(0x005095a6);
    /* 005095a6: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005095aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005095ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005095ad: ret  */ FN_RET(0x00509500); r_esp += 4; return;
}


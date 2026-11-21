#include "protos.h"

void f_0059ddf0(void) /* BigRaiseDealToScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059ddf0);
    /* 0059ddf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059ddf1: mov ebp, esp */ r_ebp = r_esp;
    /* 0059ddf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059ddf5: push 0x6a7684 */ { u32 v = 0x6a7684u; r_esp -= 4; W32(r_esp, v); }
    /* 0059ddfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059de00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059de01: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059de04: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059de09: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059de0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059de0c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0059de0f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0059de15: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0059de18: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0059de1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059de1c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059de1f: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x59de24u); f_005fc0d0();
    /* 0059de24: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059de2b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059de2e: mov dword ptr [ecx], 0x6cf034 */ W32((u32)(r_ecx), 0x6cf034u);
    /* 0059de34: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059de37: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0059de3a: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0059de3d: mov dword ptr [ebp - 0x3c], 0x310eb0 */ W32((u32)(r_ebp+0xffffffc4u), 0x310eb0u);
    /* 0059de44: mov dword ptr [ebp - 0x38], 0x310eae */ W32((u32)(r_ebp+0xffffffc8u), 0x310eaeu);
    /* 0059de4b: mov dword ptr [ebp - 0x34], 0x310eb2 */ W32((u32)(r_ebp+0xffffffccu), 0x310eb2u);
    /* 0059de52: mov dword ptr [ebp - 0x30], 0x310eac */ W32((u32)(r_ebp+0xffffffd0u), 0x310eacu);
    /* 0059de59: mov dword ptr [ebp - 0x2c], 0x310eb4 */ W32((u32)(r_ebp+0xffffffd4u), 0x310eb4u);
    /* 0059de60: mov dword ptr [ebp - 0x28], 0x310eb4 */ W32((u32)(r_ebp+0xffffffd8u), 0x310eb4u);
    /* 0059de67: mov dword ptr [ebp - 0x24], 0x310eaf */ W32((u32)(r_ebp+0xffffffdcu), 0x310eafu);
    /* 0059de6e: mov dword ptr [ebp - 0x20], 0x310ead */ W32((u32)(r_ebp+0xffffffe0u), 0x310eadu);
    /* 0059de75: mov dword ptr [ebp - 0x1c], 0x310eb1 */ W32((u32)(r_ebp+0xffffffe4u), 0x310eb1u);
    /* 0059de7c: mov dword ptr [ebp - 0x18], 0x310eab */ W32((u32)(r_ebp+0xffffffe8u), 0x310eabu);
    /* 0059de83: mov dword ptr [ebp - 0x14], 0x310eb3 */ W32((u32)(r_ebp+0xffffffecu), 0x310eb3u);
    /* 0059de8a: mov dword ptr [ebp - 0x10], 0x310eb3 */ W32((u32)(r_ebp+0xfffffff0u), 0x310eb3u);
    /* 0059de91: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059de94: mov edx, dword ptr [ebp + ecx*4 - 0x3c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffc4u));
    /* 0059de98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059de99: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059de9e: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0059dea4: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59dea9u); f_005eaf00();
    /* 0059dea9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0059deac: mov edx, dword ptr [ebp + ecx*4 - 0x24] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffdcu));
    /* 0059deb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059deb1: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059deb6: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059debc: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x59dec1u); f_005eaf00();
    /* 0059dec1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dec3: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059dec9: mov edx, dword ptr [ecx + 0xa0] */ r_edx = R32((u32)(r_ecx+0xa0u));
    /* 0059decf: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059ded4: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0059deda: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059dedc: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059dee2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59dee4u); call_ind(t); }
    /* 0059dee4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dee6: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059deec: mov edx, dword ptr [ecx + 0x9c] */ r_edx = R32((u32)(r_ecx+0x9cu));
    /* 0059def2: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059def7: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 0059defd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059deff: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059df05: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59df07u); call_ind(t); }
    /* 0059df07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059df0e: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0059df11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059df14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059df1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059df1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059df1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059df1f: ret 8 */ FN_RET(0x0059ddf0); r_esp += 12; return;
}

void f_0059df30(void) /* BigRaiseDealToScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0059df30);
    /* 0059df30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059df31: mov ebp, esp */ r_ebp = r_esp;
    /* 0059df33: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059df36: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0059df3b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059df3d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0059df40: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0059df43: mov word ptr [ebp - 0x1c], 0x24 */ W16((u32)(r_ebp+0xffffffe4u), 0x24u);
    /* 0059df49: mov word ptr [ebp - 0x1a], 0x15 */ W16((u32)(r_ebp+0xffffffe6u), 0x15u);
    /* 0059df4f: mov word ptr [ebp - 0x18], 0x1c */ W16((u32)(r_ebp+0xffffffe8u), 0x1cu);
    /* 0059df55: mov word ptr [ebp - 0x16], 0x15 */ W16((u32)(r_ebp+0xffffffeau), 0x15u);
    /* 0059df5b: mov word ptr [ebp - 0x14], 0x13 */ W16((u32)(r_ebp+0xffffffecu), 0x13u);
    /* 0059df61: mov word ptr [ebp - 0x12], 0x13 */ W16((u32)(r_ebp+0xffffffeeu), 0x13u);
    /* 0059df67: mov word ptr [ebp - 4], 3 */ W16((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0059df6d: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059df72: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 0059df78: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0059df7b: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059df81: mov eax, dword ptr [edx + 0x9c] */ r_eax = R32((u32)(r_edx+0x9cu));
    /* 0059df87: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0059df8a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059df8d: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x59df92u); f_005fc360();
    /* 0059df92: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059df95: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059df99: je 0x59dfb4 */ if (fZ) goto L_0059dfb4;
L_0059df9b:; BB(0x0059df9b);
    /* 0059df9b: cmp dword ptr [ebp - 0x28], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059df9f: je 0x59e03d */ if (fZ) goto L_0059e03d;
L_0059dfa5:; BB(0x0059dfa5);
    /* 0059dfa5: cmp dword ptr [ebp - 0x28], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059dfa9: je 0x59e22a */ if (fZ) goto L_0059e22a;
L_0059dfaf:; BB(0x0059dfaf);
    /* 0059dfaf: jmp 0x59e255 */ goto L_0059e255;
L_0059dfb4:; BB(0x0059dfb4);
    /* 0059dfb4: mov word ptr [0x7935bc], 0 */ W16((u32)(0x7935bcu), 0x0u);
    /* 0059dfbd: mov word ptr [0x7935b8], 0 */ W16((u32)(0x7935b8u), 0x0u);
    /* 0059dfc6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059dfc9: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x59dfceu); f_005eb240();
    /* 0059dfce: mov word ptr [0x7935b4], ax */ W16((u32)(0x7935b4u), (u16)r_eax);
    /* 0059dfd4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059dfd7: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x59dfdcu); f_005eb240();
    /* 0059dfdc: mov word ptr [0x7935b0], ax */ W16((u32)(0x7935b0u), (u16)r_eax);
    /* 0059dfe2: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dfe4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059dfe7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059dfe9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059dfec: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0059dfef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59dff1u); call_ind(t); }
    /* 0059dff1: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0059dff3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059dff6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059dff8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059dffb: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0059dffe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e000u); call_ind(t); }
    /* 0059e000: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e002: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e005: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e007: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e00a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059e010: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e012u); call_ind(t); }
    /* 0059e012: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e014: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e017: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e019: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e01c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059e022: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e024u); call_ind(t); }
    /* 0059e024: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0059e028: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e029: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e02b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e02e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059e030: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e033: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0059e036: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59e038u); call_ind(t); }
    /* 0059e038: jmp 0x59e255 */ goto L_0059e255;
L_0059e03d:; BB(0x0059e03d);
    /* 0059e03d: mov ax, word ptr [0x7935bc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x7935bcu))) & 0xffffu);
    /* 0059e043: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0059e047: mov word ptr [0x7935bc], ax */ W16((u32)(0x7935bcu), (u16)r_eax);
    /* 0059e04d: movsx ecx, word ptr [0x7935bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e054: movsx edx, word ptr [0x7935b4] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7935b4u));
    /* 0059e05b: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e05d: jg 0x59e077 */ if ((!fZ&&fS==fO)) goto L_0059e077;
L_0059e05f:; BB(0x0059e05f);
    /* 0059e05f: movsx eax, word ptr [0x7935bc] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e067: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e06a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e06c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e06f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059e075: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e077u); call_ind(t); }
L_0059e077:; BB(0x0059e077);
    /* 0059e077: movsx ecx, word ptr [0x7935bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e07e: movsx edx, word ptr [0x7935b0] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7935b0u));
    /* 0059e085: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e087: jg 0x59e0a1 */ if ((!fZ&&fS==fO)) goto L_0059e0a1;
L_0059e089:; BB(0x0059e089);
    /* 0059e089: movsx eax, word ptr [0x7935bc] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e091: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e094: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e096: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e099: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059e09f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e0a1u); call_ind(t); }
L_0059e0a1:; BB(0x0059e0a1);
    /* 0059e0a1: movsx ecx, word ptr [0x7935bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e0a8: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e0ab: jne 0x59e0f4 */ if (!fZ) goto L_0059e0f4;
L_0059e0ad:; BB(0x0059e0ad);
    /* 0059e0ad: mov edx, dword ptr [0x7935c4] */ r_edx = R32((u32)(0x7935c4u));
    /* 0059e0b3: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 0059e0b9: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059e0bf: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 0059e0c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059e0c7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0059e0ca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e0ccu); call_ind(t); }
    /* 0059e0cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e0ce: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059e0d4: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0059e0da: mov eax, dword ptr [0x7935c4] */ r_eax = R32((u32)(0x7935c4u));
    /* 0059e0df: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 0059e0e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059e0e7: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0059e0ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e0efu); call_ind(t); }
    /* 0059e0ef: jmp 0x59e1d2 */ goto L_0059e1d2;
L_0059e0f4:; BB(0x0059e0f4);
    /* 0059e0f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e0f7: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e0fb: je 0x59e106 */ if (fZ) goto L_0059e106;
L_0059e0fd:; BB(0x0059e0fd);
    /* 0059e0fd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e100: cmp dword ptr [edx + 0x20], 2 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e104: jne 0x59e135 */ if (!fZ) goto L_0059e135;
L_0059e106:; BB(0x0059e106);
    /* 0059e106: movsx eax, word ptr [0x7935bc] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e10d: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e110: jne 0x59e135 */ if (!fZ) goto L_0059e135;
L_0059e112:; BB(0x0059e112);
    /* 0059e112: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e114: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e117: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e119: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059e11c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0059e11f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e121u); call_ind(t); }
    /* 0059e121: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e123: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e126: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0059e128: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0059e12b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0059e12e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e130u); call_ind(t); }
    /* 0059e130: jmp 0x59e1d2 */ goto L_0059e1d2;
L_0059e135:; BB(0x0059e135);
    /* 0059e135: movsx ecx, word ptr [0x7935bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e13c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e13f: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0059e142: movsx edx, word ptr [ebp + eax*2 - 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+r_eax*2+0xffffffe4u));
    /* 0059e147: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e149: jle 0x59e1d2 */ if ((fZ||fS!=fO)) goto L_0059e1d2;
L_0059e14f:; BB(0x0059e14f);
    /* 0059e14f: movsx eax, word ptr [0x7935b8] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7935b8u));
    /* 0059e156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e158: jne 0x59e1d2 */ if (!fZ) goto L_0059e1d2;
L_0059e15a:; BB(0x0059e15a);
    /* 0059e15a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e15d: cmp dword ptr [ecx + 0x20], 4 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e161: jne 0x59e16c */ if (!fZ) goto L_0059e16c;
L_0059e163:; BB(0x0059e163);
    /* 0059e163: mov dword ptr [ebp - 0x2c], 3 */ W32((u32)(r_ebp+0xffffffd4u), 0x3u);
    /* 0059e16a: jmp 0x59e17e */ goto L_0059e17e;
L_0059e16c:; BB(0x0059e16c);
    /* 0059e16c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e16f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0059e171: cmp dword ptr [edx + 0x20], 5 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e175: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0059e178: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059e17b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0059e17e:; BB(0x0059e17e);
    /* 0059e17e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0059e181: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
L_0059e184:; BB(0x0059e184);
    /* 0059e184: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059e187: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 0059e18a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0059e18d: js 0x59e1c1 */ if (fS) goto L_0059e1c1;
L_0059e18f:; BB(0x0059e18f);
    /* 0059e18f: mov eax, dword ptr [0x7935d0] */ r_eax = R32((u32)(0x7935d0u));
    /* 0059e194: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0059e197: call 0x6436c0 */ r_esp -= 4; W32(r_esp, 0x59e19cu); f_006436c0();
    /* 0059e19c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059e19d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e1a0: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0059e1a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e1a4: mov ecx, dword ptr [0x7935d0] */ r_ecx = R32((u32)(0x7935d0u));
    /* 0059e1aa: call 0x5a1e00 */ r_esp -= 4; W32(r_esp, 0x59e1afu); f_005a1e00();
    /* 0059e1af: mov ax, word ptr [0x7935b8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(0x7935b8u))) & 0xffffu);
    /* 0059e1b5: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0059e1b9: mov word ptr [0x7935b8], ax */ W16((u32)(0x7935b8u), (u16)r_eax);
    /* 0059e1bf: jmp 0x59e184 */ goto L_0059e184;
L_0059e1c1:; BB(0x0059e1c1);
    /* 0059e1c1: mov ecx, dword ptr [0x7935c4] */ r_ecx = R32((u32)(0x7935c4u));
    /* 0059e1c7: call 0x59c2d0 */ r_esp -= 4; W32(r_esp, 0x59e1ccu); f_0059c2d0();
    /* 0059e1cc: mov word ptr [ebp - 4], 2 */ W16((u32)(r_ebp+0xfffffffcu), 0x2u);
L_0059e1d2:; BB(0x0059e1d2);
    /* 0059e1d2: movsx ecx, word ptr [0x7935bc] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e1d9: movsx edx, word ptr [0x7935b4] */ r_edx = (u32)(i32)(i16)R16((u32)(0x7935b4u));
    /* 0059e1e0: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e1e2: jl 0x59e1f6 */ if ((fS!=fO)) goto L_0059e1f6;
L_0059e1e4:; BB(0x0059e1e4);
    /* 0059e1e4: movsx eax, word ptr [0x7935bc] */ r_eax = (u32)(i32)(i16)R16((u32)(0x7935bcu));
    /* 0059e1eb: movsx ecx, word ptr [0x7935b0] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x7935b0u));
    /* 0059e1f2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059e1f4: jge 0x59e207 */ if ((fS==fO)) goto L_0059e207;
L_0059e1f6:; BB(0x0059e1f6);
    /* 0059e1f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e1f8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e1fb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059e1fd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e200: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0059e203: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59e205u); call_ind(t); }
    /* 0059e205: jmp 0x59e216 */ goto L_0059e216;
L_0059e207:; BB(0x0059e207);
    /* 0059e207: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e209: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e20c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0059e20e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e211: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0059e214: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e216u); call_ind(t); }
L_0059e216:; BB(0x0059e216);
    /* 0059e216: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0059e21a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0059e21b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e21e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0059e220: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e223: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0059e226: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x59e228u); call_ind(t); }
    /* 0059e228: jmp 0x59e255 */ goto L_0059e255;
L_0059e22a:; BB(0x0059e22a);
    /* 0059e22a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e22d: cmp dword ptr [eax + 0x10], 0 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059e231: je 0x59e255 */ if (fZ) goto L_0059e255;
L_0059e233:; BB(0x0059e233);
    /* 0059e233: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e235: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e238: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0059e23b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e23e: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0059e241: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0059e243: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0059e246: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x59e248u); call_ind(t); }
    /* 0059e248: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059e24a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0059e24d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0059e250: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x59e255u); f_005fc420();
L_0059e255:; BB(0x0059e255);
    /* 0059e255: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0059e258: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0059e25a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x59e25fu); f_00686d72();
    /* 0059e25f: mov esp, ebp */ r_esp = r_ebp;
    /* 0059e261: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059e262: ret  */ FN_RET(0x0059df30); r_esp += 4; return;
}


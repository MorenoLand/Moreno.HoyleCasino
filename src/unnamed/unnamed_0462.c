#include "protos.h"

void f_004620c0(void) /* sub_4620C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004620c0);
    /* 004620c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004620c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004620c3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004620c6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004620cb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004620cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004620d0: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 004620d3: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 004620d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004620d8: push 0x6ba5ec */ { u32 v = 0x6ba5ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004620dd: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004620e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004620e1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4620e7u); call_ind(t); }
    /* 004620e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004620ea: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004620ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004620ee: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4620f3u); f_00630f40();
    /* 004620f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004620f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004620f7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004620fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004620fb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x462100u); f_00686d8e();
    /* 00462100: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462103: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462106: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00462108: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x46210du); f_00686d72();
    /* 0046210d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046210f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462110: ret 8 */ FN_RET(0x004620c0); r_esp += 12; return;
}

void f_00462120(void) /* sub_462120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462120);
    /* 00462120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462121: mov ebp, esp */ r_ebp = r_esp;
    /* 00462123: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462126: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046212b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046212d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00462130: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00462133: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00462137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462138: push 0x6ba604 */ { u32 v = 0x6ba604u; r_esp -= 4; W32(r_esp, v); }
    /* 0046213d: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00462140: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462141: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x462147u); call_ind(t); }
    /* 00462147: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046214a: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0046214d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046214e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x462153u); f_00630f40();
    /* 00462153: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462156: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462157: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046215a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046215b: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x462160u); f_00686d8e();
    /* 00462160: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462163: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462166: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00462168: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x46216du); f_00686d72();
    /* 0046216d: mov esp, ebp */ r_esp = r_ebp;
    /* 0046216f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462170: ret 8 */ FN_RET(0x00462120); r_esp += 12; return;
}

void f_00462180(void) /* sub_462180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462180);
    /* 00462180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462181: mov ebp, esp */ r_ebp = r_esp;
    /* 00462183: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462186: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0046218b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046218d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00462190: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 00462193: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00462197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462198: push 0x6ba628 */ { u32 v = 0x6ba628u; r_esp -= 4; W32(r_esp, v); }
    /* 0046219d: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 004621a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004621a1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x4621a7u); call_ind(t); }
    /* 004621a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004621aa: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 004621ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004621ae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x4621b3u); f_00630f40();
    /* 004621b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004621b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004621b7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004621ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004621bb: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x4621c0u); f_00686d8e();
    /* 004621c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004621c3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004621c6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004621c8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x4621cdu); f_00686d72();
    /* 004621cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004621cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004621d0: ret 8 */ FN_RET(0x00462180); r_esp += 12; return;
}

void f_00462370(void) /* sub_462370 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462370);
    /* 00462370: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462371: mov ebp, esp */ r_ebp = r_esp;
    /* 00462373: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462376: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00462379: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046237c: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046237f: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00462382: mov edx, dword ptr [ecx + eax + 0x48] */ r_edx = R32((u32)(r_ecx+r_eax+0x48u));
    /* 00462386: mov eax, dword ptr [ecx + eax + 0x4c] */ r_eax = R32((u32)(r_ecx+r_eax+0x4cu));
    /* 0046238a: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0046238d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00462390: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462394: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x462399u); f_0064c8a0();
    /* 00462399: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046239c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0046239f: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004623a2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004623a5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004623a8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004623ab: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004623ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004623b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004623b2: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4623b7u); f_0064c8a0();
    /* 004623b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004623ba: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004623bd: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 004623c0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004623c3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004623c6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004623c9: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004623cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004623ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004623d0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4623d5u); f_0064c8a0();
    /* 004623d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004623d8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004623db: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004623de: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004623e1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004623e4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004623e7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004623ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004623ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004623ee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4623f3u); f_005dcb00();
    /* 004623f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004623f6: mov ecx, eax */ r_ecx = r_eax;
    /* 004623f8: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x4623fdu); f_005d5a50();
    /* 004623fd: cmp eax, 0x3b9aca00 */ {  u32 a = r_eax; u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462402: jl 0x462409 */ if ((fS!=fO)) goto L_00462409;
L_00462404:; BB(0x00462404);
    /* 00462404: jmp 0x46271c */ goto L_0046271c;
L_00462409:; BB(0x00462409);
    /* 00462409: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0046240c: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0046240f: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462413: je 0x46242e */ if (fZ) goto L_0046242e;
L_00462415:; BB(0x00462415);
    /* 00462415: cmp dword ptr [ebp - 0x78], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462419: je 0x4625a9 */ if (fZ) goto L_004625a9;
L_0046241f:; BB(0x0046241f);
    /* 0046241f: cmp dword ptr [ebp - 0x78], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462423: je 0x462589 */ if (fZ) goto L_00462589;
L_00462429:; BB(0x00462429);
    /* 00462429: jmp 0x46271c */ goto L_0046271c;
L_0046242e:; BB(0x0046242e);
    /* 0046242e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462431: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00462437: mov edx, dword ptr [ecx + eax*4 + 0x18] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 0046243b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046243e: mov ecx, dword ptr [0x790740] */ r_ecx = R32((u32)(0x790740u));
    /* 00462444: mov ecx, dword ptr [ecx + eax*4 + 0x18] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x18u));
    /* 00462448: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0046244a: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00462450: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x462452u); call_ind(t); }
    /* 00462452: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00462455: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462456: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46245bu); f_005dcb00();
    /* 0046245b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046245e: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462465: jle 0x46247d */ if ((fZ||fS!=fO)) goto L_0046247d;
L_00462467:; BB(0x00462467);
    /* 00462467: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046246a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046246b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x462470u); f_005dcb00();
    /* 00462470: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462473: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0046247d:; BB(0x0046247d);
    /* 0046247d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462480: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462481: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x462486u); f_005dcb00();
    /* 00462486: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462489: add eax, 0x4a8 */ {  u32 a = r_eax; u32 b = 0x4a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046248e: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00462491: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00462494: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00462496: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00462499: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0046249c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0046249e: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 004624a4: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 004624aa: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004624ad: cmp dword ptr [ebp - 0x5c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004624b1: je 0x462527 */ if (fZ) goto L_00462527;
L_004624b3:; BB(0x004624b3);
    /* 004624b3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004624b6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004624b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004624bc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004624bf: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004624c2: fld qword ptr [0x6b3730] */ FPUSH(R_F64((u32)(0x6b3730u)));
    /* 004624c8: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004624cb: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 004624ce: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x4624d3u); f_0064c560();
    /* 004624d3: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 004624d9: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 004624df: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004624e2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004624e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004624e6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004624e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004624ea: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 004624ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004624ee: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4624f3u); f_005dcb00();
    /* 004624f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004624f6: mov ecx, eax */ r_ecx = r_eax;
    /* 004624f8: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x4624fdu); f_005d5fb0();
    /* 004624fd: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00462503: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00462509: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0046250c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0046250f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462510: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00462513: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462514: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00462517: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462518: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46251du); f_005dcb00();
    /* 0046251d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462520: mov ecx, eax */ r_ecx = r_eax;
    /* 00462522: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x462527u); f_005d5cf0();
L_00462527:; BB(0x00462527);
    /* 00462527: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046252a: imul eax, eax, -1 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xffffffffu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0046252d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00462530: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462533: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00462536: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00462539: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046253c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046253d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00462540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462541: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00462544: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462545: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46254au); f_005dcb00();
    /* 0046254a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046254d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046254f: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x462554u); f_005d5fb0();
    /* 00462554: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462556: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462558: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x46255du); f_0064c8a0();
    /* 0046255d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462560: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00462563: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00462566: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462568: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046256b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046256c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0046256f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462570: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00462573: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462574: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00462577: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00462579: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0046257c: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 00462582: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x462584u); call_ind(t); }
    /* 00462584: jmp 0x46271c */ goto L_0046271c;
L_00462589:; BB(0x00462589);
    /* 00462589: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046258c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046258d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462590: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462591: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00462594: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462595: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46259au); f_005dcb00();
    /* 0046259a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046259d: mov ecx, eax */ r_ecx = r_eax;
    /* 0046259f: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x4625a4u); f_005d5cf0();
    /* 004625a4: jmp 0x46271c */ goto L_0046271c;
L_004625a9:; BB(0x004625a9);
    /* 004625a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004625ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004625ad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4625b2u); f_005dcb00();
    /* 004625b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004625b5: cmp dword ptr [eax + 0x4a8], 0 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004625bc: jge 0x4625d4 */ if ((fS==fO)) goto L_004625d4;
L_004625be:; BB(0x004625be);
    /* 004625be: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004625c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004625c2: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4625c7u); f_005dcb00();
    /* 004625c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004625ca: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_004625d4:; BB(0x004625d4);
    /* 004625d4: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004625d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004625d8: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4625ddu); f_005dcb00();
    /* 004625dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004625e0: mov ecx, eax */ r_ecx = r_eax;
    /* 004625e2: call 0x5d7540 */ r_esp -= 4; W32(r_esp, 0x4625e7u); f_005d7540();
    /* 004625e7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004625ea: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004625ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004625f0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004625f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004625f6: fld qword ptr [0x6b3730] */ FPUSH(R_F64((u32)(0x6b3730u)));
    /* 004625fc: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004625ff: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00462602: call 0x64c560 */ r_esp -= 4; W32(r_esp, 0x462607u); f_0064c560();
    /* 00462607: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0046260d: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00462613: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00462616: cmp dword ptr [ebp - 0x68], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046261a: je 0x46267f */ if (fZ) goto L_0046267f;
L_0046261c:; BB(0x0046261c);
    /* 0046261c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046261f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00462621: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00462624: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462627: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00462629: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0046262c: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 00462631: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 00462637: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0046263a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046263d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046263e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00462641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462642: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00462645: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462646: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x46264bu); f_005dcb00();
    /* 0046264b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046264e: mov ecx, eax */ r_ecx = r_eax;
    /* 00462650: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x462655u); f_005d5fb0();
    /* 00462655: mov edx, dword ptr [0x790738] */ r_edx = R32((u32)(0x790738u));
    /* 0046265b: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 00462661: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00462664: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00462667: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462668: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046266b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0046266c: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0046266f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462670: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x462675u); f_005dcb00();
    /* 00462675: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462678: mov ecx, eax */ r_ecx = r_eax;
    /* 0046267a: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x46267fu); f_005d5cf0();
L_0046267f:; BB(0x0046267f);
    /* 0046267f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462682: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462683: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462686: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462687: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0046268a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046268b: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0046268e: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x462693u); f_0064c5c0();
    /* 00462693: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00462695: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00462698: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0046269b: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0046269e: cmp dword ptr [ebp - 0x10], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004626a5: jl 0x4626c8 */ if ((fS!=fO)) goto L_004626c8;
L_004626a7:; BB(0x004626a7);
    /* 004626a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004626a9: push 0x3b9aca00 */ { u32 v = 0x3b9aca00u; r_esp -= 4; W32(r_esp, v); }
    /* 004626ae: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4626b3u); f_0064c8a0();
    /* 004626b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004626b6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004626b9: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004626bc: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 004626bf: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004626c2: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004626c5: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_004626c8:; BB(0x004626c8);
    /* 004626c8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004626cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004626cc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004626cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004626d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004626d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004626d4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4626d9u); f_005dcb00();
    /* 004626d9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004626dc: mov ecx, eax */ r_ecx = r_eax;
    /* 004626de: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x4626e3u); f_005d5cf0();
    /* 004626e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004626e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004626e7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004626ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004626eb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004626ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004626ef: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4626f4u); f_005dcb00();
    /* 004626f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004626f7: mov ecx, eax */ r_ecx = r_eax;
    /* 004626f9: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x4626feu); f_005d5fb0();
    /* 004626fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462700: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00462703: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462704: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462707: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462708: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046270b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046270c: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0046270f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00462711: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00462714: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0046271a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46271cu); call_ind(t); }
L_0046271c:; BB(0x0046271c);
    /* 0046271c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046271e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046271f: ret 8 */ FN_RET(0x00462370); r_esp += 12; return;
}

void f_00462730(void) /* sub_462730 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462730);
    /* 00462730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462731: mov ebp, esp */ r_ebp = r_esp;
    /* 00462733: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462736: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00462739: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046273b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046273d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x462742u); f_0064c8a0();
    /* 00462742: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462745: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00462748: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0046274b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046274e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00462751: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462754: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00462757: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046275a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046275c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0046275f: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00462765: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x462767u); call_ind(t); }
    /* 00462767: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0046276a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046276c: je 0x4627a2 */ if (fZ) goto L_004627a2;
L_0046276e:; BB(0x0046276e);
    /* 0046276e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00462770: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00462773: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462774: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 00462777: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462778: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0046277b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0046277d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00462780: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 00462786: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x462788u); call_ind(t); }
    /* 00462788: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046278c: jne 0x46279e */ if (!fZ) goto L_0046279e;
L_0046278e:; BB(0x0046278e);
    /* 0046278e: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00462794: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00462797: mov byte ptr [ecx + 0xf4], 1 */ W8((u32)(r_ecx+0xf4u), 0x1u);
L_0046279e:; BB(0x0046279e);
    /* 0046279e: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004627a0: jmp 0x4627a4 */ goto L_004627a4;
L_004627a2:; BB(0x004627a2);
    /* 004627a2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004627a4:; BB(0x004627a4);
    /* 004627a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004627a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004627a7: ret 8 */ FN_RET(0x00462730); r_esp += 12; return;
}

void f_004627b0(void) /* sub_4627B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004627b0);
    /* 004627b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004627b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004627b3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004627b6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004627b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004627bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004627bd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4627c2u); f_0064c8a0();
    /* 004627c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004627c5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004627c8: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004627cb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004627ce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004627d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004627d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004627d7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004627da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004627dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004627df: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 004627e5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4627e7u); call_ind(t); }
    /* 004627e7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004627ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004627ec: je 0x4628bc */ if (fZ) goto L_004628bc;
L_004627f2:; BB(0x004627f2);
    /* 004627f2: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 004627f5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004627f6: mov edx, dword ptr [0x7947e4] */ r_edx = R32((u32)(0x7947e4u));
    /* 004627fc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004627fe: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00462804: mov edx, dword ptr [eax + 0x25c] */ r_edx = R32((u32)(r_eax+0x25cu));
    /* 0046280a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46280cu); call_ind(t); }
    /* 0046280c: mov ecx, eax */ r_ecx = r_eax;
    /* 0046280e: call 0x5d5de0 */ r_esp -= 4; W32(r_esp, 0x462813u); f_005d5de0();
    /* 00462813: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462817: jne 0x462831 */ if (!fZ) goto L_00462831;
L_00462819:; BB(0x00462819);
    /* 00462819: mov eax, dword ptr [0x7947e4] */ r_eax = R32((u32)(0x7947e4u));
    /* 0046281e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00462820: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00462826: mov eax, dword ptr [edx + 0x2b0] */ r_eax = R32((u32)(r_edx+0x2b0u));
    /* 0046282c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x46282eu); call_ind(t); }
    /* 0046282e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00462831:; BB(0x00462831);
    /* 00462831: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462834: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00462837: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0046283a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046283d: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00462840: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00462843: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00462845: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462849: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0046284c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046284d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00462850: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00462852: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00462855: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0046285b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46285du); call_ind(t); }
    /* 0046285d: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462861: jne 0x4628b8 */ if (!fZ) goto L_004628b8;
L_00462863:; BB(0x00462863);
    /* 00462863: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462865: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462867: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x46286cu); f_0064c8a0();
    /* 0046286c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046286f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00462872: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00462875: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462878: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0046287b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0046287e: lea edx, [ecx + eax + 0x48] */ r_edx = (u32)(r_ecx+r_eax+0x48u);
    /* 00462882: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462885: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 00462888: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 0046288c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0046288f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00462892: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00462895: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462896: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00462899: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046289a: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 0046289d: call 0x64c820 */ r_esp -= 4; W32(r_esp, 0x4628a2u); f_0064c820();
    /* 004628a2: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004628a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004628a7: je 0x4628b8 */ if (fZ) goto L_004628b8;
L_004628a9:; BB(0x004628a9);
    /* 004628a9: mov eax, dword ptr [0x790738] */ r_eax = R32((u32)(0x790738u));
    /* 004628ae: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004628b1: mov byte ptr [eax + 0xf4], 0 */ W8((u32)(r_eax+0xf4u), 0x0u);
L_004628b8:; BB(0x004628b8);
    /* 004628b8: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004628ba: jmp 0x4628be */ goto L_004628be;
L_004628bc:; BB(0x004628bc);
    /* 004628bc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004628be:; BB(0x004628be);
    /* 004628be: mov esp, ebp */ r_esp = r_ebp;
    /* 004628c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004628c1: ret 8 */ FN_RET(0x004627b0); r_esp += 12; return;
}

void f_00462930(void) /* sub_462930 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462930);
    /* 00462930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462931: mov ebp, esp */ r_ebp = r_esp;
    /* 00462933: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462936: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00462937: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0046293e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00462945: jmp 0x462950 */ goto L_00462950;
L_00462947:; BB(0x00462947);
    /* 00462947: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046294a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0046294d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00462950:; BB(0x00462950);
    /* 00462950: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462953: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462956: jge 0x462977 */ if ((fS==fO)) goto L_00462977;
L_00462958:; BB(0x00462958);
    /* 00462958: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046295b: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0046295e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462961: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00462964: mov cx, word ptr [esi + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2))) & 0xffffu);
    /* 00462968: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 0046296c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046296f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00462972: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00462975: jmp 0x462947 */ goto L_00462947;
L_00462977:; BB(0x00462977);
    /* 00462977: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0046297e: jmp 0x462989 */ goto L_00462989;
L_00462980:; BB(0x00462980);
    /* 00462980: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462983: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00462986: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00462989:; BB(0x00462989);
    /* 00462989: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046298c: cmp ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0046298f: jge 0x4629b0 */ if ((fS==fO)) goto L_004629b0;
L_00462991:; BB(0x00462991);
    /* 00462991: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462994: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00462997: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046299a: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0046299d: mov cx, word ptr [esi + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+r_ecx*2))) & 0xffffu);
    /* 004629a1: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 004629a5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004629a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004629ab: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 004629ae: jmp 0x462980 */ goto L_00462980;
L_004629b0:; BB(0x004629b0);
    /* 004629b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004629b1: mov esp, ebp */ r_esp = r_ebp;
    /* 004629b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004629b4: ret  */ FN_RET(0x00462930); r_esp += 4; return;
}

void f_004629c0(void) /* sub_4629C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004629c0);
    /* 004629c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004629c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004629c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004629c6: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004629cd: jmp 0x4629d8 */ goto L_004629d8;
L_004629cf:; BB(0x004629cf);
    /* 004629cf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004629d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004629d5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004629d8:; BB(0x004629d8);
    /* 004629d8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004629db: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004629de: jge 0x462a2d */ if ((fS==fO)) goto L_00462a2d;
L_004629e0:; BB(0x004629e0);
    /* 004629e0: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 004629e4: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004629eb: jmp 0x4629f6 */ goto L_004629f6;
L_004629ed:; BB(0x004629ed);
    /* 004629ed: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004629f0: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004629f3: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_004629f6:; BB(0x004629f6);
    /* 004629f6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004629f9: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004629fc: jge 0x462a1e */ if ((fS==fO)) goto L_00462a1e;
L_004629fe:; BB(0x004629fe);
    /* 004629fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462a01: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00462a04: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00462a08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462a0b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00462a0e: movzx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00462a12: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462a14: jne 0x462a1c */ if (!fZ) goto L_00462a1c;
L_00462a16:; BB(0x00462a16);
    /* 00462a16: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 00462a1a: jmp 0x462a1e */ goto L_00462a1e;
L_00462a1c:; BB(0x00462a1c);
    /* 00462a1c: jmp 0x4629ed */ goto L_004629ed;
L_00462a1e:; BB(0x00462a1e);
    /* 00462a1e: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00462a22: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462a24: jne 0x462a2b */ if (!fZ) goto L_00462a2b;
L_00462a26:; BB(0x00462a26);
    /* 00462a26: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00462a29: jmp 0x462a30 */ goto L_00462a30;
L_00462a2b:; BB(0x00462a2b);
    /* 00462a2b: jmp 0x4629cf */ goto L_004629cf;
L_00462a2d:; BB(0x00462a2d);
    /* 00462a2d: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00462a30:; BB(0x00462a30);
    /* 00462a30: mov esp, ebp */ r_esp = r_ebp;
    /* 00462a32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462a33: ret  */ FN_RET(0x004629c0); r_esp += 4; return;
}

void f_00462a40(void) /* sub_462A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462a40);
    /* 00462a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00462a43: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462a46: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00462a4b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00462a4d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00462a50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00462a51: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00462a58: jmp 0x462a63 */ goto L_00462a63;
L_00462a5a:; BB(0x00462a5a);
    /* 00462a5a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00462a5d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00462a60: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_00462a63:; BB(0x00462a63);
    /* 00462a63: cmp dword ptr [ebp - 0x30], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462a67: jge 0x462a7f */ if ((fS==fO)) goto L_00462a7f;
L_00462a69:; BB(0x00462a69);
    /* 00462a69: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00462a6c: mov word ptr [ebp + ecx*2 - 0x2c], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffd4u), 0x0u);
    /* 00462a73: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00462a76: mov word ptr [ebp + edx*2 - 0x18], 0 */ W16((u32)(r_ebp+r_edx*2+0xffffffe8u), 0x0u);
    /* 00462a7d: jmp 0x462a5a */ goto L_00462a5a;
L_00462a7f:; BB(0x00462a7f);
    /* 00462a7f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00462a82: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462a85: jle 0x462b58 */ if ((fZ||fS!=fO)) goto L_00462b58;
L_00462a8b:; BB(0x00462a8b);
    /* 00462a8b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00462a92: jmp 0x462a9d */ goto L_00462a9d;
L_00462a94:; BB(0x00462a94);
    /* 00462a94: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00462a97: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00462a9a: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
L_00462a9d:; BB(0x00462a9d);
    /* 00462a9d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00462aa0: cmp edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462aa3: jge 0x462b56 */ if ((fS==fO)) goto L_00462b56;
L_00462aa9:; BB(0x00462aa9);
    /* 00462aa9: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00462ab0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00462ab7: jmp 0x462ac2 */ goto L_00462ac2;
L_00462ab9:; BB(0x00462ab9);
    /* 00462ab9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00462abc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00462abf: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_00462ac2:; BB(0x00462ac2);
    /* 00462ac2: cmp dword ptr [ebp - 0x3c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462ac6: jge 0x462aef */ if ((fS==fO)) goto L_00462aef;
L_00462ac8:; BB(0x00462ac8);
    /* 00462ac8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00462acb: cmp ecx, dword ptr [ebp - 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462ace: jne 0x462ad2 */ if (!fZ) goto L_00462ad2;
L_00462ad0:; BB(0x00462ad0);
    /* 00462ad0: jmp 0x462ab9 */ goto L_00462ab9;
L_00462ad2:; BB(0x00462ad2);
    /* 00462ad2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00462ad5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00462ad8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00462adb: mov ax, word ptr [ecx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00462adf: mov word ptr [ebp + edx*2 - 0x2c], ax */ W16((u32)(r_ebp+r_edx*2+0xffffffd4u), (u16)r_eax);
    /* 00462ae4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00462ae7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00462aea: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00462aed: jmp 0x462ab9 */ goto L_00462ab9;
L_00462aef:; BB(0x00462aef);
    /* 00462aef: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00462af2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462af3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00462af6: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00462af9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462afa: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 00462afd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462afe: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00462b01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462b02: call 0x462a40 */ r_esp -= 4; W32(r_esp, 0x462b07u); f_00462a40();
    /* 00462b07: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462b0a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462b0e: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00462b11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462b12: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00462b15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462b16: call 0x462da0 */ r_esp -= 4; W32(r_esp, 0x462b1bu); f_00462da0();
    /* 00462b1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462b1e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462b21: jne 0x462b51 */ if (!fZ) goto L_00462b51;
L_00462b23:; BB(0x00462b23);
    /* 00462b23: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00462b2a: jmp 0x462b35 */ goto L_00462b35;
L_00462b2c:; BB(0x00462b2c);
    /* 00462b2c: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00462b2f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00462b32: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00462b35:; BB(0x00462b35);
    /* 00462b35: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00462b38: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462b3b: jge 0x462b51 */ if ((fS==fO)) goto L_00462b51;
L_00462b3d:; BB(0x00462b3d);
    /* 00462b3d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00462b40: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00462b43: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00462b46: mov cx, word ptr [ebp + ecx*2 - 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+r_ecx*2+0xffffffe8u))) & 0xffffu);
    /* 00462b4b: mov word ptr [eax + edx*2], cx */ W16((u32)(r_eax+r_edx*2), (u16)r_ecx);
    /* 00462b4f: jmp 0x462b2c */ goto L_00462b2c;
L_00462b51:; BB(0x00462b51);
    /* 00462b51: jmp 0x462a94 */ goto L_00462a94;
L_00462b56:; BB(0x00462b56);
    /* 00462b56: jmp 0x462b88 */ goto L_00462b88;
L_00462b58:; BB(0x00462b58);
    /* 00462b58: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00462b5f: jmp 0x462b6a */ goto L_00462b6a;
L_00462b61:; BB(0x00462b61);
    /* 00462b61: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00462b64: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00462b67: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
L_00462b6a:; BB(0x00462b6a);
    /* 00462b6a: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00462b6d: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462b70: jge 0x462b88 */ if ((fS==fO)) goto L_00462b88;
L_00462b72:; BB(0x00462b72);
    /* 00462b72: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00462b75: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00462b78: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00462b7b: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00462b7e: mov ax, word ptr [esi + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+r_eax*2))) & 0xffffu);
    /* 00462b82: mov word ptr [edx + ecx*2], ax */ W16((u32)(r_edx+r_ecx*2), (u16)r_eax);
    /* 00462b86: jmp 0x462b61 */ goto L_00462b61;
L_00462b88:; BB(0x00462b88);
    /* 00462b88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00462b89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462b8c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00462b8e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x462b93u); f_00686d72();
    /* 00462b93: mov esp, ebp */ r_esp = r_ebp;
    /* 00462b95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462b96: ret  */ FN_RET(0x00462a40); r_esp += 4; return;
}

void f_00462da0(void) /* sub_462DA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462da0);
    /* 00462da0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462da1: mov ebp, esp */ r_ebp = r_esp;
    /* 00462da3: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00462da6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00462dab: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00462dad: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00462db0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00462db1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00462db8: jmp 0x462dc3 */ goto L_00462dc3;
L_00462dba:; BB(0x00462dba);
    /* 00462dba: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462dbd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00462dc0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00462dc3:; BB(0x00462dc3);
    /* 00462dc3: cmp dword ptr [ebp - 4], 0x14 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462dc7: jge 0x462ddf */ if ((fS==fO)) goto L_00462ddf;
L_00462dc9:; BB(0x00462dc9);
    /* 00462dc9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462dcc: mov word ptr [ebp + ecx*2 - 0x60], 0 */ W16((u32)(r_ebp+r_ecx*2+0xffffffa0u), 0x0u);
    /* 00462dd3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462dd6: mov word ptr [ebp + edx*2 - 0x38], 0 */ W16((u32)(r_ebp+r_edx*2+0xffffffc8u), 0x0u);
    /* 00462ddd: jmp 0x462dba */ goto L_00462dba;
L_00462ddf:; BB(0x00462ddf);
    /* 00462ddf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462de2: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00462de5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00462de7: jne 0x462df3 */ if (!fZ) goto L_00462df3;
L_00462de9:; BB(0x00462de9);
    /* 00462de9: mov eax, 1 */ r_eax = 0x1u;
    /* 00462dee: jmp 0x462f26 */ goto L_00462f26;
L_00462df3:; BB(0x00462df3);
    /* 00462df3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462df5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00462df8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462df9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462dfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462dfd: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x462e02u); f_00462ba0();
    /* 00462e02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462e05: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00462e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00462e0a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00462e0d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462e0e: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00462e11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462e12: call 0x462ba0 */ r_esp -= 4; W32(r_esp, 0x462e17u); f_00462ba0();
    /* 00462e17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462e1a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00462e1d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462e20: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462e23: jle 0x462e2f */ if ((fZ||fS!=fO)) goto L_00462e2f;
L_00462e25:; BB(0x00462e25);
    /* 00462e25: mov eax, 1 */ r_eax = 0x1u;
    /* 00462e2a: jmp 0x462f26 */ goto L_00462f26;
L_00462e2f:; BB(0x00462e2f);
    /* 00462e2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00462e32: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462e35: jge 0x462e3e */ if ((fS==fO)) goto L_00462e3e;
L_00462e37:; BB(0x00462e37);
    /* 00462e37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00462e39: jmp 0x462f26 */ goto L_00462f26;
L_00462e3e:; BB(0x00462e3e);
    /* 00462e3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00462e45: jmp 0x462e50 */ goto L_00462e50;
L_00462e47:; BB(0x00462e47);
    /* 00462e47: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462e4a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00462e4d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00462e50:; BB(0x00462e50);
    /* 00462e50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462e53: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462e56: jge 0x462e7e */ if ((fS==fO)) goto L_00462e7e;
L_00462e58:; BB(0x00462e58);
    /* 00462e58: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462e5b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462e5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462e61: mov dx, word ptr [eax + edx*2] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2))) & 0xffffu);
    /* 00462e65: mov word ptr [ebp + ecx*2 - 0x60], dx */ W16((u32)(r_ebp+r_ecx*2+0xffffffa0u), (u16)r_edx);
    /* 00462e6a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462e6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462e70: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00462e73: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 00462e77: mov word ptr [ebp + eax*2 - 0x38], cx */ W16((u32)(r_ebp+r_eax*2+0xffffffc8u), (u16)r_ecx);
    /* 00462e7c: jmp 0x462e47 */ goto L_00462e47;
L_00462e7e:; BB(0x00462e7e);
    /* 00462e7e: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00462e81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462e82: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00462e85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462e86: call 0x641e20 */ r_esp -= 4; W32(r_esp, 0x462e8bu); f_00641e20();
    /* 00462e8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462e8e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00462e91: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462e92: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00462e95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462e96: call 0x641e20 */ r_esp -= 4; W32(r_esp, 0x462e9bu); f_00641e20();
    /* 00462e9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462e9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00462ea5: jmp 0x462eb0 */ goto L_00462eb0;
L_00462ea7:; BB(0x00462ea7);
    /* 00462ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462eaa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00462ead: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00462eb0:; BB(0x00462eb0);
    /* 00462eb0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462eb3: cmp ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462eb6: jge 0x462f21 */ if ((fS==fO)) goto L_00462f21;
L_00462eb8:; BB(0x00462eb8);
    /* 00462eb8: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00462ebb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ebc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462ec0: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 00462ec3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ec4: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x462ec9u); f_004630c0();
    /* 00462ec9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462ecc: mov esi, eax */ r_esi = r_eax;
    /* 00462ece: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00462ed1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ed2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462ed5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462ed6: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00462ed9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462eda: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x462edfu); f_004630c0();
    /* 00462edf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462ee2: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462ee4: jle 0x462eed */ if ((fZ||fS!=fO)) goto L_00462eed;
L_00462ee6:; BB(0x00462ee6);
    /* 00462ee6: mov eax, 1 */ r_eax = 0x1u;
    /* 00462eeb: jmp 0x462f26 */ goto L_00462f26;
L_00462eed:; BB(0x00462eed);
    /* 00462eed: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00462ef0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ef1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462ef5: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 00462ef8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ef9: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x462efeu); f_004630c0();
    /* 00462efe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462f01: mov esi, eax */ r_esi = r_eax;
    /* 00462f03: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00462f06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462f07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462f0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462f0b: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00462f0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462f0f: call 0x4630c0 */ r_esp -= 4; W32(r_esp, 0x462f14u); f_004630c0();
    /* 00462f14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462f17: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00462f19: jge 0x462f1f */ if ((fS==fO)) goto L_00462f1f;
L_00462f1b:; BB(0x00462f1b);
    /* 00462f1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00462f1d: jmp 0x462f26 */ goto L_00462f26;
L_00462f1f:; BB(0x00462f1f);
    /* 00462f1f: jmp 0x462ea7 */ goto L_00462ea7;
L_00462f21:; BB(0x00462f21);
    /* 00462f21: mov eax, 2 */ r_eax = 0x2u;
L_00462f26:; BB(0x00462f26);
    /* 00462f26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00462f27: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00462f2a: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00462f2c: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x462f31u); f_00686d72();
    /* 00462f31: mov esp, ebp */ r_esp = r_ebp;
    /* 00462f33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00462f34: ret  */ FN_RET(0x00462da0); r_esp += 4; return;
}

void f_00462f40(void) /* sub_462F40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00462f40);
    /* 00462f40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00462f41: mov ebp, esp */ r_ebp = r_esp;
    /* 00462f43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462f44: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00462f47: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00462f4a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462f4d: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00462f50: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00462f53: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00462f57: ja 0x463072 */ if ((!fC&&!fZ)) goto L_00463072;
L_00462f5d:; BB(0x00462f5d);
    /* 00462f5d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00462f60: jmp dword ptr [edx*4 + 0x463090] */ { u32 t = R32((u32)(r_edx*4+0x463090u)); switch (t) { case 0x463056u: goto L_00463056; case 0x46303au: goto L_0046303a; case 0x46301eu: goto L_0046301e; case 0x463002u: goto L_00463002; case 0x462fe3u: goto L_00462fe3; case 0x462fc4u: goto L_00462fc4; case 0x462fa5u: goto L_00462fa5; case 0x462f86u: goto L_00462f86; case 0x462f67u: goto L_00462f67; default: UNSUP(0x00462f60, "jump table entry is not a known target"); } }
L_00462f67:; BB(0x00462f67);
    /* 00462f67: push 0x6ba7fc */ { u32 v = 0x6ba7fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00462f6c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x462f71u); f_00630f40();
    /* 00462f71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462f75: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462f78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462f79: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x462f7eu); f_00686d8e();
    /* 00462f7e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462f81: jmp 0x46308c */ goto L_0046308c;
L_00462f86:; BB(0x00462f86);
    /* 00462f86: push 0x6ba7e4 */ { u32 v = 0x6ba7e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00462f8b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x462f90u); f_00630f40();
    /* 00462f90: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462f94: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00462f97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462f98: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x462f9du); f_00686d8e();
    /* 00462f9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462fa0: jmp 0x46308c */ goto L_0046308c;
L_00462fa5:; BB(0x00462fa5);
    /* 00462fa5: push 0x6ba7c8 */ { u32 v = 0x6ba7c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00462faa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x462fafu); f_00630f40();
    /* 00462faf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462fb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462fb3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00462fb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00462fb7: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x462fbcu); f_00686d8e();
    /* 00462fbc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462fbf: jmp 0x46308c */ goto L_0046308c;
L_00462fc4:; BB(0x00462fc4);
    /* 00462fc4: push 0x6ba7b4 */ { u32 v = 0x6ba7b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00462fc9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x462fceu); f_00630f40();
    /* 00462fce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462fd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462fd2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00462fd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462fd6: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x462fdbu); f_00686d8e();
    /* 00462fdb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462fde: jmp 0x46308c */ goto L_0046308c;
L_00462fe3:; BB(0x00462fe3);
    /* 00462fe3: push 0x6ba7a4 */ { u32 v = 0x6ba7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00462fe8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x462fedu); f_00630f40();
    /* 00462fed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00462ff1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00462ff4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00462ff5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x462ffau); f_00686d8e();
    /* 00462ffa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00462ffd: jmp 0x46308c */ goto L_0046308c;
L_00463002:; BB(0x00463002);
    /* 00463002: push 0x6ba790 */ { u32 v = 0x6ba790u; r_esp -= 4; W32(r_esp, v); }
    /* 00463007: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46300cu); f_00630f40();
    /* 0046300c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046300f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463010: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00463013: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463014: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x463019u); f_00686d8e();
    /* 00463019: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046301c: jmp 0x46308c */ goto L_0046308c;
L_0046301e:; BB(0x0046301e);
    /* 0046301e: push 0x6ba774 */ { u32 v = 0x6ba774u; r_esp -= 4; W32(r_esp, v); }
    /* 00463023: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x463028u); f_00630f40();
    /* 00463028: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046302b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046302c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0046302f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463030: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x463035u); f_00686d8e();
    /* 00463035: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463038: jmp 0x46308c */ goto L_0046308c;
L_0046303a:; BB(0x0046303a);
    /* 0046303a: push 0x6ba760 */ { u32 v = 0x6ba760u; r_esp -= 4; W32(r_esp, v); }
    /* 0046303f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x463044u); f_00630f40();
    /* 00463044: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463048: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0046304b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046304c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x463051u); f_00686d8e();
    /* 00463051: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463054: jmp 0x46308c */ goto L_0046308c;
L_00463056:; BB(0x00463056);
    /* 00463056: push 0x6ba750 */ { u32 v = 0x6ba750u; r_esp -= 4; W32(r_esp, v); }
    /* 0046305b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x463060u); f_00630f40();
    /* 00463060: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463064: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00463067: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00463068: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x46306du); f_00686d8e();
    /* 0046306d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00463070: jmp 0x46308c */ goto L_0046308c;
L_00463072:; BB(0x00463072);
    /* 00463072: push 0x6ba73c */ { u32 v = 0x6ba73cu; r_esp -= 4; W32(r_esp, v); }
    /* 00463077: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x46307cu); f_00630f40();
    /* 0046307c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046307f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463080: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00463083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00463084: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x463089u); f_00686d8e();
    /* 00463089: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0046308c:; BB(0x0046308c);
    /* 0046308c: mov esp, ebp */ r_esp = r_ebp;
    /* 0046308e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046308f: ret  */ FN_RET(0x00462f40); r_esp += 4; return;
}


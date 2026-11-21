#include "protos.h"

void f_006901b0(void) /* sub_6901B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006901b0);
    /* 006901b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006901b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006901b3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006901b6: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006901b9: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 006901c0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006901c3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006901c6: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006901c9: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006901cb: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 006901ce: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006901d1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006901d4: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006901d7: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006901da: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006901dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006901e0: call 0x6135c0 */ r_esp -= 4; W32(r_esp, 0x6901e5u); f_006135c0();
    /* 006901e5: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006901e8: cmp dword ptr [ebp - 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006901eb: jg 0x6901fd */ if ((!fZ&&fS==fO)) goto L_006901fd;
L_006901ed:; BB(0x006901ed);
    /* 006901ed: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006901f0: call 0x6135e0 */ r_esp -= 4; W32(r_esp, 0x6901f5u); f_006135e0();
    /* 006901f5: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 006901f8: cmp dword ptr [ebp - 0x38], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006901fb: jle 0x690204 */ if ((fZ||fS!=fO)) goto L_00690204;
L_006901fd:; BB(0x006901fd);
    /* 006901fd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006901ff: jmp 0x69039a */ goto L_0069039a;
L_00690204:; BB(0x00690204);
    /* 00690204: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00690206: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00690208: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0069020b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069020c: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x690211u); f_00686fa2();
    /* 00690211: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690214: mov dword ptr [ebp - 0x34], 0x28 */ W32((u32)(r_ebp+0xffffffccu), 0x28u);
    /* 0069021b: mov word ptr [ebp - 0x28], 1 */ W16((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00690221: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00690224: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00690227: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x69022cu); f_006238f0();
    /* 0069022c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0069022f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00690232: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00690235: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x69023au); f_00623930();
    /* 0069023a: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0069023d: mov word ptr [ebp - 0x26], ax */ W16((u32)(r_ebp+0xffffffdau), (u16)r_eax);
    /* 00690241: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00690244: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00690247: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x69024cu); f_006238b0();
    /* 0069024c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069024e: jge 0x6902de */ if ((fS==fO)) goto L_006902de;
L_00690254:; BB(0x00690254);
    /* 00690254: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00690257: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0069025a: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x69025fu); f_00623910();
    /* 0069025f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00690262: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690263: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00690266: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 00690269: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x69026eu); f_006238d0();
    /* 0069026e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00690271: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00690274: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 00690277: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x69027cu); f_00623910();
    /* 0069027c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0069027f: push 0xcc0020 */ { u32 v = 0xcc0020u; r_esp -= 4; W32(r_esp, v); }
    /* 00690284: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00690286: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00690289: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069028a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069028d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069028e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00690291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690292: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00690295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690296: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00690299: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0069029c: sub edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069029f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006902a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006902a3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006902a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006902a6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006902a9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006902ac: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006902af: sub ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006902b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006902b3: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006902b6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006902b9: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006902bc: sub ecx, dword ptr [eax] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006902be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006902bf: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006902c2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006902c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006902c6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006902c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006902cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006902cc: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 006902cf: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006902d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006902d3: call dword ptr [0x6b2030] */ { u32 t = R32((u32)(0x6b2030u)); r_esp -= 4; W32(r_esp, 0x6902d9u); call_ind(t); }
    /* 006902d9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006902dc: jmp 0x69035d */ goto L_0069035d;
L_006902de:; BB(0x006902de);
    /* 006902de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006902e0: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006902e3: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 006902e6: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x6902ebu); f_006238d0();
    /* 006902eb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 006902ee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006902f1: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006902f4: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x6902f9u); f_00623910();
    /* 006902f9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006902fb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006902fe: push 0xcc0020 */ { u32 v = 0xcc0020u; r_esp -= 4; W32(r_esp, v); }
    /* 00690303: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00690305: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00690308: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690309: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069030c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069030d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00690310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690311: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00690314: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690315: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00690318: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069031a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0069031d: sub edx, dword ptr [eax + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00690320: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690321: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00690324: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00690326: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690327: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0069032a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0069032d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00690330: sub edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00690333: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690334: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00690337: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0069033a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0069033d: sub edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0069033f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690340: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00690343: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00690346: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690347: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0069034a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0069034c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069034d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00690350: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00690353: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690354: call dword ptr [0x6b2030] */ { u32 t = R32((u32)(0x6b2030u)); r_esp -= 4; W32(r_esp, 0x69035au); call_ind(t); }
    /* 0069035a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0069035d:; BB(0x0069035d);
    /* 0069035d: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690361: jne 0x690376 */ if (!fZ) goto L_00690376;
L_00690363:; BB(0x00690363);
    /* 00690363: push 0x6e5718 */ { u32 v = 0x6e5718u; r_esp -= 4; W32(r_esp, v); }
    /* 00690368: call 0x68fb10 */ r_esp -= 4; W32(r_esp, 0x69036du); f_0068fb10();
    /* 0069036d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690370: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690372: jmp 0x69039a */ goto L_0069039a;
L_00690376:; BB(0x00690376);
    /* 00690376: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069037a: jne 0x690398 */ if (!fZ) goto L_00690398;
L_0069037c:; BB(0x0069037c);
    /* 0069037c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0069037f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690380: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00690383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690384: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00690387: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690388: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0069038b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069038c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0069038f: call 0x6903a0 */ r_esp -= 4; W32(r_esp, 0x690394u); f_006903a0();
    /* 00690394: jmp 0x69039a */ goto L_0069039a;
L_00690398:; BB(0x00690398);
    /* 00690398: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0069039a:; BB(0x0069039a);
    /* 0069039a: mov esp, ebp */ r_esp = r_ebp;
    /* 0069039c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069039d: ret 0x10 */ FN_RET(0x006901b0); r_esp += 20; return;
}

void f_006903a0(void) /* sub_6903A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006903a0);
    /* 006903a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006903a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006903a3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006903a6: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006903a9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006903ac: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006903af: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006903b2: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006903b4: je 0x6903df */ if (fZ) goto L_006903df;
L_006903b6:; BB(0x006903b6);
    /* 006903b6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006903b9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006903bc: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006903bf: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006903c2: je 0x6903df */ if (fZ) goto L_006903df;
L_006903c4:; BB(0x006903c4);
    /* 006903c4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006903c7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006903ca: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006903cd: cmp edx, dword ptr [ecx] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006903cf: je 0x6903df */ if (fZ) goto L_006903df;
L_006903d1:; BB(0x006903d1);
    /* 006903d1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006903d4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006903d7: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006903da: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006903dd: jne 0x6903e6 */ if (!fZ) goto L_006903e6;
L_006903df:; BB(0x006903df);
    /* 006903df: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006903e1: jmp 0x69060e */ goto L_0069060e;
L_006903e6:; BB(0x006903e6);
    /* 006903e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006903e9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006903ec: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006903ef: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006903f1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006903f2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006903f4: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006903f6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006903f9: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006903fb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006903fe: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00690401: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00690404: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00690407: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069040a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069040b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069040d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069040f: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00690412: add eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690415: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00690418: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0069041b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0069041e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00690421: sub eax, dword ptr [ecx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00690423: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00690424: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00690426: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00690428: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0069042b: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069042d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00690430: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00690433: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00690436: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00690439: sub eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069043c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069043d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069043f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00690441: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00690444: add eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690447: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0069044a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0069044d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069044f: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00690452: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00690455: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00690458: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0069045b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0069045e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00690461: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00690464: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00690467: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00690469: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0069046c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0069046f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00690472: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00690475: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00690478: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0069047b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0069047e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00690481: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00690484: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00690487: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0069048a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0069048d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00690490: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00690493: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00690496: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00690499: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069049a: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 0069049d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069049e: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 006904a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006904a2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006904a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006904a6: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006904a9: call 0x6901b0 */ r_esp -= 4; W32(r_esp, 0x6904aeu); f_006901b0();
    /* 006904ae: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006904b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006904b3: jne 0x6904bc */ if (!fZ) goto L_006904bc;
L_006904b5:; BB(0x006904b5);
    /* 006904b5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006904b7: jmp 0x69060e */ goto L_0069060e;
L_006904bc:; BB(0x006904bc);
    /* 006904bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006904bf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006904c1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006904c4: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006904c7: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006904ca: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006904cd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006904d0: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006904d3: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006904d6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006904d9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006904db: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006904de: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006904e1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006904e4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006904e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006904ea: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006904ed: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006904f0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006904f3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006904f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006904f9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006904fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006904ff: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00690502: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00690505: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00690508: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0069050b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069050c: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 0069050f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690510: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00690513: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690514: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00690517: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690518: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0069051b: call 0x6901b0 */ r_esp -= 4; W32(r_esp, 0x690520u); f_006901b0();
    /* 00690520: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00690523: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690525: jne 0x69052e */ if (!fZ) goto L_0069052e;
L_00690527:; BB(0x00690527);
    /* 00690527: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690529: jmp 0x69060e */ goto L_0069060e;
L_0069052e:; BB(0x0069052e);
    /* 0069052e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00690531: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00690533: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00690536: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00690539: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0069053c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0069053f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00690542: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00690545: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00690548: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0069054b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0069054d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00690550: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00690553: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00690556: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00690559: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0069055c: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0069055f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00690562: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00690565: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00690568: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0069056b: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0069056e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00690571: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00690574: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00690577: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0069057a: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0069057d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069057e: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00690581: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690582: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00690585: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690586: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00690589: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069058a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0069058d: call 0x6901b0 */ r_esp -= 4; W32(r_esp, 0x690592u); f_006901b0();
    /* 00690592: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00690595: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690597: jne 0x69059d */ if (!fZ) goto L_0069059d;
L_00690599:; BB(0x00690599);
    /* 00690599: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069059b: jmp 0x69060e */ goto L_0069060e;
L_0069059d:; BB(0x0069059d);
    /* 0069059d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006905a0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006905a2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006905a5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006905a8: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 006905ab: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006905ae: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006905b1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006905b4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006905b7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006905ba: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006905bc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006905bf: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006905c2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006905c5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006905c8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006905cb: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006905ce: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006905d1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006905d4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006905d7: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006905da: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006905dd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006905e0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006905e3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006905e6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006905e9: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006905ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006905ed: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 006905f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006905f1: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 006905f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006905f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006905f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006905f9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006905fc: call 0x6901b0 */ r_esp -= 4; W32(r_esp, 0x690601u); f_006901b0();
    /* 00690601: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00690604: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690606: jne 0x69060c */ if (!fZ) goto L_0069060c;
L_00690608:; BB(0x00690608);
    /* 00690608: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069060a: jmp 0x69060e */ goto L_0069060e;
L_0069060c:; BB(0x0069060c);
    /* 0069060c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0069060e:; BB(0x0069060e);
    /* 0069060e: mov esp, ebp */ r_esp = r_ebp;
    /* 00690610: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690611: ret 0x10 */ FN_RET(0x006903a0); r_esp += 20; return;
}

void f_00690650(void) /* sub_690650 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690650);
    /* 00690650: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00690654: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690656: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00690658: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0069065b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0069065e: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00690661: ret  */ FN_RET(0x00690650); r_esp += 4; return;
}

void f_00690670(void) /* sub_690670 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690670);
    /* 00690670: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690671: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00690675: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690677: je 0x6906cd */ if (fZ) goto L_006906cd;
L_00690679:; BB(0x00690679);
    /* 00690679: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0069067c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069067d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0069067f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690681: jle 0x69069d */ if ((fZ||fS!=fO)) goto L_0069069d;
L_00690683:; BB(0x00690683);
    /* 00690683: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00690685: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 00690688: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069068a: je 0x690695 */ if (fZ) goto L_00690695;
L_0069068c:; BB(0x0069068c);
    /* 0069068c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069068d: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x690692u); f_00687300();
    /* 00690692: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00690695:; BB(0x00690695);
    /* 00690695: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00690698: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690699: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069069b: jl 0x690683 */ if ((fS!=fO)) goto L_00690683;
L_0069069d:; BB(0x0069069d);
    /* 0069069d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069069f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006906a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006906a2: je 0x6906ad */ if (fZ) goto L_006906ad;
L_006906a4:; BB(0x006906a4);
    /* 006906a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006906a5: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6906aau); f_00687300();
    /* 006906aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006906ad:; BB(0x006906ad);
    /* 006906ad: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006906b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006906b2: je 0x6906bd */ if (fZ) goto L_006906bd;
L_006906b4:; BB(0x006906b4);
    /* 006906b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006906b5: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6906bau); f_00687300();
    /* 006906ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006906bd:; BB(0x006906bd);
    /* 006906bd: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006906c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006906c2: je 0x6906cd */ if (fZ) goto L_006906cd;
L_006906c4:; BB(0x006906c4);
    /* 006906c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006906c5: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x6906cau); f_00687300();
    /* 006906ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006906cd:; BB(0x006906cd);
    /* 006906cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006906cf: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 006906d1: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 006906d4: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 006906d7: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 006906da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006906db: ret  */ FN_RET(0x00690670); r_esp += 4; return;
}

void f_006906e0(void) /* sub_6906E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006906e0);
    /* 006906e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006906e1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006906e5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006906e6: mov ecx, 8 */ r_ecx = 0x8u;
    /* 006906eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006906ed: mov edi, esi */ r_edi = r_esi;
    /* 006906ef: push 0xe80 */ { u32 v = 0xe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006906f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006906f6: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006906f8: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x6906fdu); f_0068738e();
    /* 006906fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690700: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 00690703: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690704: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690705: ret  */ FN_RET(0x006906e0); r_esp += 4; return;
}

void f_00690710(void) /* sub_690710 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690710);
    /* 00690710: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00690714: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690715: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690716: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 00690719: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069071b: je 0x690863 */ if (fZ) goto L_00690863;
L_00690721:; BB(0x00690721);
    /* 00690721: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00690724: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690725: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00690727: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690728: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069072a: jle 0x69074a */ if ((fZ||fS!=fO)) goto L_0069074a;
L_0069072c:; BB(0x0069072c);
    /* 0069072c: lea ebp, [esi + 0x20] */ r_ebp = (u32)(r_esi+0x20u);
L_0069072f:; BB(0x0069072f);
    /* 0069072f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00690732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690734: je 0x69073f */ if (fZ) goto L_0069073f;
L_00690736:; BB(0x00690736);
    /* 00690736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690737: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69073cu); f_00687300();
    /* 0069073c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0069073f:; BB(0x0069073f);
    /* 0069073f: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00690742: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00690743: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690746: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690748: jl 0x69072f */ if ((fS!=fO)) goto L_0069072f;
L_0069074a:; BB(0x0069074a);
    /* 0069074a: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0069074d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069074f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690751: jle 0x69077a */ if ((fZ||fS!=fO)) goto L_0069077a;
L_00690753:; BB(0x00690753);
    /* 00690753: lea ebx, [esi + 0x220] */ r_ebx = (u32)(r_esi+0x220u);
L_00690759:; BB(0x00690759);
    /* 00690759: mov ecx, dword ptr [ebx - 0x100] */ r_ecx = R32((u32)(r_ebx+0xffffff00u));
    /* 0069075f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00690761: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690762: mov edx, dword ptr [ecx*4 + 0x7878e4] */ r_edx = R32((u32)(r_ecx*4+0x7878e4u));
    /* 00690769: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x69076cu); call_ind(t); }
    /* 0069076c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0069076f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690772: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690773: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00690776: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690778: jl 0x690759 */ if ((fS!=fO)) goto L_00690759;
L_0069077a:; BB(0x0069077a);
    /* 0069077a: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0069077d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069077f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690781: jle 0x6907aa */ if ((fZ||fS!=fO)) goto L_006907aa;
L_00690783:; BB(0x00690783);
    /* 00690783: lea ebx, [esi + 0x420] */ r_ebx = (u32)(r_esi+0x420u);
L_00690789:; BB(0x00690789);
    /* 00690789: mov ecx, dword ptr [ebx - 0x100] */ r_ecx = R32((u32)(r_ebx+0xffffff00u));
    /* 0069078f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00690791: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690792: mov edx, dword ptr [ecx*4 + 0x7878d0] */ r_edx = R32((u32)(r_ecx*4+0x7878d0u));
    /* 00690799: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x69079cu); call_ind(t); }
    /* 0069079c: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0069079f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006907a2: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006907a3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006907a6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006907a8: jl 0x690789 */ if ((fS!=fO)) goto L_00690789;
L_006907aa:; BB(0x006907aa);
    /* 006907aa: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006907ad: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006907af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006907b1: jle 0x6907da */ if ((fZ||fS!=fO)) goto L_006907da;
L_006907b3:; BB(0x006907b3);
    /* 006907b3: lea ebx, [esi + 0x620] */ r_ebx = (u32)(r_esi+0x620u);
L_006907b9:; BB(0x006907b9);
    /* 006907b9: mov ecx, dword ptr [ebx - 0x100] */ r_ecx = R32((u32)(r_ebx+0xffffff00u));
    /* 006907bf: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006907c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006907c2: mov edx, dword ptr [ecx*4 + 0x7878d8] */ r_edx = R32((u32)(r_ecx*4+0x7878d8u));
    /* 006907c9: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x6907ccu); call_ind(t); }
    /* 006907cc: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006907cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006907d2: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006907d3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006907d6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006907d8: jl 0x6907b9 */ if ((fS!=fO)) goto L_006907b9;
L_006907da:; BB(0x006907da);
    /* 006907da: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006907dd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006907df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006907e1: jle 0x69081f */ if ((fZ||fS!=fO)) goto L_0069081f;
L_006907e3:; BB(0x006907e3);
    /* 006907e3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006907e5: lea ebp, [esi + 0x720] */ r_ebp = (u32)(r_esi+0x720u);
L_006907eb:; BB(0x006907eb);
    /* 006907eb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006907ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006907f0: je 0x6907fb */ if (fZ) goto L_006907fb;
L_006907f2:; BB(0x006907f2);
    /* 006907f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006907f3: call 0x694a90 */ r_esp -= 4; W32(r_esp, 0x6907f8u); f_00694a90();
    /* 006907f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006907fb:; BB(0x006907fb);
    /* 006907fb: mov eax, dword ptr [esi + 0xb20] */ r_eax = R32((u32)(r_esi+0xb20u));
    /* 00690801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690803: je 0x690811 */ if (fZ) goto L_00690811;
L_00690805:; BB(0x00690805);
    /* 00690805: lea ecx, [edi + eax] */ r_ecx = (u32)(r_edi+r_eax);
    /* 00690808: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690809: call 0x694ab0 */ r_esp -= 4; W32(r_esp, 0x69080eu); f_00694ab0();
    /* 0069080e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00690811:; BB(0x00690811);
    /* 00690811: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00690814: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00690815: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690818: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069081b: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069081d: jl 0x6907eb */ if ((fS!=fO)) goto L_006907eb;
L_0069081f:; BB(0x0069081f);
    /* 0069081f: mov eax, dword ptr [esi + 0xb20] */ r_eax = R32((u32)(r_esi+0xb20u));
    /* 00690825: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690827: je 0x690832 */ if (fZ) goto L_00690832;
L_00690829:; BB(0x00690829);
    /* 00690829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069082a: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69082fu); f_00687300();
    /* 0069082f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00690832:; BB(0x00690832);
    /* 00690832: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00690835: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00690837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690839: jle 0x690858 */ if ((fZ||fS!=fO)) goto L_00690858;
L_0069083b:; BB(0x0069083b);
    /* 0069083b: lea ebp, [esi + 0xb24] */ r_ebp = (u32)(r_esi+0xb24u);
L_00690841:; BB(0x00690841);
    /* 00690841: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00690844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690845: call 0x691ec0 */ r_esp -= 4; W32(r_esp, 0x69084au); f_00691ec0();
    /* 0069084a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0069084d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690850: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00690851: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690854: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690856: jl 0x690841 */ if ((fS!=fO)) goto L_00690841;
L_00690858:; BB(0x00690858);
    /* 00690858: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690859: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x69085eu); f_00687300();
    /* 0069085e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690862: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00690863:; BB(0x00690863);
    /* 00690863: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00690867: mov ecx, 8 */ r_ecx = 0x8u;
    /* 0069086c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069086e: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00690870: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690871: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690872: ret  */ FN_RET(0x00690710); r_esp += 4; return;
}

void f_00690880(void) /* sub_690880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690880);
    /* 00690880: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00690883: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690884: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 00690888: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069088a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069088b: je 0x690975 */ if (fZ) goto L_00690975;
L_00690891:; BB(0x00690891);
    /* 00690891: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00690894: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00690896: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690897: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690899: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0069089d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069089e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069089f: call 0x69d360 */ r_esp -= 4; W32(r_esp, 0x6908a4u); f_0069d360();
    /* 006908a4: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 006908a8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006908aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006908ab: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6908b0u); f_0069d470();
    /* 006908b0: mov ebp, eax */ r_ebp = r_eax;
    /* 006908b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006908b4: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006908b8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006908ba: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 006908be: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 006908c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006908c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006908c4: mov word ptr [esp + 0x34], cx */ W16((u32)(r_esp+0x34u), (u16)r_ecx);
    /* 006908c9: call 0x690980 */ r_esp -= 4; W32(r_esp, 0x6908ceu); f_00690980();
    /* 006908ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006908d1: mov ecx, 3 */ r_ecx = 0x3u;
    /* 006908d6: mov edi, 0x78195c */ r_edi = 0x78195cu;
    /* 006908db: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
    /* 006908df: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 006908e1: repe cmpsw word ptr [esi], word ptr es:[edi] */
    {
        while (r_ecx != 0) {
            u32 a = R16((u32)r_esi), b = R16((u32)r_edi);
            u32 r = (a - b) & 0xffffu;
            r_esi += 2; r_edi += 2; r_ecx -= 1;
            fZ = (r == 0); fS = ((r & 0x8000u) != 0); fC = (a < b);
            fA = (((a ^ b ^ r) & 0x10u) != 0);
            fO = ((((a ^ b) & (a ^ r)) & 0x8000u) != 0);
            if (!fZ) break;
        }
    }
    /* 006908e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006908e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006908e6: je 0x6908f3 */ if (fZ) goto L_006908f3;
L_006908e8:; BB(0x006908e8);
    /* 006908e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006908e9: mov eax, 0xffffff7c */ r_eax = 0xffffff7cu;
    /* 006908ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006908ef: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006908f2: ret  */ FN_RET(0x00690880); r_esp += 4; return;
L_006908f3:; BB(0x006908f3);
    /* 006908f3: mov eax, ebp */ r_eax = r_ebp;
    /* 006908f5: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006908f6: je 0x69094f */ if (fZ) goto L_0069094f;
L_006908f8:; BB(0x006908f8);
    /* 006908f8: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006908fb: je 0x69092c */ if (fZ) goto L_0069092c;
L_006908fd:; BB(0x006908fd);
    /* 006908fd: sub eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00690900: jne 0x690975 */ if (!fZ) goto L_00690975;
L_00690902:; BB(0x00690902);
    /* 00690902: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00690906: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00690909: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069090b: je 0x690975 */ if (fZ) goto L_00690975;
L_0069090d:; BB(0x0069090d);
    /* 0069090d: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00690911: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00690914: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690916: je 0x690975 */ if (fZ) goto L_00690975;
L_00690918:; BB(0x00690918);
    /* 00690918: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0069091c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069091d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069091e: call 0x690b70 */ r_esp -= 4; W32(r_esp, 0x690923u); f_00690b70();
    /* 00690923: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690927: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690928: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069092b: ret  */ FN_RET(0x00690880); r_esp += 4; return;
L_0069092c:; BB(0x0069092c);
    /* 0069092c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00690930: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00690933: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690935: je 0x690975 */ if (fZ) goto L_00690975;
L_00690937:; BB(0x00690937);
    /* 00690937: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0069093b: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0069093f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690940: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690941: call 0x690a90 */ r_esp -= 4; W32(r_esp, 0x690946u); f_00690a90();
    /* 00690946: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690949: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069094a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069094b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069094e: ret  */ FN_RET(0x00690880); r_esp += 4; return;
L_0069094f:; BB(0x0069094f);
    /* 0069094f: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00690952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690954: je 0x690975 */ if (fZ) goto L_00690975;
L_00690956:; BB(0x00690956);
    /* 00690956: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0069095a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0069095d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069095f: jne 0x690975 */ if (!fZ) goto L_00690975;
L_00690961:; BB(0x00690961);
    /* 00690961: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00690965: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690966: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690967: call 0x6909b0 */ r_esp -= 4; W32(r_esp, 0x69096cu); f_006909b0();
    /* 0069096c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069096f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690970: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690971: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690974: ret  */ FN_RET(0x00690880); r_esp += 4; return;
L_00690975:; BB(0x00690975);
    /* 00690975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690976: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 0069097b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069097c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069097f: ret  */ FN_RET(0x00690880); r_esp += 4; return;
}

void f_00690980(void) /* sub_690980 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690980);
    /* 00690980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690981: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00690985: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690987: je 0x6909a6 */ if (fZ) goto L_006909a6;
L_00690989:; BB(0x00690989);
    /* 00690989: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069098a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0069098e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069098f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_00690993:; BB(0x00690993);
    /* 00690993: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00690995: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690996: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x69099bu); f_0069d470();
    /* 0069099b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069099e: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006909a0: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006909a1: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006909a2: jne 0x690993 */ if (!fZ) goto L_00690993;
L_006909a4:; BB(0x006909a4);
    /* 006909a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006909a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_006909a6:; BB(0x006909a6);
    /* 006909a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006909a7: ret  */ FN_RET(0x00690980); r_esp += 4; return;
}

void f_006909b0(void) /* sub_6909B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006909b0);
    /* 006909b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006909b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006909b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006909b3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006909b7: mov ebx, dword ptr [edi + 0x1c] */ r_ebx = R32((u32)(r_edi+0x1cu));
    /* 006909ba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006909bc: jne 0x6909c7 */ if (!fZ) goto L_006909c7;
L_006909be:; BB(0x006909be);
    /* 006909be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006909bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006909c0: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 006909c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006909c6: ret  */ FN_RET(0x006909b0); r_esp += 4; return;
L_006909c7:; BB(0x006909c7);
    /* 006909c7: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006909cb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006909cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006909ce: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6909d3u); f_0069d470();
    /* 006909d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006909d6: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 006909d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006909da: je 0x6909e5 */ if (fZ) goto L_006909e5;
L_006909dc:; BB(0x006909dc);
    /* 006909dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006909dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006909de: mov eax, 0xffffff7a */ r_eax = 0xffffff7au;
    /* 006909e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006909e4: ret  */ FN_RET(0x006909b0); r_esp += 4; return;
L_006909e5:; BB(0x006909e5);
    /* 006909e5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006909e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006909e8: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6909edu); f_0069d470();
    /* 006909ed: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006909ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006909f0: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006909f3: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x6909f8u); f_0069d470();
    /* 006909f8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006909fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006909fb: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006909fe: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690a03u); f_0069d470();
    /* 00690a03: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00690a05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a06: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00690a09: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690a0eu); f_0069d470();
    /* 00690a0e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00690a10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a11: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00690a14: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690a19u); f_0069d470();
    /* 00690a19: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00690a1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a1c: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 00690a1f: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690a24u); f_0069d470();
    /* 00690a24: mov edx, 1 */ r_edx = 0x1u;
    /* 00690a29: mov ecx, eax */ r_ecx = r_eax;
    /* 00690a2b: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00690a2d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00690a2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a30: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00690a32: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690a37u); f_0069d470();
    /* 00690a37: mov edx, 1 */ r_edx = 0x1u;
    /* 00690a3c: mov ecx, eax */ r_ecx = r_eax;
    /* 00690a3e: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00690a40: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690a43: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00690a46: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00690a49: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690a4c: jl 0x690a6f */ if ((fS!=fO)) goto L_00690a6f;
L_00690a4e:; BB(0x00690a4e);
    /* 00690a4e: cmp dword ptr [edi + 4], 1 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690a52: jl 0x690a6f */ if ((fS!=fO)) goto L_00690a6f;
L_00690a54:; BB(0x00690a54);
    /* 00690a54: mov ebx, dword ptr [ebx] */ r_ebx = R32((u32)(r_ebx));
    /* 00690a56: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690a59: jl 0x690a6f */ if ((fS!=fO)) goto L_00690a6f;
L_00690a5b:; BB(0x00690a5b);
    /* 00690a5b: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690a5d: jl 0x690a6f */ if ((fS!=fO)) goto L_00690a6f;
L_00690a5f:; BB(0x00690a5f);
    /* 00690a5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690a61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a62: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690a67u); f_0069d470();
    /* 00690a67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690a6a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690a6d: je 0x690a81 */ if (fZ) goto L_00690a81;
L_00690a6f:; BB(0x00690a6f);
    /* 00690a6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a70: call 0x690710 */ r_esp -= 4; W32(r_esp, 0x690a75u); f_00690710();
    /* 00690a75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690a78: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 00690a7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690a7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690a7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690a80: ret  */ FN_RET(0x006909b0); r_esp += 4; return;
L_00690a81:; BB(0x00690a81);
    /* 00690a81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690a82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690a83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690a85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690a86: ret  */ FN_RET(0x006909b0); r_esp += 4; return;
}

void f_00690a90(void) /* sub_690A90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690a90);
    /* 00690a90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690a91: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690a92: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00690a96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a97: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690a98: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00690a9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690a9b: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690aa0u); f_0069d470();
    /* 00690aa0: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00690aa4: mov edi, eax */ r_edi = r_eax;
    /* 00690aa6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690aa9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690aab: jl 0x690b4e */ if ((fS!=fO)) goto L_00690b4e;
L_00690ab1:; BB(0x00690ab1);
    /* 00690ab1: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00690ab4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690ab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690ab7: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690abcu); f_0068738e();
    /* 00690abc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690abd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690abe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690abf: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00690ac2: call 0x690980 */ r_esp -= 4; W32(r_esp, 0x690ac7u); f_00690980();
    /* 00690ac7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00690ac9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690aca: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690acfu); f_0069d470();
    /* 00690acf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690ad2: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00690ad5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690ad7: jl 0x690b4e */ if ((fS!=fO)) goto L_00690b4e;
L_00690ad9:; BB(0x00690ad9);
    /* 00690ad9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690ada: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00690adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690add: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690ae2u); f_0068738e();
    /* 00690ae2: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00690ae5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00690ae7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690ae8: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00690aea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690aeb: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690af0u); f_0068738e();
    /* 00690af0: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00690af3: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00690af6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690af9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00690afb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690afd: jle 0x690b3e */ if ((fZ||fS!=fO)) goto L_00690b3e;
L_00690aff:; BB(0x00690aff);
    /* 00690aff: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00690b01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690b02: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690b07u); f_0069d470();
    /* 00690b07: mov ebx, eax */ r_ebx = r_eax;
    /* 00690b09: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690b0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690b0e: jl 0x690b4e */ if ((fS!=fO)) goto L_00690b4e;
L_00690b10:; BB(0x00690b10);
    /* 00690b10: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00690b13: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 00690b16: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690b19: mov dword ptr [edx + edi*4], ebx */ W32((u32)(r_edx+r_edi*4), r_ebx);
    /* 00690b1c: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690b21u); f_0068738e();
    /* 00690b21: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00690b23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690b24: mov dword ptr [ecx + edi*4], eax */ W32((u32)(r_ecx+r_edi*4), r_eax);
    /* 00690b27: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00690b29: mov eax, dword ptr [edx + edi*4] */ r_eax = R32((u32)(r_edx+r_edi*4));
    /* 00690b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690b2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690b2e: call 0x690980 */ r_esp -= 4; W32(r_esp, 0x690b33u); f_00690980();
    /* 00690b33: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00690b36: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690b39: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690b3a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690b3c: jl 0x690aff */ if ((fS!=fO)) goto L_00690aff;
L_00690b3e:; BB(0x00690b3e);
    /* 00690b3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690b41: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690b46u); f_0069d470();
    /* 00690b46: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690b49: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690b4c: je 0x690b61 */ if (fZ) goto L_00690b61;
L_00690b4e:; BB(0x00690b4e);
    /* 00690b4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690b4f: call 0x690670 */ r_esp -= 4; W32(r_esp, 0x690b54u); f_00690670();
    /* 00690b54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690b57: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 00690b5c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690b5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690b5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690b5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690b60: ret  */ FN_RET(0x00690a90); r_esp += 4; return;
L_00690b61:; BB(0x00690b61);
    /* 00690b61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690b62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690b63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690b64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690b66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690b67: ret  */ FN_RET(0x00690a90); r_esp += 4; return;
}

void f_00690b70(void) /* sub_690B70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690b70);
    /* 00690b70: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00690b74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690b75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690b76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690b77: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 00690b7a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690b7b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690b7d: jne 0x690b89 */ if (!fZ) goto L_00690b89;
L_00690b7f:; BB(0x00690b7f);
    /* 00690b7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690b80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690b82: mov eax, 0xffffff7f */ r_eax = 0xffffff7fu;
    /* 00690b87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690b88: ret  */ FN_RET(0x00690b70); r_esp += 4; return;
L_00690b89:; BB(0x00690b89);
    /* 00690b89: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00690b8d: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00690b8f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690b90: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690b95u); f_0069d470();
    /* 00690b95: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690b98: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690b99: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690b9b: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 00690b9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690ba0: jle 0x690bd0 */ if ((fZ||fS!=fO)) goto L_00690bd0;
L_00690ba2:; BB(0x00690ba2);
    /* 00690ba2: lea edi, [ebx + 0x720] */ r_edi = (u32)(r_ebx+0x720u);
L_00690ba8:; BB(0x00690ba8);
    /* 00690ba8: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00690baa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690bac: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690bb1u); f_0068738e();
    /* 00690bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690bb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690bb3: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00690bb5: call 0x694fa0 */ r_esp -= 4; W32(r_esp, 0x690bbau); f_00694fa0();
    /* 00690bba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690bbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690bbf: jne 0x690dc9 */ if (!fZ) goto L_00690dc9;
L_00690bc5:; BB(0x00690bc5);
    /* 00690bc5: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 00690bc8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690bc9: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690bcc: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690bce: jl 0x690ba8 */ if ((fS!=fO)) goto L_00690ba8;
L_00690bd0:; BB(0x00690bd0);
    /* 00690bd0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00690bd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690bd3: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690bd8u); f_0069d470();
    /* 00690bd8: mov edi, eax */ r_edi = r_eax;
    /* 00690bda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690bdd: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690bde: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690be0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690be2: jle 0x690c05 */ if ((fZ||fS!=fO)) goto L_00690c05;
L_00690be4:; BB(0x00690be4);
    /* 00690be4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00690be6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690be7: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690becu); f_0069d470();
    /* 00690bec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690bef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690bf1: jl 0x690dc9 */ if ((fS!=fO)) goto L_00690dc9;
L_00690bf7:; BB(0x00690bf7);
    /* 00690bf7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690bfa: jge 0x690dc9 */ if ((fS==fO)) goto L_00690dc9;
L_00690c00:; BB(0x00690c00);
    /* 00690c00: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690c01: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690c03: jl 0x690be4 */ if ((fS!=fO)) goto L_00690be4;
L_00690c05:; BB(0x00690c05);
    /* 00690c05: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00690c07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690c08: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690c0du); f_0069d470();
    /* 00690c0d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690c10: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690c11: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690c13: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00690c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690c18: jle 0x690c6a */ if ((fZ||fS!=fO)) goto L_00690c6a;
L_00690c1a:; BB(0x00690c1a);
    /* 00690c1a: lea edi, [ebx + 0x420] */ r_edi = (u32)(r_ebx+0x420u);
L_00690c20:; BB(0x00690c20);
    /* 00690c20: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00690c22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690c23: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690c28u); f_0069d470();
    /* 00690c28: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690c2b: mov dword ptr [edi - 0x100], eax */ W32((u32)(r_edi+0xffffff00u), r_eax);
    /* 00690c31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690c33: jl 0x690dc9 */ if ((fS!=fO)) goto L_00690dc9;
L_00690c39:; BB(0x00690c39);
    /* 00690c39: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690c3c: jge 0x690dc9 */ if ((fS==fO)) goto L_00690dc9;
L_00690c42:; BB(0x00690c42);
    /* 00690c42: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00690c46: mov ecx, dword ptr [eax*4 + 0x7878d0] */ r_ecx = R32((u32)(r_eax*4+0x7878d0u));
    /* 00690c4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690c4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690c4f: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x690c52u); call_ind(t); }
    /* 00690c52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690c55: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00690c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690c59: je 0x690dc9 */ if (fZ) goto L_00690dc9;
L_00690c5f:; BB(0x00690c5f);
    /* 00690c5f: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00690c62: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690c63: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690c66: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690c68: jl 0x690c20 */ if ((fS!=fO)) goto L_00690c20;
L_00690c6a:; BB(0x00690c6a);
    /* 00690c6a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00690c6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690c6d: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690c72u); f_0069d470();
    /* 00690c72: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690c75: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690c76: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690c78: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00690c7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690c7d: jle 0x690ccf */ if ((fZ||fS!=fO)) goto L_00690ccf;
L_00690c7f:; BB(0x00690c7f);
    /* 00690c7f: lea edi, [ebx + 0x620] */ r_edi = (u32)(r_ebx+0x620u);
L_00690c85:; BB(0x00690c85);
    /* 00690c85: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00690c87: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690c88: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690c8du); f_0069d470();
    /* 00690c8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690c90: mov dword ptr [edi - 0x100], eax */ W32((u32)(r_edi+0xffffff00u), r_eax);
    /* 00690c96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690c98: jl 0x690dc9 */ if ((fS!=fO)) goto L_00690dc9;
L_00690c9e:; BB(0x00690c9e);
    /* 00690c9e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690ca1: jge 0x690dc9 */ if ((fS==fO)) goto L_00690dc9;
L_00690ca7:; BB(0x00690ca7);
    /* 00690ca7: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00690cab: mov eax, dword ptr [eax*4 + 0x7878d8] */ r_eax = R32((u32)(r_eax*4+0x7878d8u));
    /* 00690cb2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690cb3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690cb4: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x690cb7u); call_ind(t); }
    /* 00690cb7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690cba: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00690cbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690cbe: je 0x690dc9 */ if (fZ) goto L_00690dc9;
L_00690cc4:; BB(0x00690cc4);
    /* 00690cc4: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00690cc7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690cc8: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690ccb: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690ccd: jl 0x690c85 */ if ((fS!=fO)) goto L_00690c85;
L_00690ccf:; BB(0x00690ccf);
    /* 00690ccf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00690cd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690cd2: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690cd7u); f_0069d470();
    /* 00690cd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690cda: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690cdb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690cdd: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00690ce0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690ce2: jle 0x690d34 */ if ((fZ||fS!=fO)) goto L_00690d34;
L_00690ce4:; BB(0x00690ce4);
    /* 00690ce4: lea edi, [ebx + 0x220] */ r_edi = (u32)(r_ebx+0x220u);
L_00690cea:; BB(0x00690cea);
    /* 00690cea: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00690cec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690ced: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690cf2u); f_0069d470();
    /* 00690cf2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690cf5: mov dword ptr [edi - 0x100], eax */ W32((u32)(r_edi+0xffffff00u), r_eax);
    /* 00690cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690cfd: jl 0x690dc9 */ if ((fS!=fO)) goto L_00690dc9;
L_00690d03:; BB(0x00690d03);
    /* 00690d03: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690d06: jge 0x690dc9 */ if ((fS==fO)) goto L_00690dc9;
L_00690d0c:; BB(0x00690d0c);
    /* 00690d0c: mov edx, dword ptr [eax*4 + 0x7878e4] */ r_edx = R32((u32)(r_eax*4+0x7878e4u));
    /* 00690d13: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00690d17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690d19: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x690d1cu); call_ind(t); }
    /* 00690d1c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690d1f: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00690d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690d23: je 0x690dc9 */ if (fZ) goto L_00690dc9;
L_00690d29:; BB(0x00690d29);
    /* 00690d29: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00690d2c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690d2d: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690d30: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690d32: jl 0x690cea */ if ((fS!=fO)) goto L_00690cea;
L_00690d34:; BB(0x00690d34);
    /* 00690d34: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00690d36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d37: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690d3cu); f_0069d470();
    /* 00690d3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690d3f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690d40: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690d42: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00690d45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690d47: jle 0x690db5 */ if ((fZ||fS!=fO)) goto L_00690db5;
L_00690d49:; BB(0x00690d49);
    /* 00690d49: lea edi, [ebx + 0x20] */ r_edi = (u32)(r_ebx+0x20u);
L_00690d4c:; BB(0x00690d4c);
    /* 00690d4c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00690d4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690d50: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690d55u); f_0068738e();
    /* 00690d55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690d57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d58: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00690d5a: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690d5fu); f_0069d470();
    /* 00690d5f: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00690d61: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00690d63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d64: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00690d66: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690d6bu); f_0069d470();
    /* 00690d6b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00690d6d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00690d6f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d70: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00690d73: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690d78u); f_0069d470();
    /* 00690d78: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00690d7a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00690d7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d7d: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00690d80: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690d85u); f_0069d470();
    /* 00690d85: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00690d87: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00690d8c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690d8f: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00690d92: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00690d94: cmp dword ptr [eax + 4], ecx */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690d97: jge 0x690dc9 */ if ((fS==fO)) goto L_00690dc9;
L_00690d99:; BB(0x00690d99);
    /* 00690d99: cmp dword ptr [eax + 8], ecx */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690d9c: jge 0x690dc9 */ if ((fS==fO)) goto L_00690dc9;
L_00690d9e:; BB(0x00690d9e);
    /* 00690d9e: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00690da1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00690da4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690da6: jge 0x690dc9 */ if ((fS==fO)) goto L_00690dc9;
L_00690da8:; BB(0x00690da8);
    /* 00690da8: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00690dab: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690dac: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690daf: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690db1: jl 0x690d4c */ if ((fS!=fO)) goto L_00690d4c;
L_00690db3:; BB(0x00690db3);
    /* 00690db3: jmp 0x690dba */ goto L_00690dba;
L_00690db5:; BB(0x00690db5);
    /* 00690db5: mov ecx, 1 */ r_ecx = 0x1u;
L_00690dba:; BB(0x00690dba);
    /* 00690dba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690dbb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690dbc: call 0x69d470 */ r_esp -= 4; W32(r_esp, 0x690dc1u); f_0069d470();
    /* 00690dc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690dc4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690dc7: je 0x690de0 */ if (fZ) goto L_00690de0;
L_00690dc9:; BB(0x00690dc9);
    /* 00690dc9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00690dcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690dce: call 0x690710 */ r_esp -= 4; W32(r_esp, 0x690dd3u); f_00690710();
    /* 00690dd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690dd6: mov eax, 0xffffff7b */ r_eax = 0xffffff7bu;
    /* 00690ddb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690ddc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690ddd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690dde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690ddf: ret  */ FN_RET(0x00690b70); r_esp += 4; return;
L_00690de0:; BB(0x00690de0);
    /* 00690de0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690de1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690de2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690de3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690de5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690de6: ret  */ FN_RET(0x00690b70); r_esp += 4; return;
}

void f_00690df0(void) /* sub_690DF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690df0);
    /* 00690df0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690df1: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00690df5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690df6: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 00690dfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690dfd: mov edi, esi */ r_edi = r_esi;
    /* 00690dff: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00690e01: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00690e05: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00690e07: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00690e0a: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 00690e0d: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 00690e10: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00690e12: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690e14: je 0x690e37 */ if (fZ) goto L_00690e37;
L_00690e16:; BB(0x00690e16);
    /* 00690e16: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00690e18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690e1a: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690e1fu); f_0068738e();
    /* 00690e1f: mov edi, eax */ r_edi = r_eax;
    /* 00690e21: mov dword ptr [esi + 0x68], edi */ W32((u32)(r_esi+0x68u), r_edi);
    /* 00690e24: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00690e27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690e28: call 0x69d1d0 */ r_esp -= 4; W32(r_esp, 0x690e2du); f_0069d1d0();
    /* 00690e2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690e30: mov dword ptr [edi + 4], 0xc61c3c00 */ W32((u32)(r_edi+0x4u), 0xc61c3c00u);
L_00690e37:; BB(0x00690e37);
    /* 00690e37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690e38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690e3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690e3b: ret  */ FN_RET(0x00690df0); r_esp += 4; return;
}

void f_00690e40(void) /* sub_690E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690e40);
    /* 00690e40: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00690e44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690e45: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00690e49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690e4a: lea edi, [eax + 7] */ r_edi = (u32)(r_eax+0x7u);
    /* 00690e4d: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 00690e50: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 00690e53: and edi, 0xfffffff8 */ {  u32 a = r_edi; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00690e56: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690e58: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690e5a: jle 0x690e9c */ if ((fZ||fS!=fO)) goto L_00690e9c;
L_00690e5c:; BB(0x00690e5c);
    /* 00690e5c: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 00690e5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690e61: je 0x690e86 */ if (fZ) goto L_00690e86;
L_00690e63:; BB(0x00690e63);
    /* 00690e63: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00690e65: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x690e6au); f_006872fa();
    /* 00690e6a: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 00690e6d: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 00690e70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690e73: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690e75: mov dword ptr [esi + 0x50], ecx */ W32((u32)(r_esi+0x50u), r_ecx);
    /* 00690e78: mov ecx, dword ptr [esi + 0x54] */ r_ecx = R32((u32)(r_esi+0x54u));
    /* 00690e7b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00690e7e: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 00690e81: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00690e83: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
L_00690e86:; BB(0x00690e86);
    /* 00690e86: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690e87: mov dword ptr [esi + 0x4c], edi */ W32((u32)(r_esi+0x4cu), r_edi);
    /* 00690e8a: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x690e8fu); f_006872fa();
    /* 00690e8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690e92: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00690e95: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
L_00690e9c:; BB(0x00690e9c);
    /* 00690e9c: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 00690e9f: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 00690ea2: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00690ea4: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690ea6: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00690ea9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690eaa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690eab: ret  */ FN_RET(0x00690e40); r_esp += 4; return;
}

void f_00690eb0(void) /* sub_690EB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690eb0);
    /* 00690eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690eb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690eb2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690eb3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00690eb7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690eb9: mov esi, dword ptr [edi + 0x54] */ r_esi = R32((u32)(r_edi+0x54u));
    /* 00690ebc: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690ebe: je 0x690ee5 */ if (fZ) goto L_00690ee5;
L_00690ec0:; BB(0x00690ec0);
    /* 00690ec0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_00690ec1:; BB(0x00690ec1);
    /* 00690ec1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00690ec3: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00690ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690ec7: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x690eccu); f_00687300();
    /* 00690ecc: mov edx, esi */ r_edx = r_esi;
    /* 00690ece: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00690ed0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690ed1: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00690ed3: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00690ed6: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x690edbu); f_00687300();
    /* 00690edb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690ede: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690ee0: mov esi, ebx */ r_esi = r_ebx;
    /* 00690ee2: jne 0x690ec1 */ if (!fZ) goto L_00690ec1;
L_00690ee4:; BB(0x00690ee4);
    /* 00690ee4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00690ee5:; BB(0x00690ee5);
    /* 00690ee5: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00690ee8: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690eea: je 0x690f0f */ if (fZ) goto L_00690f0f;
L_00690eec:; BB(0x00690eec);
    /* 00690eec: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 00690eef: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 00690ef2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690ef5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690ef6: call 0x68744a */ r_esp -= 4; W32(r_esp, 0x690efbu); f_0068744a();
    /* 00690efb: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 00690efe: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 00690f01: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00690f04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690f07: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690f09: mov dword ptr [edi + 0x50], ebp */ W32((u32)(r_edi+0x50u), r_ebp);
    /* 00690f0c: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
L_00690f0f:; BB(0x00690f0f);
    /* 00690f0f: mov dword ptr [edi + 0x48], ebp */ W32((u32)(r_edi+0x48u), r_ebp);
    /* 00690f12: mov dword ptr [edi + 0x54], ebp */ W32((u32)(r_edi+0x54u), r_ebp);
    /* 00690f15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690f16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690f17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690f18: ret  */ FN_RET(0x00690eb0); r_esp += 4; return;
}

void f_00690f20(void) /* sub_690F20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690f20);
    /* 00690f20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690f21: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00690f25: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00690f28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690f2a: je 0x690f3d */ if (fZ) goto L_00690f3d;
L_00690f2c:; BB(0x00690f2c);
    /* 00690f2c: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690f2f: je 0x690f3d */ if (fZ) goto L_00690f3d;
L_00690f31:; BB(0x00690f31);
    /* 00690f31: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 00690f34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690f35: call 0x69d330 */ r_esp -= 4; W32(r_esp, 0x690f3au); f_0069d330();
    /* 00690f3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00690f3d:; BB(0x00690f3d);
    /* 00690f3d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690f3e: call 0x690eb0 */ r_esp -= 4; W32(r_esp, 0x690f43u); f_00690eb0();
    /* 00690f43: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 00690f46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690f49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690f4b: je 0x690f56 */ if (fZ) goto L_00690f56;
L_00690f4d:; BB(0x00690f4d);
    /* 00690f4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690f4e: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x690f53u); f_00687300();
    /* 00690f53: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00690f56:; BB(0x00690f56);
    /* 00690f56: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 00690f59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690f5b: je 0x690f66 */ if (fZ) goto L_00690f66;
L_00690f5d:; BB(0x00690f5d);
    /* 00690f5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690f5e: call 0x687300 */ r_esp -= 4; W32(r_esp, 0x690f63u); f_00687300();
    /* 00690f63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00690f66:; BB(0x00690f66);
    /* 00690f66: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 00690f6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690f6d: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00690f6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690f70: ret  */ FN_RET(0x00690f20); r_esp += 4; return;
}

void f_00690f80(void) /* sub_690F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00690f80);
    /* 00690f80: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00690f84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690f85: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 00690f88: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690f8a: jne 0x690f93 */ if (!fZ) goto L_00690f93;
L_00690f8c:; BB(0x00690f8c);
    /* 00690f8c: mov eax, 1 */ r_eax = 0x1u;
    /* 00690f91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690f92: ret  */ FN_RET(0x00690f80); r_esp += 4; return;
L_00690f93:; BB(0x00690f93);
    /* 00690f93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690f94: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00690f98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690f99: mov ebp, dword ptr [esi + 0xe78] */ r_ebp = R32((u32)(r_esi+0xe78u));
    /* 00690f9f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690fa0: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 00690fa5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690fa7: mov edi, ebx */ r_edi = r_ebx;
    /* 00690fa9: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fb0: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00690fb2: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690fb7u); f_0068738e();
    /* 00690fb7: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00690fbb: mov edi, eax */ r_edi = r_eax;
    /* 00690fbd: mov dword ptr [ebx + 0x68], edi */ W32((u32)(r_ebx+0x68u), r_edi);
    /* 00690fc0: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 00690fc3: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00690fc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690fc7: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x690fccu); f_00698a00();
    /* 00690fcc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fd0: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 00690fd3: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690fd8u); f_0068738e();
    /* 00690fd8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fdc: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 00690fdf: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690fe4u); f_0068738e();
    /* 00690fe4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fe6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690fe8: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 00690feb: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690ff0u); f_0068738e();
    /* 00690ff0: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00690ff3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00690ff5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690ff7: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00690ff9: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x690ffeu); f_0068738e();
    /* 00690ffe: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00691001: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00691003: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00691005: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00691007: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691009: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0069100c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0069100e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069100f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691010: call 0x6975b0 */ r_esp -= 4; W32(r_esp, 0x691015u); f_006975b0();
    /* 00691015: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00691018: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069101a: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069101c: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 0069101f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00691021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691023: call 0x6975b0 */ r_esp -= 4; W32(r_esp, 0x691028u); f_006975b0();
    /* 00691028: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0069102a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069102b: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x691030u); f_00698a00();
    /* 00691030: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00691033: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691036: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00691039: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0069103c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069103d: call 0x698a00 */ r_esp -= 4; W32(r_esp, 0x691042u); f_00698a00();
    /* 00691042: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00691045: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00691047: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0069104a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0069104e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691051: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691053: je 0x69115d */ if (fZ) goto L_0069115d;
L_00691059:; BB(0x00691059);
    /* 00691059: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0069105b: lea eax, [edi + 0x14] */ r_eax = (u32)(r_edi+0x14u);
    /* 0069105e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069105f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691060: call 0x697380 */ r_esp -= 4; W32(r_esp, 0x691065u); f_00697380();
    /* 00691065: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00691068: lea edx, [edi + 0x20] */ r_edx = (u32)(r_edi+0x20u);
    /* 0069106b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069106c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069106d: call 0x697380 */ r_esp -= 4; W32(r_esp, 0x691072u); f_00697380();
    /* 00691072: mov eax, dword ptr [esi + 0xb20] */ r_eax = R32((u32)(r_esi+0xb20u));
    /* 00691078: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069107b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069107d: jne 0x6910e1 */ if (!fZ) goto L_006910e1;
L_0069107f:; BB(0x0069107f);
    /* 0069107f: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00691082: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00691084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691085: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69108au); f_0068738e();
    /* 0069108a: mov dword ptr [esi + 0xb20], eax */ W32((u32)(r_esi+0xb20u), r_eax);
    /* 00691090: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00691093: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691096: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691098: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0069109c: jle 0x6910e1 */ if ((fZ||fS!=fO)) goto L_006910e1;
L_0069109e:; BB(0x0069109e);
    /* 0069109e: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 006910a2: lea ebp, [esi + 0x720] */ r_ebp = (u32)(r_esi+0x720u);
L_006910a8:; BB(0x006910a8);
    /* 006910a8: mov edx, dword ptr [esi + 0xb20] */ r_edx = R32((u32)(r_esi+0xb20u));
    /* 006910ae: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006910b2: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 006910b5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006910b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006910b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006910b9: call 0x694b10 */ r_esp -= 4; W32(r_esp, 0x6910beu); f_00694b10();
    /* 006910be: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006910c2: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006910c6: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006910c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006910cc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006910cd: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006910d0: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006910d3: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006910d5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006910d9: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006910dd: jl 0x6910a8 */ if ((fS!=fO)) goto L_006910a8;
L_006910df:; BB(0x006910df);
    /* 006910df: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_006910e1:; BB(0x006910e1);
    /* 006910e1: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006910e4: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 006910e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006910e7: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x6910ecu); f_0068738e();
    /* 006910ec: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 006910ef: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006910f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006910f5: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006910f7: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 006910fb: jle 0x691155 */ if ((fZ||fS!=fO)) goto L_00691155;
L_006910fd:; BB(0x006910fd);
    /* 006910fd: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00691101: lea ebp, [esi + 0xb24] */ r_ebp = (u32)(r_esi+0xb24u);
L_00691107:; BB(0x00691107);
    /* 00691107: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0069110b: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0069110e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00691111: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00691113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691114: mov eax, dword ptr [esi + edx*4] */ r_eax = R32((u32)(r_esi+r_edx*4));
    /* 00691117: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00691118: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069111a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069111e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00691120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691121: lea eax, [esi + 0xb34] */ r_eax = (u32)(r_esi+0xb34u);
    /* 00691127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691128: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0069112b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069112d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069112e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069112f: call 0x691ee0 */ r_esp -= 4; W32(r_esp, 0x691134u); f_00691ee0();
    /* 00691134: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00691138: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0069113c: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0069113f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691142: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691143: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00691146: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00691149: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069114b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069114f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00691153: jl 0x691107 */ if ((fS!=fO)) goto L_00691107;
L_00691155:; BB(0x00691155);
    /* 00691155: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 0069115b: jmp 0x6911d5 */ goto L_006911d5;
L_0069115d:; BB(0x0069115d);
    /* 0069115d: cmp dword ptr [esi + 0xb20], ebp */ {  u32 a = R32((u32)(r_esi+0xb20u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691163: jne 0x6911d5 */ if (!fZ) goto L_006911d5;
L_00691165:; BB(0x00691165);
    /* 00691165: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 00691168: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069116a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069116b: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x691170u); f_0068738e();
    /* 00691170: mov dword ptr [esi + 0xb20], eax */ W32((u32)(r_esi+0xb20u), r_eax);
    /* 00691176: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00691179: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069117c: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069117e: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00691182: jle 0x6911d5 */ if ((fZ||fS!=fO)) goto L_006911d5;
L_00691184:; BB(0x00691184);
    /* 00691184: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00691188: lea ebp, [esi + 0x720] */ r_ebp = (u32)(r_esi+0x720u);
L_0069118e:; BB(0x0069118e);
    /* 0069118e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00691191: mov eax, dword ptr [esi + 0xb20] */ r_eax = R32((u32)(r_esi+0xb20u));
    /* 00691197: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00691198: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069119c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069119e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069119f: call 0x694b70 */ r_esp -= 4; W32(r_esp, 0x6911a4u); f_00694b70();
    /* 006911a4: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 006911a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006911a8: call 0x694a90 */ r_esp -= 4; W32(r_esp, 0x6911adu); f_00694a90();
    /* 006911ad: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006911b1: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006911b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006911b8: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 006911bf: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006911c2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006911c3: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006911c6: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006911c9: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006911cb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006911cf: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006911d3: jl 0x69118e */ if ((fS!=fO)) goto L_0069118e;
L_006911d5:; BB(0x006911d5);
    /* 006911d5: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006911d8: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 006911dc: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 006911df: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006911e2: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006911e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006911e6: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x6911ebu); f_006872fa();
    /* 006911eb: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 006911ee: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 006911f1: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006911f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006911f5: call 0x6872fa */ r_esp -= 4; W32(r_esp, 0x6911fau); f_006872fa();
    /* 006911fa: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006911fe: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00691201: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691204: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00691206: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00691209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069120b: jle 0x69122d */ if ((fZ||fS!=fO)) goto L_0069122d;
L_0069120d:; BB(0x0069120d);
    /* 0069120d: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00691210: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00691212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691213: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x691218u); f_0068738e();
    /* 00691218: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0069121b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069121f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691222: mov dword ptr [ecx + ebp*4], eax */ W32((u32)(r_ecx+r_ebp*4), r_eax);
    /* 00691225: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00691228: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00691229: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069122b: jl 0x69120d */ if ((fS!=fO)) goto L_0069120d;
L_0069122d:; BB(0x0069122d);
    /* 0069122d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069122f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00691231: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00691234: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00691237: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0069123a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0069123b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069123d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0069123f: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00691242: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00691245: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00691248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691249: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69124eu); f_0068738e();
    /* 0069124e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00691251: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00691254: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00691256: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00691257: call 0x68738e */ r_esp -= 4; W32(r_esp, 0x69125cu); f_0068738e();
    /* 0069125c: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 0069125f: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00691262: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691265: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0069126d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069126f: jle 0x6912b9 */ if ((fZ||fS!=fO)) goto L_006912b9;
L_00691271:; BB(0x00691271);
    /* 00691271: mov eax, 0xfffffbe0 */ r_eax = 0xfffffbe0u;
    /* 00691276: lea ebp, [esi + 0x420] */ r_ebp = (u32)(r_esi+0x420u);
    /* 0069127c: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069127e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_00691282:; BB(0x00691282);
    /* 00691282: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 00691288: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 0069128b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069128c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069128d: mov eax, dword ptr [edx*4 + 0x7878d0] */ r_eax = R32((u32)(r_edx*4+0x7878d0u));
    /* 00691294: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x691297u); call_ind(t); }
    /* 00691297: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0069129b: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0069129e: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006912a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006912a3: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006912a6: mov dword ptr [edx + ecx], eax */ W32((u32)(r_edx+r_ecx), r_eax);
    /* 006912a9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006912ad: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 006912b0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006912b1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006912b3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006912b7: jl 0x691282 */ if ((fS!=fO)) goto L_00691282;
L_006912b9:; BB(0x006912b9);
    /* 006912b9: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006912bc: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 006912c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006912c6: jle 0x691310 */ if ((fZ||fS!=fO)) goto L_00691310;
L_006912c8:; BB(0x006912c8);
    /* 006912c8: mov eax, 0xfffff9e0 */ r_eax = 0xfffff9e0u;
    /* 006912cd: lea ebp, [esi + 0x620] */ r_ebp = (u32)(r_esi+0x620u);
    /* 006912d3: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006912d5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_006912d9:; BB(0x006912d9);
    /* 006912d9: mov edx, dword ptr [ebp - 0x100] */ r_edx = R32((u32)(r_ebp+0xffffff00u));
    /* 006912df: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 006912e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006912e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006912e4: mov eax, dword ptr [edx*4 + 0x7878d8] */ r_eax = R32((u32)(r_edx*4+0x7878d8u));
    /* 006912eb: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x6912eeu); call_ind(t); }
    /* 006912ee: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006912f2: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006912f5: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006912f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006912fa: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006912fd: mov dword ptr [edx + ecx], eax */ W32((u32)(r_edx+r_ecx), r_eax);
    /* 00691300: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00691304: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00691307: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00691308: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069130a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0069130e: jl 0x6912d9 */ if ((fS!=fO)) goto L_006912d9;
L_00691310:; BB(0x00691310);
    /* 00691310: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691311: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691312: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691313: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00691315: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691316: ret  */ FN_RET(0x00690f80); r_esp += 4; return;
}


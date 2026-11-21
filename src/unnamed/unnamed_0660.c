#include "protos.h"

void f_00660030(void) /* sub_660030 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660030);
    /* 00660030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660031: mov ebp, esp */ r_ebp = r_esp;
    /* 00660033: sub esp, 0x86c */ {  u32 a = r_esp; u32 b = 0x86cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660039: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066003e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00660040: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00660043: mov dword ptr [ebp - 0x86c], ecx */ W32((u32)(r_ebp+0xfffff794u), r_ecx);
    /* 00660049: mov byte ptr [ebp - 0x808], 0 */ W8((u32)(r_ebp+0xfffff7f8u), 0x0u);
    /* 00660050: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660055: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660057: lea eax, [ebp - 0x807] */ r_eax = (u32)(r_ebp+0xfffff7f9u);
    /* 0066005d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066005e: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x660063u); f_00686fa2();
    /* 00660063: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660066: mov byte ptr [ebp - 0x408], 0 */ W8((u32)(r_ebp+0xfffffbf8u), 0x0u);
    /* 0066006d: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00660072: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660074: lea ecx, [ebp - 0x407] */ r_ecx = (u32)(r_ebp+0xfffffbf9u);
    /* 0066007a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066007b: call 0x686fa2 */ r_esp -= 4; W32(r_esp, 0x660080u); f_00686fa2();
    /* 00660080: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660083: lea edx, [ebp - 0x868] */ r_edx = (u32)(r_ebp+0xfffff798u);
    /* 00660089: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066008a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066008d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066008e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660094: call 0x635f30 */ r_esp -= 4; W32(r_esp, 0x660099u); f_00635f30();
    /* 00660099: lea ecx, [ebp - 0x868] */ r_ecx = (u32)(r_ebp+0xfffff798u);
    /* 0066009f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006600a0: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 006600a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006600a7: call 0x686ec6 */ r_esp -= 4; W32(r_esp, 0x6600acu); f_00686ec6();
    /* 006600ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006600af: push 0x6c2d28 */ { u32 v = 0x6c2d28u; r_esp -= 4; W32(r_esp, v); }
    /* 006600b4: lea eax, [ebp - 0x408] */ r_eax = (u32)(r_ebp+0xfffffbf8u);
    /* 006600ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006600bb: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6600c0u); f_005ea9c0();
    /* 006600c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006600c3: mov dword ptr [ebp - 0x810], eax */ W32((u32)(r_ebp+0xfffff7f0u), r_eax);
    /* 006600c9: cmp dword ptr [ebp - 0x810], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006600d0: jne 0x6600d9 */ if (!fZ) goto L_006600d9;
L_006600d2:; BB(0x006600d2);
    /* 006600d2: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006600d4: jmp 0x6602ff */ goto L_006602ff;
L_006600d9:; BB(0x006600d9);
    /* 006600d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006600dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006600dd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006600e3: call 0x636090 */ r_esp -= 4; W32(r_esp, 0x6600e8u); f_00636090();
    /* 006600e8: mov dword ptr [ebp - 0x814], eax */ W32((u32)(r_ebp+0xfffff7ecu), r_eax);
    /* 006600ee: mov edx, dword ptr [ebp - 0x810] */ r_edx = R32((u32)(r_ebp+0xfffff7f0u));
    /* 006600f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006600f5: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x6600fbu); call_ind(t); }
    /* 006600fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006600fe: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00660100: lea eax, [ebp - 0x858] */ r_eax = (u32)(r_ebp+0xfffff7a8u);
    /* 00660106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660107: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066010c: push 0x6dec9c */ { u32 v = 0x6dec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00660111: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00660117: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0066011a: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0066011f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00660122: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00660124: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00660127: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660129u); call_ind(t); }
    /* 00660129: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066012c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066012d: lea edx, [ebp - 0x858] */ r_edx = (u32)(r_ebp+0xfffff7a8u);
    /* 00660133: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660134: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x660139u); f_00686ec0();
    /* 00660139: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066013c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066013e: jne 0x660164 */ if (!fZ) goto L_00660164;
L_00660140:; BB(0x00660140);
    /* 00660140: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660145: push 0x6dec9c */ { u32 v = 0x6dec9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066014a: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0066014f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00660152: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00660158: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0066015b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0066015d: mov ecx, eax */ r_ecx = r_eax;
    /* 0066015f: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00660162: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660164u); call_ind(t); }
L_00660164:; BB(0x00660164);
    /* 00660164: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660166: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660168: mov ecx, dword ptr [ebp - 0x86c] */ r_ecx = R32((u32)(r_ebp+0xfffff794u));
    /* 0066016e: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x660173u); f_005fb720();
    /* 00660173: mov ecx, eax */ r_ecx = r_eax;
    /* 00660175: call 0x615260 */ r_esp -= 4; W32(r_esp, 0x66017au); f_00615260();
    /* 0066017a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066017b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066017d: mov ecx, dword ptr [ebp - 0x86c] */ r_ecx = R32((u32)(r_ebp+0xfffff794u));
    /* 00660183: call 0x5fb720 */ r_esp -= 4; W32(r_esp, 0x660188u); f_005fb720();
    /* 00660188: mov ecx, eax */ r_ecx = r_eax;
    /* 0066018a: call 0x628ab0 */ r_esp -= 4; W32(r_esp, 0x66018fu); f_00628ab0();
    /* 0066018f: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 00660195: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660196: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x66019cu); call_ind(t); }
    /* 0066019c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066019f: lea edx, [ebp - 0x868] */ r_edx = (u32)(r_ebp+0xfffff798u);
    /* 006601a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006601a6: lea eax, [ebp - 0x824] */ r_eax = (u32)(r_ebp+0xfffff7dcu);
    /* 006601ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006601ad: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6601b2u); f_00686d8e();
    /* 006601b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006601b5: mov dword ptr [ebp - 0x80c], 0 */ W32((u32)(r_ebp+0xfffff7f4u), 0x0u);
    /* 006601bf: jmp 0x6601d0 */ goto L_006601d0;
L_006601c1:; BB(0x006601c1);
    /* 006601c1: mov ecx, dword ptr [ebp - 0x80c] */ r_ecx = R32((u32)(r_ebp+0xfffff7f4u));
    /* 006601c7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006601ca: mov dword ptr [ebp - 0x80c], ecx */ W32((u32)(r_ebp+0xfffff7f4u), r_ecx);
L_006601d0:; BB(0x006601d0);
    /* 006601d0: cmp dword ptr [ebp - 0x80c], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffff7f4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006601d7: jge 0x6601fe */ if ((fS==fO)) goto L_006601fe;
L_006601d9:; BB(0x006601d9);
    /* 006601d9: mov edx, dword ptr [ebp - 0x80c] */ r_edx = R32((u32)(r_ebp+0xfffff7f4u));
    /* 006601df: movsx eax, byte ptr [ebp + edx - 0x824] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edx+0xfffff7dcu));
    /* 006601e7: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006601ea: jne 0x6601fc */ if (!fZ) goto L_006601fc;
L_006601ec:; BB(0x006601ec);
    /* 006601ec: mov ecx, dword ptr [ebp - 0x80c] */ r_ecx = R32((u32)(r_ebp+0xfffff7f4u));
    /* 006601f2: mov byte ptr [ebp + ecx - 0x824], 0 */ W8((u32)(r_ebp+r_ecx+0xfffff7dcu), 0x0u);
    /* 006601fa: jmp 0x6601fe */ goto L_006601fe;
L_006601fc:; BB(0x006601fc);
    /* 006601fc: jmp 0x6601c1 */ goto L_006601c1;
L_006601fe:; BB(0x006601fe);
    /* 006601fe: push 0x6dedbc */ { u32 v = 0x6dedbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00660203: push 0x6dedb8 */ { u32 v = 0x6dedb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00660208: lea edx, [ebp - 0x824] */ r_edx = (u32)(r_ebp+0xfffff7dcu);
    /* 0066020e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066020f: mov ecx, dword ptr [ebp - 0x86c] */ r_ecx = R32((u32)(r_ebp+0xfffff794u));
    /* 00660215: call 0x660310 */ r_esp -= 4; W32(r_esp, 0x66021au); f_00660310();
    /* 0066021a: lea eax, [ebp - 0x824] */ r_eax = (u32)(r_ebp+0xfffff7dcu);
    /* 00660220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660221: call dword ptr [0x6b2178] */ { u32 t = R32((u32)(0x6b2178u)); r_esp -= 4; W32(r_esp, 0x660227u); call_ind(t); }
    /* 00660227: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066022a: lea ecx, [ebp - 0x824] */ r_ecx = (u32)(r_ebp+0xfffff7dcu);
    /* 00660230: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660231: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00660234: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660235: mov eax, dword ptr [ebp - 0x86c] */ r_eax = R32((u32)(r_ebp+0xfffff794u));
    /* 0066023b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0066023d: mov ecx, dword ptr [ebp - 0x86c] */ r_ecx = R32((u32)(r_ebp+0xfffff794u));
    /* 00660243: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00660249: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x66024bu); call_ind(t); }
    /* 0066024b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660251: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00660253: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00660259: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 0066025f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x660261u); call_ind(t); }
    /* 00660261: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00660264: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660266: je 0x6602fd */ if (fZ) goto L_006602fd;
L_0066026c:; BB(0x0066026c);
    /* 0066026c: cmp dword ptr [ebp - 0x814], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffff7ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00660273: jl 0x6602fd */ if ((fS!=fO)) goto L_006602fd;
L_00660279:; BB(0x00660279);
    /* 00660279: mov edx, dword ptr [ebp - 0x814] */ r_edx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 0066027f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660280: push 0x6dedac */ { u32 v = 0x6dedacu; r_esp -= 4; W32(r_esp, v); }
    /* 00660285: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 0066028b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066028c: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x660292u); call_ind(t); }
    /* 00660292: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660295: lea ecx, [ebp - 0x868] */ r_ecx = (u32)(r_ebp+0xfffff798u);
    /* 0066029b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066029c: lea edx, [ebp - 0x408] */ r_edx = (u32)(r_ebp+0xfffffbf8u);
    /* 006602a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006602a3: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6602a8u); f_00686d8e();
    /* 006602a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006602ab: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 006602b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006602b2: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x6602b8u); call_ind(t); }
    /* 006602b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006602bb: mov ecx, dword ptr [ebp - 0x814] */ r_ecx = R32((u32)(r_ebp+0xfffff7ecu));
    /* 006602c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006602c2: push 0x6deda0 */ { u32 v = 0x6deda0u; r_esp -= 4; W32(r_esp, v); }
    /* 006602c7: lea edx, [ebp - 0x868] */ r_edx = (u32)(r_ebp+0xfffff798u);
    /* 006602cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006602ce: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6602d4u); call_ind(t); }
    /* 006602d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006602d7: lea eax, [ebp - 0x868] */ r_eax = (u32)(r_ebp+0xfffff798u);
    /* 006602dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006602de: lea ecx, [ebp - 0x408] */ r_ecx = (u32)(r_ebp+0xfffffbf8u);
    /* 006602e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006602e5: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x6602eau); f_00686d8e();
    /* 006602ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006602ed: lea edx, [ebp - 0x868] */ r_edx = (u32)(r_ebp+0xfffff798u);
    /* 006602f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006602f4: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x6602fau); call_ind(t); }
    /* 006602fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006602fd:; BB(0x006602fd);
    /* 006602fd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_006602ff:; BB(0x006602ff);
    /* 006602ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660302: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00660304: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x660309u); f_00686d72();
    /* 00660309: mov esp, ebp */ r_esp = r_ebp;
    /* 0066030b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066030c: ret 4 */ FN_RET(0x00660030); r_esp += 8; return;
}

void f_00660310(void) /* sub_660310 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660310);
    /* 00660310: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660311: mov ebp, esp */ r_ebp = r_esp;
    /* 00660313: sub esp, 0x244 */ {  u32 a = r_esp; u32 b = 0x244u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660319: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0066031e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00660320: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00660323: mov dword ptr [ebp - 0x244], ecx */ W32((u32)(r_ebp+0xfffffdbcu), r_ecx);
    /* 00660329: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0066032c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066032d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00660330: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660331: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00660334: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660335: push 0x6dedcc */ { u32 v = 0x6dedccu; r_esp -= 4; W32(r_esp, v); }
    /* 0066033a: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 00660340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660341: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x660347u); call_ind(t); }
    /* 00660347: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066034a: lea ecx, [ebp - 0x130] */ r_ecx = (u32)(r_ebp+0xfffffed0u);
    /* 00660350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00660351: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 00660357: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660358: call dword ptr [0x6b2308] */ { u32 t = R32((u32)(0x6b2308u)); r_esp -= 4; W32(r_esp, 0x66035eu); call_ind(t); }
    /* 0066035e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660361: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 00660367: cmp dword ptr [ebp - 0x134], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066036e: je 0x6603ed */ if (fZ) goto L_006603ed;
L_00660370:; BB(0x00660370);
    /* 00660370: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 00660376: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660377: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0066037a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0066037b: push 0x6dedc4 */ { u32 v = 0x6dedc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00660380: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 00660386: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00660387: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x66038du); call_ind(t); }
    /* 0066038d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00660390: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 00660396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660397: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x66039du); call_ind(t); }
    /* 0066039d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006603a0:; BB(0x006603a0);
    /* 006603a0: lea ecx, [ebp - 0x130] */ r_ecx = (u32)(r_ebp+0xfffffed0u);
    /* 006603a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006603a7: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 006603ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006603ae: call dword ptr [0x6b2304] */ { u32 t = R32((u32)(0x6b2304u)); r_esp -= 4; W32(r_esp, 0x6603b4u); call_ind(t); }
    /* 006603b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006603b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006603b9: jne 0x6603ed */ if (!fZ) goto L_006603ed;
L_006603bb:; BB(0x006603bb);
    /* 006603bb: lea eax, [ebp - 0x10c] */ r_eax = (u32)(r_ebp+0xfffffef4u);
    /* 006603c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006603c2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006603c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006603c6: push 0x6dedc4 */ { u32 v = 0x6dedc4u; r_esp -= 4; W32(r_esp, v); }
    /* 006603cb: lea edx, [ebp - 0x240] */ r_edx = (u32)(r_ebp+0xfffffdc0u);
    /* 006603d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006603d2: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x6603d8u); call_ind(t); }
    /* 006603d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006603db: lea eax, [ebp - 0x240] */ r_eax = (u32)(r_ebp+0xfffffdc0u);
    /* 006603e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006603e2: call dword ptr [0x6b22a0] */ { u32 t = R32((u32)(0x6b22a0u)); r_esp -= 4; W32(r_esp, 0x6603e8u); call_ind(t); }
    /* 006603e8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006603eb: jmp 0x6603a0 */ goto L_006603a0;
L_006603ed:; BB(0x006603ed);
    /* 006603ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006603f0: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006603f2: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x6603f7u); f_00686d72();
    /* 006603f7: mov esp, ebp */ r_esp = r_ebp;
    /* 006603f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006603fa: ret 0xc */ FN_RET(0x00660310); r_esp += 16; return;
}

void f_00660f70(void) /* sub_660F70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00660f70);
    /* 00660f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00660f71: mov ebp, esp */ r_ebp = r_esp;
    /* 00660f73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00660f76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00660f79: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00660f80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00660f82: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660f85: call 0x5fb8b0 */ r_esp -= 4; W32(r_esp, 0x660f8au); f_005fb8b0();
    /* 00660f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660f8b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660f8e: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00660f93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00660f94: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x660f99u); f_00686d8e();
    /* 00660f99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00660f9c:; BB(0x00660f9c);
    /* 00660f9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660f9f: movsx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1bcu));
    /* 00660fa6: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00660fa9: jne 0x660fdf */ if (!fZ) goto L_00660fdf;
L_00660fab:; BB(0x00660fab);
    /* 00660fab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660fb2: jmp 0x660fbd */ goto L_00660fbd;
L_00660fb4:; BB(0x00660fb4);
    /* 00660fb4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660fb7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00660fba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00660fbd:; BB(0x00660fbd);
    /* 00660fbd: cmp dword ptr [ebp - 4], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00660fc1: jge 0x660fdd */ if ((fS==fO)) goto L_00660fdd;
L_00660fc3:; BB(0x00660fc3);
    /* 00660fc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660fc6: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00660fc9: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660fcc: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00660fcf: mov al, byte ptr [edx + 0x1bd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1bdu))) & 0xffu);
    /* 00660fd5: mov byte ptr [ecx + 0x1bc], al */ W8((u32)(r_ecx+0x1bcu), (u8)r_eax);
    /* 00660fdb: jmp 0x660fb4 */ goto L_00660fb4;
L_00660fdd:; BB(0x00660fdd);
    /* 00660fdd: jmp 0x660f9c */ goto L_00660f9c;
L_00660fdf:; BB(0x00660fdf);
    /* 00660fdf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00660fe6: jmp 0x660ff1 */ goto L_00660ff1;
L_00660fe8:; BB(0x00660fe8);
    /* 00660fe8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00660feb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00660fee: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00660ff1:; BB(0x00660ff1);
    /* 00660ff1: cmp dword ptr [ebp - 4], 0x32 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00660ff5: jge 0x661012 */ if ((fS==fO)) goto L_00661012;
L_00660ff7:; BB(0x00660ff7);
    /* 00660ff7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00660ffa: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00660ffd: movsx eax, byte ptr [edx + 0x1bc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1bcu));
    /* 00661004: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00661006: jne 0x661010 */ if (!fZ) goto L_00661010;
L_00661008:; BB(0x00661008);
    /* 00661008: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0066100b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0066100e: jmp 0x661012 */ goto L_00661012;
L_00661010:; BB(0x00661010);
    /* 00661010: jmp 0x660fe8 */ goto L_00660fe8;
L_00661012:; BB(0x00661012);
    /* 00661012: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00661015: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00661018: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0066101b: jmp 0x661026 */ goto L_00661026;
L_0066101d:; BB(0x0066101d);
    /* 0066101d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00661020: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00661023: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00661026:; BB(0x00661026);
    /* 00661026: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066102a: jle 0x661051 */ if ((fZ||fS!=fO)) goto L_00661051;
L_0066102c:; BB(0x0066102c);
    /* 0066102c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066102f: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00661032: movsx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1bcu));
    /* 00661039: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066103c: jne 0x66104d */ if (!fZ) goto L_0066104d;
L_0066103e:; BB(0x0066103e);
    /* 0066103e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661041: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661044: mov byte ptr [eax + 0x1bc], 0 */ W8((u32)(r_eax+0x1bcu), 0x0u);
    /* 0066104b: jmp 0x66104f */ goto L_0066104f;
L_0066104d:; BB(0x0066104d);
    /* 0066104d: jmp 0x661051 */ goto L_00661051;
L_0066104f:; BB(0x0066104f);
    /* 0066104f: jmp 0x66101d */ goto L_0066101d;
L_00661051:; BB(0x00661051);
    /* 00661051: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00661054: add eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00661059: mov esp, ebp */ r_esp = r_ebp;
    /* 0066105b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066105c: ret  */ FN_RET(0x00660f70); r_esp += 4; return;
}


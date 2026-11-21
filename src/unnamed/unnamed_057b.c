#include "protos.h"

void f_0057b050(void) /* sub_57B050 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057b050);
    /* 0057b050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b051: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b053: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b056: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057b059: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 0057b05d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b05f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057b065: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x57b06au); f_005df700();
    /* 0057b06a: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 0057b06d: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0057b071: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b073: jne 0x57b087 */ if (!fZ) goto L_0057b087;
L_0057b075:; BB(0x0057b075);
    /* 0057b075: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b07a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0057b080: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x57b085u); f_005f2ba0();
    /* 0057b085: jmp 0x57b0ea */ goto L_0057b0ea;
L_0057b087:; BB(0x0057b087);
    /* 0057b087: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b089: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b08f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b091: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b097: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0057b09d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b09fu); call_ind(t); }
    /* 0057b09f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057b0a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b0a4: je 0x57b0ea */ if (fZ) goto L_0057b0ea;
L_0057b0a6:; BB(0x0057b0a6);
    /* 0057b0a6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b0a9: movzx eax, byte ptr [edx + 0x1c4] */ r_eax = (u32)R8((u32)(r_edx+0x1c4u));
    /* 0057b0b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b0b2: je 0x57b0da */ if (fZ) goto L_0057b0da;
L_0057b0b4:; BB(0x0057b0b4);
    /* 0057b0b4: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 0057b0ba: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x57b0bfu); f_005da7b0();
    /* 0057b0bf: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057b0c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b0c4: jne 0x57b0da */ if (!fZ) goto L_0057b0da;
L_0057b0c6:; BB(0x0057b0c6);
    /* 0057b0c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b0c8: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b0cd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0057b0d3: call 0x5f2b20 */ r_esp -= 4; W32(r_esp, 0x57b0d8u); f_005f2b20();
    /* 0057b0d8: jmp 0x57b0ea */ goto L_0057b0ea;
L_0057b0da:; BB(0x0057b0da);
    /* 0057b0da: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b0df: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0057b0e5: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x57b0eau); f_005f2ba0();
L_0057b0ea:; BB(0x0057b0ea);
    /* 0057b0ea: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b0ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b0ed: ret  */ FN_RET(0x0057b050); r_esp += 4; return;
}

void f_0057b1b0(void) /* sub_57B1B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057b1b0);
    /* 0057b1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b1b3: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b1b6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0057b1b9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b1bc: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 0057b1c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b1c5: jne 0x57b1d9 */ if (!fZ) goto L_0057b1d9;
L_0057b1c7:; BB(0x0057b1c7);
    /* 0057b1c7: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b1ca: movzx eax, byte ptr [edx + 0x1bd] */ r_eax = (u32)R8((u32)(r_edx+0x1bdu));
    /* 0057b1d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b1d3: je 0x57b2ad */ if (fZ) goto L_0057b2ad;
L_0057b1d9:; BB(0x0057b1d9);
    /* 0057b1d9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b1dc: cmp dword ptr [ecx + 0x19d4], 0 */ {  u32 a = R32((u32)(r_ecx+0x19d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b1e3: je 0x57b2ad */ if (fZ) goto L_0057b2ad;
L_0057b1e9:; BB(0x0057b1e9);
    /* 0057b1e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b1ec: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057b1f2: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0057b1f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b1f7: je 0x57b2ad */ if (fZ) goto L_0057b2ad;
L_0057b1fd:; BB(0x0057b1fd);
    /* 0057b1fd: mov dword ptr [ebp - 8], 2 */ W32((u32)(r_ebp+0xfffffff8u), 0x2u);
    /* 0057b204: jmp 0x57b20f */ goto L_0057b20f;
L_0057b206:; BB(0x0057b206);
    /* 0057b206: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b209: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057b20c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0057b20f:; BB(0x0057b20f);
    /* 0057b20f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b212: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b215: cmp ecx, dword ptr [eax + 0x19d4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b21b: jge 0x57b24f */ if ((fS==fO)) goto L_0057b24f;
L_0057b21d:; BB(0x0057b21d);
    /* 0057b21d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b220: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057b226: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b229: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057b22f: movsx edx, byte ptr [ecx + edx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_edx));
    /* 0057b233: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b235: jne 0x57b24d */ if (!fZ) goto L_0057b24d;
L_0057b237:; BB(0x0057b237);
    /* 0057b237: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b23a: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0057b23d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b23e: push 0x4cb */ { u32 v = 0x4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b243: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b246: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x57b24bu); f_005f83d0();
    /* 0057b24b: jmp 0x57b24f */ goto L_0057b24f;
L_0057b24d:; BB(0x0057b24d);
    /* 0057b24d: jmp 0x57b206 */ goto L_0057b206;
L_0057b24f:; BB(0x0057b24f);
    /* 0057b24f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b252: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b255: cmp edx, dword ptr [ecx + 0x19d4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b25b: jne 0x57b277 */ if (!fZ) goto L_0057b277;
L_0057b25d:; BB(0x0057b25d);
    /* 0057b25d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b260: mov ecx, dword ptr [eax + 0x19d4] */ r_ecx = R32((u32)(r_eax+0x19d4u));
    /* 0057b266: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0057b269: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b26a: push 0x4cb */ { u32 v = 0x4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b26f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b272: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x57b277u); f_005f83d0();
L_0057b277:; BB(0x0057b277);
    /* 0057b277: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b279: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b27c: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x57b281u); f_005fb630();
    /* 0057b281: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057b284: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b287: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057b289: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057b28c: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057b28f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57b291u); call_ind(t); }
    /* 0057b291: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b293: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b296: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x57b29bu); f_005fb630();
    /* 0057b29b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057b29e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b2a1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057b2a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057b2a6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057b2a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b2abu); call_ind(t); }
    /* 0057b2ab: jmp 0x57b2f0 */ goto L_0057b2f0;
L_0057b2ad:; BB(0x0057b2ad);
    /* 0057b2ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b2af: push 0x4cb */ { u32 v = 0x4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b2b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b2b7: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x57b2bcu); f_005f83d0();
    /* 0057b2bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b2be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b2c1: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x57b2c6u); f_005fb630();
    /* 0057b2c6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057b2c9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057b2cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b2ce: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057b2d1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b2d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b2d6u); call_ind(t); }
    /* 0057b2d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b2d8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b2db: call 0x5fb630 */ r_esp -= 4; W32(r_esp, 0x57b2e0u); f_005fb630();
    /* 0057b2e0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057b2e3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b2e6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b2e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057b2eb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b2ee: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b2f0u); call_ind(t); }
L_0057b2f0:; BB(0x0057b2f0);
    /* 0057b2f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057b2f7: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0057b2fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b301: cmp dword ptr [ecx + 0x19d4], 0 */ {  u32 a = R32((u32)(r_ecx+0x19d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b308: je 0x57b360 */ if (fZ) goto L_0057b360;
L_0057b30a:; BB(0x0057b30a);
    /* 0057b30a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b30d: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057b313: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0057b316: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b318: je 0x57b360 */ if (fZ) goto L_0057b360;
L_0057b31a:; BB(0x0057b31a);
    /* 0057b31a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b31d: movzx eax, byte ptr [edx + 0x1c4] */ r_eax = (u32)R8((u32)(r_edx+0x1c4u));
    /* 0057b324: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b326: je 0x57b360 */ if (fZ) goto L_0057b360;
L_0057b328:; BB(0x0057b328);
    /* 0057b328: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b32b: movzx edx, byte ptr [ecx + 0x1bc] */ r_edx = (u32)R8((u32)(r_ecx+0x1bcu));
    /* 0057b332: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b334: jne 0x57b344 */ if (!fZ) goto L_0057b344;
L_0057b336:; BB(0x0057b336);
    /* 0057b336: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b339: movzx ecx, byte ptr [eax + 0x1bd] */ r_ecx = (u32)R8((u32)(r_eax+0x1bdu));
    /* 0057b340: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b342: je 0x57b360 */ if (fZ) goto L_0057b360;
L_0057b344:; BB(0x0057b344);
    /* 0057b344: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b346: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b349: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x57b34eu); f_005fb300();
    /* 0057b34e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0057b351: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057b354: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057b356: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057b359: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0057b35c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57b35eu); call_ind(t); }
    /* 0057b35e: jmp 0x57b37a */ goto L_0057b37a;
L_0057b360:; BB(0x0057b360);
    /* 0057b360: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b362: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b365: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x57b36au); f_005fb300();
    /* 0057b36a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057b36d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057b370: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057b372: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057b375: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b378: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b37au); call_ind(t); }
L_0057b37a:; BB(0x0057b37a);
    /* 0057b37a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b37d: call 0x57b050 */ r_esp -= 4; W32(r_esp, 0x57b382u); f_0057b050();
    /* 0057b382: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b388: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x57b38du); f_005f3bf0();
    /* 0057b38d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b38e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b394: call 0x6352f0 */ r_esp -= 4; W32(r_esp, 0x57b399u); f_006352f0();
    /* 0057b399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b39b: je 0x57b47b */ if (fZ) goto L_0057b47b;
L_0057b3a1:; BB(0x0057b3a1);
    /* 0057b3a1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b3a7: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x57b3acu); f_005f3bf0();
    /* 0057b3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b3ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b3b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b3b5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b3bb: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0057b3c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b3c3u); call_ind(t); }
    /* 0057b3c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b3c5: je 0x57b401 */ if (fZ) goto L_0057b401;
L_0057b3c7:; BB(0x0057b3c7);
    /* 0057b3c7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b3cd: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x57b3d2u); f_005f3bf0();
    /* 0057b3d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b3d3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b3d9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b3db: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057b3e1: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0057b3e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b3e9u); call_ind(t); }
    /* 0057b3e9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0057b3ec: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057b3ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b3f1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057b3f4: mov eax, dword ptr [edx + 0x90] */ r_eax = R32((u32)(r_edx+0x90u));
    /* 0057b3fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b3fcu); call_ind(t); }
    /* 0057b3fc: mov byte ptr [ebp - 0x2d], al */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_eax);
    /* 0057b3ff: jmp 0x57b405 */ goto L_0057b405;
L_0057b401:; BB(0x0057b401);
    /* 0057b401: mov byte ptr [ebp - 0x2d], 0 */ W8((u32)(r_ebp+0xffffffd3u), 0x0u);
L_0057b405:; BB(0x0057b405);
    /* 0057b405: movzx ecx, byte ptr [ebp - 0x2d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 0057b409: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b40b: je 0x57b461 */ if (fZ) goto L_0057b461;
L_0057b40d:; BB(0x0057b40d);
    /* 0057b40d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b410: cmp dword ptr [edx + 0x19d4], 0 */ {  u32 a = R32((u32)(r_edx+0x19d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b417: je 0x57b461 */ if (fZ) goto L_0057b461;
L_0057b419:; BB(0x0057b419);
    /* 0057b419: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b41c: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057b422: movsx edx, byte ptr [ecx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 0057b425: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b427: je 0x57b461 */ if (fZ) goto L_0057b461;
L_0057b429:; BB(0x0057b429);
    /* 0057b429: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b42c: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 0057b433: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b435: jne 0x57b445 */ if (!fZ) goto L_0057b445;
L_0057b437:; BB(0x0057b437);
    /* 0057b437: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b43a: movzx eax, byte ptr [edx + 0x1bd] */ r_eax = (u32)R8((u32)(r_edx+0x1bdu));
    /* 0057b441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b443: je 0x57b461 */ if (fZ) goto L_0057b461;
L_0057b445:; BB(0x0057b445);
    /* 0057b445: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b447: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b44a: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x57b44fu); f_005fb350();
    /* 0057b44f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057b452: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057b455: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b457: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057b45a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057b45d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b45fu); call_ind(t); }
    /* 0057b45f: jmp 0x57b47b */ goto L_0057b47b;
L_0057b461:; BB(0x0057b461);
    /* 0057b461: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b463: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b466: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x57b46bu); f_005fb350();
    /* 0057b46b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057b46e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057b471: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b473: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0057b476: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b479: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b47bu); call_ind(t); }
L_0057b47b:; BB(0x0057b47b);
    /* 0057b47b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b47e: movsx edx, byte ptr [ecx + 0x1c5] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1c5u));
    /* 0057b485: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b487: je 0x57b4f1 */ if (fZ) goto L_0057b4f1;
L_0057b489:; BB(0x0057b489);
    /* 0057b489: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b48c: movzx ecx, byte ptr [eax + 0x1bc] */ r_ecx = (u32)R8((u32)(r_eax+0x1bcu));
    /* 0057b493: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b495: jne 0x57b4a5 */ if (!fZ) goto L_0057b4a5;
L_0057b497:; BB(0x0057b497);
    /* 0057b497: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b49a: movzx eax, byte ptr [edx + 0x1bd] */ r_eax = (u32)R8((u32)(r_edx+0x1bdu));
    /* 0057b4a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b4a3: je 0x57b4f1 */ if (fZ) goto L_0057b4f1;
L_0057b4a5:; BB(0x0057b4a5);
    /* 0057b4a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4a7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b4aa: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x57b4afu); f_005fb550();
    /* 0057b4af: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057b4b2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b4b5: add ecx, 0x1c5 */ {  u32 a = r_ecx; u32 b = 0x1c5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057b4bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4bc: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57b4c1u); f_00630f40();
    /* 0057b4c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4c5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057b4c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057b4ca: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0057b4cd: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0057b4d3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57b4d5u); call_ind(t); }
    /* 0057b4d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4d7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b4da: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x57b4dfu); f_005fb550();
    /* 0057b4df: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0057b4e2: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0057b4e5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057b4e7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0057b4ea: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057b4ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b4efu); call_ind(t); }
    /* 0057b4ef: jmp 0x57b50b */ goto L_0057b50b;
L_0057b4f1:; BB(0x0057b4f1);
    /* 0057b4f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b4f3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b4f6: call 0x5fb550 */ r_esp -= 4; W32(r_esp, 0x57b4fbu); f_005fb550();
    /* 0057b4fb: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0057b4fe: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057b501: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b503: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0057b506: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b509: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b50bu); call_ind(t); }
L_0057b50b:; BB(0x0057b50b);
    /* 0057b50b: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0057b512: jmp 0x57b51d */ goto L_0057b51d;
L_0057b514:; BB(0x0057b514);
    /* 0057b514: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b517: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057b51a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0057b51d:; BB(0x0057b51d);
    /* 0057b51d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b520: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b523: cmp eax, dword ptr [edx + 0x19d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b529: jge 0x57b6da */ if ((fS==fO)) goto L_0057b6da;
L_0057b52f:; BB(0x0057b52f);
    /* 0057b52f: push 0x6cbc9c */ { u32 v = 0x6cbc9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057b534: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b537: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057b53d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b540: add ecx, dword ptr [edx + 0x19d0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x19d0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057b546: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b547: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x57b54cu); f_00686ec0();
    /* 0057b54c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b54f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b551: je 0x57b577 */ if (fZ) goto L_0057b577;
L_0057b553:; BB(0x0057b553);
    /* 0057b553: push 0x6cbc54 */ { u32 v = 0x6cbc54u; r_esp -= 4; W32(r_esp, v); }
    /* 0057b558: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b55b: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057b561: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b564: add eax, dword ptr [ecx + 0x19d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x19d0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057b56a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b56b: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x57b570u); f_00686ec0();
    /* 0057b570: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b575: jne 0x57b5a1 */ if (!fZ) goto L_0057b5a1;
L_0057b577:; BB(0x0057b577);
    /* 0057b577: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b57a: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057b580: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b583: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0057b586: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b589: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057b58f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b592: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0057b595: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057b597: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b59a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b59cu); call_ind(t); }
    /* 0057b59c: jmp 0x57b6d5 */ goto L_0057b6d5;
L_0057b5a1:; BB(0x0057b5a1);
    /* 0057b5a1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b5a4: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057b5aa: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b5ad: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057b5b3: movsx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx));
    /* 0057b5b7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b5b9: je 0x57b6ae */ if (fZ) goto L_0057b6ae;
L_0057b5bf:; BB(0x0057b5bf);
    /* 0057b5bf: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b5c2: movzx eax, byte ptr [edx + 0x1bc] */ r_eax = (u32)R8((u32)(r_edx+0x1bcu));
    /* 0057b5c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b5cb: jne 0x57b5df */ if (!fZ) goto L_0057b5df;
L_0057b5cd:; BB(0x0057b5cd);
    /* 0057b5cd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b5d0: movzx edx, byte ptr [ecx + 0x1bd] */ r_edx = (u32)R8((u32)(r_ecx+0x1bdu));
    /* 0057b5d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b5d9: je 0x57b6ae */ if (fZ) goto L_0057b6ae;
L_0057b5df:; BB(0x0057b5df);
    /* 0057b5df: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b5e2: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057b5e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b5eb: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057b5f1: movzx eax, byte ptr [edx + eax + 0x218] */ r_eax = (u32)R8((u32)(r_edx+r_eax+0x218u));
    /* 0057b5f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057b5fb: je 0x57b641 */ if (fZ) goto L_0057b641;
L_0057b5fd:; BB(0x0057b5fd);
    /* 0057b5fd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b600: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057b606: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b609: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057b60f: mov ecx, dword ptr [eax + ecx + 0x21c] */ r_ecx = R32((u32)(r_eax+r_ecx+0x21cu));
    /* 0057b616: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b617: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b61a: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057b620: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b623: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0057b626: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b629: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057b62f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b632: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0057b635: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057b637: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057b63d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b63fu); call_ind(t); }
    /* 0057b63f: jmp 0x57b685 */ goto L_0057b685;
L_0057b641:; BB(0x0057b641);
    /* 0057b641: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b644: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057b64a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b64d: add ecx, dword ptr [edx + 0x19d0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x19d0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057b653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057b654: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x57b659u); f_00630f40();
    /* 0057b659: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057b65c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057b65d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b660: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057b666: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b669: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0057b66c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b66f: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057b675: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b678: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0057b67b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057b67d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0057b683: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b685u); call_ind(t); }
L_0057b685:; BB(0x0057b685);
    /* 0057b685: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b688: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057b68e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b691: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0057b694: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b697: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057b69d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b6a0: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0057b6a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b6a5: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b6a7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057b6aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b6acu); call_ind(t); }
    /* 0057b6ac: jmp 0x57b6d5 */ goto L_0057b6d5;
L_0057b6ae:; BB(0x0057b6ae);
    /* 0057b6ae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b6b1: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057b6b7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b6ba: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0057b6bd: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057b6c0: mov eax, dword ptr [edx + 0x19d8] */ r_eax = R32((u32)(r_edx+0x19d8u));
    /* 0057b6c6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b6c9: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0057b6cc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057b6ce: mov ecx, eax */ r_ecx = r_eax;
    /* 0057b6d0: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b6d3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b6d5u); call_ind(t); }
L_0057b6d5:; BB(0x0057b6d5);
    /* 0057b6d5: jmp 0x57b514 */ goto L_0057b514;
L_0057b6da:; BB(0x0057b6da);
    /* 0057b6da: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b6dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b6dd: ret  */ FN_RET(0x0057b1b0); r_esp += 4; return;
}

void f_0057b720(void) /* sub_57B720 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057b720);
    /* 0057b720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057b721: mov ebp, esp */ r_ebp = r_esp;
    /* 0057b723: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057b726: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0057b729: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b72c: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x57b731u); f_005f87d0();
    /* 0057b731: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057b738: jmp 0x57b743 */ goto L_0057b743;
L_0057b73a:; BB(0x0057b73a);
    /* 0057b73a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057b73d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057b740: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0057b743:; BB(0x0057b743);
    /* 0057b743: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b746: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057b749: cmp edx, dword ptr [ecx + 0x19dc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x19dcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057b74f: jge 0x57b778 */ if ((fS==fO)) goto L_0057b778;
L_0057b751:; BB(0x0057b751);
    /* 0057b751: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b754: mov ecx, dword ptr [eax + 0x19d8] */ r_ecx = R32((u32)(r_eax+0x19d8u));
    /* 0057b75a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057b75d: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0057b760: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b763: mov edx, dword ptr [ecx + 0x19d8] */ r_edx = R32((u32)(r_ecx+0x19d8u));
    /* 0057b769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057b76c: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0057b76f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057b771: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0057b774: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57b776u); call_ind(t); }
    /* 0057b776: jmp 0x57b73a */ goto L_0057b73a;
L_0057b778:; BB(0x0057b778);
    /* 0057b778: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057b77b: mov ecx, dword ptr [ecx + 0x19e0] */ r_ecx = R32((u32)(r_ecx+0x19e0u));
    /* 0057b781: call 0x57d3a0 */ r_esp -= 4; W32(r_esp, 0x57b786u); f_0057d3a0();
    /* 0057b786: mov esp, ebp */ r_esp = r_ebp;
    /* 0057b788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057b789: ret  */ FN_RET(0x0057b720); r_esp += 4; return;
}

void f_0057be80(void) /* sub_57BE80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0057be80);
    /* 0057be80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057be81: mov ebp, esp */ r_ebp = r_esp;
    /* 0057be83: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057be86: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057be89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057be8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057be8f: cmp ecx, dword ptr [eax + 0x19d4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x19d4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057be95: jl 0x57be9c */ if ((fS!=fO)) goto L_0057be9c;
L_0057be97:; BB(0x0057be97);
    /* 0057be97: jmp 0x57c09c */ goto L_0057c09c;
L_0057be9c:; BB(0x0057be9c);
    /* 0057be9c: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bea0: je 0x57bf8e */ if (fZ) goto L_0057bf8e;
L_0057bea6:; BB(0x0057bea6);
    /* 0057bea6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0057bea9: movsx eax, byte ptr [edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0057beac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057beae: je 0x57bf8e */ if (fZ) goto L_0057bf8e;
L_0057beb4:; BB(0x0057beb4);
    /* 0057beb4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057beb7: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bebd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bec0: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057bec6: movzx ecx, byte ptr [eax + ecx + 0x218] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx+0x218u));
    /* 0057bece: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bed0: je 0x57bf17 */ if (fZ) goto L_0057bf17;
L_0057bed2:; BB(0x0057bed2);
    /* 0057bed2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057bed5: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bedb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bede: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057bee4: mov edx, dword ptr [ecx + edx + 0x21c] */ r_edx = R32((u32)(r_ecx+r_edx+0x21cu));
    /* 0057beeb: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0057beee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057bef1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bef2: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57bef7u); f_00686cae();
    /* 0057bef7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057befa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057befd: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bf03: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bf06: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057bf0c: mov dword ptr [eax + ecx + 0x21c], 0 */ W32((u32)(r_eax+r_ecx+0x21cu), 0x0u);
L_0057bf17:; BB(0x0057bf17);
    /* 0057bf17: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057bf1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bf1b: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x57bf20u); f_00686ecc();
    /* 0057bf20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057bf23: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057bf26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057bf27: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57bf2cu); f_00686d82();
    /* 0057bf2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057bf2f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057bf32: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057bf35: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bf3b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bf3e: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057bf44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057bf47: mov dword ptr [ecx + edx + 0x21c], eax */ W32((u32)(r_ecx+r_edx+0x21cu), r_eax);
    /* 0057bf4e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0057bf51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bf52: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057bf55: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bf5b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bf5e: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057bf64: mov edx, dword ptr [ecx + edx + 0x21c] */ r_edx = R32((u32)(r_ecx+r_edx+0x21cu));
    /* 0057bf6b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bf6c: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57bf71u); f_00686d8e();
    /* 0057bf71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057bf74: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057bf77: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bf7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bf80: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057bf86: mov byte ptr [edx + eax + 0x218], 1 */ W8((u32)(r_edx+r_eax+0x218u), 0x1u);
L_0057bf8e:; BB(0x0057bf8e);
    /* 0057bf8e: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bf92: je 0x57c080 */ if (fZ) goto L_0057c080;
L_0057bf98:; BB(0x0057bf98);
    /* 0057bf98: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0057bf9b: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 0057bf9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bfa0: je 0x57c080 */ if (fZ) goto L_0057c080;
L_0057bfa6:; BB(0x0057bfa6);
    /* 0057bfa6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057bfa9: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bfaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bfb2: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057bfb8: movzx edx, byte ptr [ecx + edx + 0x219] */ r_edx = (u32)R8((u32)(r_ecx+r_edx+0x219u));
    /* 0057bfc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057bfc2: je 0x57c009 */ if (fZ) goto L_0057c009;
L_0057bfc4:; BB(0x0057bfc4);
    /* 0057bfc4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057bfc7: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bfcd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bfd0: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057bfd6: mov eax, dword ptr [edx + eax + 0x220] */ r_eax = R32((u32)(r_edx+r_eax+0x220u));
    /* 0057bfdd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0057bfe0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057bfe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057bfe4: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x57bfe9u); f_00686cae();
    /* 0057bfe9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057bfec: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0057bfef: imul edx, edx, 0x224 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x224u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057bff5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057bff8: mov ecx, dword ptr [eax + 0x19d0] */ r_ecx = R32((u32)(r_eax+0x19d0u));
    /* 0057bffe: mov dword ptr [ecx + edx + 0x220], 0 */ W32((u32)(r_ecx+r_edx+0x220u), 0x0u);
L_0057c009:; BB(0x0057c009);
    /* 0057c009: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0057c00c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c00d: call 0x686ecc */ r_esp -= 4; W32(r_esp, 0x57c012u); f_00686ecc();
    /* 0057c012: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c015: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057c018: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c019: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57c01eu); f_00686d82();
    /* 0057c01e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c021: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0057c024: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057c027: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c02d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c030: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057c036: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057c039: mov dword ptr [edx + eax + 0x220], ecx */ W32((u32)(r_edx+r_eax+0x220u), r_ecx);
    /* 0057c040: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0057c043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057c044: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057c047: imul eax, eax, 0x224 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x224u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c04d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c050: mov edx, dword ptr [ecx + 0x19d0] */ r_edx = R32((u32)(r_ecx+0x19d0u));
    /* 0057c056: mov eax, dword ptr [edx + eax + 0x220] */ r_eax = R32((u32)(r_edx+r_eax+0x220u));
    /* 0057c05d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057c05e: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x57c063u); f_00686d8e();
    /* 0057c063: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057c066: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057c069: imul ecx, ecx, 0x224 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x224u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057c06f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c072: mov eax, dword ptr [edx + 0x19d0] */ r_eax = R32((u32)(r_edx+0x19d0u));
    /* 0057c078: mov byte ptr [eax + ecx + 0x219], 1 */ W8((u32)(r_eax+r_ecx+0x219u), 0x1u);
L_0057c080:; BB(0x0057c080);
    /* 0057c080: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057c082: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0057c088: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x57c08du); f_005df700();
    /* 0057c08d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0057c090: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057c092: je 0x57c09c */ if (fZ) goto L_0057c09c;
L_0057c094:; BB(0x0057c094);
    /* 0057c094: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057c097: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x57c09cu); f_005f85d0();
L_0057c09c:; BB(0x0057c09c);
    /* 0057c09c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057c09e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057c09f: ret 0xc */ FN_RET(0x0057be80); r_esp += 16; return;
}


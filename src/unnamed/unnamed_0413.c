#include "protos.h"

void f_00413090(void) /* sub_413090 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413090);
    /* 00413090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413091: mov ebp, esp */ r_ebp = r_esp;
    /* 00413093: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413096: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00413099: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041309c: movzx ecx, byte ptr [eax + 0xb] */ r_ecx = (u32)R8((u32)(r_eax+0xbu));
    /* 004130a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004130a2: jne 0x4130f0 */ if (!fZ) goto L_004130f0;
L_004130a4:; BB(0x004130a4);
    /* 004130a4: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004130a7: mov byte ptr [edx + 0xb], 1 */ W8((u32)(r_edx+0xbu), 0x1u);
    /* 004130ab: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 004130b0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004130b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004130b6: mov dword ptr [ecx + 0x4ec], 0xa */ W32((u32)(r_ecx+0x4ecu), 0xau);
    /* 004130c0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004130c3: mov dword ptr [edx + 0x4f0], 4 */ W32((u32)(r_edx+0x4f0u), 0x4u);
    /* 004130cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004130cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004130d1: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 004130d6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004130d9: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 004130df: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004130e2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004130e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004130e6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004130e9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4130ebu); call_ind(t); }
    /* 004130eb: jmp 0x41317c */ goto L_0041317c;
L_004130f0:; BB(0x004130f0);
    /* 004130f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004130f3: movzx edx, byte ptr [ecx + 0xe] */ r_edx = (u32)R8((u32)(r_ecx+0xeu));
    /* 004130f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004130f9: jne 0x413143 */ if (!fZ) goto L_00413143;
L_004130fb:; BB(0x004130fb);
    /* 004130fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004130fe: mov byte ptr [eax + 0xe], 1 */ W8((u32)(r_eax+0xeu), 0x1u);
    /* 00413102: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413108: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0041310b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041310e: mov dword ptr [edx + 0x4ec], 3 */ W32((u32)(r_edx+0x4ecu), 0x3u);
    /* 00413118: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0041311b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0041311e: mov dword ptr [eax + 0x4f0], ecx */ W32((u32)(r_eax+0x4f0u), r_ecx);
    /* 00413124: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413126: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413128: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0041312e: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00413131: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00413137: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0041313a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041313c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041313f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x413141u); call_ind(t); }
    /* 00413141: jmp 0x41317c */ goto L_0041317c;
L_00413143:; BB(0x00413143);
    /* 00413143: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00413146: mov byte ptr [ecx + 0xb], 0 */ W8((u32)(r_ecx+0xbu), 0x0u);
    /* 0041314a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041314d: mov byte ptr [edx + 0xe], 0 */ W8((u32)(r_edx+0xeu), 0x0u);
    /* 00413151: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00413154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413155: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041315b: call 0x41b780 */ r_esp -= 4; W32(r_esp, 0x413160u); f_0041b780();
    /* 00413160: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00413162: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413164: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041316a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0041316d: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00413172: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00413175: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00413177: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0041317a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41317cu); call_ind(t); }
L_0041317c:; BB(0x0041317c);
    /* 0041317c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041317e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041317f: ret 4 */ FN_RET(0x00413090); r_esp += 8; return;
}

void f_00413190(void) /* sub_413190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413190);
    /* 00413190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413191: mov ebp, esp */ r_ebp = r_esp;
    /* 00413193: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413196: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00413199: cmp dword ptr [ebp + 8], -1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041319d: jne 0x4131a8 */ if (!fZ) goto L_004131a8;
L_0041319f:; BB(0x0041319f);
    /* 0041319f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004131a6: jmp 0x4131d7 */ goto L_004131d7;
L_004131a8:; BB(0x004131a8);
    /* 004131a8: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004131ac: jne 0x4131b7 */ if (!fZ) goto L_004131b7;
L_004131ae:; BB(0x004131ae);
    /* 004131ae: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004131b5: jmp 0x4131d1 */ goto L_004131d1;
L_004131b7:; BB(0x004131b7);
    /* 004131b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004131ba: imul eax, eax, 0x118 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x118u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004131c0: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004131c6: movsx edx, byte ptr [ecx + eax + 0x119] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x119u));
    /* 004131ce: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_004131d1:; BB(0x004131d1);
    /* 004131d1: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004131d4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004131d7:; BB(0x004131d7);
    /* 004131d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004131da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004131db: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004131de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004131df: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004131e5: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x4131eau); f_00419530();
    /* 004131ea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004131ed: jne 0x413204 */ if (!fZ) goto L_00413204;
L_004131ef:; BB(0x004131ef);
    /* 004131ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004131f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004131f3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004131f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004131f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004131fa: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x4131ffu); f_00413360();
    /* 004131ff: jmp 0x413351 */ goto L_00413351;
L_00413204:; BB(0x00413204);
    /* 00413204: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00413207: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413208: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41320du); f_005dcb00();
    /* 0041320d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413210: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00413213: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00413216: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41321bu); f_0063aac0();
    /* 0041321b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041321d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00413220: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413224: je 0x413242 */ if (fZ) goto L_00413242;
L_00413226:; BB(0x00413226);
    /* 00413226: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00413229: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41322eu); f_0063aac0();
    /* 0041322e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00413230: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00413233: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413237: je 0x413242 */ if (fZ) goto L_00413242;
L_00413239:; BB(0x00413239);
    /* 00413239: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00413240: jmp 0x413249 */ goto L_00413249;
L_00413242:; BB(0x00413242);
    /* 00413242: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00413249:; BB(0x00413249);
    /* 00413249: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 0041324d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041324f: je 0x4132b1 */ if (fZ) goto L_004132b1;
L_00413251:; BB(0x00413251);
    /* 00413251: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413254: mov byte ptr [edx + 5], 0 */ W8((u32)(r_edx+0x5u), 0x0u);
    /* 00413258: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041325a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00413260: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x413265u); f_005df700();
    /* 00413265: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00413268: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041326a: je 0x413296 */ if (fZ) goto L_00413296;
L_0041326c:; BB(0x0041326c);
    /* 0041326c: push 0x70a468 */ { u32 v = 0x70a468u; r_esp -= 4; W32(r_esp, v); }
    /* 00413271: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00413273: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 00413279: call 0x57ab80 */ r_esp -= 4; W32(r_esp, 0x41327eu); f_0057ab80();
    /* 0041327e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413284: call 0x41bf00 */ r_esp -= 4; W32(r_esp, 0x413289u); f_0041bf00();
    /* 00413289: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041328f: call 0x41c0a0 */ r_esp -= 4; W32(r_esp, 0x413294u); f_0041c0a0();
    /* 00413294: jmp 0x4132a1 */ goto L_004132a1;
L_00413296:; BB(0x00413296);
    /* 00413296: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0041329c: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x4132a1u); f_0057ae30();
L_004132a1:; BB(0x004132a1);
    /* 004132a1: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 004132a7: call 0x40d930 */ r_esp -= 4; W32(r_esp, 0x4132acu); f_0040d930();
    /* 004132ac: jmp 0x413351 */ goto L_00413351;
L_004132b1:; BB(0x004132b1);
    /* 004132b1: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 004132b7: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x4132bcu); f_0057ae30();
    /* 004132bc: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004132c2: cmp dword ptr [ecx + 0x4d4], -1 */ {  u32 a = R32((u32)(r_ecx+0x4d4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004132c9: jne 0x4132e6 */ if (!fZ) goto L_004132e6;
L_004132cb:; BB(0x004132cb);
    /* 004132cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004132ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004132cf: mov ecx, dword ptr [0x790330] */ r_ecx = R32((u32)(0x790330u));
    /* 004132d5: call 0x40b260 */ r_esp -= 4; W32(r_esp, 0x4132dau); f_0040b260();
    /* 004132da: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004132e0: mov dword ptr [ecx + 0x4d4], eax */ W32((u32)(r_ecx+0x4d4u), r_eax);
L_004132e6:; BB(0x004132e6);
    /* 004132e6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004132e9: movzx eax, byte ptr [edx + 0xc] */ r_eax = (u32)R8((u32)(r_edx+0xcu));
    /* 004132ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004132ef: jne 0x41333a */ if (!fZ) goto L_0041333a;
L_004132f1:; BB(0x004132f1);
    /* 004132f1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004132f4: mov byte ptr [ecx + 0xc], 1 */ W8((u32)(r_ecx+0xcu), 0x1u);
    /* 004132f8: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 004132fe: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00413301: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00413304: mov dword ptr [eax + 0x4ec], 1 */ W32((u32)(r_eax+0x4ecu), 0x1u);
    /* 0041330e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413311: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00413314: mov dword ptr [ecx + 0x4f0], edx */ W32((u32)(r_ecx+0x4f0u), r_edx);
    /* 0041331a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041331c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041331e: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00413323: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00413326: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0041332c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0041332f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00413331: mov ecx, eax */ r_ecx = r_eax;
    /* 00413333: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413336: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x413338u); call_ind(t); }
    /* 00413338: jmp 0x413351 */ goto L_00413351;
L_0041333a:; BB(0x0041333a);
    /* 0041333a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041333d: mov byte ptr [ecx + 0xc], 0 */ W8((u32)(r_ecx+0xcu), 0x0u);
    /* 00413341: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413343: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413345: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00413348: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413349: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041334c: call 0x413360 */ r_esp -= 4; W32(r_esp, 0x413351u); f_00413360();
L_00413351:; BB(0x00413351);
    /* 00413351: mov esp, ebp */ r_esp = r_ebp;
    /* 00413353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413354: ret 4 */ FN_RET(0x00413190); r_esp += 8; return;
}

void f_00413690(void) /* sub_413690 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413690);
    /* 00413690: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413691: mov ebp, esp */ r_ebp = r_esp;
    /* 00413693: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413696: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00413699: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041369c: movzx ecx, byte ptr [eax + 0x10] */ r_ecx = (u32)R8((u32)(r_eax+0x10u));
    /* 004136a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136a2: jne 0x41374d */ if (!fZ) goto L_0041374d;
L_004136a8:; BB(0x004136a8);
    /* 004136a8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004136ab: mov byte ptr [edx + 0x10], 1 */ W8((u32)(r_edx+0x10u), 0x1u);
    /* 004136af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004136b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004136b3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4136b8u); f_005dcb00();
    /* 004136b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004136bb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004136be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004136c1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4136c6u); f_0063aac0();
    /* 004136c6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004136c8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004136cb: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136cf: je 0x4136ed */ if (fZ) goto L_004136ed;
L_004136d1:; BB(0x004136d1);
    /* 004136d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004136d4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4136d9u); f_0063aac0();
    /* 004136d9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004136db: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004136de: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136e2: je 0x4136ed */ if (fZ) goto L_004136ed;
L_004136e4:; BB(0x004136e4);
    /* 004136e4: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004136eb: jmp 0x4136f4 */ goto L_004136f4;
L_004136ed:; BB(0x004136ed);
    /* 004136ed: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_004136f4:; BB(0x004136f4);
    /* 004136f4: movzx eax, byte ptr [ebp - 0x1c] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 004136f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004136fa: je 0x413705 */ if (fZ) goto L_00413705;
L_004136fc:; BB(0x004136fc);
    /* 004136fc: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00413703: jmp 0x41370b */ goto L_0041370b;
L_00413705:; BB(0x00413705);
    /* 00413705: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00413708: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0041370b:; BB(0x0041370b);
    /* 0041370b: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00413711: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00413714: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00413717: mov dword ptr [eax + 0x4ec], 4 */ W32((u32)(r_eax+0x4ecu), 0x4u);
    /* 00413721: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00413724: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413727: mov dword ptr [ecx + 0x4f0], edx */ W32((u32)(r_ecx+0x4f0u), r_edx);
    /* 0041372d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041372f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00413731: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00413736: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00413739: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 0041373f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00413742: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00413744: mov ecx, eax */ r_ecx = r_eax;
    /* 00413746: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413749: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x41374bu); call_ind(t); }
    /* 0041374b: jmp 0x413786 */ goto L_00413786;
L_0041374d:; BB(0x0041374d);
    /* 0041374d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413750: mov byte ptr [ecx + 0xd], 0 */ W8((u32)(r_ecx+0xdu), 0x0u);
    /* 00413754: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00413757: mov byte ptr [edx + 0x10], 0 */ W8((u32)(r_edx+0x10u), 0x0u);
    /* 0041375b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0041375e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041375f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413765: call 0x41b440 */ r_esp -= 4; W32(r_esp, 0x41376au); f_0041b440();
    /* 0041376a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041376c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041376e: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00413774: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00413777: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 0041377c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0041377f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00413781: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00413784: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x413786u); call_ind(t); }
L_00413786:; BB(0x00413786);
    /* 00413786: mov esp, ebp */ r_esp = r_ebp;
    /* 00413788: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413789: ret 4 */ FN_RET(0x00413690); r_esp += 8; return;
}

void f_00413790(void) /* sub_413790 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00413790);
    /* 00413790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00413791: mov ebp, esp */ r_ebp = r_esp;
    /* 00413793: sub esp, 0x1e8 */ {  u32 a = r_esp; u32 b = 0x1e8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00413799: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041379a: mov dword ptr [ebp - 0x17c], ecx */ W32((u32)(r_ebp+0xfffffe84u), r_ecx);
    /* 004137a0: mov dword ptr [ebp - 0x58], 0xffffffff */ W32((u32)(r_ebp+0xffffffa8u), 0xffffffffu);
    /* 004137a7: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 004137ae: mov dword ptr [ebp - 0x5c], 0xffffffff */ W32((u32)(r_ebp+0xffffffa4u), 0xffffffffu);
    /* 004137b5: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 004137bc: mov dword ptr [ebp - 0x60], 0xffffffff */ W32((u32)(r_ebp+0xffffffa0u), 0xffffffffu);
    /* 004137c3: fldz  */ FPUSH(0.0);
    /* 004137c5: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004137c8: fld1  */ FPUSH(1.0);
    /* 004137ca: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004137cd: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 004137d2: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 004137d8: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004137db: mov byte ptr [ebp - 0x51], 1 */ W8((u32)(r_ebp+0xffffffafu), 0x1u);
    /* 004137df: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 004137e5: mov eax, dword ptr [edx + 0x4f0] */ r_eax = R32((u32)(r_edx+0x4f0u));
    /* 004137eb: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004137ee: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 004137f1: mov dword ptr [ebp - 0x180], ecx */ W32((u32)(r_ebp+0xfffffe80u), r_ecx);
    /* 004137f7: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 004137fd: mov eax, dword ptr [edx + 0x4ec] */ r_eax = R32((u32)(r_edx+0x4ecu));
    /* 00413803: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 00413809: cmp dword ptr [ebp - 0x180], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffe80u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00413810: ja 0x414a9f */ if ((!fC&&!fZ)) goto L_00414a9f;
L_00413816:; BB(0x00413816);
    /* 00413816: mov ecx, dword ptr [ebp - 0x180] */ r_ecx = R32((u32)(r_ebp+0xfffffe80u));
    /* 0041381c: jmp dword ptr [ecx*4 + 0x414c60] */ { u32 t = R32((u32)(r_ecx*4+0x414c60u)); switch (t) { case 0x413823u: goto L_00413823; case 0x413989u: goto L_00413989; case 0x41382fu: goto L_0041382f; case 0x41397du: goto L_0041397d; case 0x413b5au: goto L_00413b5a; case 0x4141d5u: goto L_004141d5; case 0x414450u: goto L_00414450; case 0x4148ffu: goto L_004148ff; case 0x41490bu: goto L_0041490b; case 0x414917u: goto L_00414917; case 0x414923u: goto L_00414923; case 0x41492fu: goto L_0041492f; case 0x414a0bu: goto L_00414a0b; case 0x4139b5u: goto L_004139b5; case 0x413a94u: goto L_00413a94; case 0x413aa0u: goto L_00413aa0; case 0x413aacu: goto L_00413aac; case 0x413ab8u: goto L_00413ab8; default: UNSUP(0x0041381c, "jump table entry is not a known target"); } }
L_00413823:; BB(0x00413823);
    /* 00413823: mov dword ptr [ebp - 0x28], 0x7d8 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d8u);
    /* 0041382a: jmp 0x414a9f */ goto L_00414a9f;
L_0041382f:; BB(0x0041382f);
    /* 0041382f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413831: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413834: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413835: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041383b: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413840u); f_00419980();
    /* 00413840: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413843: jne 0x4138cd */ if (!fZ) goto L_004138cd;
L_00413849:; BB(0x00413849);
    /* 00413849: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 0041384e: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00413851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413854: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00413857: mov dword ptr [edx + ecx*4 + 0x4f4], 1 */ W32((u32)(r_edx+r_ecx*4+0x4f4u), 0x1u);
    /* 00413862: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413865: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413866: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41386bu); f_005dcb00();
    /* 0041386b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041386e: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00413871: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00413874: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413879u); f_0063aac0();
    /* 00413879: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0041387b: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0041387e: cmp dword ptr [ebp - 0x6c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413882: je 0x4138a3 */ if (fZ) goto L_004138a3;
L_00413884:; BB(0x00413884);
    /* 00413884: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00413887: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41388cu); f_0063aac0();
    /* 0041388c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041388e: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00413891: cmp dword ptr [ebp - 0x70], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413895: je 0x4138a3 */ if (fZ) goto L_004138a3;
L_00413897:; BB(0x00413897);
    /* 00413897: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
    /* 004138a1: jmp 0x4138ad */ goto L_004138ad;
L_004138a3:; BB(0x004138a3);
    /* 004138a3: mov dword ptr [ebp - 0x184], 1 */ W32((u32)(r_ebp+0xfffffe7cu), 0x1u);
L_004138ad:; BB(0x004138ad);
    /* 004138ad: movzx eax, byte ptr [ebp - 0x184] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe7cu));
    /* 004138b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004138b6: je 0x4138c8 */ if (fZ) goto L_004138c8;
L_004138b8:; BB(0x004138b8);
    /* 004138b8: mov dword ptr [ebp - 0x28], 0x40d */ W32((u32)(r_ebp+0xffffffd8u), 0x40du);
    /* 004138bf: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004138c5: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_004138c8:; BB(0x004138c8);
    /* 004138c8: jmp 0x413978 */ goto L_00413978;
L_004138cd:; BB(0x004138cd);
    /* 004138cd: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004138d3: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 004138d6: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004138d9: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004138dc: mov dword ptr [eax + edx*4 + 0x4f4], 2 */ W32((u32)(r_eax+r_edx*4+0x4f4u), 0x2u);
    /* 004138e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004138ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004138eb: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4138f0u); f_005dcb00();
    /* 004138f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004138f3: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004138f9: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 004138ff: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413904u); f_0063aac0();
    /* 00413904: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413906: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00413909: cmp dword ptr [ebp - 0x7c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041390d: je 0x413931 */ if (fZ) goto L_00413931;
L_0041390f:; BB(0x0041390f);
    /* 0041390f: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00413915: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41391au); f_0063aac0();
    /* 0041391a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041391c: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0041391f: cmp dword ptr [ebp - 0x80], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413923: je 0x413931 */ if (fZ) goto L_00413931;
L_00413925:; BB(0x00413925);
    /* 00413925: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
    /* 0041392f: jmp 0x41393b */ goto L_0041393b;
L_00413931:; BB(0x00413931);
    /* 00413931: mov dword ptr [ebp - 0x188], 1 */ W32((u32)(r_ebp+0xfffffe78u), 0x1u);
L_0041393b:; BB(0x0041393b);
    /* 0041393b: movzx ecx, byte ptr [ebp - 0x188] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe78u));
    /* 00413942: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413944: jne 0x413968 */ if (!fZ) goto L_00413968;
L_00413946:; BB(0x00413946);
    /* 00413946: mov dword ptr [ebp - 0x28], 0x401 */ W32((u32)(r_ebp+0xffffffd8u), 0x401u);
    /* 0041394d: mov dword ptr [ebp - 0x60], 0x402 */ W32((u32)(r_ebp+0xffffffa0u), 0x402u);
    /* 00413954: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 0041395a: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0041395d: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413963: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00413966: jmp 0x413978 */ goto L_00413978;
L_00413968:; BB(0x00413968);
    /* 00413968: mov dword ptr [ebp - 0x28], 0x3e8 */ W32((u32)(r_ebp+0xffffffd8u), 0x3e8u);
    /* 0041396f: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 00413975: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00413978:; BB(0x00413978);
    /* 00413978: jmp 0x414a9f */ goto L_00414a9f;
L_0041397d:; BB(0x0041397d);
    /* 0041397d: mov dword ptr [ebp - 0x28], 0x7d3 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d3u);
    /* 00413984: jmp 0x414a9f */ goto L_00414a9f;
L_00413989:; BB(0x00413989);
    /* 00413989: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 0041398f: mov eax, dword ptr [edx + 0x4d4] */ r_eax = R32((u32)(r_edx+0x4d4u));
    /* 00413995: mov dword ptr [ebp - 0x18c], eax */ W32((u32)(r_ebp+0xfffffe74u), r_eax);
    /* 0041399b: cmp dword ptr [ebp - 0x18c], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffe74u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004139a2: ja 0x413b55 */ if ((!fC&&!fZ)) goto L_00413b55;
L_004139a8:; BB(0x004139a8);
    /* 004139a8: mov ecx, dword ptr [ebp - 0x18c] */ r_ecx = R32((u32)(r_ebp+0xfffffe74u));
    /* 004139ae: jmp dword ptr [ecx*4 + 0x414c94] */ { u32 t = R32((u32)(r_ecx*4+0x414c94u)); switch (t) { case 0x414a0bu: goto L_00414a0b; case 0x41492fu: goto L_0041492f; case 0x414923u: goto L_00414923; case 0x414917u: goto L_00414917; case 0x41490bu: goto L_0041490b; case 0x4148ffu: goto L_004148ff; case 0x414450u: goto L_00414450; case 0x4141d5u: goto L_004141d5; case 0x413b5au: goto L_00413b5a; case 0x41397du: goto L_0041397d; case 0x41382fu: goto L_0041382f; case 0x413989u: goto L_00413989; case 0x413823u: goto L_00413823; case 0x4139b5u: goto L_004139b5; case 0x413a94u: goto L_00413a94; case 0x413aa0u: goto L_00413aa0; case 0x413aacu: goto L_00413aac; case 0x413ab8u: goto L_00413ab8; default: UNSUP(0x004139ae, "jump table entry is not a known target"); } }
L_004139b5:; BB(0x004139b5);
    /* 004139b5: mov dword ptr [ebp - 0x28], 0x7d5 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d5u);
    /* 004139bc: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004139bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004139c0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4139c5u); f_005dcb00();
    /* 004139c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004139c8: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004139ce: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004139d4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4139d9u); f_0063aac0();
    /* 004139d9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004139db: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 004139e1: cmp dword ptr [ebp - 0x88], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004139e8: je 0x413a12 */ if (fZ) goto L_00413a12;
L_004139ea:; BB(0x004139ea);
    /* 004139ea: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004139f0: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4139f5u); f_0063aac0();
    /* 004139f5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004139f7: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 004139fd: cmp dword ptr [ebp - 0x8c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413a04: je 0x413a12 */ if (fZ) goto L_00413a12;
L_00413a06:; BB(0x00413a06);
    /* 00413a06: mov dword ptr [ebp - 0x190], 0 */ W32((u32)(r_ebp+0xfffffe70u), 0x0u);
    /* 00413a10: jmp 0x413a1c */ goto L_00413a1c;
L_00413a12:; BB(0x00413a12);
    /* 00413a12: mov dword ptr [ebp - 0x190], 1 */ W32((u32)(r_ebp+0xfffffe70u), 0x1u);
L_00413a1c:; BB(0x00413a1c);
    /* 00413a1c: movzx edx, byte ptr [ebp - 0x190] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe70u));
    /* 00413a23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413a25: jne 0x413a8f */ if (!fZ) goto L_00413a8f;
L_00413a27:; BB(0x00413a27);
    /* 00413a27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413a29: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00413a2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a2d: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413a33: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413a38u); f_00419980();
    /* 00413a38: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413a3b: jle 0x413a5c */ if ((fZ||fS!=fO)) goto L_00413a5c;
L_00413a3d:; BB(0x00413a3d);
    /* 00413a3d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413a3f: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00413a42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413a43: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413a49: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413a4eu); f_00419980();
    /* 00413a4e: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413a51: jge 0x413a5c */ if ((fS==fO)) goto L_00413a5c;
L_00413a53:; BB(0x00413a53);
    /* 00413a53: mov dword ptr [ebp - 0x28], 0x7d6 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d6u);
    /* 00413a5a: jmp 0x413a8f */ goto L_00413a8f;
L_00413a5c:; BB(0x00413a5c);
    /* 00413a5c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413a5e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00413a61: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413a62: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413a68: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413a6du); f_00419980();
    /* 00413a6d: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413a70: jle 0x413a8f */ if ((fZ||fS!=fO)) goto L_00413a8f;
L_00413a72:; BB(0x00413a72);
    /* 00413a72: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413a74: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00413a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413a78: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413a7e: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413a83u); f_00419980();
    /* 00413a83: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413a86: jge 0x413a8f */ if ((fS==fO)) goto L_00413a8f;
L_00413a88:; BB(0x00413a88);
    /* 00413a88: mov dword ptr [ebp - 0x28], 0x7d7 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d7u);
L_00413a8f:; BB(0x00413a8f);
    /* 00413a8f: jmp 0x413b55 */ goto L_00413b55;
L_00413a94:; BB(0x00413a94);
    /* 00413a94: mov dword ptr [ebp - 0x28], 0x7d0 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d0u);
    /* 00413a9b: jmp 0x413b55 */ goto L_00413b55;
L_00413aa0:; BB(0x00413aa0);
    /* 00413aa0: mov dword ptr [ebp - 0x28], 0x7d2 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d2u);
    /* 00413aa7: jmp 0x413b55 */ goto L_00413b55;
L_00413aac:; BB(0x00413aac);
    /* 00413aac: mov dword ptr [ebp - 0x28], 0x7d4 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d4u);
    /* 00413ab3: jmp 0x413b55 */ goto L_00413b55;
L_00413ab8:; BB(0x00413ab8);
    /* 00413ab8: mov dword ptr [ebp - 0x28], 0x402 */ W32((u32)(r_ebp+0xffffffd8u), 0x402u);
    /* 00413abf: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00413ac2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413ac3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x413ac8u); f_005dcb00();
    /* 00413ac8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413acb: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 00413ad1: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00413ad7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413adcu); f_0063aac0();
    /* 00413adc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413ade: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00413ae4: cmp dword ptr [ebp - 0x94], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413aeb: je 0x413b15 */ if (fZ) goto L_00413b15;
L_00413aed:; BB(0x00413aed);
    /* 00413aed: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00413af3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413af8u); f_0063aac0();
    /* 00413af8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00413afa: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00413b00: cmp dword ptr [ebp - 0x98], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b07: je 0x413b15 */ if (fZ) goto L_00413b15;
L_00413b09:; BB(0x00413b09);
    /* 00413b09: mov dword ptr [ebp - 0x194], 0 */ W32((u32)(r_ebp+0xfffffe6cu), 0x0u);
    /* 00413b13: jmp 0x413b1f */ goto L_00413b1f;
L_00413b15:; BB(0x00413b15);
    /* 00413b15: mov dword ptr [ebp - 0x194], 1 */ W32((u32)(r_ebp+0xfffffe6cu), 0x1u);
L_00413b1f:; BB(0x00413b1f);
    /* 00413b1f: movzx ecx, byte ptr [ebp - 0x194] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe6cu));
    /* 00413b26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b28: jne 0x413b55 */ if (!fZ) goto L_00413b55;
L_00413b2a:; BB(0x00413b2a);
    /* 00413b2a: mov dword ptr [ebp - 0x60], 0x3f6 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f6u);
    /* 00413b31: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00413b37: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00413b3d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413b40: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 00413b46: mov dword ptr [ecx + eax*4 + 0x4f4], 2 */ W32((u32)(r_ecx+r_eax*4+0x4f4u), 0x2u);
    /* 00413b51: mov byte ptr [ebp - 0x51], 0 */ W8((u32)(r_ebp+0xffffffafu), 0x0u);
L_00413b55:; BB(0x00413b55);
    /* 00413b55: jmp 0x414a9f */ goto L_00414a9f;
L_00413b5a:; BB(0x00413b5a);
    /* 00413b5a: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00413b60: mov eax, dword ptr [edx + 0x4d4] */ r_eax = R32((u32)(r_edx+0x4d4u));
    /* 00413b66: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 00413b6c: cmp dword ptr [ebp - 0x198], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe68u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b73: je 0x413b91 */ if (fZ) goto L_00413b91;
L_00413b75:; BB(0x00413b75);
    /* 00413b75: cmp dword ptr [ebp - 0x198], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b7c: je 0x413f07 */ if (fZ) goto L_00413f07;
L_00413b82:; BB(0x00413b82);
    /* 00413b82: jmp 0x4141d0 */ goto L_004141d0;
L_00413b91:; BB(0x00413b91);
    /* 00413b91: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413b97: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x413b9cu); f_00418700();
    /* 00413b9c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413b9f: jne 0x413ba5 */ if (!fZ) goto L_00413ba5;
L_00413ba1:; BB(0x00413ba1);
    /* 00413ba1: mov byte ptr [ebp - 0x51], 0 */ W8((u32)(r_ebp+0xffffffafu), 0x0u);
L_00413ba5:; BB(0x00413ba5);
    /* 00413ba5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413ba7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413baa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413bab: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413bb1: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x413bb6u); f_0041b990();
    /* 00413bb6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00413bb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413bbb: je 0x413c92 */ if (fZ) goto L_00413c92;
L_00413bc1:; BB(0x00413bc1);
    /* 00413bc1: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00413bc6: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00413bcc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413bcf: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00413bd5: mov dword ptr [edx + ecx*4 + 0x4f4], 2 */ W32((u32)(r_edx+r_ecx*4+0x4f4u), 0x2u);
    /* 00413be0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413be3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413be4: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x413be9u); f_005dcb00();
    /* 00413be9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413bec: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00413bf2: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00413bf8: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413bfdu); f_0063aac0();
    /* 00413bfd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00413bff: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 00413c05: cmp dword ptr [ebp - 0xa8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c0c: je 0x413c36 */ if (fZ) goto L_00413c36;
L_00413c0e:; BB(0x00413c0e);
    /* 00413c0e: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 00413c14: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413c19u); f_0063aac0();
    /* 00413c19: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413c1b: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00413c21: cmp dword ptr [ebp - 0xac], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c28: je 0x413c36 */ if (fZ) goto L_00413c36;
L_00413c2a:; BB(0x00413c2a);
    /* 00413c2a: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
    /* 00413c34: jmp 0x413c40 */ goto L_00413c40;
L_00413c36:; BB(0x00413c36);
    /* 00413c36: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
L_00413c40:; BB(0x00413c40);
    /* 00413c40: movzx eax, byte ptr [ebp - 0x19c] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe64u));
    /* 00413c47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413c49: jne 0x413c6d */ if (!fZ) goto L_00413c6d;
L_00413c4b:; BB(0x00413c4b);
    /* 00413c4b: mov dword ptr [ebp - 0x28], 0x7d1 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d1u);
    /* 00413c52: mov dword ptr [ebp - 0x60], 0x402 */ W32((u32)(r_ebp+0xffffffa0u), 0x402u);
    /* 00413c59: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 00413c5f: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00413c62: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00413c68: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00413c6b: jmp 0x413c8d */ goto L_00413c8d;
L_00413c6d:; BB(0x00413c6d);
    /* 00413c6d: mov dword ptr [ebp - 0x28], 0x3e8 */ W32((u32)(r_ebp+0xffffffd8u), 0x3e8u);
    /* 00413c74: mov dword ptr [ebp - 0x60], 0x40f */ W32((u32)(r_ebp+0xffffffa0u), 0x40fu);
    /* 00413c7b: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 00413c81: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00413c84: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 00413c8a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00413c8d:; BB(0x00413c8d);
    /* 00413c8d: jmp 0x413f02 */ goto L_00413f02;
L_00413c92:; BB(0x00413c92);
    /* 00413c92: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413c98: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x413c9du); f_00418700();
    /* 00413c9d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ca0: jne 0x413ca7 */ if (!fZ) goto L_00413ca7;
L_00413ca2:; BB(0x00413ca2);
    /* 00413ca2: jmp 0x4141d0 */ goto L_004141d0;
L_00413ca7:; BB(0x00413ca7);
    /* 00413ca7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413ca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413cac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413cad: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413cb3: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413cb8u); f_00419980();
    /* 00413cb8: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413cbb: jne 0x413d93 */ if (!fZ) goto L_00413d93;
L_00413cc1:; BB(0x00413cc1);
    /* 00413cc1: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00413cc7: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00413ccd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413cd0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00413cd6: mov dword ptr [ecx + eax*4 + 0x4f4], 1 */ W32((u32)(r_ecx+r_eax*4+0x4f4u), 0x1u);
    /* 00413ce1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413ce4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413ce5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x413ceau); f_005dcb00();
    /* 00413cea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413ced: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 00413cf3: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00413cf9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413cfeu); f_0063aac0();
    /* 00413cfe: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00413d00: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00413d06: cmp dword ptr [ebp - 0xb8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d0d: je 0x413d37 */ if (fZ) goto L_00413d37;
L_00413d0f:; BB(0x00413d0f);
    /* 00413d0f: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 00413d15: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413d1au); f_0063aac0();
    /* 00413d1a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00413d1c: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 00413d22: cmp dword ptr [ebp - 0xbc], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d29: je 0x413d37 */ if (fZ) goto L_00413d37;
L_00413d2b:; BB(0x00413d2b);
    /* 00413d2b: mov dword ptr [ebp - 0x1a0], 0 */ W32((u32)(r_ebp+0xfffffe60u), 0x0u);
    /* 00413d35: jmp 0x413d41 */ goto L_00413d41;
L_00413d37:; BB(0x00413d37);
    /* 00413d37: mov dword ptr [ebp - 0x1a0], 1 */ W32((u32)(r_ebp+0xfffffe60u), 0x1u);
L_00413d41:; BB(0x00413d41);
    /* 00413d41: movzx edx, byte ptr [ebp - 0x1a0] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe60u));
    /* 00413d48: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413d4a: jne 0x413d6e */ if (!fZ) goto L_00413d6e;
L_00413d4c:; BB(0x00413d4c);
    /* 00413d4c: mov dword ptr [ebp - 0x28], 0x404 */ W32((u32)(r_ebp+0xffffffd8u), 0x404u);
    /* 00413d53: mov dword ptr [ebp - 0x60], 0x3f4 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f4u);
    /* 00413d5a: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 00413d60: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00413d63: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413d69: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00413d6c: jmp 0x413d8e */ goto L_00413d8e;
L_00413d6e:; BB(0x00413d6e);
    /* 00413d6e: mov dword ptr [ebp - 0x28], 0x3f0 */ W32((u32)(r_ebp+0xffffffd8u), 0x3f0u);
    /* 00413d75: mov dword ptr [ebp - 0x60], 0x7dc */ W32((u32)(r_ebp+0xffffffa0u), 0x7dcu);
    /* 00413d7c: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413d82: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00413d85: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413d8b: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00413d8e:; BB(0x00413d8e);
    /* 00413d8e: jmp 0x413f02 */ goto L_00413f02;
L_00413d93:; BB(0x00413d93);
    /* 00413d93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413d96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413d97: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x413d9cu); f_005dcb00();
    /* 00413d9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413d9f: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00413da5: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00413dab: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413db0u); f_0063aac0();
    /* 00413db0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00413db2: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 00413db8: cmp dword ptr [ebp - 0xc4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413dbf: je 0x413de9 */ if (fZ) goto L_00413de9;
L_00413dc1:; BB(0x00413dc1);
    /* 00413dc1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00413dc7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413dccu); f_0063aac0();
    /* 00413dcc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00413dce: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00413dd4: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ddb: je 0x413de9 */ if (fZ) goto L_00413de9;
L_00413ddd:; BB(0x00413ddd);
    /* 00413ddd: mov dword ptr [ebp - 0x1a4], 0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x0u);
    /* 00413de7: jmp 0x413df3 */ goto L_00413df3;
L_00413de9:; BB(0x00413de9);
    /* 00413de9: mov dword ptr [ebp - 0x1a4], 1 */ W32((u32)(r_ebp+0xfffffe5cu), 0x1u);
L_00413df3:; BB(0x00413df3);
    /* 00413df3: movzx eax, byte ptr [ebp - 0x1a4] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe5cu));
    /* 00413dfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413dfc: jne 0x413e6e */ if (!fZ) goto L_00413e6e;
L_00413dfe:; BB(0x00413dfe);
    /* 00413dfe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e00: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413e03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413e04: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413e0a: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413e0fu); f_00419980();
    /* 00413e0f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413e12: jle 0x413e69 */ if ((fZ||fS!=fO)) goto L_00413e69;
L_00413e14:; BB(0x00413e14);
    /* 00413e14: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e16: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413e19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413e1a: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413e20: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413e25u); f_00419980();
    /* 00413e25: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413e28: jge 0x413e69 */ if ((fS==fO)) goto L_00413e69;
L_00413e2a:; BB(0x00413e2a);
    /* 00413e2a: mov dword ptr [ebp - 0x28], 0x402 */ W32((u32)(r_ebp+0xffffffd8u), 0x402u);
    /* 00413e31: mov dword ptr [ebp - 0x60], 0x3f6 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f6u);
    /* 00413e38: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413e3e: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00413e41: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413e47: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00413e4a: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00413e4f: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00413e55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413e58: mov edx, dword ptr [ebp - 0xd0] */ r_edx = R32((u32)(r_ebp+0xffffff30u));
    /* 00413e5e: mov dword ptr [edx + ecx*4 + 0x4f4], 2 */ W32((u32)(r_edx+r_ecx*4+0x4f4u), 0x2u);
L_00413e69:; BB(0x00413e69);
    /* 00413e69: jmp 0x413f02 */ goto L_00413f02;
L_00413e6e:; BB(0x00413e6e);
    /* 00413e6e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e70: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413e73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413e74: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413e7a: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413e7fu); f_00419980();
    /* 00413e7f: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413e82: jle 0x413edc */ if ((fZ||fS!=fO)) goto L_00413edc;
L_00413e84:; BB(0x00413e84);
    /* 00413e84: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413e86: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413e89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413e8a: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413e90: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x413e95u); f_00419980();
    /* 00413e95: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413e98: jge 0x413edc */ if ((fS==fO)) goto L_00413edc;
L_00413e9a:; BB(0x00413e9a);
    /* 00413e9a: mov dword ptr [ebp - 0x28], 0x7db */ W32((u32)(r_ebp+0xffffffd8u), 0x7dbu);
    /* 00413ea1: mov dword ptr [ebp - 0x60], 0x3e8 */ W32((u32)(r_ebp+0xffffffa0u), 0x3e8u);
    /* 00413ea8: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 00413eae: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00413eb1: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 00413eb7: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00413eba: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00413ec0: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00413ec6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413ec9: mov ecx, dword ptr [ebp - 0xd4] */ r_ecx = R32((u32)(r_ebp+0xffffff2cu));
    /* 00413ecf: mov dword ptr [ecx + eax*4 + 0x4f4], 2 */ W32((u32)(r_ecx+r_eax*4+0x4f4u), 0x2u);
    /* 00413eda: jmp 0x413f02 */ goto L_00413f02;
L_00413edc:; BB(0x00413edc);
    /* 00413edc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413ede: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413ee1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413ee2: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413ee8: call 0x419530 */ r_esp -= 4; W32(r_esp, 0x413eedu); f_00419530();
    /* 00413eed: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00413ef0: jle 0x413f02 */ if ((fZ||fS!=fO)) goto L_00413f02;
L_00413ef2:; BB(0x00413ef2);
    /* 00413ef2: mov dword ptr [ebp - 0x28], 0x7da */ W32((u32)(r_ebp+0xffffffd8u), 0x7dau);
    /* 00413ef9: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413eff: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00413f02:; BB(0x00413f02);
    /* 00413f02: jmp 0x4141d0 */ goto L_004141d0;
L_00413f07:; BB(0x00413f07);
    /* 00413f07: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413f0d: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x413f12u); f_00418700();
    /* 00413f12: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413f15: jne 0x413f1b */ if (!fZ) goto L_00413f1b;
L_00413f17:; BB(0x00413f17);
    /* 00413f17: mov byte ptr [ebp - 0x51], 0 */ W8((u32)(r_ebp+0xffffffafu), 0x0u);
L_00413f1b:; BB(0x00413f1b);
    /* 00413f1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00413f1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413f20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00413f21: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413f27: call 0x41b990 */ r_esp -= 4; W32(r_esp, 0x413f2cu); f_0041b990();
    /* 00413f2c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00413f2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413f31: je 0x413fe9 */ if (fZ) goto L_00413fe9;
L_00413f37:; BB(0x00413f37);
    /* 00413f37: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00413f3d: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 00413f43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413f46: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00413f4c: mov dword ptr [ecx + eax*4 + 0x4f4], 2 */ W32((u32)(r_ecx+r_eax*4+0x4f4u), 0x2u);
    /* 00413f57: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00413f5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00413f5b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x413f60u); f_005dcb00();
    /* 00413f60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00413f63: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00413f69: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00413f6f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413f74u); f_0063aac0();
    /* 00413f74: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00413f76: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00413f7c: cmp dword ptr [ebp - 0xdc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413f83: je 0x413fad */ if (fZ) goto L_00413fad;
L_00413f85:; BB(0x00413f85);
    /* 00413f85: mov ecx, dword ptr [ebp - 0xe4] */ r_ecx = R32((u32)(r_ebp+0xffffff1cu));
    /* 00413f8b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x413f90u); f_0063aac0();
    /* 00413f90: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00413f92: mov dword ptr [ebp - 0xe0], ecx */ W32((u32)(r_ebp+0xffffff20u), r_ecx);
    /* 00413f98: cmp dword ptr [ebp - 0xe0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413f9f: je 0x413fad */ if (fZ) goto L_00413fad;
L_00413fa1:; BB(0x00413fa1);
    /* 00413fa1: mov dword ptr [ebp - 0x1a8], 0 */ W32((u32)(r_ebp+0xfffffe58u), 0x0u);
    /* 00413fab: jmp 0x413fb7 */ goto L_00413fb7;
L_00413fad:; BB(0x00413fad);
    /* 00413fad: mov dword ptr [ebp - 0x1a8], 1 */ W32((u32)(r_ebp+0xfffffe58u), 0x1u);
L_00413fb7:; BB(0x00413fb7);
    /* 00413fb7: movzx edx, byte ptr [ebp - 0x1a8] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe58u));
    /* 00413fbe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413fc0: jne 0x413fd4 */ if (!fZ) goto L_00413fd4;
L_00413fc2:; BB(0x00413fc2);
    /* 00413fc2: mov dword ptr [ebp - 0x28], 0x7d1 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d1u);
    /* 00413fc9: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413fcf: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00413fd2: jmp 0x413fe4 */ goto L_00413fe4;
L_00413fd4:; BB(0x00413fd4);
    /* 00413fd4: mov dword ptr [ebp - 0x28], 0x3e8 */ W32((u32)(r_ebp+0xffffffd8u), 0x3e8u);
    /* 00413fdb: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00413fe1: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00413fe4:; BB(0x00413fe4);
    /* 00413fe4: jmp 0x4141d0 */ goto L_004141d0;
L_00413fe9:; BB(0x00413fe9);
    /* 00413fe9: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00413fef: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x413ff4u); f_00418700();
    /* 00413ff4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00413ff7: jne 0x413ffe */ if (!fZ) goto L_00413ffe;
L_00413ff9:; BB(0x00413ff9);
    /* 00413ff9: jmp 0x4141d0 */ goto L_004141d0;
L_00413ffe:; BB(0x00413ffe);
    /* 00413ffe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414000: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414004: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041400a: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x41400fu); f_00419980();
    /* 0041400f: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414012: jne 0x4140ea */ if (!fZ) goto L_004140ea;
L_00414018:; BB(0x00414018);
    /* 00414018: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041401e: mov dword ptr [ebp - 0xe8], ecx */ W32((u32)(r_ebp+0xffffff18u), r_ecx);
    /* 00414024: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414027: mov eax, dword ptr [ebp - 0xe8] */ r_eax = R32((u32)(r_ebp+0xffffff18u));
    /* 0041402d: mov dword ptr [eax + edx*4 + 0x4f4], 1 */ W32((u32)(r_eax+r_edx*4+0x4f4u), 0x1u);
    /* 00414038: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041403b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041403c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x414041u); f_005dcb00();
    /* 00414041: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414044: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0041404a: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 00414050: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414055u); f_0063aac0();
    /* 00414055: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414057: mov dword ptr [ebp - 0xec], edx */ W32((u32)(r_ebp+0xffffff14u), r_edx);
    /* 0041405d: cmp dword ptr [ebp - 0xec], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414064: je 0x41408e */ if (fZ) goto L_0041408e;
L_00414066:; BB(0x00414066);
    /* 00414066: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0041406c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414071u); f_0063aac0();
    /* 00414071: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00414073: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00414079: cmp dword ptr [ebp - 0xf0], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414080: je 0x41408e */ if (fZ) goto L_0041408e;
L_00414082:; BB(0x00414082);
    /* 00414082: mov dword ptr [ebp - 0x1ac], 0 */ W32((u32)(r_ebp+0xfffffe54u), 0x0u);
    /* 0041408c: jmp 0x414098 */ goto L_00414098;
L_0041408e:; BB(0x0041408e);
    /* 0041408e: mov dword ptr [ebp - 0x1ac], 1 */ W32((u32)(r_ebp+0xfffffe54u), 0x1u);
L_00414098:; BB(0x00414098);
    /* 00414098: movzx ecx, byte ptr [ebp - 0x1ac] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe54u));
    /* 0041409f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004140a1: jne 0x4140c5 */ if (!fZ) goto L_004140c5;
L_004140a3:; BB(0x004140a3);
    /* 004140a3: mov dword ptr [ebp - 0x28], 0x404 */ W32((u32)(r_ebp+0xffffffd8u), 0x404u);
    /* 004140aa: mov dword ptr [ebp - 0x60], 0x3f4 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f4u);
    /* 004140b1: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 004140b7: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004140ba: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004140c0: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004140c3: jmp 0x4140e5 */ goto L_004140e5;
L_004140c5:; BB(0x004140c5);
    /* 004140c5: mov dword ptr [ebp - 0x28], 0x7d9 */ W32((u32)(r_ebp+0xffffffd8u), 0x7d9u);
    /* 004140cc: mov dword ptr [ebp - 0x60], 0x40d */ W32((u32)(r_ebp+0xffffffa0u), 0x40du);
    /* 004140d3: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 004140d9: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004140dc: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004140e2: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_004140e5:; BB(0x004140e5);
    /* 004140e5: jmp 0x4141d0 */ goto L_004141d0;
L_004140ea:; BB(0x004140ea);
    /* 004140ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004140ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004140ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004140f0: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004140f6: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x4140fbu); f_00419980();
    /* 004140fb: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004140fe: jge 0x4141d0 */ if ((fS==fO)) goto L_004141d0;
L_00414104:; BB(0x00414104);
    /* 00414104: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00414109: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0041410f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414112: mov edx, dword ptr [ebp - 0xf8] */ r_edx = R32((u32)(r_ebp+0xffffff08u));
    /* 00414118: mov dword ptr [edx + ecx*4 + 0x4f4], 2 */ W32((u32)(r_edx+r_ecx*4+0x4f4u), 0x2u);
    /* 00414123: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414127: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41412cu); f_005dcb00();
    /* 0041412c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041412f: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00414135: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 0041413b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414140u); f_0063aac0();
    /* 00414140: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00414142: mov dword ptr [ebp - 0xfc], ecx */ W32((u32)(r_ebp+0xffffff04u), r_ecx);
    /* 00414148: cmp dword ptr [ebp - 0xfc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff04u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041414f: je 0x414179 */ if (fZ) goto L_00414179;
L_00414151:; BB(0x00414151);
    /* 00414151: mov ecx, dword ptr [ebp - 0x104] */ r_ecx = R32((u32)(r_ebp+0xfffffefcu));
    /* 00414157: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41415cu); f_0063aac0();
    /* 0041415c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041415e: mov dword ptr [ebp - 0x100], edx */ W32((u32)(r_ebp+0xffffff00u), r_edx);
    /* 00414164: cmp dword ptr [ebp - 0x100], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041416b: je 0x414179 */ if (fZ) goto L_00414179;
L_0041416d:; BB(0x0041416d);
    /* 0041416d: mov dword ptr [ebp - 0x1b0], 0 */ W32((u32)(r_ebp+0xfffffe50u), 0x0u);
    /* 00414177: jmp 0x414183 */ goto L_00414183;
L_00414179:; BB(0x00414179);
    /* 00414179: mov dword ptr [ebp - 0x1b0], 1 */ W32((u32)(r_ebp+0xfffffe50u), 0x1u);
L_00414183:; BB(0x00414183);
    /* 00414183: movzx eax, byte ptr [ebp - 0x1b0] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe50u));
    /* 0041418a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041418c: jne 0x4141b0 */ if (!fZ) goto L_004141b0;
L_0041418e:; BB(0x0041418e);
    /* 0041418e: mov dword ptr [ebp - 0x28], 0x401 */ W32((u32)(r_ebp+0xffffffd8u), 0x401u);
    /* 00414195: mov dword ptr [ebp - 0x60], 0x3f6 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f6u);
    /* 0041419c: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 004141a2: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004141a5: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004141ab: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004141ae: jmp 0x4141d0 */ goto L_004141d0;
L_004141b0:; BB(0x004141b0);
    /* 004141b0: mov dword ptr [ebp - 0x28], 0x409 */ W32((u32)(r_ebp+0xffffffd8u), 0x409u);
    /* 004141b7: mov dword ptr [ebp - 0x60], 0x40f */ W32((u32)(r_ebp+0xffffffa0u), 0x40fu);
    /* 004141be: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 004141c4: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 004141c7: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004141cd: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_004141d0:; BB(0x004141d0);
    /* 004141d0: jmp 0x414a9f */ goto L_00414a9f;
L_004141d5:; BB(0x004141d5);
    /* 004141d5: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 004141dc: jmp 0x4141e7 */ goto L_004141e7;
L_004141de:; BB(0x004141de);
    /* 004141de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004141e1: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004141e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_004141e7:; BB(0x004141e7);
    /* 004141e7: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004141eb: jle 0x41444b */ if ((fZ||fS!=fO)) goto L_0041444b;
L_004141f1:; BB(0x004141f1);
    /* 004141f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004141f4: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004141fa: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004141fd: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00414202: movsx ecx, byte ptr [eax + edx + 0x110] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x110u));
    /* 0041420a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041420d: je 0x414446 */ if (fZ) goto L_00414446;
L_00414213:; BB(0x00414213);
    /* 00414213: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414216: imul edx, edx, 0x118 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x118u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0041421c: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041421f: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00414224: movsx ecx, byte ptr [eax + edx + 0x110] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x110u));
    /* 0041422c: mov dword ptr [ebp - 0x1b4], ecx */ W32((u32)(r_ebp+0xfffffe4cu), r_ecx);
    /* 00414232: cmp dword ptr [ebp - 0x1b4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414239: je 0x414342 */ if (fZ) goto L_00414342;
L_0041423f:; BB(0x0041423f);
    /* 0041423f: cmp dword ptr [ebp - 0x1b4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414246: je 0x414252 */ if (fZ) goto L_00414252;
L_00414248:; BB(0x00414248);
    /* 00414248: jmp 0x414444 */ goto L_00414444;
L_00414252:; BB(0x00414252);
    /* 00414252: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00414258: mov dword ptr [ebp - 0x108], edx */ W32((u32)(r_ebp+0xfffffef8u), r_edx);
    /* 0041425e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414261: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 00414267: mov dword ptr [ecx + eax*4 + 0x4f4], 1 */ W32((u32)(r_ecx+r_eax*4+0x4f4u), 0x1u);
    /* 00414272: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414275: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414276: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41427bu); f_005dcb00();
    /* 0041427b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041427e: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00414284: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0041428a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41428fu); f_0063aac0();
    /* 0041428f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00414291: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 00414297: cmp dword ptr [ebp - 0x10c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041429e: je 0x4142c8 */ if (fZ) goto L_004142c8;
L_004142a0:; BB(0x004142a0);
    /* 004142a0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 004142a6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4142abu); f_0063aac0();
    /* 004142ab: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004142ad: mov dword ptr [ebp - 0x110], ecx */ W32((u32)(r_ebp+0xfffffef0u), r_ecx);
    /* 004142b3: cmp dword ptr [ebp - 0x110], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004142ba: je 0x4142c8 */ if (fZ) goto L_004142c8;
L_004142bc:; BB(0x004142bc);
    /* 004142bc: mov dword ptr [ebp - 0x1b8], 0 */ W32((u32)(r_ebp+0xfffffe48u), 0x0u);
    /* 004142c6: jmp 0x4142d2 */ goto L_004142d2;
L_004142c8:; BB(0x004142c8);
    /* 004142c8: mov dword ptr [ebp - 0x1b8], 1 */ W32((u32)(r_ebp+0xfffffe48u), 0x1u);
L_004142d2:; BB(0x004142d2);
    /* 004142d2: movzx edx, byte ptr [ebp - 0x1b8] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe48u));
    /* 004142d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004142db: jne 0x41431d */ if (!fZ) goto L_0041431d;
L_004142dd:; BB(0x004142dd);
    /* 004142dd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004142e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004142e1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4142e6u); f_005dcb00();
    /* 004142e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004142e9: cmp dword ptr [eax + 0x4a8], 5 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004142f0: jle 0x4142fb */ if ((fZ||fS!=fO)) goto L_004142fb;
L_004142f2:; BB(0x004142f2);
    /* 004142f2: mov dword ptr [ebp - 0x28], 0x400 */ W32((u32)(r_ebp+0xffffffd8u), 0x400u);
    /* 004142f9: jmp 0x414302 */ goto L_00414302;
L_004142fb:; BB(0x004142fb);
    /* 004142fb: mov dword ptr [ebp - 0x28], 0x3fc */ W32((u32)(r_ebp+0xffffffd8u), 0x3fcu);
L_00414302:; BB(0x00414302);
    /* 00414302: mov dword ptr [ebp - 0x60], 0x404 */ W32((u32)(r_ebp+0xffffffa0u), 0x404u);
    /* 00414309: fld qword ptr [0x6b3e48] */ FPUSH(R_F64((u32)(0x6b3e48u)));
    /* 0041430f: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00414312: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00414318: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0041431b: jmp 0x41433d */ goto L_0041433d;
L_0041431d:; BB(0x0041431d);
    /* 0041431d: mov dword ptr [ebp - 0x28], 0x3f0 */ W32((u32)(r_ebp+0xffffffd8u), 0x3f0u);
    /* 00414324: mov dword ptr [ebp - 0x60], 0x40d */ W32((u32)(r_ebp+0xffffffa0u), 0x40du);
    /* 0041432b: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 00414331: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00414334: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0041433a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0041433d:; BB(0x0041433d);
    /* 0041433d: jmp 0x414444 */ goto L_00414444;
L_00414342:; BB(0x00414342);
    /* 00414342: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00414348: mov dword ptr [ebp - 0x118], ecx */ W32((u32)(r_ebp+0xfffffee8u), r_ecx);
    /* 0041434e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414351: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 00414357: mov dword ptr [eax + edx*4 + 0x4f4], 2 */ W32((u32)(r_eax+r_edx*4+0x4f4u), 0x2u);
    /* 00414362: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414365: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414366: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41436bu); f_005dcb00();
    /* 0041436b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041436e: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00414374: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0041437a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41437fu); f_0063aac0();
    /* 0041437f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414381: mov dword ptr [ebp - 0x11c], edx */ W32((u32)(r_ebp+0xfffffee4u), r_edx);
    /* 00414387: cmp dword ptr [ebp - 0x11c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffee4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041438e: je 0x4143b8 */ if (fZ) goto L_004143b8;
L_00414390:; BB(0x00414390);
    /* 00414390: mov ecx, dword ptr [ebp - 0x124] */ r_ecx = R32((u32)(r_ebp+0xfffffedcu));
    /* 00414396: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41439bu); f_0063aac0();
    /* 0041439b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0041439d: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 004143a3: cmp dword ptr [ebp - 0x120], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffee0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143aa: je 0x4143b8 */ if (fZ) goto L_004143b8;
L_004143ac:; BB(0x004143ac);
    /* 004143ac: mov dword ptr [ebp - 0x1bc], 0 */ W32((u32)(r_ebp+0xfffffe44u), 0x0u);
    /* 004143b6: jmp 0x4143c2 */ goto L_004143c2;
L_004143b8:; BB(0x004143b8);
    /* 004143b8: mov dword ptr [ebp - 0x1bc], 1 */ W32((u32)(r_ebp+0xfffffe44u), 0x1u);
L_004143c2:; BB(0x004143c2);
    /* 004143c2: movzx ecx, byte ptr [ebp - 0x1bc] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe44u));
    /* 004143c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143cb: jne 0x414424 */ if (!fZ) goto L_00414424;
L_004143cd:; BB(0x004143cd);
    /* 004143cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004143d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004143d1: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4143d6u); f_005dcb00();
    /* 004143d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004143d9: cmp dword ptr [eax + 0x4a8], -5 */ {  u32 a = R32((u32)(r_eax+0x4a8u)); u32 b = 0xfffffffbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004143e0: jge 0x414402 */ if ((fS==fO)) goto L_00414402;
L_004143e2:; BB(0x004143e2);
    /* 004143e2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004143e4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4143e9u); f_0062fbf0();
    /* 004143e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004143ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004143ee: jne 0x4143f9 */ if (!fZ) goto L_004143f9;
L_004143f0:; BB(0x004143f0);
    /* 004143f0: mov dword ptr [ebp - 0x28], 0x3f1 */ W32((u32)(r_ebp+0xffffffd8u), 0x3f1u);
    /* 004143f7: jmp 0x414400 */ goto L_00414400;
L_004143f9:; BB(0x004143f9);
    /* 004143f9: mov dword ptr [ebp - 0x28], 0x3ff */ W32((u32)(r_ebp+0xffffffd8u), 0x3ffu);
L_00414400:; BB(0x00414400);
    /* 00414400: jmp 0x414409 */ goto L_00414409;
L_00414402:; BB(0x00414402);
    /* 00414402: mov dword ptr [ebp - 0x28], 0x402 */ W32((u32)(r_ebp+0xffffffd8u), 0x402u);
L_00414409:; BB(0x00414409);
    /* 00414409: mov dword ptr [ebp - 0x60], 0x3f6 */ W32((u32)(r_ebp+0xffffffa0u), 0x3f6u);
    /* 00414410: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 00414416: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00414419: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 0041441f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00414422: jmp 0x414444 */ goto L_00414444;
L_00414424:; BB(0x00414424);
    /* 00414424: mov dword ptr [ebp - 0x28], 0x3e8 */ W32((u32)(r_ebp+0xffffffd8u), 0x3e8u);
    /* 0041442b: mov dword ptr [ebp - 0x60], 0x40f */ W32((u32)(r_ebp+0xffffffa0u), 0x40fu);
    /* 00414432: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 00414438: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0041443b: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 00414441: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_00414444:; BB(0x00414444);
    /* 00414444: jmp 0x41444b */ goto L_0041444b;
L_00414446:; BB(0x00414446);
    /* 00414446: jmp 0x4141de */ goto L_004141de;
L_0041444b:; BB(0x0041444b);
    /* 0041444b: jmp 0x414a9f */ goto L_00414a9f;
L_00414450:; BB(0x00414450);
    /* 00414450: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00414456: call 0x5db190 */ r_esp -= 4; W32(r_esp, 0x41445bu); f_005db190();
    /* 0041445b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041445e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414460: je 0x41459d */ if (fZ) goto L_0041459d;
L_00414466:; BB(0x00414466);
    /* 00414466: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041446c: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x414471u); f_005dac90();
    /* 00414471: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414474: jne 0x41447b */ if (!fZ) goto L_0041447b;
L_00414476:; BB(0x00414476);
    /* 00414476: jmp 0x414a9f */ goto L_00414a9f;
L_0041447b:; BB(0x0041447b);
    /* 0041447b: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00414481: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x414486u); f_005dac90();
    /* 00414486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414487: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41448cu); f_005dcb00();
    /* 0041448c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041448f: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00414495: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0041449b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4144a0u); f_0063aac0();
    /* 004144a0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004144a2: mov dword ptr [ebp - 0x128], ecx */ W32((u32)(r_ebp+0xfffffed8u), r_ecx);
    /* 004144a8: cmp dword ptr [ebp - 0x128], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004144af: je 0x4144d9 */ if (fZ) goto L_004144d9;
L_004144b1:; BB(0x004144b1);
    /* 004144b1: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 004144b7: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4144bcu); f_0063aac0();
    /* 004144bc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004144be: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 004144c4: cmp dword ptr [ebp - 0x12c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffed4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004144cb: je 0x4144d9 */ if (fZ) goto L_004144d9;
L_004144cd:; BB(0x004144cd);
    /* 004144cd: mov dword ptr [ebp - 0x1c0], 0 */ W32((u32)(r_ebp+0xfffffe40u), 0x0u);
    /* 004144d7: jmp 0x4144e3 */ goto L_004144e3;
L_004144d9:; BB(0x004144d9);
    /* 004144d9: mov dword ptr [ebp - 0x1c0], 1 */ W32((u32)(r_ebp+0xfffffe40u), 0x1u);
L_004144e3:; BB(0x004144e3);
    /* 004144e3: movzx eax, byte ptr [ebp - 0x1c0] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe40u));
    /* 004144ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004144ec: je 0x4144fa */ if (fZ) goto L_004144fa;
L_004144ee:; BB(0x004144ee);
    /* 004144ee: mov dword ptr [ebp - 0x1c4], 0xffffffff */ W32((u32)(r_ebp+0xfffffe3cu), 0xffffffffu);
    /* 004144f8: jmp 0x41450b */ goto L_0041450b;
L_004144fa:; BB(0x004144fa);
    /* 004144fa: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00414500: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x414505u); f_005dac90();
    /* 00414505: mov dword ptr [ebp - 0x1c4], eax */ W32((u32)(r_ebp+0xfffffe3cu), r_eax);
L_0041450b:; BB(0x0041450b);
    /* 0041450b: mov ecx, dword ptr [ebp - 0x1c4] */ r_ecx = R32((u32)(r_ebp+0xfffffe3cu));
    /* 00414511: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00414514: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 0041451a: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x41451fu); f_005dac90();
    /* 0041451f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414520: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x414525u); f_005dcb00();
    /* 00414525: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414528: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 0041452e: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00414534: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414539u); f_0063aac0();
    /* 00414539: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041453b: mov dword ptr [ebp - 0x134], edx */ W32((u32)(r_ebp+0xfffffeccu), r_edx);
    /* 00414541: cmp dword ptr [ebp - 0x134], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414548: je 0x414572 */ if (fZ) goto L_00414572;
L_0041454a:; BB(0x0041454a);
    /* 0041454a: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 00414550: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414555u); f_0063aac0();
    /* 00414555: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00414557: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0041455d: cmp dword ptr [ebp - 0x138], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffec8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414564: je 0x414572 */ if (fZ) goto L_00414572;
L_00414566:; BB(0x00414566);
    /* 00414566: mov dword ptr [ebp - 0x1c8], 0 */ W32((u32)(r_ebp+0xfffffe38u), 0x0u);
    /* 00414570: jmp 0x41457c */ goto L_0041457c;
L_00414572:; BB(0x00414572);
    /* 00414572: mov dword ptr [ebp - 0x1c8], 1 */ W32((u32)(r_ebp+0xfffffe38u), 0x1u);
L_0041457c:; BB(0x0041457c);
    /* 0041457c: movzx ecx, byte ptr [ebp - 0x1c8] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe38u));
    /* 00414583: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00414585: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00414587: and ecx, 0x15 */ {  u32 a = r_ecx; u32 b = 0x15u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0041458a: add ecx, 0x3fd */ {  u32 a = r_ecx; u32 b = 0x3fdu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00414590: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00414593: fld1  */ FPUSH(1.0);
    /* 00414595: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00414598: jmp 0x414a9f */ goto L_00414a9f;
L_0041459d:; BB(0x0041459d);
    /* 0041459d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0041459f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4145a4u); f_0062fbf0();
    /* 004145a4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004145a7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004145aa: jge 0x414722 */ if ((fS==fO)) goto L_00414722;
L_004145b0:; BB(0x004145b0);
    /* 004145b0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004145b2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4145b7u); f_0062fbf0();
    /* 004145b7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004145ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004145bc: je 0x414672 */ if (fZ) goto L_00414672;
L_004145c2:; BB(0x004145c2);
    /* 004145c2: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 004145c8: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x4145cdu); f_005dac90();
    /* 004145cd: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004145d0: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004145d4: je 0x41466d */ if (fZ) goto L_0041466d;
L_004145da:; BB(0x004145da);
    /* 004145da: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004145dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004145de: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4145e3u); f_005dcb00();
    /* 004145e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004145e6: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 004145ec: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 004145f2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4145f7u); f_0063aac0();
    /* 004145f7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004145f9: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 004145ff: cmp dword ptr [ebp - 0x140], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffec0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414606: je 0x414630 */ if (fZ) goto L_00414630;
L_00414608:; BB(0x00414608);
    /* 00414608: mov ecx, dword ptr [ebp - 0x148] */ r_ecx = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0041460e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414613u); f_0063aac0();
    /* 00414613: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00414615: mov dword ptr [ebp - 0x144], ecx */ W32((u32)(r_ebp+0xfffffebcu), r_ecx);
    /* 0041461b: cmp dword ptr [ebp - 0x144], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffebcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414622: je 0x414630 */ if (fZ) goto L_00414630;
L_00414624:; BB(0x00414624);
    /* 00414624: mov dword ptr [ebp - 0x1cc], 0 */ W32((u32)(r_ebp+0xfffffe34u), 0x0u);
    /* 0041462e: jmp 0x41463a */ goto L_0041463a;
L_00414630:; BB(0x00414630);
    /* 00414630: mov dword ptr [ebp - 0x1cc], 1 */ W32((u32)(r_ebp+0xfffffe34u), 0x1u);
L_0041463a:; BB(0x0041463a);
    /* 0041463a: movzx edx, byte ptr [ebp - 0x1cc] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe34u));
    /* 00414641: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414643: jne 0x41465d */ if (!fZ) goto L_0041465d;
L_00414645:; BB(0x00414645);
    /* 00414645: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414648: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0041464b: mov dword ptr [ebp - 0x28], 0x3f2 */ W32((u32)(r_ebp+0xffffffd8u), 0x3f2u);
    /* 00414652: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 00414658: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0041465b: jmp 0x41466d */ goto L_0041466d;
L_0041465d:; BB(0x0041465d);
    /* 0041465d: mov dword ptr [ebp - 0x28], 0x40b */ W32((u32)(r_ebp+0xffffffd8u), 0x40bu);
    /* 00414664: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 0041466a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0041466d:; BB(0x0041466d);
    /* 0041466d: jmp 0x41471d */ goto L_0041471d;
L_00414672:; BB(0x00414672);
    /* 00414672: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00414678: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x41467du); f_005dada0();
    /* 0041467d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00414680: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414684: je 0x41471d */ if (fZ) goto L_0041471d;
L_0041468a:; BB(0x0041468a);
    /* 0041468a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041468d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041468e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x414693u); f_005dcb00();
    /* 00414693: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414696: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 0041469c: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 004146a2: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4146a7u); f_0063aac0();
    /* 004146a7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004146a9: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
    /* 004146af: cmp dword ptr [ebp - 0x14c], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004146b6: je 0x4146e0 */ if (fZ) goto L_004146e0;
L_004146b8:; BB(0x004146b8);
    /* 004146b8: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 004146be: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4146c3u); f_0063aac0();
    /* 004146c3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004146c5: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 004146cb: cmp dword ptr [ebp - 0x150], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffeb0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004146d2: je 0x4146e0 */ if (fZ) goto L_004146e0;
L_004146d4:; BB(0x004146d4);
    /* 004146d4: mov dword ptr [ebp - 0x1d0], 0 */ W32((u32)(r_ebp+0xfffffe30u), 0x0u);
    /* 004146de: jmp 0x4146ea */ goto L_004146ea;
L_004146e0:; BB(0x004146e0);
    /* 004146e0: mov dword ptr [ebp - 0x1d0], 1 */ W32((u32)(r_ebp+0xfffffe30u), 0x1u);
L_004146ea:; BB(0x004146ea);
    /* 004146ea: movzx ecx, byte ptr [ebp - 0x1d0] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffe30u));
    /* 004146f1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004146f3: jne 0x41470d */ if (!fZ) goto L_0041470d;
L_004146f5:; BB(0x004146f5);
    /* 004146f5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004146f8: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 004146fb: mov dword ptr [ebp - 0x28], 0x3f3 */ W32((u32)(r_ebp+0xffffffd8u), 0x3f3u);
    /* 00414702: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 00414708: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0041470b: jmp 0x41471d */ goto L_0041471d;
L_0041470d:; BB(0x0041470d);
    /* 0041470d: mov dword ptr [ebp - 0x28], 0x40c */ W32((u32)(r_ebp+0xffffffd8u), 0x40cu);
    /* 00414714: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 0041471a: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_0041471d:; BB(0x0041471d);
    /* 0041471d: jmp 0x4148fa */ goto L_004148fa;
L_00414722:; BB(0x00414722);
    /* 00414722: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00414728: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x41472du); f_005dada0();
    /* 0041472d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00414730: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414734: je 0x4147fd */ if (fZ) goto L_004147fd;
L_0041473a:; BB(0x0041473a);
    /* 0041473a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041473d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041473e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x414743u); f_005dcb00();
    /* 00414743: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414746: mov ecx, eax */ r_ecx = r_eax;
    /* 00414748: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x41474du); f_005d5a50();
    /* 0041474d: mov esi, eax */ r_esi = r_eax;
    /* 0041474f: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00414755: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x41475au); f_005da880();
    /* 0041475a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0041475b: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00414760: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00414760, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00414760, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00414762: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414764: jge 0x4147fd */ if ((fS==fO)) goto L_004147fd;
L_0041476a:; BB(0x0041476a);
    /* 0041476a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041476d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041476e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x414773u); f_005dcb00();
    /* 00414773: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00414776: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 0041477c: mov ecx, dword ptr [ebp - 0x160] */ r_ecx = R32((u32)(r_ebp+0xfffffea0u));
    /* 00414782: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414787u); f_0063aac0();
    /* 00414787: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00414789: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 0041478f: cmp dword ptr [ebp - 0x158], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffea8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414796: je 0x4147c0 */ if (fZ) goto L_004147c0;
L_00414798:; BB(0x00414798);
    /* 00414798: mov ecx, dword ptr [ebp - 0x160] */ r_ecx = R32((u32)(r_ebp+0xfffffea0u));
    /* 0041479e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4147a3u); f_0063aac0();
    /* 004147a3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004147a5: mov dword ptr [ebp - 0x15c], ecx */ W32((u32)(r_ebp+0xfffffea4u), r_ecx);
    /* 004147ab: cmp dword ptr [ebp - 0x15c], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffea4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004147b2: je 0x4147c0 */ if (fZ) goto L_004147c0;
L_004147b4:; BB(0x004147b4);
    /* 004147b4: mov dword ptr [ebp - 0x1d4], 0 */ W32((u32)(r_ebp+0xfffffe2cu), 0x0u);
    /* 004147be: jmp 0x4147ca */ goto L_004147ca;
L_004147c0:; BB(0x004147c0);
    /* 004147c0: mov dword ptr [ebp - 0x1d4], 1 */ W32((u32)(r_ebp+0xfffffe2cu), 0x1u);
L_004147ca:; BB(0x004147ca);
    /* 004147ca: movzx edx, byte ptr [ebp - 0x1d4] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffe2cu));
    /* 004147d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004147d3: jne 0x4147ed */ if (!fZ) goto L_004147ed;
L_004147d5:; BB(0x004147d5);
    /* 004147d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004147d8: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004147db: mov dword ptr [ebp - 0x28], 0x3f7 */ W32((u32)(r_ebp+0xffffffd8u), 0x3f7u);
    /* 004147e2: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004147e8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004147eb: jmp 0x4147fd */ goto L_004147fd;
L_004147ed:; BB(0x004147ed);
    /* 004147ed: mov dword ptr [ebp - 0x28], 0x410 */ W32((u32)(r_ebp+0xffffffd8u), 0x410u);
    /* 004147f4: fld qword ptr [0x6b2c38] */ FPUSH(R_F64((u32)(0x6b2c38u)));
    /* 004147fa: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_004147fd:; BB(0x004147fd);
    /* 004147fd: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414801: jne 0x4148fa */ if (!fZ) goto L_004148fa;
L_00414807:; BB(0x00414807);
    /* 00414807: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0041480e: jmp 0x414819 */ goto L_00414819;
L_00414810:; BB(0x00414810);
    /* 00414810: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414813: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00414816: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00414819:; BB(0x00414819);
    /* 00414819: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041481d: jge 0x4148fa */ if ((fS==fO)) goto L_004148fa;
L_00414823:; BB(0x00414823);
    /* 00414823: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414827: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x41482cu); f_005dcb00();
    /* 0041482c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041482f: mov ecx, eax */ r_ecx = r_eax;
    /* 00414831: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x414836u); f_005d5a50();
    /* 00414836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414838: jne 0x4148f5 */ if (!fZ) goto L_004148f5;
L_0041483e:; BB(0x0041483e);
    /* 0041483e: mov eax, dword ptr [ebp - 0x17c] */ r_eax = R32((u32)(r_ebp+0xfffffe84u));
    /* 00414844: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00414847: movzx ecx, byte ptr [eax + 0x14] */ r_ecx = (u32)R8((u32)(r_eax+0x14u));
    /* 0041484b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041484d: jne 0x4148f5 */ if (!fZ) goto L_004148f5;
L_00414853:; BB(0x00414853);
    /* 00414853: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 00414859: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041485c: mov byte ptr [edx + 0x14], 1 */ W8((u32)(r_edx+0x14u), 0x1u);
    /* 00414860: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414864: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x414869u); f_005dcb00();
    /* 00414869: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041486c: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 00414872: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00414878: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x41487du); f_0063aac0();
    /* 0041487d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0041487f: mov dword ptr [ebp - 0x164], ecx */ W32((u32)(r_ebp+0xfffffe9cu), r_ecx);
    /* 00414885: cmp dword ptr [ebp - 0x164], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041488c: je 0x4148b6 */ if (fZ) goto L_004148b6;
L_0041488e:; BB(0x0041488e);
    /* 0041488e: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 00414894: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x414899u); f_0063aac0();
    /* 00414899: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0041489b: mov dword ptr [ebp - 0x168], edx */ W32((u32)(r_ebp+0xfffffe98u), r_edx);
    /* 004148a1: cmp dword ptr [ebp - 0x168], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004148a8: je 0x4148b6 */ if (fZ) goto L_004148b6;
L_004148aa:; BB(0x004148aa);
    /* 004148aa: mov dword ptr [ebp - 0x1d8], 0 */ W32((u32)(r_ebp+0xfffffe28u), 0x0u);
    /* 004148b4: jmp 0x4148c0 */ goto L_004148c0;
L_004148b6:; BB(0x004148b6);
    /* 004148b6: mov dword ptr [ebp - 0x1d8], 1 */ W32((u32)(r_ebp+0xfffffe28u), 0x1u);
L_004148c0:; BB(0x004148c0);
    /* 004148c0: movzx eax, byte ptr [ebp - 0x1d8] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffe28u));
    /* 004148c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004148c9: jne 0x4148e3 */ if (!fZ) goto L_004148e3;
L_004148cb:; BB(0x004148cb);
    /* 004148cb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004148ce: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 004148d1: mov dword ptr [ebp - 0x28], 0x3f5 */ W32((u32)(r_ebp+0xffffffd8u), 0x3f5u);
    /* 004148d8: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 004148de: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004148e1: jmp 0x4148f3 */ goto L_004148f3;
L_004148e3:; BB(0x004148e3);
    /* 004148e3: mov dword ptr [ebp - 0x28], 0x40e */ W32((u32)(r_ebp+0xffffffd8u), 0x40eu);
    /* 004148ea: fld qword ptr [0x6b2c40] */ FPUSH(R_F64((u32)(0x6b2c40u)));
    /* 004148f0: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
L_004148f3:; BB(0x004148f3);
    /* 004148f3: jmp 0x4148fa */ goto L_004148fa;
L_004148f5:; BB(0x004148f5);
    /* 004148f5: jmp 0x414810 */ goto L_00414810;
L_004148fa:; BB(0x004148fa);
    /* 004148fa: jmp 0x414a9f */ goto L_00414a9f;
L_004148ff:; BB(0x004148ff);
    /* 004148ff: mov dword ptr [ebp - 0x2c], 0xcb52 */ W32((u32)(r_ebp+0xffffffd4u), 0xcb52u);
    /* 00414906: jmp 0x414a9f */ goto L_00414a9f;
L_0041490b:; BB(0x0041490b);
    /* 0041490b: mov dword ptr [ebp - 0x2c], 0xcbb6 */ W32((u32)(r_ebp+0xffffffd4u), 0xcbb6u);
    /* 00414912: jmp 0x414a9f */ goto L_00414a9f;
L_00414917:; BB(0x00414917);
    /* 00414917: mov dword ptr [ebp - 0x2c], 0xcbe8 */ W32((u32)(r_ebp+0xffffffd4u), 0xcbe8u);
    /* 0041491e: jmp 0x414a9f */ goto L_00414a9f;
L_00414923:; BB(0x00414923);
    /* 00414923: mov dword ptr [ebp - 0x2c], 0xcb85 */ W32((u32)(r_ebp+0xffffffd4u), 0xcb85u);
    /* 0041492a: jmp 0x414a9f */ goto L_00414a9f;
L_0041492f:; BB(0x0041492f);
    /* 0041492f: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00414936: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 0041493c: call 0x418460 */ r_esp -= 4; W32(r_esp, 0x414941u); f_00418460();
    /* 00414941: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00414944: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414946: je 0x414a06 */ if (fZ) goto L_00414a06;
L_0041494c:; BB(0x0041494c);
    /* 0041494c: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00414952: call 0x418700 */ r_esp -= 4; W32(r_esp, 0x414957u); f_00418700();
    /* 00414957: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041495a: jg 0x41497a */ if ((!fZ&&fS==fO)) goto L_0041497a;
L_0041495c:; BB(0x0041495c);
    /* 0041495c: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00414961: mov ecx, dword ptr [eax + 0x4d0] */ r_ecx = R32((u32)(r_eax+0x4d0u));
    /* 00414967: mov dword ptr [ebp - 0x170], ecx */ W32((u32)(r_ebp+0xfffffe90u), r_ecx);
    /* 0041496d: cmp dword ptr [ebp - 0x170], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe90u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414974: jne 0x414a06 */ if (!fZ) goto L_00414a06;
L_0041497a:; BB(0x0041497a);
    /* 0041497a: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041497e: jne 0x41498c */ if (!fZ) goto L_0041498c;
L_00414980:; BB(0x00414980);
    /* 00414980: mov dword ptr [ebp - 0x1dc], 4 */ W32((u32)(r_ebp+0xfffffe24u), 0x4u);
    /* 0041498a: jmp 0x414995 */ goto L_00414995;
L_0041498c:; BB(0x0041498c);
    /* 0041498c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0041498f: mov dword ptr [ebp - 0x1dc], edx */ W32((u32)(r_ebp+0xfffffe24u), r_edx);
L_00414995:; BB(0x00414995);
    /* 00414995: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00414997: mov eax, dword ptr [ebp - 0x1dc] */ r_eax = R32((u32)(r_ebp+0xfffffe24u));
    /* 0041499d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041499e: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004149a4: call 0x419980 */ r_esp -= 4; W32(r_esp, 0x4149a9u); f_00419980();
    /* 004149a9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004149ac: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004149b0: jne 0x4149be */ if (!fZ) goto L_004149be;
L_004149b2:; BB(0x004149b2);
    /* 004149b2: mov dword ptr [ebp - 0x1e0], 4 */ W32((u32)(r_ebp+0xfffffe20u), 0x4u);
    /* 004149bc: jmp 0x4149c7 */ goto L_004149c7;
L_004149be:; BB(0x004149be);
    /* 004149be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004149c1: mov dword ptr [ebp - 0x1e0], ecx */ W32((u32)(r_ebp+0xfffffe20u), r_ecx);
L_004149c7:; BB(0x004149c7);
    /* 004149c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004149c9: mov edx, dword ptr [ebp - 0x1e0] */ r_edx = R32((u32)(r_ebp+0xfffffe20u));
    /* 004149cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004149d0: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 004149d6: call 0x4198d0 */ r_esp -= 4; W32(r_esp, 0x4149dbu); f_004198d0();
    /* 004149db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004149de: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004149e1: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004149e4: je 0x4149fa */ if (fZ) goto L_004149fa;
L_004149e6:; BB(0x004149e6);
    /* 004149e6: cmp dword ptr [ebp - 0x24], 0x13 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004149ea: jg 0x4149fa */ if ((!fZ&&fS==fO)) goto L_004149fa;
L_004149ec:; BB(0x004149ec);
    /* 004149ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004149ef: add ecx, 0xcb31 */ {  u32 a = r_ecx; u32 b = 0xcb31u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004149f5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004149f8: jmp 0x414a06 */ goto L_00414a06;
L_004149fa:; BB(0x004149fa);
    /* 004149fa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004149fd: add edx, 0xcb1d */ {  u32 a = r_edx; u32 b = 0xcb1du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00414a03: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00414a06:; BB(0x00414a06);
    /* 00414a06: jmp 0x414a9f */ goto L_00414a9f;
L_00414a0b:; BB(0x00414a0b);
    /* 00414a0b: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
    /* 00414a12: jmp 0x414a1d */ goto L_00414a1d;
L_00414a14:; BB(0x00414a14);
    /* 00414a14: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00414a17: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00414a1a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00414a1d:; BB(0x00414a1d);
    /* 00414a1d: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00414a21: jle 0x414a9f */ if ((fZ||fS!=fO)) goto L_00414a9f;
L_00414a23:; BB(0x00414a23);
    /* 00414a23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414a26: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00414a2c: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00414a2f: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00414a35: movsx eax, byte ptr [edx + ecx + 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x110u));
    /* 00414a3d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414a40: je 0x414a9a */ if (fZ) goto L_00414a9a;
L_00414a42:; BB(0x00414a42);
    /* 00414a42: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00414a45: imul ecx, ecx, 0x118 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x118u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00414a4b: add ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00414a4e: mov edx, dword ptr [0x790324] */ r_edx = R32((u32)(0x790324u));
    /* 00414a54: movsx eax, byte ptr [edx + ecx + 0x110] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x110u));
    /* 00414a5c: mov dword ptr [ebp - 0x1e4], eax */ W32((u32)(r_ebp+0xfffffe1cu), r_eax);
    /* 00414a62: cmp dword ptr [ebp - 0x1e4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffe1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414a69: je 0x414a91 */ if (fZ) goto L_00414a91;
L_00414a6b:; BB(0x00414a6b);
    /* 00414a6b: cmp dword ptr [ebp - 0x1e4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414a72: je 0x414a88 */ if (fZ) goto L_00414a88;
L_00414a74:; BB(0x00414a74);
    /* 00414a74: cmp dword ptr [ebp - 0x1e4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffe1cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414a7b: je 0x414a7f */ if (fZ) goto L_00414a7f;
L_00414a7d:; BB(0x00414a7d);
    /* 00414a7d: jmp 0x414a98 */ goto L_00414a98;
L_00414a7f:; BB(0x00414a7f);
    /* 00414a7f: mov dword ptr [ebp - 0x2c], 0xcbcf */ W32((u32)(r_ebp+0xffffffd4u), 0xcbcfu);
    /* 00414a86: jmp 0x414a98 */ goto L_00414a98;
L_00414a88:; BB(0x00414a88);
    /* 00414a88: mov dword ptr [ebp - 0x2c], 0xcc01 */ W32((u32)(r_ebp+0xffffffd4u), 0xcc01u);
    /* 00414a8f: jmp 0x414a98 */ goto L_00414a98;
L_00414a91:; BB(0x00414a91);
    /* 00414a91: mov dword ptr [ebp - 0x2c], 0xcb6b */ W32((u32)(r_ebp+0xffffffd4u), 0xcb6bu);
L_00414a98:; BB(0x00414a98);
    /* 00414a98: jmp 0x414a9f */ goto L_00414a9f;
L_00414a9a:; BB(0x00414a9a);
    /* 00414a9a: jmp 0x414a14 */ goto L_00414a14;
L_00414a9f:; BB(0x00414a9f);
    /* 00414a9f: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00414aa5: mov dword ptr [ebp - 0x174], ecx */ W32((u32)(r_ebp+0xfffffe8cu), r_ecx);
    /* 00414aab: mov edx, dword ptr [ebp - 0x174] */ r_edx = R32((u32)(r_ebp+0xfffffe8cu));
    /* 00414ab1: mov dword ptr [edx + 0x4ec], 0xffffffff */ W32((u32)(r_edx+0x4ecu), 0xffffffffu);
    /* 00414abb: mov eax, dword ptr [ebp - 0x174] */ r_eax = R32((u32)(r_ebp+0xfffffe8cu));
    /* 00414ac1: mov dword ptr [eax + 0x4f0], 0xffffffff */ W32((u32)(r_eax+0x4f0u), 0xffffffffu);
    /* 00414acb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414acd: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00414ad3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00414ad6: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00414adb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00414ade: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00414ae0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00414ae3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414ae5u); call_ind(t); }
    /* 00414ae5: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414ae9: jne 0x414af7 */ if (!fZ) goto L_00414af7;
L_00414aeb:; BB(0x00414aeb);
    /* 00414aeb: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00414af1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00414af4: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_00414af7:; BB(0x00414af7);
    /* 00414af7: cmp dword ptr [ebp - 0x58], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414afb: jne 0x414b79 */ if (!fZ) goto L_00414b79;
L_00414afd:; BB(0x00414afd);
    /* 00414afd: cmp dword ptr [ebp - 0x2c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b01: jne 0x414b17 */ if (!fZ) goto L_00414b17;
L_00414b03:; BB(0x00414b03);
    /* 00414b03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00414b08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00414b0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00414b0d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00414b10: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414b12u); call_ind(t); }
    /* 00414b12: jmp 0x414c59 */ goto L_00414c59;
L_00414b17:; BB(0x00414b17);
    /* 00414b17: cmp dword ptr [ebp - 0x2c], 0xcbe8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xcbe8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b1e: je 0x414b29 */ if (fZ) goto L_00414b29;
L_00414b20:; BB(0x00414b20);
    /* 00414b20: cmp dword ptr [ebp - 0x2c], 0xcb85 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0xcb85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b27: jne 0x414b39 */ if (!fZ) goto L_00414b39;
L_00414b29:; BB(0x00414b29);
    /* 00414b29: mov ecx, dword ptr [0x79032c] */ r_ecx = R32((u32)(0x79032cu));
    /* 00414b2f: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00414b32: mov byte ptr [edx + 0x190], 1 */ W8((u32)(r_edx+0x190u), 0x1u);
L_00414b39:; BB(0x00414b39);
    /* 00414b39: cmp dword ptr [ebp - 0x5c], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b3d: jne 0x414b59 */ if (!fZ) goto L_00414b59;
L_00414b3f:; BB(0x00414b3f);
    /* 00414b3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b41: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00414b44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414b45: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00414b48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414b49: mov edx, dword ptr [0x79032c] */ r_edx = R32((u32)(0x79032cu));
    /* 00414b4f: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00414b52: call 0x5cd7c0 */ r_esp -= 4; W32(r_esp, 0x414b57u); f_005cd7c0();
    /* 00414b57: jmp 0x414b74 */ goto L_00414b74;
L_00414b59:; BB(0x00414b59);
    /* 00414b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b5b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00414b5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414b5f: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00414b62: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414b63: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00414b66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414b67: mov eax, dword ptr [0x79032c] */ r_eax = R32((u32)(0x79032cu));
    /* 00414b6c: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00414b6f: call 0x5cd700 */ r_esp -= 4; W32(r_esp, 0x414b74u); f_005cd700();
L_00414b74:; BB(0x00414b74);
    /* 00414b74: jmp 0x414c59 */ goto L_00414c59;
L_00414b79:; BB(0x00414b79);
    /* 00414b79: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b7d: jne 0x414b93 */ if (!fZ) goto L_00414b93;
L_00414b7f:; BB(0x00414b7f);
    /* 00414b7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414b81: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00414b84: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00414b86: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00414b89: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00414b8c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414b8eu); call_ind(t); }
    /* 00414b8e: jmp 0x414c59 */ goto L_00414c59;
L_00414b93:; BB(0x00414b93);
    /* 00414b93: cmp dword ptr [ebp - 0x58], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414b97: je 0x414ba4 */ if (fZ) goto L_00414ba4;
L_00414b99:; BB(0x00414b99);
    /* 00414b99: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00414b9c: mov dword ptr [ebp - 0x1e8], ecx */ W32((u32)(r_ebp+0xfffffe18u), r_ecx);
    /* 00414ba2: jmp 0x414bd3 */ goto L_00414bd3;
L_00414ba4:; BB(0x00414ba4);
    /* 00414ba4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00414ba6: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00414ba9: mov eax, dword ptr [0x790324] */ r_eax = R32((u32)(0x790324u));
    /* 00414bae: mov ecx, dword ptr [eax + edx + 0x4f4] */ r_ecx = R32((u32)(r_eax+r_edx+0x4f4u));
    /* 00414bb5: mov dword ptr [ebp - 0x178], ecx */ W32((u32)(r_ebp+0xfffffe88u), r_ecx);
    /* 00414bbb: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 00414bc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414bc2: mov ecx, dword ptr [0x790324] */ r_ecx = R32((u32)(0x790324u));
    /* 00414bc8: call 0x419280 */ r_esp -= 4; W32(r_esp, 0x414bcdu); f_00419280();
    /* 00414bcd: mov dword ptr [ebp - 0x1e8], eax */ W32((u32)(r_ebp+0xfffffe18u), r_eax);
L_00414bd3:; BB(0x00414bd3);
    /* 00414bd3: mov eax, dword ptr [ebp - 0x1e8] */ r_eax = R32((u32)(r_ebp+0xfffffe18u));
    /* 00414bd9: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00414bdc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00414bdf: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00414be2: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00414be5: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00414be8: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 00414beb: fstp qword ptr [ebp - 0x40] */ W_F64((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00414bee: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00414bf1: fstp qword ptr [ebp - 0x38] */ W_F64((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00414bf4: cmp dword ptr [ebp - 0x50], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00414bf8: jne 0x414c1a */ if (!fZ) goto L_00414c1a;
L_00414bfa:; BB(0x00414bfa);
    /* 00414bfa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00414bfc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414bfe: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00414c03: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00414c06: mov edx, dword ptr [0x790320] */ r_edx = R32((u32)(0x790320u));
    /* 00414c0c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00414c0f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00414c11: mov ecx, eax */ r_ecx = r_eax;
    /* 00414c13: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00414c16: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414c18u); call_ind(t); }
    /* 00414c18: jmp 0x414c59 */ goto L_00414c59;
L_00414c1a:; BB(0x00414c1a);
    /* 00414c1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00414c1c: mov ecx, dword ptr [0x790320] */ r_ecx = R32((u32)(0x790320u));
    /* 00414c22: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00414c25: mov eax, dword ptr [0x790320] */ r_eax = R32((u32)(0x790320u));
    /* 00414c2a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00414c2d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00414c2f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00414c32: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x414c34u); call_ind(t); }
    /* 00414c34: mov cl, byte ptr [ebp - 0x51] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffafu))) & 0xffu);
    /* 00414c37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00414c38: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00414c3a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00414c40: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x414c45u); f_00637810();
    /* 00414c45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414c46: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00414c49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00414c4a: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 00414c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00414c4e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00414c54: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x414c59u); f_00639390();
L_00414c59:; BB(0x00414c59);
    /* 00414c59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00414c5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00414c5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00414c5d: ret 4 */ FN_RET(0x00413790); r_esp += 8; return;
}


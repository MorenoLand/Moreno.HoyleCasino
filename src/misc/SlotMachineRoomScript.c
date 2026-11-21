#include "protos.h"

void f_00534160(void) /* SlotMachineRoomScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00534160);
    /* 00534160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00534161: mov ebp, esp */ r_ebp = r_esp;
    /* 00534163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00534165: push 0x6a4a47 */ { u32 v = 0x6a4a47u; r_esp -= 4; W32(r_esp, v); }
    /* 0053416a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00534170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534171: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00534174: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00534179: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053417b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053417c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0053417f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00534185: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00534188: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053418b: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0053418e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00534191: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00534194: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00534197: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0053419a: cmp dword ptr [ebp - 0x20], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0053419e: ja 0x5342cc */ if ((!fC&&!fZ)) goto L_005342cc;
L_005341a4:; BB(0x005341a4);
    /* 005341a4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005341a7: jmp dword ptr [eax*4 + 0x5342f8] */ { u32 t = R32((u32)(r_eax*4+0x5342f8u)); switch (t) { case 0x5341aeu: goto L_005341ae; case 0x5341e3u: goto L_005341e3; case 0x5341f9u: goto L_005341f9; case 0x534227u: goto L_00534227; case 0x53429cu: goto L_0053429c; default: UNSUP(0x005341a7, "jump table entry is not a known target"); } }
L_005341ae:; BB(0x005341ae);
    /* 005341ae: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 005341b4: call 0x52c7e0 */ r_esp -= 4; W32(r_esp, 0x5341b9u); f_0052c7e0();
    /* 005341b9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005341bf: mov dl, byte ptr [ecx + 0x25] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x25u))) & 0xffu);
    /* 005341c2: mov byte ptr [ebp - 0x15], dl */ W8((u32)(r_ebp+0xffffffebu), (u8)r_edx);
    /* 005341c5: movzx eax, byte ptr [ebp - 0x15] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005341c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005341cb: je 0x5341de */ if (fZ) goto L_005341de;
L_005341cd:; BB(0x005341cd);
    /* 005341cd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005341cf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005341d1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005341d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005341d6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005341d9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005341dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5341deu); call_ind(t); }
L_005341de:; BB(0x005341de);
    /* 005341de: jmp 0x5342e7 */ goto L_005342e7;
L_005341e3:; BB(0x005341e3);
    /* 005341e3: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005341e5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005341e7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005341ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005341ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005341ef: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005341f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5341f4u); call_ind(t); }
    /* 005341f4: jmp 0x5342e7 */ goto L_005342e7;
L_005341f9:; BB(0x005341f9);
    /* 005341f9: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005341fb: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 00534201: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00534203: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 00534209: mov eax, dword ptr [edx + 0x2bc] */ r_eax = R32((u32)(r_edx+0x2bcu));
    /* 0053420f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x534211u); call_ind(t); }
    /* 00534211: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00534213: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00534215: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00534218: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0053421a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053421d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00534220: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x534222u); call_ind(t); }
    /* 00534222: jmp 0x5342e7 */ goto L_005342e7;
L_00534227:; BB(0x00534227);
    /* 00534227: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0053422d: call 0x5d0f00 */ r_esp -= 4; W32(r_esp, 0x534232u); f_005d0f00();
    /* 00534232: mov ecx, dword ptr [0x793390] */ r_ecx = R32((u32)(0x793390u));
    /* 00534238: call 0x52c7e0 */ r_esp -= 4; W32(r_esp, 0x53423du); f_0052c7e0();
    /* 0053423d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053423f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x534244u); f_00686d82();
    /* 00534244: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534247: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053424a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00534251: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00534255: je 0x534264 */ if (fZ) goto L_00534264;
L_00534257:; BB(0x00534257);
    /* 00534257: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053425a: call 0x530f30 */ r_esp -= 4; W32(r_esp, 0x53425fu); f_00530f30();
    /* 0053425f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00534262: jmp 0x53426b */ goto L_0053426b;
L_00534264:; BB(0x00534264);
    /* 00534264: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0053426b:; BB(0x0053426b);
    /* 0053426b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053426e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00534271: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00534278: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0053427b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053427c: mov eax, dword ptr [0x793388] */ r_eax = R32((u32)(0x793388u));
    /* 00534281: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00534284: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x534289u); f_005fc420();
    /* 00534289: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053428b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0053428d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00534290: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00534292: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00534295: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00534298: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x53429au); call_ind(t); }
    /* 0053429a: jmp 0x5342e7 */ goto L_005342e7;
L_0053429c:; BB(0x0053429c);
    /* 0053429c: mov ecx, dword ptr [0x793388] */ r_ecx = R32((u32)(0x793388u));
    /* 005342a2: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005342a6: je 0x5342b9 */ if (fZ) goto L_005342b9;
L_005342a8:; BB(0x005342a8);
    /* 005342a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005342aa: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005342ac: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005342af: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005342b1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005342b4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005342b7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5342b9u); call_ind(t); }
L_005342b9:; BB(0x005342b9);
    /* 005342b9: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005342bb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005342bd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005342c0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005342c2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005342c5: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005342c8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5342cau); call_ind(t); }
    /* 005342ca: jmp 0x5342e7 */ goto L_005342e7;
L_005342cc:; BB(0x005342cc);
    /* 005342cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005342ce: jne 0x5342e7 */ if (!fZ) goto L_005342e7;
L_005342d0:; BB(0x005342d0);
    /* 005342d0: push 0x173 */ { u32 v = 0x173u; r_esp -= 4; W32(r_esp, v); }
    /* 005342d5: push 0x6c4364 */ { u32 v = 0x6c4364u; r_esp -= 4; W32(r_esp, v); }
    /* 005342da: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005342df: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5342e4u); f_005e9f20();
    /* 005342e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005342e7:; BB(0x005342e7);
    /* 005342e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005342ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005342f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005342f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005342f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005342f5: ret  */ FN_RET(0x00534160); r_esp += 4; return;
}


#include "protos.h"

void f_00588300(void) /* sub_588300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00588300);
    /* 00588300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588301: mov ebp, esp */ r_ebp = r_esp;
    /* 00588303: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00588306: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00588309: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058830c: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x588311u); f_005f85d0();
    /* 00588311: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588318: jmp 0x588323 */ goto L_00588323;
L_0058831a:; BB(0x0058831a);
    /* 0058831a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058831d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588320: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00588323:; BB(0x00588323);
    /* 00588323: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588327: jge 0x58834c */ if ((fS==fO)) goto L_0058834c;
L_00588329:; BB(0x00588329);
    /* 00588329: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058832c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058832f: mov eax, dword ptr [edx + ecx*4 + 0x2fc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x2fcu));
    /* 00588336: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588339: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058833c: mov ecx, dword ptr [edx + ecx*4 + 0x2fc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x2fcu));
    /* 00588343: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00588345: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00588348: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x58834au); call_ind(t); }
    /* 0058834a: jmp 0x58831a */ goto L_0058831a;
L_0058834c:; BB(0x0058834c);
    /* 0058834c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588353: jmp 0x58835e */ goto L_0058835e;
L_00588355:; BB(0x00588355);
    /* 00588355: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588358: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058835b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0058835e:; BB(0x0058835e);
    /* 0058835e: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588362: jge 0x588387 */ if ((fS==fO)) goto L_00588387;
L_00588364:; BB(0x00588364);
    /* 00588364: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588367: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058836a: mov eax, dword ptr [edx + ecx*4 + 0x3b78] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3b78u));
    /* 00588371: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588374: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588377: mov ecx, dword ptr [edx + ecx*4 + 0x3b78] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3b78u));
    /* 0058837e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00588380: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00588383: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x588385u); call_ind(t); }
    /* 00588385: jmp 0x588355 */ goto L_00588355;
L_00588387:; BB(0x00588387);
    /* 00588387: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058838a: mov ecx, dword ptr [eax + 0x3b6c] */ r_ecx = R32((u32)(r_eax+0x3b6cu));
    /* 00588390: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588393: mov eax, dword ptr [edx + 0x3b6c] */ r_eax = R32((u32)(r_edx+0x3b6cu));
    /* 00588399: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058839b: mov ecx, eax */ r_ecx = r_eax;
    /* 0058839d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005883a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5883a2u); call_ind(t); }
    /* 005883a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883a5: mov edx, dword ptr [ecx + 0x310] */ r_edx = R32((u32)(r_ecx+0x310u));
    /* 005883ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883ae: mov ecx, dword ptr [eax + 0x310] */ r_ecx = R32((u32)(r_eax+0x310u));
    /* 005883b4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005883b6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005883b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5883bbu); call_ind(t); }
    /* 005883bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883be: mov edx, dword ptr [ecx + 0x314] */ r_edx = R32((u32)(r_ecx+0x314u));
    /* 005883c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883c7: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 005883cd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005883cf: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005883d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5883d4u); call_ind(t); }
    /* 005883d4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883d7: mov edx, dword ptr [ecx + 0x3b74] */ r_edx = R32((u32)(r_ecx+0x3b74u));
    /* 005883dd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883e0: mov ecx, dword ptr [eax + 0x3b74] */ r_ecx = R32((u32)(r_eax+0x3b74u));
    /* 005883e6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005883e8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005883eb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5883edu); call_ind(t); }
    /* 005883ed: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883f0: mov edx, dword ptr [ecx + 0x3b8c] */ r_edx = R32((u32)(r_ecx+0x3b8cu));
    /* 005883f6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005883f9: mov ecx, dword ptr [eax + 0x3b8c] */ r_ecx = R32((u32)(r_eax+0x3b8cu));
    /* 005883ff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588401: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00588404: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588406u); call_ind(t); }
    /* 00588406: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588409: mov edx, dword ptr [ecx + 0x3b84] */ r_edx = R32((u32)(r_ecx+0x3b84u));
    /* 0058840f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588412: mov ecx, dword ptr [eax + 0x3b84] */ r_ecx = R32((u32)(r_eax+0x3b84u));
    /* 00588418: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058841a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058841d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58841fu); call_ind(t); }
    /* 0058841f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588422: mov edx, dword ptr [ecx + 0x3b88] */ r_edx = R32((u32)(r_ecx+0x3b88u));
    /* 00588428: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058842b: mov ecx, dword ptr [eax + 0x3b88] */ r_ecx = R32((u32)(r_eax+0x3b88u));
    /* 00588431: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588433: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00588436: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588438u); call_ind(t); }
    /* 00588438: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058843b: mov edx, dword ptr [ecx + 0x3b90] */ r_edx = R32((u32)(r_ecx+0x3b90u));
    /* 00588441: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588444: mov ecx, dword ptr [eax + 0x3b90] */ r_ecx = R32((u32)(r_eax+0x3b90u));
    /* 0058844a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058844c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0058844f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588451u); call_ind(t); }
    /* 00588451: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588454: mov edx, dword ptr [ecx + 0x3b94] */ r_edx = R32((u32)(r_ecx+0x3b94u));
    /* 0058845a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058845d: mov ecx, dword ptr [eax + 0x3b94] */ r_ecx = R32((u32)(r_eax+0x3b94u));
    /* 00588463: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588465: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00588468: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x58846au); call_ind(t); }
    /* 0058846a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0058846d: mov edx, dword ptr [ecx + 0x320] */ r_edx = R32((u32)(r_ecx+0x320u));
    /* 00588473: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588476: mov ecx, dword ptr [eax + 0x320] */ r_ecx = R32((u32)(r_eax+0x320u));
    /* 0058847c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0058847e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00588481: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588483u); call_ind(t); }
    /* 00588483: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058848a: jmp 0x588495 */ goto L_00588495;
L_0058848c:; BB(0x0058848c);
    /* 0058848c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058848f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00588492: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00588495:; BB(0x00588495);
    /* 00588495: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588499: jge 0x5884c0 */ if ((fS==fO)) goto L_005884c0;
L_0058849b:; BB(0x0058849b);
    /* 0058849b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058849e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005884a1: mov ecx, dword ptr [eax + edx*4 + 0x318] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 005884a8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005884ab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005884ae: mov edx, dword ptr [eax + edx*4 + 0x318] */ r_edx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 005884b5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005884b7: mov ecx, edx */ r_ecx = r_edx;
    /* 005884b9: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005884bc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5884beu); call_ind(t); }
    /* 005884be: jmp 0x58848c */ goto L_0058848c;
L_005884c0:; BB(0x005884c0);
    /* 005884c0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005884c7: jmp 0x5884d2 */ goto L_005884d2;
L_005884c9:; BB(0x005884c9);
    /* 005884c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005884cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005884cf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005884d2:; BB(0x005884d2);
    /* 005884d2: cmp dword ptr [ebp - 4], 0x50 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005884d6: jge 0x5884fb */ if ((fS==fO)) goto L_005884fb;
L_005884d8:; BB(0x005884d8);
    /* 005884d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005884db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005884de: mov eax, dword ptr [edx + ecx*4 + 0x1bc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 005884e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005884e8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005884eb: mov ecx, dword ptr [edx + ecx*4 + 0x1bc] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x1bcu));
    /* 005884f2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005884f4: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005884f7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5884f9u); call_ind(t); }
    /* 005884f9: jmp 0x5884c9 */ goto L_005884c9;
L_005884fb:; BB(0x005884fb);
    /* 005884fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005884fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005884fe: ret  */ FN_RET(0x00588300); r_esp += 4; return;
}

void f_005887c0(void) /* sub_5887C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005887c0);
    /* 005887c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005887c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005887c3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005887c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005887c9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005887cc: mov dword ptr [eax + 0x3c04], 0 */ W32((u32)(r_eax+0x3c04u), 0x0u);
    /* 005887d6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005887d9: mov dword ptr [ecx + 0x3c08], 0 */ W32((u32)(r_ecx+0x3c08u), 0x0u);
    /* 005887e3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005887ea: jmp 0x5887f5 */ goto L_005887f5;
L_005887ec:; BB(0x005887ec);
    /* 005887ec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005887ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005887f2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005887f5:; BB(0x005887f5);
    /* 005887f5: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005887f9: jge 0x58883d */ if ((fS==fO)) goto L_0058883d;
L_005887fb:; BB(0x005887fb);
    /* 005887fb: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00588800: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588803: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00588806: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588809: lea edx, [ecx + eax + 0x3ba4] */ r_edx = (u32)(r_ecx+r_eax+0x3ba4u);
    /* 00588810: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00588811: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x588816u); f_00686d8e();
    /* 00588816: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588819: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058881c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058881f: mov dword ptr [ecx + eax*4 + 0x3be4], 0 */ W32((u32)(r_ecx+r_eax*4+0x3be4u), 0x0u);
    /* 0058882a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0058882d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588830: mov dword ptr [eax + edx*4 + 0x3bf4], 0 */ W32((u32)(r_eax+r_edx*4+0x3bf4u), 0x0u);
    /* 0058883b: jmp 0x5887ec */ goto L_005887ec;
L_0058883d:; BB(0x0058883d);
    /* 0058883d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588844: jmp 0x58884f */ goto L_0058884f;
L_00588846:; BB(0x00588846);
    /* 00588846: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588849: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058884c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0058884f:; BB(0x0058884f);
    /* 0058884f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00588855: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00588857: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0058885d: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 00588863: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x588865u); call_ind(t); }
    /* 00588865: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588868: jge 0x58895d */ if ((fS==fO)) goto L_0058895d;
L_0058886e:; BB(0x0058886e);
    /* 0058886e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588872: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x588877u); f_005dcb00();
    /* 00588877: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058887a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0058887d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588880: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x588885u); f_0063aac0();
    /* 00588885: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00588887: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0058888a: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058888e: je 0x5888ac */ if (fZ) goto L_005888ac;
L_00588890:; BB(0x00588890);
    /* 00588890: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00588893: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x588898u); f_0063aac0();
    /* 00588898: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0058889a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0058889d: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005888a1: je 0x5888ac */ if (fZ) goto L_005888ac;
L_005888a3:; BB(0x005888a3);
    /* 005888a3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005888aa: jmp 0x5888b3 */ goto L_005888b3;
L_005888ac:; BB(0x005888ac);
    /* 005888ac: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_005888b3:; BB(0x005888b3);
    /* 005888b3: movzx eax, byte ptr [ebp - 0x28] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 005888b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005888b9: je 0x588958 */ if (fZ) goto L_00588958;
L_005888bf:; BB(0x005888bf);
    /* 005888bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005888c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005888c3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5888c8u); f_005dcb00();
    /* 005888c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005888cb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005888ce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005888d1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5888d6u); f_0063aac0();
    /* 005888d6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005888d9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005888dc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005888df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005888e0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005888e3: mov ecx, dword ptr [eax + 0x3c04] */ r_ecx = R32((u32)(r_eax+0x3c04u));
    /* 005888e9: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005888ec: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005888ef: lea eax, [edx + ecx + 0x3ba4] */ r_eax = (u32)(r_edx+r_ecx+0x3ba4u);
    /* 005888f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005888f7: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5888fcu); f_00686ec0();
    /* 005888fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005888ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588901: je 0x588958 */ if (fZ) goto L_00588958;
L_00588903:; BB(0x00588903);
    /* 00588903: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588906: mov edx, dword ptr [ecx + 0x3c04] */ r_edx = R32((u32)(r_ecx+0x3c04u));
    /* 0058890c: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0058890f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588912: lea ecx, [eax + edx + 0x3ba4] */ r_ecx = (u32)(r_eax+r_edx+0x3ba4u);
    /* 00588919: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0058891c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058891f: mov eax, dword ptr [edx + 0x3c04] */ r_eax = R32((u32)(r_edx+0x3c04u));
    /* 00588925: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588928: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058892b: mov dword ptr [ecx + 0x3c04], eax */ W32((u32)(r_ecx+0x3c04u), r_eax);
    /* 00588931: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588934: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00588935: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x58893au); f_005dcb00();
    /* 0058893a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058893d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00588940: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00588943: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x588948u); f_0063aac0();
    /* 00588948: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058894b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058894c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058894f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588950: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x588955u); f_00686d8e();
    /* 00588955: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00588958:; BB(0x00588958);
    /* 00588958: jmp 0x588846 */ goto L_00588846;
L_0058895d:; BB(0x0058895d);
    /* 0058895d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588964: jmp 0x58896f */ goto L_0058896f;
L_00588966:; BB(0x00588966);
    /* 00588966: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588969: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058896c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0058896f:; BB(0x0058896f);
    /* 0058896f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588972: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588975: cmp eax, dword ptr [edx + 0x3c04] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x3c04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058897b: jge 0x5889b1 */ if ((fS==fO)) goto L_005889b1;
L_0058897d:; BB(0x0058897d);
    /* 0058897d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058897f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588982: imul ecx, ecx, 0xe10 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xe10u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588988: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058898b: lea eax, [edx + ecx + 0x328] */ r_eax = (u32)(r_edx+r_ecx+0x328u);
    /* 00588992: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588993: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588996: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00588999: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058899c: lea eax, [edx + ecx + 0x3ba4] */ r_eax = (u32)(r_edx+r_ecx+0x3ba4u);
    /* 005889a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005889a4: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005889aa: call 0x5e2b90 */ r_esp -= 4; W32(r_esp, 0x5889afu); f_005e2b90();
    /* 005889af: jmp 0x588966 */ goto L_00588966;
L_005889b1:; BB(0x005889b1);
    /* 005889b1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005889b8: jmp 0x5889c3 */ goto L_005889c3;
L_005889ba:; BB(0x005889ba);
    /* 005889ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005889bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005889c0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005889c3:; BB(0x005889c3);
    /* 005889c3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005889c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005889c9: cmp eax, dword ptr [edx + 0x3c04] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x3c04u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005889cf: jge 0x588a75 */ if ((fS==fO)) goto L_00588a75;
L_005889d5:; BB(0x005889d5);
    /* 005889d5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005889dc: jmp 0x5889e7 */ goto L_005889e7;
L_005889de:; BB(0x005889de);
    /* 005889de: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005889e1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005889e4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005889e7:; BB(0x005889e7);
    /* 005889e7: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005889eb: jge 0x588a30 */ if ((fS==fO)) goto L_00588a30;
L_005889ed:; BB(0x005889ed);
    /* 005889ed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005889f0: imul edx, edx, 0xe10 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xe10u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005889f6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005889f9: lea ecx, [eax + edx + 0x328] */ r_ecx = (u32)(r_eax+r_edx+0x328u);
    /* 00588a00: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00588a03: imul edx, edx, 0x24 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x24u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00588a06: cmp dword ptr [ecx + edx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588a0b: je 0x588a2c */ if (fZ) goto L_00588a2c;
L_00588a0d:; BB(0x00588a0d);
    /* 00588a0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588a10: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588a13: mov edx, dword ptr [ecx + eax*4 + 0x3bf4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3bf4u));
    /* 00588a1a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00588a1d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588a20: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588a23: mov dword ptr [ecx + eax*4 + 0x3bf4], edx */ W32((u32)(r_ecx+r_eax*4+0x3bf4u), r_edx);
    /* 00588a2a: jmp 0x588a2e */ goto L_00588a2e;
L_00588a2c:; BB(0x00588a2c);
    /* 00588a2c: jmp 0x588a30 */ goto L_00588a30;
L_00588a2e:; BB(0x00588a2e);
    /* 00588a2e: jmp 0x5889de */ goto L_005889de;
L_00588a30:; BB(0x00588a30);
    /* 00588a30: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588a33: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588a36: cmp dword ptr [eax + edx*4 + 0x3bf4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x3bf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588a3e: je 0x588a5f */ if (fZ) goto L_00588a5f;
L_00588a40:; BB(0x00588a40);
    /* 00588a40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588a43: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588a46: mov eax, dword ptr [edx + ecx*4 + 0x3bf4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x3bf4u));
    /* 00588a4d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00588a50: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588a53: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588a56: mov dword ptr [edx + ecx*4 + 0x3be4], eax */ W32((u32)(r_edx+r_ecx*4+0x3be4u), r_eax);
    /* 00588a5d: jmp 0x588a70 */ goto L_00588a70;
L_00588a5f:; BB(0x00588a5f);
    /* 00588a5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00588a62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588a65: mov dword ptr [ecx + eax*4 + 0x3bf4], 1 */ W32((u32)(r_ecx+r_eax*4+0x3bf4u), 0x1u);
L_00588a70:; BB(0x00588a70);
    /* 00588a70: jmp 0x5889ba */ goto L_005889ba;
L_00588a75:; BB(0x00588a75);
    /* 00588a75: mov esp, ebp */ r_esp = r_ebp;
    /* 00588a77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00588a78: ret  */ FN_RET(0x005887c0); r_esp += 4; return;
}

void f_00588c30(void) /* sub_588C30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00588c30);
    /* 00588c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00588c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00588c33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00588c35: push 0x6a6e8a */ { u32 v = 0x6a6e8au; r_esp -= 4; W32(r_esp, v); }
    /* 00588c3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00588c40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588c41: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00588c44: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00588c49: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00588c4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588c4c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00588c4f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00588c55: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00588c58: mov dword ptr [ebp - 0x18], 0x8f */ W32((u32)(r_ebp+0xffffffe8u), 0x8fu);
    /* 00588c5f: mov dword ptr [ebp - 0x14], 0xf3 */ W32((u32)(r_ebp+0xffffffecu), 0xf3u);
    /* 00588c66: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00588c6d: jmp 0x588c78 */ goto L_00588c78;
L_00588c6f:; BB(0x00588c6f);
    /* 00588c6f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588c72: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00588c75: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00588c78:; BB(0x00588c78);
    /* 00588c78: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00588c7c: jge 0x588ed9 */ if ((fS==fO)) goto L_00588ed9;
L_00588c82:; BB(0x00588c82);
    /* 00588c82: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588c85: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588c88: cmp dword ptr [edx + ecx*4 + 0x318], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x318u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588c90: jne 0x588ed4 */ if (!fZ) goto L_00588ed4;
L_00588c96:; BB(0x00588c96);
    /* 00588c96: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00588c9b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x588ca0u); f_00686d82();
    /* 00588ca0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588ca3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00588ca6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00588cad: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588cb1: je 0x588cc4 */ if (fZ) goto L_00588cc4;
L_00588cb3:; BB(0x00588cb3);
    /* 00588cb3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00588cb7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00588cba: call 0x58d750 */ r_esp -= 4; W32(r_esp, 0x588cbfu); f_0058d750();
    /* 00588cbf: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00588cc2: jmp 0x588ccb */ goto L_00588ccb;
L_00588cc4:; BB(0x00588cc4);
    /* 00588cc4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00588ccb:; BB(0x00588ccb);
    /* 00588ccb: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00588cce: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00588cd1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00588cd8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588cdb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588cde: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00588ce1: mov dword ptr [eax + edx*4 + 0x318], ecx */ W32((u32)(r_eax+r_edx*4+0x318u), r_ecx);
    /* 00588ce8: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588ceb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588cee: mov ecx, dword ptr [eax + edx*4 + 0x318] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 00588cf5: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588cf8: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00588cfb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588cfe: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d01: mov edx, dword ptr [ecx + eax*4 + 0x318] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x318u));
    /* 00588d08: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d0b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d0e: mov ecx, dword ptr [ecx + eax*4 + 0x318] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x318u));
    /* 00588d15: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588d17: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00588d1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588d1cu); call_ind(t); }
    /* 00588d1c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588d1e: push 0x30dfbe */ { u32 v = 0x30dfbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00588d23: push 0x30dfbd */ { u32 v = 0x30dfbdu; r_esp -= 4; W32(r_esp, v); }
    /* 00588d28: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d2b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d2e: mov ecx, dword ptr [edx + ecx*4 + 0x318] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x318u));
    /* 00588d35: call 0x584ed0 */ r_esp -= 4; W32(r_esp, 0x588d3au); f_00584ed0();
    /* 00588d3a: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00588d3c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d3f: mov ecx, dword ptr [ebp + eax*4 - 0x18] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffe8u));
    /* 00588d43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00588d44: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d47: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d4a: mov ecx, dword ptr [eax + edx*4 + 0x318] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 00588d51: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d54: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d57: mov edx, dword ptr [eax + edx*4 + 0x318] */ r_edx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 00588d5e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00588d60: mov ecx, edx */ r_ecx = r_edx;
    /* 00588d62: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00588d65: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x588d67u); call_ind(t); }
    /* 00588d67: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00588d69: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00588d6b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d6e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d71: mov edx, dword ptr [ecx + eax*4 + 0x318] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x318u));
    /* 00588d78: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d7b: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d7e: mov ecx, dword ptr [ecx + eax*4 + 0x318] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x318u));
    /* 00588d85: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588d87: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00588d8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588d8cu); call_ind(t); }
    /* 00588d8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00588d8e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d91: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588d94: mov eax, dword ptr [edx + ecx*4 + 0x318] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x318u));
    /* 00588d9b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588d9e: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588da1: mov ecx, dword ptr [edx + ecx*4 + 0x318] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x318u));
    /* 00588da8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00588daa: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00588dad: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x588dafu); call_ind(t); }
    /* 00588daf: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588db3: jne 0x588e1b */ if (!fZ) goto L_00588e1b;
L_00588db5:; BB(0x00588db5);
    /* 00588db5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00588dba: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588dbd: mov ecx, dword ptr [eax + 0x318] */ r_ecx = R32((u32)(r_eax+0x318u));
    /* 00588dc3: call 0x58d840 */ r_esp -= 4; W32(r_esp, 0x588dc8u); f_0058d840();
    /* 00588dc8: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00588dca: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588dcd: mov edx, dword ptr [ecx + 0x318] */ r_edx = R32((u32)(r_ecx+0x318u));
    /* 00588dd3: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 00588dd9: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x588ddeu); f_005ecc60();
    /* 00588dde: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 00588de0: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588de3: mov ecx, dword ptr [eax + 0x318] */ r_ecx = R32((u32)(r_eax+0x318u));
    /* 00588de9: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 00588def: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x588df4u); f_005eccb0();
    /* 00588df4: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588df7: mov eax, dword ptr [edx + 0x3c08] */ r_eax = R32((u32)(r_edx+0x3c08u));
    /* 00588dfd: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00588e00: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e03: lea edx, [ecx + eax + 0x3ba4] */ r_edx = (u32)(r_ecx+r_eax+0x3ba4u);
    /* 00588e0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00588e0b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e0e: mov ecx, dword ptr [eax + 0x318] */ r_ecx = R32((u32)(r_eax+0x318u));
    /* 00588e14: call 0x58d840 */ r_esp -= 4; W32(r_esp, 0x588e19u); f_0058d840();
    /* 00588e19: jmp 0x588e7d */ goto L_00588e7d;
L_00588e1b:; BB(0x00588e1b);
    /* 00588e1b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00588e20: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e23: mov ecx, dword ptr [ecx + 0x31c] */ r_ecx = R32((u32)(r_ecx+0x31cu));
    /* 00588e29: call 0x58d840 */ r_esp -= 4; W32(r_esp, 0x588e2eu); f_0058d840();
    /* 00588e2e: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00588e30: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e33: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 00588e39: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 00588e3f: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x588e44u); f_005ecc60();
    /* 00588e44: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00588e46: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e49: mov edx, dword ptr [ecx + 0x31c] */ r_edx = R32((u32)(r_ecx+0x31cu));
    /* 00588e4f: mov ecx, dword ptr [edx + 0x88] */ r_ecx = R32((u32)(r_edx+0x88u));
    /* 00588e55: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x588e5au); f_005eccb0();
    /* 00588e5a: push 0x6ccdd0 */ { u32 v = 0x6ccdd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588e5f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e62: mov ecx, dword ptr [eax + 0x31c] */ r_ecx = R32((u32)(r_eax+0x31cu));
    /* 00588e68: call 0x58d840 */ r_esp -= 4; W32(r_esp, 0x588e6du); f_0058d840();
    /* 00588e6d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00588e6f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e72: mov ecx, dword ptr [ecx + 0x31c] */ r_ecx = R32((u32)(r_ecx+0x31cu));
    /* 00588e78: call 0x58dc30 */ r_esp -= 4; W32(r_esp, 0x588e7du); f_0058dc30();
L_00588e7d:; BB(0x00588e7d);
    /* 00588e7d: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588e81: jne 0x588ec2 */ if (!fZ) goto L_00588ec2;
L_00588e83:; BB(0x00588e83);
    /* 00588e83: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588e86: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e89: mov ecx, dword ptr [eax + edx*4 + 0x318] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 00588e90: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588e93: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588e96: mov edx, dword ptr [eax + edx*4 + 0x318] */ r_edx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 00588e9d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00588e9f: mov ecx, edx */ r_ecx = r_edx;
    /* 00588ea1: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00588ea7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x588ea9u); call_ind(t); }
    /* 00588ea9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588eac: jne 0x588ec2 */ if (!fZ) goto L_00588ec2;
L_00588eae:; BB(0x00588eae);
    /* 00588eae: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588eb1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588eb4: mov ecx, dword ptr [ecx + eax*4 + 0x318] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x318u));
    /* 00588ebb: call 0x58def0 */ r_esp -= 4; W32(r_esp, 0x588ec0u); f_0058def0();
    /* 00588ec0: jmp 0x588ed4 */ goto L_00588ed4;
L_00588ec2:; BB(0x00588ec2);
    /* 00588ec2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00588ec5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588ec8: mov ecx, dword ptr [eax + edx*4 + 0x318] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x318u));
    /* 00588ecf: call 0x58dce0 */ r_esp -= 4; W32(r_esp, 0x588ed4u); f_0058dce0();
L_00588ed4:; BB(0x00588ed4);
    /* 00588ed4: jmp 0x588c6f */ goto L_00588c6f;
L_00588ed9:; BB(0x00588ed9);
    /* 00588ed9: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588edc: cmp dword ptr [ecx + 0x314], 0 */ {  u32 a = R32((u32)(r_ecx+0x314u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588ee3: jne 0x588f2f */ if (!fZ) goto L_00588f2f;
L_00588ee5:; BB(0x00588ee5);
    /* 00588ee5: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00588eea: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x588eefu); f_00686d82();
    /* 00588eef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588ef2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00588ef5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00588efc: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00588f00: je 0x588f0f */ if (fZ) goto L_00588f0f;
L_00588f02:; BB(0x00588f02);
    /* 00588f02: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00588f05: call 0x58df60 */ r_esp -= 4; W32(r_esp, 0x588f0au); f_0058df60();
    /* 00588f0a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00588f0d: jmp 0x588f16 */ goto L_00588f16;
L_00588f0f:; BB(0x00588f0f);
    /* 00588f0f: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00588f16:; BB(0x00588f16);
    /* 00588f16: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00588f19: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00588f1c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00588f23: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f26: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00588f29: mov dword ptr [eax + 0x314], ecx */ W32((u32)(r_eax+0x314u), r_ecx);
L_00588f2f:; BB(0x00588f2f);
    /* 00588f2f: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f32: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 00588f38: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f3b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00588f3e: push 0x30d4cf */ { u32 v = 0x30d4cfu; r_esp -= 4; W32(r_esp, v); }
    /* 00588f43: push 0x30d4cc */ { u32 v = 0x30d4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00588f48: push 0x30d4cb */ { u32 v = 0x30d4cbu; r_esp -= 4; W32(r_esp, v); }
    /* 00588f4d: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f50: mov ecx, dword ptr [edx + 0x314] */ r_ecx = R32((u32)(r_edx+0x314u));
    /* 00588f56: call 0x584ed0 */ r_esp -= 4; W32(r_esp, 0x588f5bu); f_00584ed0();
    /* 00588f5b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f5e: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 00588f64: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f67: mov eax, dword ptr [edx + 0x314] */ r_eax = R32((u32)(r_edx+0x314u));
    /* 00588f6d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00588f6f: mov ecx, eax */ r_ecx = r_eax;
    /* 00588f71: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00588f74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588f76u); call_ind(t); }
    /* 00588f76: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00588f78: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00588f7d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f80: mov edx, dword ptr [ecx + 0x314] */ r_edx = R32((u32)(r_ecx+0x314u));
    /* 00588f86: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588f89: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 00588f8f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588f91: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00588f94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588f96u); call_ind(t); }
    /* 00588f96: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00588f9b: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00588f9d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588fa0: mov edx, dword ptr [ecx + 0x314] */ r_edx = R32((u32)(r_ecx+0x314u));
    /* 00588fa6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588fa9: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 00588faf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588fb1: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 00588fb4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588fb6u); call_ind(t); }
    /* 00588fb6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00588fb8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588fbb: mov edx, dword ptr [ecx + 0x314] */ r_edx = R32((u32)(r_ecx+0x314u));
    /* 00588fc1: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00588fc4: mov ecx, dword ptr [eax + 0x314] */ r_ecx = R32((u32)(r_eax+0x314u));
    /* 00588fca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00588fcc: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00588fcf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x588fd1u); call_ind(t); }
    /* 00588fd1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588fd4: mov ecx, dword ptr [ecx + 0x314] */ r_ecx = R32((u32)(r_ecx+0x314u));
    /* 00588fda: call 0x585010 */ r_esp -= 4; W32(r_esp, 0x588fdfu); f_00585010();
    /* 00588fdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00588fe1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00588fe4: mov ecx, dword ptr [edx + 0x314] */ r_ecx = R32((u32)(r_edx+0x314u));
    /* 00588fea: call 0x5f62f0 */ r_esp -= 4; W32(r_esp, 0x588fefu); f_005f62f0();
    /* 00588fef: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 00588ff4: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x588ff9u); f_00686d82();
    /* 00588ff9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00588ffc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00588fff: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00589006: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058900a: je 0x58901d */ if (fZ) goto L_0058901d;
L_0058900c:; BB(0x0058900c);
    /* 0058900c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0058900f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00589010: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00589013: call 0x58ec60 */ r_esp -= 4; W32(r_esp, 0x589018u); f_0058ec60();
    /* 00589018: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0058901b: jmp 0x589024 */ goto L_00589024;
L_0058901d:; BB(0x0058901d);
    /* 0058901d: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00589024:; BB(0x00589024);
    /* 00589024: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00589027: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0058902a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00589031: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00589034: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00589037: mov dword ptr [edx + 0x324], eax */ W32((u32)(r_edx+0x324u), r_eax);
    /* 0058903d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00589040: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00589047: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00589048: mov esp, ebp */ r_esp = r_ebp;
    /* 0058904a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058904b: ret  */ FN_RET(0x00588c30); r_esp += 4; return;
}


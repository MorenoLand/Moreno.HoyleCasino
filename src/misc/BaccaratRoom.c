#include "protos.h"

void f_00405200(void) /* BaccaratRoom::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405200);
    /* 00405200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405201: mov ebp, esp */ r_ebp = r_esp;
    /* 00405203: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405205: push 0x69d768 */ { u32 v = 0x69d768u; r_esp -= 4; W32(r_esp, v); }
    /* 0040520a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00405210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405211: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405212: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00405217: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405219: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040521a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040521d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00405223: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00405226: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405229: call 0x5d7b60 */ r_esp -= 4; W32(r_esp, 0x40522eu); f_005d7b60();
    /* 0040522e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00405235: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405238: mov dword ptr [eax], 0x6b2c5c */ W32((u32)(r_eax), 0x6b2c5cu);
    /* 0040523e: push 0x311280 */ { u32 v = 0x311280u; r_esp -= 4; W32(r_esp, v); }
    /* 00405243: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405246: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x40524bu); f_005f1ad0();
    /* 0040524b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040524e: mov dword ptr [0x7902ec], ecx */ W32((u32)(0x7902ecu), r_ecx);
    /* 00405254: mov dword ptr [0x7902f0], 0 */ W32((u32)(0x7902f0u), 0x0u);
    /* 0040525e: mov dword ptr [0x7902f4], 0 */ W32((u32)(0x7902f4u), 0x0u);
    /* 00405268: mov dword ptr [0x7902f8], 0 */ W32((u32)(0x7902f8u), 0x0u);
    /* 00405272: mov dword ptr [0x7902fc], 0 */ W32((u32)(0x7902fcu), 0x0u);
    /* 0040527c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040527f: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 00405289: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00405290: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405293: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405296: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040529d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040529e: mov esp, ebp */ r_esp = r_ebp;
    /* 004052a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004052a1: ret  */ FN_RET(0x00405200); r_esp += 4; return;
}

void f_004052b0(void) /* BaccaratRoom::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004052b0);
    /* 004052b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004052b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004052b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004052b5: push 0x69d78b */ { u32 v = 0x69d78bu; r_esp -= 4; W32(r_esp, v); }
    /* 004052ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004052c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004052c1: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004052c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004052c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004052cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004052cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004052cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004052d5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004052d8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004052db: mov dword ptr [eax], 0x6b2c5c */ W32((u32)(r_eax), 0x6b2c5cu);
    /* 004052e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004052e8: mov dword ptr [0x7902ec], 0 */ W32((u32)(0x7902ecu), 0x0u);
    /* 004052f2: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004052f8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004052fb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004052fe: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00405301: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405305: je 0x40531a */ if (fZ) goto L_0040531a;
L_00405307:; BB(0x00405307);
    /* 00405307: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405309: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040530c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040530e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405311: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405313: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405315u); call_ind(t); }
    /* 00405315: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00405318: jmp 0x405321 */ goto L_00405321;
L_0040531a:; BB(0x0040531a);
    /* 0040531a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00405321:; BB(0x00405321);
    /* 00405321: mov dword ptr [0x7902f0], 0 */ W32((u32)(0x7902f0u), 0x0u);
    /* 0040532b: mov ecx, dword ptr [0x7902f4] */ r_ecx = R32((u32)(0x7902f4u));
    /* 00405331: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00405334: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00405337: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040533a: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040533e: je 0x405353 */ if (fZ) goto L_00405353;
L_00405340:; BB(0x00405340);
    /* 00405340: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405342: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00405345: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405347: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040534a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0040534c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40534eu); call_ind(t); }
    /* 0040534e: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00405351: jmp 0x40535a */ goto L_0040535a;
L_00405353:; BB(0x00405353);
    /* 00405353: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0040535a:; BB(0x0040535a);
    /* 0040535a: mov dword ptr [0x7902f4], 0 */ W32((u32)(0x7902f4u), 0x0u);
    /* 00405364: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 0040536a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040536d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00405370: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00405373: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405377: je 0x40538c */ if (fZ) goto L_0040538c;
L_00405379:; BB(0x00405379);
    /* 00405379: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040537b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040537e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405380: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00405383: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405385: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405387u); call_ind(t); }
    /* 00405387: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0040538a: jmp 0x405393 */ goto L_00405393;
L_0040538c:; BB(0x0040538c);
    /* 0040538c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00405393:; BB(0x00405393);
    /* 00405393: mov dword ptr [0x7902f8], 0 */ W32((u32)(0x7902f8u), 0x0u);
    /* 0040539d: mov ecx, dword ptr [0x7902fc] */ r_ecx = R32((u32)(0x7902fcu));
    /* 004053a3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004053a6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004053a9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004053ac: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004053b0: je 0x4053c5 */ if (fZ) goto L_004053c5;
L_004053b2:; BB(0x004053b2);
    /* 004053b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004053b4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004053b7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004053b9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004053bc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004053be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4053c0u); call_ind(t); }
    /* 004053c0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004053c3: jmp 0x4053cc */ goto L_004053cc;
L_004053c5:; BB(0x004053c5);
    /* 004053c5: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_004053cc:; BB(0x004053cc);
    /* 004053cc: mov dword ptr [0x7902fc], 0 */ W32((u32)(0x7902fcu), 0x0u);
    /* 004053d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004053dd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004053e0: call 0x5d7bd0 */ r_esp -= 4; W32(r_esp, 0x4053e5u); f_005d7bd0();
    /* 004053e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004053e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004053ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004053f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004053f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004053f3: ret  */ FN_RET(0x004052b0); r_esp += 4; return;
}

void f_00405400(void) /* BaccaratRoom::vfunc1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405400);
    /* 00405400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405401: mov ebp, esp */ r_ebp = r_esp;
    /* 00405403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405405: push 0x69d7dd */ { u32 v = 0x69d7ddu; r_esp -= 4; W32(r_esp, v); }
    /* 0040540a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00405410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405411: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405414: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00405419: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040541b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040541c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040541f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00405425: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00405428: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040542b: call 0x5d8230 */ r_esp -= 4; W32(r_esp, 0x405430u); f_005d8230();
    /* 00405430: push 0x10e8 */ { u32 v = 0x10e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405435: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40543au); f_00686d82();
    /* 0040543a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040543d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00405440: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00405447: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040544b: je 0x40545a */ if (fZ) goto L_0040545a;
L_0040544d:; BB(0x0040544d);
    /* 0040544d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405450: call 0x407620 */ r_esp -= 4; W32(r_esp, 0x405455u); f_00407620();
    /* 00405455: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00405458: jmp 0x405461 */ goto L_00405461;
L_0040545a:; BB(0x0040545a);
    /* 0040545a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00405461:; BB(0x00405461);
    /* 00405461: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00405464: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00405467: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040546e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405471: mov dword ptr [0x7902f0], ecx */ W32((u32)(0x7902f0u), r_ecx);
    /* 00405477: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040547d: call 0x407820 */ r_esp -= 4; W32(r_esp, 0x405482u); f_00407820();
    /* 00405482: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00405484: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x405489u); f_00686d82();
    /* 00405489: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040548c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040548f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00405496: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040549a: je 0x4054a9 */ if (fZ) goto L_004054a9;
L_0040549c:; BB(0x0040549c);
    /* 0040549c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040549f: call 0x404120 */ r_esp -= 4; W32(r_esp, 0x4054a4u); f_00404120();
    /* 004054a4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004054a7: jmp 0x4054b0 */ goto L_004054b0;
L_004054a9:; BB(0x004054a9);
    /* 004054a9: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_004054b0:; BB(0x004054b0);
    /* 004054b0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004054b3: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004054b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004054bd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004054c0: mov dword ptr [0x7902f4], eax */ W32((u32)(0x7902f4u), r_eax);
    /* 004054c5: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004054c7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4054ccu); f_00686d82();
    /* 004054cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004054cf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004054d2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004054d9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004054dd: je 0x4054ec */ if (fZ) goto L_004054ec;
L_004054df:; BB(0x004054df);
    /* 004054df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004054e2: call 0x4012b0 */ r_esp -= 4; W32(r_esp, 0x4054e7u); f_004012b0();
    /* 004054e7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004054ea: jmp 0x4054f3 */ goto L_004054f3;
L_004054ec:; BB(0x004054ec);
    /* 004054ec: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_004054f3:; BB(0x004054f3);
    /* 004054f3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004054f6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004054f9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00405500: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00405503: mov dword ptr [0x7902f8], edx */ W32((u32)(0x7902f8u), r_edx);
    /* 00405509: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 0040550f: call 0x401580 */ r_esp -= 4; W32(r_esp, 0x405514u); f_00401580();
    /* 00405514: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00405516: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40551bu); f_00686d82();
    /* 0040551b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040551e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00405521: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00405528: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040552c: je 0x40553b */ if (fZ) goto L_0040553b;
L_0040552e:; BB(0x0040552e);
    /* 0040552e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00405531: call 0x401000 */ r_esp -= 4; W32(r_esp, 0x405536u); f_00401000();
    /* 00405536: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00405539: jmp 0x405542 */ goto L_00405542;
L_0040553b:; BB(0x0040553b);
    /* 0040553b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00405542:; BB(0x00405542);
    /* 00405542: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00405545: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00405548: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040554f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00405552: mov dword ptr [0x7902fc], ecx */ W32((u32)(0x7902fcu), r_ecx);
    /* 00405558: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0040555a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x40555fu); f_00686d82();
    /* 0040555f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405562: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00405565: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0040556c: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405570: je 0x40558d */ if (fZ) goto L_0040558d;
L_00405572:; BB(0x00405572);
    /* 00405572: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405574: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00405577: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x40557cu); f_005fc0d0();
    /* 0040557c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0040557f: mov dword ptr [edx], 0x6b2f9c */ W32((u32)(r_edx), 0x6b2f9cu);
    /* 00405585: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00405588: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0040558b: jmp 0x405594 */ goto L_00405594;
L_0040558d:; BB(0x0040558d);
    /* 0040558d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00405594:; BB(0x00405594);
    /* 00405594: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00405597: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0040559a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004055a1: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004055a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004055a5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004055a8: call 0x5f1b70 */ r_esp -= 4; W32(r_esp, 0x4055adu); f_005f1b70();
    /* 004055ad: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004055b0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004055b3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004055b6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004055b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004055bb: mov ecx, eax */ r_ecx = r_eax;
    /* 004055bd: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 004055c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4055c2u); call_ind(t); }
    /* 004055c2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004055c5: call 0x5d85e0 */ r_esp -= 4; W32(r_esp, 0x4055cau); f_005d85e0();
    /* 004055ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004055cc: mov ecx, dword ptr [0x7902f4] */ r_ecx = R32((u32)(0x7902f4u));
    /* 004055d2: call 0x404160 */ r_esp -= 4; W32(r_esp, 0x4055d7u); f_00404160();
    /* 004055d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004055da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004055e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004055e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004055e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004055e5: ret  */ FN_RET(0x00405400); r_esp += 4; return;
}

void f_00405750(void) /* BaccaratRoom::vfunc2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405750);
    /* 00405750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405751: mov ebp, esp */ r_ebp = r_esp;
    /* 00405753: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405756: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00405759: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040575c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040575d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00405760: call 0x5d7f40 */ r_esp -= 4; W32(r_esp, 0x405765u); f_005d7f40();
    /* 00405765: cmp dword ptr [0x7902f0], 0 */ {  u32 a = R32((u32)(0x7902f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040576c: je 0x405785 */ if (fZ) goto L_00405785;
L_0040576e:; BB(0x0040576e);
    /* 0040576e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405771: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00405774: mov edx, dword ptr [0x7902f0] */ r_edx = R32((u32)(0x7902f0u));
    /* 0040577a: mov eax, dword ptr [edx + 0x10dc] */ r_eax = R32((u32)(r_edx+0x10dcu));
    /* 00405780: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00405783: jmp 0x40578c */ goto L_0040578c;
L_00405785:; BB(0x00405785);
    /* 00405785: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
L_0040578c:; BB(0x0040578c);
    /* 0040578c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040578f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405792: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00405795: cmp dword ptr [edx + 0x18], 4 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405799: jne 0x4057d9 */ if (!fZ) goto L_004057d9;
L_0040579b:; BB(0x0040579b);
    /* 0040579b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040579e: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004057a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004057a4: jne 0x4057d9 */ if (!fZ) goto L_004057d9;
L_004057a6:; BB(0x004057a6);
    /* 004057a6: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004057aa: je 0x4057d9 */ if (fZ) goto L_004057d9;
L_004057ac:; BB(0x004057ac);
    /* 004057ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004057af: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 004057b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004057b4: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x4057bau); call_ind(t); }
    /* 004057ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004057bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004057c0: cmp dword ptr [ebp - 0x20], 0x73 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x73u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004057c4: je 0x4057c8 */ if (fZ) goto L_004057c8;
L_004057c6:; BB(0x004057c6);
    /* 004057c6: jmp 0x4057d4 */ goto L_004057d4;
L_004057c8:; BB(0x004057c8);
    /* 004057c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004057cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004057cc: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004057cf: call 0x4055f0 */ r_esp -= 4; W32(r_esp, 0x4057d4u); f_004055f0();
L_004057d4:; BB(0x004057d4);
    /* 004057d4: jmp 0x40586f */ goto L_0040586f;
L_004057d9:; BB(0x004057d9);
    /* 004057d9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004057dc: cmp dword ptr [edx + 0x18], 0x16 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004057e0: jne 0x40586f */ if (!fZ) goto L_0040586f;
L_004057e6:; BB(0x004057e6);
    /* 004057e6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004057e9: movzx ecx, byte ptr [eax + 4] */ r_ecx = (u32)R8((u32)(r_eax+0x4u));
    /* 004057ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004057ef: jne 0x40586f */ if (!fZ) goto L_0040586f;
L_004057f1:; BB(0x004057f1);
    /* 004057f1: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004057f5: je 0x40586f */ if (fZ) goto L_0040586f;
L_004057f7:; BB(0x004057f7);
    /* 004057f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004057fa: movsx eax, byte ptr [edx + 0x14] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x14u));
    /* 004057fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004057ff: call dword ptr [0x6b2224] */ { u32 t = R32((u32)(0x6b2224u)); r_esp -= 4; W32(r_esp, 0x405805u); call_ind(t); }
    /* 00405805: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405808: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040580b: cmp dword ptr [ebp - 0x24], 0x70 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040580f: je 0x405813 */ if (fZ) goto L_00405813;
L_00405811:; BB(0x00405811);
    /* 00405811: jmp 0x40586f */ goto L_0040586f;
L_00405813:; BB(0x00405813);
    /* 00405813: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405816: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405817: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x40581cu); f_005dcb00();
    /* 0040581c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040581f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00405822: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405825: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40582au); f_0063aac0();
    /* 0040582a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040582c: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0040582f: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405833: je 0x405851 */ if (fZ) goto L_00405851;
L_00405835:; BB(0x00405835);
    /* 00405835: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405838: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x40583du); f_0063aac0();
    /* 0040583d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0040583f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00405842: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405846: je 0x405851 */ if (fZ) goto L_00405851;
L_00405848:; BB(0x00405848);
    /* 00405848: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0040584f: jmp 0x405858 */ goto L_00405858;
L_00405851:; BB(0x00405851);
    /* 00405851: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00405858:; BB(0x00405858);
    /* 00405858: movzx ecx, byte ptr [ebp - 0x28] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd8u));
    /* 0040585c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040585e: je 0x40586f */ if (fZ) goto L_0040586f;
L_00405860:; BB(0x00405860);
    /* 00405860: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405863: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405864: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040586a: call 0x407fa0 */ r_esp -= 4; W32(r_esp, 0x40586fu); f_00407fa0();
L_0040586f:; BB(0x0040586f);
    /* 0040586f: mov esp, ebp */ r_esp = r_ebp;
    /* 00405871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405872: ret 4 */ FN_RET(0x00405750); r_esp += 8; return;
}

void f_00405880(void) /* BaccaratRoom::vfunc12 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405880);
    /* 00405880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405881: mov ebp, esp */ r_ebp = r_esp;
    /* 00405883: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405886: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405889: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040588c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0040588f: cmp dword ptr [ebp - 8], 0x186a1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405896: je 0x4058a3 */ if (fZ) goto L_004058a3;
L_00405898:; BB(0x00405898);
    /* 00405898: cmp dword ptr [ebp - 8], 0x186d7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186d7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040589f: je 0x4058f6 */ if (fZ) goto L_004058f6;
L_004058a1:; BB(0x004058a1);
    /* 004058a1: jmp 0x405918 */ goto L_00405918;
L_004058a3:; BB(0x004058a3);
    /* 004058a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004058a5: push 0x186a6 */ { u32 v = 0x186a6u; r_esp -= 4; W32(r_esp, v); }
    /* 004058aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004058ad: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4058b2u); f_005fe640();
    /* 004058b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004058b4: push 0x186a9 */ { u32 v = 0x186a9u; r_esp -= 4; W32(r_esp, v); }
    /* 004058b9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004058bc: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4058c1u); f_005fe640();
    /* 004058c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004058c3: push 0x186a7 */ { u32 v = 0x186a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004058c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004058cb: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4058d0u); f_005fe640();
    /* 004058d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004058d2: push 0x186a8 */ { u32 v = 0x186a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004058d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004058da: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x4058dfu); f_005fe640();
    /* 004058df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004058e1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004058e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004058e5: push 0x1399 */ { u32 v = 0x1399u; r_esp -= 4; W32(r_esp, v); }
    /* 004058ea: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004058ed: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x4058f2u); f_005fe240();
    /* 004058f2: jmp 0x405918 */ goto L_00405918;
L_004058f6:; BB(0x004058f6);
    /* 004058f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004058f8: push 0x186da */ { u32 v = 0x186dau; r_esp -= 4; W32(r_esp, v); }
    /* 004058fd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00405900: call 0x5fe640 */ r_esp -= 4; W32(r_esp, 0x405905u); f_005fe640();
    /* 00405905: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405907: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405909: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040590b: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 00405910: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00405913: call 0x5fe240 */ r_esp -= 4; W32(r_esp, 0x405918u); f_005fe240();
L_00405918:; BB(0x00405918);
    /* 00405918: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0040591b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040591c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040591f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405920: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405923: call 0x5d8670 */ r_esp -= 4; W32(r_esp, 0x405928u); f_005d8670();
    /* 00405928: mov esp, ebp */ r_esp = r_ebp;
    /* 0040592a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040592b: ret 8 */ FN_RET(0x00405880); r_esp += 12; return;
}

void f_00405930(void) /* BaccaratRoom::vfunc11 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405930);
    /* 00405930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405931: mov ebp, esp */ r_ebp = r_esp;
    /* 00405933: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405934: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405937: push 0x186c3 */ { u32 v = 0x186c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040593c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00405942: call 0x5df2e0 */ r_esp -= 4; W32(r_esp, 0x405947u); f_005df2e0();
    /* 00405947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405948: push 0x311281 */ { u32 v = 0x311281u; r_esp -= 4; W32(r_esp, v); }
    /* 0040594d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405950: call 0x5f1e60 */ r_esp -= 4; W32(r_esp, 0x405955u); f_005f1e60();
    /* 00405955: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405958: call 0x64e430 */ r_esp -= 4; W32(r_esp, 0x40595du); f_0064e430();
    /* 0040595d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040595f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405960: ret  */ FN_RET(0x00405930); r_esp += 4; return;
}

void f_00405970(void) /* BaccaratRoom::vfunc19 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405970);
    /* 00405970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405971: mov ebp, esp */ r_ebp = r_esp;
    /* 00405973: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405976: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00405979: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 0040597e: mov ecx, dword ptr [eax + 0x10dc] */ r_ecx = R32((u32)(r_eax+0x10dcu));
    /* 00405984: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405987: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0040598a: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0040598d: cmp dword ptr [ebp - 0x18], 0x311282 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x311282u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405994: je 0x4059a1 */ if (fZ) goto L_004059a1;
L_00405996:; BB(0x00405996);
    /* 00405996: cmp dword ptr [ebp - 0x18], 0x311283 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x311283u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040599d: je 0x4059af */ if (fZ) goto L_004059af;
L_0040599f:; BB(0x0040599f);
    /* 0040599f: jmp 0x405a18 */ goto L_00405a18;
L_004059a1:; BB(0x004059a1);
    /* 004059a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004059a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004059a8: call 0x4055f0 */ r_esp -= 4; W32(r_esp, 0x4059adu); f_004055f0();
    /* 004059ad: jmp 0x405a18 */ goto L_00405a18;
L_004059af:; BB(0x004059af);
    /* 004059af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004059b3: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4059b8u); f_005dcb00();
    /* 004059b8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004059bb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004059be: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004059c1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4059c6u); f_0063aac0();
    /* 004059c6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004059c8: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004059cb: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004059cf: je 0x4059ed */ if (fZ) goto L_004059ed;
L_004059d1:; BB(0x004059d1);
    /* 004059d1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004059d4: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x4059d9u); f_0063aac0();
    /* 004059d9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004059db: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004059de: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004059e2: je 0x4059ed */ if (fZ) goto L_004059ed;
L_004059e4:; BB(0x004059e4);
    /* 004059e4: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004059eb: jmp 0x4059f4 */ goto L_004059f4;
L_004059ed:; BB(0x004059ed);
    /* 004059ed: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_004059f4:; BB(0x004059f4);
    /* 004059f4: movzx ecx, byte ptr [ebp - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 004059f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004059fa: je 0x405a0b */ if (fZ) goto L_00405a0b;
L_004059fc:; BB(0x004059fc);
    /* 004059fc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004059ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405a00: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405a06: call 0x407fa0 */ r_esp -= 4; W32(r_esp, 0x405a0bu); f_00407fa0();
L_00405a0b:; BB(0x00405a0b);
    /* 00405a0b: push 0x6b2fbc */ { u32 v = 0x6b2fbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00405a10: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x405a15u); f_0062fde0();
    /* 00405a15: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00405a18:; BB(0x00405a18);
    /* 00405a18: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00405a1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405a1c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00405a1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405a20: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405a23: call 0x5dc7d0 */ r_esp -= 4; W32(r_esp, 0x405a28u); f_005dc7d0();
    /* 00405a28: mov esp, ebp */ r_esp = r_ebp;
    /* 00405a2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405a2b: ret 8 */ FN_RET(0x00405970); r_esp += 12; return;
}

void f_00405a50(void) /* BaccaratRoom::vfunc32 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405a50);
    /* 00405a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00405a53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405a54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405a57: cmp dword ptr [0x7902f0], 0 */ {  u32 a = R32((u32)(0x7902f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405a5e: jne 0x405a64 */ if (!fZ) goto L_00405a64;
L_00405a60:; BB(0x00405a60);
    /* 00405a60: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00405a62: jmp 0x405a6f */ goto L_00405a6f;
L_00405a64:; BB(0x00405a64);
    /* 00405a64: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405a6a: call 0x407b00 */ r_esp -= 4; W32(r_esp, 0x405a6fu); f_00407b00();
L_00405a6f:; BB(0x00405a6f);
    /* 00405a6f: mov esp, ebp */ r_esp = r_ebp;
    /* 00405a71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405a72: ret  */ FN_RET(0x00405a50); r_esp += 4; return;
}

void f_00405a80(void) /* BaccaratRoom::vfunc159 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405a80);
    /* 00405a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00405a83: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405a86: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00405a89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405a8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405a8d: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x405a92u); f_0064c8a0();
    /* 00405a92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405a95: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00405a98: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00405a9b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00405a9e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405aa1: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00405aa3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405aa6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00405aa9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405aad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x405ab2u); f_005dcb00();
    /* 00405ab2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405ab5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00405ab8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00405abb: mov dl, byte ptr [ecx + 0x4a2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0x4a2u))) & 0xffu);
    /* 00405ac1: mov byte ptr [ebp - 0x21], dl */ W8((u32)(r_ebp+0xffffffdfu), (u8)r_edx);
    /* 00405ac4: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 00405ac8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405aca: je 0x405ace */ if (fZ) goto L_00405ace;
L_00405acc:; BB(0x00405acc);
    /* 00405acc: jmp 0x405b3d */ goto L_00405b3d;
L_00405ace:; BB(0x00405ace);
    /* 00405ace: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00405ad5: jmp 0x405ae0 */ goto L_00405ae0;
L_00405ad7:; BB(0x00405ad7);
    /* 00405ad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405ada: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00405add: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00405ae0:; BB(0x00405ae0);
    /* 00405ae0: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405ae4: jge 0x405b3d */ if ((fS==fO)) goto L_00405b3d;
L_00405ae6:; BB(0x00405ae6);
    /* 00405ae6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00405ae9: imul edx, edx, 3 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00405aec: add edx, dword ptr [ebp - 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00405aef: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00405af4: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00405af8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00405afb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00405afe: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00405b01: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00405b04: lea ecx, [eax + edx + 0x48] */ r_ecx = (u32)(r_eax+r_edx+0x48u);
    /* 00405b08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00405b0a: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00405b0d: mov eax, dword ptr [ecx + edx] */ r_eax = R32((u32)(r_ecx+r_edx));
    /* 00405b10: mov ecx, dword ptr [ecx + edx + 4] */ r_ecx = R32((u32)(r_ecx+r_edx+0x4u));
    /* 00405b14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00405b17: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00405b1a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405b1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405b1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405b21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405b22: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 00405b25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405b26: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00405b29: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x405b2eu); f_0064c5c0();
    /* 00405b2e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405b30: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00405b33: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00405b36: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00405b38: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00405b3b: jmp 0x405ad7 */ goto L_00405ad7;
L_00405b3d:; BB(0x00405b3d);
    /* 00405b3d: mov esp, ebp */ r_esp = r_ebp;
    /* 00405b3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405b40: ret 8 */ FN_RET(0x00405a80); r_esp += 12; return;
}

void f_00405b50(void) /* BaccaratRoom::vfunc156 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405b50);
    /* 00405b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405b51: mov ebp, esp */ r_ebp = r_esp;
    /* 00405b53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405b56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00405b59: mov eax, dword ptr [0x7902f0] */ r_eax = R32((u32)(0x7902f0u));
    /* 00405b5e: mov ecx, dword ptr [eax + 0x10dc] */ r_ecx = R32((u32)(r_eax+0x10dcu));
    /* 00405b64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405b67: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405b6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405b6b: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405b71: call 0x407de0 */ r_esp -= 4; W32(r_esp, 0x405b76u); f_00407de0();
    /* 00405b76: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00405b79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405b7b: je 0x405b97 */ if (fZ) goto L_00405b97;
L_00405b7d:; BB(0x00405b7d);
    /* 00405b7d: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405b83: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x405b88u); f_00407bb0();
    /* 00405b88: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00405b8b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00405b8e: mov byte ptr [ecx + 0x4a0], 1 */ W8((u32)(r_ecx+0x4a0u), 0x1u);
    /* 00405b95: jmp 0x405baf */ goto L_00405baf;
L_00405b97:; BB(0x00405b97);
    /* 00405b97: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405b9d: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x405ba2u); f_00407bb0();
    /* 00405ba2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00405ba5: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00405ba8: mov byte ptr [edx + 0x4a1], 1 */ W8((u32)(r_edx+0x4a1u), 0x1u);
L_00405baf:; BB(0x00405baf);
    /* 00405baf: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405bb5: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x405bbau); f_00407bb0();
    /* 00405bba: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00405bbd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00405bc0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00405bc2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00405bc5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00405bc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405bcau); call_ind(t); }
    /* 00405bca: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405bcd: call 0x5db890 */ r_esp -= 4; W32(r_esp, 0x405bd2u); f_005db890();
    /* 00405bd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405bd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405bd6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405bd9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00405bdc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00405bdf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00405be2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00405be4: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405be7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405be9u); call_ind(t); }
    /* 00405be9: mov esp, ebp */ r_esp = r_ebp;
    /* 00405beb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405bec: ret  */ FN_RET(0x00405b50); r_esp += 4; return;
}

void f_00405bf0(void) /* BaccaratRoom::vfunc157 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405bf0);
    /* 00405bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00405bf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405bf4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405bf7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00405bfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405bfd: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00405c00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405c01: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405c07: call 0x408ee0 */ r_esp -= 4; W32(r_esp, 0x405c0cu); f_00408ee0();
    /* 00405c0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405c0f: call 0x5db9b0 */ r_esp -= 4; W32(r_esp, 0x405c14u); f_005db9b0();
    /* 00405c14: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405c1a: call 0x4079b0 */ r_esp -= 4; W32(r_esp, 0x405c1fu); f_004079b0();
    /* 00405c1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405c21: mov ecx, dword ptr [0x7902f4] */ r_ecx = R32((u32)(0x7902f4u));
    /* 00405c27: call 0x404160 */ r_esp -= 4; W32(r_esp, 0x405c2cu); f_00404160();
    /* 00405c2c: mov esp, ebp */ r_esp = r_ebp;
    /* 00405c2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405c2f: ret 4 */ FN_RET(0x00405bf0); r_esp += 8; return;
}

void f_00405c40(void) /* BaccaratRoom::vfunc161 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405c40);
    /* 00405c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405c41: mov ebp, esp */ r_ebp = r_esp;
    /* 00405c43: sub esp, 0x134 */ {  u32 a = r_esp; u32 b = 0x134u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405c49: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00405c4e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405c50: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00405c53: mov dword ptr [ebp - 0x134], ecx */ W32((u32)(r_ebp+0xfffffeccu), r_ecx);
    /* 00405c59: mov byte ptr [ebp - 0x125], 0 */ W8((u32)(r_ebp+0xfffffedbu), 0x0u);
    /* 00405c60: cmp dword ptr [ebp + 0x18], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00405c67: jl 0x405c75 */ if ((fS!=fO)) goto L_00405c75;
L_00405c69:; BB(0x00405c69);
    /* 00405c69: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00405c6b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00405c6e: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x405c73u); f_005ecc60();
    /* 00405c73: jmp 0x405c7f */ goto L_00405c7f;
L_00405c75:; BB(0x00405c75);
    /* 00405c75: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00405c77: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00405c7a: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x405c7fu); f_005ecc60();
L_00405c7f:; BB(0x00405c7f);
    /* 00405c7f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00405c82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405c83: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00405c86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405c87: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x405c8cu); f_0064c8a0();
    /* 00405c8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405c8f: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 00405c95: mov dword ptr [ebp - 0x12c], edx */ W32((u32)(r_ebp+0xfffffed4u), r_edx);
    /* 00405c9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405c9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405c9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ca1: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 00405ca7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405ca8: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 00405cae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405caf: mov ecx, dword ptr [ebp - 0x130] */ r_ecx = R32((u32)(r_ebp+0xfffffed0u));
    /* 00405cb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405cb6: call 0x64c8d0 */ r_esp -= 4; W32(r_esp, 0x405cbbu); f_0064c8d0();
    /* 00405cbb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405cbe: lea edx, [ebp - 0x124] */ r_edx = (u32)(r_ebp+0xfffffedcu);
    /* 00405cc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405cc5: push 0x6b2fd8 */ { u32 v = 0x6b2fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405cca: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 00405cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405cd1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x405cd7u); call_ind(t); }
    /* 00405cd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405cda: lea ecx, [ebp - 0x108] */ r_ecx = (u32)(r_ebp+0xfffffef8u);
    /* 00405ce0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405ce1: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00405ce4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00405ce6: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00405ce9: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00405cef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x405cf1u); call_ind(t); }
    /* 00405cf1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00405cf3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405cf6: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00405cf8: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x405cfdu); f_00686d72();
    /* 00405cfd: mov esp, ebp */ r_esp = r_ebp;
    /* 00405cff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405d00: ret 0x1c */ FN_RET(0x00405c40); r_esp += 32; return;
}

void f_00405d10(void) /* BaccaratRoom::vfunc113 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405d10);
    /* 00405d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00405d13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405d16: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00405d19: mov dword ptr [ebp - 0x10], 0x186 */ W32((u32)(r_ebp+0xfffffff0u), 0x186u);
    /* 00405d20: mov dword ptr [ebp - 0xc], 0x96 */ W32((u32)(r_ebp+0xfffffff4u), 0x96u);
    /* 00405d27: mov dword ptr [ebp - 8], 0x213 */ W32((u32)(r_ebp+0xfffffff8u), 0x213u);
    /* 00405d2e: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00405d35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405d38: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 00405d3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00405d3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405d3f: ret 4 */ FN_RET(0x00405d10); r_esp += 8; return;
}

void f_00405d50(void) /* BaccaratRoom::vfunc114 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405d50);
    /* 00405d50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405d51: mov ebp, esp */ r_ebp = r_esp;
    /* 00405d53: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405d56: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00405d59: mov dword ptr [ebp - 0x10], 0x131 */ W32((u32)(r_ebp+0xfffffff0u), 0x131u);
    /* 00405d60: mov dword ptr [ebp - 0xc], 0x131 */ W32((u32)(r_ebp+0xfffffff4u), 0x131u);
    /* 00405d67: mov dword ptr [ebp - 8], 0xe6 */ W32((u32)(r_ebp+0xfffffff8u), 0xe6u);
    /* 00405d6e: mov dword ptr [ebp - 4], 0xe6 */ W32((u32)(r_ebp+0xfffffffcu), 0xe6u);
    /* 00405d75: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405d78: mov eax, dword ptr [ebp + eax*4 - 0x10] */ r_eax = R32((u32)(r_ebp+r_eax*4+0xfffffff0u));
    /* 00405d7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00405d7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405d7f: ret 4 */ FN_RET(0x00405d50); r_esp += 8; return;
}

void f_00405d90(void) /* BaccaratRoom::vfunc151 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405d90);
    /* 00405d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00405d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405d97: cmp dword ptr [0x7902f0], 0 */ {  u32 a = R32((u32)(0x7902f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00405d9e: je 0x405dad */ if (fZ) goto L_00405dad;
L_00405da0:; BB(0x00405da0);
    /* 00405da0: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405da6: call 0x407bb0 */ r_esp -= 4; W32(r_esp, 0x405dabu); f_00407bb0();
    /* 00405dab: jmp 0x405daf */ goto L_00405daf;
L_00405dad:; BB(0x00405dad);
    /* 00405dad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00405daf:; BB(0x00405daf);
    /* 00405daf: mov esp, ebp */ r_esp = r_ebp;
    /* 00405db1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405db2: ret  */ FN_RET(0x00405d90); r_esp += 4; return;
}

void f_00405dc0(void) /* BaccaratRoom::vfunc165 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405dc0);
    /* 00405dc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405dc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00405dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405dc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405dc7: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405dcd: call 0x408e80 */ r_esp -= 4; W32(r_esp, 0x405dd2u); f_00408e80();
    /* 00405dd2: mov esp, ebp */ r_esp = r_ebp;
    /* 00405dd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405dd5: ret  */ FN_RET(0x00405dc0); r_esp += 4; return;
}

void f_00405de0(void) /* BaccaratRoom::vfunc166 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405de0);
    /* 00405de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405de1: mov ebp, esp */ r_ebp = r_esp;
    /* 00405de3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405de6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405de7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00405de8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00405deb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405def: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x405df4u); f_005dcb00();
    /* 00405df4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405df7: mov ecx, dword ptr [eax + 0x4d8] */ r_ecx = R32((u32)(r_eax+0x4d8u));
    /* 00405dfd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405dfe: mov edx, dword ptr [eax + 0x4d4] */ r_edx = R32((u32)(r_eax+0x4d4u));
    /* 00405e04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405e05: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00405e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405e09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405e0b: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405e11: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x405e16u); f_00408e40();
    /* 00405e16: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00405e19: mov ecx, eax */ r_ecx = r_eax;
    /* 00405e1b: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x405e20u); f_0064c5c0();
    /* 00405e20: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00405e22: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00405e25: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405e27: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405e2d: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x405e32u); f_00408e40();
    /* 00405e32: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00405e35: mov dword ptr [eax + 0x10], edi */ W32((u32)(r_eax+0x10u), r_edi);
    /* 00405e38: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00405e3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405e3c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x405e41u); f_005dcb00();
    /* 00405e41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405e44: mov ecx, eax */ r_ecx = r_eax;
    /* 00405e46: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x405e4bu); f_0063b0a0();
    /* 00405e4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00405e4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405e4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00405e4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405e50: ret 4 */ FN_RET(0x00405de0); r_esp += 8; return;
}

void f_00405e60(void) /* BaccaratRoom::vfunc167 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405e60);
    /* 00405e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00405e63: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405e66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00405e67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00405e68: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00405e6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405e6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405e6f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x405e74u); f_005dcb00();
    /* 00405e74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405e77: mov ecx, dword ptr [eax + 0x4c8] */ r_ecx = R32((u32)(r_eax+0x4c8u));
    /* 00405e7d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405e7e: mov edx, dword ptr [eax + 0x4c4] */ r_edx = R32((u32)(r_eax+0x4c4u));
    /* 00405e84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405e85: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 00405e88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405e89: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00405e8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405e8d: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405e93: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x405e98u); f_00408e40();
    /* 00405e98: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00405e9b: mov ecx, eax */ r_ecx = r_eax;
    /* 00405e9d: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x405ea2u); f_0064c5c0();
    /* 00405ea2: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00405ea4: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00405ea7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00405eaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00405eab: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405eb1: call 0x408e40 */ r_esp -= 4; W32(r_esp, 0x405eb6u); f_00408e40();
    /* 00405eb6: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00405eb9: mov dword ptr [eax + 8], edi */ W32((u32)(r_eax+0x8u), r_edi);
    /* 00405ebc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405ebf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405ec0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x405ec5u); f_005dcb00();
    /* 00405ec5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405ec8: mov ecx, eax */ r_ecx = r_eax;
    /* 00405eca: call 0x63b0a0 */ r_esp -= 4; W32(r_esp, 0x405ecfu); f_0063b0a0();
    /* 00405ecf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00405ed0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00405ed1: mov esp, ebp */ r_esp = r_ebp;
    /* 00405ed3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405ed4: ret 4 */ FN_RET(0x00405e60); r_esp += 8; return;
}

void f_00405ee0(void) /* BaccaratRoom::vfunc101 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405ee0);
    /* 00405ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00405ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405ee7: mov eax, 0x416 */ r_eax = 0x416u;
    /* 00405eec: mov esp, ebp */ r_esp = r_ebp;
    /* 00405eee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405eef: ret 4 */ FN_RET(0x00405ee0); r_esp += 8; return;
}

void f_00405f00(void) /* BaccaratRoom::vfunc81 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405f00);
    /* 00405f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405f01: mov ebp, esp */ r_ebp = r_esp;
    /* 00405f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405f07: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00405f0d: call 0x636e70 */ r_esp -= 4; W32(r_esp, 0x405f12u); f_00636e70();
    /* 00405f12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f14: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00405f19: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00405f1c: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x405f21u); f_005fc420();
    /* 00405f21: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00405f27: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x405f2cu); f_00401cb0();
    /* 00405f2c: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405f32: call 0x4079b0 */ r_esp -= 4; W32(r_esp, 0x405f37u); f_004079b0();
    /* 00405f37: mov ecx, dword ptr [0x7902f4] */ r_ecx = R32((u32)(0x7902f4u));
    /* 00405f3d: call 0x404200 */ r_esp -= 4; W32(r_esp, 0x405f42u); f_00404200();
    /* 00405f42: mov esp, ebp */ r_esp = r_ebp;
    /* 00405f44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405f45: ret 8 */ FN_RET(0x00405f00); r_esp += 12; return;
}

void f_00405f50(void) /* BaccaratRoom::vfunc158 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405f50);
    /* 00405f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405f51: mov ebp, esp */ r_ebp = r_esp;
    /* 00405f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405f57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00405f5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405f5e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00405f61: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00405f64: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00405f67: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00405f69: mov ecx, eax */ r_ecx = r_eax;
    /* 00405f6b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00405f6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x405f70u); call_ind(t); }
    /* 00405f70: mov esp, ebp */ r_esp = r_ebp;
    /* 00405f72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405f73: ret  */ FN_RET(0x00405f50); r_esp += 4; return;
}

void f_00405f80(void) /* BaccaratRoom::vfunc164 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405f80);
    /* 00405f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00405f83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00405f84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00405f87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00405f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405f8b: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00405f91: call 0x407e60 */ r_esp -= 4; W32(r_esp, 0x405f96u); f_00407e60();
    /* 00405f96: mov esp, ebp */ r_esp = r_ebp;
    /* 00405f98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00405f99: ret 4 */ FN_RET(0x00405f80); r_esp += 8; return;
}

void f_00405fa0(void) /* BaccaratRoom::vfunc50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00405fa0);
    /* 00405fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00405fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00405fa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405fa5: push 0x69d829 */ { u32 v = 0x69d829u; r_esp -= 4; W32(r_esp, v); }
    /* 00405faa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00405fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405fb1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00405fb4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00405fb9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00405fbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405fbc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00405fbf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00405fc5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00405fc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fca: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fcc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00405fce: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fd0: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fd2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00405fd4: push 0x6b30d8 */ { u32 v = 0x6b30d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fd9: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x405fdeu); f_00630f40();
    /* 00405fde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00405fe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405fe2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fe4: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fe6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fe8: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fed: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00405fef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00405ff1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00405ff4: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x405ff9u); f_005f9ef0();
    /* 00405ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00405ffa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00405ffd: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x406002u); f_005ff5a0();
    /* 00406002: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406004: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00406006: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406008: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0040600a: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0040600c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040600e: push 0x6b30bc */ { u32 v = 0x6b30bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00406013: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x406018u); f_00630f40();
    /* 00406018: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040601b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040601c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040601e: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 00406020: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00406022: push 0x30d4c9 */ { u32 v = 0x30d4c9u; r_esp -= 4; W32(r_esp, v); }
    /* 00406027: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00406029: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040602b: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040602e: call 0x5f9ef0 */ r_esp -= 4; W32(r_esp, 0x406033u); f_005f9ef0();
    /* 00406033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406034: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406037: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x40603cu); f_005ff5a0();
    /* 0040603c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040603e: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406043: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406048: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040604d: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406052: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00406054: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00406056: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00406058: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 0040605d: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00406062: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00406064: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406069: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0040606b: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00406070: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x406075u); f_00630f40();
    /* 00406075: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406079: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040607b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040607d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00406080: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x406085u); f_005fa790();
    /* 00406085: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406086: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406089: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x40608eu); f_005ff5a0();
    /* 0040608e: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406093: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x406098u); f_00686d82();
    /* 00406098: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040609b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040609e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004060a5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004060a9: je 0x4060c4 */ if (fZ) goto L_004060c4;
L_004060ab:; BB(0x004060ab);
    /* 004060ab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004060ae: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x4060b3u); f_005ec5a0();
    /* 004060b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004060b6: mov dword ptr [eax], 0x6b2fe4 */ W32((u32)(r_eax), 0x6b2fe4u);
    /* 004060bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004060bf: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 004060c2: jmp 0x4060cb */ goto L_004060cb;
L_004060c4:; BB(0x004060c4);
    /* 004060c4: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_004060cb:; BB(0x004060cb);
    /* 004060cb: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004060ce: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 004060d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004060d8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004060da: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004060dc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004060de: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004060e3: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 004060e8: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004060ea: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 004060ef: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 004060f1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004060f6: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004060f8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 004060fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004060fc: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004060ff: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x406104u); f_005fa5b0();
    /* 00406104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406105: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406108: call 0x5ff5a0 */ r_esp -= 4; W32(r_esp, 0x40610du); f_005ff5a0();
    /* 0040610d: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00406113: call 0x408e80 */ r_esp -= 4; W32(r_esp, 0x406118u); f_00408e80();
    /* 00406118: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0040611b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040611d: je 0x40613c */ if (fZ) goto L_0040613c;
L_0040611f:; BB(0x0040611f);
    /* 0040611f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00406121: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00406124: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x406129u); f_005fb350();
    /* 00406129: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0040612c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040612f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00406131: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00406134: mov edx, dword ptr [eax + 0xf4] */ r_edx = R32((u32)(r_eax+0xf4u));
    /* 0040613a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x40613cu); call_ind(t); }
L_0040613c:; BB(0x0040613c);
    /* 0040613c: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 00406142: call 0x408ec0 */ r_esp -= 4; W32(r_esp, 0x406147u); f_00408ec0();
    /* 00406147: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040614a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040614c: je 0x40616b */ if (fZ) goto L_0040616b;
L_0040614e:; BB(0x0040614e);
    /* 0040614e: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00406150: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00406153: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x406158u); f_005fb350();
    /* 00406158: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040615b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040615e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00406160: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00406163: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 00406169: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40616bu); call_ind(t); }
L_0040616b:; BB(0x0040616b);
    /* 0040616b: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406172: je 0x4061c2 */ if (fZ) goto L_004061c2;
L_00406174:; BB(0x00406174);
    /* 00406174: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 0040617a: call 0x5cdd60 */ r_esp -= 4; W32(r_esp, 0x40617fu); f_005cdd60();
    /* 0040617f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00406182: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406184: je 0x4061a5 */ if (fZ) goto L_004061a5;
L_00406186:; BB(0x00406186);
    /* 00406186: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00406188: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0040618b: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x406190u); f_005fb350();
    /* 00406190: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00406193: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00406196: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00406198: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040619b: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 004061a1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4061a3u); call_ind(t); }
    /* 004061a3: jmp 0x4061c2 */ goto L_004061c2;
L_004061a5:; BB(0x004061a5);
    /* 004061a5: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004061a7: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 004061aa: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4061afu); f_005fb350();
    /* 004061af: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004061b2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004061b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004061b7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004061ba: mov eax, dword ptr [edx + 0xf4] */ r_eax = R32((u32)(r_edx+0xf4u));
    /* 004061c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4061c2u); call_ind(t); }
L_004061c2:; BB(0x004061c2);
    /* 004061c2: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004061c5: mov byte ptr [ecx + 0x7c], 0 */ W8((u32)(r_ecx+0x7cu), 0x0u);
    /* 004061c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004061cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004061d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004061d4: mov esp, ebp */ r_esp = r_ebp;
    /* 004061d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004061d7: ret 0x10 */ FN_RET(0x00405fa0); r_esp += 20; return;
}

void f_004061e0(void) /* BaccaratRoom::vfunc56 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004061e0);
    /* 004061e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004061e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004061e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004061e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004061e7: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 004061e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004061ec: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x4061f1u); f_005fb350();
    /* 004061f1: mov ecx, eax */ r_ecx = r_eax;
    /* 004061f3: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x4061f8u); f_00600230();
    /* 004061f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004061f9: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004061ff: call 0x408ea0 */ r_esp -= 4; W32(r_esp, 0x406204u); f_00408ea0();
    /* 00406204: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00406206: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00406209: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x40620eu); f_005fb350();
    /* 0040620e: mov ecx, eax */ r_ecx = r_eax;
    /* 00406210: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x406215u); f_00600230();
    /* 00406215: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406216: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 0040621c: call 0x408ee0 */ r_esp -= 4; W32(r_esp, 0x406221u); f_00408ee0();
    /* 00406221: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406228: je 0x40624f */ if (fZ) goto L_0040624f;
L_0040622a:; BB(0x0040622a);
    /* 0040622a: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0040622c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0040622f: call 0x5fb350 */ r_esp -= 4; W32(r_esp, 0x406234u); f_005fb350();
    /* 00406234: mov ecx, eax */ r_ecx = r_eax;
    /* 00406236: call 0x600230 */ r_esp -= 4; W32(r_esp, 0x40623bu); f_00600230();
    /* 0040623b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040623e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406240: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00406243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406244: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 0040624a: call 0x5cdd10 */ r_esp -= 4; W32(r_esp, 0x40624fu); f_005cdd10();
L_0040624f:; BB(0x0040624f);
    /* 0040624f: mov ecx, dword ptr [0x7902ec] */ r_ecx = R32((u32)(0x7902ecu));
    /* 00406255: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x40625au); f_005da830();
    /* 0040625a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0040625d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040625f: je 0x40626e */ if (fZ) goto L_0040626e;
L_00406261:; BB(0x00406261);
    /* 00406261: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 00406267: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x40626cu); f_00401cb0();
    /* 0040626c: jmp 0x4062b7 */ goto L_004062b7;
L_0040626e:; BB(0x0040626e);
    /* 0040626e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00406274: call 0x637610 */ r_esp -= 4; W32(r_esp, 0x406279u); f_00637610();
    /* 00406279: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 0040627f: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x406284u); f_00401cb0();
    /* 00406284: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406287: movzx ecx, byte ptr [eax + 0x7c] */ r_ecx = (u32)R8((u32)(r_eax+0x7cu));
    /* 0040628b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040628d: je 0x4062b7 */ if (fZ) goto L_004062b7;
L_0040628f:; BB(0x0040628f);
    /* 0040628f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406292: mov byte ptr [edx + 0x7c], 0 */ W8((u32)(r_edx+0x7cu), 0x0u);
    /* 00406296: mov ecx, dword ptr [0x7902f8] */ r_ecx = R32((u32)(0x7902f8u));
    /* 0040629c: call 0x401cb0 */ r_esp -= 4; W32(r_esp, 0x4062a1u); f_00401cb0();
    /* 004062a1: mov ecx, dword ptr [0x7902f0] */ r_ecx = R32((u32)(0x7902f0u));
    /* 004062a7: call 0x4079b0 */ r_esp -= 4; W32(r_esp, 0x4062acu); f_004079b0();
    /* 004062ac: mov ecx, dword ptr [0x7902f4] */ r_ecx = R32((u32)(0x7902f4u));
    /* 004062b2: call 0x404200 */ r_esp -= 4; W32(r_esp, 0x4062b7u); f_00404200();
L_004062b7:; BB(0x004062b7);
    /* 004062b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004062b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004062ba: ret 8 */ FN_RET(0x004061e0); r_esp += 12; return;
}

void f_004062c0(void) /* BaccaratRoom::vfunc187 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004062c0);
    /* 004062c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004062c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004062c3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004062c6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 004062c9: mov dword ptr [ebp - 0x28], 0x132 */ W32((u32)(r_ebp+0xffffffd8u), 0x132u);
    /* 004062d0: mov dword ptr [ebp - 0x24], 0xd2 */ W32((u32)(r_ebp+0xffffffdcu), 0xd2u);
    /* 004062d7: mov dword ptr [ebp - 0x20], 0xb0 */ W32((u32)(r_ebp+0xffffffe0u), 0xb0u);
    /* 004062de: mov dword ptr [ebp - 0x1c], 0xcf */ W32((u32)(r_ebp+0xffffffe4u), 0xcfu);
    /* 004062e5: mov dword ptr [ebp - 0x18], 0x1ca */ W32((u32)(r_ebp+0xffffffe8u), 0x1cau);
    /* 004062ec: mov dword ptr [ebp - 0x14], 0x82 */ W32((u32)(r_ebp+0xffffffecu), 0x82u);
    /* 004062f3: mov dword ptr [ebp - 0x10], 0x14 */ W32((u32)(r_ebp+0xfffffff0u), 0x14u);
    /* 004062fa: mov dword ptr [ebp - 0xc], 0x86 */ W32((u32)(r_ebp+0xfffffff4u), 0x86u);
    /* 00406301: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00406308: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040630f: cmp dword ptr [ebp + 0xc], 4 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00406313: jge 0x40632d */ if ((fS==fO)) goto L_0040632d;
L_00406315:; BB(0x00406315);
    /* 00406315: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00406318: mov ecx, dword ptr [ebp + eax*8 - 0x28] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xffffffd8u));
    /* 0040631c: mov edx, dword ptr [ebp + eax*8 - 0x24] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xffffffdcu));
    /* 00406320: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406323: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00406325: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00406328: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040632b: jmp 0x406359 */ goto L_00406359;
L_0040632d:; BB(0x0040632d);
    /* 0040632d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0040632f: jne 0x406348 */ if (!fZ) goto L_00406348;
L_00406331:; BB(0x00406331);
    /* 00406331: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00406336: push 0x6b30f0 */ { u32 v = 0x6b30f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040633b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00406340: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x406345u); f_005e9f20();
    /* 00406345: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00406348:; BB(0x00406348);
    /* 00406348: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040634b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0040634e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00406350: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406353: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00406356: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00406359:; BB(0x00406359);
    /* 00406359: mov esp, ebp */ r_esp = r_ebp;
    /* 0040635b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040635c: ret 8 */ FN_RET(0x004062c0); r_esp += 12; return;
}

void f_00406500(void) /* BaccaratRoom::vfunc14 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406500);
    /* 00406500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406501: mov ebp, esp */ r_ebp = r_esp;
    /* 00406503: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406504: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406507: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040650a: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00406510: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00406513: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00406519: mov esp, ebp */ r_esp = r_ebp;
    /* 0040651b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040651c: ret 8 */ FN_RET(0x00406500); r_esp += 12; return;
}

void f_00406520(void) /* BaccaratRoom::vfunc20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406520);
    /* 00406520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406521: mov ebp, esp */ r_ebp = r_esp;
    /* 00406523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406527: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0040652a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040652c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040652d: ret 8 */ FN_RET(0x00406520); r_esp += 12; return;
}

void f_00406530(void) /* BaccaratRoom::vfunc22 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406530);
    /* 00406530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406531: mov ebp, esp */ r_ebp = r_esp;
    /* 00406533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00406535: push 0x69d85b */ { u32 v = 0x69d85bu; r_esp -= 4; W32(r_esp, v); }
    /* 0040653a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00406540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406541: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00406544: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00406549: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040654b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040654c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0040654f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00406555: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00406558: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040655d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x406562u); f_00686d82();
    /* 00406562: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00406565: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00406568: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040656f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00406573: je 0x406586 */ if (fZ) goto L_00406586;
L_00406575:; BB(0x00406575);
    /* 00406575: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00406577: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00406579: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040657c: call 0x650bb0 */ r_esp -= 4; W32(r_esp, 0x406581u); f_00650bb0();
    /* 00406581: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00406584: jmp 0x40658d */ goto L_0040658d;
L_00406586:; BB(0x00406586);
    /* 00406586: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0040658d:; BB(0x0040658d);
    /* 0040658d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00406590: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00406593: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040659a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0040659d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004065a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004065a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004065a8: mov esp, ebp */ r_esp = r_ebp;
    /* 004065aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004065ab: ret  */ FN_RET(0x00406530); r_esp += 4; return;
}

void f_004065b0(void) /* BaccaratRoom::vfunc23 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004065b0);
    /* 004065b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004065b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004065b3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004065b6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004065b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004065bc: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004065bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004065c2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004065c5: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004065c9: je 0x4065de */ if (fZ) goto L_004065de;
L_004065cb:; BB(0x004065cb);
    /* 004065cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004065cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004065d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004065d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004065d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004065d7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4065d9u); call_ind(t); }
    /* 004065d9: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004065dc: jmp 0x4065e5 */ goto L_004065e5;
L_004065de:; BB(0x004065de);
    /* 004065de: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_004065e5:; BB(0x004065e5);
    /* 004065e5: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004065e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004065e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004065ea: ret 4 */ FN_RET(0x004065b0); r_esp += 8; return;
}

void f_004065f0(void) /* BaccaratRoom::vfunc30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004065f0);
    /* 004065f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004065f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004065f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004065f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004065f7: mov eax, 0x6b27f8 */ r_eax = 0x6b27f8u;
    /* 004065fc: mov esp, ebp */ r_esp = r_ebp;
    /* 004065fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004065ff: ret  */ FN_RET(0x004065f0); r_esp += 4; return;
}

void f_00406600(void) /* BaccaratRoom::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406600);
    /* 00406600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406601: mov ebp, esp */ r_ebp = r_esp;
    /* 00406603: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406604: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406607: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040660a: mov byte ptr [eax + 0x40], 0 */ W8((u32)(r_eax+0x40u), 0x0u);
    /* 0040660e: mov esp, ebp */ r_esp = r_ebp;
    /* 00406610: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406611: ret 4 */ FN_RET(0x00406600); r_esp += 8; return;
}

void f_00406620(void) /* BaccaratRoom::vfunc35 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406620);
    /* 00406620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406621: mov ebp, esp */ r_ebp = r_esp;
    /* 00406623: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406624: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406627: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00406629: jne 0x40663f */ if (!fZ) goto L_0040663f;
L_0040662b:; BB(0x0040662b);
    /* 0040662b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0040662d: push 0x6b2f60 */ { u32 v = 0x6b2f60u; r_esp -= 4; W32(r_esp, v); }
    /* 00406632: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00406637: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x40663cu); f_005e9f20();
    /* 0040663c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040663f:; BB(0x0040663f);
    /* 0040663f: mov eax, 1 */ r_eax = 0x1u;
    /* 00406644: mov esp, ebp */ r_esp = r_ebp;
    /* 00406646: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406647: ret  */ FN_RET(0x00406620); r_esp += 4; return;
}

void f_00406660(void) /* BaccaratRoom::vfunc88 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406660);
    /* 00406660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406661: mov ebp, esp */ r_ebp = r_esp;
    /* 00406663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406664: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406667: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040666a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0040666c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040666f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00406672: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x406674u); call_ind(t); }
    /* 00406674: mov esp, ebp */ r_esp = r_ebp;
    /* 00406676: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406677: ret  */ FN_RET(0x00406660); r_esp += 4; return;
}

void f_00406680(void) /* BaccaratRoom::vfunc106 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406680);
    /* 00406680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406681: mov ebp, esp */ r_ebp = r_esp;
    /* 00406683: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406684: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040668a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040668b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040668e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00406690: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406693: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 00406699: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40669bu); call_ind(t); }
    /* 0040669b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040669d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040669e: ret 4 */ FN_RET(0x00406680); r_esp += 8; return;
}

void f_004066c0(void) /* BaccaratRoom::vfunc126 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004066c0);
    /* 004066c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004066c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004066c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004066c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004066c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004066ca: mov al, byte ptr [eax + 0x39] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x39u))) & 0xffu);
    /* 004066cd: mov esp, ebp */ r_esp = r_ebp;
    /* 004066cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004066d0: ret  */ FN_RET(0x004066c0); r_esp += 4; return;
}

void f_004066e0(void) /* BaccaratRoom::vfunc127 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004066e0);
    /* 004066e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004066e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004066e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004066e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004066e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004066ea: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 004066ed: mov byte ptr [eax + 0x39], cl */ W8((u32)(r_eax+0x39u), (u8)r_ecx);
    /* 004066f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004066f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004066f3: ret 4 */ FN_RET(0x004066e0); r_esp += 8; return;
}

void f_00406700(void) /* BaccaratRoom::vfunc128 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406700);
    /* 00406700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406701: mov ebp, esp */ r_ebp = r_esp;
    /* 00406703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406704: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406707: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040670a: mov al, byte ptr [eax + 0x3a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x3au))) & 0xffu);
    /* 0040670d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040670f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406710: ret  */ FN_RET(0x00406700); r_esp += 4; return;
}

void f_00406720(void) /* BaccaratRoom::vfunc129 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406720);
    /* 00406720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406721: mov ebp, esp */ r_ebp = r_esp;
    /* 00406723: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406724: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040672a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0040672d: mov byte ptr [eax + 0x3a], cl */ W8((u32)(r_eax+0x3au), (u8)r_ecx);
    /* 00406730: mov esp, ebp */ r_esp = r_ebp;
    /* 00406732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406733: ret 4 */ FN_RET(0x00406720); r_esp += 8; return;
}

void f_00406740(void) /* BaccaratRoom::vfunc141 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406740);
    /* 00406740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406741: mov ebp, esp */ r_ebp = r_esp;
    /* 00406743: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406744: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406747: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040674a: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040674e: jne 0x40676d */ if (!fZ) goto L_0040676d;
L_00406750:; BB(0x00406750);
    /* 00406750: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00406752: jne 0x40676b */ if (!fZ) goto L_0040676b;
L_00406754:; BB(0x00406754);
    /* 00406754: push 0xe5 */ { u32 v = 0xe5u; r_esp -= 4; W32(r_esp, v); }
    /* 00406759: push 0x6b2f60 */ { u32 v = 0x6b2f60u; r_esp -= 4; W32(r_esp, v); }
    /* 0040675e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00406763: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x406768u); f_005e9f20();
    /* 00406768: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040676b:; BB(0x0040676b);
    /* 0040676b: jmp 0x406778 */ goto L_00406778;
L_0040676d:; BB(0x0040676d);
    /* 0040676d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406770: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00406773: call 0x6523b0 */ r_esp -= 4; W32(r_esp, 0x406778u); f_006523b0();
L_00406778:; BB(0x00406778);
    /* 00406778: mov esp, ebp */ r_esp = r_ebp;
    /* 0040677a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040677b: ret  */ FN_RET(0x00406740); r_esp += 4; return;
}

void f_00406780(void) /* BaccaratRoom::vfunc142 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406780);
    /* 00406780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406781: mov ebp, esp */ r_ebp = r_esp;
    /* 00406783: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406784: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406787: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0040678a: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040678e: jne 0x4067ad */ if (!fZ) goto L_004067ad;
L_00406790:; BB(0x00406790);
    /* 00406790: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00406792: jne 0x4067ab */ if (!fZ) goto L_004067ab;
L_00406794:; BB(0x00406794);
    /* 00406794: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 00406799: push 0x6b2f60 */ { u32 v = 0x6b2f60u; r_esp -= 4; W32(r_esp, v); }
    /* 0040679e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004067a3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4067a8u); f_005e9f20();
    /* 004067a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004067ab:; BB(0x004067ab);
    /* 004067ab: jmp 0x4067e4 */ goto L_004067e4;
L_004067ad:; BB(0x004067ad);
    /* 004067ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004067b0: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004067b3: call 0x6523f0 */ r_esp -= 4; W32(r_esp, 0x4067b8u); f_006523f0();
    /* 004067b8: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004067bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004067be: je 0x4067e4 */ if (fZ) goto L_004067e4;
L_004067c0:; BB(0x004067c0);
    /* 004067c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004067c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004067c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004067c7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004067ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004067cd: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004067d0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004067d2: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004067d5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4067d7u); call_ind(t); }
    /* 004067d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004067d9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004067dc: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004067df: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4067e4u); f_005fc420();
L_004067e4:; BB(0x004067e4);
    /* 004067e4: mov esp, ebp */ r_esp = r_ebp;
    /* 004067e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004067e7: ret 4 */ FN_RET(0x00406780); r_esp += 8; return;
}

void f_004067f0(void) /* BaccaratRoom::vfunc143 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004067f0);
    /* 004067f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004067f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004067f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004067f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 004067f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004067fa: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004067fe: jne 0x40681f */ if (!fZ) goto L_0040681f;
L_00406800:; BB(0x00406800);
    /* 00406800: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00406802: jne 0x40681b */ if (!fZ) goto L_0040681b;
L_00406804:; BB(0x00406804);
    /* 00406804: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 00406809: push 0x6b2f60 */ { u32 v = 0x6b2f60u; r_esp -= 4; W32(r_esp, v); }
    /* 0040680e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00406813: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x406818u); f_005e9f20();
    /* 00406818: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0040681b:; BB(0x0040681b);
    /* 0040681b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040681d: jmp 0x40682e */ goto L_0040682e;
L_0040681f:; BB(0x0040681f);
    /* 0040681f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00406822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00406823: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00406826: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 00406829: call 0x652ad0 */ r_esp -= 4; W32(r_esp, 0x40682eu); f_00652ad0();
L_0040682e:; BB(0x0040682e);
    /* 0040682e: mov esp, ebp */ r_esp = r_ebp;
    /* 00406830: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406831: ret 4 */ FN_RET(0x004067f0); r_esp += 8; return;
}

void f_00406860(void) /* BaccaratRoom::vfunc149 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406860);
    /* 00406860: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406861: mov ebp, esp */ r_ebp = r_esp;
    /* 00406863: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406864: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406867: mov eax, 0x30d403 */ r_eax = 0x30d403u;
    /* 0040686c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040686e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040686f: ret  */ FN_RET(0x00406860); r_esp += 4; return;
}

void f_00406870(void) /* BaccaratRoom::vfunc105 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406870);
    /* 00406870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406871: mov ebp, esp */ r_ebp = r_esp;
    /* 00406873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406874: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406877: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040687a: sub eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040687d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040687f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00406880: ret 4 */ FN_RET(0x00406870); r_esp += 8; return;
}

void f_00406890(void) /* BaccaratRoom::vfunc189 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00406890);
    /* 00406890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00406891: mov ebp, esp */ r_ebp = r_esp;
    /* 00406893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00406894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00406897: mov eax, 8 */ r_eax = 0x8u;
    /* 0040689c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040689e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040689f: ret  */ FN_RET(0x00406890); r_esp += 4; return;
}

void f_00407380(void) /* BaccaratRoom::vfunc57 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00407380);
    /* 00407380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00407381: mov ebp, esp */ r_ebp = r_esp;
    /* 00407383: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00407384: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00407387: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00407389: mov esp, ebp */ r_esp = r_ebp;
    /* 0040738b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040738c: ret 8 */ FN_RET(0x00407380); r_esp += 12; return;
}

void f_005d8020(void) /* BaccaratRoom::vfunc3 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8020);
    /* 005d8020: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8021: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8023: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8026: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005d8029: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d802c: call 0x64d030 */ r_esp -= 4; W32(r_esp, 0x5d8031u); f_0064d030();
    /* 005d8031: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8033: push 0x30dfba */ { u32 v = 0x30dfbau; r_esp -= 4; W32(r_esp, v); }
    /* 005d8038: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d803b: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5d8040u); f_005f2a60();
    /* 005d8040: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d8043: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8047: je 0x5d808c */ if (fZ) goto L_005d808c;
L_005d8049:; BB(0x005d8049);
    /* 005d8049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d804b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d8050u); f_005dcb00();
    /* 005d8050: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8053: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d8056: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d8059: mov cl, byte ptr [eax + 0x4a0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4a0u))) & 0xffu);
    /* 005d805f: mov byte ptr [ebp - 0x2d], cl */ W8((u32)(r_ebp+0xffffffd3u), (u8)r_ecx);
    /* 005d8062: movzx edx, byte ptr [ebp - 0x2d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffd3u));
    /* 005d8066: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8068: je 0x5d807c */ if (fZ) goto L_005d807c;
L_005d806a:; BB(0x005d806a);
    /* 005d806a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d806d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d806f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8072: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 005d8078: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d807au); call_ind(t); }
    /* 005d807a: jmp 0x5d808c */ goto L_005d808c;
L_005d807c:; BB(0x005d807c);
    /* 005d807c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d807f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8081: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8084: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 005d808a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d808cu); call_ind(t); }
L_005d808c:; BB(0x005d808c);
    /* 005d808c: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x5d8092u); call_ind(t); }
    /* 005d8092: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d8095: sub eax, dword ptr [ecx + 0x60] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x60u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d8098: cmp eax, 0x493e0 */ {  u32 a = r_eax; u32 b = 0x493e0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005d809d: jae 0x5d80a1 */ if (!fC) goto L_005d80a1;
L_005d809f:; BB(0x005d809f);
    /* 005d809f: jmp 0x5d810b */ goto L_005d810b;
L_005d80a1:; BB(0x005d80a1);
    /* 005d80a1: call dword ptr [0x6b20bc] */ { u32 t = R32((u32)(0x6b20bcu)); r_esp -= 4; W32(r_esp, 0x5d80a7u); call_ind(t); }
    /* 005d80a7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d80aa: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 005d80ad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d80b3: call 0x636c50 */ r_esp -= 4; W32(r_esp, 0x5d80b8u); f_00636c50();
    /* 005d80b8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d80bb: cmp dword ptr [ebp - 8], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d80bf: jne 0x5d80c3 */ if (!fZ) goto L_005d80c3;
L_005d80c1:; BB(0x005d80c1);
    /* 005d80c1: jmp 0x5d810b */ goto L_005d810b;
L_005d80c3:; BB(0x005d80c3);
    /* 005d80c3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d80c6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d80c9: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 005d80d0: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 005d80d7: fldz  */ FPUSH(0.0);
    /* 005d80d9: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 005d80dc: fld qword ptr [0x6b3e40] */ FPUSH(R_F64((u32)(0x6b3e40u)));
    /* 005d80e2: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005d80e5: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d80e8: call 0x5d8110 */ r_esp -= 4; W32(r_esp, 0x5d80edu); f_005d8110();
    /* 005d80ed: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d80f0: cmp dword ptr [ebp - 0x24], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d80f4: je 0x5d810b */ if (fZ) goto L_005d810b;
L_005d80f6:; BB(0x005d80f6);
    /* 005d80f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d80f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d80fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d80fc: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005d80ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8100: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d8106: call 0x639390 */ r_esp -= 4; W32(r_esp, 0x5d810bu); f_00639390();
L_005d810b:; BB(0x005d810b);
    /* 005d810b: mov esp, ebp */ r_esp = r_ebp;
    /* 005d810d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d810e: ret  */ FN_RET(0x005d8020); r_esp += 4; return;
}

void f_005d8710(void) /* BaccaratRoom::vfunc90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8710);
    /* 005d8710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8711: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8713: sub esp, 0x14c */ {  u32 a = r_esp; u32 b = 0x14cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8719: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d871e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8720: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d8723: mov dword ptr [ebp - 0x14c], ecx */ W32((u32)(r_ebp+0xfffffeb4u), r_ecx);
    /* 005d8729: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 005d872f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8731: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 005d8737: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d873d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d873fu); call_ind(t); }
    /* 005d873f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8742: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8744: je 0x5d874d */ if (fZ) goto L_005d874d;
L_005d8746:; BB(0x005d8746);
    /* 005d8746: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d8748: jmp 0x5d8835 */ goto L_005d8835;
L_005d874d:; BB(0x005d874d);
    /* 005d874d: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 005d8753: call 0x5da810 */ r_esp -= 4; W32(r_esp, 0x5d8758u); f_005da810();
    /* 005d8758: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d875b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d875d: je 0x5d8766 */ if (fZ) goto L_005d8766;
L_005d875f:; BB(0x005d875f);
    /* 005d875f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d8761: jmp 0x5d8835 */ goto L_005d8835;
L_005d8766:; BB(0x005d8766);
    /* 005d8766: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 005d876c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d8771u); f_005da7b0();
    /* 005d8771: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d8774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8776: je 0x5d87be */ if (fZ) goto L_005d87be;
L_005d8778:; BB(0x005d8778);
    /* 005d8778: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d877a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d8780: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5d8785u); f_00635cb0();
    /* 005d8785: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8788: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d878a: jne 0x5d87be */ if (!fZ) goto L_005d87be;
L_005d878c:; BB(0x005d878c);
    /* 005d878c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d878e: push 0x6d4390 */ { u32 v = 0x6d4390u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8793: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d8798u); f_00630f40();
    /* 005d8798: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d879b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d879c: push 0x6d4368 */ { u32 v = 0x6d4368u; r_esp -= 4; W32(r_esp, v); }
    /* 005d87a1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d87a6u); f_00630f40();
    /* 005d87a6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d87a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d87aa: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5d87afu); f_0062ff10();
    /* 005d87af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d87b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d87b4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d87b7: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d87ba: mov al, dl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_edx) & 0xffu);
    /* 005d87bc: jmp 0x5d8835 */ goto L_005d8835;
L_005d87be:; BB(0x005d87be);
    /* 005d87be: lea eax, [ebp - 0x148] */ r_eax = (u32)(r_ebp+0xfffffeb8u);
    /* 005d87c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d87c5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d87cb: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x5d87d0u); f_005f3bf0();
    /* 005d87d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d87d1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d87d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d87d9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d87df: mov eax, dword ptr [edx + 0x338] */ r_eax = R32((u32)(r_edx+0x338u));
    /* 005d87e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d87e7u); call_ind(t); }
    /* 005d87e7: lea ecx, [ebp - 0x148] */ r_ecx = (u32)(r_ebp+0xfffffeb8u);
    /* 005d87ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d87ee: push 0x6d433c */ { u32 v = 0x6d433cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d87f3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d87f8u); f_00630f40();
    /* 005d87f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d87fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d87fc: lea edx, [ebp - 0x108] */ r_edx = (u32)(r_ebp+0xfffffef8u);
    /* 005d8802: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8803: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5d8809u); call_ind(t); }
    /* 005d8809: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d880c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d880e: push 0x6d4390 */ { u32 v = 0x6d4390u; r_esp -= 4; W32(r_esp, v); }
    /* 005d8813: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d8818u); f_00630f40();
    /* 005d8818: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d881b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d881c: lea eax, [ebp - 0x108] */ r_eax = (u32)(r_ebp+0xfffffef8u);
    /* 005d8822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8823: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5d8828u); f_0062ff10();
    /* 005d8828: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d882b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d882d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8830: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d8833: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
L_005d8835:; BB(0x005d8835);
    /* 005d8835: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8838: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d883a: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d883fu); f_00686d72();
    /* 005d883f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8841: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8842: ret  */ FN_RET(0x005d8710); r_esp += 4; return;
}

void f_005d8c80(void) /* BaccaratRoom::vfunc64 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8c80);
    /* 005d8c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c81: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8c83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8c84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8c87: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005d8c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8c90: je 0x5d8c96 */ if (fZ) goto L_005d8c96;
L_005d8c92:; BB(0x005d8c92);
    /* 005d8c92: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d8c94: jmp 0x5d8cb0 */ goto L_005d8cb0;
L_005d8c96:; BB(0x005d8c96);
    /* 005d8c96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8c99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8c9b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8c9e: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d8ca4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8ca6u); call_ind(t); }
    /* 005d8ca6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d8ca9: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 005d8cab: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 005d8cad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_005d8cb0:; BB(0x005d8cb0);
    /* 005d8cb0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8cb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8cb3: ret  */ FN_RET(0x005d8c80); r_esp += 4; return;
}

void f_005d8cc0(void) /* BaccaratRoom::vfunc65 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8cc0);
    /* 005d8cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8cc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8cc4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d8cc7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8cca: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5d8ccfu); f_005da830();
    /* 005d8ccf: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8cd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8cd2: ret  */ FN_RET(0x005d8cc0); r_esp += 4; return;
}

void f_005d8ce0(void) /* BaccaratRoom::vfunc76 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8ce0);
    /* 005d8ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8ce3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8ce6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d8ce9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8cec: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d8cf1u); f_005da7b0();
    /* 005d8cf1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d8cf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8cf6: jne 0x5d8d12 */ if (!fZ) goto L_005d8d12;
L_005d8cf8:; BB(0x005d8cf8);
    /* 005d8cf8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005d8cfe: movzx edx, byte ptr [ecx + 0x4ee9] */ r_edx = (u32)R8((u32)(r_ecx+0x4ee9u));
    /* 005d8d05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8d07: jne 0x5d8d12 */ if (!fZ) goto L_005d8d12;
L_005d8d09:; BB(0x005d8d09);
    /* 005d8d09: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 005d8d10: jmp 0x5d8d19 */ goto L_005d8d19;
L_005d8d12:; BB(0x005d8d12);
    /* 005d8d12: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
L_005d8d19:; BB(0x005d8d19);
    /* 005d8d19: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 005d8d1c: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005d8d1f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8d22: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d8d24: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d8d27: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d8d2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d8d2fu); call_ind(t); }
    /* 005d8d2f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8d32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8d34: je 0x5d8d47 */ if (fZ) goto L_005d8d47;
L_005d8d36:; BB(0x005d8d36);
    /* 005d8d36: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005d8d3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8d3c: jne 0x5d8d47 */ if (!fZ) goto L_005d8d47;
L_005d8d3e:; BB(0x005d8d3e);
    /* 005d8d3e: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005d8d45: jmp 0x5d8d4e */ goto L_005d8d4e;
L_005d8d47:; BB(0x005d8d47);
    /* 005d8d47: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_005d8d4e:; BB(0x005d8d4e);
    /* 005d8d4e: mov al, byte ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff0u))) & 0xffu);
    /* 005d8d51: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8d53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8d54: ret 4 */ FN_RET(0x005d8ce0); r_esp += 8; return;
}

void f_005d8d60(void) /* BaccaratRoom::vfunc80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d8d60);
    /* 005d8d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d8d61: mov ebp, esp */ r_ebp = r_esp;
    /* 005d8d63: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d8d66: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005d8d69: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8d6d: je 0x5d8e92 */ if (fZ) goto L_005d8e92;
L_005d8d73:; BB(0x005d8d73);
    /* 005d8d73: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d8d78: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 005d8d7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d8d7e: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005d8d81: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d8d84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d8d87: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8d8cu); f_0063aac0();
    /* 005d8d8c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d8d8e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d8d91: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8d94: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8d99u); f_0063aac0();
    /* 005d8d99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8d9b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d8d9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d8da0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8da4: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d8da7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d8daa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d8dac: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8db0: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005d8db3: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005d8db6: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8db8: jne 0x5d8e92 */ if (!fZ) goto L_005d8e92;
L_005d8dbe:; BB(0x005d8dbe);
    /* 005d8dbe: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8dc1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8dc6u); f_0063aac0();
    /* 005d8dc6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8dc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d8dcc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d8dd2: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005d8dd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8dd8: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005d8ddb: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d8dde: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d8de1: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8de6u); f_0063aac0();
    /* 005d8de6: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8de9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d8dec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d8def: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8df0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d8df3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d8df4: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5d8df9u); f_00686ec0();
    /* 005d8df9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d8dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8dfe: jne 0x5d8e92 */ if (!fZ) goto L_005d8e92;
L_005d8e04:; BB(0x005d8e04);
    /* 005d8e04: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d8e0a: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 005d8e0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d8e10: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005d8e13: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d8e16: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8e19: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8e1eu); f_0063aac0();
    /* 005d8e1e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8e20: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005d8e23: cmp dword ptr [ebp - 0x20], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8e27: je 0x5d8e45 */ if (fZ) goto L_005d8e45;
L_005d8e29:; BB(0x005d8e29);
    /* 005d8e29: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d8e2c: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8e31u); f_0063aac0();
    /* 005d8e31: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d8e33: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d8e36: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8e3a: je 0x5d8e45 */ if (fZ) goto L_005d8e45;
L_005d8e3c:; BB(0x005d8e3c);
    /* 005d8e3c: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005d8e43: jmp 0x5d8e4c */ goto L_005d8e4c;
L_005d8e45:; BB(0x005d8e45);
    /* 005d8e45: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
L_005d8e4c:; BB(0x005d8e4c);
    /* 005d8e4c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8e4f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8e54u); f_0063aac0();
    /* 005d8e54: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d8e56: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d8e59: cmp dword ptr [ebp - 0x2c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8e5d: je 0x5d8e7b */ if (fZ) goto L_005d8e7b;
L_005d8e5f:; BB(0x005d8e5f);
    /* 005d8e5f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8e62: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8e67u); f_0063aac0();
    /* 005d8e67: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d8e69: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 005d8e6c: cmp dword ptr [ebp - 0x30], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8e70: je 0x5d8e7b */ if (fZ) goto L_005d8e7b;
L_005d8e72:; BB(0x005d8e72);
    /* 005d8e72: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005d8e79: jmp 0x5d8e82 */ goto L_005d8e82;
L_005d8e7b:; BB(0x005d8e7b);
    /* 005d8e7b: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_005d8e82:; BB(0x005d8e82);
    /* 005d8e82: movzx eax, byte ptr [ebp - 0x40] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffc0u));
    /* 005d8e86: movzx ecx, byte ptr [ebp - 0x44] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 005d8e8a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8e8c: je 0x5d8f3b */ if (fZ) goto L_005d8f3b;
L_005d8e92:; BB(0x005d8e92);
    /* 005d8e92: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8e95: mov byte ptr [edx + 0x7c], 1 */ W8((u32)(r_edx+0x7cu), 0x1u);
    /* 005d8e99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d8ea0: jmp 0x5d8eab */ goto L_005d8eab;
L_005d8ea2:; BB(0x005d8ea2);
    /* 005d8ea2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8ea5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d8ea8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005d8eab:; BB(0x005d8eab);
    /* 005d8eab: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d8eaf: jge 0x5d8ec7 */ if ((fS==fO)) goto L_005d8ec7;
L_005d8eb1:; BB(0x005d8eb1);
    /* 005d8eb1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d8eb4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8eb5: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8eb8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8eba: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8ebd: mov edx, dword ptr [eax + 0x290] */ r_edx = R32((u32)(r_eax+0x290u));
    /* 005d8ec3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d8ec5u); call_ind(t); }
    /* 005d8ec5: jmp 0x5d8ea2 */ goto L_005d8ea2;
L_005d8ec7:; BB(0x005d8ec7);
    /* 005d8ec7: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8ece: je 0x5d8f21 */ if (fZ) goto L_005d8f21;
L_005d8ed0:; BB(0x005d8ed0);
    /* 005d8ed0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8ed3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8ed8u); f_0063aac0();
    /* 005d8ed8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d8eda: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005d8edd: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8ee1: je 0x5d8eff */ if (fZ) goto L_005d8eff;
L_005d8ee3:; BB(0x005d8ee3);
    /* 005d8ee3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8ee6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d8eebu); f_0063aac0();
    /* 005d8eeb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d8eed: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005d8ef0: cmp dword ptr [ebp - 0x38], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8ef4: je 0x5d8eff */ if (fZ) goto L_005d8eff;
L_005d8ef6:; BB(0x005d8ef6);
    /* 005d8ef6: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005d8efd: jmp 0x5d8f06 */ goto L_005d8f06;
L_005d8eff:; BB(0x005d8eff);
    /* 005d8eff: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_005d8f06:; BB(0x005d8f06);
    /* 005d8f06: movzx edx, byte ptr [ebp - 0x48] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffb8u));
    /* 005d8f0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8f0c: je 0x5d8f21 */ if (fZ) goto L_005d8f21;
L_005d8f0e:; BB(0x005d8f0e);
    /* 005d8f0e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8f11: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5d8f16u); f_005da830();
    /* 005d8f16: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d8f19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8f1b: je 0x5d8f21 */ if (fZ) goto L_005d8f21;
L_005d8f1d:; BB(0x005d8f1d);
    /* 005d8f1d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005d8f1f: jmp 0x5d8f3d */ goto L_005d8f3d;
L_005d8f21:; BB(0x005d8f21);
    /* 005d8f21: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d8f25: je 0x5d8f3b */ if (fZ) goto L_005d8f3b;
L_005d8f27:; BB(0x005d8f27);
    /* 005d8f27: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d8f2a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d8f2b: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8f2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d8f30: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d8f33: mov edx, dword ptr [eax + 0x264] */ r_edx = R32((u32)(r_eax+0x264u));
    /* 005d8f39: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d8f3bu); call_ind(t); }
L_005d8f3b:; BB(0x005d8f3b);
    /* 005d8f3b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005d8f3d:; BB(0x005d8f3d);
    /* 005d8f3d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d8f3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d8f40: ret 0xc */ FN_RET(0x005d8d60); r_esp += 16; return;
}

void f_005d92f0(void) /* BaccaratRoom::vfunc155 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d92f0);
    /* 005d92f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d92f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d92f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d92f6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d92f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d92fc: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005d9302: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9305: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 005d930b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d930e: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5d9313u); f_005da830();
    /* 005d9313: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d9316: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9318: je 0x5d93a7 */ if (fZ) goto L_005d93a7;
L_005d931e:; BB(0x005d931e);
    /* 005d931e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9321: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5d9326u); f_005da880();
    /* 005d9326: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9329: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005d932b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d932e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9330: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d9333: cmp dword ptr [ebp - 8], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d933a: jg 0x5d9359 */ if ((!fZ&&fS==fO)) goto L_005d9359;
L_005d933c:; BB(0x005d933c);
    /* 005d933c: cmp dword ptr [ebp - 8], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9343: je 0x5d9383 */ if (fZ) goto L_005d9383;
L_005d9345:; BB(0x005d9345);
    /* 005d9345: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d934c: je 0x5d936d */ if (fZ) goto L_005d936d;
L_005d934e:; BB(0x005d934e);
    /* 005d934e: cmp dword ptr [ebp - 8], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9355: je 0x5d9378 */ if (fZ) goto L_005d9378;
L_005d9357:; BB(0x005d9357);
    /* 005d9357: jmp 0x5d93a2 */ goto L_005d93a2;
L_005d9359:; BB(0x005d9359);
    /* 005d9359: cmp dword ptr [ebp - 8], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9360: je 0x5d938e */ if (fZ) goto L_005d938e;
L_005d9362:; BB(0x005d9362);
    /* 005d9362: cmp dword ptr [ebp - 8], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9369: je 0x5d9399 */ if (fZ) goto L_005d9399;
L_005d936b:; BB(0x005d936b);
    /* 005d936b: jmp 0x5d93a2 */ goto L_005d93a2;
L_005d936d:; BB(0x005d936d);
    /* 005d936d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9370: mov dword ptr [ecx], 0xa */ W32((u32)(r_ecx), 0xau);
    /* 005d9376: jmp 0x5d93a2 */ goto L_005d93a2;
L_005d9378:; BB(0x005d9378);
    /* 005d9378: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d937b: mov dword ptr [edx], 0x19 */ W32((u32)(r_edx), 0x19u);
    /* 005d9381: jmp 0x5d93a2 */ goto L_005d93a2;
L_005d9383:; BB(0x005d9383);
    /* 005d9383: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9386: mov dword ptr [eax], 0xfa */ W32((u32)(r_eax), 0xfau);
    /* 005d938c: jmp 0x5d93a2 */ goto L_005d93a2;
L_005d938e:; BB(0x005d938e);
    /* 005d938e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9391: mov dword ptr [ecx], 0x3e8 */ W32((u32)(r_ecx), 0x3e8u);
    /* 005d9397: jmp 0x5d93a2 */ goto L_005d93a2;
L_005d9399:; BB(0x005d9399);
    /* 005d9399: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d939c: mov dword ptr [edx], 0x1388 */ W32((u32)(r_edx), 0x1388u);
L_005d93a2:; BB(0x005d93a2);
    /* 005d93a2: jmp 0x5d94aa */ goto L_005d94aa;
L_005d93a7:; BB(0x005d93a7);
    /* 005d93a7: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005d93ac: mov ecx, dword ptr [eax + 0x4f0c] */ r_ecx = R32((u32)(r_eax+0x4f0cu));
    /* 005d93b2: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d93b5: cmp dword ptr [ebp - 0xc], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d93b9: jg 0x5d93dc */ if ((!fZ&&fS==fO)) goto L_005d93dc;
L_005d93bb:; BB(0x005d93bb);
    /* 005d93bb: cmp dword ptr [ebp - 0xc], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93bf: je 0x5d9453 */ if (fZ) goto L_005d9453;
L_005d93c5:; BB(0x005d93c5);
    /* 005d93c5: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93c9: je 0x5d9400 */ if (fZ) goto L_005d9400;
L_005d93cb:; BB(0x005d93cb);
    /* 005d93cb: cmp dword ptr [ebp - 0xc], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93cf: je 0x5d9417 */ if (fZ) goto L_005d9417;
L_005d93d1:; BB(0x005d93d1);
    /* 005d93d1: cmp dword ptr [ebp - 0xc], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93d5: je 0x5d942b */ if (fZ) goto L_005d942b;
L_005d93d7:; BB(0x005d93d7);
    /* 005d93d7: jmp 0x5d948f */ goto L_005d948f;
L_005d93dc:; BB(0x005d93dc);
    /* 005d93dc: cmp dword ptr [ebp - 0xc], 0xfa */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93e3: je 0x5d943f */ if (fZ) goto L_005d943f;
L_005d93e5:; BB(0x005d93e5);
    /* 005d93e5: cmp dword ptr [ebp - 0xc], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93ec: je 0x5d9467 */ if (fZ) goto L_005d9467;
L_005d93ee:; BB(0x005d93ee);
    /* 005d93ee: cmp dword ptr [ebp - 0xc], 0x4d2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x4d2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d93f5: je 0x5d947b */ if (fZ) goto L_005d947b;
L_005d93fb:; BB(0x005d93fb);
    /* 005d93fb: jmp 0x5d948f */ goto L_005d948f;
L_005d9400:; BB(0x005d9400);
    /* 005d9400: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9403: mov dword ptr [edx], 5 */ W32((u32)(r_edx), 0x5u);
    /* 005d9409: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d940c: mov dword ptr [eax], 0x3e8 */ W32((u32)(r_eax), 0x3e8u);
    /* 005d9412: jmp 0x5d94aa */ goto L_005d94aa;
L_005d9417:; BB(0x005d9417);
    /* 005d9417: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d941a: mov dword ptr [ecx], 0xa */ W32((u32)(r_ecx), 0xau);
    /* 005d9420: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d9423: mov dword ptr [edx], 0x7d0 */ W32((u32)(r_edx), 0x7d0u);
    /* 005d9429: jmp 0x5d94aa */ goto L_005d94aa;
L_005d942b:; BB(0x005d942b);
    /* 005d942b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d942e: mov dword ptr [eax], 0x19 */ W32((u32)(r_eax), 0x19u);
    /* 005d9434: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9437: mov dword ptr [ecx], 0xbb8 */ W32((u32)(r_ecx), 0xbb8u);
    /* 005d943d: jmp 0x5d94aa */ goto L_005d94aa;
L_005d943f:; BB(0x005d943f);
    /* 005d943f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9442: mov dword ptr [edx], 0xfa */ W32((u32)(r_edx), 0xfau);
    /* 005d9448: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d944b: mov dword ptr [eax], 0x1f4 */ W32((u32)(r_eax), 0x1f4u);
    /* 005d9451: jmp 0x5d94aa */ goto L_005d94aa;
L_005d9453:; BB(0x005d9453);
    /* 005d9453: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9456: mov dword ptr [ecx], 0x64 */ W32((u32)(r_ecx), 0x64u);
    /* 005d945c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d945f: mov dword ptr [edx], 0x3b9aca00 */ W32((u32)(r_edx), 0x3b9aca00u);
    /* 005d9465: jmp 0x5d94aa */ goto L_005d94aa;
L_005d9467:; BB(0x005d9467);
    /* 005d9467: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d946a: mov dword ptr [eax], 0x3e8 */ W32((u32)(r_eax), 0x3e8u);
    /* 005d9470: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9473: mov dword ptr [ecx], 0x7d0 */ W32((u32)(r_ecx), 0x7d0u);
    /* 005d9479: jmp 0x5d94aa */ goto L_005d94aa;
L_005d947b:; BB(0x005d947b);
    /* 005d947b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d947e: mov dword ptr [edx], 5 */ W32((u32)(r_edx), 0x5u);
    /* 005d9484: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d9487: mov dword ptr [eax], 0x3b9aca00 */ W32((u32)(r_eax), 0x3b9aca00u);
    /* 005d948d: jmp 0x5d94aa */ goto L_005d94aa;
L_005d948f:; BB(0x005d948f);
    /* 005d948f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005d9491: jne 0x5d94aa */ if (!fZ) goto L_005d94aa;
L_005d9493:; BB(0x005d9493);
    /* 005d9493: push 0x28a */ { u32 v = 0x28au; r_esp -= 4; W32(r_esp, v); }
    /* 005d9498: push 0x6d43a4 */ { u32 v = 0x6d43a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d949d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005d94a2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d94a7u); f_005e9f20();
    /* 005d94a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d94aa:; BB(0x005d94aa);
    /* 005d94aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005d94ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d94ad: ret 8 */ FN_RET(0x005d92f0); r_esp += 12; return;
}

void f_005d9550(void) /* BaccaratRoom::vfunc103 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9550);
    /* 005d9550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9551: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9553: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9554: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9557: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 005d955c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d955e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d955f: ret  */ FN_RET(0x005d9550); r_esp += 4; return;
}

void f_005d9670(void) /* BaccaratRoom::vfunc153 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9670);
    /* 005d9670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9671: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9673: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9676: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 005d9679: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005d967b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9681: call 0x635cb0 */ r_esp -= 4; W32(r_esp, 0x5d9686u); f_00635cb0();
    /* 005d9686: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d9689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d968b: jne 0x5d96fd */ if (!fZ) goto L_005d96fd;
L_005d968d:; BB(0x005d968d);
    /* 005d968d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9690: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9692: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9695: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d9698: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d969au); call_ind(t); }
    /* 005d969a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d969d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d969f: je 0x5d96fd */ if (fZ) goto L_005d96fd;
L_005d96a1:; BB(0x005d96a1);
    /* 005d96a1: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d96a4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d96a6: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d96a9: mov edx, dword ptr [eax + 0x268] */ r_edx = R32((u32)(r_eax+0x268u));
    /* 005d96af: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d96b1u); call_ind(t); }
    /* 005d96b1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d96b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d96b6: je 0x5d96fd */ if (fZ) goto L_005d96fd;
L_005d96b8:; BB(0x005d96b8);
    /* 005d96b8: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005d96bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d96bc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d96bf: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d96c4u); f_005d5a90();
    /* 005d96c4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d96c6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005d96c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d96cc: mov dword ptr [ecx + 0x4e4], edx */ W32((u32)(r_ecx+0x4e4u), r_edx);
    /* 005d96d2: mov dword ptr [ecx + 0x4e8], eax */ W32((u32)(r_ecx+0x4e8u), r_eax);
    /* 005d96d8: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005d96db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d96dc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d96df: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d96e4u); f_005d5a90();
    /* 005d96e4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d96e6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d96e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d96ec: mov dword ptr [eax + 0x4ec], ecx */ W32((u32)(r_eax+0x4ecu), r_ecx);
    /* 005d96f2: mov dword ptr [eax + 0x4f0], edx */ W32((u32)(r_eax+0x4f0u), r_edx);
    /* 005d96f8: jmp 0x5d994d */ goto L_005d994d;
L_005d96fd:; BB(0x005d96fd);
    /* 005d96fd: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9700: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5d9705u); f_005da830();
    /* 005d9705: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d9708: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d970a: je 0x5d9782 */ if (fZ) goto L_005d9782;
L_005d970c:; BB(0x005d970c);
    /* 005d970c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d970f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d9714u); f_0063aac0();
    /* 005d9714: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9716: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 005d9719: cmp dword ptr [ebp - 0x5c], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d971d: je 0x5d973b */ if (fZ) goto L_005d973b;
L_005d971f:; BB(0x005d971f);
    /* 005d971f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9722: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d9727u); f_0063aac0();
    /* 005d9727: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005d9729: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005d972c: cmp dword ptr [ebp - 0x60], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9730: je 0x5d973b */ if (fZ) goto L_005d973b;
L_005d9732:; BB(0x005d9732);
    /* 005d9732: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 005d9739: jmp 0x5d9742 */ goto L_005d9742;
L_005d973b:; BB(0x005d973b);
    /* 005d973b: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
L_005d9742:; BB(0x005d9742);
    /* 005d9742: movzx ecx, byte ptr [ebp - 0x70] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff90u));
    /* 005d9746: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9748: je 0x5d9754 */ if (fZ) goto L_005d9754;
L_005d974a:; BB(0x005d974a);
    /* 005d974a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d974d: call 0x5d7390 */ r_esp -= 4; W32(r_esp, 0x5d9752u); f_005d7390();
    /* 005d9752: jmp 0x5d977d */ goto L_005d977d;
L_005d9754:; BB(0x005d9754);
    /* 005d9754: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9756: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d9759: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5d975eu); f_005da880();
    /* 005d975e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d975f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d9764u); f_0064c8a0();
    /* 005d9764: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9767: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d976a: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005d976d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d9770: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9771: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9775: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9778: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d977du); f_005d5af0();
L_005d977d:; BB(0x005d977d);
    /* 005d977d: jmp 0x5d990d */ goto L_005d990d;
L_005d9782:; BB(0x005d9782);
    /* 005d9782: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9785: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d978au); f_0063aac0();
    /* 005d978a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d978c: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005d978f: cmp dword ptr [ebp - 0x64], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9793: je 0x5d97b1 */ if (fZ) goto L_005d97b1;
L_005d9795:; BB(0x005d9795);
    /* 005d9795: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9798: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5d979du); f_0063aac0();
    /* 005d979d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d979f: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 005d97a2: cmp dword ptr [ebp - 0x68], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d97a6: je 0x5d97b1 */ if (fZ) goto L_005d97b1;
L_005d97a8:; BB(0x005d97a8);
    /* 005d97a8: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005d97af: jmp 0x5d97b8 */ goto L_005d97b8;
L_005d97b1:; BB(0x005d97b1);
    /* 005d97b1: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
L_005d97b8:; BB(0x005d97b8);
    /* 005d97b8: movzx eax, byte ptr [ebp - 0x74] */ r_eax = (u32)R8((u32)(r_ebp+0xffffff8cu));
    /* 005d97bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d97be: jne 0x5d990d */ if (!fZ) goto L_005d990d;
L_005d97c4:; BB(0x005d97c4);
    /* 005d97c4: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005d97c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d97c8: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 005d97cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d97cc: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 005d97cf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d97d1: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 005d97d4: mov eax, dword ptr [edx + 0x26c] */ r_eax = R32((u32)(r_edx+0x26cu));
    /* 005d97da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d97dcu); call_ind(t); }
    /* 005d97dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d97df: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 005d97e2: cmp dword ptr [ebp - 0x78], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d97e6: jg 0x5d980e */ if ((!fZ&&fS==fO)) goto L_005d980e;
L_005d97e8:; BB(0x005d97e8);
    /* 005d97e8: cmp dword ptr [ebp - 0x78], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d97ec: je 0x5d98e8 */ if (fZ) goto L_005d98e8;
L_005d97f2:; BB(0x005d97f2);
    /* 005d97f2: cmp dword ptr [ebp - 0x78], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d97f6: je 0x5d9843 */ if (fZ) goto L_005d9843;
L_005d97f8:; BB(0x005d97f8);
    /* 005d97f8: cmp dword ptr [ebp - 0x78], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d97fc: je 0x5d989a */ if (fZ) goto L_005d989a;
L_005d9802:; BB(0x005d9802);
    /* 005d9802: cmp dword ptr [ebp - 0x78], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9806: je 0x5d98c1 */ if (fZ) goto L_005d98c1;
L_005d980c:; BB(0x005d980c);
    /* 005d980c: jmp 0x5d9828 */ goto L_005d9828;
L_005d980e:; BB(0x005d980e);
    /* 005d980e: cmp dword ptr [ebp - 0x78], 0xfa */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0xfau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9815: je 0x5d990d */ if (fZ) goto L_005d990d;
L_005d981b:; BB(0x005d981b);
    /* 005d981b: cmp dword ptr [ebp - 0x78], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9822: je 0x5d990d */ if (fZ) goto L_005d990d;
L_005d9828:; BB(0x005d9828);
    /* 005d9828: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005d982a: jne 0x5d9843 */ if (!fZ) goto L_005d9843;
L_005d982c:; BB(0x005d982c);
    /* 005d982c: push 0x2dd */ { u32 v = 0x2ddu; r_esp -= 4; W32(r_esp, v); }
    /* 005d9831: push 0x6d43a4 */ { u32 v = 0x6d43a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9836: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005d983b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5d9840u); f_005e9f20();
    /* 005d9840: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d9843:; BB(0x005d9843);
    /* 005d9843: cmp dword ptr [ebp - 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d984a: jne 0x5d9873 */ if (!fZ) goto L_005d9873;
L_005d984c:; BB(0x005d984c);
    /* 005d984c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d984e: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9853: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d9858u); f_0064c8a0();
    /* 005d9858: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d985b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d985e: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005d9861: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d9864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9865: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d9868: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9869: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d986c: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d9871u); f_005d5af0();
    /* 005d9871: jmp 0x5d9898 */ goto L_005d9898;
L_005d9873:; BB(0x005d9873);
    /* 005d9873: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9875: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d987a: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d987fu); f_0064c8a0();
    /* 005d987f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9882: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005d9885: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d9888: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d988c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d988f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9890: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9893: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d9898u); f_005d5af0();
L_005d9898:; BB(0x005d9898);
    /* 005d9898: jmp 0x5d990d */ goto L_005d990d;
L_005d989a:; BB(0x005d989a);
    /* 005d989a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d989c: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 005d98a1: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d98a6u); f_0064c8a0();
    /* 005d98a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d98a9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005d98ac: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005d98af: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005d98b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d98b3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 005d98b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d98b7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d98ba: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d98bfu); f_005d5af0();
    /* 005d98bf: jmp 0x5d990d */ goto L_005d990d;
L_005d98c1:; BB(0x005d98c1);
    /* 005d98c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d98c3: push 0x61a8 */ { u32 v = 0x61a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d98c8: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d98cdu); f_0064c8a0();
    /* 005d98cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d98d0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005d98d3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005d98d6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005d98d9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d98da: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005d98dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d98de: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d98e1: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d98e6u); f_005d5af0();
    /* 005d98e6: jmp 0x5d990d */ goto L_005d990d;
L_005d98e8:; BB(0x005d98e8);
    /* 005d98e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d98ea: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d98ef: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5d98f4u); f_0064c8a0();
    /* 005d98f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d98f7: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005d98fa: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 005d98fd: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005d9900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9901: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005d9904: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9905: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9908: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x5d990du); f_005d5af0();
L_005d990d:; BB(0x005d990d);
    /* 005d990d: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 005d9910: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9911: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9914: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d9919u); f_005d5a90();
    /* 005d9919: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005d991b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d991e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9921: mov dword ptr [eax + 0x4e4], ecx */ W32((u32)(r_eax+0x4e4u), r_ecx);
    /* 005d9927: mov dword ptr [eax + 0x4e8], edx */ W32((u32)(r_eax+0x4e8u), r_edx);
    /* 005d992d: lea ecx, [ebp - 0x58] */ r_ecx = (u32)(r_ebp+0xffffffa8u);
    /* 005d9930: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9931: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9934: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5d9939u); f_005d5a90();
    /* 005d9939: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d993b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005d993e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d9941: mov dword ptr [ecx + 0x4ec], edx */ W32((u32)(r_ecx+0x4ecu), r_edx);
    /* 005d9947: mov dword ptr [ecx + 0x4f0], eax */ W32((u32)(r_ecx+0x4f0u), r_eax);
L_005d994d:; BB(0x005d994d);
    /* 005d994d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d994f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9950: ret 4 */ FN_RET(0x005d9670); r_esp += 8; return;
}

void f_005d99c0(void) /* BaccaratRoom::vfunc86 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d99c0);
    /* 005d99c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d99c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d99c3: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d99c6: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005d99c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d99cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d99cd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d99d2u); f_005dcb00();
    /* 005d99d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d99d5: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 005d99db: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d99de: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d99e4: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 005d99e7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005d99ea: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 005d99ed: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005d99f0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005d99f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005d99f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d99f9: cmp dword ptr [ecx + 0x3a4], 0 */ {  u32 a = R32((u32)(r_ecx+0x3a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9a00: je 0x5d9a27 */ if (fZ) goto L_005d9a27;
L_005d9a02:; BB(0x005d9a02);
    /* 005d9a02: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9a05: mov eax, dword ptr [edx + 0x3a4] */ r_eax = R32((u32)(r_edx+0x3a4u));
    /* 005d9a0b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d9a0e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d9a11: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a12: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d9a17u); f_00686cae();
    /* 005d9a17: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9a1a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9a1d: mov dword ptr [edx + 0x3a4], 0 */ W32((u32)(r_edx+0x3a4u), 0x0u);
L_005d9a27:; BB(0x005d9a27);
    /* 005d9a27: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9a2a: cmp dword ptr [eax + 0x3a8], 0 */ {  u32 a = R32((u32)(r_eax+0x3a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9a31: je 0x5d9ace */ if (fZ) goto L_005d9ace;
L_005d9a37:; BB(0x005d9a37);
    /* 005d9a37: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d9a3e: jmp 0x5d9a49 */ goto L_005d9a49;
L_005d9a40:; BB(0x005d9a40);
    /* 005d9a40: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9a43: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9a46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_005d9a49:; BB(0x005d9a49);
    /* 005d9a49: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d9a4f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9a51: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9a57: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 005d9a5d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d9a5fu); call_ind(t); }
    /* 005d9a5f: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9a62: jge 0x5d9aa9 */ if ((fS==fO)) goto L_005d9aa9;
L_005d9a64:; BB(0x005d9a64);
    /* 005d9a64: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9a67: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d9a6d: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9a70: cmp dword ptr [ecx + edx*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_edx*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9a74: je 0x5d9a94 */ if (fZ) goto L_005d9a94;
L_005d9a76:; BB(0x005d9a76);
    /* 005d9a76: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9a79: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d9a7f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9a82: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005d9a85: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d9a88: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d9a8b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9a8c: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d9a91u); f_00686cae();
    /* 005d9a91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d9a94:; BB(0x005d9a94);
    /* 005d9a94: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9a97: mov eax, dword ptr [edx + 0x3a8] */ r_eax = R32((u32)(r_edx+0x3a8u));
    /* 005d9a9d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9aa0: mov dword ptr [eax + ecx*4], 0 */ W32((u32)(r_eax+r_ecx*4), 0x0u);
    /* 005d9aa7: jmp 0x5d9a40 */ goto L_005d9a40;
L_005d9aa9:; BB(0x005d9aa9);
    /* 005d9aa9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9aac: mov eax, dword ptr [edx + 0x3a8] */ r_eax = R32((u32)(r_edx+0x3a8u));
    /* 005d9ab2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d9ab5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9ab8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ab9: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d9abeu); f_00686cae();
    /* 005d9abe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9ac1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9ac4: mov dword ptr [edx + 0x3a8], 0 */ W32((u32)(r_edx+0x3a8u), 0x0u);
L_005d9ace:; BB(0x005d9ace);
    /* 005d9ace: push 0x4f4 */ { u32 v = 0x4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ad3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ad7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9ada: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9adb: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5d9ae0u); f_00686fde();
    /* 005d9ae0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9ae3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d9ae9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9aeb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9af1: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 005d9af7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d9af9u); call_ind(t); }
    /* 005d9af9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d9afc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b00: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d9b05u); f_00686d82();
    /* 005d9b05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9b08: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d9b0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9b0e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d9b11: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
    /* 005d9b17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9b1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9b1e: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 005d9b24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b25: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9b28: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 005d9b2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b2f: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5d9b34u); f_00686fde();
    /* 005d9b34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9b37: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d9b3d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9b3f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9b45: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 005d9b4b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d9b4du); call_ind(t); }
    /* 005d9b4d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9b4f: mov edx, 4 */ r_edx = 0x4u;
    /* 005d9b54: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 005d9b56: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 005d9b59: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9b5b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9b5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9b5e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d9b63u); f_00686d82();
    /* 005d9b63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9b66: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d9b69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9b6c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d9b6f: mov dword ptr [eax + 0x3a8], ecx */ W32((u32)(r_eax+0x3a8u), r_ecx);
    /* 005d9b75: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d9b7c: jmp 0x5d9b87 */ goto L_005d9b87;
L_005d9b7e:; BB(0x005d9b7e);
    /* 005d9b7e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9b81: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d9b84: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005d9b87:; BB(0x005d9b87);
    /* 005d9b87: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d9b8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9b8e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9b94: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 005d9b9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9b9cu); call_ind(t); }
    /* 005d9b9c: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9b9f: jge 0x5d9c10 */ if ((fS==fO)) goto L_005d9c10;
L_005d9ba1:; BB(0x005d9ba1);
    /* 005d9ba1: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9ba4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ba5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d9bab: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9bad: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9bb3: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 005d9bb9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d9bbbu); call_ind(t); }
    /* 005d9bbb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d9bbe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9bc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9bc2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d9bc7u); f_00686d82();
    /* 005d9bc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9bca: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005d9bcd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9bd0: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 005d9bd6: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9bd9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005d9bdc: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 005d9bdf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9be2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9be3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9be6: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d9bec: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9bef: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005d9bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9bf3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9bf6: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 005d9bfc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9bff: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005d9c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c03: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5d9c08u); f_00686fde();
    /* 005d9c08: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9c0b: jmp 0x5d9b7e */ goto L_005d9b7e;
L_005d9c10:; BB(0x005d9c10);
    /* 005d9c10: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9c13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c14: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5d9c19u); f_005dcb00();
    /* 005d9c19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9c1c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9c1f: mov dword ptr [eax + 0x49c], ecx */ W32((u32)(r_eax+0x49cu), r_ecx);
    /* 005d9c25: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005d9c28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c29: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d9c2c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9c2e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005d9c31: mov eax, dword ptr [edx + 0x15c] */ r_eax = R32((u32)(r_edx+0x15cu));
    /* 005d9c37: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9c39u); call_ind(t); }
    /* 005d9c39: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9c3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9c3c: ret 8 */ FN_RET(0x005d99c0); r_esp += 12; return;
}

void f_005d9c40(void) /* BaccaratRoom::vfunc85 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9c40);
    /* 005d9c40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9c43: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9c46: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005d9c49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9c4c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d9c4f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9c52: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d9c55: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9c58: cmp dword ptr [edx + 0x3a4], 0 */ {  u32 a = R32((u32)(r_edx+0x3a4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9c5f: je 0x5d9c86 */ if (fZ) goto L_005d9c86;
L_005d9c61:; BB(0x005d9c61);
    /* 005d9c61: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9c64: mov ecx, dword ptr [eax + 0x3a4] */ r_ecx = R32((u32)(r_eax+0x3a4u));
    /* 005d9c6a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005d9c6d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d9c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9c71: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d9c76u); f_00686cae();
    /* 005d9c76: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9c79: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9c7c: mov dword ptr [eax + 0x3a4], 0 */ W32((u32)(r_eax+0x3a4u), 0x0u);
L_005d9c86:; BB(0x005d9c86);
    /* 005d9c86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9c89: cmp dword ptr [ecx + 0x3a8], 0 */ {  u32 a = R32((u32)(r_ecx+0x3a8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9c90: je 0x5d9d2c */ if (fZ) goto L_005d9d2c;
L_005d9c96:; BB(0x005d9c96);
    /* 005d9c96: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d9c9d: jmp 0x5d9ca8 */ goto L_005d9ca8;
L_005d9c9f:; BB(0x005d9c9f);
    /* 005d9c9f: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9ca2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d9ca5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005d9ca8:; BB(0x005d9ca8);
    /* 005d9ca8: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d9cad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9caf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9cb5: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 005d9cbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9cbdu); call_ind(t); }
    /* 005d9cbd: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9cc0: jge 0x5d9d07 */ if ((fS==fO)) goto L_005d9d07;
L_005d9cc2:; BB(0x005d9cc2);
    /* 005d9cc2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9cc5: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 005d9ccb: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9cce: cmp dword ptr [edx + eax*4], 0 */ {  u32 a = R32((u32)(r_edx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9cd2: je 0x5d9cf2 */ if (fZ) goto L_005d9cf2;
L_005d9cd4:; BB(0x005d9cd4);
    /* 005d9cd4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9cd7: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 005d9cdd: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9ce0: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005d9ce3: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d9ce6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d9ce9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9cea: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d9cefu); f_00686cae();
    /* 005d9cef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d9cf2:; BB(0x005d9cf2);
    /* 005d9cf2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9cf5: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d9cfb: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9cfe: mov dword ptr [ecx + edx*4], 0 */ W32((u32)(r_ecx+r_edx*4), 0x0u);
    /* 005d9d05: jmp 0x5d9c9f */ goto L_005d9c9f;
L_005d9d07:; BB(0x005d9d07);
    /* 005d9d07: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9d0a: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d9d10: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005d9d13: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d9d16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d17: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x5d9d1cu); f_00686cae();
    /* 005d9d1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9d1f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9d22: mov dword ptr [eax + 0x3a8], 0 */ W32((u32)(r_eax+0x3a8u), 0x0u);
L_005d9d2c:; BB(0x005d9d2c);
    /* 005d9d2c: push 0x4f4 */ { u32 v = 0x4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9d34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d35: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9d38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d39: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5d9d3eu); f_00686fde();
    /* 005d9d3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9d41: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d9d46: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9d48: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9d4e: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 005d9d54: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9d56u); call_ind(t); }
    /* 005d9d56: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d9d59: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9d5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d5d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d9d62u); f_00686d82();
    /* 005d9d62: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9d65: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d9d68: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9d6b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d9d6e: mov dword ptr [edx + 0x3a4], eax */ W32((u32)(r_edx+0x3a4u), r_eax);
    /* 005d9d74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9d77: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d78: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9d7b: mov eax, dword ptr [edx + 0x3a4] */ r_eax = R32((u32)(r_edx+0x3a4u));
    /* 005d9d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d82: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9d85: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 005d9d8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9d8c: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5d9d91u); f_00686fde();
    /* 005d9d91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9d94: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d9d99: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9d9b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9da1: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 005d9da7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9da9u); call_ind(t); }
    /* 005d9da9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9dab: mov edx, 4 */ r_edx = 0x4u;
    /* 005d9db0: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 005d9db2: seto cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fO) ? 1 : 0) & 0xffu);
    /* 005d9db5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9db7: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9db9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9dba: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d9dbfu); f_00686d82();
    /* 005d9dbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9dc2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005d9dc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9dc8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d9dcb: mov dword ptr [eax + 0x3a8], ecx */ W32((u32)(r_eax+0x3a8u), r_ecx);
    /* 005d9dd1: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005d9dd8: jmp 0x5d9de3 */ goto L_005d9de3;
L_005d9dda:; BB(0x005d9dda);
    /* 005d9dda: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9ddd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d9de0: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_005d9de3:; BB(0x005d9de3);
    /* 005d9de3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d9de8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d9dea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9df0: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 005d9df6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9df8u); call_ind(t); }
    /* 005d9df8: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9dfb: jge 0x5d9e6c */ if ((fS==fO)) goto L_005d9e6c;
L_005d9dfd:; BB(0x005d9dfd);
    /* 005d9dfd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9e00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e01: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d9e07: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d9e09: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9e0f: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 005d9e15: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d9e17u); call_ind(t); }
    /* 005d9e17: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005d9e1a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e1e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d9e23u); f_00686d82();
    /* 005d9e23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9e26: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d9e29: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9e2c: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 005d9e32: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9e35: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d9e38: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 005d9e3b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9e3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e3f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9e42: mov ecx, dword ptr [eax + 0x3a8] */ r_ecx = R32((u32)(r_eax+0x3a8u));
    /* 005d9e48: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9e4b: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 005d9e4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e4f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d9e52: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 005d9e58: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9e5b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 005d9e5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e5f: call 0x686fde */ r_esp -= 4; W32(r_esp, 0x5d9e64u); f_00686fde();
    /* 005d9e64: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9e67: jmp 0x5d9dda */ goto L_005d9dda;
L_005d9e6c:; BB(0x005d9e6c);
    /* 005d9e6c: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9e6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9e6f: ret 8 */ FN_RET(0x005d9c40); r_esp += 12; return;
}

void f_005d9e80(void) /* BaccaratRoom::vfunc87 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9e80);
    /* 005d9e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9e81: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9e83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9e86: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d9e89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9e8c: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
    /* 005d9e96: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d9e9d: jmp 0x5d9ea8 */ goto L_005d9ea8;
L_005d9e9f:; BB(0x005d9e9f);
    /* 005d9e9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9ea2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d9ea5: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_005d9ea8:; BB(0x005d9ea8);
    /* 005d9ea8: cmp dword ptr [ebp - 4], 0x1e */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d9eac: jge 0x5d9ed2 */ if ((fS==fO)) goto L_005d9ed2;
L_005d9eae:; BB(0x005d9eae);
    /* 005d9eae: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9eb1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d9eb4: mov dword ptr [eax + edx*4 + 0x3ac], 0 */ W32((u32)(r_eax+r_edx*4+0x3acu), 0x0u);
    /* 005d9ebf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9ec2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005d9ec5: mov dword ptr [edx + ecx*4 + 0x424], 0 */ W32((u32)(r_edx+r_ecx*4+0x424u), 0x0u);
    /* 005d9ed0: jmp 0x5d9e9f */ goto L_005d9e9f;
L_005d9ed2:; BB(0x005d9ed2);
    /* 005d9ed2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9ed4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9ed5: ret 4 */ FN_RET(0x005d9e80); r_esp += 8; return;
}

void f_005d9ee0(void) /* BaccaratRoom::vfunc45 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9ee0);
    /* 005d9ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9ee3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ee4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9ee7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9eea: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d9eefu); f_005da7b0();
    /* 005d9eef: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9ef1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9ef2: ret  */ FN_RET(0x005d9ee0); r_esp += 4; return;
}

void f_005d9f00(void) /* BaccaratRoom::vfunc71 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9f00);
    /* 005d9f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f01: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9f03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9f07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9f0a: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d9f0fu); f_005da7b0();
    /* 005d9f0f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005d9f12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f14: jne 0x5d9f22 */ if (!fZ) goto L_005d9f22;
L_005d9f16:; BB(0x005d9f16);
    /* 005d9f16: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9f19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f1a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9f1d: call 0x5db9e0 */ r_esp -= 4; W32(r_esp, 0x5d9f22u); f_005db9e0();
L_005d9f22:; BB(0x005d9f22);
    /* 005d9f22: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9f24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9f25: ret 8 */ FN_RET(0x005d9f00); r_esp += 12; return;
}

void f_005d9f30(void) /* BaccaratRoom::vfunc72 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9f30);
    /* 005d9f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9f33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9f37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9f3a: call 0x5dbb40 */ r_esp -= 4; W32(r_esp, 0x5d9f3fu); f_005dbb40();
    /* 005d9f3f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9f41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9f42: ret 8 */ FN_RET(0x005d9f30); r_esp += 12; return;
}

void f_005d9f50(void) /* BaccaratRoom::vfunc74 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9f50);
    /* 005d9f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9f53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f54: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d9f57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d9f5a: call 0x5dbb40 */ r_esp -= 4; W32(r_esp, 0x5d9f5fu); f_005dbb40();
    /* 005d9f5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005d9f61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d9f62: ret 8 */ FN_RET(0x005d9f50); r_esp += 12; return;
}

void f_005d9f70(void) /* BaccaratRoom::vfunc75 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d9f70);
    /* 005d9f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d9f71: mov ebp, esp */ r_ebp = r_esp;
    /* 005d9f73: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d9f76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005d9f79: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d9f80: movzx eax, byte ptr [0x795f95] */ r_eax = (u32)R8((u32)(0x795f95u));
    /* 005d9f87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f89: je 0x5d9f90 */ if (fZ) goto L_005d9f90;
L_005d9f8b:; BB(0x005d9f8b);
    /* 005d9f8b: jmp 0x5da035 */ goto L_005da035;
L_005d9f90:; BB(0x005d9f90);
    /* 005d9f90: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9f97: jne 0x5d9fcd */ if (!fZ) goto L_005d9fcd;
L_005d9f99:; BB(0x005d9f99);
    /* 005d9f99: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d9f9f: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x5d9fa4u); f_006375b0();
    /* 005d9fa4: cmp dword ptr [ebp + 0xc], eax */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9fa7: je 0x5d9fcd */ if (fZ) goto L_005d9fcd;
L_005d9fa9:; BB(0x005d9fa9);
    /* 005d9fa9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005d9fac: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005d9faf: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005d9fb2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d9fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9fb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9fb9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d9fbb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9fbe: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 005d9fc4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d9fc6u); call_ind(t); }
    /* 005d9fc6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d9fc9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9fcb: jne 0x5da018 */ if (!fZ) goto L_005da018;
L_005d9fcd:; BB(0x005d9fcd);
    /* 005d9fcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d9fd0: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5d9fd5u); f_005da7b0();
    /* 005d9fd5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005d9fd8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d9fda: je 0x5da004 */ if (fZ) goto L_005da004;
L_005d9fdc:; BB(0x005d9fdc);
    /* 005d9fdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9fde: push 0x6d43e8 */ { u32 v = 0x6d43e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9fe3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d9fe8u); f_00630f40();
    /* 005d9fe8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9fec: push 0x6d43c0 */ { u32 v = 0x6d43c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ff1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5d9ff6u); f_00630f40();
    /* 005d9ff6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d9ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d9ffa: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5d9fffu); f_0062ff10();
    /* 005d9fff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da002: jmp 0x5da035 */ goto L_005da035;
L_005da004:; BB(0x005da004);
    /* 005da004: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005da006: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da009: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da00b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da00e: mov eax, dword ptr [edx + 0x174] */ r_eax = R32((u32)(r_edx+0x174u));
    /* 005da014: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da016u); call_ind(t); }
    /* 005da016: jmp 0x5da035 */ goto L_005da035;
L_005da018:; BB(0x005da018);
    /* 005da018: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005da01b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da01c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da01f: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 005da022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da023: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da026: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 005da029: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da02a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da02d: call 0x64d480 */ r_esp -= 4; W32(r_esp, 0x5da032u); f_0064d480();
    /* 005da032: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005da035:; BB(0x005da035);
    /* 005da035: mov esp, ebp */ r_esp = r_ebp;
    /* 005da037: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da038: ret 8 */ FN_RET(0x005d9f70); r_esp += 12; return;
}

void f_005da120(void) /* BaccaratRoom::vfunc107 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da120);
    /* 005da120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da121: mov ebp, esp */ r_ebp = r_esp;
    /* 005da123: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da124: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da127: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005da12a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da12b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da12e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da12f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da132: call 0x64fd20 */ r_esp -= 4; W32(r_esp, 0x5da137u); f_0064fd20();
    /* 005da137: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da13a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da13c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da13f: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 005da142: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5da144u); call_ind(t); }
    /* 005da144: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da148: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da14b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da14d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da150: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005da153: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da155u); call_ind(t); }
    /* 005da155: sub eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005da158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da159: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da15c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da15e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da161: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005da164: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da166u); call_ind(t); }
    /* 005da166: mov esp, ebp */ r_esp = r_ebp;
    /* 005da168: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da169: ret 8 */ FN_RET(0x005da120); r_esp += 12; return;
}

void f_005da170(void) /* BaccaratRoom::vfunc108 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da170);
    /* 005da170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da171: mov ebp, esp */ r_ebp = r_esp;
    /* 005da173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da174: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da177: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da17a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da17c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da17f: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005da182: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da184u); call_ind(t); }
    /* 005da184: add eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da188: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da18b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da18d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da190: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005da193: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da195u); call_ind(t); }
    /* 005da195: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da199: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da19c: mov edx, dword ptr [ecx + 0x18c] */ r_edx = R32((u32)(r_ecx+0x18cu));
    /* 005da1a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da1a5: mov ecx, dword ptr [eax + 0x18c] */ r_ecx = R32((u32)(r_eax+0x18cu));
    /* 005da1ab: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005da1ad: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005da1b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da1b2u); call_ind(t); }
    /* 005da1b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005da1b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da1b5: ret 8 */ FN_RET(0x005da170); r_esp += 12; return;
}

void f_005da1c0(void) /* BaccaratRoom::vfunc109 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da1c0);
    /* 005da1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da1c3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da1c4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da1c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da1ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da1cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da1cf: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005da1d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da1d4u); call_ind(t); }
    /* 005da1d4: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da1d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da1db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da1dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da1e0: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005da1e3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da1e5u); call_ind(t); }
    /* 005da1e5: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da1e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da1e9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da1ec: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 005da1f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da1f5: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 005da1fb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005da1fd: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005da200: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da202u); call_ind(t); }
    /* 005da202: mov esp, ebp */ r_esp = r_ebp;
    /* 005da204: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da205: ret 8 */ FN_RET(0x005da1c0); r_esp += 12; return;
}

void f_005da210(void) /* BaccaratRoom::vfunc118 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da210);
    /* 005da210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da211: mov ebp, esp */ r_ebp = r_esp;
    /* 005da213: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da216: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005da219: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da21d: jl 0x5da239 */ if ((fS!=fO)) goto L_005da239;
L_005da21f:; BB(0x005da21f);
    /* 005da21f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005da224: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da226: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da22c: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005da232: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da234u); call_ind(t); }
    /* 005da234: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da237: jl 0x5da250 */ if ((fS!=fO)) goto L_005da250;
L_005da239:; BB(0x005da239);
    /* 005da239: push 0x3b0 */ { u32 v = 0x3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005da23e: push 0x6d43a4 */ { u32 v = 0x6d43a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005da243: push 0x6d4408 */ { u32 v = 0x6d4408u; r_esp -= 4; W32(r_esp, v); }
    /* 005da248: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5da24du); f_005e9f20();
    /* 005da24d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005da250:; BB(0x005da250);
    /* 005da250: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da253: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da254: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da25a: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5da25fu); f_00639110();
    /* 005da25f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da261: je 0x5da278 */ if (fZ) goto L_005da278;
L_005da263:; BB(0x005da263);
    /* 005da263: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da267: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da26d: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5da272u); f_00639110();
    /* 005da272: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da276: jne 0x5da27d */ if (!fZ) goto L_005da27d;
L_005da278:; BB(0x005da278);
    /* 005da278: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005da27b: jmp 0x5da2b9 */ goto L_005da2b9;
L_005da27d:; BB(0x005da27d);
    /* 005da27d: movzx ecx, byte ptr [ebp + 0xc] */ r_ecx = (u32)R8((u32)(r_ebp+0xcu));
    /* 005da281: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005da283: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005da285: and ecx, 0xffffffad */ {  u32 a = r_ecx; u32 b = 0xffffffadu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005da288: add ecx, 0x5d */ {  u32 a = r_ecx; u32 b = 0x5du; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005da28b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da28e: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da292: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da298: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5da29du); f_00639110();
    /* 005da29d: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 005da2a0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005da2a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da2a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da2a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da2ab: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005da2ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da2b0u); call_ind(t); }
    /* 005da2b0: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da2b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005da2b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005da2b9:; BB(0x005da2b9);
    /* 005da2b9: mov esp, ebp */ r_esp = r_ebp;
    /* 005da2bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da2bc: ret 8 */ FN_RET(0x005da210); r_esp += 12; return;
}

void f_005da2c0(void) /* BaccaratRoom::vfunc119 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da2c0);
    /* 005da2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da2c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da2c6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005da2c9: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da2cd: jl 0x5da2e9 */ if ((fS!=fO)) goto L_005da2e9;
L_005da2cf:; BB(0x005da2cf);
    /* 005da2cf: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005da2d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da2d6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da2dc: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 005da2e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da2e4u); call_ind(t); }
    /* 005da2e4: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da2e7: jl 0x5da300 */ if ((fS!=fO)) goto L_005da300;
L_005da2e9:; BB(0x005da2e9);
    /* 005da2e9: push 0x3bf */ { u32 v = 0x3bfu; r_esp -= 4; W32(r_esp, v); }
    /* 005da2ee: push 0x6d43a4 */ { u32 v = 0x6d43a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005da2f3: push 0x6d4408 */ { u32 v = 0x6d4408u; r_esp -= 4; W32(r_esp, v); }
    /* 005da2f8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5da2fdu); f_005e9f20();
    /* 005da2fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005da300:; BB(0x005da300);
    /* 005da300: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da303: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da304: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da30a: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5da30fu); f_00639110();
    /* 005da30f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da311: je 0x5da328 */ if (fZ) goto L_005da328;
L_005da313:; BB(0x005da313);
    /* 005da313: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da316: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da317: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da31d: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5da322u); f_00639110();
    /* 005da322: cmp dword ptr [eax + 0x18], 0 */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da326: jne 0x5da32d */ if (!fZ) goto L_005da32d;
L_005da328:; BB(0x005da328);
    /* 005da328: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005da32b: jmp 0x5da358 */ goto L_005da358;
L_005da32d:; BB(0x005da32d);
    /* 005da32d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005da330: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da331: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da337: call 0x639110 */ r_esp -= 4; W32(r_esp, 0x5da33cu); f_00639110();
    /* 005da33c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005da33f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 005da342: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da345: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005da347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da34a: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 005da34d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da34fu); call_ind(t); }
    /* 005da34f: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005da352: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005da355: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_005da358:; BB(0x005da358);
    /* 005da358: mov esp, ebp */ r_esp = r_ebp;
    /* 005da35a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da35b: ret 8 */ FN_RET(0x005da2c0); r_esp += 12; return;
}

void f_005da4a0(void) /* BaccaratRoom::vfunc172 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da4a0);
    /* 005da4a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da4a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da4a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da4a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005da4a9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005da4ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da4ad: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005da4b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da4b1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da4b4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da4b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da4b9: mov edx, dword ptr [eax + 0x26c] */ r_edx = R32((u32)(r_eax+0x26cu));
    /* 005da4bf: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5da4c1u); call_ind(t); }
    /* 005da4c1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da4c4: mov esp, ebp */ r_esp = r_ebp;
    /* 005da4c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da4c7: ret  */ FN_RET(0x005da4a0); r_esp += 4; return;
}

void f_005da4d0(void) /* BaccaratRoom::vfunc173 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da4d0);
    /* 005da4d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da4d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da4d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da4d6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005da4d9: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005da4dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da4dd: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 005da4e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da4e1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da4e4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005da4e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da4e9: mov edx, dword ptr [eax + 0x26c] */ r_edx = R32((u32)(r_eax+0x26cu));
    /* 005da4ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5da4f1u); call_ind(t); }
    /* 005da4f1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da4f4: mov esp, ebp */ r_esp = r_ebp;
    /* 005da4f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da4f7: ret  */ FN_RET(0x005da4d0); r_esp += 4; return;
}

void f_005da740(void) /* BaccaratRoom::vfunc170 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da740);
    /* 005da740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da741: mov ebp, esp */ r_ebp = r_esp;
    /* 005da743: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da746: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005da749: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 005da74c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da74d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005da750: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5da755u); f_005d5a90();
    /* 005da755: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 005da75b: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5da760u); f_005da7b0();
    /* 005da760: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005da763: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da765: je 0x5da78f */ if (fZ) goto L_005da78f;
L_005da767:; BB(0x005da767);
    /* 005da767: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005da76a: mov eax, dword ptr [edx + 0x4b8] */ r_eax = R32((u32)(r_edx+0x4b8u));
    /* 005da770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005da771: mov ecx, dword ptr [edx + 0x4b4] */ r_ecx = R32((u32)(r_edx+0x4b4u));
    /* 005da777: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da778: lea edx, [ebp - 0x10] */ r_edx = (u32)(r_ebp+0xfffffff0u);
    /* 005da77b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da77c: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005da77f: call 0x64c5c0 */ r_esp -= 4; W32(r_esp, 0x5da784u); f_0064c5c0();
    /* 005da784: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005da786: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005da789: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005da78c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_005da78f:; BB(0x005da78f);
    /* 005da78f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da792: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005da795: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005da797: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da79a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005da79d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005da7a0: mov esp, ebp */ r_esp = r_ebp;
    /* 005da7a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da7a3: ret 8 */ FN_RET(0x005da740); r_esp += 12; return;
}

void f_005da930(void) /* BaccaratRoom::vfunc177 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da930);
    /* 005da930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da931: mov ebp, esp */ r_ebp = r_esp;
    /* 005da933: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005da936: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005da939: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da93c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5da941u); f_005da7b0();
    /* 005da941: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005da944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da946: je 0x5da9c5 */ if (fZ) goto L_005da9c5;
L_005da948:; BB(0x005da948);
    /* 005da948: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da94b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005da94d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005da950: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005da956: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5da958u); call_ind(t); }
    /* 005da958: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005da95b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da95d: je 0x5da9c5 */ if (fZ) goto L_005da9c5;
L_005da95f:; BB(0x005da95f);
    /* 005da95f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005da962: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005da963: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5da968u); f_005dcb00();
    /* 005da968: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005da96b: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005da96e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da971: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5da976u); f_0063aac0();
    /* 005da976: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005da978: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 005da97b: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da97f: je 0x5da99d */ if (fZ) goto L_005da99d;
L_005da981:; BB(0x005da981);
    /* 005da981: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005da984: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5da989u); f_0063aac0();
    /* 005da989: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005da98b: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005da98e: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da992: je 0x5da99d */ if (fZ) goto L_005da99d;
L_005da994:; BB(0x005da994);
    /* 005da994: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005da99b: jmp 0x5da9a4 */ goto L_005da9a4;
L_005da99d:; BB(0x005da99d);
    /* 005da99d: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
L_005da9a4:; BB(0x005da9a4);
    /* 005da9a4: movzx edx, byte ptr [ebp - 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffecu));
    /* 005da9a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da9aa: je 0x5da9bc */ if (fZ) goto L_005da9bc;
L_005da9ac:; BB(0x005da9ac);
    /* 005da9ac: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005da9b2: call 0x636690 */ r_esp -= 4; W32(r_esp, 0x5da9b7u); f_00636690();
    /* 005da9b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005da9ba: jle 0x5da9c5 */ if ((fZ||fS!=fO)) goto L_005da9c5;
L_005da9bc:; BB(0x005da9bc);
    /* 005da9bc: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 005da9c3: jmp 0x5da9cc */ goto L_005da9cc;
L_005da9c5:; BB(0x005da9c5);
    /* 005da9c5: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005da9cc:; BB(0x005da9cc);
    /* 005da9cc: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
    /* 005da9cf: mov esp, ebp */ r_esp = r_ebp;
    /* 005da9d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da9d2: ret 4 */ FN_RET(0x005da930); r_esp += 8; return;
}

void f_005da9e0(void) /* BaccaratRoom::vfunc178 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005da9e0);
    /* 005da9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005da9e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005da9e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005da9e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005da9ea: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5da9efu); f_005dac90();
    /* 005da9ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005da9f1: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005da9f4: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005da9f7: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005da9f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005da9fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005da9fc: ret 4 */ FN_RET(0x005da9e0); r_esp += 8; return;
}

void f_005daa00(void) /* BaccaratRoom::vfunc179 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005daa00);
    /* 005daa00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005daa01: mov ebp, esp */ r_ebp = r_esp;
    /* 005daa03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005daa04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005daa07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005daa0a: call 0x5dada0 */ r_esp -= 4; W32(r_esp, 0x5daa0fu); f_005dada0();
    /* 005daa0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005daa11: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005daa14: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005daa17: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 005daa19: mov esp, ebp */ r_esp = r_ebp;
    /* 005daa1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005daa1c: ret 4 */ FN_RET(0x005daa00); r_esp += 8; return;
}

void f_005db000(void) /* BaccaratRoom::vfunc180 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db000);
    /* 005db000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db001: mov ebp, esp */ r_ebp = r_esp;
    /* 005db003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db004: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005db005: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db008: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db00b: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5db010u); f_005da7b0();
    /* 005db010: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005db013: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db015: jne 0x5db01b */ if (!fZ) goto L_005db01b;
L_005db017:; BB(0x005db017);
    /* 005db017: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005db019: jmp 0x5db051 */ goto L_005db051;
L_005db01b:; BB(0x005db01b);
    /* 005db01b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db01e: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x5db023u); f_005da8c0();
    /* 005db023: mov esi, eax */ r_esi = r_eax;
    /* 005db025: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db028: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x5db02du); f_005da8a0();
    /* 005db02d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db02f: jle 0x5db03e */ if ((fZ||fS!=fO)) goto L_005db03e;
L_005db031:; BB(0x005db031);
    /* 005db031: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db034: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5db039u); f_005dac90();
    /* 005db039: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db03c: jne 0x5db04b */ if (!fZ) goto L_005db04b;
L_005db03e:; BB(0x005db03e);
    /* 005db03e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db041: call 0x5daf50 */ r_esp -= 4; W32(r_esp, 0x5db046u); f_005daf50();
    /* 005db046: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db049: je 0x5db04f */ if (fZ) goto L_005db04f;
L_005db04b:; BB(0x005db04b);
    /* 005db04b: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005db04d: jmp 0x5db051 */ goto L_005db051;
L_005db04f:; BB(0x005db04f);
    /* 005db04f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_005db051:; BB(0x005db051);
    /* 005db051: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db052: mov esp, ebp */ r_esp = r_ebp;
    /* 005db054: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db055: ret  */ FN_RET(0x005db000); r_esp += 4; return;
}

void f_005db060(void) /* BaccaratRoom::vfunc181 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db060);
    /* 005db060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db061: mov ebp, esp */ r_ebp = r_esp;
    /* 005db063: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db066: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005db069: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db06c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5db071u); f_005da7b0();
    /* 005db071: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005db074: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db076: jne 0x5db07f */ if (!fZ) goto L_005db07f;
L_005db078:; BB(0x005db078);
    /* 005db078: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005db07a: jmp 0x5db189 */ goto L_005db189;
L_005db07f:; BB(0x005db07f);
    /* 005db07f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005db085: mov edx, dword ptr [ecx + 0x4ef8] */ r_edx = R32((u32)(r_ecx+0x4ef8u));
    /* 005db08b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005db08e: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005db093: mov dword ptr [eax + 0x4ef8], edx */ W32((u32)(r_eax+0x4ef8u), r_edx);
    /* 005db099: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db09c: call 0x5daec0 */ r_esp -= 4; W32(r_esp, 0x5db0a1u); f_005daec0();
    /* 005db0a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db0a3: jne 0x5db0fc */ if (!fZ) goto L_005db0fc;
L_005db0a5:; BB(0x005db0a5);
    /* 005db0a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db0a7: push 0x6d44a4 */ { u32 v = 0x6d44a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005db0ac: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5db0b1u); f_00630f40();
    /* 005db0b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db0b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db0b5: push 0x6d4490 */ { u32 v = 0x6d4490u; r_esp -= 4; W32(r_esp, v); }
    /* 005db0ba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5db0bfu); f_00630f40();
    /* 005db0bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db0c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db0c3: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5db0c8u); f_0062ff10();
    /* 005db0c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db0cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005db0d1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db0d3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005db0d9: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 005db0df: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db0e1u); call_ind(t); }
    /* 005db0e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db0e2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005db0e8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db0ea: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005db0f0: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005db0f3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db0f5u); call_ind(t); }
    /* 005db0f5: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005db0f7: jmp 0x5db189 */ goto L_005db189;
L_005db0fc:; BB(0x005db0fc);
    /* 005db0fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db0ff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db101: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db104: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 005db10a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db10cu); call_ind(t); }
    /* 005db10c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005db10f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db111: je 0x5db187 */ if (fZ) goto L_005db187;
L_005db113:; BB(0x005db113);
    /* 005db113: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db115: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db118: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5db11du); f_005da880();
    /* 005db11d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db11e: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x5db123u); f_0064c8a0();
    /* 005db123: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db126: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005db129: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 005db12c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db12f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db130: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005db133: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db134: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db137: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5db13cu); f_005dac90();
    /* 005db13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db13d: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5db142u); f_005dcb00();
    /* 005db142: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db145: mov ecx, eax */ r_ecx = r_eax;
    /* 005db147: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x5db14cu); f_005d5cf0();
    /* 005db14c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db14f: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5db154u); f_005dac90();
    /* 005db154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db155: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5db15au); f_005dcb00();
    /* 005db15a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db15d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005db160: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db163: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5db168u); f_0063aac0();
    /* 005db168: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005db16b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005db16e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db171: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5db176u); f_005da880();
    /* 005db176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db177: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db17a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db17b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db17e: call 0x5dbf60 */ r_esp -= 4; W32(r_esp, 0x5db183u); f_005dbf60();
    /* 005db183: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005db185: jmp 0x5db189 */ goto L_005db189;
L_005db187:; BB(0x005db187);
    /* 005db187: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005db189:; BB(0x005db189);
    /* 005db189: mov esp, ebp */ r_esp = r_ebp;
    /* 005db18b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db18c: ret  */ FN_RET(0x005db060); r_esp += 4; return;
}

void f_005db290(void) /* BaccaratRoom::vfunc183 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db290);
    /* 005db290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db291: mov ebp, esp */ r_ebp = r_esp;
    /* 005db293: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db296: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005db299: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005db2a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db2a7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005db2aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005db2ad: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005db2af: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db2b2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005db2b5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005db2b8: mov esp, ebp */ r_esp = r_ebp;
    /* 005db2ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db2bb: ret 4 */ FN_RET(0x005db290); r_esp += 8; return;
}

void f_005db2c0(void) /* BaccaratRoom::vfunc184 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db2c0);
    /* 005db2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005db2c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db2c5: push 0x6a9221 */ { u32 v = 0x6a9221u; r_esp -= 4; W32(r_esp, v); }
    /* 005db2ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db2d1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db2d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005db2d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db2db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db2dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005db2df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005db2e5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005db2e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db2ea: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005db2ef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db2f1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005db2f7: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005db2fd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db2ffu); call_ind(t); }
    /* 005db2ff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005db302: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db304: je 0x5db336 */ if (fZ) goto L_005db336;
L_005db306:; BB(0x005db306);
    /* 005db306: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005db30c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db30e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005db314: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 005db31a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db31cu); call_ind(t); }
    /* 005db31c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005db31f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005db322: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db324: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005db327: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 005db32d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db32fu); call_ind(t); }
    /* 005db32f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005db332: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db334: jne 0x5db33b */ if (!fZ) goto L_005db33b;
L_005db336:; BB(0x005db336);
    /* 005db336: jmp 0x5db435 */ goto L_005db435;
L_005db33b:; BB(0x005db33b);
    /* 005db33b: cmp dword ptr [0x793578], 0 */ {  u32 a = R32((u32)(0x793578u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db342: jne 0x5db3d3 */ if (!fZ) goto L_005db3d3;
L_005db348:; BB(0x005db348);
    /* 005db348: push 0x19e4 */ { u32 v = 0x19e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005db34d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5db352u); f_00686d82();
    /* 005db352: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db355: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005db358: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db35f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db363: je 0x5db372 */ if (fZ) goto L_005db372;
L_005db365:; BB(0x005db365);
    /* 005db365: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005db368: call 0x57a790 */ r_esp -= 4; W32(r_esp, 0x5db36du); f_0057a790();
    /* 005db36d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005db370: jmp 0x5db379 */ goto L_005db379;
L_005db372:; BB(0x005db372);
    /* 005db372: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005db379:; BB(0x005db379);
    /* 005db379: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005db37c: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005db37f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005db386: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db389: mov dword ptr [0x793578], eax */ W32((u32)(0x793578u), r_eax);
    /* 005db38e: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005db394: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db396: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005db39c: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005db39f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db3a1u); call_ind(t); }
    /* 005db3a1: lea ecx, [ebp - 0x28] */ r_ecx = (u32)(r_ebp+0xffffffd8u);
    /* 005db3a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db3a5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005db3a8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db3aa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005db3ad: mov edx, dword ptr [eax + 0x2dc] */ r_edx = R32((u32)(r_eax+0x2dcu));
    /* 005db3b3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db3b5u); call_ind(t); }
    /* 005db3b5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005db3b7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005db3ba: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005db3bd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005db3c0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db3c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db3c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db3c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db3c8: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005db3ce: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x5db3d3u); f_005f7320();
L_005db3d3:; BB(0x005db3d3);
    /* 005db3d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db3d5: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005db3db: call 0x5df700 */ r_esp -= 4; W32(r_esp, 0x5db3e0u); f_005df700();
    /* 005db3e0: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 005db3e3: movzx edx, byte ptr [ebp - 0x15] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005db3e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db3e9: je 0x5db410 */ if (fZ) goto L_005db410;
L_005db3eb:; BB(0x005db3eb);
    /* 005db3eb: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005db3f0: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005db3f3: call 0x5f2cb0 */ r_esp -= 4; W32(r_esp, 0x5db3f8u); f_005f2cb0();
    /* 005db3f8: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005db3fe: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5db403u); f_005f85d0();
    /* 005db403: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005db409: call 0x57b1b0 */ r_esp -= 4; W32(r_esp, 0x5db40eu); f_0057b1b0();
    /* 005db40e: jmp 0x5db435 */ goto L_005db435;
L_005db410:; BB(0x005db410);
    /* 005db410: push 0x139b */ { u32 v = 0x139bu; r_esp -= 4; W32(r_esp, v); }
    /* 005db415: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005db418: call 0x5f2ce0 */ r_esp -= 4; W32(r_esp, 0x5db41du); f_005f2ce0();
    /* 005db41d: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005db422: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005db425: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x5db42au); f_005f2ba0();
    /* 005db42a: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005db430: call 0x57b720 */ r_esp -= 4; W32(r_esp, 0x5db435u); f_0057b720();
L_005db435:; BB(0x005db435);
    /* 005db435: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db438: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005db43f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db440: mov esp, ebp */ r_esp = r_ebp;
    /* 005db442: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db443: ret  */ FN_RET(0x005db2c0); r_esp += 4; return;
}

void f_005db450(void) /* BaccaratRoom::vfunc93 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db450);
    /* 005db450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db451: mov ebp, esp */ r_ebp = r_esp;
    /* 005db453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db455: push 0x6a9247 */ { u32 v = 0x6a9247u; r_esp -= 4; W32(r_esp, v); }
    /* 005db45a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db461: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db464: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005db469: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db46b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db46c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005db46f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005db475: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005db478: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db47f: jne 0x5db4ea */ if (!fZ) goto L_005db4ea;
L_005db481:; BB(0x005db481);
    /* 005db481: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005db486: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5db48bu); f_00686d82();
    /* 005db48b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db48e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005db491: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db498: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db49c: je 0x5db4ab */ if (fZ) goto L_005db4ab;
L_005db49e:; BB(0x005db49e);
    /* 005db49e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db4a1: call 0x5e32d0 */ r_esp -= 4; W32(r_esp, 0x5db4a6u); f_005e32d0();
    /* 005db4a6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005db4a9: jmp 0x5db4b2 */ goto L_005db4b2;
L_005db4ab:; BB(0x005db4ab);
    /* 005db4ab: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005db4b2:; BB(0x005db4b2);
    /* 005db4b2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db4b5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005db4b8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005db4bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db4c2: mov dword ptr [0x163068c], ecx */ W32((u32)(0x163068cu), r_ecx);
    /* 005db4c8: mov edx, dword ptr [0x163068c] */ r_edx = R32((u32)(0x163068cu));
    /* 005db4ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db4d0: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005db4d6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005db4d9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db4dbu); call_ind(t); }
    /* 005db4db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db4dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db4df: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 005db4e5: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5db4eau); f_005f7340();
L_005db4ea:; BB(0x005db4ea);
    /* 005db4ea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005db4ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db4ee: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db4f1: call 0x64ee70 */ r_esp -= 4; W32(r_esp, 0x5db4f6u); f_0064ee70();
    /* 005db4f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db4f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005db500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db501: mov esp, ebp */ r_esp = r_ebp;
    /* 005db503: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db504: ret 4 */ FN_RET(0x005db450); r_esp += 8; return;
}

void f_005db510(void) /* BaccaratRoom::vfunc92 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db510);
    /* 005db510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db511: mov ebp, esp */ r_ebp = r_esp;
    /* 005db513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db515: push 0x6a926d */ { u32 v = 0x6a926du; r_esp -= 4; W32(r_esp, v); }
    /* 005db51a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db521: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db524: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005db529: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db52b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db52c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005db52f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005db535: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005db538: cmp dword ptr [0x16306a0], 0 */ {  u32 a = R32((u32)(0x16306a0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db53f: jne 0x5db5aa */ if (!fZ) goto L_005db5aa;
L_005db541:; BB(0x005db541);
    /* 005db541: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db546: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5db54bu); f_00686d82();
    /* 005db54b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db54e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005db551: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db558: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db55c: je 0x5db56b */ if (fZ) goto L_005db56b;
L_005db55e:; BB(0x005db55e);
    /* 005db55e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db561: call 0x5e3c90 */ r_esp -= 4; W32(r_esp, 0x5db566u); f_005e3c90();
    /* 005db566: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005db569: jmp 0x5db572 */ goto L_005db572;
L_005db56b:; BB(0x005db56b);
    /* 005db56b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005db572:; BB(0x005db572);
    /* 005db572: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db575: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005db578: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005db57f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db582: mov dword ptr [0x16306a0], ecx */ W32((u32)(0x16306a0u), r_ecx);
    /* 005db588: mov edx, dword ptr [0x16306a0] */ r_edx = R32((u32)(0x16306a0u));
    /* 005db58e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db590: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 005db596: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005db599: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db59bu); call_ind(t); }
    /* 005db59b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db59d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db59f: mov ecx, dword ptr [0x16306a0] */ r_ecx = R32((u32)(0x16306a0u));
    /* 005db5a5: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5db5aau); f_005f7340();
L_005db5aa:; BB(0x005db5aa);
    /* 005db5aa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005db5ad: call 0x64ed80 */ r_esp -= 4; W32(r_esp, 0x5db5b2u); f_0064ed80();
    /* 005db5b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db5b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005db5bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db5bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005db5bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db5c0: ret  */ FN_RET(0x005db510); r_esp += 4; return;
}

void f_005db5d0(void) /* BaccaratRoom::vfunc91 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db5d0);
    /* 005db5d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db5d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005db5d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db5d5: push 0x6a9293 */ { u32 v = 0x6a9293u; r_esp -= 4; W32(r_esp, v); }
    /* 005db5da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db5e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db5e1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db5e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005db5e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db5eb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005db5ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005db5ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db5f0: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005db5f3: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005db5f9: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 005db5fc: mov byte ptr [ebp - 0x15], 0 */ W8((u32)(r_ebp+0xffffffebu), 0x0u);
    /* 005db600: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005db603: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x5db608u); f_005da830();
    /* 005db608: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005db60b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db60d: je 0x5db710 */ if (fZ) goto L_005db710;
L_005db613:; BB(0x005db613);
    /* 005db613: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005db619: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db61b: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005db621: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 005db627: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db629u); call_ind(t); }
    /* 005db629: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005db62c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 005db633: jmp 0x5db63e */ goto L_005db63e;
L_005db635:; BB(0x005db635);
    /* 005db635: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db638: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005db63b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_005db63e:; BB(0x005db63e);
    /* 005db63e: cmp dword ptr [ebp - 0x14], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db642: jge 0x5db6b1 */ if ((fS==fO)) goto L_005db6b1;
L_005db644:; BB(0x005db644);
    /* 005db644: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db647: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db648: push 0x6d44ec */ { u32 v = 0x6d44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005db64d: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005db650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db651: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x5db657u); call_ind(t); }
    /* 005db657: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db65a: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 005db65d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db65e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db661: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x5db666u); f_0063ab10();
    /* 005db666: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 005db669: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db66b: je 0x5db6af */ if (fZ) goto L_005db6af;
L_005db66d:; BB(0x005db66d);
    /* 005db66d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db670: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x5db675u); f_0063aac0();
    /* 005db675: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005db678: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005db67b: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 005db67e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db67f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005db685: call 0x6368b0 */ r_esp -= 4; W32(r_esp, 0x5db68au); f_006368b0();
    /* 005db68a: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005db68d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db68f: je 0x5db693 */ if (fZ) goto L_005db693;
L_005db691:; BB(0x005db691);
    /* 005db691: jmp 0x5db635 */ goto L_005db635;
L_005db693:; BB(0x005db693);
    /* 005db693: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db696: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x5db69bu); f_005d5a50();
    /* 005db69b: mov esi, eax */ r_esi = r_eax;
    /* 005db69d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005db6a0: call 0x5da880 */ r_esp -= 4; W32(r_esp, 0x5db6a5u); f_005da880();
    /* 005db6a5: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005db6a7: jl 0x5db6af */ if ((fS!=fO)) goto L_005db6af;
L_005db6a9:; BB(0x005db6a9);
    /* 005db6a9: mov byte ptr [ebp - 0x15], 1 */ W8((u32)(r_ebp+0xffffffebu), 0x1u);
    /* 005db6ad: jmp 0x5db6b1 */ goto L_005db6b1;
L_005db6af:; BB(0x005db6af);
    /* 005db6af: jmp 0x5db635 */ goto L_005db635;
L_005db6b1:; BB(0x005db6b1);
    /* 005db6b1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db6b4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 005db6b7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005db6ba: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005db6bd: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6c1: je 0x5db6d6 */ if (fZ) goto L_005db6d6;
L_005db6c3:; BB(0x005db6c3);
    /* 005db6c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005db6c5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005db6c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db6ca: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005db6cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db6cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db6d1u); call_ind(t); }
    /* 005db6d1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 005db6d4: jmp 0x5db6dd */ goto L_005db6dd;
L_005db6d6:; BB(0x005db6d6);
    /* 005db6d6: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005db6dd:; BB(0x005db6dd);
    /* 005db6dd: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005db6e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db6e3: jne 0x5db710 */ if (!fZ) goto L_005db710;
L_005db6e5:; BB(0x005db6e5);
    /* 005db6e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db6e7: push 0x6d43e8 */ { u32 v = 0x6d43e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005db6ec: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5db6f1u); f_00630f40();
    /* 005db6f1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db6f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db6f5: push 0x6d44c0 */ { u32 v = 0x6d44c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db6fa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5db6ffu); f_00630f40();
    /* 005db6ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db703: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5db708u); f_0062ff10();
    /* 005db708: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db70b: jmp 0x5db7b0 */ goto L_005db7b0;
L_005db710:; BB(0x005db710);
    /* 005db710: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db717: jne 0x5db795 */ if (!fZ) goto L_005db795;
L_005db719:; BB(0x005db719);
    /* 005db719: push 0x1ec */ { u32 v = 0x1ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005db71e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5db723u); f_00686d82();
    /* 005db723: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db726: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005db729: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db730: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db734: je 0x5db757 */ if (fZ) goto L_005db757;
L_005db736:; BB(0x005db736);
    /* 005db736: mov dl, byte ptr [ebp + 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 005db739: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db73a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005db73d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db73e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005db741: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db742: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005db745: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db746: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005db749: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db74a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005db74d: call 0x5e36b0 */ r_esp -= 4; W32(r_esp, 0x5db752u); f_005e36b0();
    /* 005db752: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005db755: jmp 0x5db75e */ goto L_005db75e;
L_005db757:; BB(0x005db757);
    /* 005db757: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_005db75e:; BB(0x005db75e);
    /* 005db75e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005db761: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 005db764: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005db76b: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005db76e: mov dword ptr [0x16306b0], edx */ W32((u32)(0x16306b0u), r_edx);
    /* 005db774: mov eax, dword ptr [0x16306b0] */ r_eax = R32((u32)(0x16306b0u));
    /* 005db779: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005db77b: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 005db781: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005db784: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db786u); call_ind(t); }
    /* 005db786: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db788: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db78a: mov ecx, dword ptr [0x16306b0] */ r_ecx = R32((u32)(0x16306b0u));
    /* 005db790: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5db795u); f_005f7340();
L_005db795:; BB(0x005db795);
    /* 005db795: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db797: movzx ecx, byte ptr [ebp + 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0x18u));
    /* 005db79b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db79c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005db79f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005db7a0: mov al, byte ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 005db7a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db7a4: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 005db7a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db7a8: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005db7ab: call 0x64ec80 */ r_esp -= 4; W32(r_esp, 0x5db7b0u); f_0064ec80();
L_005db7b0:; BB(0x005db7b0);
    /* 005db7b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db7b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005db7ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db7bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005db7bc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db7bf: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005db7c1: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5db7c6u); f_00686d72();
    /* 005db7c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005db7c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db7c9: ret 0x14 */ FN_RET(0x005db5d0); r_esp += 24; return;
}

void f_005dbe50(void) /* BaccaratRoom::vfunc188 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbe50);
    /* 005dbe50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe51: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbe53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe55: push 0x6a9381 */ { u32 v = 0x6a9381u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dbe60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe61: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dbe64: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dbe69: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dbe6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe6c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dbe6f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dbe75: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dbe78: cmp dword ptr [0x7947c0], 0 */ {  u32 a = R32((u32)(0x7947c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbe7f: jne 0x5dbeea */ if (!fZ) goto L_005dbeea;
L_005dbe81:; BB(0x005dbe81);
    /* 005dbe81: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe86: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dbe8bu); f_00686d82();
    /* 005dbe8b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbe8e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dbe91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dbe98: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbe9c: je 0x5dbeab */ if (fZ) goto L_005dbeab;
L_005dbe9e:; BB(0x005dbe9e);
    /* 005dbe9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dbea1: call 0x5ceb60 */ r_esp -= 4; W32(r_esp, 0x5dbea6u); f_005ceb60();
    /* 005dbea6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dbea9: jmp 0x5dbeb2 */ goto L_005dbeb2;
L_005dbeab:; BB(0x005dbeab);
    /* 005dbeab: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dbeb2:; BB(0x005dbeb2);
    /* 005dbeb2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dbeb5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005dbeb8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dbebf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dbec2: mov dword ptr [0x7947c0], ecx */ W32((u32)(0x7947c0u), r_ecx);
    /* 005dbec8: mov edx, dword ptr [0x7947c0] */ r_edx = R32((u32)(0x7947c0u));
    /* 005dbece: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dbed0: mov ecx, dword ptr [0x7947c0] */ r_ecx = R32((u32)(0x7947c0u));
    /* 005dbed6: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005dbed9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dbedbu); call_ind(t); }
    /* 005dbedb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbedd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbedf: mov ecx, dword ptr [0x7947c0] */ r_ecx = R32((u32)(0x7947c0u));
    /* 005dbee5: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x5dbeeau); f_005f7320();
L_005dbeea:; BB(0x005dbeea);
    /* 005dbeea: mov ecx, dword ptr [0x7947c0] */ r_ecx = R32((u32)(0x7947c0u));
    /* 005dbef0: call 0x5cec40 */ r_esp -= 4; W32(r_esp, 0x5dbef5u); f_005cec40();
    /* 005dbef5: mov ecx, dword ptr [0x7947c0] */ r_ecx = R32((u32)(0x7947c0u));
    /* 005dbefb: call 0x5f88f0 */ r_esp -= 4; W32(r_esp, 0x5dbf00u); f_005f88f0();
    /* 005dbf00: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dbf03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbf05: je 0x5dbf12 */ if (fZ) goto L_005dbf12;
L_005dbf07:; BB(0x005dbf07);
    /* 005dbf07: mov ecx, dword ptr [0x7947c0] */ r_ecx = R32((u32)(0x7947c0u));
    /* 005dbf0d: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5dbf12u); f_005f85d0();
L_005dbf12:; BB(0x005dbf12);
    /* 005dbf12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dbf15: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dbf1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dbf1d: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbf1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbf20: ret  */ FN_RET(0x005dbe50); r_esp += 4; return;
}

void f_005e42f0(void) /* BaccaratRoom::vfunc121 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005e42f0);
    /* 005e42f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e42f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e42f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e42f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005e42f7: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e42f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005e42fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e42fc: ret 4 */ FN_RET(0x005e42f0); r_esp += 8; return;
}

void f_005f1be0(void) /* BaccaratRoom::vfunc9 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f1be0);
    /* 005f1be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1be1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1be3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1be5: push 0x6a9dc6 */ { u32 v = 0x6a9dc6u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1bea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1bf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1bf1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1bf4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005f1bf9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f1bfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1bfc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005f1bff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005f1c05: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005f1c08: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1c0b: call 0x5f24a0 */ r_esp -= 4; W32(r_esp, 0x5f1c10u); f_005f24a0();
    /* 005f1c10: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1c13: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f1c15: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1c18: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005f1c1b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1c1du); call_ind(t); }
    /* 005f1c1d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005f1c20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1c22: jne 0x5f1c2b */ if (!fZ) goto L_005f1c2b;
L_005f1c24:; BB(0x005f1c24);
    /* 005f1c24: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005f1c26: jmp 0x5f1dde */ goto L_005f1dde;
L_005f1c2b:; BB(0x005f1c2b);
    /* 005f1c2b: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 005f1c2e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c2f: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 005f1c32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c33: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 005f1c36: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c37: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1c3a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f1c3c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1c3f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 005f1c42: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f1c44u); call_ind(t); }
    /* 005f1c44: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1c48: jne 0x5f1c51 */ if (!fZ) goto L_005f1c51;
L_005f1c4a:; BB(0x005f1c4a);
    /* 005f1c4a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005f1c4c: jmp 0x5f1dde */ goto L_005f1dde;
L_005f1c51:; BB(0x005f1c51);
    /* 005f1c51: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
L_005f1c58:; BB(0x005f1c58);
    /* 005f1c58: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1c5b: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f1c5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1c61: cmp dword ptr [ecx + eax], -1 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1c65: je 0x5f1d4c */ if (fZ) goto L_005f1d4c;
L_005f1c6b:; BB(0x005f1c6b);
    /* 005f1c6b: push 0x1f0 */ { u32 v = 0x1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c70: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5f1c75u); f_00686d82();
    /* 005f1c75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1c78: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005f1c7b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1c82: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1c86: je 0x5f1ca4 */ if (fZ) goto L_005f1ca4;
L_005f1c88:; BB(0x005f1c88);
    /* 005f1c88: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c8a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1c8d: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f1c90: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1c93: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 005f1c96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c97: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005f1c9a: call 0x5fc680 */ r_esp -= 4; W32(r_esp, 0x5f1c9fu); f_005fc680();
    /* 005f1c9f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005f1ca2: jmp 0x5f1cab */ goto L_005f1cab;
L_005f1ca4:; BB(0x005f1ca4);
    /* 005f1ca4: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005f1cab:; BB(0x005f1cab);
    /* 005f1cab: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005f1cae: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005f1cb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f1cb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cbc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cbe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cc0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cc2: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cc7: push 0x2712 */ { u32 v = 0x2712u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ccc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f1ccf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cd0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1cd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cd4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1cd7: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f1cda: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1cdd: mov ecx, dword ptr [eax + edx + 4] */ r_ecx = R32((u32)(r_eax+r_edx+0x4u));
    /* 005f1ce1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ce2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1ce5: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f1ce8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1ceb: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 005f1cee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cef: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f1cf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cf3: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f1cf8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f1cfb: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x5f1d00u); f_005f9de0();
    /* 005f1d00: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f1d03: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1d06: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f1d09: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1d0c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005f1d0f: add eax, dword ptr [edx + ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f1d13: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005f1d16: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f1d19: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d1a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1d1d: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f1d20: call 0x60c840 */ r_esp -= 4; W32(r_esp, 0x5f1d25u); f_0060c840();
    /* 005f1d25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d29: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1d2c: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f1d2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1d32: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 005f1d35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d36: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1d39: call 0x5f2370 */ r_esp -= 4; W32(r_esp, 0x5f1d3eu); f_005f2370();
    /* 005f1d3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1d41: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f1d44: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f1d47: jmp 0x5f1c58 */ goto L_005f1c58;
L_005f1d4c:; BB(0x005f1d4c);
    /* 005f1d4c: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 005f1d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d50: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 005f1d53: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d54: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1d57: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005f1d59: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1d5c: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005f1d5f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5f1d61u); call_ind(t); }
    /* 005f1d61: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1d65: je 0x5f1d8f */ if (fZ) goto L_005f1d8f;
L_005f1d67:; BB(0x005f1d67);
    /* 005f1d67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d69: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d70: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d79: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f1d7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d7d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d81: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1d87: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005f1d8a: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5f1d8fu); f_005f9ce0();
L_005f1d8f:; BB(0x005f1d8f);
    /* 005f1d8f: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1d93: je 0x5f1dbc */ if (fZ) goto L_005f1dbc;
L_005f1d95:; BB(0x005f1d95);
    /* 005f1d95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d97: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d9e: push 0x2711 */ { u32 v = 0x2711u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1da3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1da5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1da7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1daa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1dab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1dad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1daf: mov eax, dword ptr [0x15e55e8] */ r_eax = R32((u32)(0x15e55e8u));
    /* 005f1db4: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005f1db7: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5f1dbcu); f_005f9ce0();
L_005f1dbc:; BB(0x005f1dbc);
    /* 005f1dbc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1dbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f1dc1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005f1dc4: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 005f1dc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1dc9u); call_ind(t); }
    /* 005f1dc9: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1dcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f1dd1: mov ecx, dword ptr [0x15e55e8] */ r_ecx = R32((u32)(0x15e55e8u));
    /* 005f1dd7: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 005f1dda: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f1ddcu); call_ind(t); }
    /* 005f1ddc: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_005f1dde:; BB(0x005f1dde);
    /* 005f1dde: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1de1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1de9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1deb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1dec: ret  */ FN_RET(0x005f1be0); r_esp += 4; return;
}

void f_005f2a00(void) /* BaccaratRoom::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005f2a00);
    /* 005f2a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a01: mov ebp, esp */ r_ebp = r_esp;
    /* 005f2a03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f2a06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005f2a09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2a10: jmp 0x5f2a1b */ goto L_005f2a1b;
L_005f2a12:; BB(0x005f2a12);
    /* 005f2a12: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2a15: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f2a18: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005f2a1b:; BB(0x005f2a1b);
    /* 005f2a1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2a1e: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2a21: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x5f2a26u); f_0060c9a0();
    /* 005f2a26: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f2a29: jge 0x5f2a50 */ if ((fS==fO)) goto L_005f2a50;
L_005f2a2b:; BB(0x005f2a2b);
    /* 005f2a2b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005f2a2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a2f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005f2a32: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f2a35: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x5f2a3au); f_0060ca40();
    /* 005f2a3a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 005f2a3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005f2a40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f2a41: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2a44: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005f2a46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2a49: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 005f2a4c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5f2a4eu); call_ind(t); }
    /* 005f2a4e: jmp 0x5f2a12 */ goto L_005f2a12;
L_005f2a50:; BB(0x005f2a50);
    /* 005f2a50: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005f2a52: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2a54: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f2a55: ret 4 */ FN_RET(0x005f2a00); r_esp += 8; return;
}

void f_0064d2d0(void) /* BaccaratRoom::vfunc61 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d2d0);
    /* 0064d2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d2d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d2d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2d7: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064d2da: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d2e1: jmp 0x64d2ec */ goto L_0064d2ec;
L_0064d2e3:; BB(0x0064d2e3);
    /* 0064d2e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d2e6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064d2e9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064d2ec:; BB(0x0064d2ec);
    /* 0064d2ec: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d2f2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d2f4: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d2fa: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0064d300: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d302u); call_ind(t); }
    /* 0064d302: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d305: jge 0x64d327 */ if ((fS==fO)) goto L_0064d327;
L_0064d307:; BB(0x0064d307);
    /* 0064d307: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d30a: mov edx, dword ptr [ecx*8 + 0x76d478] */ r_edx = R32((u32)(r_ecx*8+0x76d478u));
    /* 0064d311: mov eax, dword ptr [ecx*8 + 0x76d47c] */ r_eax = R32((u32)(r_ecx*8+0x76d47cu));
    /* 0064d318: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d31b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0064d31e: mov dword ptr [esi + ecx*8], edx */ W32((u32)(r_esi+r_ecx*8), r_edx);
    /* 0064d321: mov dword ptr [esi + ecx*8 + 4], eax */ W32((u32)(r_esi+r_ecx*8+0x4u), r_eax);
    /* 0064d325: jmp 0x64d2e3 */ goto L_0064d2e3;
L_0064d327:; BB(0x0064d327);
    /* 0064d327: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064d328: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d32a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d32b: ret 4 */ FN_RET(0x0064d2d0); r_esp += 8; return;
}

void f_0064d330(void) /* BaccaratRoom::vfunc67 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d330);
    /* 0064d330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d331: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d333: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d334: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064d337: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d339: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064d33e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d340: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d346: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0064d34c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d34eu); call_ind(t); }
    /* 0064d34e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d351: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d353: je 0x64d36c */ if (fZ) goto L_0064d36c;
L_0064d355:; BB(0x0064d355);
    /* 0064d355: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d358: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064d35a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d35d: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 0064d363: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64d365u); call_ind(t); }
    /* 0064d365: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064d368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d36a: je 0x64d36e */ if (fZ) goto L_0064d36e;
L_0064d36c:; BB(0x0064d36c);
    /* 0064d36c: jmp 0x64d38d */ goto L_0064d38d;
L_0064d36e:; BB(0x0064d36e);
    /* 0064d36e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d374: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d376: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d37c: mov eax, dword ptr [edx + 0x3a0] */ r_eax = R32((u32)(r_edx+0x3a0u));
    /* 0064d382: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d384u); call_ind(t); }
    /* 0064d384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d385: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d388: call 0x5f1ad0 */ r_esp -= 4; W32(r_esp, 0x64d38du); f_005f1ad0();
L_0064d38d:; BB(0x0064d38d);
    /* 0064d38d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d38f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d390: ret  */ FN_RET(0x0064d330); r_esp += 4; return;
}

void f_0064d840(void) /* BaccaratRoom::vfunc83 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d840);
    /* 0064d840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d841: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d843: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d849: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064d84e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d850: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064d853: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 0064d859: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d85f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0064d862: mov byte ptr [ecx + 0x10], 0 */ W8((u32)(r_ecx+0x10u), 0x0u);
    /* 0064d866: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d86c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0064d86f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0064d872: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 0064d878: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0064d87e: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d881: jne 0x64d895 */ if (!fZ) goto L_0064d895;
L_0064d883:; BB(0x0064d883);
    /* 0064d883: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d889: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 0064d890: jmp 0x64d9c9 */ goto L_0064d9c9;
L_0064d895:; BB(0x0064d895);
    /* 0064d895: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d89b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d89d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d8a3: mov eax, dword ptr [edx + 0x160] */ r_eax = R32((u32)(r_edx+0x160u));
    /* 0064d8a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d8abu); call_ind(t); }
    /* 0064d8ab: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d8ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d8b0: jne 0x64d92b */ if (!fZ) goto L_0064d92b;
L_0064d8b2:; BB(0x0064d8b2);
    /* 0064d8b2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d8b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d8bc: call 0x6367d0 */ r_esp -= 4; W32(r_esp, 0x64d8c1u); f_006367d0();
    /* 0064d8c1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064d8c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d8c6: je 0x64d92b */ if (fZ) goto L_0064d92b;
L_0064d8c8:; BB(0x0064d8c8);
    /* 0064d8c8: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 0064d8ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8cf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064d8d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8d3: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064d8d8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064d8da: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064d8e0: mov eax, dword ptr [edx + 0x3b4] */ r_eax = R32((u32)(r_edx+0x3b4u));
    /* 0064d8e6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d8e8u); call_ind(t); }
    /* 0064d8e8: lea ecx, [ebp - 0x90] */ r_ecx = (u32)(r_ebp+0xffffff70u);
    /* 0064d8ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8ef: push 0x6dbb68 */ { u32 v = 0x6dbb68u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8f4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64d8f9u); f_00630f40();
    /* 0064d8f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8fd: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 0064d900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d901: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x64d907u); call_ind(t); }
    /* 0064d907: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d90a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d90c: push 0x6dbb48 */ { u32 v = 0x6dbb48u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d911: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x64d916u); f_00630f40();
    /* 0064d916: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d919: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d91a: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0064d91d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d91e: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x64d923u); f_0062ff10();
    /* 0064d923: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d926: jmp 0x64d9c9 */ goto L_0064d9c9;
L_0064d92b:; BB(0x0064d92b);
    /* 0064d92b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d92d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d92f: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d935: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0064d938: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064d93b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d93c: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d942: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d944: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d94a: mov eax, dword ptr [edx + 0x140] */ r_eax = R32((u32)(r_edx+0x140u));
    /* 0064d950: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d952u); call_ind(t); }
    /* 0064d952: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064d955: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d957: jne 0x64d95b */ if (!fZ) goto L_0064d95b;
L_0064d959:; BB(0x0064d959);
    /* 0064d959: jmp 0x64d9c9 */ goto L_0064d9c9;
L_0064d95b:; BB(0x0064d95b);
    /* 0064d95b: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d961: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0064d964: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x64d969u); f_0063b2d0();
    /* 0064d969: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d96b: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d971: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0064d974: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0064d977: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d978: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d97e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0064d981: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x64d986u); f_0063a3e0();
    /* 0064d986: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d988: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d98a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d98c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d98e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064d991: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d992: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d998: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0064d99b: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x64d9a0u); f_0063a8d0();
    /* 0064d9a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d9a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9a6: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d9ac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d9ae: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d9b4: mov eax, dword ptr [edx + 0x144] */ r_eax = R32((u32)(r_edx+0x144u));
    /* 0064d9ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64d9bcu); call_ind(t); }
    /* 0064d9bc: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0064d9c2: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
L_0064d9c9:; BB(0x0064d9c9);
    /* 0064d9c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d9cc: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d9ce: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x64d9d3u); f_00686d72();
    /* 0064d9d3: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d9d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d9d6: ret 4 */ FN_RET(0x0064d840); r_esp += 8; return;
}

void f_0064d9e0(void) /* BaccaratRoom::vfunc82 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064d9e0);
    /* 0064d9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d9e3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9e4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064d9e7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064d9ec: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0064d9ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064d9f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064d9f5: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 0064d9f8: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0064d9fb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064d9fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064da02: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064da04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064da07: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0064da0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64da0fu); call_ind(t); }
    /* 0064da0f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064da11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064da12: ret 8 */ FN_RET(0x0064d9e0); r_esp += 12; return;
}

void f_0064da20(void) /* BaccaratRoom::vfunc84 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064da20);
    /* 0064da20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064da21: mov ebp, esp */ r_ebp = r_esp;
    /* 0064da23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064da26: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064da29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064da2b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064da2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064da2f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064da32: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064da33: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064da36: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064da38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064da3b: mov edx, dword ptr [eax + 0x140] */ r_edx = R32((u32)(r_eax+0x140u));
    /* 0064da41: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64da43u); call_ind(t); }
    /* 0064da43: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064da46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064da48: jne 0x64da4f */ if (!fZ) goto L_0064da4f;
L_0064da4a:; BB(0x0064da4a);
    /* 0064da4a: jmp 0x64db03 */ goto L_0064db03;
L_0064da4f:; BB(0x0064da4f);
    /* 0064da4f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064da55: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0064da58: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064da5b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0064da5e: call 0x63b2d0 */ r_esp -= 4; W32(r_esp, 0x64da63u); f_0063b2d0();
    /* 0064da63: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064da67: jne 0x64daa3 */ if (!fZ) goto L_0064daa3;
L_0064da69:; BB(0x0064da69);
    /* 0064da69: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064da6b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064da6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064da6f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064da75: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0064da78: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064da7b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0064da7e: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x64da83u); f_0063a3e0();
    /* 0064da83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064da85: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064da87: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064da89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064da8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064da8d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064da93: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0064da96: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0064da99: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 0064da9c: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x64daa1u); f_0063a8d0();
    /* 0064daa1: jmp 0x64db03 */ goto L_0064db03;
L_0064daa3:; BB(0x0064daa3);
    /* 0064daa3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064daa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064daa7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064daaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064daab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064daae: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064dab0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064dab3: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 0064dab9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64dabbu); call_ind(t); }
    /* 0064dabb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064dac1: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0064dac4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064dac7: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0064daca: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064dacd: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0064dad0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064dad5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0064dad8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064dadb: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0064dade: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0064dae1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064dae4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dae6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dae8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064daea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064daec: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064daef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064daf0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064daf5: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0064daf8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064dafb: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 0064dafe: call 0x63a8d0 */ r_esp -= 4; W32(r_esp, 0x64db03u); f_0063a8d0();
L_0064db03:; BB(0x0064db03);
    /* 0064db03: mov esp, ebp */ r_esp = r_ebp;
    /* 0064db05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064db06: ret 8 */ FN_RET(0x0064da20); r_esp += 12; return;
}

void f_0064e110(void) /* BaccaratRoom::vfunc13 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064e110);
    /* 0064e110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e111: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064e115: push 0x6ac035 */ { u32 v = 0x6ac035u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e11a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064e120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e121: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e124: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064e129: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064e12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e12c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064e12f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064e135: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064e138: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0064e13b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e13c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e142: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e144: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e14a: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 0064e150: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e152u); call_ind(t); }
    /* 0064e152: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0064e154: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064e157: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064e15a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0064e15d: mov eax, dword ptr [0x1630698] */ r_eax = R32((u32)(0x1630698u));
    /* 0064e162: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064e165: jne 0x64e25b */ if (!fZ) goto L_0064e25b;
L_0064e16b:; BB(0x0064e16b);
    /* 0064e16b: mov ecx, dword ptr [0x1630698] */ r_ecx = R32((u32)(0x1630698u));
    /* 0064e171: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e174: mov dword ptr [0x1630698], ecx */ W32((u32)(0x1630698u), r_ecx);
    /* 0064e17a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e181: push 0x30d400 */ { u32 v = 0x30d400u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e186: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e18c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e18e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e194: mov edx, dword ptr [eax + 0x244] */ r_edx = R32((u32)(r_eax+0x244u));
    /* 0064e19a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e19cu); call_ind(t); }
    /* 0064e19c: mov dword ptr [0x76d4f0], eax */ W32((u32)(0x76d4f0u), r_eax);
    /* 0064e1a1: mov dword ptr [0x76d4f4], 0x186bf */ W32((u32)(0x76d4f4u), 0x186bfu);
    /* 0064e1ab: mov dword ptr [0x76d4f8], 0x30d401 */ W32((u32)(0x76d4f8u), 0x30d401u);
    /* 0064e1b5: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e1ba: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064e1bf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e1c1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e1c7: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0064e1cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e1cfu); call_ind(t); }
    /* 0064e1cf: mov dword ptr [0x76d4fc], eax */ W32((u32)(0x76d4fcu), r_eax);
    /* 0064e1d4: mov dword ptr [0x76d500], 0x186c3 */ W32((u32)(0x76d500u), 0x186c3u);
    /* 0064e1de: mov dword ptr [0x76d504], 0x30d402 */ W32((u32)(0x76d504u), 0x30d402u);
    /* 0064e1e8: push 0x30d402 */ { u32 v = 0x30d402u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e1ed: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e1f3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e1f5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e1fb: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0064e201: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e203u); call_ind(t); }
    /* 0064e203: mov dword ptr [0x76d508], eax */ W32((u32)(0x76d508u), r_eax);
    /* 0064e208: mov dword ptr [0x76d50c], 0x186d7 */ W32((u32)(0x76d50cu), 0x186d7u);
    /* 0064e212: mov dword ptr [0x76d510], 0x30d404 */ W32((u32)(0x76d510u), 0x30d404u);
    /* 0064e21c: push 0x30d404 */ { u32 v = 0x30d404u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e221: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e227: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e229: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e22f: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0064e235: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e237u); call_ind(t); }
    /* 0064e237: mov dword ptr [0x76d514], eax */ W32((u32)(0x76d514u), r_eax);
    /* 0064e23c: mov dword ptr [0x76d518], 0xffffffff */ W32((u32)(0x76d518u), 0xffffffffu);
    /* 0064e246: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e248: mov dword ptr [0x76d51c], ecx */ W32((u32)(0x76d51cu), r_ecx);
    /* 0064e24e: mov dword ptr [0x76d520], ecx */ W32((u32)(0x76d520u), r_ecx);
    /* 0064e254: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0064e25b:; BB(0x0064e25b);
    /* 0064e25b: mov edx, dword ptr [0x1630698] */ r_edx = R32((u32)(0x1630698u));
    /* 0064e261: and edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0064e264: jne 0x64e325 */ if (!fZ) goto L_0064e325;
L_0064e26a:; BB(0x0064e26a);
    /* 0064e26a: mov eax, dword ptr [0x1630698] */ r_eax = R32((u32)(0x1630698u));
    /* 0064e26f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064e272: mov dword ptr [0x1630698], eax */ W32((u32)(0x1630698u), r_eax);
    /* 0064e277: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064e27e: push 0x30d400 */ { u32 v = 0x30d400u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e283: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e289: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e28b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e291: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0064e297: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e299u); call_ind(t); }
    /* 0064e299: mov dword ptr [0x76d4c0], eax */ W32((u32)(0x76d4c0u), r_eax);
    /* 0064e29e: mov dword ptr [0x76d4c4], 0x186c2 */ W32((u32)(0x76d4c4u), 0x186c2u);
    /* 0064e2a8: mov dword ptr [0x76d4c8], 0x30d402 */ W32((u32)(0x76d4c8u), 0x30d402u);
    /* 0064e2b2: push 0x30d402 */ { u32 v = 0x30d402u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e2b7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e2bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e2bf: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e2c5: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0064e2cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e2cdu); call_ind(t); }
    /* 0064e2cd: mov dword ptr [0x76d4cc], eax */ W32((u32)(0x76d4ccu), r_eax);
    /* 0064e2d2: mov dword ptr [0x76d4d0], 0x186d8 */ W32((u32)(0x76d4d0u), 0x186d8u);
    /* 0064e2dc: mov dword ptr [0x76d4d4], 0x30d404 */ W32((u32)(0x76d4d4u), 0x30d404u);
    /* 0064e2e6: push 0x30d404 */ { u32 v = 0x30d404u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e2eb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e2f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e2f3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e2f9: mov eax, dword ptr [edx + 0x244] */ r_eax = R32((u32)(r_edx+0x244u));
    /* 0064e2ff: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e301u); call_ind(t); }
    /* 0064e301: mov dword ptr [0x76d4d8], eax */ W32((u32)(0x76d4d8u), r_eax);
    /* 0064e306: mov dword ptr [0x76d4dc], 0xffffffff */ W32((u32)(0x76d4dcu), 0xffffffffu);
    /* 0064e310: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e312: mov dword ptr [0x76d4e0], ecx */ W32((u32)(0x76d4e0u), r_ecx);
    /* 0064e318: mov dword ptr [0x76d4e4], ecx */ W32((u32)(0x76d4e4u), r_ecx);
    /* 0064e31e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0064e325:; BB(0x0064e325);
    /* 0064e325: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e329: jne 0x64e32f */ if (!fZ) goto L_0064e32f;
L_0064e32b:; BB(0x0064e32b);
    /* 0064e32b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064e32d: jmp 0x64e378 */ goto L_0064e378;
L_0064e32f:; BB(0x0064e32f);
    /* 0064e32f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e333: je 0x64e33d */ if (fZ) goto L_0064e33d;
L_0064e335:; BB(0x0064e335);
    /* 0064e335: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064e338: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064e33b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0064e33d:; BB(0x0064e33d);
    /* 0064e33d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e341: je 0x64e34b */ if (fZ) goto L_0064e34b;
L_0064e343:; BB(0x0064e343);
    /* 0064e343: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064e346: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e349: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_0064e34b:; BB(0x0064e34b);
    /* 0064e34b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e34e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e350: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064e353: mov eax, dword ptr [edx + 0x160] */ r_eax = R32((u32)(r_edx+0x160u));
    /* 0064e359: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e35bu); call_ind(t); }
    /* 0064e35b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064e35e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e360: je 0x64e36d */ if (fZ) goto L_0064e36d;
L_0064e362:; BB(0x0064e362);
    /* 0064e362: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0064e365: mov dword ptr [edx], 0x76d4e8 */ W32((u32)(r_edx), 0x76d4e8u);
    /* 0064e36b: jmp 0x64e376 */ goto L_0064e376;
L_0064e36d:; BB(0x0064e36d);
    /* 0064e36d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0064e370: mov dword ptr [eax], 0x76d4b8 */ W32((u32)(r_eax), 0x76d4b8u);
L_0064e376:; BB(0x0064e376);
    /* 0064e376: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0064e378:; BB(0x0064e378);
    /* 0064e378: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e37b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064e382: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064e383: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e385: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e386: ret 0xc */ FN_RET(0x0064e110); r_esp += 16; return;
}

void f_0064e390(void) /* BaccaratRoom::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064e390);
    /* 0064e390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e391: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e393: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e396: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064e399: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e39d: jne 0x64e3a3 */ if (!fZ) goto L_0064e3a3;
L_0064e39f:; BB(0x0064e39f);
    /* 0064e39f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064e3a1: jmp 0x64e41d */ goto L_0064e41d;
L_0064e3a3:; BB(0x0064e3a3);
    /* 0064e3a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e3aa: jmp 0x64e3b5 */ goto L_0064e3b5;
L_0064e3ac:; BB(0x0064e3ac);
    /* 0064e3ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e3af: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064e3b2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064e3b5:; BB(0x0064e3b5);
    /* 0064e3b5: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e3bb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e3bd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e3c3: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0064e3c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e3cbu); call_ind(t); }
    /* 0064e3cb: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e3ce: jge 0x64e41b */ if ((fS==fO)) goto L_0064e41b;
L_0064e3d0:; BB(0x0064e3d0);
    /* 0064e3d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e3d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3d4: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e3da: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e3dc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e3e2: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0064e3e8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e3eau); call_ind(t); }
    /* 0064e3ea: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064e3ed: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e3f1: jne 0x64e3f5 */ if (!fZ) goto L_0064e3f5;
L_0064e3f3:; BB(0x0064e3f3);
    /* 0064e3f3: jmp 0x64e3ac */ goto L_0064e3ac;
L_0064e3f5:; BB(0x0064e3f5);
    /* 0064e3f5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064e3f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e3f9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e3fc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e3fe: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e401: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0064e404: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e406u); call_ind(t); }
    /* 0064e406: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064e409: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0064e40b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064e40e: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e411: jne 0x64e415 */ if (!fZ) goto L_0064e415;
L_0064e413:; BB(0x0064e413);
    /* 0064e413: jmp 0x64e3ac */ goto L_0064e3ac;
L_0064e415:; BB(0x0064e415);
    /* 0064e415: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064e417: jmp 0x64e41d */ goto L_0064e41d;
L_0064e41b:; BB(0x0064e41b);
    /* 0064e41b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0064e41d:; BB(0x0064e41d);
    /* 0064e41d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e41f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e420: ret 8 */ FN_RET(0x0064e390); r_esp += 12; return;
}

void f_0064e6a0(void) /* BaccaratRoom::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064e6a0);
    /* 0064e6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e6a3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e6a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064e6a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064e6a8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064e6ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e6b2: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e6b6: jne 0x64e6bf */ if (!fZ) goto L_0064e6bf;
L_0064e6b8:; BB(0x0064e6b8);
    /* 0064e6b8: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0064e6ba: jmp 0x64e873 */ goto L_0064e873;
L_0064e6bf:; BB(0x0064e6bf);
    /* 0064e6bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e6c6: jmp 0x64e6d1 */ goto L_0064e6d1;
L_0064e6c8:; BB(0x0064e6c8);
    /* 0064e6c8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e6cb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064e6ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064e6d1:; BB(0x0064e6d1);
    /* 0064e6d1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e6d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e6d9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e6df: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0064e6e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e6e7u); call_ind(t); }
    /* 0064e6e7: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e6ea: jge 0x64e7a7 */ if ((fS==fO)) goto L_0064e7a7;
L_0064e6f0:; BB(0x0064e6f0);
    /* 0064e6f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e6f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e6f4: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e6fa: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e6fc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e702: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0064e708: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e70au); call_ind(t); }
    /* 0064e70a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e70c: je 0x64e7a2 */ if (fZ) goto L_0064e7a2;
L_0064e712:; BB(0x0064e712);
    /* 0064e712: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e716: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e71c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e71e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e724: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0064e72a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e72cu); call_ind(t); }
    /* 0064e72c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064e72f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e732: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e734: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e737: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064e73a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e73cu); call_ind(t); }
    /* 0064e73c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064e73f: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e743: jne 0x64e747 */ if (!fZ) goto L_0064e747;
L_0064e745:; BB(0x0064e745);
    /* 0064e745: jmp 0x64e6c8 */ goto L_0064e6c8;
L_0064e747:; BB(0x0064e747);
    /* 0064e747: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0064e74e:; BB(0x0064e74e);
    /* 0064e74e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e752: je 0x64e7a2 */ if (fZ) goto L_0064e7a2;
L_0064e754:; BB(0x0064e754);
    /* 0064e754: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e757: imul ecx, ecx, 0x194 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x194u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064e75d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e760: cmp dword ptr [edx + ecx], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e764: je 0x64e7a2 */ if (fZ) goto L_0064e7a2;
L_0064e766:; BB(0x0064e766);
    /* 0064e766: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e769: imul eax, eax, 0x194 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x194u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064e76f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e772: mov edx, dword ptr [ecx + eax] */ r_edx = R32((u32)(r_ecx+r_eax));
    /* 0064e775: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e778: jne 0x64e797 */ if (!fZ) goto L_0064e797;
L_0064e77a:; BB(0x0064e77a);
    /* 0064e77a: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e77d: imul esi, esi, 0x194 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x194u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064e783: add esi, dword ptr [ebp - 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064e786: mov ecx, 0x65 */ r_ecx = 0x65u;
    /* 0064e78b: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0064e78e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0064e790: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064e792: jmp 0x64e873 */ goto L_0064e873;
L_0064e797:; BB(0x0064e797);
    /* 0064e797: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e79a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064e79d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064e7a0: jmp 0x64e74e */ goto L_0064e74e;
L_0064e7a2:; BB(0x0064e7a2);
    /* 0064e7a2: jmp 0x64e6c8 */ goto L_0064e6c8;
L_0064e7a7:; BB(0x0064e7a7);
    /* 0064e7a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0064e7ae:; BB(0x0064e7ae);
    /* 0064e7ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e7b1: imul ecx, ecx, 0x194 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x194u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064e7b7: cmp dword ptr [ecx + 0x76d9c0], -1 */ {  u32 a = R32((u32)(r_ecx+0x76d9c0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e7be: je 0x64e856 */ if (fZ) goto L_0064e856;
L_0064e7c4:; BB(0x0064e7c4);
    /* 0064e7c4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e7c7: imul edx, edx, 0x194 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x194u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064e7cd: mov eax, dword ptr [edx + 0x76d9c0] */ r_eax = R32((u32)(r_edx+0x76d9c0u));
    /* 0064e7d3: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e7d6: jne 0x64e848 */ if (!fZ) goto L_0064e848;
L_0064e7d8:; BB(0x0064e7d8);
    /* 0064e7d8: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e7db: imul esi, esi, 0x194 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x194u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0064e7e1: add esi, 0x76d9c0 */ {  u32 a = r_esi; u32 b = 0x76d9c0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0064e7e7: mov ecx, 0x65 */ r_ecx = 0x65u;
    /* 0064e7ec: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0064e7ef: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0064e7f1: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0064e7f8: jmp 0x64e803 */ goto L_0064e803;
L_0064e7fa:; BB(0x0064e7fa);
    /* 0064e7fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e7fd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e800: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0064e803:; BB(0x0064e803);
    /* 0064e803: cmp dword ptr [ebp - 0x10], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e807: jge 0x64e844 */ if ((fS==fO)) goto L_0064e844;
L_0064e809:; BB(0x0064e809);
    /* 0064e809: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e80c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064e80f: cmp dword ptr [eax + edx*4 + 4], -1 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e814: jne 0x64e842 */ if (!fZ) goto L_0064e842;
L_0064e816:; BB(0x0064e816);
    /* 0064e816: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064e819: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e81c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0064e81f: jmp 0x64e82a */ goto L_0064e82a;
L_0064e821:; BB(0x0064e821);
    /* 0064e821: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e824: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064e827: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_0064e82a:; BB(0x0064e82a);
    /* 0064e82a: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e82e: jge 0x64e840 */ if ((fS==fO)) goto L_0064e840;
L_0064e830:; BB(0x0064e830);
    /* 0064e830: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e833: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064e836: mov dword ptr [ecx + eax*4 + 4], 0xffffffff */ W32((u32)(r_ecx+r_eax*4+0x4u), 0xffffffffu);
    /* 0064e83e: jmp 0x64e821 */ goto L_0064e821;
L_0064e840:; BB(0x0064e840);
    /* 0064e840: jmp 0x64e844 */ goto L_0064e844;
L_0064e842:; BB(0x0064e842);
    /* 0064e842: jmp 0x64e7fa */ goto L_0064e7fa;
L_0064e844:; BB(0x0064e844);
    /* 0064e844: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064e846: jmp 0x64e873 */ goto L_0064e873;
L_0064e848:; BB(0x0064e848);
    /* 0064e848: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e84b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064e84e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064e851: jmp 0x64e7ae */ goto L_0064e7ae;
L_0064e856:; BB(0x0064e856);
    /* 0064e856: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0064e858: jne 0x64e871 */ if (!fZ) goto L_0064e871;
L_0064e85a:; BB(0x0064e85a);
    /* 0064e85a: push 0x383 */ { u32 v = 0x383u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e85f: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e864: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0064e869: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64e86eu); f_005e9f20();
    /* 0064e86e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064e871:; BB(0x0064e871);
    /* 0064e871: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0064e873:; BB(0x0064e873);
    /* 0064e873: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064e874: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064e875: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e878: ret 8 */ FN_RET(0x0064e6a0); r_esp += 12; return;
}

void f_0064e880(void) /* BaccaratRoom::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064e880);
    /* 0064e880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064e881: mov ebp, esp */ r_ebp = r_esp;
    /* 0064e883: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064e886: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064e889: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e890: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064e897: jmp 0x64e8a2 */ goto L_0064e8a2;
L_0064e899:; BB(0x0064e899);
    /* 0064e899: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e89c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064e89f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064e8a2:; BB(0x0064e8a2);
    /* 0064e8a2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e8a8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e8aa: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e8b0: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0064e8b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e8b8u); call_ind(t); }
    /* 0064e8b8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064e8bb: jge 0x64e97e */ if ((fS==fO)) goto L_0064e97e;
L_0064e8c1:; BB(0x0064e8c1);
    /* 0064e8c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e8c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064e8c5: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e8cb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e8cd: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e8d3: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0064e8d9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e8dbu); call_ind(t); }
    /* 0064e8db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e8dd: je 0x64e979 */ if (fZ) goto L_0064e979;
L_0064e8e3:; BB(0x0064e8e3);
    /* 0064e8e3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e8e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064e8e7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e8ed: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e8ef: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e8f5: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0064e8fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e8fdu); call_ind(t); }
    /* 0064e8fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0064e900: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e903: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064e905: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e908: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0064e90b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64e90du); call_ind(t); }
    /* 0064e90d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064e910: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e914: jne 0x64e918 */ if (!fZ) goto L_0064e918;
L_0064e916:; BB(0x0064e916);
    /* 0064e916: jmp 0x64e899 */ goto L_0064e899;
L_0064e918:; BB(0x0064e918);
    /* 0064e918: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_0064e91f:; BB(0x0064e91f);
    /* 0064e91f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e923: je 0x64e979 */ if (fZ) goto L_0064e979;
L_0064e925:; BB(0x0064e925);
    /* 0064e925: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e928: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0064e92b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e92e: cmp dword ptr [edx + ecx], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e932: je 0x64e979 */ if (fZ) goto L_0064e979;
L_0064e934:; BB(0x0064e934);
    /* 0064e934: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e937: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064e93a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e93d: mov edx, dword ptr [ecx + eax] */ r_edx = R32((u32)(r_ecx+r_eax));
    /* 0064e940: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e943: jne 0x64e96e */ if (!fZ) goto L_0064e96e;
L_0064e945:; BB(0x0064e945);
    /* 0064e945: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e948: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064e94b: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064e94e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064e951: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064e953: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0064e955: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064e958: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0064e95b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0064e95e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0064e961: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0064e964: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0064e967: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064e969: jmp 0x64eb71 */ goto L_0064eb71;
L_0064e96e:; BB(0x0064e96e);
    /* 0064e96e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e971: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e974: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0064e977: jmp 0x64e91f */ goto L_0064e91f;
L_0064e979:; BB(0x0064e979);
    /* 0064e979: jmp 0x64e899 */ goto L_0064e899;
L_0064e97e:; BB(0x0064e97e);
    /* 0064e97e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064e984: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064e986: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064e98c: mov edx, dword ptr [eax + 0x250] */ r_edx = R32((u32)(r_eax+0x250u));
    /* 0064e992: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64e994u); call_ind(t); }
    /* 0064e994: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064e997: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e99b: je 0x64e9fe */ if (fZ) goto L_0064e9fe;
L_0064e99d:; BB(0x0064e99d);
    /* 0064e99d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0064e9a4:; BB(0x0064e9a4);
    /* 0064e9a4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e9a8: je 0x64e9fe */ if (fZ) goto L_0064e9fe;
L_0064e9aa:; BB(0x0064e9aa);
    /* 0064e9aa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e9ad: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064e9b0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e9b3: cmp dword ptr [ecx + eax], -1 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e9b7: je 0x64e9fe */ if (fZ) goto L_0064e9fe;
L_0064e9b9:; BB(0x0064e9b9);
    /* 0064e9b9: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e9bc: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0064e9bf: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064e9c2: mov ecx, dword ptr [eax + edx] */ r_ecx = R32((u32)(r_eax+r_edx));
    /* 0064e9c5: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064e9c8: jne 0x64e9f3 */ if (!fZ) goto L_0064e9f3;
L_0064e9ca:; BB(0x0064e9ca);
    /* 0064e9ca: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e9cd: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0064e9d0: add edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064e9d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064e9d6: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0064e9d8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0064e9da: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0064e9dd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0064e9e0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0064e9e3: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0064e9e6: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0064e9e9: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0064e9ec: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064e9ee: jmp 0x64eb71 */ goto L_0064eb71;
L_0064e9f3:; BB(0x0064e9f3);
    /* 0064e9f3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064e9f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064e9f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064e9fc: jmp 0x64e9a4 */ goto L_0064e9a4;
L_0064e9fe:; BB(0x0064e9fe);
    /* 0064e9fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0064ea05:; BB(0x0064ea05);
    /* 0064ea05: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ea08: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0064ea0b: cmp dword ptr [ecx + 0x76f7c0], -1 */ {  u32 a = R32((u32)(r_ecx+0x76f7c0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ea12: je 0x64ea5c */ if (fZ) goto L_0064ea5c;
L_0064ea14:; BB(0x0064ea14);
    /* 0064ea14: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ea17: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0064ea1a: mov eax, dword ptr [edx + 0x76f7c0] */ r_eax = R32((u32)(r_edx+0x76f7c0u));
    /* 0064ea20: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ea23: jne 0x64ea51 */ if (!fZ) goto L_0064ea51;
L_0064ea25:; BB(0x0064ea25);
    /* 0064ea25: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ea28: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0064ea2b: add ecx, 0x76f7c0 */ {  u32 a = r_ecx; u32 b = 0x76f7c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064ea31: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0064ea34: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0064ea36: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0064ea38: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0064ea3b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0064ea3e: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0064ea41: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0064ea44: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0064ea47: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0064ea4a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064ea4c: jmp 0x64eb71 */ goto L_0064eb71;
L_0064ea51:; BB(0x0064ea51);
    /* 0064ea51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ea54: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0064ea57: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064ea5a: jmp 0x64ea05 */ goto L_0064ea05;
L_0064ea5c:; BB(0x0064ea5c);
    /* 0064ea5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064ea63: jmp 0x64ea6e */ goto L_0064ea6e;
L_0064ea65:; BB(0x0064ea65);
    /* 0064ea65: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ea68: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064ea6b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0064ea6e:; BB(0x0064ea6e);
    /* 0064ea6e: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ea74: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ea76: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ea7c: mov eax, dword ptr [edx + 0xec] */ r_eax = R32((u32)(r_edx+0xecu));
    /* 0064ea82: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ea84u); call_ind(t); }
    /* 0064ea84: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064ea87: jge 0x64eb47 */ if ((fS==fO)) goto L_0064eb47;
L_0064ea8d:; BB(0x0064ea8d);
    /* 0064ea8d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064ea90: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ea91: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0064ea97: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064ea99: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064ea9f: mov edx, dword ptr [eax + 0xe0] */ r_edx = R32((u32)(r_eax+0xe0u));
    /* 0064eaa5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64eaa7u); call_ind(t); }
    /* 0064eaa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eaa9: je 0x64eb42 */ if (fZ) goto L_0064eb42;
L_0064eaaf:; BB(0x0064eaaf);
    /* 0064eaaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064eab2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064eab3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064eab9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064eabb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064eac1: mov eax, dword ptr [edx + 0xe0] */ r_eax = R32((u32)(r_edx+0xe0u));
    /* 0064eac7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64eac9u); call_ind(t); }
    /* 0064eac9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064eacc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064eacf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064ead1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064ead4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064ead7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64ead9u); call_ind(t); }
    /* 0064ead9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0064eadc: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eae0: jne 0x64eae4 */ if (!fZ) goto L_0064eae4;
L_0064eae2:; BB(0x0064eae2);
    /* 0064eae2: jmp 0x64ea65 */ goto L_0064ea65;
L_0064eae4:; BB(0x0064eae4);
    /* 0064eae4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_0064eaeb:; BB(0x0064eaeb);
    /* 0064eaeb: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eaef: je 0x64eb42 */ if (fZ) goto L_0064eb42;
L_0064eaf1:; BB(0x0064eaf1);
    /* 0064eaf1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064eaf4: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0064eaf7: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064eafa: cmp dword ptr [edx + ecx], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eafe: je 0x64eb42 */ if (fZ) goto L_0064eb42;
L_0064eb00:; BB(0x0064eb00);
    /* 0064eb00: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064eb03: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064eb06: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0064eb09: mov edx, dword ptr [ecx + eax] */ r_edx = R32((u32)(r_ecx+r_eax));
    /* 0064eb0c: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064eb0f: jne 0x64eb37 */ if (!fZ) goto L_0064eb37;
L_0064eb11:; BB(0x0064eb11);
    /* 0064eb11: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064eb14: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0064eb17: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064eb1a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0064eb1d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064eb1f: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0064eb21: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0064eb24: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0064eb27: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0064eb2a: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0064eb2d: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0064eb30: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0064eb33: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064eb35: jmp 0x64eb71 */ goto L_0064eb71;
L_0064eb37:; BB(0x0064eb37);
    /* 0064eb37: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064eb3a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064eb3d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0064eb40: jmp 0x64eaeb */ goto L_0064eaeb;
L_0064eb42:; BB(0x0064eb42);
    /* 0064eb42: jmp 0x64ea65 */ goto L_0064ea65;
L_0064eb47:; BB(0x0064eb47);
    /* 0064eb47: push 0x6dd09c */ { u32 v = 0x6dd09cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb4c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x64eb51u); f_0062fde0();
    /* 0064eb51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064eb54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0064eb56: jne 0x64eb6f */ if (!fZ) goto L_0064eb6f;
L_0064eb58:; BB(0x0064eb58);
    /* 0064eb58: push 0x3ce */ { u32 v = 0x3ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb5d: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb62: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0064eb67: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x64eb6cu); f_005e9f20();
    /* 0064eb6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064eb6f:; BB(0x0064eb6f);
    /* 0064eb6f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0064eb71:; BB(0x0064eb71);
    /* 0064eb71: mov esp, ebp */ r_esp = r_ebp;
    /* 0064eb73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064eb74: ret 8 */ FN_RET(0x0064e880); r_esp += 12; return;
}

void f_0064ef30(void) /* BaccaratRoom::vfunc94 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064ef30);
    /* 0064ef30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef31: mov ebp, esp */ r_ebp = r_esp;
    /* 0064ef33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064ef34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064ef37: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ef3e: je 0x64ef55 */ if (fZ) goto L_0064ef55;
L_0064ef40:; BB(0x0064ef40);
    /* 0064ef40: mov ecx, dword ptr [0x163068c] */ r_ecx = R32((u32)(0x163068cu));
    /* 0064ef46: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64ef4bu); f_005f8990();
    /* 0064ef4b: mov dword ptr [0x163068c], 0 */ W32((u32)(0x163068cu), 0x0u);
L_0064ef55:; BB(0x0064ef55);
    /* 0064ef55: cmp dword ptr [0x16306c8], 0 */ {  u32 a = R32((u32)(0x16306c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ef5c: je 0x64ef69 */ if (fZ) goto L_0064ef69;
L_0064ef5e:; BB(0x0064ef5e);
    /* 0064ef5e: mov ecx, dword ptr [0x16306c8] */ r_ecx = R32((u32)(0x16306c8u));
    /* 0064ef64: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64ef69u); f_005f85d0();
L_0064ef69:; BB(0x0064ef69);
    /* 0064ef69: mov esp, ebp */ r_esp = r_ebp;
    /* 0064ef6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064ef6c: ret 4 */ FN_RET(0x0064ef30); r_esp += 8; return;
}

void f_0064f060(void) /* BaccaratRoom::vfunc95 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f060);
    /* 0064f060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f061: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f063: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f065: push 0x6ac0f3 */ { u32 v = 0x6ac0f3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f06a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f071: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f074: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f079: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f07b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f07c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f07f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f085: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064f088: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0064f08c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f08e: jne 0x64f0b9 */ if (!fZ) goto L_0064f0b9;
L_0064f090:; BB(0x0064f090);
    /* 0064f090: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064f096: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64f09bu); f_005f3bf0();
    /* 0064f09b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f09c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064f0a2: call 0x6375b0 */ r_esp -= 4; W32(r_esp, 0x64f0a7u); f_006375b0();
    /* 0064f0a7: mov ecx, eax */ r_ecx = r_eax;
    /* 0064f0a9: call 0x639ef0 */ r_esp -= 4; W32(r_esp, 0x64f0aeu); f_00639ef0();
    /* 0064f0ae: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0064f0b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f0b3: je 0x64f165 */ if (fZ) goto L_0064f165;
L_0064f0b9:; BB(0x0064f0b9);
    /* 0064f0b9: cmp dword ptr [0x16306c8], 0 */ {  u32 a = R32((u32)(0x16306c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f0c0: jne 0x64f12f */ if (!fZ) goto L_0064f12f;
L_0064f0c2:; BB(0x0064f0c2);
    /* 0064f0c2: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f0c7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f0ccu); f_00686d82();
    /* 0064f0cc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f0cf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f0d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f0d9: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f0dd: je 0x64f0f0 */ if (fZ) goto L_0064f0f0;
L_0064f0df:; BB(0x0064f0df);
    /* 0064f0df: mov dl, byte ptr [ebp + 0xc] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0xcu))) & 0xffu);
    /* 0064f0e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f0e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f0e6: call 0x671f90 */ r_esp -= 4; W32(r_esp, 0x64f0ebu); f_00671f90();
    /* 0064f0eb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064f0ee: jmp 0x64f0f7 */ goto L_0064f0f7;
L_0064f0f0:; BB(0x0064f0f0);
    /* 0064f0f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064f0f7:; BB(0x0064f0f7);
    /* 0064f0f7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064f0fa: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064f0fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f104: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f107: mov dword ptr [0x16306c8], ecx */ W32((u32)(0x16306c8u), r_ecx);
    /* 0064f10d: mov edx, dword ptr [0x16306c8] */ r_edx = R32((u32)(0x16306c8u));
    /* 0064f113: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064f115: mov ecx, dword ptr [0x16306c8] */ r_ecx = R32((u32)(0x16306c8u));
    /* 0064f11b: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064f11e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64f120u); call_ind(t); }
    /* 0064f120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f122: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f124: mov ecx, dword ptr [0x16306c8] */ r_ecx = R32((u32)(0x16306c8u));
    /* 0064f12a: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64f12fu); f_005f7340();
L_0064f12f:; BB(0x0064f12f);
    /* 0064f12f: mov ecx, dword ptr [0x16306c8] */ r_ecx = R32((u32)(0x16306c8u));
    /* 0064f135: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64f13au); f_005f85d0();
    /* 0064f13a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0064f13f: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 0064f142: mov byte ptr [ebp - 0x19], cl */ W8((u32)(r_ebp+0xffffffe7u), (u8)r_ecx);
    /* 0064f145: movzx edx, byte ptr [ebp - 0x19] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 0064f149: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f14b: je 0x64f161 */ if (fZ) goto L_0064f161;
L_0064f14d:; BB(0x0064f14d);
    /* 0064f14d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f14f: mov eax, dword ptr [0x16306c8] */ r_eax = R32((u32)(0x16306c8u));
    /* 0064f154: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064f156: mov ecx, dword ptr [0x16306c8] */ r_ecx = R32((u32)(0x16306c8u));
    /* 0064f15c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0064f15f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64f161u); call_ind(t); }
L_0064f161:; BB(0x0064f161);
    /* 0064f161: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064f163: jmp 0x64f167 */ goto L_0064f167;
L_0064f165:; BB(0x0064f165);
    /* 0064f165: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0064f167:; BB(0x0064f167);
    /* 0064f167: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f16a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f171: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f172: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f174: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f175: ret 8 */ FN_RET(0x0064f060); r_esp += 12; return;
}

void f_0064f180(void) /* BaccaratRoom::vfunc96 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f180);
    /* 0064f180: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f181: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f183: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f184: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f187: cmp dword ptr [0x16306c8], 0 */ {  u32 a = R32((u32)(0x16306c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f18e: je 0x64f1a5 */ if (fZ) goto L_0064f1a5;
L_0064f190:; BB(0x0064f190);
    /* 0064f190: mov ecx, dword ptr [0x16306c8] */ r_ecx = R32((u32)(0x16306c8u));
    /* 0064f196: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f19bu); f_005f8990();
    /* 0064f19b: mov dword ptr [0x16306c8], 0 */ W32((u32)(0x16306c8u), 0x0u);
L_0064f1a5:; BB(0x0064f1a5);
    /* 0064f1a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f1a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f1a8: ret  */ FN_RET(0x0064f180); r_esp += 4; return;
}

void f_0064f1b0(void) /* BaccaratRoom::vfunc97 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f1b0);
    /* 0064f1b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f1b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f1b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f1b5: push 0x6ac119 */ { u32 v = 0x6ac119u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f1ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f1c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f1c1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f1c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f1c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f1cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f1cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f1cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f1d5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064f1d8: cmp dword ptr [0x16306cc], 0 */ {  u32 a = R32((u32)(0x16306ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f1df: jne 0x64f23f */ if (!fZ) goto L_0064f23f;
L_0064f1e1:; BB(0x0064f1e1);
    /* 0064f1e1: push 0x1f8 */ { u32 v = 0x1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f1e6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f1ebu); f_00686d82();
    /* 0064f1eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f1ee: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f1f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f1f8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f1fc: je 0x64f20b */ if (fZ) goto L_0064f20b;
L_0064f1fe:; BB(0x0064f1fe);
    /* 0064f1fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f201: call 0x672a50 */ r_esp -= 4; W32(r_esp, 0x64f206u); f_00672a50();
    /* 0064f206: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064f209: jmp 0x64f212 */ goto L_0064f212;
L_0064f20b:; BB(0x0064f20b);
    /* 0064f20b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064f212:; BB(0x0064f212);
    /* 0064f212: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f215: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064f218: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f21f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f222: mov dword ptr [0x16306cc], ecx */ W32((u32)(0x16306ccu), r_ecx);
    /* 0064f228: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0064f22e: call 0x5f3bf0 */ r_esp -= 4; W32(r_esp, 0x64f233u); f_005f3bf0();
    /* 0064f233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f234: mov ecx, dword ptr [0x16306cc] */ r_ecx = R32((u32)(0x16306ccu));
    /* 0064f23a: call 0x672b20 */ r_esp -= 4; W32(r_esp, 0x64f23fu); f_00672b20();
L_0064f23f:; BB(0x0064f23f);
    /* 0064f23f: mov ecx, dword ptr [0x16306cc] */ r_ecx = R32((u32)(0x16306ccu));
    /* 0064f245: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64f24au); f_005f85d0();
    /* 0064f24a: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0064f24c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f24f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f256: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f257: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f259: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f25a: ret  */ FN_RET(0x0064f1b0); r_esp += 4; return;
}

void f_0064f260(void) /* BaccaratRoom::vfunc98 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f260);
    /* 0064f260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f261: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f263: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064f264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0064f267: cmp dword ptr [0x16306cc], 0 */ {  u32 a = R32((u32)(0x16306ccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f26e: je 0x64f285 */ if (fZ) goto L_0064f285;
L_0064f270:; BB(0x0064f270);
    /* 0064f270: mov ecx, dword ptr [0x16306cc] */ r_ecx = R32((u32)(0x16306ccu));
    /* 0064f276: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x64f27bu); f_005f8990();
    /* 0064f27b: mov dword ptr [0x16306cc], 0 */ W32((u32)(0x16306ccu), 0x0u);
L_0064f285:; BB(0x0064f285);
    /* 0064f285: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f288: ret  */ FN_RET(0x0064f260); r_esp += 4; return;
}

void f_0064f290(void) /* BaccaratRoom::vfunc99 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0064f290);
    /* 0064f290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064f291: mov ebp, esp */ r_ebp = r_esp;
    /* 0064f293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f295: push 0x6ac13f */ { u32 v = 0x6ac13fu; r_esp -= 4; W32(r_esp, v); }
    /* 0064f29a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064f2a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f2a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064f2a4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0064f2a9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064f2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064f2ac: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0064f2af: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0064f2b5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064f2b8: cmp dword ptr [0x163069c], 0 */ {  u32 a = R32((u32)(0x163069cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f2bf: jne 0x64f32a */ if (!fZ) goto L_0064f32a;
L_0064f2c1:; BB(0x0064f2c1);
    /* 0064f2c1: push 0x574 */ { u32 v = 0x574u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f2c6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x64f2cbu); f_00686d82();
    /* 0064f2cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064f2ce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064f2d1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064f2d8: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064f2dc: je 0x64f2eb */ if (fZ) goto L_0064f2eb;
L_0064f2de:; BB(0x0064f2de);
    /* 0064f2de: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064f2e1: call 0x6535f0 */ r_esp -= 4; W32(r_esp, 0x64f2e6u); f_006535f0();
    /* 0064f2e6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0064f2e9: jmp 0x64f2f2 */ goto L_0064f2f2;
L_0064f2eb:; BB(0x0064f2eb);
    /* 0064f2eb: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0064f2f2:; BB(0x0064f2f2);
    /* 0064f2f2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064f2f5: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0064f2f8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064f2ff: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0064f302: mov dword ptr [0x163069c], ecx */ W32((u32)(0x163069cu), r_ecx);
    /* 0064f308: mov edx, dword ptr [0x163069c] */ r_edx = R32((u32)(0x163069cu));
    /* 0064f30e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0064f310: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0064f316: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064f319: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64f31bu); call_ind(t); }
    /* 0064f31b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f31d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064f31f: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0064f325: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x64f32au); f_005f7340();
L_0064f32a:; BB(0x0064f32a);
    /* 0064f32a: mov ecx, dword ptr [0x163069c] */ r_ecx = R32((u32)(0x163069cu));
    /* 0064f330: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x64f335u); f_005f85d0();
    /* 0064f335: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064f338: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064f33f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064f340: mov esp, ebp */ r_esp = r_ebp;
    /* 0064f342: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064f343: ret  */ FN_RET(0x0064f290); r_esp += 4; return;
}

void f_006501f0(void) /* BaccaratRoom::vfunc120 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006501f0);
    /* 006501f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006501f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006501f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006501f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006501f7: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 006501fc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006501fe: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00650204: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0065020a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65020cu); call_ind(t); }
    /* 0065020c: mov esp, ebp */ r_esp = r_ebp;
    /* 0065020e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065020f: ret  */ FN_RET(0x006501f0); r_esp += 4; return;
}

void f_00650210(void) /* BaccaratRoom::vfunc4 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650210);
    /* 00650210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650211: mov ebp, esp */ r_ebp = r_esp;
    /* 00650213: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650216: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00650219: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00650220: jmp 0x65022b */ goto L_0065022b;
L_00650222:; BB(0x00650222);
    /* 00650222: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650225: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00650228: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0065022b:; BB(0x0065022b);
    /* 0065022b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00650231: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00650233: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00650239: mov eax, dword ptr [edx + 0x10c] */ r_eax = R32((u32)(r_edx+0x10cu));
    /* 0065023f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x650241u); call_ind(t); }
    /* 00650241: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00650244: jge 0x650305 */ if ((fS==fO)) goto L_00650305;
L_0065024a:; BB(0x0065024a);
    /* 0065024a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00650250: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 00650253: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650256: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00650259: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0065025c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065025f: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x650264u); f_0063aac0();
    /* 00650264: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650266: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00650269: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065026b: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065026f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00650272: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00650275: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650277: jne 0x650300 */ if (!fZ) goto L_00650300;
L_0065027d:; BB(0x0065027d);
    /* 0065027d: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00650283: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 00650286: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650289: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 0065028c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0065028f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00650292: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650296: je 0x650300 */ if (fZ) goto L_00650300;
L_00650298:; BB(0x00650298);
    /* 00650298: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065029e: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006502a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006502a4: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006502a7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006502aa: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006502ad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006502b0: cmp dword ptr [eax + 0xc], 0 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006502b4: je 0x650300 */ if (fZ) goto L_00650300;
L_006502b6:; BB(0x006502b6);
    /* 006502b6: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006502bc: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 006502bf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006502c2: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 006502c5: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 006502c8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006502cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006502ce: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006502d1: cmp dword ptr [ecx + 0x17c], 0 */ {  u32 a = R32((u32)(r_ecx+0x17cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006502d8: je 0x650300 */ if (fZ) goto L_00650300;
L_006502da:; BB(0x006502da);
    /* 006502da: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 006502e0: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 006502e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006502e6: mov edx, dword ptr [eax + ecx*4] */ r_edx = R32((u32)(r_eax+r_ecx*4));
    /* 006502e9: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006502ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006502ef: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006502f2: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006502f5: mov ecx, dword ptr [edx + 0x17c] */ r_ecx = R32((u32)(r_edx+0x17cu));
    /* 006502fb: call 0x5fc250 */ r_esp -= 4; W32(r_esp, 0x650300u); f_005fc250();
L_00650300:; BB(0x00650300);
    /* 00650300: jmp 0x650222 */ goto L_00650222;
L_00650305:; BB(0x00650305);
    /* 00650305: mov esp, ebp */ r_esp = r_ebp;
    /* 00650307: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650308: ret  */ FN_RET(0x00650210); r_esp += 4; return;
}

void f_006505c0(void) /* BaccaratRoom::vfunc131 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006505c0);
    /* 006505c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006505c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006505c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006505c5: push 0x6ac2d9 */ { u32 v = 0x6ac2d9u; r_esp -= 4; W32(r_esp, v); }
    /* 006505ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006505d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006505d1: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006505d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006505d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006505db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006505dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006505df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006505e5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006505e8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006505eb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006505ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006505f0: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 006505f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6505f8u); call_ind(t); }
    /* 006505f8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006505fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006505fd: jne 0x650648 */ if (!fZ) goto L_00650648;
L_006505ff:; BB(0x006505ff);
    /* 006505ff: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650602: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00650604: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650607: mov edx, dword ptr [eax + 0xa8] */ r_edx = R32((u32)(r_eax+0xa8u));
    /* 0065060d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65060fu); call_ind(t); }
    /* 0065060f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00650612: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650614: jne 0x650648 */ if (!fZ) goto L_00650648;
L_00650616:; BB(0x00650616);
    /* 00650616: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00650618: push 0x6dd068 */ { u32 v = 0x6dd068u; r_esp -= 4; W32(r_esp, v); }
    /* 0065061d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x650622u); f_00630f40();
    /* 00650622: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650626: push 0x6dd114 */ { u32 v = 0x6dd114u; r_esp -= 4; W32(r_esp, v); }
    /* 0065062b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x650630u); f_00630f40();
    /* 00650630: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00650633: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00650634: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x650639u); f_0062ff10();
    /* 00650639: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065063c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065063f: jne 0x650648 */ if (!fZ) goto L_00650648;
L_00650641:; BB(0x00650641);
    /* 00650641: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00650643: jmp 0x650718 */ goto L_00650718;
L_00650648:; BB(0x00650648);
    /* 00650648: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065064b: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065064f: je 0x6506ae */ if (fZ) goto L_006506ae;
L_00650651:; BB(0x00650651);
    /* 00650651: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00650653: jne 0x65066c */ if (!fZ) goto L_0065066c;
L_00650655:; BB(0x00650655);
    /* 00650655: push 0x61c */ { u32 v = 0x61cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065065a: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 0065065f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00650664: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x650669u); f_005e9f20();
    /* 00650669: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065066c:; BB(0x0065066c);
    /* 0065066c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065066f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00650672: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00650675: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00650678: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0065067b: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065067f: je 0x6506a7 */ if (fZ) goto L_006506a7;
L_00650681:; BB(0x00650681);
    /* 00650681: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650684: call 0x651950 */ r_esp -= 4; W32(r_esp, 0x650689u); f_00651950();
    /* 00650689: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0065068e: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00650691: je 0x65069f */ if (fZ) goto L_0065069f;
L_00650693:; BB(0x00650693);
    /* 00650693: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00650696: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00650697: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x65069cu); f_00686cae();
    /* 0065069c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065069f:; BB(0x0065069f);
    /* 0065069f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006506a2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006506a5: jmp 0x6506ae */ goto L_006506ae;
L_006506a7:; BB(0x006506a7);
    /* 006506a7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006506ae:; BB(0x006506ae);
    /* 006506ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006506b0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006506b3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006506b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006506b8: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 006506be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6506c0u); call_ind(t); }
    /* 006506c0: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 006506c5: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x6506cau); f_00686d82();
    /* 006506ca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006506cd: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006506d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006506d7: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006506db: je 0x6506ee */ if (fZ) goto L_006506ee;
L_006506dd:; BB(0x006506dd);
    /* 006506dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006506e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006506e1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006506e4: call 0x651340 */ r_esp -= 4; W32(r_esp, 0x6506e9u); f_00651340();
    /* 006506e9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006506ec: jmp 0x6506f5 */ goto L_006506f5;
L_006506ee:; BB(0x006506ee);
    /* 006506ee: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006506f5:; BB(0x006506f5);
    /* 006506f5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006506f8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006506fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00650702: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00650705: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00650708: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0065070b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065070e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00650711: call 0x651af0 */ r_esp -= 4; W32(r_esp, 0x650716u); f_00651af0();
    /* 00650716: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00650718:; BB(0x00650718);
    /* 00650718: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065071b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00650722: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00650723: mov esp, ebp */ r_esp = r_ebp;
    /* 00650725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00650726: ret  */ FN_RET(0x006505c0); r_esp += 4; return;
}

void f_00650730(void) /* BaccaratRoom::vfunc132 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00650730);
    /* 00650730: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00650731: mov ebp, esp */ r_ebp = r_esp;
    /* 00650733: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00650736: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00650739: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065073b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065073e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00650740: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650743: mov eax, dword ptr [edx + 0x204] */ r_eax = R32((u32)(r_edx+0x204u));
    /* 00650749: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65074bu); call_ind(t); }
    /* 0065074b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065074e: cmp dword ptr [ecx + 0x3c], 0 */ {  u32 a = R32((u32)(r_ecx+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650752: je 0x6507a2 */ if (fZ) goto L_006507a2;
L_00650754:; BB(0x00650754);
    /* 00650754: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650757: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0065075a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0065075d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00650760: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00650763: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00650767: je 0x65078f */ if (fZ) goto L_0065078f;
L_00650769:; BB(0x00650769);
    /* 00650769: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065076c: call 0x651950 */ r_esp -= 4; W32(r_esp, 0x650771u); f_00651950();
    /* 00650771: mov edx, 1 */ r_edx = 0x1u;
    /* 00650776: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00650779: je 0x650787 */ if (fZ) goto L_00650787;
L_0065077b:; BB(0x0065077b);
    /* 0065077b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065077e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065077f: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x650784u); f_00686cae();
    /* 00650784: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00650787:; BB(0x00650787);
    /* 00650787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065078a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0065078d: jmp 0x650796 */ goto L_00650796;
L_0065078f:; BB(0x0065078f);
    /* 0065078f: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
L_00650796:; BB(0x00650796);
    /* 00650796: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00650799: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 006507a0: jmp 0x6507bd */ goto L_006507bd;
L_006507a2:; BB(0x006507a2);
    /* 006507a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006507a4: jne 0x6507bd */ if (!fZ) goto L_006507bd;
L_006507a6:; BB(0x006507a6);
    /* 006507a6: push 0x630 */ { u32 v = 0x630u; r_esp -= 4; W32(r_esp, v); }
    /* 006507ab: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 006507b0: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006507b5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6507bau); f_005e9f20();
    /* 006507ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006507bd:; BB(0x006507bd);
    /* 006507bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006507bf: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006507c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006507c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006507c7: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 006507cd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6507cfu); call_ind(t); }
    /* 006507cf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006507d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006507d3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 006507d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006507d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006507db: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 006507e1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6507e3u); call_ind(t); }
    /* 006507e3: mov esp, ebp */ r_esp = r_ebp;
    /* 006507e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006507e6: ret  */ FN_RET(0x00650730); r_esp += 4; return;
}

void f_006507f0(void) /* BaccaratRoom::vfunc133 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006507f0);
    /* 006507f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006507f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006507f3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006507f4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006507f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006507fa: cmp dword ptr [eax + 0x3c], 0 */ {  u32 a = R32((u32)(r_eax+0x3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006507fe: jne 0x65081d */ if (!fZ) goto L_0065081d;
L_00650800:; BB(0x00650800);
    /* 00650800: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00650802: jne 0x65081b */ if (!fZ) goto L_0065081b;
L_00650804:; BB(0x00650804);
    /* 00650804: push 0x639 */ { u32 v = 0x639u; r_esp -= 4; W32(r_esp, v); }
    /* 00650809: push 0x6dd084 */ { u32 v = 0x6dd084u; r_esp -= 4; W32(r_esp, v); }
    /* 0065080e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00650813: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x650818u); f_005e9f20();
    /* 00650818: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0065081b:; BB(0x0065081b);
    /* 0065081b: jmp 0x650828 */ goto L_00650828;
L_0065081d:; BB(0x0065081d);
    /* 0065081d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00650820: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00650823: call 0x651af0 */ r_esp -= 4; W32(r_esp, 0x650828u); f_00651af0();
L_00650828:; BB(0x00650828);
    /* 00650828: mov esp, ebp */ r_esp = r_ebp;
    /* 0065082a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065082b: ret  */ FN_RET(0x006507f0); r_esp += 4; return;
}


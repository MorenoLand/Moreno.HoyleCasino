#include "protos.h"

void f_004fd080(void) /* RoomPokerScript::vfunc5 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004fd080);
    /* 004fd080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fd081: mov ebp, esp */ r_ebp = r_esp;
    /* 004fd083: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd085: push 0x6a28b3 */ { u32 v = 0x6a28b3u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd08a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004fd090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd091: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fd094: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 004fd099: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fd09b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd09c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004fd09f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004fd0a5: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004fd0a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004fd0ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd0ac: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd0af: call 0x5fc3a0 */ r_esp -= 4; W32(r_esp, 0x4fd0b4u); f_005fc3a0();
    /* 004fd0b4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd0b7: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 004fd0ba: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004fd0bd: cmp dword ptr [ebp - 0x44], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004fd0c1: ja 0x4fd596 */ if ((!fC&&!fZ)) goto L_004fd596;
L_004fd0c7:; BB(0x004fd0c7);
    /* 004fd0c7: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 004fd0ca: jmp dword ptr [eax*4 + 0x4fd5a8] */ { u32 t = R32((u32)(r_eax*4+0x4fd5a8u)); switch (t) { case 0x4fd0d1u: goto L_004fd0d1; case 0x4fd0f4u: goto L_004fd0f4; case 0x4fd15du: goto L_004fd15d; case 0x4fd1b5u: goto L_004fd1b5; case 0x4fd1efu: goto L_004fd1ef; case 0x4fd375u: goto L_004fd375; case 0x4fd50cu: goto L_004fd50c; case 0x4fd551u: goto L_004fd551; case 0x4fd581u: goto L_004fd581; default: UNSUP(0x004fd0ca, "jump table entry is not a known target"); } }
L_004fd0d1:; BB(0x004fd0d1);
    /* 004fd0d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd0d3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd0d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd0d8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd0db: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd0de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd0e0u); call_ind(t); }
    /* 004fd0e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd0e2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd0e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd0e7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd0ea: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd0ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd0efu); call_ind(t); }
    /* 004fd0ef: jmp 0x4fd596 */ goto L_004fd596;
L_004fd0f4:; BB(0x004fd0f4);
    /* 004fd0f4: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd0f7: call 0x4fce80 */ r_esp -= 4; W32(r_esp, 0x4fd0fcu); f_004fce80();
    /* 004fd0fc: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd102: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x4fd107u); f_005da830();
    /* 004fd107: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fd10a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd10c: je 0x4fd13a */ if (fZ) goto L_004fd13a;
L_004fd10e:; BB(0x004fd10e);
    /* 004fd10e: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fd114: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fd116: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd11c: mov edx, dword ptr [eax + 0x2d0] */ r_edx = R32((u32)(r_eax+0x2d0u));
    /* 004fd122: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fd124u); call_ind(t); }
    /* 004fd124: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004fd127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd129: je 0x4fd13a */ if (fZ) goto L_004fd13a;
L_004fd12b:; BB(0x004fd12b);
    /* 004fd12b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd12d: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd133: call 0x4fcb30 */ r_esp -= 4; W32(r_esp, 0x4fd138u); f_004fcb30();
    /* 004fd138: jmp 0x4fd158 */ goto L_004fd158;
L_004fd13a:; BB(0x004fd13a);
    /* 004fd13a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd13c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd13f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd141: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd144: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd147: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd149u); call_ind(t); }
    /* 004fd149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd14b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd14e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd150: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd153: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd156: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd158u); call_ind(t); }
L_004fd158:; BB(0x004fd158);
    /* 004fd158: jmp 0x4fd596 */ goto L_004fd596;
L_004fd15d:; BB(0x004fd15d);
    /* 004fd15d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd15f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd162: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd164: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd167: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd16a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd16cu); call_ind(t); }
    /* 004fd16c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd172: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fd177u); f_005da7b0();
    /* 004fd177: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fd17a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd17c: je 0x4fd191 */ if (fZ) goto L_004fd191;
L_004fd17e:; BB(0x004fd17e);
    /* 004fd17e: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fd184: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 004fd18a: call 0x481150 */ r_esp -= 4; W32(r_esp, 0x4fd18fu); f_00481150();
    /* 004fd18f: jmp 0x4fd1b0 */ goto L_004fd1b0;
L_004fd191:; BB(0x004fd191);
    /* 004fd191: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fd196: mov ecx, dword ptr [eax + 0xa4] */ r_ecx = R32((u32)(r_eax+0xa4u));
    /* 004fd19c: call 0x47ac50 */ r_esp -= 4; W32(r_esp, 0x4fd1a1u); f_0047ac50();
    /* 004fd1a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd1a3: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd1a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd1a8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd1ab: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd1ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd1b0u); call_ind(t); }
L_004fd1b0:; BB(0x004fd1b0);
    /* 004fd1b0: jmp 0x4fd596 */ goto L_004fd596;
L_004fd1b5:; BB(0x004fd1b5);
    /* 004fd1b5: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd1bb: call 0x4fcdd0 */ r_esp -= 4; W32(r_esp, 0x4fd1c0u); f_004fcdd0();
    /* 004fd1c0: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fd1c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd1c5: jne 0x4fd1db */ if (!fZ) goto L_004fd1db;
L_004fd1c7:; BB(0x004fd1c7);
    /* 004fd1c7: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fd1cd: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004fd1d3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 004fd1d6: call 0x466e90 */ r_esp -= 4; W32(r_esp, 0x4fd1dbu); f_00466e90();
L_004fd1db:; BB(0x004fd1db);
    /* 004fd1db: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd1dd: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd1e0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd1e2: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd1e5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd1e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd1eau); call_ind(t); }
    /* 004fd1ea: jmp 0x4fd596 */ goto L_004fd596;
L_004fd1ef:; BB(0x004fd1ef);
    /* 004fd1ef: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd1f5: mov ecx, dword ptr [ecx + 0xa4] */ r_ecx = R32((u32)(r_ecx+0xa4u));
    /* 004fd1fb: call 0x47e1d0 */ r_esp -= 4; W32(r_esp, 0x4fd200u); f_0047e1d0();
    /* 004fd200: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004fd203: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd207: je 0x4fd2da */ if (fZ) goto L_004fd2da;
L_004fd20d:; BB(0x004fd20d);
    /* 004fd20d: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd211: je 0x4fd21e */ if (fZ) goto L_004fd21e;
L_004fd213:; BB(0x004fd213);
    /* 004fd213: cmp dword ptr [ebp - 0x48], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd217: je 0x4fd27d */ if (fZ) goto L_004fd27d;
L_004fd219:; BB(0x004fd219);
    /* 004fd219: jmp 0x4fd337 */ goto L_004fd337;
L_004fd21e:; BB(0x004fd21e);
    /* 004fd21e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd220: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fd225u); f_00686d82();
    /* 004fd225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd228: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004fd22b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004fd232: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd236: je 0x4fd253 */ if (fZ) goto L_004fd253;
L_004fd238:; BB(0x004fd238);
    /* 004fd238: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd23a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd23d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4fd242u); f_005fc0d0();
    /* 004fd242: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd245: mov dword ptr [edx], 0x6c08b8 */ W32((u32)(r_edx), 0x6c08b8u);
    /* 004fd24b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004fd24e: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 004fd251: jmp 0x4fd25a */ goto L_004fd25a;
L_004fd253:; BB(0x004fd253);
    /* 004fd253: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_004fd25a:; BB(0x004fd25a);
    /* 004fd25a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004fd25d: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 004fd260: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd267: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004fd26a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd26b: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fd270: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fd273: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd278u); f_005fc420();
    /* 004fd278: jmp 0x4fd352 */ goto L_004fd352;
L_004fd27d:; BB(0x004fd27d);
    /* 004fd27d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd27f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fd284u); f_00686d82();
    /* 004fd284: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd287: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004fd28a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004fd291: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd295: je 0x4fd2b2 */ if (fZ) goto L_004fd2b2;
L_004fd297:; BB(0x004fd297);
    /* 004fd297: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd299: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd29c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4fd2a1u); f_005fc0d0();
    /* 004fd2a1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd2a4: mov dword ptr [ecx], 0x6c0894 */ W32((u32)(r_ecx), 0x6c0894u);
    /* 004fd2aa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004fd2ad: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 004fd2b0: jmp 0x4fd2b9 */ goto L_004fd2b9;
L_004fd2b2:; BB(0x004fd2b2);
    /* 004fd2b2: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_004fd2b9:; BB(0x004fd2b9);
    /* 004fd2b9: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004fd2bc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004fd2bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd2c6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004fd2c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2ca: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fd2d0: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004fd2d3: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd2d8u); f_005fc420();
    /* 004fd2d8: jmp 0x4fd352 */ goto L_004fd352;
L_004fd2da:; BB(0x004fd2da);
    /* 004fd2da: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2dc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fd2e1u); f_00686d82();
    /* 004fd2e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd2e4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004fd2e7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004fd2ee: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd2f2: je 0x4fd30f */ if (fZ) goto L_004fd30f;
L_004fd2f4:; BB(0x004fd2f4);
    /* 004fd2f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd2f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd2f9: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4fd2feu); f_005fc0d0();
    /* 004fd2fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd301: mov dword ptr [eax], 0x6c0870 */ W32((u32)(r_eax), 0x6c0870u);
    /* 004fd307: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004fd30a: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 004fd30d: jmp 0x4fd316 */ goto L_004fd316;
L_004fd30f:; BB(0x004fd30f);
    /* 004fd30f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_004fd316:; BB(0x004fd316);
    /* 004fd316: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004fd319: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004fd31c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd323: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004fd326: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd327: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd32d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004fd330: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd335u); f_005fc420();
    /* 004fd335: jmp 0x4fd352 */ goto L_004fd352;
L_004fd337:; BB(0x004fd337);
    /* 004fd337: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004fd339: jne 0x4fd352 */ if (!fZ) goto L_004fd352;
L_004fd33b:; BB(0x004fd33b);
    /* 004fd33b: push 0x541 */ { u32 v = 0x541u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd340: push 0x6c07c8 */ { u32 v = 0x6c07c8u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd345: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd34a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4fd34fu); f_005e9f20();
    /* 004fd34f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004fd352:; BB(0x004fd352);
    /* 004fd352: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd354: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd357: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd359: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd35c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd35f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd361u); call_ind(t); }
    /* 004fd361: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd363: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd366: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd368: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd36b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd36e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd370u); call_ind(t); }
    /* 004fd370: jmp 0x4fd596 */ goto L_004fd596;
L_004fd375:; BB(0x004fd375);
    /* 004fd375: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd377: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd37a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd37c: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd37f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd382: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd384u); call_ind(t); }
    /* 004fd384: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd38a: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fd38fu); f_005da7b0();
    /* 004fd38f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fd392: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd394: je 0x4fd4f8 */ if (fZ) goto L_004fd4f8;
L_004fd39a:; BB(0x004fd39a);
    /* 004fd39a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004fd3a0: call 0x480cc0 */ r_esp -= 4; W32(r_esp, 0x4fd3a5u); f_00480cc0();
    /* 004fd3a5: mov dword ptr [0x791ec0], eax */ W32((u32)(0x791ec0u), r_eax);
    /* 004fd3aa: mov edx, dword ptr [0x791ec0] */ r_edx = R32((u32)(0x791ec0u));
    /* 004fd3b0: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 004fd3b3: cmp dword ptr [ebp - 0x58], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd3b7: je 0x4fd3ce */ if (fZ) goto L_004fd3ce;
L_004fd3b9:; BB(0x004fd3b9);
    /* 004fd3b9: cmp dword ptr [ebp - 0x58], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd3bd: je 0x4fd42e */ if (fZ) goto L_004fd42e;
L_004fd3bf:; BB(0x004fd3bf);
    /* 004fd3bf: cmp dword ptr [ebp - 0x58], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd3c3: je 0x4fd48a */ if (fZ) goto L_004fd48a;
L_004fd3c9:; BB(0x004fd3c9);
    /* 004fd3c9: jmp 0x4fd4e7 */ goto L_004fd4e7;
L_004fd3ce:; BB(0x004fd3ce);
    /* 004fd3ce: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3d0: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fd3d5u); f_00686d82();
    /* 004fd3d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd3d8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004fd3db: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 004fd3e2: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd3e6: je 0x4fd403 */ if (fZ) goto L_004fd403;
L_004fd3e8:; BB(0x004fd3e8);
    /* 004fd3e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd3ea: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd3ed: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4fd3f2u); f_005fc0d0();
    /* 004fd3f2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd3f5: mov dword ptr [eax], 0x6c084c */ W32((u32)(r_eax), 0x6c084cu);
    /* 004fd3fb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004fd3fe: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 004fd401: jmp 0x4fd40a */ goto L_004fd40a;
L_004fd403:; BB(0x004fd403);
    /* 004fd403: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004fd40a:; BB(0x004fd40a);
    /* 004fd40a: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 004fd40d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004fd410: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd417: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004fd41a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fd41b: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd421: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004fd424: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd429u); f_005fc420();
    /* 004fd429: jmp 0x4fd4f6 */ goto L_004fd4f6;
L_004fd42e:; BB(0x004fd42e);
    /* 004fd42e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd430: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fd435u); f_00686d82();
    /* 004fd435: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd438: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004fd43b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 004fd442: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd446: je 0x4fd463 */ if (fZ) goto L_004fd463;
L_004fd448:; BB(0x004fd448);
    /* 004fd448: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd44a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004fd44d: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4fd452u); f_005fc0d0();
    /* 004fd452: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004fd455: mov dword ptr [edx], 0x6c0828 */ W32((u32)(r_edx), 0x6c0828u);
    /* 004fd45b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004fd45e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004fd461: jmp 0x4fd46a */ goto L_004fd46a;
L_004fd463:; BB(0x004fd463);
    /* 004fd463: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_004fd46a:; BB(0x004fd46a);
    /* 004fd46a: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004fd46d: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004fd470: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd477: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004fd47a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd47b: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 004fd480: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fd483: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd488u); f_005fc420();
    /* 004fd488: jmp 0x4fd4f6 */ goto L_004fd4f6;
L_004fd48a:; BB(0x004fd48a);
    /* 004fd48a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd48c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x4fd491u); f_00686d82();
    /* 004fd491: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fd494: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004fd497: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 004fd49e: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd4a2: je 0x4fd4bf */ if (fZ) goto L_004fd4bf;
L_004fd4a4:; BB(0x004fd4a4);
    /* 004fd4a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd4a6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fd4a9: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x4fd4aeu); f_005fc0d0();
    /* 004fd4ae: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fd4b1: mov dword ptr [ecx], 0x6c0804 */ W32((u32)(r_ecx), 0x6c0804u);
    /* 004fd4b7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004fd4ba: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004fd4bd: jmp 0x4fd4c6 */ goto L_004fd4c6;
L_004fd4bf:; BB(0x004fd4bf);
    /* 004fd4bf: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004fd4c6:; BB(0x004fd4c6);
    /* 004fd4c6: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004fd4c9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004fd4cc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004fd4d3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004fd4d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004fd4d7: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fd4dd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004fd4e0: call 0x5fc420 */ r_esp -= 4; W32(r_esp, 0x4fd4e5u); f_005fc420();
    /* 004fd4e5: jmp 0x4fd4f6 */ goto L_004fd4f6;
L_004fd4e7:; BB(0x004fd4e7);
    /* 004fd4e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd4e9: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd4ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fd4ee: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd4f1: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd4f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd4f6u); call_ind(t); }
L_004fd4f6:; BB(0x004fd4f6);
    /* 004fd4f6: jmp 0x4fd507 */ goto L_004fd507;
L_004fd4f8:; BB(0x004fd4f8);
    /* 004fd4f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd4fa: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd4fd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd4ff: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd502: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd505: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd507u); call_ind(t); }
L_004fd507:; BB(0x004fd507);
    /* 004fd507: jmp 0x4fd596 */ goto L_004fd596;
L_004fd50c:; BB(0x004fd50c);
    /* 004fd50c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd50e: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd511: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd513: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd516: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004fd519: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd51bu); call_ind(t); }
    /* 004fd51b: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd521: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fd526u); f_005da7b0();
    /* 004fd526: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fd529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd52b: je 0x4fd540 */ if (fZ) goto L_004fd540;
L_004fd52d:; BB(0x004fd52d);
    /* 004fd52d: mov edx, dword ptr [0x791eb8] */ r_edx = R32((u32)(0x791eb8u));
    /* 004fd533: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 004fd539: call 0x483790 */ r_esp -= 4; W32(r_esp, 0x4fd53eu); f_00483790();
    /* 004fd53e: jmp 0x4fd54f */ goto L_004fd54f;
L_004fd540:; BB(0x004fd540);
    /* 004fd540: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd542: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd545: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fd547: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd54a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004fd54d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd54fu); call_ind(t); }
L_004fd54f:; BB(0x004fd54f);
    /* 004fd54f: jmp 0x4fd596 */ goto L_004fd596;
L_004fd551:; BB(0x004fd551);
    /* 004fd551: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd553: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004fd555: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd558: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004fd55a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004fd55d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004fd560: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4fd562u); call_ind(t); }
    /* 004fd562: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd568: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x4fd56du); f_005da7b0();
    /* 004fd56d: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004fd570: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fd572: je 0x4fd57f */ if (fZ) goto L_004fd57f;
L_004fd574:; BB(0x004fd574);
    /* 004fd574: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 004fd57a: call 0x4fc6a0 */ r_esp -= 4; W32(r_esp, 0x4fd57fu); f_004fc6a0();
L_004fd57f:; BB(0x004fd57f);
    /* 004fd57f: jmp 0x4fd596 */ goto L_004fd596;
L_004fd581:; BB(0x004fd581);
    /* 004fd581: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004fd583: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 004fd589: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004fd58b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 004fd591: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004fd594: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4fd596u); call_ind(t); }
L_004fd596:; BB(0x004fd596);
    /* 004fd596: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004fd599: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004fd5a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fd5a1: mov esp, ebp */ r_esp = r_ebp;
    /* 004fd5a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fd5a4: ret 4 */ FN_RET(0x004fd080); r_esp += 8; return;
}


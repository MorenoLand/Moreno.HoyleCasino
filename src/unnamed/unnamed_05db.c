#include "protos.h"

void f_005db190(void) /* sub_5DB190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db190);
    /* 005db190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db191: mov ebp, esp */ r_ebp = r_esp;
    /* 005db193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db194: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db197: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db19a: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5db19fu); f_005da7b0();
    /* 005db19f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005db1a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db1a4: jne 0x5db1ad */ if (!fZ) goto L_005db1ad;
L_005db1a6:; BB(0x005db1a6);
    /* 005db1a6: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005db1a8: jmp 0x5db22e */ goto L_005db22e;
L_005db1ad:; BB(0x005db1ad);
    /* 005db1ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1b0: call 0x5daec0 */ r_esp -= 4; W32(r_esp, 0x5db1b5u); f_005daec0();
    /* 005db1b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db1b7: jne 0x5db1bd */ if (!fZ) goto L_005db1bd;
L_005db1b9:; BB(0x005db1b9);
    /* 005db1b9: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005db1bb: jmp 0x5db22e */ goto L_005db22e;
L_005db1bd:; BB(0x005db1bd);
    /* 005db1bd: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005db1c3: mov edx, dword ptr [ecx + 0x4ef8] */ r_edx = R32((u32)(r_ecx+0x4ef8u));
    /* 005db1c9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005db1cc: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 005db1d1: mov dword ptr [eax + 0x4ef8], edx */ W32((u32)(r_eax+0x4ef8u), r_edx);
    /* 005db1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005db1dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db1df: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 005db1e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5db1e7u); call_ind(t); }
    /* 005db1e7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005db1ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db1ec: je 0x5db20d */ if (fZ) goto L_005db20d;
L_005db1ee:; BB(0x005db1ee);
    /* 005db1ee: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005db1f4: mov eax, dword ptr [edx + 0x4ef8] */ r_eax = R32((u32)(r_edx+0x4ef8u));
    /* 005db1fa: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005db1fd: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005db203: mov dword ptr [ecx + 0x4ef8], eax */ W32((u32)(r_ecx+0x4ef8u), r_eax);
    /* 005db209: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 005db20b: jmp 0x5db22e */ goto L_005db22e;
L_005db20d:; BB(0x005db20d);
    /* 005db20d: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 005db213: mov eax, dword ptr [edx + 0x4ef8] */ r_eax = R32((u32)(r_edx+0x4ef8u));
    /* 005db219: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005db21c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 005db222: mov dword ptr [ecx + 0x4ef8], eax */ W32((u32)(r_ecx+0x4ef8u), r_eax);
    /* 005db228: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005db22a: jmp 0x5db22e */ goto L_005db22e;
L_005db22e:; BB(0x005db22e);
    /* 005db22e: mov esp, ebp */ r_esp = r_ebp;
    /* 005db230: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db231: ret  */ FN_RET(0x005db190); r_esp += 4; return;
}

void f_005db240(void) /* sub_5DB240 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db240);
    /* 005db240: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db241: mov ebp, esp */ r_ebp = r_esp;
    /* 005db243: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db244: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db247: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db24a: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5db24fu); f_005da7b0();
    /* 005db24f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005db252: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db254: jne 0x5db288 */ if (!fZ) goto L_005db288;
L_005db256:; BB(0x005db256);
    /* 005db256: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db258: push 0x1391 */ { u32 v = 0x1391u; r_esp -= 4; W32(r_esp, v); }
    /* 005db25d: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 005db263: call 0x5f2a60 */ r_esp -= 4; W32(r_esp, 0x5db268u); f_005f2a60();
    /* 005db268: mov ecx, eax */ r_ecx = r_eax;
    /* 005db26a: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x5db26fu); f_006026d0();
    /* 005db26f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005db272: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db274: je 0x5db288 */ if (fZ) goto L_005db288;
L_005db276:; BB(0x005db276);
    /* 005db276: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db278: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db27b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db27d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005db280: mov edx, dword ptr [eax + 0x2e4] */ r_edx = R32((u32)(r_eax+0x2e4u));
    /* 005db286: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db288u); call_ind(t); }
L_005db288:; BB(0x005db288);
    /* 005db288: mov esp, ebp */ r_esp = r_ebp;
    /* 005db28a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db28b: ret  */ FN_RET(0x005db240); r_esp += 4; return;
}

void f_005db7d0(void) /* sub_5DB7D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db7d0);
    /* 005db7d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db7d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005db7d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db7d5: push 0x6a92c3 */ { u32 v = 0x6a92c3u; r_esp -= 4; W32(r_esp, v); }
    /* 005db7da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db7e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db7e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005db7e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db7ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005db7ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005db7f5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005db7f8: cmp dword ptr [0x7947ac], 0 */ {  u32 a = R32((u32)(0x7947acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db7ff: jne 0x5db870 */ if (!fZ) goto L_005db870;
L_005db801:; BB(0x005db801);
    /* 005db801: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005db806: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5db80bu); f_00686d82();
    /* 005db80b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db80e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005db811: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db818: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db81c: je 0x5db82b */ if (fZ) goto L_005db82b;
L_005db81e:; BB(0x005db81e);
    /* 005db81e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db821: call 0x5cdad0 */ r_esp -= 4; W32(r_esp, 0x5db826u); f_005cdad0();
    /* 005db826: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005db829: jmp 0x5db832 */ goto L_005db832;
L_005db82b:; BB(0x005db82b);
    /* 005db82b: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005db832:; BB(0x005db832);
    /* 005db832: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005db835: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005db838: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005db83f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db842: mov dword ptr [0x7947ac], ecx */ W32((u32)(0x7947acu), r_ecx);
    /* 005db848: mov edx, dword ptr [0x7947ac] */ r_edx = R32((u32)(0x7947acu));
    /* 005db84e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db850: mov ecx, dword ptr [0x7947ac] */ r_ecx = R32((u32)(0x7947acu));
    /* 005db856: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005db859: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db85bu); call_ind(t); }
    /* 005db85b: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 005db85f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db860: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005db864: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db865: mov ecx, dword ptr [0x7947ac] */ r_ecx = R32((u32)(0x7947acu));
    /* 005db86b: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5db870u); f_005f7340();
L_005db870:; BB(0x005db870);
    /* 005db870: mov ecx, dword ptr [0x7947ac] */ r_ecx = R32((u32)(0x7947acu));
    /* 005db876: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5db87bu); f_005f85d0();
    /* 005db87b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db87e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005db885: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db886: mov esp, ebp */ r_esp = r_ebp;
    /* 005db888: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db889: ret 8 */ FN_RET(0x005db7d0); r_esp += 12; return;
}

void f_005db890(void) /* sub_5DB890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db890);
    /* 005db890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db891: mov ebp, esp */ r_ebp = r_esp;
    /* 005db893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db894: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db897: cmp dword ptr [0x7947ac], 0 */ {  u32 a = R32((u32)(0x7947acu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db89e: je 0x5db8b5 */ if (fZ) goto L_005db8b5;
L_005db8a0:; BB(0x005db8a0);
    /* 005db8a0: mov ecx, dword ptr [0x7947ac] */ r_ecx = R32((u32)(0x7947acu));
    /* 005db8a6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5db8abu); f_005f8990();
    /* 005db8ab: mov dword ptr [0x7947ac], 0 */ W32((u32)(0x7947acu), 0x0u);
L_005db8b5:; BB(0x005db8b5);
    /* 005db8b5: mov esp, ebp */ r_esp = r_ebp;
    /* 005db8b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db8b8: ret  */ FN_RET(0x005db890); r_esp += 4; return;
}

void f_005db8c0(void) /* sub_5DB8C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db8c0);
    /* 005db8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005db8c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db8c5: push 0x6a92e9 */ { u32 v = 0x6a92e9u; r_esp -= 4; W32(r_esp, v); }
    /* 005db8ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db8d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db8d1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db8d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005db8d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db8db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db8dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005db8df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005db8e5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005db8e8: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db8ef: jne 0x5db960 */ if (!fZ) goto L_005db960;
L_005db8f1:; BB(0x005db8f1);
    /* 005db8f1: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005db8f6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5db8fbu); f_00686d82();
    /* 005db8fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005db8fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005db901: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005db908: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db90c: je 0x5db91b */ if (fZ) goto L_005db91b;
L_005db90e:; BB(0x005db90e);
    /* 005db90e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005db911: call 0x5cdbd0 */ r_esp -= 4; W32(r_esp, 0x5db916u); f_005cdbd0();
    /* 005db916: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005db919: jmp 0x5db922 */ goto L_005db922;
L_005db91b:; BB(0x005db91b);
    /* 005db91b: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005db922:; BB(0x005db922);
    /* 005db922: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005db925: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005db928: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005db92f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005db932: mov dword ptr [0x7947b0], ecx */ W32((u32)(0x7947b0u), r_ecx);
    /* 005db938: mov edx, dword ptr [0x7947b0] */ r_edx = R32((u32)(0x7947b0u));
    /* 005db93e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db940: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 005db946: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005db949: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db94bu); call_ind(t); }
    /* 005db94b: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 005db94f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db950: mov cx, word ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0x8u))) & 0xffffu);
    /* 005db954: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db955: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 005db95b: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5db960u); f_005f7340();
L_005db960:; BB(0x005db960);
    /* 005db960: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 005db966: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5db96bu); f_005f85d0();
    /* 005db96b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005db971: mov al, byte ptr [edx + 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x25u))) & 0xffu);
    /* 005db974: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 005db977: movzx ecx, byte ptr [ebp - 0x15] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffebu));
    /* 005db97b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db97d: je 0x5db994 */ if (fZ) goto L_005db994;
L_005db97f:; BB(0x005db97f);
    /* 005db97f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005db981: mov edx, dword ptr [0x7947b0] */ r_edx = R32((u32)(0x7947b0u));
    /* 005db987: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005db989: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 005db98f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005db992: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5db994u); call_ind(t); }
L_005db994:; BB(0x005db994);
    /* 005db994: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005db997: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005db99e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005db99f: mov esp, ebp */ r_esp = r_ebp;
    /* 005db9a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db9a2: ret 8 */ FN_RET(0x005db8c0); r_esp += 12; return;
}

void f_005db9b0(void) /* sub_5DB9B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db9b0);
    /* 005db9b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db9b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005db9b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005db9b4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005db9b7: cmp dword ptr [0x7947b0], 0 */ {  u32 a = R32((u32)(0x7947b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005db9be: je 0x5db9d5 */ if (fZ) goto L_005db9d5;
L_005db9c0:; BB(0x005db9c0);
    /* 005db9c0: mov ecx, dword ptr [0x7947b0] */ r_ecx = R32((u32)(0x7947b0u));
    /* 005db9c6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5db9cbu); f_005f8990();
    /* 005db9cb: mov dword ptr [0x7947b0], 0 */ W32((u32)(0x7947b0u), 0x0u);
L_005db9d5:; BB(0x005db9d5);
    /* 005db9d5: mov esp, ebp */ r_esp = r_ebp;
    /* 005db9d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005db9d8: ret  */ FN_RET(0x005db9b0); r_esp += 4; return;
}

void f_005db9e0(void) /* sub_5DB9E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005db9e0);
    /* 005db9e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005db9e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005db9e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005db9e5: push 0x6a930f */ { u32 v = 0x6a930fu; r_esp -= 4; W32(r_esp, v); }
    /* 005db9ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005db9f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db9f1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005db9f4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005db9f9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005db9fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005db9fc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005db9ff: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dba05: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005dba08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dba0a: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005dba0f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dba11: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dba17: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005dba1d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dba1fu); call_ind(t); }
    /* 005dba1f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005dba22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dba24: je 0x5dba38 */ if (fZ) goto L_005dba38;
L_005dba26:; BB(0x005dba26);
    /* 005dba26: cmp dword ptr [0x163068c], 0 */ {  u32 a = R32((u32)(0x163068cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dba2d: jne 0x5dba38 */ if (!fZ) goto L_005dba38;
L_005dba2f:; BB(0x005dba2f);
    /* 005dba2f: cmp dword ptr [0x16306b0], 0 */ {  u32 a = R32((u32)(0x16306b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dba36: je 0x5dba3d */ if (fZ) goto L_005dba3d;
L_005dba38:; BB(0x005dba38);
    /* 005dba38: jmp 0x5dbb26 */ goto L_005dbb26;
L_005dba3d:; BB(0x005dba3d);
    /* 005dba3d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dba40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dba41: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005dba44: call 0x5d89b0 */ r_esp -= 4; W32(r_esp, 0x5dba49u); f_005d89b0();
    /* 005dba49: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005dba4c: cmp dword ptr [0x7947b4], 0 */ {  u32 a = R32((u32)(0x7947b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dba53: jne 0x5dba9c */ if (!fZ) goto L_005dba9c;
L_005dba55:; BB(0x005dba55);
    /* 005dba55: push 0x1bc */ { u32 v = 0x1bcu; r_esp -= 4; W32(r_esp, v); }
    /* 005dba5a: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dba5fu); f_00686d82();
    /* 005dba5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dba62: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dba65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dba6c: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dba70: je 0x5dba7f */ if (fZ) goto L_005dba7f;
L_005dba72:; BB(0x005dba72);
    /* 005dba72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dba75: call 0x5cdd90 */ r_esp -= 4; W32(r_esp, 0x5dba7au); f_005cdd90();
    /* 005dba7a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005dba7d: jmp 0x5dba86 */ goto L_005dba86;
L_005dba7f:; BB(0x005dba7f);
    /* 005dba7f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005dba86:; BB(0x005dba86);
    /* 005dba86: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005dba89: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dba8c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dba93: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dba96: mov dword ptr [0x7947b4], ecx */ W32((u32)(0x7947b4u), r_ecx);
L_005dba9c:; BB(0x005dba9c);
    /* 005dba9c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dba9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbaa0: mov ecx, dword ptr [0x7947b4] */ r_ecx = R32((u32)(0x7947b4u));
    /* 005dbaa6: call 0x5cde20 */ r_esp -= 4; W32(r_esp, 0x5dbaabu); f_005cde20();
    /* 005dbaab: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dbaae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005dbab1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbab2: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 005dbab5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbab6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005dbab9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dbabb: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005dbabe: mov eax, dword ptr [edx + 0x2ec] */ r_eax = R32((u32)(r_edx+0x2ecu));
    /* 005dbac4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dbac6u); call_ind(t); }
    /* 005dbac6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dbac8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005dbacb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dbace: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005dbad1: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbad5: jne 0x5dbb08 */ if (!fZ) goto L_005dbb08;
L_005dbad7:; BB(0x005dbad7);
    /* 005dbad7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbadb: jne 0x5dbb08 */ if (!fZ) goto L_005dbb08;
L_005dbadd:; BB(0x005dbadd);
    /* 005dbadd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dbae0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005dbae3: call 0x646e70 */ r_esp -= 4; W32(r_esp, 0x5dbae8u); f_00646e70();
    /* 005dbae8: sub eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbaeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbaec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dbaef: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 005dbaf2: call 0x646e40 */ r_esp -= 4; W32(r_esp, 0x5dbaf7u); f_00646e40();
    /* 005dbaf7: sub eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dbafa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbafb: mov ecx, dword ptr [0x7947b4] */ r_ecx = R32((u32)(0x7947b4u));
    /* 005dbb01: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x5dbb06u); f_005f7320();
    /* 005dbb06: jmp 0x5dbb1b */ goto L_005dbb1b;
L_005dbb08:; BB(0x005dbb08);
    /* 005dbb08: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dbb0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb0c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dbb0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb10: mov ecx, dword ptr [0x7947b4] */ r_ecx = R32((u32)(0x7947b4u));
    /* 005dbb16: call 0x5f7320 */ r_esp -= 4; W32(r_esp, 0x5dbb1bu); f_005f7320();
L_005dbb1b:; BB(0x005dbb1b);
    /* 005dbb1b: mov ecx, dword ptr [0x7947b4] */ r_ecx = R32((u32)(0x7947b4u));
    /* 005dbb21: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5dbb26u); f_005f85d0();
L_005dbb26:; BB(0x005dbb26);
    /* 005dbb26: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dbb29: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dbb30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dbb31: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbb33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbb34: ret 4 */ FN_RET(0x005db9e0); r_esp += 8; return;
}

void f_005dbb40(void) /* sub_5DBB40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbb40);
    /* 005dbb40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb41: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbb43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dbb47: cmp dword ptr [0x7947b4], 0 */ {  u32 a = R32((u32)(0x7947b4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbb4e: je 0x5dbb65 */ if (fZ) goto L_005dbb65;
L_005dbb50:; BB(0x005dbb50);
    /* 005dbb50: mov ecx, dword ptr [0x7947b4] */ r_ecx = R32((u32)(0x7947b4u));
    /* 005dbb56: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dbb5bu); f_005f8990();
    /* 005dbb5b: mov dword ptr [0x7947b4], 0 */ W32((u32)(0x7947b4u), 0x0u);
L_005dbb65:; BB(0x005dbb65);
    /* 005dbb65: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbb67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbb68: ret  */ FN_RET(0x005dbb40); r_esp += 4; return;
}

void f_005dbb70(void) /* sub_5DBB70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbb70);
    /* 005dbb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb71: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbb73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb75: push 0x6a9335 */ { u32 v = 0x6a9335u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dbb80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb81: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dbb84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb85: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dbb8a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dbb8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbb8d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dbb90: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dbb96: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dbb99: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dbb9c: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x5dbba1u); f_005da7b0();
    /* 005dbba1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005dbba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbba6: je 0x5dbbad */ if (fZ) goto L_005dbbad;
L_005dbba8:; BB(0x005dbba8);
    /* 005dbba8: jmp 0x5dbcb7 */ goto L_005dbcb7;
L_005dbbad:; BB(0x005dbbad);
    /* 005dbbad: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 005dbbb4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbbb6: je 0x5dbc3e */ if (fZ) goto L_005dbc3e;
L_005dbbbc:; BB(0x005dbbbc);
    /* 005dbbbc: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dbbc2: call 0x5f3bb0 */ r_esp -= 4; W32(r_esp, 0x5dbbc7u); f_005f3bb0();
    /* 005dbbc7: mov esi, eax */ r_esi = r_eax;
    /* 005dbbc9: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005dbbcf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dbbd1: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dbbd7: mov edx, dword ptr [eax + 0x258] */ r_edx = R32((u32)(r_eax+0x258u));
    /* 005dbbdd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dbbdfu); call_ind(t); }
    /* 005dbbdf: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbbe1: jne 0x5dbbe8 */ if (!fZ) goto L_005dbbe8;
L_005dbbe3:; BB(0x005dbbe3);
    /* 005dbbe3: jmp 0x5dbcb7 */ goto L_005dbcb7;
L_005dbbe8:; BB(0x005dbbe8);
    /* 005dbbe8: push 0x30d507 */ { u32 v = 0x30d507u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbef: push 0x6d4510 */ { u32 v = 0x6d4510u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbf4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dbbf9u); f_00630f40();
    /* 005dbbf9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbbfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbbfd: push 0x6d44f8 */ { u32 v = 0x6d44f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc02: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dbc07u); f_00630f40();
    /* 005dbc07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbc0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc0b: call 0x62ff30 */ r_esp -= 4; W32(r_esp, 0x5dbc10u); f_0062ff30();
    /* 005dbc10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbc13: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005dbc18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dbc1a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dbc20: mov eax, dword ptr [edx + 0x258] */ r_eax = R32((u32)(r_edx+0x258u));
    /* 005dbc26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dbc28u); call_ind(t); }
    /* 005dbc28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc29: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dbc2f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dbc31: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dbc37: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005dbc3a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dbc3cu); call_ind(t); }
    /* 005dbc3c: jmp 0x5dbcb7 */ goto L_005dbcb7;
L_005dbc3e:; BB(0x005dbc3e);
    /* 005dbc3e: cmp dword ptr [0x7947b8], 0 */ {  u32 a = R32((u32)(0x7947b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc45: jne 0x5dbcac */ if (!fZ) goto L_005dbcac;
L_005dbc47:; BB(0x005dbc47);
    /* 005dbc47: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc4c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dbc51u); f_00686d82();
    /* 005dbc51: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbc54: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dbc57: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dbc5e: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbc62: je 0x5dbc71 */ if (fZ) goto L_005dbc71;
L_005dbc64:; BB(0x005dbc64);
    /* 005dbc64: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dbc67: call 0x5ce250 */ r_esp -= 4; W32(r_esp, 0x5dbc6cu); f_005ce250();
    /* 005dbc6c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dbc6f: jmp 0x5dbc78 */ goto L_005dbc78;
L_005dbc71:; BB(0x005dbc71);
    /* 005dbc71: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005dbc78:; BB(0x005dbc78);
    /* 005dbc78: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dbc7b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005dbc7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dbc85: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005dbc88: mov dword ptr [0x7947b8], edx */ W32((u32)(0x7947b8u), r_edx);
    /* 005dbc8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dbc91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc92: mov ecx, dword ptr [0x7947b8] */ r_ecx = R32((u32)(0x7947b8u));
    /* 005dbc98: call 0x5ce2e0 */ r_esp -= 4; W32(r_esp, 0x5dbc9du); f_005ce2e0();
    /* 005dbc9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbc9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbca1: mov ecx, dword ptr [0x7947b8] */ r_ecx = R32((u32)(0x7947b8u));
    /* 005dbca7: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dbcacu); f_005f7340();
L_005dbcac:; BB(0x005dbcac);
    /* 005dbcac: mov ecx, dword ptr [0x7947b8] */ r_ecx = R32((u32)(0x7947b8u));
    /* 005dbcb2: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5dbcb7u); f_005f85d0();
L_005dbcb7:; BB(0x005dbcb7);
    /* 005dbcb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dbcba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dbcc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dbcc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dbcc3: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbcc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbcc6: ret 4 */ FN_RET(0x005dbb70); r_esp += 8; return;
}

void f_005dbcd0(void) /* sub_5DBCD0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbcd0);
    /* 005dbcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbcd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbcd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dbcd7: cmp dword ptr [0x7947b8], 0 */ {  u32 a = R32((u32)(0x7947b8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbcde: je 0x5dbcf5 */ if (fZ) goto L_005dbcf5;
L_005dbce0:; BB(0x005dbce0);
    /* 005dbce0: mov ecx, dword ptr [0x7947b8] */ r_ecx = R32((u32)(0x7947b8u));
    /* 005dbce6: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dbcebu); f_005f8990();
    /* 005dbceb: mov dword ptr [0x7947b8], 0 */ W32((u32)(0x7947b8u), 0x0u);
L_005dbcf5:; BB(0x005dbcf5);
    /* 005dbcf5: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbcf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbcf8: ret  */ FN_RET(0x005dbcd0); r_esp += 4; return;
}

void f_005dbd00(void) /* sub_5DBD00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbd00);
    /* 005dbd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd01: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbd03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd05: push 0x6a935b */ { u32 v = 0x6a935bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dbd10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd11: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dbd14: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dbd19: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dbd1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd1c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dbd1f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dbd25: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dbd28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd2a: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dbd2fu); f_005dcb00();
    /* 005dbd2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbd32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd33: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005dbd36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd37: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dbd3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005dbd3c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dbd3f: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 005dbd45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dbd47u); call_ind(t); }
    /* 005dbd47: cmp dword ptr [ebp - 0x14], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005dbd4e: jge 0x5dbd7b */ if ((fS==fO)) goto L_005dbd7b;
L_005dbd50:; BB(0x005dbd50);
    /* 005dbd50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd52: push 0x6d43e8 */ { u32 v = 0x6d43e8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd57: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dbd5cu); f_00630f40();
    /* 005dbd5c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbd5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd60: push 0x6d4530 */ { u32 v = 0x6d4530u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd65: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x5dbd6au); f_00630f40();
    /* 005dbd6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbd6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd6e: call 0x62ff10 */ r_esp -= 4; W32(r_esp, 0x5dbd73u); f_0062ff10();
    /* 005dbd73: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbd76: jmp 0x5dbe00 */ goto L_005dbe00;
L_005dbd7b:; BB(0x005dbd7b);
    /* 005dbd7b: cmp dword ptr [0x7947bc], 0 */ {  u32 a = R32((u32)(0x7947bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbd82: jne 0x5dbdf5 */ if (!fZ) goto L_005dbdf5;
L_005dbd84:; BB(0x005dbd84);
    /* 005dbd84: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbd89: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dbd8eu); f_00686d82();
    /* 005dbd8e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbd91: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dbd94: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dbd9b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbd9f: je 0x5dbdb6 */ if (fZ) goto L_005dbdb6;
L_005dbda1:; BB(0x005dbda1);
    /* 005dbda1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005dbda4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbda5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dbda8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbda9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dbdac: call 0x5ce650 */ r_esp -= 4; W32(r_esp, 0x5dbdb1u); f_005ce650();
    /* 005dbdb1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dbdb4: jmp 0x5dbdbd */ goto L_005dbdbd;
L_005dbdb6:; BB(0x005dbdb6);
    /* 005dbdb6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dbdbd:; BB(0x005dbdbd);
    /* 005dbdbd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dbdc0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005dbdc3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dbdca: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dbdcd: mov dword ptr [0x7947bc], ecx */ W32((u32)(0x7947bcu), r_ecx);
    /* 005dbdd3: mov edx, dword ptr [0x7947bc] */ r_edx = R32((u32)(0x7947bcu));
    /* 005dbdd9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005dbddb: mov ecx, dword ptr [0x7947bc] */ r_ecx = R32((u32)(0x7947bcu));
    /* 005dbde1: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005dbde4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5dbde6u); call_ind(t); }
    /* 005dbde6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbde8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbdea: mov ecx, dword ptr [0x7947bc] */ r_ecx = R32((u32)(0x7947bcu));
    /* 005dbdf0: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dbdf5u); f_005f7340();
L_005dbdf5:; BB(0x005dbdf5);
    /* 005dbdf5: mov ecx, dword ptr [0x7947bc] */ r_ecx = R32((u32)(0x7947bcu));
    /* 005dbdfb: call 0x5f85d0 */ r_esp -= 4; W32(r_esp, 0x5dbe00u); f_005f85d0();
L_005dbe00:; BB(0x005dbe00);
    /* 005dbe00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dbe03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dbe0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dbe0b: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbe0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbe0e: ret 8 */ FN_RET(0x005dbd00); r_esp += 12; return;
}

void f_005dbe20(void) /* sub_5DBE20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbe20);
    /* 005dbe20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe21: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbe23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbe24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dbe27: cmp dword ptr [0x7947bc], 0 */ {  u32 a = R32((u32)(0x7947bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbe2e: je 0x5dbe45 */ if (fZ) goto L_005dbe45;
L_005dbe30:; BB(0x005dbe30);
    /* 005dbe30: mov ecx, dword ptr [0x7947bc] */ r_ecx = R32((u32)(0x7947bcu));
    /* 005dbe36: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dbe3bu); f_005f8990();
    /* 005dbe3b: mov dword ptr [0x7947bc], 0 */ W32((u32)(0x7947bcu), 0x0u);
L_005dbe45:; BB(0x005dbe45);
    /* 005dbe45: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbe47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbe48: ret  */ FN_RET(0x005dbe20); r_esp += 4; return;
}

void f_005dbf30(void) /* sub_5DBF30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbf30);
    /* 005dbf30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf31: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbf33: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf34: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005dbf37: cmp dword ptr [0x7947c0], 0 */ {  u32 a = R32((u32)(0x7947c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbf3e: je 0x5dbf55 */ if (fZ) goto L_005dbf55;
L_005dbf40:; BB(0x005dbf40);
    /* 005dbf40: mov ecx, dword ptr [0x7947c0] */ r_ecx = R32((u32)(0x7947c0u));
    /* 005dbf46: call 0x5f8990 */ r_esp -= 4; W32(r_esp, 0x5dbf4bu); f_005f8990();
    /* 005dbf4b: mov dword ptr [0x7947c0], 0 */ W32((u32)(0x7947c0u), 0x0u);
L_005dbf55:; BB(0x005dbf55);
    /* 005dbf55: mov esp, ebp */ r_esp = r_ebp;
    /* 005dbf57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dbf58: ret  */ FN_RET(0x005dbf30); r_esp += 4; return;
}

void f_005dbf60(void) /* sub_5DBF60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005dbf60);
    /* 005dbf60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf61: mov ebp, esp */ r_ebp = r_esp;
    /* 005dbf63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf65: push 0x6a93a7 */ { u32 v = 0x6a93a7u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dbf70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf71: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dbf74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005dbf79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dbf7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005dbf7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005dbf85: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dbf88: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 005dbf8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf8c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dbf8f: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5dbf94u); f_005dac90();
    /* 005dbf94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbf95: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x5dbf9au); f_005dcb00();
    /* 005dbf9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dbf9d: mov ecx, eax */ r_ecx = r_eax;
    /* 005dbf9f: call 0x5d5a90 */ r_esp -= 4; W32(r_esp, 0x5dbfa4u); f_005d5a90();
    /* 005dbfa4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005dbfa7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfa8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dbfaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfab: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dbfb0: call 0x5dac90 */ r_esp -= 4; W32(r_esp, 0x5dbfb5u); f_005dac90();
    /* 005dbfb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfb6: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 005dbfbc: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x5dbfc1u); f_005e7e40();
    /* 005dbfc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfc4: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005dbfca: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005dbfcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfce: fld1  */ FPUSH(1.0);
    /* 005dbfd0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005dbfd3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfd5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfdb: push 0x18a9b */ { u32 v = 0x18a9bu; r_esp -= 4; W32(r_esp, v); }
    /* 005dbfe0: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005dbfe5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dbfe7: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005dbfed: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005dbff3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dbff5u); call_ind(t); }
    /* 005dbff5: cmp dword ptr [0x7947c4], 0 */ {  u32 a = R32((u32)(0x7947c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dbffc: jne 0x5dc078 */ if (!fZ) goto L_005dc078;
L_005dbffe:; BB(0x005dbffe);
    /* 005dbffe: push 0x1c0 */ { u32 v = 0x1c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc003: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5dc008u); f_00686d82();
    /* 005dc008: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dc00b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005dc00e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dc015: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dc019: je 0x5dc028 */ if (fZ) goto L_005dc028;
L_005dc01b:; BB(0x005dc01b);
    /* 005dc01b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005dc01e: call 0x5cecc0 */ r_esp -= 4; W32(r_esp, 0x5dc023u); f_005cecc0();
    /* 005dc023: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dc026: jmp 0x5dc02f */ goto L_005dc02f;
L_005dc028:; BB(0x005dc028);
    /* 005dc028: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dc02f:; BB(0x005dc02f);
    /* 005dc02f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dc032: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005dc035: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dc03c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dc03f: mov dword ptr [0x7947c4], edx */ W32((u32)(0x7947c4u), r_edx);
    /* 005dc045: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc048: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005dc04a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dc04d: mov eax, dword ptr [edx + 0x2f4] */ r_eax = R32((u32)(r_edx+0x2f4u));
    /* 005dc053: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5dc055u); call_ind(t); }
    /* 005dc055: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dc056: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005dc059: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc05a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005dc05d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dc05e: mov ecx, dword ptr [0x7947c4] */ r_ecx = R32((u32)(0x7947c4u));
    /* 005dc064: call 0x5cee20 */ r_esp -= 4; W32(r_esp, 0x5dc069u); f_005cee20();
    /* 005dc069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc06b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dc06d: mov ecx, dword ptr [0x7947c4] */ r_ecx = R32((u32)(0x7947c4u));
    /* 005dc073: call 0x5f7340 */ r_esp -= 4; W32(r_esp, 0x5dc078u); f_005f7340();
L_005dc078:; BB(0x005dc078);
    /* 005dc078: mov ecx, dword ptr [0x7947c4] */ r_ecx = R32((u32)(0x7947c4u));
    /* 005dc07e: call 0x5cef60 */ r_esp -= 4; W32(r_esp, 0x5dc083u); f_005cef60();
    /* 005dc083: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dc086: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dc08d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dc08e: mov esp, ebp */ r_esp = r_ebp;
    /* 005dc090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dc091: ret 8 */ FN_RET(0x005dbf60); r_esp += 12; return;
}


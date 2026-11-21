#include "protos.h"

void f_0042e250(void) /* sub_42E250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042e250);
    /* 0042e250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042e251: mov ebp, esp */ r_ebp = r_esp;
    /* 0042e253: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042e256: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0042e259: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042e25e: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0042e264: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042e267: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042e269: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e26d: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0042e270: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0042e273: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e275: jne 0x42e2b9 */ if (!fZ) goto L_0042e2b9;
L_0042e277:; BB(0x0042e277);
    /* 0042e277: push 0x6b6f88 */ { u32 v = 0x6b6f88u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e27c: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e281u); f_0062fde0();
    /* 0042e281: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e284: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e288: je 0x42e2a1 */ if (fZ) goto L_0042e2a1;
L_0042e28a:; BB(0x0042e28a);
    /* 0042e28a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e28e: je 0x42e2a1 */ if (fZ) goto L_0042e2a1;
L_0042e290:; BB(0x0042e290);
    /* 0042e290: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0042e293: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e294: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0042e297: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0042e299: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e29c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0042e29f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x42e2a1u); call_ind(t); }
L_0042e2a1:; BB(0x0042e2a1);
    /* 0042e2a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e2a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e2a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042e2a7: push 0xd04d */ { u32 v = 0xd04du; r_esp -= 4; W32(r_esp, v); }
    /* 0042e2ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e2af: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e2b4u); f_005cd800();
    /* 0042e2b4: jmp 0x42e4ae */ goto L_0042e4ae;
L_0042e2b9:; BB(0x0042e2b9);
    /* 0042e2b9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042e2bc: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042e2bf: mov edx, dword ptr [0x7906d4] */ r_edx = R32((u32)(0x7906d4u));
    /* 0042e2c5: mov eax, dword ptr [edx + 0xac4] */ r_eax = R32((u32)(r_edx+0xac4u));
    /* 0042e2cb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0042e2ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042e2d1: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0042e2d4: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0042e2d7: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0042e2db: ja 0x42e471 */ if ((!fC&&!fZ)) goto L_0042e471;
L_0042e2e1:; BB(0x0042e2e1);
    /* 0042e2e1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0042e2e4: jmp dword ptr [edx*4 + 0x42e4b4] */ { u32 t = R32((u32)(r_edx*4+0x42e4b4u)); switch (t) { case 0x42e2ebu: goto L_0042e2eb; case 0x42e32du: goto L_0042e32d; case 0x42e36fu: goto L_0042e36f; case 0x42e471u: goto L_0042e471; case 0x42e3b1u: goto L_0042e3b1; case 0x42e3f3u: goto L_0042e3f3; case 0x42e432u: goto L_0042e432; default: UNSUP(0x0042e2e4, "jump table entry is not a known target"); } }
L_0042e2eb:; BB(0x0042e2eb);
    /* 0042e2eb: push 0x6b6f68 */ { u32 v = 0x6b6f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e2f0: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e2f5u); f_0062fde0();
    /* 0042e2f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e2f8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e2fc: je 0x42e315 */ if (fZ) goto L_0042e315;
L_0042e2fe:; BB(0x0042e2fe);
    /* 0042e2fe: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042e301: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e304: je 0x42e315 */ if (fZ) goto L_0042e315;
L_0042e306:; BB(0x0042e306);
    /* 0042e306: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e308: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e30b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0042e30d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e310: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e313: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e315u); call_ind(t); }
L_0042e315:; BB(0x0042e315);
    /* 0042e315: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e317: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e31a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e31b: push 0xd147 */ { u32 v = 0xd147u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e320: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e323: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e328u); f_005cd800();
    /* 0042e328: jmp 0x42e4ae */ goto L_0042e4ae;
L_0042e32d:; BB(0x0042e32d);
    /* 0042e32d: push 0x6b6f48 */ { u32 v = 0x6b6f48u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e332: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e337u); f_0062fde0();
    /* 0042e337: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e33a: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e33e: je 0x42e357 */ if (fZ) goto L_0042e357;
L_0042e340:; BB(0x0042e340);
    /* 0042e340: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e343: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e346: je 0x42e357 */ if (fZ) goto L_0042e357;
L_0042e348:; BB(0x0042e348);
    /* 0042e348: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e34a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e34d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e34f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e352: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e355: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e357u); call_ind(t); }
L_0042e357:; BB(0x0042e357);
    /* 0042e357: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e359: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e35c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e35d: push 0xd1ab */ { u32 v = 0xd1abu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e362: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e365: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e36au); f_005cd800();
    /* 0042e36a: jmp 0x42e4ae */ goto L_0042e4ae;
L_0042e36f:; BB(0x0042e36f);
    /* 0042e36f: push 0x6b6f28 */ { u32 v = 0x6b6f28u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e374: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e379u); f_0062fde0();
    /* 0042e379: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e37c: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e380: je 0x42e399 */ if (fZ) goto L_0042e399;
L_0042e382:; BB(0x0042e382);
    /* 0042e382: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e385: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e388: je 0x42e399 */ if (fZ) goto L_0042e399;
L_0042e38a:; BB(0x0042e38a);
    /* 0042e38a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e38c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e38f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e391: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e394: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e397: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e399u); call_ind(t); }
L_0042e399:; BB(0x0042e399);
    /* 0042e399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e39b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e39e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e39f: push 0xd1f6 */ { u32 v = 0xd1f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e3a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e3a7: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e3acu); f_005cd800();
    /* 0042e3ac: jmp 0x42e4ae */ goto L_0042e4ae;
L_0042e3b1:; BB(0x0042e3b1);
    /* 0042e3b1: push 0x6b6f04 */ { u32 v = 0x6b6f04u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e3b6: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e3bbu); f_0062fde0();
    /* 0042e3bb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e3be: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e3c2: je 0x42e3db */ if (fZ) goto L_0042e3db;
L_0042e3c4:; BB(0x0042e3c4);
    /* 0042e3c4: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e3c7: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e3ca: je 0x42e3db */ if (fZ) goto L_0042e3db;
L_0042e3cc:; BB(0x0042e3cc);
    /* 0042e3cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e3ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e3d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e3d3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e3d6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e3d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e3dbu); call_ind(t); }
L_0042e3db:; BB(0x0042e3db);
    /* 0042e3db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e3dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e3e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e3e1: push 0xd25a */ { u32 v = 0xd25au; r_esp -= 4; W32(r_esp, v); }
    /* 0042e3e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e3e9: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e3eeu); f_005cd800();
    /* 0042e3ee: jmp 0x42e4ae */ goto L_0042e4ae;
L_0042e3f3:; BB(0x0042e3f3);
    /* 0042e3f3: push 0x6b6ee4 */ { u32 v = 0x6b6ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e3f8: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e3fdu); f_0062fde0();
    /* 0042e3fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e400: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e404: je 0x42e41d */ if (fZ) goto L_0042e41d;
L_0042e406:; BB(0x0042e406);
    /* 0042e406: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e409: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e40c: je 0x42e41d */ if (fZ) goto L_0042e41d;
L_0042e40e:; BB(0x0042e40e);
    /* 0042e40e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e410: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e413: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e415: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e418: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e41b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e41du); call_ind(t); }
L_0042e41d:; BB(0x0042e41d);
    /* 0042e41d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e41f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e422: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e423: push 0xd2be */ { u32 v = 0xd2beu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e428: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e42b: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e430u); f_005cd800();
    /* 0042e430: jmp 0x42e4ae */ goto L_0042e4ae;
L_0042e432:; BB(0x0042e432);
    /* 0042e432: push 0x6b6ec4 */ { u32 v = 0x6b6ec4u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e437: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e43cu); f_0062fde0();
    /* 0042e43c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e43f: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e443: je 0x42e45c */ if (fZ) goto L_0042e45c;
L_0042e445:; BB(0x0042e445);
    /* 0042e445: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0042e448: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e44b: je 0x42e45c */ if (fZ) goto L_0042e45c;
L_0042e44d:; BB(0x0042e44d);
    /* 0042e44d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042e44f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e452: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e454: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e457: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e45a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e45cu); call_ind(t); }
L_0042e45c:; BB(0x0042e45c);
    /* 0042e45c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e45e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e461: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e462: push 0xd309 */ { u32 v = 0xd309u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e467: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e46a: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e46fu); f_005cd800();
    /* 0042e46f: jmp 0x42e4ae */ goto L_0042e4ae;
L_0042e471:; BB(0x0042e471);
    /* 0042e471: push 0x6b6f88 */ { u32 v = 0x6b6f88u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e476: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x42e47bu); f_0062fde0();
    /* 0042e47b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0042e47e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e482: je 0x42e49b */ if (fZ) goto L_0042e49b;
L_0042e484:; BB(0x0042e484);
    /* 0042e484: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042e488: je 0x42e49b */ if (fZ) goto L_0042e49b;
L_0042e48a:; BB(0x0042e48a);
    /* 0042e48a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0042e48d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e48e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0042e491: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0042e493: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e496: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0042e499: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x42e49bu); call_ind(t); }
L_0042e49b:; BB(0x0042e49b);
    /* 0042e49b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042e49d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0042e4a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042e4a1: push 0xd04d */ { u32 v = 0xd04du; r_esp -= 4; W32(r_esp, v); }
    /* 0042e4a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0042e4a9: call 0x5cd800 */ r_esp -= 4; W32(r_esp, 0x42e4aeu); f_005cd800();
L_0042e4ae:; BB(0x0042e4ae);
    /* 0042e4ae: mov esp, ebp */ r_esp = r_ebp;
    /* 0042e4b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042e4b1: ret 8 */ FN_RET(0x0042e250); r_esp += 12; return;
}

void f_0042eef0(void) /* sub_42EEF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0042eef0);
    /* 0042eef0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042eef1: mov ebp, esp */ r_ebp = r_esp;
    /* 0042eef3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042eef6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0042eef9: mov eax, dword ptr [0x7906d4] */ r_eax = R32((u32)(0x7906d4u));
    /* 0042eefe: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0042ef04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0042ef07: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042ef09: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef0d: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0042ef10: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0042ef13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042ef15: jne 0x42ef2d */ if (!fZ) goto L_0042ef2d;
L_0042ef17:; BB(0x0042ef17);
    /* 0042ef17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef19: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0042ef1f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0042ef22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef23: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ef26: call 0x42e4d0 */ r_esp -= 4; W32(r_esp, 0x42ef2bu); f_0042e4d0();
    /* 0042ef2b: jmp 0x42ef40 */ goto L_0042ef40;
L_0042ef2d:; BB(0x0042ef2d);
    /* 0042ef2d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef2f: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 0042ef34: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0042ef37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0042ef38: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0042ef3b: call 0x42e880 */ r_esp -= 4; W32(r_esp, 0x42ef40u); f_0042e880();
L_0042ef40:; BB(0x0042ef40);
    /* 0042ef40: mov esp, ebp */ r_esp = r_ebp;
    /* 0042ef42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042ef43: ret 8 */ FN_RET(0x0042eef0); r_esp += 12; return;
}


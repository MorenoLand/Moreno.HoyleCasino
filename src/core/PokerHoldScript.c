#include "protos.h"

void f_004c4290(void) /* PokerHoldScript::func_004c4290 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c4290);
    /* 004c4290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4291: mov ebp, esp */ r_ebp = r_esp;
    /* 004c4293: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c4296: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c4297: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c429d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c42a2u); f_0047e3b0();
    /* 004c42a2: mov ecx, eax */ r_ecx = r_eax;
    /* 004c42a4: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c42a9u); f_004c6cb0();
    /* 004c42a9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c42ac: jne 0x4c4504 */ if (!fZ) goto L_004c4504;
L_004c42b2:; BB(0x004c42b2);
    /* 004c42b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c42b8: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c42bdu); f_0047e3b0();
    /* 004c42bd: mov ecx, eax */ r_ecx = r_eax;
    /* 004c42bf: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c42c4u); f_004c7010();
    /* 004c42c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c42c7: je 0x4c42e0 */ if (fZ) goto L_004c42e0;
L_004c42c9:; BB(0x004c42c9);
    /* 004c42c9: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 004c42ce: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c42d3: push 0x6bf2f8 */ { u32 v = 0x6bf2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c42d8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c42ddu); f_005e9f20();
    /* 004c42dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c42e0:; BB(0x004c42e0);
    /* 004c42e0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c42e6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c42ebu); f_0047e190();
    /* 004c42eb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c42ee: jne 0x4c4316 */ if (!fZ) goto L_004c4316;
L_004c42f0:; BB(0x004c42f0);
    /* 004c42f0: mov ecx, dword ptr [0x791e40] */ r_ecx = R32((u32)(0x791e40u));
    /* 004c42f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c42f7: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c42fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c42fe: mov eax, dword ptr [0x791e74] */ r_eax = R32((u32)(0x791e74u));
    /* 004c4303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4304: call 0x4a2590 */ r_esp -= 4; W32(r_esp, 0x4c4309u); f_004a2590();
    /* 004c4309: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c430c: mov dword ptr [0x791e7c], eax */ W32((u32)(0x791e7cu), r_eax);
    /* 004c4311: jmp 0x4c4451 */ goto L_004c4451;
L_004c4316:; BB(0x004c4316);
    /* 004c4316: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c431c: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c4321u); f_0047e190();
    /* 004c4321: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4324: jne 0x4c43d0 */ if (!fZ) goto L_004c43d0;
L_004c432a:; BB(0x004c432a);
    /* 004c432a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4330: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4c4335u); f_0047e280();
    /* 004c4335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4337: jne 0x4c435c */ if (!fZ) goto L_004c435c;
L_004c4339:; BB(0x004c4339);
    /* 004c4339: mov ecx, dword ptr [0x791e40] */ r_ecx = R32((u32)(0x791e40u));
    /* 004c433f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4340: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c4346: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4347: mov eax, dword ptr [0x791e74] */ r_eax = R32((u32)(0x791e74u));
    /* 004c434c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c434d: call 0x4a4450 */ r_esp -= 4; W32(r_esp, 0x4c4352u); f_004a4450();
    /* 004c4352: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4355: mov dword ptr [0x791e7c], eax */ W32((u32)(0x791e7cu), r_eax);
    /* 004c435a: jmp 0x4c43cb */ goto L_004c43cb;
L_004c435c:; BB(0x004c435c);
    /* 004c435c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4362: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4c4367u); f_0047e280();
    /* 004c4367: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c436a: je 0x4c4383 */ if (fZ) goto L_004c4383;
L_004c436c:; BB(0x004c436c);
    /* 004c436c: push 0x21f */ { u32 v = 0x21fu; r_esp -= 4; W32(r_esp, v); }
    /* 004c4371: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4376: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c437b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c4380u); f_005e9f20();
    /* 004c4380: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c4383:; BB(0x004c4383);
    /* 004c4383: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4389: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x4c438eu); f_0047d7f0();
    /* 004c438e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4391: je 0x4c43aa */ if (fZ) goto L_004c43aa;
L_004c4393:; BB(0x004c4393);
    /* 004c4393: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4398: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c439d: push 0x6bed74 */ { u32 v = 0x6bed74u; r_esp -= 4; W32(r_esp, v); }
    /* 004c43a2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c43a7u); f_005e9f20();
    /* 004c43a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c43aa:; BB(0x004c43aa);
    /* 004c43aa: mov eax, dword ptr [0x791e40] */ r_eax = R32((u32)(0x791e40u));
    /* 004c43af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c43b0: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c43b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c43b7: mov edx, dword ptr [0x791e74] */ r_edx = R32((u32)(0x791e74u));
    /* 004c43bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c43be: call 0x4a6760 */ r_esp -= 4; W32(r_esp, 0x4c43c3u); f_004a6760();
    /* 004c43c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c43c6: mov dword ptr [0x791e7c], eax */ W32((u32)(0x791e7cu), r_eax);
L_004c43cb:; BB(0x004c43cb);
    /* 004c43cb: jmp 0x4c4451 */ goto L_004c4451;
L_004c43d0:; BB(0x004c43d0);
    /* 004c43d0: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c43d6: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c43dbu); f_0047e190();
    /* 004c43db: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c43de: jne 0x4c4403 */ if (!fZ) goto L_004c4403;
L_004c43e0:; BB(0x004c43e0);
    /* 004c43e0: mov eax, dword ptr [0x791e40] */ r_eax = R32((u32)(0x791e40u));
    /* 004c43e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c43e6: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c43ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c43ed: mov edx, dword ptr [0x791e74] */ r_edx = R32((u32)(0x791e74u));
    /* 004c43f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c43f4: call 0x4a8bb0 */ r_esp -= 4; W32(r_esp, 0x4c43f9u); f_004a8bb0();
    /* 004c43f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c43fc: mov dword ptr [0x791e7c], eax */ W32((u32)(0x791e7cu), r_eax);
    /* 004c4401: jmp 0x4c4451 */ goto L_004c4451;
L_004c4403:; BB(0x004c4403);
    /* 004c4403: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4409: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c440eu); f_0047e190();
    /* 004c440e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4411: jne 0x4c4436 */ if (!fZ) goto L_004c4436;
L_004c4413:; BB(0x004c4413);
    /* 004c4413: mov eax, dword ptr [0x791e40] */ r_eax = R32((u32)(0x791e40u));
    /* 004c4418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4419: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c441f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4420: mov edx, dword ptr [0x791e74] */ r_edx = R32((u32)(0x791e74u));
    /* 004c4426: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4427: call 0x4b0350 */ r_esp -= 4; W32(r_esp, 0x4c442cu); f_004b0350();
    /* 004c442c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c442f: mov dword ptr [0x791e7c], eax */ W32((u32)(0x791e7cu), r_eax);
    /* 004c4434: jmp 0x4c4451 */ goto L_004c4451;
L_004c4436:; BB(0x004c4436);
    /* 004c4436: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c4438: jne 0x4c4451 */ if (!fZ) goto L_004c4451;
L_004c443a:; BB(0x004c443a);
    /* 004c443a: push 0x229 */ { u32 v = 0x229u; r_esp -= 4; W32(r_esp, v); }
    /* 004c443f: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4444: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4449: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c444eu); f_005e9f20();
    /* 004c444e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c4451:; BB(0x004c4451);
    /* 004c4451: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4457: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c445cu); f_0047d6b0();
    /* 004c445c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c445f: jne 0x4c44f5 */ if (!fZ) goto L_004c44f5;
L_004c4465:; BB(0x004c4465);
    /* 004c4465: cmp dword ptr [0x791e7c], 2 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c446c: je 0x4c4477 */ if (fZ) goto L_004c4477;
L_004c446e:; BB(0x004c446e);
    /* 004c446e: cmp dword ptr [0x791e7c], 4 */ {  u32 a = R32((u32)(0x791e7cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4475: jne 0x4c44f5 */ if (!fZ) goto L_004c44f5;
L_004c4477:; BB(0x004c4477);
    /* 004c4477: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c447cu); f_004b7d90();
    /* 004c447c: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c447f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4481: je 0x4c44b2 */ if (fZ) goto L_004c44b2;
L_004c4483:; BB(0x004c4483);
    /* 004c4483: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4489: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c448eu); f_0047bde0();
    /* 004c448e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c448f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4495: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c449au); f_0047bd60();
    /* 004c449a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c449b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c44a1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c44a6u); f_0047e3b0();
    /* 004c44a6: mov ecx, eax */ r_ecx = r_eax;
    /* 004c44a8: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c44adu); f_004c79f0();
    /* 004c44ad: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004c44b0: jmp 0x4c44df */ goto L_004c44df;
L_004c44b2:; BB(0x004c44b2);
    /* 004c44b2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c44b8: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x4c44bdu); f_0047bda0();
    /* 004c44bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c44be: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c44c4: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c44c9u); f_0047bd60();
    /* 004c44c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c44ca: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c44d0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c44d5u); f_0047e3b0();
    /* 004c44d5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c44d7: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c44dcu); f_004c79f0();
    /* 004c44dc: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004c44df:; BB(0x004c44df);
    /* 004c44df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004c44e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c44e3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c44e9: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c44eeu); f_0047e3b0();
    /* 004c44ee: mov ecx, eax */ r_ecx = r_eax;
    /* 004c44f0: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x4c44f5u); f_004c79b0();
L_004c44f5:; BB(0x004c44f5);
    /* 004c44f5: mov eax, 5 */ r_eax = 0x5u;
    /* 004c44fa: jmp 0x4c4a2b */ goto L_004c4a2b;
L_004c4504:; BB(0x004c4504);
    /* 004c4504: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c450a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c450fu); f_0047e3b0();
    /* 004c450f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4511: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c4516u); f_004c6cb0();
    /* 004c4516: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4519: jne 0x4c49da */ if (!fZ) goto L_004c49da;
L_004c451f:; BB(0x004c451f);
    /* 004c451f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4525: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c452au); f_0047e3b0();
    /* 004c452a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c452c: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x4c4531u); f_004c7010();
    /* 004c4531: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4534: je 0x4c454d */ if (fZ) goto L_004c454d;
L_004c4536:; BB(0x004c4536);
    /* 004c4536: push 0x23e */ { u32 v = 0x23eu; r_esp -= 4; W32(r_esp, v); }
    /* 004c453b: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4540: push 0x6bf2f8 */ { u32 v = 0x6bf2f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4545: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c454au); f_005e9f20();
    /* 004c454a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c454d:; BB(0x004c454d);
    /* 004c454d: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004c4554: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c455a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c455fu); f_0047e190();
    /* 004c455f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4562: jne 0x4c462a */ if (!fZ) goto L_004c462a;
L_004c4568:; BB(0x004c4568);
    /* 004c4568: mov edx, dword ptr [0x791e40] */ r_edx = R32((u32)(0x791e40u));
    /* 004c456e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c456f: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c4574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4575: mov ecx, dword ptr [0x791e74] */ r_ecx = R32((u32)(0x791e74u));
    /* 004c457b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c457c: call 0x4a2590 */ r_esp -= 4; W32(r_esp, 0x4c4581u); f_004a2590();
    /* 004c4581: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4584: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c4587: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c458d: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c4592u); f_0047d6b0();
    /* 004c4592: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4595: jne 0x4c4625 */ if (!fZ) goto L_004c4625;
L_004c459b:; BB(0x004c459b);
    /* 004c459b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c459f: je 0x4c45a7 */ if (fZ) goto L_004c45a7;
L_004c45a1:; BB(0x004c45a1);
    /* 004c45a1: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c45a5: jne 0x4c4625 */ if (!fZ) goto L_004c4625;
L_004c45a7:; BB(0x004c45a7);
    /* 004c45a7: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c45acu); f_004b7d90();
    /* 004c45ac: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c45af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c45b1: je 0x4c45e2 */ if (fZ) goto L_004c45e2;
L_004c45b3:; BB(0x004c45b3);
    /* 004c45b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c45b9: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c45beu); f_0047bde0();
    /* 004c45be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c45bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c45c5: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c45cau); f_0047bd60();
    /* 004c45ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c45cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c45d1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c45d6u); f_0047e3b0();
    /* 004c45d6: mov ecx, eax */ r_ecx = r_eax;
    /* 004c45d8: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c45ddu); f_004c79f0();
    /* 004c45dd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 004c45e0: jmp 0x4c460f */ goto L_004c460f;
L_004c45e2:; BB(0x004c45e2);
    /* 004c45e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c45e8: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x4c45edu); f_0047bda0();
    /* 004c45ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c45ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c45f4: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c45f9u); f_0047bd60();
    /* 004c45f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c45fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4600: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4605u); f_0047e3b0();
    /* 004c4605: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4607: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c460cu); f_004c79f0();
    /* 004c460c: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004c460f:; BB(0x004c460f);
    /* 004c460f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c4612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4613: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4619: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c461eu); f_0047e3b0();
    /* 004c461e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4620: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x4c4625u); f_004c79b0();
L_004c4625:; BB(0x004c4625);
    /* 004c4625: jmp 0x4c4942 */ goto L_004c4942;
L_004c462a:; BB(0x004c462a);
    /* 004c462a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4630: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c4635u); f_0047e190();
    /* 004c4635: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4638: jne 0x4c477e */ if (!fZ) goto L_004c477e;
L_004c463e:; BB(0x004c463e);
    /* 004c463e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4644: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4c4649u); f_0047e280();
    /* 004c4649: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c464b: jne 0x4c466e */ if (!fZ) goto L_004c466e;
L_004c464d:; BB(0x004c464d);
    /* 004c464d: mov ecx, dword ptr [0x791e40] */ r_ecx = R32((u32)(0x791e40u));
    /* 004c4653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4654: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c465a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c465b: mov eax, dword ptr [0x791e74] */ r_eax = R32((u32)(0x791e74u));
    /* 004c4660: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4661: call 0x4a4450 */ r_esp -= 4; W32(r_esp, 0x4c4666u); f_004a4450();
    /* 004c4666: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4669: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c466c: jmp 0x4c46db */ goto L_004c46db;
L_004c466e:; BB(0x004c466e);
    /* 004c466e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4674: call 0x47e280 */ r_esp -= 4; W32(r_esp, 0x4c4679u); f_0047e280();
    /* 004c4679: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c467c: je 0x4c4695 */ if (fZ) goto L_004c4695;
L_004c467e:; BB(0x004c467e);
    /* 004c467e: push 0x25a */ { u32 v = 0x25au; r_esp -= 4; W32(r_esp, v); }
    /* 004c4683: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4688: push 0x6bedb0 */ { u32 v = 0x6bedb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c468d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c4692u); f_005e9f20();
    /* 004c4692: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c4695:; BB(0x004c4695);
    /* 004c4695: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c469b: call 0x47d7f0 */ r_esp -= 4; W32(r_esp, 0x4c46a0u); f_0047d7f0();
    /* 004c46a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c46a3: je 0x4c46bc */ if (fZ) goto L_004c46bc;
L_004c46a5:; BB(0x004c46a5);
    /* 004c46a5: push 0x25b */ { u32 v = 0x25bu; r_esp -= 4; W32(r_esp, v); }
    /* 004c46aa: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c46af: push 0x6bed74 */ { u32 v = 0x6bed74u; r_esp -= 4; W32(r_esp, v); }
    /* 004c46b4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c46b9u); f_005e9f20();
    /* 004c46b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c46bc:; BB(0x004c46bc);
    /* 004c46bc: mov eax, dword ptr [0x791e40] */ r_eax = R32((u32)(0x791e40u));
    /* 004c46c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c46c2: mov ecx, dword ptr [0x791e50] */ r_ecx = R32((u32)(0x791e50u));
    /* 004c46c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c46c9: mov edx, dword ptr [0x791e74] */ r_edx = R32((u32)(0x791e74u));
    /* 004c46cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c46d0: call 0x4a6760 */ r_esp -= 4; W32(r_esp, 0x4c46d5u); f_004a6760();
    /* 004c46d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c46d8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004c46db:; BB(0x004c46db);
    /* 004c46db: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c46e1: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c46e6u); f_0047d6b0();
    /* 004c46e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c46e9: jne 0x4c4779 */ if (!fZ) goto L_004c4779;
L_004c46ef:; BB(0x004c46ef);
    /* 004c46ef: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c46f3: je 0x4c46fb */ if (fZ) goto L_004c46fb;
L_004c46f5:; BB(0x004c46f5);
    /* 004c46f5: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c46f9: jne 0x4c4779 */ if (!fZ) goto L_004c4779;
L_004c46fb:; BB(0x004c46fb);
    /* 004c46fb: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c4700u); f_004b7d90();
    /* 004c4700: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c4703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4705: je 0x4c4736 */ if (fZ) goto L_004c4736;
L_004c4707:; BB(0x004c4707);
    /* 004c4707: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c470d: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c4712u); f_0047bde0();
    /* 004c4712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4713: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4719: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c471eu); f_0047bd60();
    /* 004c471e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c471f: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4725: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c472au); f_0047e3b0();
    /* 004c472a: mov ecx, eax */ r_ecx = r_eax;
    /* 004c472c: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c4731u); f_004c79f0();
    /* 004c4731: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004c4734: jmp 0x4c4763 */ goto L_004c4763;
L_004c4736:; BB(0x004c4736);
    /* 004c4736: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c473c: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x4c4741u); f_0047bda0();
    /* 004c4741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4742: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4748: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c474du); f_0047bd60();
    /* 004c474d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c474e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4754: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4759u); f_0047e3b0();
    /* 004c4759: mov ecx, eax */ r_ecx = r_eax;
    /* 004c475b: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c4760u); f_004c79f0();
    /* 004c4760: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_004c4763:; BB(0x004c4763);
    /* 004c4763: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004c4766: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4767: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c476d: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4772u); f_0047e3b0();
    /* 004c4772: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4774: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x4c4779u); f_004c79b0();
L_004c4779:; BB(0x004c4779);
    /* 004c4779: jmp 0x4c4942 */ goto L_004c4942;
L_004c477e:; BB(0x004c477e);
    /* 004c477e: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4784: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c4789u); f_0047e190();
    /* 004c4789: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c478c: jne 0x4c4854 */ if (!fZ) goto L_004c4854;
L_004c4792:; BB(0x004c4792);
    /* 004c4792: mov edx, dword ptr [0x791e40] */ r_edx = R32((u32)(0x791e40u));
    /* 004c4798: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4799: mov eax, dword ptr [0x791e50] */ r_eax = R32((u32)(0x791e50u));
    /* 004c479e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c479f: mov ecx, dword ptr [0x791e74] */ r_ecx = R32((u32)(0x791e74u));
    /* 004c47a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c47a6: call 0x4a8bb0 */ r_esp -= 4; W32(r_esp, 0x4c47abu); f_004a8bb0();
    /* 004c47ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c47ae: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c47b1: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c47b7: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c47bcu); f_0047d6b0();
    /* 004c47bc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c47bf: jne 0x4c484f */ if (!fZ) goto L_004c484f;
L_004c47c5:; BB(0x004c47c5);
    /* 004c47c5: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c47c9: je 0x4c47d1 */ if (fZ) goto L_004c47d1;
L_004c47cb:; BB(0x004c47cb);
    /* 004c47cb: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c47cf: jne 0x4c484f */ if (!fZ) goto L_004c484f;
L_004c47d1:; BB(0x004c47d1);
    /* 004c47d1: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c47d6u); f_004b7d90();
    /* 004c47d6: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c47d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c47db: je 0x4c480c */ if (fZ) goto L_004c480c;
L_004c47dd:; BB(0x004c47dd);
    /* 004c47dd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c47e3: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c47e8u); f_0047bde0();
    /* 004c47e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c47e9: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c47ef: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c47f4u); f_0047bd60();
    /* 004c47f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c47f5: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c47fb: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4800u); f_0047e3b0();
    /* 004c4800: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4802: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c4807u); f_004c79f0();
    /* 004c4807: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004c480a: jmp 0x4c4839 */ goto L_004c4839;
L_004c480c:; BB(0x004c480c);
    /* 004c480c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4812: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x4c4817u); f_0047bda0();
    /* 004c4817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4818: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c481e: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c4823u); f_0047bd60();
    /* 004c4823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4824: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c482a: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c482fu); f_0047e3b0();
    /* 004c482f: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4831: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c4836u); f_004c79f0();
    /* 004c4836: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004c4839:; BB(0x004c4839);
    /* 004c4839: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004c483c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c483d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4843: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4848u); f_0047e3b0();
    /* 004c4848: mov ecx, eax */ r_ecx = r_eax;
    /* 004c484a: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x4c484fu); f_004c79b0();
L_004c484f:; BB(0x004c484f);
    /* 004c484f: jmp 0x4c4942 */ goto L_004c4942;
L_004c4854:; BB(0x004c4854);
    /* 004c4854: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c485a: call 0x47e190 */ r_esp -= 4; W32(r_esp, 0x4c485fu); f_0047e190();
    /* 004c485f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4862: jne 0x4c4927 */ if (!fZ) goto L_004c4927;
L_004c4868:; BB(0x004c4868);
    /* 004c4868: mov ecx, dword ptr [0x791e40] */ r_ecx = R32((u32)(0x791e40u));
    /* 004c486e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c486f: mov edx, dword ptr [0x791e50] */ r_edx = R32((u32)(0x791e50u));
    /* 004c4875: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4876: mov eax, dword ptr [0x791e74] */ r_eax = R32((u32)(0x791e74u));
    /* 004c487b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c487c: call 0x4b0350 */ r_esp -= 4; W32(r_esp, 0x4c4881u); f_004b0350();
    /* 004c4881: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c4884: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004c4887: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c488d: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x4c4892u); f_0047d6b0();
    /* 004c4892: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4895: jne 0x4c4925 */ if (!fZ) goto L_004c4925;
L_004c489b:; BB(0x004c489b);
    /* 004c489b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c489f: je 0x4c48a7 */ if (fZ) goto L_004c48a7;
L_004c48a1:; BB(0x004c48a1);
    /* 004c48a1: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c48a5: jne 0x4c4925 */ if (!fZ) goto L_004c4925;
L_004c48a7:; BB(0x004c48a7);
    /* 004c48a7: call 0x4b7d90 */ r_esp -= 4; W32(r_esp, 0x4c48acu); f_004b7d90();
    /* 004c48ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c48af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c48b1: je 0x4c48e2 */ if (fZ) goto L_004c48e2;
L_004c48b3:; BB(0x004c48b3);
    /* 004c48b3: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c48b9: call 0x47bde0 */ r_esp -= 4; W32(r_esp, 0x4c48beu); f_0047bde0();
    /* 004c48be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c48bf: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c48c5: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c48cau); f_0047bd60();
    /* 004c48ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c48cb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c48d1: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c48d6u); f_0047e3b0();
    /* 004c48d6: mov ecx, eax */ r_ecx = r_eax;
    /* 004c48d8: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c48ddu); f_004c79f0();
    /* 004c48dd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004c48e0: jmp 0x4c490f */ goto L_004c490f;
L_004c48e2:; BB(0x004c48e2);
    /* 004c48e2: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c48e8: call 0x47bda0 */ r_esp -= 4; W32(r_esp, 0x4c48edu); f_0047bda0();
    /* 004c48ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c48ee: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c48f4: call 0x47bd60 */ r_esp -= 4; W32(r_esp, 0x4c48f9u); f_0047bd60();
    /* 004c48f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c48fa: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4900: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4905u); f_0047e3b0();
    /* 004c4905: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4907: call 0x4c79f0 */ r_esp -= 4; W32(r_esp, 0x4c490cu); f_004c79f0();
    /* 004c490c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004c490f:; BB(0x004c490f);
    /* 004c490f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c4912: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4913: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4919: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c491eu); f_0047e3b0();
    /* 004c491e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4920: call 0x4c79b0 */ r_esp -= 4; W32(r_esp, 0x4c4925u); f_004c79b0();
L_004c4925:; BB(0x004c4925);
    /* 004c4925: jmp 0x4c4942 */ goto L_004c4942;
L_004c4927:; BB(0x004c4927);
    /* 004c4927: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004c4929: jne 0x4c4942 */ if (!fZ) goto L_004c4942;
L_004c492b:; BB(0x004c492b);
    /* 004c492b: push 0x289 */ { u32 v = 0x289u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4930: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4935: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c493a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c493fu); f_005e9f20();
    /* 004c493f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c4942:; BB(0x004c4942);
    /* 004c4942: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4946: jne 0x4c4986 */ if (!fZ) goto L_004c4986;
L_004c4948:; BB(0x004c4948);
    /* 004c4948: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c494e: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4953u); f_0047e3b0();
    /* 004c4953: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4955: call 0x4c6eb0 */ r_esp -= 4; W32(r_esp, 0x4c495au); f_004c6eb0();
    /* 004c495a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c495d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c495f: je 0x4c4986 */ if (fZ) goto L_004c4986;
L_004c4961:; BB(0x004c4961);
    /* 004c4961: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4967: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c496a: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4c496fu); f_004f6640();
    /* 004c496f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c4972: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4974: je 0x4c497f */ if (fZ) goto L_004c497f;
L_004c4976:; BB(0x004c4976);
    /* 004c4976: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004c497d: jmp 0x4c4986 */ goto L_004c4986;
L_004c497f:; BB(0x004c497f);
    /* 004c497f: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
L_004c4986:; BB(0x004c4986);
    /* 004c4986: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c498a: jne 0x4c49d3 */ if (!fZ) goto L_004c49d3;
L_004c498c:; BB(0x004c498c);
    /* 004c498c: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c4992: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c4997u); f_0047e3b0();
    /* 004c4997: mov ecx, eax */ r_ecx = r_eax;
    /* 004c4999: call 0x4c6e30 */ r_esp -= 4; W32(r_esp, 0x4c499eu); f_004c6e30();
    /* 004c499e: mov esi, eax */ r_esi = r_eax;
    /* 004c49a0: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c49a2: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4c49a7u); f_0062fbf0();
    /* 004c49a7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c49aa: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c49ac: jle 0x4c49d3 */ if ((fZ||fS!=fO)) goto L_004c49d3;
L_004c49ae:; BB(0x004c49ae);
    /* 004c49ae: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c49b4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004c49b7: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x4c49bcu); f_004f6640();
    /* 004c49bc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c49bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c49c1: je 0x4c49cc */ if (fZ) goto L_004c49cc;
L_004c49c3:; BB(0x004c49c3);
    /* 004c49c3: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 004c49ca: jmp 0x4c49d3 */ goto L_004c49d3;
L_004c49cc:; BB(0x004c49cc);
    /* 004c49cc: mov dword ptr [ebp - 8], 3 */ W32((u32)(r_ebp+0xfffffff8u), 0x3u);
L_004c49d3:; BB(0x004c49d3);
    /* 004c49d3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004c49d6: jmp 0x4c4a2b */ goto L_004c4a2b;
L_004c49da:; BB(0x004c49da);
    /* 004c49da: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004c49e0: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x4c49e5u); f_0047e3b0();
    /* 004c49e5: mov ecx, eax */ r_ecx = r_eax;
    /* 004c49e7: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x4c49ecu); f_004c6cb0();
    /* 004c49ec: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c49ef: jne 0x4c4a0e */ if (!fZ) goto L_004c4a0e;
L_004c49f1:; BB(0x004c49f1);
    /* 004c49f1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004c49f3: jne 0x4c4a0c */ if (!fZ) goto L_004c4a0c;
L_004c49f5:; BB(0x004c49f5);
    /* 004c49f5: push 0x2c7 */ { u32 v = 0x2c7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c49fa: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c49ff: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a04: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c4a09u); f_005e9f20();
    /* 004c4a09: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c4a0c:; BB(0x004c4a0c);
    /* 004c4a0c: jmp 0x4c4a29 */ goto L_004c4a29;
L_004c4a0e:; BB(0x004c4a0e);
    /* 004c4a0e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c4a10: jne 0x4c4a29 */ if (!fZ) goto L_004c4a29;
L_004c4a12:; BB(0x004c4a12);
    /* 004c4a12: push 0x2ca */ { u32 v = 0x2cau; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a17: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a1c: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a21: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c4a26u); f_005e9f20();
    /* 004c4a26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c4a29:; BB(0x004c4a29);
    /* 004c4a29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004c4a2b:; BB(0x004c4a2b);
    /* 004c4a2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004c4a2c: mov esp, ebp */ r_esp = r_ebp;
    /* 004c4a2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4a2f: ret  */ FN_RET(0x004c4290); r_esp += 4; return;
}

void f_004c4a30(void) /* PokerHoldScript::func_004c4a30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004c4a30);
    /* 004c4a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a31: mov ebp, esp */ r_ebp = r_esp;
    /* 004c4a33: mov eax, dword ptr [0x7913f0] */ r_eax = R32((u32)(0x7913f0u));
    /* 004c4a38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a39: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4a3c: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4a41u); f_004a1fb0();
    /* 004c4a41: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c4a44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4a46: je 0x4c4a54 */ if (fZ) goto L_004c4a54;
L_004c4a48:; BB(0x004c4a48);
    /* 004c4a48: mov al, 0x32 */ r_eax = (r_eax & 0xffffff00u) | ((0x32u) & 0xffu);
    /* 004c4a4a: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4a54:; BB(0x004c4a54);
    /* 004c4a54: mov edx, dword ptr [0x7913d8] */ r_edx = R32((u32)(0x7913d8u));
    /* 004c4a5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a5b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4a5e: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4a63u); f_004a1fb0();
    /* 004c4a63: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c4a66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4a68: je 0x4c4a76 */ if (fZ) goto L_004c4a76;
L_004c4a6a:; BB(0x004c4a6a);
    /* 004c4a6a: mov al, 0x33 */ r_eax = (r_eax & 0xffffff00u) | ((0x33u) & 0xffu);
    /* 004c4a6c: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4a76:; BB(0x004c4a76);
    /* 004c4a76: mov ecx, dword ptr [0x791414] */ r_ecx = R32((u32)(0x791414u));
    /* 004c4a7c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a7d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4a80: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4a85u); f_004a1fb0();
    /* 004c4a85: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c4a88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4a8a: je 0x4c4a98 */ if (fZ) goto L_004c4a98;
L_004c4a8c:; BB(0x004c4a8c);
    /* 004c4a8c: mov al, 0x34 */ r_eax = (r_eax & 0xffffff00u) | ((0x34u) & 0xffu);
    /* 004c4a8e: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4a98:; BB(0x004c4a98);
    /* 004c4a98: mov eax, dword ptr [0x7913a4] */ r_eax = R32((u32)(0x7913a4u));
    /* 004c4a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4a9e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4aa1: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4aa6u); f_004a1fb0();
    /* 004c4aa6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c4aa9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4aab: je 0x4c4ab9 */ if (fZ) goto L_004c4ab9;
L_004c4aad:; BB(0x004c4aad);
    /* 004c4aad: mov al, 0x35 */ r_eax = (r_eax & 0xffffff00u) | ((0x35u) & 0xffu);
    /* 004c4aaf: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4ab9:; BB(0x004c4ab9);
    /* 004c4ab9: mov edx, dword ptr [0x791404] */ r_edx = R32((u32)(0x791404u));
    /* 004c4abf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4ac0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4ac3: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4ac8u); f_004a1fb0();
    /* 004c4ac8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c4acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4acd: je 0x4c4ad5 */ if (fZ) goto L_004c4ad5;
L_004c4acf:; BB(0x004c4acf);
    /* 004c4acf: mov al, 0x36 */ r_eax = (r_eax & 0xffffff00u) | ((0x36u) & 0xffu);
    /* 004c4ad1: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4ad5:; BB(0x004c4ad5);
    /* 004c4ad5: mov ecx, dword ptr [0x7913f8] */ r_ecx = R32((u32)(0x7913f8u));
    /* 004c4adb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4adc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4adf: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4ae4u); f_004a1fb0();
    /* 004c4ae4: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004c4ae7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4ae9: je 0x4c4af1 */ if (fZ) goto L_004c4af1;
L_004c4aeb:; BB(0x004c4aeb);
    /* 004c4aeb: mov al, 0x37 */ r_eax = (r_eax & 0xffffff00u) | ((0x37u) & 0xffu);
    /* 004c4aed: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4af1:; BB(0x004c4af1);
    /* 004c4af1: mov eax, dword ptr [0x791410] */ r_eax = R32((u32)(0x791410u));
    /* 004c4af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c4af7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4afa: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4affu); f_004a1fb0();
    /* 004c4aff: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 004c4b02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4b04: je 0x4c4b0c */ if (fZ) goto L_004c4b0c;
L_004c4b06:; BB(0x004c4b06);
    /* 004c4b06: mov al, 0x38 */ r_eax = (r_eax & 0xffffff00u) | ((0x38u) & 0xffu);
    /* 004c4b08: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4b0c:; BB(0x004c4b0c);
    /* 004c4b0c: mov edx, dword ptr [0x7913b4] */ r_edx = R32((u32)(0x7913b4u));
    /* 004c4b12: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004c4b16: call 0x4a1fb0 */ r_esp -= 4; W32(r_esp, 0x4c4b1bu); f_004a1fb0();
    /* 004c4b1b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004c4b1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c4b20: je 0x4c4b28 */ if (fZ) goto L_004c4b28;
L_004c4b22:; BB(0x004c4b22);
    /* 004c4b22: mov al, 0x41 */ r_eax = (r_eax & 0xffffff00u) | ((0x41u) & 0xffu);
    /* 004c4b24: jmp 0x4c4b45 */ goto L_004c4b45;
L_004c4b28:; BB(0x004c4b28);
    /* 004c4b28: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004c4b2a: jne 0x4c4b43 */ if (!fZ) goto L_004c4b43;
L_004c4b2c:; BB(0x004c4b2c);
    /* 004c4b2c: push 0x2e9 */ { u32 v = 0x2e9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b31: push 0x6bf2d8 */ { u32 v = 0x6bf2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b36: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 004c4b3b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4c4b40u); f_005e9f20();
    /* 004c4b40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004c4b43:; BB(0x004c4b43);
    /* 004c4b43: mov al, 0x3f */ r_eax = (r_eax & 0xffffff00u) | ((0x3fu) & 0xffu);
L_004c4b45:; BB(0x004c4b45);
    /* 004c4b45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c4b46: ret  */ FN_RET(0x004c4a30); r_esp += 4; return;
}


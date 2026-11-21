#include "protos.h"

void f_005d3190(void) /* sub_5D3190 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3190);
    /* 005d3190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3191: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3193: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3196: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d3199: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d319c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d319f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d31a2: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d31a5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d31a8: cmp dword ptr [ebp - 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d31ac: ja 0x5d3466 */ if ((!fC&&!fZ)) goto L_005d3466;
L_005d31b2:; BB(0x005d31b2);
    /* 005d31b2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d31b5: jmp dword ptr [edx*4 + 0x5d346c] */ { u32 t = R32((u32)(r_edx*4+0x5d346cu)); switch (t) { case 0x5d31bcu: goto L_005d31bc; case 0x5d31d8u: goto L_005d31d8; case 0x5d31f4u: goto L_005d31f4; case 0x5d3210u: goto L_005d3210; case 0x5d322cu: goto L_005d322c; case 0x5d3248u: goto L_005d3248; case 0x5d3264u: goto L_005d3264; case 0x5d3273u: goto L_005d3273; case 0x5d328fu: goto L_005d328f; case 0x5d32abu: goto L_005d32ab; case 0x5d32c7u: goto L_005d32c7; case 0x5d32e3u: goto L_005d32e3; case 0x5d32ffu: goto L_005d32ff; case 0x5d3362u: goto L_005d3362; case 0x5d337eu: goto L_005d337e; case 0x5d339au: goto L_005d339a; case 0x5d3404u: goto L_005d3404; case 0x5d341du: goto L_005d341d; case 0x5d33b6u: goto L_005d33b6; case 0x5d33d2u: goto L_005d33d2; case 0x5d33ebu: goto L_005d33eb; case 0x5d3436u: goto L_005d3436; case 0x5d344fu: goto L_005d344f; case 0x5d3346u: goto L_005d3346; case 0x5d331bu: goto L_005d331b; case 0x5d3337u: goto L_005d3337; default: UNSUP(0x005d31b5, "jump table entry is not a known target"); } }
L_005d31bc:; BB(0x005d31bc);
    /* 005d31bc: push 0x30ef74 */ { u32 v = 0x30ef74u; r_esp -= 4; W32(r_esp, v); }
    /* 005d31c1: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d31c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d31c9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d31cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d31ce: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d31d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d31d3u); call_ind(t); }
    /* 005d31d3: jmp 0x5d3466 */ goto L_005d3466;
L_005d31d8:; BB(0x005d31d8);
    /* 005d31d8: push 0x30ef7a */ { u32 v = 0x30ef7au; r_esp -= 4; W32(r_esp, v); }
    /* 005d31dd: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d31e2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d31e5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d31e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d31ea: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d31ed: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d31efu); call_ind(t); }
    /* 005d31ef: jmp 0x5d3466 */ goto L_005d3466;
L_005d31f4:; BB(0x005d31f4);
    /* 005d31f4: push 0x30ef77 */ { u32 v = 0x30ef77u; r_esp -= 4; W32(r_esp, v); }
    /* 005d31f9: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d31fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3201: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3203: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3206: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3209: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d320bu); call_ind(t); }
    /* 005d320b: jmp 0x5d3466 */ goto L_005d3466;
L_005d3210:; BB(0x005d3210);
    /* 005d3210: push 0x30ef7b */ { u32 v = 0x30ef7bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3215: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d321a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d321d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d321f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3222: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3225: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3227u); call_ind(t); }
    /* 005d3227: jmp 0x5d3466 */ goto L_005d3466;
L_005d322c:; BB(0x005d322c);
    /* 005d322c: push 0x30ef7b */ { u32 v = 0x30ef7bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3231: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3236: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3239: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d323b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d323e: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3241: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3243u); call_ind(t); }
    /* 005d3243: jmp 0x5d3466 */ goto L_005d3466;
L_005d3248:; BB(0x005d3248);
    /* 005d3248: push 0x30ef77 */ { u32 v = 0x30ef77u; r_esp -= 4; W32(r_esp, v); }
    /* 005d324d: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3252: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3255: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3257: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d325a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d325d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d325fu); call_ind(t); }
    /* 005d325f: jmp 0x5d3466 */ goto L_005d3466;
L_005d3264:; BB(0x005d3264);
    /* 005d3264: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3266: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3269: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d326eu); f_005d16b0();
    /* 005d326e: jmp 0x5d3466 */ goto L_005d3466;
L_005d3273:; BB(0x005d3273);
    /* 005d3273: push 0x30f354 */ { u32 v = 0x30f354u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3278: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d327d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3280: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3282: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3285: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3288: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d328au); call_ind(t); }
    /* 005d328a: jmp 0x5d3466 */ goto L_005d3466;
L_005d328f:; BB(0x005d328f);
    /* 005d328f: push 0x30f351 */ { u32 v = 0x30f351u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3294: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3299: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d329c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d329e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d32a1: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d32a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d32a6u); call_ind(t); }
    /* 005d32a6: jmp 0x5d3466 */ goto L_005d3466;
L_005d32ab:; BB(0x005d32ab);
    /* 005d32ab: push 0x30f34f */ { u32 v = 0x30f34fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d32b0: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d32b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d32b8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d32ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d32bd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d32c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d32c2u); call_ind(t); }
    /* 005d32c2: jmp 0x5d3466 */ goto L_005d3466;
L_005d32c7:; BB(0x005d32c7);
    /* 005d32c7: push 0x30f352 */ { u32 v = 0x30f352u; r_esp -= 4; W32(r_esp, v); }
    /* 005d32cc: push 0x30f357 */ { u32 v = 0x30f357u; r_esp -= 4; W32(r_esp, v); }
    /* 005d32d1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d32d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d32d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d32d9: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d32dc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d32deu); call_ind(t); }
    /* 005d32de: jmp 0x5d3466 */ goto L_005d3466;
L_005d32e3:; BB(0x005d32e3);
    /* 005d32e3: push 0x30fef8 */ { u32 v = 0x30fef8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d32e8: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d32ed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d32f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d32f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d32f5: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d32f8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d32fau); call_ind(t); }
    /* 005d32fa: jmp 0x5d3466 */ goto L_005d3466;
L_005d32ff:; BB(0x005d32ff);
    /* 005d32ff: push 0x30fef8 */ { u32 v = 0x30fef8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3304: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3309: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d330c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d330e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3311: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3314: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3316u); call_ind(t); }
    /* 005d3316: jmp 0x5d3466 */ goto L_005d3466;
L_005d331b:; BB(0x005d331b);
    /* 005d331b: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3320: push 0x1395 */ { u32 v = 0x1395u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3325: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3328: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d332a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d332d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3330: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3332u); call_ind(t); }
    /* 005d3332: jmp 0x5d3466 */ goto L_005d3466;
L_005d3337:; BB(0x005d3337);
    /* 005d3337: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3339: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d333c: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d3341u); f_005d16b0();
    /* 005d3341: jmp 0x5d3466 */ goto L_005d3466;
L_005d3346:; BB(0x005d3346);
    /* 005d3346: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d334b: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3350: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3353: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3355: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3358: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d335b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d335du); call_ind(t); }
    /* 005d335d: jmp 0x5d3466 */ goto L_005d3466;
L_005d3362:; BB(0x005d3362);
    /* 005d3362: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3367: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d336c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d336f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3371: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3374: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3377: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3379u); call_ind(t); }
    /* 005d3379: jmp 0x5d3466 */ goto L_005d3466;
L_005d337e:; BB(0x005d337e);
    /* 005d337e: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3383: push 0x1393 */ { u32 v = 0x1393u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3388: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d338b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d338d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3390: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3393: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3395u); call_ind(t); }
    /* 005d3395: jmp 0x5d3466 */ goto L_005d3466;
L_005d339a:; BB(0x005d339a);
    /* 005d339a: push 0x310ab0 */ { u32 v = 0x310ab0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d339f: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d33a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33a7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d33a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33ac: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d33af: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d33b1u); call_ind(t); }
    /* 005d33b1: jmp 0x5d3466 */ goto L_005d3466;
L_005d33b6:; BB(0x005d33b6);
    /* 005d33b6: push 0x3106c8 */ { u32 v = 0x3106c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d33bb: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d33c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d33c5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33c8: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d33cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d33cdu); call_ind(t); }
    /* 005d33cd: jmp 0x5d3466 */ goto L_005d3466;
L_005d33d2:; BB(0x005d33d2);
    /* 005d33d2: push 0x3106c8 */ { u32 v = 0x3106c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d33d7: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d33dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33df: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d33e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33e4: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d33e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d33e9u); call_ind(t); }
    /* 005d33e9: jmp 0x5d3466 */ goto L_005d3466;
L_005d33eb:; BB(0x005d33eb);
    /* 005d33eb: push 0x3106c8 */ { u32 v = 0x3106c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d33f0: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d33f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33f8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d33fa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d33fd: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3400: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3402u); call_ind(t); }
    /* 005d3402: jmp 0x5d3466 */ goto L_005d3466;
L_005d3404:; BB(0x005d3404);
    /* 005d3404: push 0x315100 */ { u32 v = 0x315100u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3409: push 0x1394 */ { u32 v = 0x1394u; r_esp -= 4; W32(r_esp, v); }
    /* 005d340e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3411: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3413: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3416: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3419: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d341bu); call_ind(t); }
    /* 005d341b: jmp 0x5d3466 */ goto L_005d3466;
L_005d341d:; BB(0x005d341d);
    /* 005d341d: push 0x315100 */ { u32 v = 0x315100u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3422: push 0x1393 */ { u32 v = 0x1393u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3427: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d342a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d342c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d342f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3432: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3434u); call_ind(t); }
    /* 005d3434: jmp 0x5d3466 */ goto L_005d3466;
L_005d3436:; BB(0x005d3436);
    /* 005d3436: push 0x315100 */ { u32 v = 0x315100u; r_esp -= 4; W32(r_esp, v); }
    /* 005d343b: push 0x1397 */ { u32 v = 0x1397u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3440: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3443: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3445: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3448: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d344b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d344du); call_ind(t); }
    /* 005d344d: jmp 0x5d3466 */ goto L_005d3466;
L_005d344f:; BB(0x005d344f);
    /* 005d344f: push 0x315100 */ { u32 v = 0x315100u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3454: push 0x1392 */ { u32 v = 0x1392u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3459: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d345c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d345e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3461: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3464: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3466u); call_ind(t); }
L_005d3466:; BB(0x005d3466);
    /* 005d3466: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3468: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3469: ret 4 */ FN_RET(0x005d3190); r_esp += 8; return;
}

void f_005d34e0(void) /* sub_5D34E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d34e0);
    /* 005d34e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d34e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d34e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d34e6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d34e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d34ec: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d34ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d34f2: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d34f5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d34f8: cmp dword ptr [ebp - 8], 0x29 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d34fc: ja 0x5d398d */ if ((!fC&&!fZ)) goto L_005d398d;
L_005d3502:; BB(0x005d3502);
    /* 005d3502: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d3505: jmp dword ptr [edx*4 + 0x5d3994] */ { u32 t = R32((u32)(r_edx*4+0x5d3994u)); switch (t) { case 0x5d350cu: goto L_005d350c; case 0x5d3525u: goto L_005d3525; case 0x5d3541u: goto L_005d3541; case 0x5d355du: goto L_005d355d; case 0x5d3579u: goto L_005d3579; case 0x5d3595u: goto L_005d3595; case 0x5d35b1u: goto L_005d35b1; case 0x5d35cdu: goto L_005d35cd; case 0x5d35e9u: goto L_005d35e9; case 0x5d3605u: goto L_005d3605; case 0x5d3621u: goto L_005d3621; case 0x5d363du: goto L_005d363d; case 0x5d3659u: goto L_005d3659; case 0x5d3675u: goto L_005d3675; case 0x5d3691u: goto L_005d3691; case 0x5d36adu: goto L_005d36ad; case 0x5d36c9u: goto L_005d36c9; case 0x5d36e5u: goto L_005d36e5; case 0x5d3701u: goto L_005d3701; case 0x5d371du: goto L_005d371d; case 0x5d3739u: goto L_005d3739; case 0x5d3755u: goto L_005d3755; case 0x5d3771u: goto L_005d3771; case 0x5d378du: goto L_005d378d; case 0x5d37a9u: goto L_005d37a9; case 0x5d37c5u: goto L_005d37c5; case 0x5d37e1u: goto L_005d37e1; case 0x5d37fdu: goto L_005d37fd; case 0x5d3819u: goto L_005d3819; case 0x5d3835u: goto L_005d3835; case 0x5d3851u: goto L_005d3851; case 0x5d386du: goto L_005d386d; case 0x5d3889u: goto L_005d3889; case 0x5d38a5u: goto L_005d38a5; case 0x5d38c1u: goto L_005d38c1; case 0x5d38ddu: goto L_005d38dd; case 0x5d38f9u: goto L_005d38f9; case 0x5d3912u: goto L_005d3912; case 0x5d392bu: goto L_005d392b; case 0x5d3944u: goto L_005d3944; case 0x5d395du: goto L_005d395d; case 0x5d3976u: goto L_005d3976; default: UNSUP(0x005d3505, "jump table entry is not a known target"); } }
L_005d350c:; BB(0x005d350c);
    /* 005d350c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d350e: push 0x30f728 */ { u32 v = 0x30f728u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3513: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3516: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3518: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d351b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d351e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3520u); call_ind(t); }
    /* 005d3520: jmp 0x5d398d */ goto L_005d398d;
L_005d3525:; BB(0x005d3525);
    /* 005d3525: push 0x30ef68 */ { u32 v = 0x30ef68u; r_esp -= 4; W32(r_esp, v); }
    /* 005d352a: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d352f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3532: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3534: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3537: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d353a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d353cu); call_ind(t); }
    /* 005d353c: jmp 0x5d398d */ goto L_005d398d;
L_005d3541:; BB(0x005d3541);
    /* 005d3541: push 0x30ef6e */ { u32 v = 0x30ef6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3546: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d354b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d354e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3550: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3553: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3556: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3558u); call_ind(t); }
    /* 005d3558: jmp 0x5d398d */ goto L_005d398d;
L_005d355d:; BB(0x005d355d);
    /* 005d355d: push 0x30ef6a */ { u32 v = 0x30ef6au; r_esp -= 4; W32(r_esp, v); }
    /* 005d3562: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3567: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d356a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d356c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d356f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3572: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3574u); call_ind(t); }
    /* 005d3574: jmp 0x5d398d */ goto L_005d398d;
L_005d3579:; BB(0x005d3579);
    /* 005d3579: push 0x30ef69 */ { u32 v = 0x30ef69u; r_esp -= 4; W32(r_esp, v); }
    /* 005d357e: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3583: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3586: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3588: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d358b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d358e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3590u); call_ind(t); }
    /* 005d3590: jmp 0x5d398d */ goto L_005d398d;
L_005d3595:; BB(0x005d3595);
    /* 005d3595: push 0x30ef6c */ { u32 v = 0x30ef6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d359a: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d359f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35a2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d35a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35a7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d35aa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d35acu); call_ind(t); }
    /* 005d35ac: jmp 0x5d398d */ goto L_005d398d;
L_005d35b1:; BB(0x005d35b1);
    /* 005d35b1: push 0x30fef8 */ { u32 v = 0x30fef8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d35b6: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d35bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35be: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d35c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35c3: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d35c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d35c8u); call_ind(t); }
    /* 005d35c8: jmp 0x5d398d */ goto L_005d398d;
L_005d35cd:; BB(0x005d35cd);
    /* 005d35cd: push 0x30fb10 */ { u32 v = 0x30fb10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d35d2: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d35d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d35dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35df: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d35e2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d35e4u); call_ind(t); }
    /* 005d35e4: jmp 0x5d398d */ goto L_005d398d;
L_005d35e9:; BB(0x005d35e9);
    /* 005d35e9: push 0x30fef8 */ { u32 v = 0x30fef8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d35ee: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d35f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35f6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d35f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d35fb: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d35fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3600u); call_ind(t); }
    /* 005d3600: jmp 0x5d398d */ goto L_005d398d;
L_005d3605:; BB(0x005d3605);
    /* 005d3605: push 0x30fb10 */ { u32 v = 0x30fb10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d360a: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d360f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3612: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3614: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3617: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d361a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d361cu); call_ind(t); }
    /* 005d361c: jmp 0x5d398d */ goto L_005d398d;
L_005d3621:; BB(0x005d3621);
    /* 005d3621: push 0x30fef8 */ { u32 v = 0x30fef8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3626: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d362b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d362e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3630: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3633: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3636: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3638u); call_ind(t); }
    /* 005d3638: jmp 0x5d398d */ goto L_005d398d;
L_005d363d:; BB(0x005d363d);
    /* 005d363d: push 0x30fb10 */ { u32 v = 0x30fb10u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3642: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3647: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d364a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d364c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d364f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3652: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3654u); call_ind(t); }
    /* 005d3654: jmp 0x5d398d */ goto L_005d398d;
L_005d3659:; BB(0x005d3659);
    /* 005d3659: push 0x30fef8 */ { u32 v = 0x30fef8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d365e: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3663: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3666: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3668: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d366b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d366e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3670u); call_ind(t); }
    /* 005d3670: jmp 0x5d398d */ goto L_005d398d;
L_005d3675:; BB(0x005d3675);
    /* 005d3675: push 0x30ef6a */ { u32 v = 0x30ef6au; r_esp -= 4; W32(r_esp, v); }
    /* 005d367a: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d367f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3682: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3684: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3687: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d368a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d368cu); call_ind(t); }
    /* 005d368c: jmp 0x5d398d */ goto L_005d398d;
L_005d3691:; BB(0x005d3691);
    /* 005d3691: push 0x30ef6d */ { u32 v = 0x30ef6du; r_esp -= 4; W32(r_esp, v); }
    /* 005d3696: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d369b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d369e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d36a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d36a3: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d36a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d36a8u); call_ind(t); }
    /* 005d36a8: jmp 0x5d398d */ goto L_005d398d;
L_005d36ad:; BB(0x005d36ad);
    /* 005d36ad: push 0x30ef6f */ { u32 v = 0x30ef6fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d36b2: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d36b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d36ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d36bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d36bf: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d36c2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d36c4u); call_ind(t); }
    /* 005d36c4: jmp 0x5d398d */ goto L_005d398d;
L_005d36c9:; BB(0x005d36c9);
    /* 005d36c9: push 0x30ef71 */ { u32 v = 0x30ef71u; r_esp -= 4; W32(r_esp, v); }
    /* 005d36ce: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d36d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d36d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d36d8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d36db: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d36de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d36e0u); call_ind(t); }
    /* 005d36e0: jmp 0x5d398d */ goto L_005d398d;
L_005d36e5:; BB(0x005d36e5);
    /* 005d36e5: push 0x30ef70 */ { u32 v = 0x30ef70u; r_esp -= 4; W32(r_esp, v); }
    /* 005d36ea: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d36ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d36f2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d36f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d36f7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d36fa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d36fcu); call_ind(t); }
    /* 005d36fc: jmp 0x5d398d */ goto L_005d398d;
L_005d3701:; BB(0x005d3701);
    /* 005d3701: push 0x30ef69 */ { u32 v = 0x30ef69u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3706: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d370b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d370e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3710: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3713: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3716: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3718u); call_ind(t); }
    /* 005d3718: jmp 0x5d398d */ goto L_005d398d;
L_005d371d:; BB(0x005d371d);
    /* 005d371d: push 0x30ef68 */ { u32 v = 0x30ef68u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3722: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3727: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d372a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d372c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d372f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3732: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3734u); call_ind(t); }
    /* 005d3734: jmp 0x5d398d */ goto L_005d398d;
L_005d3739:; BB(0x005d3739);
    /* 005d3739: push 0x30ef6b */ { u32 v = 0x30ef6bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d373e: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3743: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3746: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3748: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d374b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d374e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3750u); call_ind(t); }
    /* 005d3750: jmp 0x5d398d */ goto L_005d398d;
L_005d3755:; BB(0x005d3755);
    /* 005d3755: push 0x30ef6e */ { u32 v = 0x30ef6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d375a: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d375f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3762: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3764: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3767: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d376a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d376cu); call_ind(t); }
    /* 005d376c: jmp 0x5d398d */ goto L_005d398d;
L_005d3771:; BB(0x005d3771);
    /* 005d3771: push 0x30ef6c */ { u32 v = 0x30ef6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3776: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d377b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d377e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3780: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3783: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3786: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3788u); call_ind(t); }
    /* 005d3788: jmp 0x5d398d */ goto L_005d398d;
L_005d378d:; BB(0x005d378d);
    /* 005d378d: push 0x30ef5f */ { u32 v = 0x30ef5fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3792: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3797: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d379a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d379c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d379f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d37a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d37a4u); call_ind(t); }
    /* 005d37a4: jmp 0x5d398d */ goto L_005d398d;
L_005d37a9:; BB(0x005d37a9);
    /* 005d37a9: push 0x30ef60 */ { u32 v = 0x30ef60u; r_esp -= 4; W32(r_esp, v); }
    /* 005d37ae: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d37b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d37b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37bb: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d37be: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d37c0u); call_ind(t); }
    /* 005d37c0: jmp 0x5d398d */ goto L_005d398d;
L_005d37c5:; BB(0x005d37c5);
    /* 005d37c5: push 0x30ef61 */ { u32 v = 0x30ef61u; r_esp -= 4; W32(r_esp, v); }
    /* 005d37ca: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d37cf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37d2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d37d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37d7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d37da: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d37dcu); call_ind(t); }
    /* 005d37dc: jmp 0x5d398d */ goto L_005d398d;
L_005d37e1:; BB(0x005d37e1);
    /* 005d37e1: push 0x30ef62 */ { u32 v = 0x30ef62u; r_esp -= 4; W32(r_esp, v); }
    /* 005d37e6: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d37eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d37f0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d37f3: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d37f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d37f8u); call_ind(t); }
    /* 005d37f8: jmp 0x5d398d */ goto L_005d398d;
L_005d37fd:; BB(0x005d37fd);
    /* 005d37fd: push 0x30ef63 */ { u32 v = 0x30ef63u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3802: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3807: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d380a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d380c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d380f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3812: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3814u); call_ind(t); }
    /* 005d3814: jmp 0x5d398d */ goto L_005d398d;
L_005d3819:; BB(0x005d3819);
    /* 005d3819: push 0x30ef60 */ { u32 v = 0x30ef60u; r_esp -= 4; W32(r_esp, v); }
    /* 005d381e: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3823: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3826: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3828: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d382b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d382e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3830u); call_ind(t); }
    /* 005d3830: jmp 0x5d398d */ goto L_005d398d;
L_005d3835:; BB(0x005d3835);
    /* 005d3835: push 0x30ef65 */ { u32 v = 0x30ef65u; r_esp -= 4; W32(r_esp, v); }
    /* 005d383a: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d383f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3842: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3844: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3847: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d384a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d384cu); call_ind(t); }
    /* 005d384c: jmp 0x5d398d */ goto L_005d398d;
L_005d3851:; BB(0x005d3851);
    /* 005d3851: push 0x30ef66 */ { u32 v = 0x30ef66u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3856: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d385b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d385e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3860: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3863: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3866: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3868u); call_ind(t); }
    /* 005d3868: jmp 0x5d398d */ goto L_005d398d;
L_005d386d:; BB(0x005d386d);
    /* 005d386d: push 0x30ef67 */ { u32 v = 0x30ef67u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3872: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3877: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d387a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d387c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d387f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3882: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3884u); call_ind(t); }
    /* 005d3884: jmp 0x5d398d */ goto L_005d398d;
L_005d3889:; BB(0x005d3889);
    /* 005d3889: push 0x30ef6c */ { u32 v = 0x30ef6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d388e: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3893: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3896: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3898: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d389b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d389e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d38a0u); call_ind(t); }
    /* 005d38a0: jmp 0x5d398d */ goto L_005d398d;
L_005d38a5:; BB(0x005d38a5);
    /* 005d38a5: push 0x30ef6e */ { u32 v = 0x30ef6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d38aa: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d38af: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d38b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d38b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d38b7: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d38ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d38bcu); call_ind(t); }
    /* 005d38bc: jmp 0x5d398d */ goto L_005d398d;
L_005d38c1:; BB(0x005d38c1);
    /* 005d38c1: push 0x30ef6f */ { u32 v = 0x30ef6fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d38c6: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d38cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d38ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d38d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d38d3: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d38d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d38d8u); call_ind(t); }
    /* 005d38d8: jmp 0x5d398d */ goto L_005d398d;
L_005d38dd:; BB(0x005d38dd);
    /* 005d38dd: push 0x30ef71 */ { u32 v = 0x30ef71u; r_esp -= 4; W32(r_esp, v); }
    /* 005d38e2: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d38e7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d38ea: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d38ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d38ef: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d38f2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d38f4u); call_ind(t); }
    /* 005d38f4: jmp 0x5d398d */ goto L_005d398d;
L_005d38f9:; BB(0x005d38f9);
    /* 005d38f9: push 0x30ef6c */ { u32 v = 0x30ef6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d38fe: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3903: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3906: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3908: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d390b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d390e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3910u); call_ind(t); }
    /* 005d3910: jmp 0x5d398d */ goto L_005d398d;
L_005d3912:; BB(0x005d3912);
    /* 005d3912: push 0x30ef6e */ { u32 v = 0x30ef6eu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3917: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d391c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d391f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3921: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3924: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3927: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3929u); call_ind(t); }
    /* 005d3929: jmp 0x5d398d */ goto L_005d398d;
L_005d392b:; BB(0x005d392b);
    /* 005d392b: push 0x30ef6d */ { u32 v = 0x30ef6du; r_esp -= 4; W32(r_esp, v); }
    /* 005d3930: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3935: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3938: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d393a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d393d: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3940: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3942u); call_ind(t); }
    /* 005d3942: jmp 0x5d398d */ goto L_005d398d;
L_005d3944:; BB(0x005d3944);
    /* 005d3944: push 0x30ef6a */ { u32 v = 0x30ef6au; r_esp -= 4; W32(r_esp, v); }
    /* 005d3949: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d394e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3951: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3953: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3956: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3959: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d395bu); call_ind(t); }
    /* 005d395b: jmp 0x5d398d */ goto L_005d398d;
L_005d395d:; BB(0x005d395d);
    /* 005d395d: push 0x30ef6b */ { u32 v = 0x30ef6bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3962: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3967: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d396a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d396c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d396f: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3972: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3974u); call_ind(t); }
    /* 005d3974: jmp 0x5d398d */ goto L_005d398d;
L_005d3976:; BB(0x005d3976);
    /* 005d3976: push 0x30ef68 */ { u32 v = 0x30ef68u; r_esp -= 4; W32(r_esp, v); }
    /* 005d397b: push 0x30ef7f */ { u32 v = 0x30ef7fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3980: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3983: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3985: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3988: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d398b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d398du); call_ind(t); }
L_005d398d:; BB(0x005d398d);
    /* 005d398d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d398f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3990: ret 4 */ FN_RET(0x005d34e0); r_esp += 8; return;
}

void f_005d3a40(void) /* sub_5D3A40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3a40);
    /* 005d3a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a41: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3a43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3a46: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005d3a49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d3a4c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 005d3a4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d3a52: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3a55: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005d3a58: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005d3a5c: ja 0x5d3af0 */ if ((!fC&&!fZ)) goto L_005d3af0;
L_005d3a62:; BB(0x005d3a62);
    /* 005d3a62: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005d3a65: jmp dword ptr [edx*4 + 0x5d3af8] */ { u32 t = R32((u32)(r_edx*4+0x5d3af8u)); switch (t) { case 0x5d3a6cu: goto L_005d3a6c; case 0x5d3a82u: goto L_005d3a82; case 0x5d3a9bu: goto L_005d3a9b; case 0x5d3ab4u: goto L_005d3ab4; case 0x5d3acdu: goto L_005d3acd; case 0x5d3ae6u: goto L_005d3ae6; default: UNSUP(0x005d3a65, "jump table entry is not a known target"); } }
L_005d3a6c:; BB(0x005d3a6c);
    /* 005d3a6c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a6e: push 0x30e789 */ { u32 v = 0x30e789u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3a76: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d3a78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3a7b: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3a7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3a80u); call_ind(t); }
    /* 005d3a80: jmp 0x5d3af0 */ goto L_005d3af0;
L_005d3a82:; BB(0x005d3a82);
    /* 005d3a82: push 0x30e78a */ { u32 v = 0x30e78au; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a87: push 0x30e792 */ { u32 v = 0x30e792u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3a8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3a8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3a91: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3a94: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3a97: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3a99u); call_ind(t); }
    /* 005d3a99: jmp 0x5d3af0 */ goto L_005d3af0;
L_005d3a9b:; BB(0x005d3a9b);
    /* 005d3a9b: push 0x30e78d */ { u32 v = 0x30e78du; r_esp -= 4; W32(r_esp, v); }
    /* 005d3aa0: push 0x30e792 */ { u32 v = 0x30e792u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3aa5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3aa8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3aaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3aad: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3ab0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3ab2u); call_ind(t); }
    /* 005d3ab2: jmp 0x5d3af0 */ goto L_005d3af0;
L_005d3ab4:; BB(0x005d3ab4);
    /* 005d3ab4: push 0x30e78f */ { u32 v = 0x30e78fu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ab9: push 0x30e792 */ { u32 v = 0x30e792u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3abe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3ac1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3ac3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3ac6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3ac9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3acbu); call_ind(t); }
    /* 005d3acb: jmp 0x5d3af0 */ goto L_005d3af0;
L_005d3acd:; BB(0x005d3acd);
    /* 005d3acd: push 0x30e78b */ { u32 v = 0x30e78bu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ad2: push 0x30e792 */ { u32 v = 0x30e792u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ad7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3ada: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3adc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3adf: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 005d3ae2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3ae4u); call_ind(t); }
    /* 005d3ae4: jmp 0x5d3af0 */ goto L_005d3af0;
L_005d3ae6:; BB(0x005d3ae6);
    /* 005d3ae6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ae8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005d3aeb: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d3af0u); f_005d16b0();
L_005d3af0:; BB(0x005d3af0);
    /* 005d3af0: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3af3: ret 4 */ FN_RET(0x005d3a40); r_esp += 8; return;
}

void f_005d3b10(void) /* sub_5D3B10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3b10);
    /* 005d3b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b11: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3b13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b15: push 0x6a8eba */ { u32 v = 0x6a8ebau; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d3b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b21: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3b27: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d3b2c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d3b2e: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005d3b31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3b33: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d3b36: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d3b3c: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 005d3b42: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005d3b49: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005d3b50: mov dword ptr [ebp - 0x2c], 0xb */ W32((u32)(r_ebp+0xffffffd4u), 0xbu);
    /* 005d3b57: mov dword ptr [ebp - 0x28], 2 */ W32((u32)(r_ebp+0xffffffd8u), 0x2u);
    /* 005d3b5e: mov dword ptr [ebp - 0x24], 0x10 */ W32((u32)(r_ebp+0xffffffdcu), 0x10u);
    /* 005d3b65: mov dword ptr [ebp - 0x20], 0xb */ W32((u32)(r_ebp+0xffffffe0u), 0xbu);
    /* 005d3b6c: mov dword ptr [ebp - 0x1c], 0xa */ W32((u32)(r_ebp+0xffffffe4u), 0xau);
    /* 005d3b73: mov dword ptr [ebp - 0x18], 7 */ W32((u32)(r_ebp+0xffffffe8u), 0x7u);
    /* 005d3b7a: mov dword ptr [ebp - 0x14], 0x11 */ W32((u32)(r_ebp+0xffffffecu), 0x11u);
    /* 005d3b81: mov dword ptr [ebp - 0x10], 0x18 */ W32((u32)(r_ebp+0xfffffff0u), 0x18u);
    /* 005d3b88: mov dword ptr [ebp - 0x54], 0xffffffff */ W32((u32)(r_ebp+0xffffffacu), 0xffffffffu);
    /* 005d3b8f: mov dword ptr [ebp - 0x50], 0x30e878 */ W32((u32)(r_ebp+0xffffffb0u), 0x30e878u);
    /* 005d3b96: mov dword ptr [ebp - 0x4c], 0x30e864 */ W32((u32)(r_ebp+0xffffffb4u), 0x30e864u);
    /* 005d3b9d: mov dword ptr [ebp - 0x48], 0x30e83c */ W32((u32)(r_ebp+0xffffffb8u), 0x30e83cu);
    /* 005d3ba4: mov dword ptr [ebp - 0x44], 0x30e850 */ W32((u32)(r_ebp+0xffffffbcu), 0x30e850u);
    /* 005d3bab: mov dword ptr [ebp - 0x40], 0x30e88c */ W32((u32)(r_ebp+0xffffffc0u), 0x30e88cu);
    /* 005d3bb2: mov dword ptr [ebp - 0x3c], 0x30e86e */ W32((u32)(r_ebp+0xffffffc4u), 0x30e86eu);
    /* 005d3bb9: mov dword ptr [ebp - 0x38], 0x30e828 */ W32((u32)(r_ebp+0xffffffc8u), 0x30e828u);
    /* 005d3bc0: mov dword ptr [ebp - 0x34], 0x30e80a */ W32((u32)(r_ebp+0xffffffccu), 0x30e80au);
    /* 005d3bc7: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005d3bce: jmp 0x5d3bd9 */ goto L_005d3bd9;
L_005d3bd0:; BB(0x005d3bd0);
    /* 005d3bd0: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3bd3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3bd6: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_005d3bd9:; BB(0x005d3bd9);
    /* 005d3bd9: cmp dword ptr [ebp - 0x58], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3bdd: jge 0x5d3c63 */ if ((fS==fO)) goto L_005d3c63;
L_005d3be3:; BB(0x005d3be3);
    /* 005d3be3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3be6: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3be9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3bea: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d3bf0: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d3bf3: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3bf8u); f_005fb2b0();
    /* 005d3bf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3bfa: je 0x5d3c5e */ if (fZ) goto L_005d3c5e;
L_005d3bfc:; BB(0x005d3bfc);
    /* 005d3bfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3bfe: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3c01: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c05: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d3c0b: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d3c0e: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3c13u); f_005fb2b0();
    /* 005d3c13: mov ecx, eax */ r_ecx = r_eax;
    /* 005d3c15: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d3c1au); f_005f5d50();
    /* 005d3c1a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3c1d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d3c20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c21: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d3c26: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d3c29: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3c2eu); f_005fb2b0();
    /* 005d3c2e: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 005d3c34: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d3c3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3c3c: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 005d3c42: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d3c45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3c47u); call_ind(t); }
    /* 005d3c47: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3c4a: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3c4d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c50: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d3c56: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d3c59: call 0x5fbc80 */ r_esp -= 4; W32(r_esp, 0x5d3c5eu); f_005fbc80();
L_005d3c5e:; BB(0x005d3c5e);
    /* 005d3c5e: jmp 0x5d3bd0 */ goto L_005d3bd0;
L_005d3c63:; BB(0x005d3c63);
    /* 005d3c63: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005d3c6a: jmp 0x5d3c75 */ goto L_005d3c75;
L_005d3c6c:; BB(0x005d3c6c);
    /* 005d3c6c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3c6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3c72: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_005d3c75:; BB(0x005d3c75);
    /* 005d3c75: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005d3c7b: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005d3c81: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3c84: cmp eax, dword ptr [ebp + edx*4 - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3c88: jge 0x5d3d4c */ if ((fS==fO)) goto L_005d3d4c;
L_005d3c8e:; BB(0x005d3c8e);
    /* 005d3c8e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3c93: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d3c98u); f_00686d82();
    /* 005d3c98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3c9b: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 005d3ca1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d3ca8: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3caf: je 0x5d3cc4 */ if (fZ) goto L_005d3cc4;
L_005d3cb1:; BB(0x005d3cb1);
    /* 005d3cb1: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 005d3cb7: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x5d3cbcu); f_005f5bf0();
    /* 005d3cbc: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 005d3cc2: jmp 0x5d3cce */ goto L_005d3cce;
L_005d3cc4:; BB(0x005d3cc4);
    /* 005d3cc4: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_005d3cce:; BB(0x005d3cce);
    /* 005d3cce: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 005d3cd4: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005d3cd7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d3cde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ce0: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ce5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ce7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ce9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ceb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ced: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 005d3cf3: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 005d3cf9: mov ecx, dword ptr [ebp + eax*4 - 0x54] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffacu));
    /* 005d3cfd: add ecx, dword ptr [ebp - 0x58] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffa8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3d00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d01: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3d04: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d3d07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d08: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 005d3d0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d0c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d3d12: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d3d15: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x5d3d1au); f_005f9ce0();
    /* 005d3d1a: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3d1d: add edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d3d20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d21: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d3d26: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d3d29: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3d2eu); f_005fb2b0();
    /* 005d3d2e: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 005d3d34: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005d3d3a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3d3c: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005d3d42: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005d3d45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3d47u); call_ind(t); }
    /* 005d3d47: jmp 0x5d3c6c */ goto L_005d3c6c;
L_005d3d4c:; BB(0x005d3d4c);
    /* 005d3d4c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005d3d52: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005d3d58: mov eax, dword ptr [ebp + edx*4 - 0x30] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffffd0u));
    /* 005d3d5c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005d3d5d: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005d3d62: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005d3d62, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005d3d62, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005d3d64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d65: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3d67: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5d3d6cu); f_0062fc30();
    /* 005d3d6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3d6f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005d3d72: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005d3d79: jmp 0x5d3d84 */ goto L_005d3d84;
L_005d3d7b:; BB(0x005d3d7b);
    /* 005d3d7b: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3d7e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d3d81: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
L_005d3d84:; BB(0x005d3d84);
    /* 005d3d84: cmp dword ptr [ebp - 0x58], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3d88: jge 0x5d3d94 */ if ((fS==fO)) goto L_005d3d94;
L_005d3d8a:; BB(0x005d3d8a);
    /* 005d3d8a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3d8d: mov byte ptr [ebp + eax - 0x7c], 0 */ W8((u32)(r_ebp+r_eax+0xffffff84u), 0x0u);
    /* 005d3d92: jmp 0x5d3d7b */ goto L_005d3d7b;
L_005d3d94:; BB(0x005d3d94);
    /* 005d3d94: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005d3d9b: jmp 0x5d3da6 */ goto L_005d3da6;
L_005d3d9d:; BB(0x005d3d9d);
    /* 005d3d9d: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3da0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3da3: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
L_005d3da6:; BB(0x005d3da6);
    /* 005d3da6: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3da9: cmp edx, dword ptr [ebp - 0x5c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffa4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3dac: jge 0x5d3dce */ if ((fS==fO)) goto L_005d3dce;
L_005d3dae:; BB(0x005d3dae);
    /* 005d3dae: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 005d3db4: mov ecx, dword ptr [eax + 0x80] */ r_ecx = R32((u32)(r_eax+0x80u));
    /* 005d3dba: mov edx, dword ptr [ebp + ecx*4 - 0x30] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffd0u));
    /* 005d3dbe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3dbf: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5d3dc4u); f_0062fbf0();
    /* 005d3dc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3dc7: mov byte ptr [ebp + eax - 0x7c], 1 */ W8((u32)(r_ebp+r_eax+0xffffff84u), 0x1u);
    /* 005d3dcc: jmp 0x5d3d9d */ goto L_005d3d9d;
L_005d3dce:; BB(0x005d3dce);
    /* 005d3dce: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005d3dd5: jmp 0x5d3de0 */ goto L_005d3de0;
L_005d3dd7:; BB(0x005d3dd7);
    /* 005d3dd7: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3dda: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3ddd: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
L_005d3de0:; BB(0x005d3de0);
    /* 005d3de0: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 005d3de6: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 005d3dec: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3def: cmp eax, dword ptr [ebp + edx*4 - 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d3df3: jge 0x5d3f0d */ if ((fS==fO)) goto L_005d3f0d;
L_005d3df9:; BB(0x005d3df9);
    /* 005d3df9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3dfc: movzx edx, byte ptr [ebp + ecx - 0x7c] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff84u));
    /* 005d3e01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3e03: je 0x5d3f08 */ if (fZ) goto L_005d3f08;
L_005d3e09:; BB(0x005d3e09);
    /* 005d3e09: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3e0c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3e0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e10: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d3e16: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d3e19: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3e1eu); f_005fb2b0();
    /* 005d3e1e: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 005d3e24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e26: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 005d3e2c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d3e2e: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 005d3e34: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 005d3e3a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d3e3cu); call_ind(t); }
    /* 005d3e3c: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3e3f: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3e42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e43: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d3e49: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d3e4c: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3e51u); f_005fb2b0();
    /* 005d3e51: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005d3e57: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005d3e5d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005d3e5f: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005d3e65: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 005d3e68: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5d3e6au); call_ind(t); }
    /* 005d3e6a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e6c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e6e: call 0x62fc30 */ r_esp -= 4; W32(r_esp, 0x5d3e73u); f_0062fc30();
    /* 005d3e73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3e76: mov esi, eax */ r_esi = r_eax;
    /* 005d3e78: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3e7b: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d3e7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e7f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005d3e85: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 005d3e88: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3e8du); f_005fb2b0();
    /* 005d3e8d: mov dword ptr [eax + 0x178], esi */ W32((u32)(r_eax+0x178u), r_esi);
    /* 005d3e93: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3e95: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d3e9au); f_00686d82();
    /* 005d3e9a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3e9d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 005d3ea3: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d3eaa: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3eb1: je 0x5d3ec8 */ if (fZ) goto L_005d3ec8;
L_005d3eb3:; BB(0x005d3eb3);
    /* 005d3eb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3eb5: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005d3ebb: call 0x6010a0 */ r_esp -= 4; W32(r_esp, 0x5d3ec0u); f_006010a0();
    /* 005d3ec0: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005d3ec6: jmp 0x5d3ed2 */ goto L_005d3ed2;
L_005d3ec8:; BB(0x005d3ec8);
    /* 005d3ec8: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005d3ed2:; BB(0x005d3ed2);
    /* 005d3ed2: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005d3ed8: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 005d3ede: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d3ee5: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 005d3eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3eec: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005d3eef: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3ef2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ef3: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d3ef9: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d3efc: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x5d3f01u); f_005fb2b0();
    /* 005d3f01: mov ecx, eax */ r_ecx = r_eax;
    /* 005d3f03: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5d3f08u); f_005f5d50();
L_005d3f08:; BB(0x005d3f08);
    /* 005d3f08: jmp 0x5d3dd7 */ goto L_005d3dd7;
L_005d3f0d:; BB(0x005d3f0d);
    /* 005d3f0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d3f10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d3f17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d3f18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d3f19: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 005d3f1c: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d3f1e: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d3f23u); f_00686d72();
    /* 005d3f23: mov esp, ebp */ r_esp = r_ebp;
    /* 005d3f25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d3f26: ret  */ FN_RET(0x005d3b10); r_esp += 4; return;
}

void f_005d3f30(void) /* sub_5D3F30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005d3f30);
    /* 005d3f30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f31: mov ebp, esp */ r_ebp = r_esp;
    /* 005d3f33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f35: push 0x6a8ef0 */ { u32 v = 0x6a8ef0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d3f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f41: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d3f47: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005d3f4c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d3f4e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d3f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f52: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005d3f55: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005d3f5b: mov dword ptr [ebp - 0xbc], ecx */ W32((u32)(r_ebp+0xffffff44u), r_ecx);
    /* 005d3f61: mov dword ptr [ebp - 0xb0], 0xffffffee */ W32((u32)(r_ebp+0xffffff50u), 0xffffffeeu);
    /* 005d3f6b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d3f6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f6f: lea ecx, [ebp - 0xa4] */ r_ecx = (u32)(r_ebp+0xffffff5cu);
    /* 005d3f75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3f76: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d3f7c: call 0x5d4280 */ r_esp -= 4; W32(r_esp, 0x5d3f81u); f_005d4280();
    /* 005d3f81: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d3f87: cmp dword ptr [edx + 0x88], 0 */ {  u32 a = R32((u32)(r_edx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3f8e: je 0x5d3fe5 */ if (fZ) goto L_005d3fe5;
L_005d3f90:; BB(0x005d3f90);
    /* 005d3f90: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d3f96: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d3f9c: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x5d3fa1u); f_005f54a0();
    /* 005d3fa1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005d3fa4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3fa6: je 0x5d3fe5 */ if (fZ) goto L_005d3fe5;
L_005d3fa8:; BB(0x005d3fa8);
    /* 005d3fa8: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 005d3fae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d3faf: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d3fb5: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d3fbb: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d3fc1: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005d3fc7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d3fc9: mov ecx, eax */ r_ecx = r_eax;
    /* 005d3fcb: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 005d3fd1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d3fd3u); call_ind(t); }
    /* 005d3fd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d3fd4: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x5d3fd9u); f_00686ec0();
    /* 005d3fd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d3fdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3fde: jne 0x5d3fe5 */ if (!fZ) goto L_005d3fe5;
L_005d3fe0:; BB(0x005d3fe0);
    /* 005d3fe0: jmp 0x5d41dd */ goto L_005d41dd;
L_005d3fe5:; BB(0x005d3fe5);
    /* 005d3fe5: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d3feb: cmp dword ptr [ecx + 0x88], 0 */ {  u32 a = R32((u32)(r_ecx+0x88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d3ff2: jne 0x5d4059 */ if (!fZ) goto L_005d4059;
L_005d3ff4:; BB(0x005d3ff4);
    /* 005d3ff4: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d3ff9: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5d3ffeu); f_00686d82();
    /* 005d3ffe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d4001: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 005d4007: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d400e: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d4015: je 0x5d402a */ if (fZ) goto L_005d402a;
L_005d4017:; BB(0x005d4017);
    /* 005d4017: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 005d401d: call 0x5cd360 */ r_esp -= 4; W32(r_esp, 0x5d4022u); f_005cd360();
    /* 005d4022: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005d4028: jmp 0x5d4034 */ goto L_005d4034;
L_005d402a:; BB(0x005d402a);
    /* 005d402a: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005d4034:; BB(0x005d4034);
    /* 005d4034: mov edx, dword ptr [ebp - 0xc0] */ r_edx = R32((u32)(r_ebp+0xffffff40u));
    /* 005d403a: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 005d4040: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d4047: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d404d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005d4053: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
L_005d4059:; BB(0x005d4059);
    /* 005d4059: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d405b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005d405d: push 0x1388 */ { u32 v = 0x1388u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4062: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4064: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d4066: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005d4068: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005d406a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d406c: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 005d4072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4073: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d4079: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d407f: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x5d4084u); f_005ec8f0();
    /* 005d4084: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d408a: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005d4090: call 0x5eef60 */ r_esp -= 4; W32(r_esp, 0x5d4095u); f_005eef60();
    /* 005d4095: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d4098: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005d409e: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 005d40a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d40a5: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d40ab: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d40b1: call 0x5ecc60 */ r_esp -= 4; W32(r_esp, 0x5d40b6u); f_005ecc60();
    /* 005d40b6: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d40bc: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005d40c2: call 0x5ef440 */ r_esp -= 4; W32(r_esp, 0x5d40c7u); f_005ef440();
    /* 005d40c7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005d40ca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d40cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d40ce: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d40d4: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d40da: call 0x5eccb0 */ r_esp -= 4; W32(r_esp, 0x5d40dfu); f_005eccb0();
    /* 005d40df: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d40e4: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d40e9: push 0xe6 */ { u32 v = 0xe6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d40ee: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d40f4: mov ecx, dword ptr [ecx + 0x88] */ r_ecx = R32((u32)(r_ecx+0x88u));
    /* 005d40fa: call 0x5ee8c0 */ r_esp -= 4; W32(r_esp, 0x5d40ffu); f_005ee8c0();
    /* 005d40ff: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005d4105: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005d4108: call 0x5f8930 */ r_esp -= 4; W32(r_esp, 0x5d410du); f_005f8930();
    /* 005d410d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d4110: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 005d4115: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005d4118: call 0x5f8950 */ r_esp -= 4; W32(r_esp, 0x5d411du); f_005f8950();
    /* 005d411d: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005d4120: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005d4123: sub ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005d4126: add ecx, dword ptr [ebp - 0xb0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff50u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 005d412c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005d412f: jns 0x5d4138 */ if (!fS) goto L_005d4138;
L_005d4131:; BB(0x005d4131);
    /* 005d4131: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
L_005d4138:; BB(0x005d4138);
    /* 005d4138: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d413b: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d413e: cmp edx, 0x1e0 */ {  u32 a = r_edx; u32 b = 0x1e0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4144: jle 0x5d4151 */ if ((fZ||fS!=fO)) goto L_005d4151;
L_005d4146:; BB(0x005d4146);
    /* 005d4146: mov eax, 0x1e0 */ r_eax = 0x1e0u;
    /* 005d414b: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d414e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005d4151:; BB(0x005d4151);
    /* 005d4151: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d4154: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 005d415a: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d4161: jge 0x5d416d */ if ((fS==fO)) goto L_005d416d;
L_005d4163:; BB(0x005d4163);
    /* 005d4163: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005d416d:; BB(0x005d416d);
    /* 005d416d: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005d4173: add edx, dword ptr [ebp - 0xac] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff54u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005d4179: cmp edx, 0x280 */ {  u32 a = r_edx; u32 b = 0x280u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d417f: jle 0x5d4192 */ if ((fZ||fS!=fO)) goto L_005d4192;
L_005d4181:; BB(0x005d4181);
    /* 005d4181: mov eax, 0x280 */ r_eax = 0x280u;
    /* 005d4186: sub eax, dword ptr [ebp - 0xac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff54u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005d418c: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
L_005d4192:; BB(0x005d4192);
    /* 005d4192: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d4195: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d4196: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 005d419c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d419d: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d41a3: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d41a9: mov edx, dword ptr [ebp - 0xbc] */ r_edx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d41af: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 005d41b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005d41b7: mov ecx, eax */ r_ecx = r_eax;
    /* 005d41b9: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005d41bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d41beu); call_ind(t); }
    /* 005d41be: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 005d41c4: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 005d41ca: mov eax, dword ptr [ebp - 0xbc] */ r_eax = R32((u32)(r_ebp+0xffffff44u));
    /* 005d41d0: mov ecx, dword ptr [eax + 0x88] */ r_ecx = R32((u32)(r_eax+0x88u));
    /* 005d41d6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005d41d8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005d41db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5d41ddu); call_ind(t); }
L_005d41dd:; BB(0x005d41dd);
    /* 005d41dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d41e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d41e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d41e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d41eb: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d41ed: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x5d41f2u); f_00686d72();
    /* 005d41f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005d41f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d41f5: ret 4 */ FN_RET(0x005d3f30); r_esp += 8; return;
}


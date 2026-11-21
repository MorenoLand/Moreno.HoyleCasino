#include "protos.h"

void f_00465760(void) /* DealDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00465760);
    /* 00465760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00465761: mov ebp, esp */ r_ebp = r_esp;
    /* 00465763: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00465764: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00465767: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00465769: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046576b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046576e: call 0x518900 */ r_esp -= 4; W32(r_esp, 0x465773u); f_00518900();
    /* 00465773: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00465776: mov dword ptr [eax], 0x6bac9c */ W32((u32)(r_eax), 0x6bac9cu);
    /* 0046577c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046577f: mov dword ptr [ecx + 0x1e0], 0 */ W32((u32)(r_ecx+0x1e0u), 0x0u);
    /* 00465789: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046578c: mov dword ptr [edx + 0x1e4], 0 */ W32((u32)(r_edx+0x1e4u), 0x0u);
    /* 00465796: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00465799: mov dword ptr [eax + 0x1e8], 0 */ W32((u32)(r_eax+0x1e8u), 0x0u);
    /* 004657a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004657a6: mov dword ptr [ecx + 0x1ec], 0 */ W32((u32)(r_ecx+0x1ecu), 0x0u);
    /* 004657b0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004657b3: mov dword ptr [edx + 0x1f0], 0 */ W32((u32)(r_edx+0x1f0u), 0x0u);
    /* 004657bd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004657c0: mov dword ptr [eax + 0x1f4], 0 */ W32((u32)(r_eax+0x1f4u), 0x0u);
    /* 004657ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004657cd: mov dword ptr [ecx + 0x1f8], 0 */ W32((u32)(r_ecx+0x1f8u), 0x0u);
    /* 004657d7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004657da: mov dword ptr [edx + 0x1fc], 0 */ W32((u32)(r_edx+0x1fcu), 0x0u);
    /* 004657e4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004657e7: mov esp, ebp */ r_esp = r_ebp;
    /* 004657e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004657ea: ret  */ FN_RET(0x00465760); r_esp += 4; return;
}

void f_004657f0(void) /* DealDialog::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004657f0);
    /* 004657f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004657f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004657f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004657f5: push 0x69f4b8 */ { u32 v = 0x69f4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004657fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00465800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00465801: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00465804: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00465809: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046580b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046580c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0046580f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00465815: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00465818: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046581b: mov dword ptr [eax], 0x6bac9c */ W32((u32)(r_eax), 0x6bac9cu);
    /* 00465821: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00465828: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046582b: cmp dword ptr [ecx + 0x1e0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465832: je 0x465866 */ if (fZ) goto L_00465866;
L_00465834:; BB(0x00465834);
    /* 00465834: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465837: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 0046583d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00465840: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00465843: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00465846: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046584a: je 0x46585f */ if (fZ) goto L_0046585f;
L_0046584c:; BB(0x0046584c);
    /* 0046584c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046584e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00465851: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00465853: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00465856: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00465858: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x46585au); call_ind(t); }
    /* 0046585a: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0046585d: jmp 0x465866 */ goto L_00465866;
L_0046585f:; BB(0x0046585f);
    /* 0046585f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00465866:; BB(0x00465866);
    /* 00465866: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465869: cmp dword ptr [eax + 0x1e4], 0 */ {  u32 a = R32((u32)(r_eax+0x1e4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465870: je 0x4658a4 */ if (fZ) goto L_004658a4;
L_00465872:; BB(0x00465872);
    /* 00465872: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465875: mov edx, dword ptr [ecx + 0x1e4] */ r_edx = R32((u32)(r_ecx+0x1e4u));
    /* 0046587b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0046587e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00465881: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00465884: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465888: je 0x46589d */ if (fZ) goto L_0046589d;
L_0046588a:; BB(0x0046588a);
    /* 0046588a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046588c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0046588f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00465891: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00465894: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00465896: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465898u); call_ind(t); }
    /* 00465898: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0046589b: jmp 0x4658a4 */ goto L_004658a4;
L_0046589d:; BB(0x0046589d);
    /* 0046589d: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_004658a4:; BB(0x004658a4);
    /* 004658a4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004658a7: cmp dword ptr [ecx + 0x1e8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1e8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004658ae: je 0x4658e2 */ if (fZ) goto L_004658e2;
L_004658b0:; BB(0x004658b0);
    /* 004658b0: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004658b3: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 004658b9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004658bc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004658bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004658c2: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004658c6: je 0x4658db */ if (fZ) goto L_004658db;
L_004658c8:; BB(0x004658c8);
    /* 004658c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004658ca: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004658cd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004658cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004658d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004658d4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4658d6u); call_ind(t); }
    /* 004658d6: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004658d9: jmp 0x4658e2 */ goto L_004658e2;
L_004658db:; BB(0x004658db);
    /* 004658db: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_004658e2:; BB(0x004658e2);
    /* 004658e2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004658e5: cmp dword ptr [eax + 0x1ec], 0 */ {  u32 a = R32((u32)(r_eax+0x1ecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004658ec: je 0x465920 */ if (fZ) goto L_00465920;
L_004658ee:; BB(0x004658ee);
    /* 004658ee: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004658f1: mov edx, dword ptr [ecx + 0x1ec] */ r_edx = R32((u32)(r_ecx+0x1ecu));
    /* 004658f7: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004658fa: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004658fd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00465900: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465904: je 0x465919 */ if (fZ) goto L_00465919;
L_00465906:; BB(0x00465906);
    /* 00465906: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00465908: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0046590b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0046590d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00465910: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00465912: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465914u); call_ind(t); }
    /* 00465914: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00465917: jmp 0x465920 */ goto L_00465920;
L_00465919:; BB(0x00465919);
    /* 00465919: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00465920:; BB(0x00465920);
    /* 00465920: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465923: cmp dword ptr [ecx + 0x1f0], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046592a: je 0x46595e */ if (fZ) goto L_0046595e;
L_0046592c:; BB(0x0046592c);
    /* 0046592c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046592f: mov eax, dword ptr [edx + 0x1f0] */ r_eax = R32((u32)(r_edx+0x1f0u));
    /* 00465935: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00465938: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0046593b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0046593e: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465942: je 0x465957 */ if (fZ) goto L_00465957;
L_00465944:; BB(0x00465944);
    /* 00465944: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00465946: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00465949: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046594b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0046594e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00465950: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x465952u); call_ind(t); }
    /* 00465952: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00465955: jmp 0x46595e */ goto L_0046595e;
L_00465957:; BB(0x00465957);
    /* 00465957: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0046595e:; BB(0x0046595e);
    /* 0046595e: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465961: cmp dword ptr [eax + 0x1f4], 0 */ {  u32 a = R32((u32)(r_eax+0x1f4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465968: je 0x46599c */ if (fZ) goto L_0046599c;
L_0046596a:; BB(0x0046596a);
    /* 0046596a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046596d: mov edx, dword ptr [ecx + 0x1f4] */ r_edx = R32((u32)(r_ecx+0x1f4u));
    /* 00465973: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00465976: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00465979: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0046597c: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00465980: je 0x465995 */ if (fZ) goto L_00465995;
L_00465982:; BB(0x00465982);
    /* 00465982: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00465984: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00465987: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00465989: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0046598c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0046598e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465990u); call_ind(t); }
    /* 00465990: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00465993: jmp 0x46599c */ goto L_0046599c;
L_00465995:; BB(0x00465995);
    /* 00465995: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0046599c:; BB(0x0046599c);
    /* 0046599c: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0046599f: cmp dword ptr [ecx + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004659a6: je 0x4659da */ if (fZ) goto L_004659da;
L_004659a8:; BB(0x004659a8);
    /* 004659a8: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004659ab: mov eax, dword ptr [edx + 0x1f8] */ r_eax = R32((u32)(r_edx+0x1f8u));
    /* 004659b1: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004659b4: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 004659b7: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004659ba: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004659be: je 0x4659d3 */ if (fZ) goto L_004659d3;
L_004659c0:; BB(0x004659c0);
    /* 004659c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004659c2: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004659c5: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004659c7: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004659ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004659cc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4659ceu); call_ind(t); }
    /* 004659ce: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 004659d1: jmp 0x4659da */ goto L_004659da;
L_004659d3:; BB(0x004659d3);
    /* 004659d3: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_004659da:; BB(0x004659da);
    /* 004659da: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 004659dd: cmp dword ptr [eax + 0x1fc], 0 */ {  u32 a = R32((u32)(r_eax+0x1fcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004659e4: je 0x465a18 */ if (fZ) goto L_00465a18;
L_004659e6:; BB(0x004659e6);
    /* 004659e6: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 004659e9: mov edx, dword ptr [ecx + 0x1fc] */ r_edx = R32((u32)(r_ecx+0x1fcu));
    /* 004659ef: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004659f2: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 004659f5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004659f8: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004659fc: je 0x465a11 */ if (fZ) goto L_00465a11;
L_004659fe:; BB(0x004659fe);
    /* 004659fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00465a00: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00465a03: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00465a05: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00465a08: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00465a0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x465a0cu); call_ind(t); }
    /* 00465a0c: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00465a0f: jmp 0x465a18 */ goto L_00465a18;
L_00465a11:; BB(0x00465a11);
    /* 00465a11: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00465a18:; BB(0x00465a18);
    /* 00465a18: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00465a1f: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00465a22: call 0x518980 */ r_esp -= 4; W32(r_esp, 0x465a27u); f_00518980();
    /* 00465a27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00465a2a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00465a31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00465a32: mov esp, ebp */ r_esp = r_ebp;
    /* 00465a34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00465a35: ret  */ FN_RET(0x004657f0); r_esp += 4; return;
}

void f_00466e60(void) /* DealDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00466e60);
    /* 00466e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00466e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00466e63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00466e64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00466e67: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00466e6d: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x466e72u); f_005da7b0();
    /* 00466e72: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00466e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00466e77: je 0x466e83 */ if (fZ) goto L_00466e83;
L_00466e79:; BB(0x00466e79);
    /* 00466e79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466e7c: call 0x465ef0 */ r_esp -= 4; W32(r_esp, 0x466e81u); f_00465ef0();
    /* 00466e81: jmp 0x466e8b */ goto L_00466e8b;
L_00466e83:; BB(0x00466e83);
    /* 00466e83: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00466e86: call 0x465a40 */ r_esp -= 4; W32(r_esp, 0x466e8bu); f_00465a40();
L_00466e8b:; BB(0x00466e8b);
    /* 00466e8b: mov esp, ebp */ r_esp = r_ebp;
    /* 00466e8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00466e8e: ret  */ FN_RET(0x00466e60); r_esp += 4; return;
}

void f_00519a60(void) /* DealDialog::vfunc16 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519a60);
    /* 00519a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00519a63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519a64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519a67: push 0x7fbc */ { u32 v = 0x7fbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00519a6c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519a6f: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x519a74u); f_00519a40();
    /* 00519a74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519a77: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x519a7cu); f_005f87d0();
    /* 00519a7c: mov esp, ebp */ r_esp = r_ebp;
    /* 00519a7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519a7f: ret  */ FN_RET(0x00519a60); r_esp += 4; return;
}

void f_00519a80(void) /* DealDialog::vfunc17 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519a80);
    /* 00519a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00519a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519a87: push 0x7fbd */ { u32 v = 0x7fbdu; r_esp -= 4; W32(r_esp, v); }
    /* 00519a8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519a8f: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x519a94u); f_00519a40();
    /* 00519a94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519a97: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x519a9cu); f_005f87d0();
    /* 00519a9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00519a9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519a9f: ret  */ FN_RET(0x00519a80); r_esp += 4; return;
}

void f_00519aa0(void) /* DealDialog::vfunc18 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00519aa0);
    /* 00519aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00519aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00519aa3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00519aa4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00519aa7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519aaa: cmp dword ptr [eax + 0x1c4], 0 */ {  u32 a = R32((u32)(r_eax+0x1c4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00519ab1: je 0x519ac5 */ if (fZ) goto L_00519ac5;
L_00519ab3:; BB(0x00519ab3);
    /* 00519ab3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519ab6: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 00519abc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00519abd: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x519ac2u); f_0060cce0();
    /* 00519ac2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00519ac5:; BB(0x00519ac5);
    /* 00519ac5: push 0x7fbe */ { u32 v = 0x7fbeu; r_esp -= 4; W32(r_esp, v); }
    /* 00519aca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00519acd: call 0x519a40 */ r_esp -= 4; W32(r_esp, 0x519ad2u); f_00519a40();
    /* 00519ad2: mov esp, ebp */ r_esp = r_ebp;
    /* 00519ad4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00519ad5: ret  */ FN_RET(0x00519aa0); r_esp += 4; return;
}


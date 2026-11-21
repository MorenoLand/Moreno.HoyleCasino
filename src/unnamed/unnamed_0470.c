#include "protos.h"

void f_00470210(void) /* sub_470210 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470210);
    /* 00470210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470211: mov ebp, esp */ r_ebp = r_esp;
    /* 00470213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00470215: push 0x69f861 */ { u32 v = 0x69f861u; r_esp -= 4; W32(r_esp, v); }
    /* 0047021a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00470220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470221: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470224: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00470225: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047022a: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047022c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047022d: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00470230: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00470236: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047023c: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x470241u); f_0047e420();
    /* 00470241: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00470244: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00470247: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470248: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0047024e: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x470253u); f_004c7c40();
    /* 00470253: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047025a: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0047025d: call 0x49a650 */ r_esp -= 4; W32(r_esp, 0x470262u); f_0049a650();
    /* 00470262: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470265: mov word ptr [ecx*2 + 0x791030], ax */ W16((u32)(r_ecx*2+0x791030u), (u16)r_eax);
    /* 0047026d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470270: mov byte ptr [edx + 0x7912e0], 0 */ W8((u32)(r_edx+0x7912e0u), 0x0u);
    /* 00470277: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0047027b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047027d: je 0x4704af */ if (fZ) goto L_004704af;
L_00470283:; BB(0x00470283);
    /* 00470283: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00470286: call 0x49df90 */ r_esp -= 4; W32(r_esp, 0x47028bu); f_0049df90();
    /* 0047028b: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 0047028f: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00470292: call 0x49e430 */ r_esp -= 4; W32(r_esp, 0x470297u); f_0049e430();
    /* 00470297: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 0047029b: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0047029e: call 0x49ee40 */ r_esp -= 4; W32(r_esp, 0x4702a3u); f_0049ee40();
    /* 004702a3: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 004702a7: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004702ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004702ad: jge 0x4702c4 */ if ((fS==fO)) goto L_004702c4;
L_004702af:; BB(0x004702af);
    /* 004702af: movsx edx, word ptr [ebp - 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 004702b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004702b5: jge 0x4702c4 */ if ((fS==fO)) goto L_004702c4;
L_004702b7:; BB(0x004702b7);
    /* 004702b7: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004702bb: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004702bf: jmp 0x470442 */ goto L_00470442;
L_004702c4:; BB(0x004702c4);
    /* 004702c4: movsx ecx, word ptr [ebp - 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe4u));
    /* 004702c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004702ca: jge 0x47031f */ if ((fS==fO)) goto L_0047031f;
L_004702cc:; BB(0x004702cc);
    /* 004702cc: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004702d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004702d2: jge 0x4702de */ if ((fS==fO)) goto L_004702de;
L_004702d4:; BB(0x004702d4);
    /* 004702d4: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004702d8: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004702dc: jmp 0x47031a */ goto L_0047031a;
L_004702de:; BB(0x004702de);
    /* 004702de: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004702e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004702e3: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004702e9: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x4702eeu); f_004eaf20();
    /* 004702ee: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 004702f1: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004702f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004702f6: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004702fc: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x470301u); f_004eaf20();
    /* 00470301: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00470304: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470306: jge 0x470312 */ if ((fS==fO)) goto L_00470312;
L_00470308:; BB(0x00470308);
    /* 00470308: mov cx, word ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 0047030c: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
    /* 00470310: jmp 0x47031a */ goto L_0047031a;
L_00470312:; BB(0x00470312);
    /* 00470312: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 00470316: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
L_0047031a:; BB(0x0047031a);
    /* 0047031a: jmp 0x470442 */ goto L_00470442;
L_0047031f:; BB(0x0047031f);
    /* 0047031f: movsx eax, word ptr [ebp - 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffe0u));
    /* 00470323: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00470325: jge 0x47037a */ if ((fS==fO)) goto L_0047037a;
L_00470327:; BB(0x00470327);
    /* 00470327: movsx ecx, word ptr [ebp - 0x28] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 0047032b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0047032d: jge 0x470339 */ if ((fS==fO)) goto L_00470339;
L_0047032f:; BB(0x0047032f);
    /* 0047032f: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00470333: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00470337: jmp 0x470375 */ goto L_00470375;
L_00470339:; BB(0x00470339);
    /* 00470339: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0047033d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047033e: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470344: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x470349u); f_004eaf20();
    /* 00470349: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0047034c: mov cx, word ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00470350: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470351: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470357: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x47035cu); f_004eaf20();
    /* 0047035c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0047035f: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470361: jge 0x47036d */ if ((fS==fO)) goto L_0047036d;
L_00470363:; BB(0x00470363);
    /* 00470363: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00470367: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 0047036b: jmp 0x470375 */ goto L_00470375;
L_0047036d:; BB(0x0047036d);
    /* 0047036d: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00470371: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
L_00470375:; BB(0x00470375);
    /* 00470375: jmp 0x470442 */ goto L_00470442;
L_0047037a:; BB(0x0047037a);
    /* 0047037a: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0047037e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047037f: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470385: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x47038au); f_004eaf20();
    /* 0047038a: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 0047038d: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 00470391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470392: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470398: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x47039du); f_004eaf20();
    /* 0047039d: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 004703a0: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004703a2: jge 0x4703f4 */ if ((fS==fO)) goto L_004703f4;
L_004703a4:; BB(0x004703a4);
    /* 004703a4: movsx edx, word ptr [ebp - 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004703a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004703aa: jge 0x4703b6 */ if ((fS==fO)) goto L_004703b6;
L_004703ac:; BB(0x004703ac);
    /* 004703ac: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004703b0: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004703b4: jmp 0x4703f2 */ goto L_004703f2;
L_004703b6:; BB(0x004703b6);
    /* 004703b6: mov cx, word ptr [ebp - 0x20] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004703ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004703bb: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004703c1: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x4703c6u); f_004eaf20();
    /* 004703c6: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 004703c9: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004703cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004703ce: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004703d4: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x4703d9u); f_004eaf20();
    /* 004703d9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 004703dc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004703de: jge 0x4703ea */ if ((fS==fO)) goto L_004703ea;
L_004703e0:; BB(0x004703e0);
    /* 004703e0: mov cx, word ptr [ebp - 0x28] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004703e4: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
    /* 004703e8: jmp 0x4703f2 */ goto L_004703f2;
L_004703ea:; BB(0x004703ea);
    /* 004703ea: mov dx, word ptr [ebp - 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 004703ee: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
L_004703f2:; BB(0x004703f2);
    /* 004703f2: jmp 0x470442 */ goto L_00470442;
L_004703f4:; BB(0x004703f4);
    /* 004703f4: movsx eax, word ptr [ebp - 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004703f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004703fa: jge 0x470406 */ if ((fS==fO)) goto L_00470406;
L_004703fc:; BB(0x004703fc);
    /* 004703fc: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00470400: mov word ptr [ebp - 0x24], cx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ecx);
    /* 00470404: jmp 0x470442 */ goto L_00470442;
L_00470406:; BB(0x00470406);
    /* 00470406: mov dx, word ptr [ebp - 0x1c] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0047040a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047040b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470411: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x470416u); f_004eaf20();
    /* 00470416: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 00470419: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 0047041d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047041e: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470424: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x470429u); f_004eaf20();
    /* 00470429: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 0047042c: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047042e: jge 0x47043a */ if ((fS==fO)) goto L_0047043a;
L_00470430:; BB(0x00470430);
    /* 00470430: mov dx, word ptr [ebp - 0x28] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 00470434: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00470438: jmp 0x470442 */ goto L_00470442;
L_0047043a:; BB(0x0047043a);
    /* 0047043a: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0047043e: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
L_00470442:; BB(0x00470442);
    /* 00470442: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 00470446: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00470448: jl 0x4704af */ if ((fS!=fO)) goto L_004704af;
L_0047044a:; BB(0x0047044a);
    /* 0047044a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047044c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0047044f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470450: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470452: call 0x46fd10 */ r_esp -= 4; W32(r_esp, 0x470457u); f_0046fd10();
    /* 00470457: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047045a: fstp qword ptr [ebp - 0x34] */ W_F64((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0047045d: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 00470461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470462: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470468: call 0x4eaf20 */ r_esp -= 4; W32(r_esp, 0x47046du); f_004eaf20();
    /* 0047046d: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00470470: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00470473: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 00470476: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 0047047c: fcomp qword ptr [ebp - 0x34] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffccu))); FPOP();
    /* 0047047f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00470481: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00470484: je 0x470496 */ if (fZ) goto L_00470496;
L_00470486:; BB(0x00470486);
    /* 00470486: fld qword ptr [0x6b3e38] */ FPUSH(R_F64((u32)(0x6b3e38u)));
    /* 0047048c: fcomp qword ptr [ebp - 0x34] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffccu))); FPOP();
    /* 0047048f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00470491: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00470494: jne 0x4704af */ if (!fZ) goto L_004704af;
L_00470496:; BB(0x00470496);
    /* 00470496: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470499: mov ax, word ptr [ebp - 0x24] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffdcu))) & 0xffffu);
    /* 0047049d: mov word ptr [edx*2 + 0x791030], ax */ W16((u32)(r_edx*2+0x791030u), (u16)r_eax);
    /* 004704a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004704a8: mov byte ptr [ecx + 0x7912e0], 1 */ W8((u32)(r_ecx+0x7912e0u), 0x1u);
L_004704af:; BB(0x004704af);
    /* 004704af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004704b6: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 004704b9: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x4704beu); f_00484470();
    /* 004704be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004704c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004704c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004704c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004704ca: mov esp, ebp */ r_esp = r_ebp;
    /* 004704cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004704cd: ret  */ FN_RET(0x00470210); r_esp += 4; return;
}

void f_004704d0(void) /* sub_4704D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004704d0);
    /* 004704d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004704d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004704d3: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004704d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004704d7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004704dd: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4704e2u); f_0047e420();
    /* 004704e2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004704e5: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004704eb: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004704f1: jmp 0x4704ff */ goto L_004704ff;
L_004704f3:; BB(0x004704f3);
    /* 004704f3: mov ax, word ptr [ebp - 0x38] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 004704f7: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004704fb: mov word ptr [ebp - 0x38], ax */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_eax);
L_004704ff:; BB(0x004704ff);
    /* 004704ff: movsx esi, word ptr [ebp - 0x38] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 00470503: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470509: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47050eu); f_0047f950();
    /* 0047050e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00470510: jge 0x4705aa */ if ((fS==fO)) goto L_004705aa;
L_00470516:; BB(0x00470516);
    /* 00470516: movsx ecx, word ptr [ebp - 0x38] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 0047051a: cmp ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047051d: jne 0x470521 */ if (!fZ) goto L_00470521;
L_0047051f:; BB(0x0047051f);
    /* 0047051f: jmp 0x4704f3 */ goto L_004704f3;
L_00470521:; BB(0x00470521);
    /* 00470521: movsx edx, word ptr [ebp - 0x38] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 00470525: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00470526: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047052c: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470531u); f_0047e390();
    /* 00470531: mov ecx, eax */ r_ecx = r_eax;
    /* 00470533: call 0x4c7010 */ r_esp -= 4; W32(r_esp, 0x470538u); f_004c7010();
    /* 00470538: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047053b: jne 0x4705a5 */ if (!fZ) goto L_004705a5;
L_0047053d:; BB(0x0047053d);
    /* 0047053d: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 00470541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470542: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470548: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47054du); f_0047e390();
    /* 0047054d: mov ecx, eax */ r_ecx = r_eax;
    /* 0047054f: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x470554u); f_004c7050();
    /* 00470554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470555: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047055b: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047055e: call 0x4f69e0 */ r_esp -= 4; W32(r_esp, 0x470563u); f_004f69e0();
    /* 00470563: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00470566: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0047056a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047056c: mov word ptr [ebp - 0x2c], dx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_edx);
    /* 00470570: movsx eax, word ptr [ebp - 0x38] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc8u));
    /* 00470574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470575: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047057b: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x470580u); f_0047e390();
    /* 00470580: mov ecx, eax */ r_ecx = r_eax;
    /* 00470582: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x470587u); f_004c7050();
    /* 00470587: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470588: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047058e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470591: call 0x4f6880 */ r_esp -= 4; W32(r_esp, 0x470596u); f_004f6880();
    /* 00470596: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00470599: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0047059b: jle 0x4705a5 */ if ((fZ||fS!=fO)) goto L_004705a5;
L_0047059d:; BB(0x0047059d);
    /* 0047059d: mov word ptr [ebp - 0x2c], 0 */ W16((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004705a3: jmp 0x4705aa */ goto L_004705aa;
L_004705a5:; BB(0x004705a5);
    /* 004705a5: jmp 0x4704f3 */ goto L_004704f3;
L_004705aa:; BB(0x004705aa);
    /* 004705aa: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004705b0: call 0x4e9d20 */ r_esp -= 4; W32(r_esp, 0x4705b5u); f_004e9d20();
    /* 004705b5: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004705b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004705bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004705bc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4705c1u); f_0062fbf0();
    /* 004705c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004705c4: mov word ptr [ebp - 0x24], ax */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_eax);
    /* 004705c8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004705cb: movsx ecx, word ptr [eax*2 + 0x791010] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax*2+0x791010u));
    /* 004705d3: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004705d7: movsx eax, word ptr [ebp - 0x24] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004705db: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004705de: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004705e0: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004705e3: jle 0x47061a */ if ((fZ||fS!=fO)) goto L_0047061a;
L_004705e5:; BB(0x004705e5);
    /* 004705e5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004705e8: movsx edx, word ptr [ecx*2 + 0x791010] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x791010u));
    /* 004705f0: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 004705f4: movsx ecx, word ptr [ebp - 0x24] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffdcu));
    /* 004705f8: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004705fb: lea edx, [edx + eax - 0xa] */ r_edx = (u32)(r_edx+r_eax+0xfffffff6u);
    /* 004705ff: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00470602: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00470605: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 0047060b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047060e: fadd qword ptr [eax*8 + 0x791260] */ ST(0) = ST(0) + R_F64((u32)(r_eax*8+0x791260u));
    /* 00470615: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00470618: jmp 0x470627 */ goto L_00470627;
L_0047061a:; BB(0x0047061a);
    /* 0047061a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047061d: fld qword ptr [ecx*8 + 0x791260] */ FPUSH(R_F64((u32)(r_ecx*8+0x791260u)));
    /* 00470624: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_00470627:; BB(0x00470627);
    /* 00470627: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00470629: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0047062f: call 0x4eab60 */ r_esp -= 4; W32(r_esp, 0x470634u); f_004eab60();
    /* 00470634: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 00470638: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047063a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470640: call 0x4eab60 */ r_esp -= 4; W32(r_esp, 0x470645u); f_004eab60();
    /* 00470645: mov word ptr [ebp - 0x14], ax */ W16((u32)(r_ebp+0xffffffecu), (u16)r_eax);
    /* 00470649: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047064b: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470651: call 0x4eab60 */ r_esp -= 4; W32(r_esp, 0x470656u); f_004eab60();
    /* 00470656: mov word ptr [ebp - 0x28], ax */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_eax);
    /* 0047065a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470660: call 0x4eae50 */ r_esp -= 4; W32(r_esp, 0x470665u); f_004eae50();
    /* 00470665: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00470669: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0047066d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047066e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470673u); f_0062fbf0();
    /* 00470673: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470676: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00470679: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0047067c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00470682: fld1  */ FPUSH(1.0);
    /* 00470684: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00470686: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0047068a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047068b: fstp qword ptr [ebp - 0x48] */ W_F64((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0047068e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470693u); f_0062fbf0();
    /* 00470693: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470696: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00470699: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0047069c: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004706a2: fsubr qword ptr [ebp - 0x48] */ ST(0) = R_F64((u32)(r_ebp+0xffffffb8u)) - ST(0);
    /* 004706a5: fidiv dword ptr [ebp + 0xc] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebp+0xcu));
    /* 004706a8: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 004706ab: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 004706af: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004706b5: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4706bau); f_0047ce60();
    /* 004706ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004706bb: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 004706bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004706c1: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004706c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004706c5: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004706cb: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4706d0u); f_004c6f90();
    /* 004706d0: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004706d2: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 004706d5: fild dword ptr [ebp - 0x50] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb0u)));
    /* 004706d8: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004706de: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004706e1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004706e4: fcomp qword ptr [eax*8 + 0x791260] */ fx_compare(ST(0), R_F64((u32)(r_eax*8+0x791260u))); FPOP();
    /* 004706eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004706ed: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004706f0: jp 0x47070b */ if (fP) goto L_0047070b;
L_004706f2:; BB(0x004706f2);
    /* 004706f2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004706f5: mov word ptr [ecx*2 + 0x791020], 5 */ W16((u32)(r_ecx*2+0x791020u), 0x5u);
    /* 004706ff: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00470701: jmp 0x4708d0 */ goto L_004708d0;
L_0047070b:; BB(0x0047070b);
    /* 0047070b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047070e: movzx eax, byte ptr [edx + 0x791040] */ r_eax = (u32)R8((u32)(r_edx+0x791040u));
    /* 00470715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470717: je 0x470732 */ if (fZ) goto L_00470732;
L_00470719:; BB(0x00470719);
    /* 00470719: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047071c: mov word ptr [ecx*2 + 0x791020], 0xa */ W16((u32)(r_ecx*2+0x791020u), 0xau);
    /* 00470726: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00470728: jmp 0x4708d0 */ goto L_004708d0;
L_00470732:; BB(0x00470732);
    /* 00470732: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00470736: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047073c: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x470741u); f_0047ce60();
    /* 00470741: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470742: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00470746: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470748: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0047074b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047074c: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470752: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x470757u); f_004c6f90();
    /* 00470757: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00470759: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 0047075c: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0047075f: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00470765: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00470768: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047076b: fcomp qword ptr [ecx*8 + 0x791260] */ fx_compare(ST(0), R_F64((u32)(r_ecx*8+0x791260u))); FPOP();
    /* 00470772: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00470774: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00470777: jp 0x470792 */ if (fP) goto L_00470792;
L_00470779:; BB(0x00470779);
    /* 00470779: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047077c: mov word ptr [edx*2 + 0x791020], 4 */ W16((u32)(r_edx*2+0x791020u), 0x4u);
    /* 00470786: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00470788: jmp 0x4708d0 */ goto L_004708d0;
L_00470792:; BB(0x00470792);
    /* 00470792: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470795: movzx ecx, byte ptr [eax + 0x791008] */ r_ecx = (u32)R8((u32)(r_eax+0x791008u));
    /* 0047079c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047079e: je 0x4707b9 */ if (fZ) goto L_004707b9;
L_004707a0:; BB(0x004707a0);
    /* 004707a0: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004707a3: mov word ptr [edx*2 + 0x791020], 9 */ W16((u32)(r_edx*2+0x791020u), 0x9u);
    /* 004707ad: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004707af: jmp 0x4708d0 */ goto L_004708d0;
L_004707b9:; BB(0x004707b9);
    /* 004707b9: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 004707bd: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004707c3: call 0x47ce60 */ r_esp -= 4; W32(r_esp, 0x4707c8u); f_0047ce60();
    /* 004707c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004707c9: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 004707cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004707cf: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004707d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004707d3: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 004707d9: call 0x4c6f90 */ r_esp -= 4; W32(r_esp, 0x4707deu); f_004c6f90();
    /* 004707de: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004707e0: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 004707e3: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 004707e6: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004707ec: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004707ef: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004707f2: fcomp qword ptr [edx*8 + 0x791260] */ fx_compare(ST(0), R_F64((u32)(r_edx*8+0x791260u))); FPOP();
    /* 004707f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004707fb: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004707fe: jp 0x470819 */ if (fP) goto L_00470819;
L_00470800:; BB(0x00470800);
    /* 00470800: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470803: mov word ptr [eax*2 + 0x791020], 3 */ W16((u32)(r_eax*2+0x791020u), 0x3u);
    /* 0047080d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047080f: jmp 0x4708d0 */ goto L_004708d0;
L_00470819:; BB(0x00470819);
    /* 00470819: movsx esi, word ptr [ebp - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0047081d: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470823: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x470828u); f_004c6fd0();
    /* 00470828: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0047082a: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 0047082d: fild dword ptr [ebp - 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa4u)));
    /* 00470830: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00470836: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00470839: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 0047083c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0047083e: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00470841: jp 0x470856 */ if (fP) goto L_00470856;
L_00470843:; BB(0x00470843);
    /* 00470843: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470846: mov word ptr [ecx*2 + 0x791020], 0xa */ W16((u32)(r_ecx*2+0x791020u), 0xau);
    /* 00470850: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00470852: jmp 0x4708d0 */ goto L_004708d0;
L_00470856:; BB(0x00470856);
    /* 00470856: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047085a: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470860: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x470865u); f_004c6fd0();
    /* 00470865: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00470867: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 0047086a: fild dword ptr [ebp - 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa0u)));
    /* 0047086d: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 00470873: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00470876: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 00470879: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0047087b: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0047087e: jp 0x470893 */ if (fP) goto L_00470893;
L_00470880:; BB(0x00470880);
    /* 00470880: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00470883: mov word ptr [edx*2 + 0x791020], 9 */ W16((u32)(r_edx*2+0x791020u), 0x9u);
    /* 0047088d: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047088f: jmp 0x4708d0 */ goto L_004708d0;
L_00470893:; BB(0x00470893);
    /* 00470893: movsx esi, word ptr [ebp - 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd8u));
    /* 00470897: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 0047089d: call 0x4c6fd0 */ r_esp -= 4; W32(r_esp, 0x4708a2u); f_004c6fd0();
    /* 004708a2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004708a4: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 004708a7: fild dword ptr [ebp - 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff9cu)));
    /* 004708aa: fdiv qword ptr [0x6b4b00] */ ST(0) = ST(0) / R_F64((u32)(0x6b4b00u));
    /* 004708b0: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 004708b3: fcomp qword ptr [ebp - 0x20] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xffffffe0u))); FPOP();
    /* 004708b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004708b8: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 004708bb: jp 0x4708ce */ if (fP) goto L_004708ce;
L_004708bd:; BB(0x004708bd);
    /* 004708bd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004708c0: mov word ptr [eax*2 + 0x791020], 8 */ W16((u32)(r_eax*2+0x791020u), 0x8u);
    /* 004708ca: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 004708cc: jmp 0x4708d0 */ goto L_004708d0;
L_004708ce:; BB(0x004708ce);
    /* 004708ce: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_004708d0:; BB(0x004708d0);
    /* 004708d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004708d1: mov esp, ebp */ r_esp = r_ebp;
    /* 004708d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004708d4: ret  */ FN_RET(0x004704d0); r_esp += 4; return;
}

void f_004708e0(void) /* sub_4708E0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004708e0);
    /* 004708e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004708e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004708e3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004708e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004708e7: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004708ed: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x4708f2u); f_0047e420();
    /* 004708f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004708f5: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004708f7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4708fcu); f_0062fbf0();
    /* 004708fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004708ff: mov esi, eax */ r_esi = r_eax;
    /* 00470901: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00470903: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470908u); f_0062fbf0();
    /* 00470908: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047090b: lea esi, [esi + eax + 0x50] */ r_esi = (u32)(r_esi+r_eax+0x50u);
    /* 0047090f: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00470911: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470916u); f_0062fbf0();
    /* 00470916: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470919: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0047091b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0047091d: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470922u); f_0062fbf0();
    /* 00470922: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470925: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00470927: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 0047092a: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 0047092d: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 00470933: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00470936: fstp qword ptr [eax*8 + 0x7912a0] */ W_F64((u32)(r_eax*8+0x7912a0u), ST(0)); FPOP();
    /* 0047093d: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0047093f: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470944u); f_0062fbf0();
    /* 00470944: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470947: mov esi, eax */ r_esi = r_eax;
    /* 00470949: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0047094b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x470950u); f_0062fbf0();
    /* 00470950: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470953: lea esi, [esi + eax + 0x3c] */ r_esi = (u32)(r_esi+r_eax+0x3cu);
    /* 00470957: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00470959: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47095eu); f_0062fbf0();
    /* 0047095e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470961: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00470963: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00470965: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47096au); f_0062fbf0();
    /* 0047096a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047096d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0047096f: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 00470972: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 00470975: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 0047097b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047097e: fstp qword ptr [ecx*8 + 0x790fc8] */ W_F64((u32)(r_ecx*8+0x790fc8u), ST(0)); FPOP();
    /* 00470985: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047098b: jmp 0x470999 */ goto L_00470999;
L_0047098d:; BB(0x0047098d);
    /* 0047098d: mov dx, word ptr [ebp - 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00470991: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00470995: mov word ptr [ebp - 8], dx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_edx);
L_00470999:; BB(0x00470999);
    /* 00470999: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0047099d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 004709a3: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4709a8u); f_0047f950();
    /* 004709a8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004709aa: jge 0x4709f1 */ if ((fS==fO)) goto L_004709f1;
L_004709ac:; BB(0x004709ac);
    /* 004709ac: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004709ae: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4709b3u); f_0062fbf0();
    /* 004709b3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004709b6: mov esi, eax */ r_esi = r_eax;
    /* 004709b8: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004709ba: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4709bfu); f_0062fbf0();
    /* 004709bf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004709c2: lea esi, [esi + eax + 0x19] */ r_esi = (u32)(r_esi+r_eax+0x19u);
    /* 004709c6: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 004709c8: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4709cdu); f_0062fbf0();
    /* 004709cd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004709d0: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004709d2: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 004709d5: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 004709d8: fmul qword ptr [0x6bc270] */ ST(0) = ST(0) * R_F64((u32)(0x6bc270u));
    /* 004709de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004709e1: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004709e4: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 004709e8: fstp qword ptr [eax + ecx*8 + 0x791060] */ W_F64((u32)(r_eax+r_ecx*8+0x791060u), ST(0)); FPOP();
    /* 004709ef: jmp 0x47098d */ goto L_0047098d;
L_004709f1:; BB(0x004709f1);
    /* 004709f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004709f2: mov esp, ebp */ r_esp = r_ebp;
    /* 004709f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004709f5: ret  */ FN_RET(0x004708e0); r_esp += 4; return;
}

void f_00470a00(void) /* sub_470A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470a00);
    /* 00470a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00470a03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470a04: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00470a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470a09: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470a0f: call 0x4e9ad0 */ r_esp -= 4; W32(r_esp, 0x470a14u); f_004e9ad0();
    /* 00470a14: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
    /* 00470a18: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00470a1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470a1e: jne 0x470a4f */ if (!fZ) goto L_00470a4f;
L_00470a20:; BB(0x00470a20);
    /* 00470a20: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470a26: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470a29: call 0x4f6640 */ r_esp -= 4; W32(r_esp, 0x470a2eu); f_004f6640();
    /* 00470a2e: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00470a31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470a33: je 0x470a4f */ if (fZ) goto L_00470a4f;
L_00470a35:; BB(0x00470a35);
    /* 00470a35: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00470a39: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00470a3d: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00470a42: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00470a44: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00470a45: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00470a47: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00470a49: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00470a4b: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00470a4f:; BB(0x00470a4f);
    /* 00470a4f: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00470a53: mov esp, ebp */ r_esp = r_ebp;
    /* 00470a55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470a56: ret  */ FN_RET(0x00470a00); r_esp += 4; return;
}

void f_00470a60(void) /* sub_470A60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00470a60);
    /* 00470a60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00470a61: mov ebp, esp */ r_ebp = r_esp;
    /* 00470a63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00470a65: push 0x69f884 */ { u32 v = 0x69f884u; r_esp -= 4; W32(r_esp, v); }
    /* 00470a6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00470a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470a71: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00470a74: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00470a79: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00470a7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470a7c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00470a7f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00470a85: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470a8b: call 0x47e420 */ r_esp -= 4; W32(r_esp, 0x470a90u); f_0047e420();
    /* 00470a90: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00470a93: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00470a99: call 0x47e3b0 */ r_esp -= 4; W32(r_esp, 0x470a9eu); f_0047e3b0();
    /* 00470a9e: mov dword ptr [0x791048], eax */ W32((u32)(0x791048u), r_eax);
    /* 00470aa3: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00470aa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470aa7: mov ecx, dword ptr [0x791048] */ r_ecx = R32((u32)(0x791048u));
    /* 00470aad: call 0x4c7c40 */ r_esp -= 4; W32(r_esp, 0x470ab2u); f_004c7c40();
    /* 00470ab2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00470ab9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470abc: movsx edx, word ptr [ecx*2 + 0x790fb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx*2+0x790fb8u));
    /* 00470ac4: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00470ac7: je 0x470ace */ if (fZ) goto L_00470ace;
L_00470ac9:; BB(0x00470ac9);
    /* 00470ac9: call 0x4708e0 */ r_esp -= 4; W32(r_esp, 0x470aceu); f_004708e0();
L_00470ace:; BB(0x00470ace);
    /* 00470ace: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00470ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470ad2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00470ad4: call 0x470210 */ r_esp -= 4; W32(r_esp, 0x470ad9u); f_00470210();
    /* 00470ad9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00470adc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00470adf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00470ae0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00470ae3: mov ax, word ptr [edx*2 + 0x791030] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx*2+0x791030u))) & 0xffffu);
    /* 00470aeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00470aec: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00470aef: call 0x49ffb0 */ r_esp -= 4; W32(r_esp, 0x470af4u); f_0049ffb0();
    /* 00470af4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00470afb: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00470afe: call 0x484470 */ r_esp -= 4; W32(r_esp, 0x470b03u); f_00484470();
    /* 00470b03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00470b06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00470b0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00470b0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00470b10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00470b11: ret  */ FN_RET(0x00470a60); r_esp += 4; return;
}


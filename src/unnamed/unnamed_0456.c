#include "protos.h"

void f_00456000(void) /* sub_456000 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456000);
    /* 00456000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456001: mov ebp, esp */ r_ebp = r_esp;
    /* 00456003: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456004: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456007: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045600a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045600b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045600e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045600f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456012: call 0x454200 */ r_esp -= 4; W32(r_esp, 0x456017u); f_00454200();
    /* 00456017: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0045601a: mov esp, ebp */ r_esp = r_ebp;
    /* 0045601c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045601d: ret 8 */ FN_RET(0x00456000); r_esp += 12; return;
}

void f_00456420(void) /* sub_456420 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456420);
    /* 00456420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456421: mov ebp, esp */ r_ebp = r_esp;
    /* 00456423: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456426: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00456429: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00456430: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00456437: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045643e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00456445: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 0045644c: mov dword ptr [ebp - 0x30], 0xffffffff */ W32((u32)(r_ebp+0xffffffd0u), 0xffffffffu);
    /* 00456453: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0045645a: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00456461: mov dword ptr [ebp - 0x2c], 0xffffffff */ W32((u32)(r_ebp+0xffffffd4u), 0xffffffffu);
    /* 00456468: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0045646f: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00456476: jmp 0x456481 */ goto L_00456481;
L_00456478:; BB(0x00456478);
    /* 00456478: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045647b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045647e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00456481:; BB(0x00456481);
    /* 00456481: cmp dword ptr [ebp - 0x18], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456485: jge 0x45658e */ if ((fS==fO)) goto L_0045658e;
L_0045648b:; BB(0x0045648b);
    /* 0045648b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045648e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456491: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456496: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456497: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045649a: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x45649fu); f_0044f680();
    /* 0045649f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004564a0: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004564a3: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x4564a8u); f_0044f700();
    /* 004564a8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004564ab: jne 0x4564cf */ if (!fZ) goto L_004564cf;
L_004564ad:; BB(0x004564ad);
    /* 004564ad: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004564b0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004564b3: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004564b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004564b9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004564bc: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4564c1u); f_0044f680();
    /* 004564c1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004564c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004564c7: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004564ca: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004564cd: jmp 0x456478 */ goto L_00456478;
L_004564cf:; BB(0x004564cf);
    /* 004564cf: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004564d2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004564d5: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004564da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004564db: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004564de: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4564e3u); f_0044f680();
    /* 004564e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004564e4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004564e7: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x4564ecu); f_0044f700();
    /* 004564ec: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004564ef: jne 0x456525 */ if (!fZ) goto L_00456525;
L_004564f1:; BB(0x004564f1);
    /* 004564f1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004564f4: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 004564f7: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 004564fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004564fd: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456500: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456505u); f_0044f680();
    /* 00456505: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00456508: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045650b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0045650e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00456511: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456514: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00456517: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045651a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045651d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00456520: jmp 0x456478 */ goto L_00456478;
L_00456525:; BB(0x00456525);
    /* 00456525: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00456528: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045652b: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00456530: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456531: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456534: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456539u); f_0044f680();
    /* 00456539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045653a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0045653d: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456542u); f_0044f700();
    /* 00456542: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456545: jne 0x456589 */ if (!fZ) goto L_00456589;
L_00456547:; BB(0x00456547);
    /* 00456547: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045654b: jne 0x45656c */ if (!fZ) goto L_0045656c;
L_0045654d:; BB(0x0045654d);
    /* 0045654d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00456550: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00456553: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00456556: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456559: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 0045655e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045655f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456562: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456567u); f_0044f680();
    /* 00456567: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0045656a: jmp 0x456589 */ goto L_00456589;
L_0045656c:; BB(0x0045656c);
    /* 0045656c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045656f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00456572: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00456575: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456578: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 0045657d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045657e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00456581: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456586u); f_0044f680();
    /* 00456586: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00456589:; BB(0x00456589);
    /* 00456589: jmp 0x456478 */ goto L_00456478;
L_0045658e:; BB(0x0045658e);
    /* 0045658e: mov word ptr [ebp - 0x28], 0 */ W16((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00456594: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456597: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045659a: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0045659d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004565a0: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 004565a4: cmp dword ptr [ebp - 0x14], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565a8: jge 0x456793 */ if ((fS==fO)) goto L_00456793;
L_004565ae:; BB(0x004565ae);
    /* 004565ae: cmp dword ptr [ebp - 0x1c], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004565b2: jne 0x456793 */ if (!fZ) goto L_00456793;
L_004565b8:; BB(0x004565b8);
    /* 004565b8: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565bc: jl 0x456793 */ if ((fS!=fO)) goto L_00456793;
L_004565c2:; BB(0x004565c2);
    /* 004565c2: cmp dword ptr [ebp - 0x24], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004565c6: jne 0x4565ea */ if (!fZ) goto L_004565ea;
L_004565c8:; BB(0x004565c8);
    /* 004565c8: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565cc: jge 0x4565ea */ if ((fS==fO)) goto L_004565ea;
L_004565ce:; BB(0x004565ce);
    /* 004565ce: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565d2: jle 0x4565da */ if ((fZ||fS!=fO)) goto L_004565da;
L_004565d4:; BB(0x004565d4);
    /* 004565d4: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565d8: jge 0x4565e6 */ if ((fS==fO)) goto L_004565e6;
L_004565da:; BB(0x004565da);
    /* 004565da: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004565de: jne 0x4565ea */ if (!fZ) goto L_004565ea;
L_004565e0:; BB(0x004565e0);
    /* 004565e0: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565e4: jl 0x4565ea */ if ((fS!=fO)) goto L_004565ea;
L_004565e6:; BB(0x004565e6);
    /* 004565e6: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_004565ea:; BB(0x004565ea);
    /* 004565ea: cmp dword ptr [ebp - 0x24], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004565ee: jne 0x456612 */ if (!fZ) goto L_00456612;
L_004565f0:; BB(0x004565f0);
    /* 004565f0: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565f4: jge 0x456612 */ if ((fS==fO)) goto L_00456612;
L_004565f6:; BB(0x004565f6);
    /* 004565f6: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004565fa: jle 0x456602 */ if ((fZ||fS!=fO)) goto L_00456602;
L_004565fc:; BB(0x004565fc);
    /* 004565fc: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456600: jge 0x45660e */ if ((fS==fO)) goto L_0045660e;
L_00456602:; BB(0x00456602);
    /* 00456602: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456606: jne 0x456612 */ if (!fZ) goto L_00456612;
L_00456608:; BB(0x00456608);
    /* 00456608: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045660c: jl 0x456612 */ if ((fS!=fO)) goto L_00456612;
L_0045660e:; BB(0x0045660e);
    /* 0045660e: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00456612:; BB(0x00456612);
    /* 00456612: cmp dword ptr [ebp - 0x24], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456616: jne 0x45663a */ if (!fZ) goto L_0045663a;
L_00456618:; BB(0x00456618);
    /* 00456618: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045661c: jge 0x45663a */ if ((fS==fO)) goto L_0045663a;
L_0045661e:; BB(0x0045661e);
    /* 0045661e: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456622: jle 0x45662a */ if ((fZ||fS!=fO)) goto L_0045662a;
L_00456624:; BB(0x00456624);
    /* 00456624: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456628: jge 0x456636 */ if ((fS==fO)) goto L_00456636;
L_0045662a:; BB(0x0045662a);
    /* 0045662a: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045662e: jne 0x45663a */ if (!fZ) goto L_0045663a;
L_00456630:; BB(0x00456630);
    /* 00456630: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456634: jl 0x45663a */ if ((fS!=fO)) goto L_0045663a;
L_00456636:; BB(0x00456636);
    /* 00456636: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_0045663a:; BB(0x0045663a);
    /* 0045663a: cmp dword ptr [ebp - 0x24], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045663e: jne 0x456662 */ if (!fZ) goto L_00456662;
L_00456640:; BB(0x00456640);
    /* 00456640: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456644: jge 0x456662 */ if ((fS==fO)) goto L_00456662;
L_00456646:; BB(0x00456646);
    /* 00456646: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045664a: jl 0x456652 */ if ((fS!=fO)) goto L_00456652;
L_0045664c:; BB(0x0045664c);
    /* 0045664c: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456650: jge 0x45665e */ if ((fS==fO)) goto L_0045665e;
L_00456652:; BB(0x00456652);
    /* 00456652: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456656: jge 0x456662 */ if ((fS==fO)) goto L_00456662;
L_00456658:; BB(0x00456658);
    /* 00456658: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045665c: jl 0x456662 */ if ((fS!=fO)) goto L_00456662;
L_0045665e:; BB(0x0045665e);
    /* 0045665e: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00456662:; BB(0x00456662);
    /* 00456662: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456666: jle 0x456690 */ if ((fZ||fS!=fO)) goto L_00456690;
L_00456668:; BB(0x00456668);
    /* 00456668: cmp dword ptr [ebp - 0x24], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045666c: jge 0x456690 */ if ((fS==fO)) goto L_00456690;
L_0045666e:; BB(0x0045666e);
    /* 0045666e: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456672: jge 0x456690 */ if ((fS==fO)) goto L_00456690;
L_00456674:; BB(0x00456674);
    /* 00456674: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456678: jle 0x456680 */ if ((fZ||fS!=fO)) goto L_00456680;
L_0045667a:; BB(0x0045667a);
    /* 0045667a: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045667e: jge 0x45668c */ if ((fS==fO)) goto L_0045668c;
L_00456680:; BB(0x00456680);
    /* 00456680: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456684: jge 0x456690 */ if ((fS==fO)) goto L_00456690;
L_00456686:; BB(0x00456686);
    /* 00456686: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045668a: jl 0x456690 */ if ((fS!=fO)) goto L_00456690;
L_0045668c:; BB(0x0045668c);
    /* 0045668c: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00456690:; BB(0x00456690);
    /* 00456690: cmp dword ptr [ebp - 0x24], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456694: je 0x45669c */ if (fZ) goto L_0045669c;
L_00456696:; BB(0x00456696);
    /* 00456696: cmp dword ptr [ebp - 0x24], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045669a: jne 0x4566d0 */ if (!fZ) goto L_004566d0;
L_0045669c:; BB(0x0045669c);
    /* 0045669c: cmp dword ptr [ebp - 0x14], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566a0: jge 0x4566d0 */ if ((fS==fO)) goto L_004566d0;
L_004566a2:; BB(0x004566a2);
    /* 004566a2: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566a6: jle 0x4566ae */ if ((fZ||fS!=fO)) goto L_004566ae;
L_004566a8:; BB(0x004566a8);
    /* 004566a8: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566ac: jge 0x4566cc */ if ((fS==fO)) goto L_004566cc;
L_004566ae:; BB(0x004566ae);
    /* 004566ae: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566b2: jge 0x4566c0 */ if ((fS==fO)) goto L_004566c0;
L_004566b4:; BB(0x004566b4);
    /* 004566b4: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566b8: jle 0x4566c0 */ if ((fZ||fS!=fO)) goto L_004566c0;
L_004566ba:; BB(0x004566ba);
    /* 004566ba: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566be: jge 0x4566cc */ if ((fS==fO)) goto L_004566cc;
L_004566c0:; BB(0x004566c0);
    /* 004566c0: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004566c4: jne 0x4566d0 */ if (!fZ) goto L_004566d0;
L_004566c6:; BB(0x004566c6);
    /* 004566c6: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566ca: jl 0x4566d0 */ if ((fS!=fO)) goto L_004566d0;
L_004566cc:; BB(0x004566cc);
    /* 004566cc: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_004566d0:; BB(0x004566d0);
    /* 004566d0: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004566d4: jne 0x456704 */ if (!fZ) goto L_00456704;
L_004566d6:; BB(0x004566d6);
    /* 004566d6: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566da: jle 0x4566e2 */ if ((fZ||fS!=fO)) goto L_004566e2;
L_004566dc:; BB(0x004566dc);
    /* 004566dc: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566e0: jge 0x456700 */ if ((fS==fO)) goto L_00456700;
L_004566e2:; BB(0x004566e2);
    /* 004566e2: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566e6: jle 0x4566f4 */ if ((fZ||fS!=fO)) goto L_004566f4;
L_004566e8:; BB(0x004566e8);
    /* 004566e8: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566ec: jge 0x4566f4 */ if ((fS==fO)) goto L_004566f4;
L_004566ee:; BB(0x004566ee);
    /* 004566ee: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566f2: jge 0x456700 */ if ((fS==fO)) goto L_00456700;
L_004566f4:; BB(0x004566f4);
    /* 004566f4: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004566f8: jne 0x456704 */ if (!fZ) goto L_00456704;
L_004566fa:; BB(0x004566fa);
    /* 004566fa: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004566fe: jl 0x456704 */ if ((fS!=fO)) goto L_00456704;
L_00456700:; BB(0x00456700);
    /* 00456700: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00456704:; BB(0x00456704);
    /* 00456704: cmp dword ptr [ebp - 0x24], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456708: jne 0x456744 */ if (!fZ) goto L_00456744;
L_0045670a:; BB(0x0045670a);
    /* 0045670a: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045670e: jle 0x456716 */ if ((fZ||fS!=fO)) goto L_00456716;
L_00456710:; BB(0x00456710);
    /* 00456710: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456714: jge 0x456740 */ if ((fS==fO)) goto L_00456740;
L_00456716:; BB(0x00456716);
    /* 00456716: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045671a: jle 0x456728 */ if ((fZ||fS!=fO)) goto L_00456728;
L_0045671c:; BB(0x0045671c);
    /* 0045671c: cmp dword ptr [ebp - 0x14], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456720: jge 0x456728 */ if ((fS==fO)) goto L_00456728;
L_00456722:; BB(0x00456722);
    /* 00456722: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456726: jge 0x456740 */ if ((fS==fO)) goto L_00456740;
L_00456728:; BB(0x00456728);
    /* 00456728: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045672c: jne 0x456734 */ if (!fZ) goto L_00456734;
L_0045672e:; BB(0x0045672e);
    /* 0045672e: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456732: jge 0x456740 */ if ((fS==fO)) goto L_00456740;
L_00456734:; BB(0x00456734);
    /* 00456734: cmp dword ptr [ebp - 0x14], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456738: jne 0x456744 */ if (!fZ) goto L_00456744;
L_0045673a:; BB(0x0045673a);
    /* 0045673a: cmp dword ptr [ebp - 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045673e: jl 0x456744 */ if ((fS!=fO)) goto L_00456744;
L_00456740:; BB(0x00456740);
    /* 00456740: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00456744:; BB(0x00456744);
    /* 00456744: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456748: jne 0x456778 */ if (!fZ) goto L_00456778;
L_0045674a:; BB(0x0045674a);
    /* 0045674a: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045674e: jle 0x456756 */ if ((fZ||fS!=fO)) goto L_00456756;
L_00456750:; BB(0x00456750);
    /* 00456750: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456754: jge 0x456774 */ if ((fS==fO)) goto L_00456774;
L_00456756:; BB(0x00456756);
    /* 00456756: cmp dword ptr [ebp - 0x14], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045675a: jl 0x456768 */ if ((fS!=fO)) goto L_00456768;
L_0045675c:; BB(0x0045675c);
    /* 0045675c: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456760: jg 0x456768 */ if ((!fZ&&fS==fO)) goto L_00456768;
L_00456762:; BB(0x00456762);
    /* 00456762: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456766: jge 0x456774 */ if ((fS==fO)) goto L_00456774;
L_00456768:; BB(0x00456768);
    /* 00456768: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045676c: jne 0x456778 */ if (!fZ) goto L_00456778;
L_0045676e:; BB(0x0045676e);
    /* 0045676e: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456772: jl 0x456778 */ if ((fS!=fO)) goto L_00456778;
L_00456774:; BB(0x00456774);
    /* 00456774: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
L_00456778:; BB(0x00456778);
    /* 00456778: movzx eax, byte ptr [ebp - 5] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 0045677c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045677f: jne 0x456793 */ if (!fZ) goto L_00456793;
L_00456781:; BB(0x00456781);
    /* 00456781: mov word ptr [ebp - 0x28], 1 */ W16((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00456787: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045678a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0045678d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00456790: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_00456793:; BB(0x00456793);
    /* 00456793: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00456796: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456797: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0045679a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045679b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045679e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045679f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004567a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004567a3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004567a6: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x4567abu); f_0044f840();
    /* 004567ab: mov ax, word ptr [ebp - 0x28] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffd8u))) & 0xffffu);
    /* 004567af: mov esp, ebp */ r_esp = r_ebp;
    /* 004567b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004567b2: ret 8 */ FN_RET(0x00456420); r_esp += 12; return;
}

void f_004567c0(void) /* sub_4567C0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004567c0);
    /* 004567c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004567c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004567c3: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004567c6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004567c9: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 004567d0: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 004567d7: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 004567dd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004567e4: jmp 0x4567ef */ goto L_004567ef;
L_004567e6:; BB(0x004567e6);
    /* 004567e6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004567e9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004567ec: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004567ef:; BB(0x004567ef);
    /* 004567ef: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004567f3: jge 0x45682a */ if ((fS==fO)) goto L_0045682a;
L_004567f5:; BB(0x004567f5);
    /* 004567f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004567f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004567fb: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456801: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00456804: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456809u); f_0044f680();
    /* 00456809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045680a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045680d: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456812u); f_0044f700();
    /* 00456812: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456815: jne 0x456828 */ if (!fZ) goto L_00456828;
L_00456817:; BB(0x00456817);
    /* 00456817: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045681a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0045681d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456820: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456823: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00456826: jmp 0x45682a */ goto L_0045682a;
L_00456828:; BB(0x00456828);
    /* 00456828: jmp 0x4567e6 */ goto L_004567e6;
L_0045682a:; BB(0x0045682a);
    /* 0045682a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0045682c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045682f: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456834u); f_0044f700();
    /* 00456834: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456837: jne 0x45686b */ if (!fZ) goto L_0045686b;
L_00456839:; BB(0x00456839);
    /* 00456839: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045683b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045683e: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456843u); f_0044f700();
    /* 00456843: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456846: jne 0x45686b */ if (!fZ) goto L_0045686b;
L_00456848:; BB(0x00456848);
    /* 00456848: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045684a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045684d: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456852u); f_0044f700();
    /* 00456852: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456855: jne 0x45686b */ if (!fZ) goto L_0045686b;
L_00456857:; BB(0x00456857);
    /* 00456857: mov word ptr [ebp - 0xc], 1 */ W16((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 0045685d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00456864: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
L_0045686b:; BB(0x0045686b);
    /* 0045686b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0045686e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045686f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456872: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456873: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456876: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456877: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0045687a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045687b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045687e: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456883u); f_0044f840();
    /* 00456883: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00456887: mov esp, ebp */ r_esp = r_ebp;
    /* 00456889: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045688a: ret 8 */ FN_RET(0x004567c0); r_esp += 12; return;
}

void f_00456890(void) /* sub_456890 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456890);
    /* 00456890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456891: mov ebp, esp */ r_ebp = r_esp;
    /* 00456893: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456896: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00456899: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 004568a0: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 004568a7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004568ae: jmp 0x4568b9 */ goto L_004568b9;
L_004568b0:; BB(0x004568b0);
    /* 004568b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004568b3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004568b6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_004568b9:; BB(0x004568b9);
    /* 004568b9: cmp dword ptr [ebp - 4], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004568bd: jge 0x4568f4 */ if ((fS==fO)) goto L_004568f4;
L_004568bf:; BB(0x004568bf);
    /* 004568bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004568c2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004568c5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004568ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004568cb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004568ce: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4568d3u); f_0044f680();
    /* 004568d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004568d4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 004568d7: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x4568dcu); f_0044f700();
    /* 004568dc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004568df: jne 0x4568f2 */ if (!fZ) goto L_004568f2;
L_004568e1:; BB(0x004568e1);
    /* 004568e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004568e4: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004568e7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004568ea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004568ed: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 004568f0: jmp 0x4568f4 */ goto L_004568f4;
L_004568f2:; BB(0x004568f2);
    /* 004568f2: jmp 0x4568b0 */ goto L_004568b0;
L_004568f4:; BB(0x004568f4);
    /* 004568f4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004568f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004568f8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004568fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004568fc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004568ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456900: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456904: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456907: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x45690cu); f_0044f840();
    /* 0045690c: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0045690f: mov esp, ebp */ r_esp = r_ebp;
    /* 00456911: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456912: ret 8 */ FN_RET(0x00456890); r_esp += 12; return;
}

void f_00456920(void) /* sub_456920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456920);
    /* 00456920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456921: mov ebp, esp */ r_ebp = r_esp;
    /* 00456923: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456926: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00456929: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00456930: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00456937: mov dword ptr [ebp - 0x28], 0xffffffff */ W32((u32)(r_ebp+0xffffffd8u), 0xffffffffu);
    /* 0045693e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00456945: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045694c: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00456953: mov dword ptr [ebp - 0x24], 0xffffffff */ W32((u32)(r_ebp+0xffffffdcu), 0xffffffffu);
    /* 0045695a: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 00456961: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00456968: jmp 0x456973 */ goto L_00456973;
L_0045696a:; BB(0x0045696a);
    /* 0045696a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045696d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456970: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00456973:; BB(0x00456973);
    /* 00456973: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456977: jge 0x456a36 */ if ((fS==fO)) goto L_00456a36;
L_0045697d:; BB(0x0045697d);
    /* 0045697d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456980: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00456983: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456989: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045698c: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456991u); f_0044f680();
    /* 00456991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456992: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00456995: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x45699au); f_0044f700();
    /* 0045699a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045699d: jne 0x4569c7 */ if (!fZ) goto L_004569c7;
L_0045699f:; BB(0x0045699f);
    /* 0045699f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004569a2: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004569a5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 004569aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004569ab: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004569ae: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4569b3u); f_0044f680();
    /* 004569b3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004569b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004569b9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004569bc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004569bf: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004569c2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004569c5: jmp 0x45696a */ goto L_0045696a;
L_004569c7:; BB(0x004569c7);
    /* 004569c7: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004569ca: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004569cd: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 004569d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004569d3: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004569d6: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4569dbu); f_0044f680();
    /* 004569db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004569dc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004569df: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x4569e4u); f_0044f700();
    /* 004569e4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004569e7: jne 0x456a31 */ if (!fZ) goto L_00456a31;
L_004569e9:; BB(0x004569e9);
    /* 004569e9: cmp dword ptr [ebp - 0x28], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004569ed: jne 0x456a0e */ if (!fZ) goto L_00456a0e;
L_004569ef:; BB(0x004569ef);
    /* 004569ef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004569f2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004569f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004569f8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004569fb: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456a01: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00456a04: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456a09u); f_0044f680();
    /* 00456a09: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00456a0c: jmp 0x456a31 */ goto L_00456a31;
L_00456a0e:; BB(0x00456a0e);
    /* 00456a0e: cmp dword ptr [ebp - 4], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a12: jne 0x456a31 */ if (!fZ) goto L_00456a31;
L_00456a14:; BB(0x00456a14);
    /* 00456a14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456a17: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456a1a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456a1d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00456a20: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00456a25: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456a26: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00456a29: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456a2eu); f_0044f680();
    /* 00456a2e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00456a31:; BB(0x00456a31);
    /* 00456a31: jmp 0x45696a */ goto L_0045696a;
L_00456a36:; BB(0x00456a36);
    /* 00456a36: cmp dword ptr [ebp - 0x1c], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a3a: jl 0x456ada */ if ((fS!=fO)) goto L_00456ada;
L_00456a40:; BB(0x00456a40);
    /* 00456a40: cmp dword ptr [ebp - 0x1c], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a44: jne 0x456a56 */ if (!fZ) goto L_00456a56;
L_00456a46:; BB(0x00456a46);
    /* 00456a46: cmp dword ptr [ebp - 0x10], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a4a: jne 0x456a56 */ if (!fZ) goto L_00456a56;
L_00456a4c:; BB(0x00456a4c);
    /* 00456a4c: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a50: jge 0x456ada */ if ((fS==fO)) goto L_00456ada;
L_00456a56:; BB(0x00456a56);
    /* 00456a56: cmp dword ptr [ebp - 0x1c], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a5a: jne 0x456a68 */ if (!fZ) goto L_00456a68;
L_00456a5c:; BB(0x00456a5c);
    /* 00456a5c: cmp dword ptr [ebp - 0x10], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a60: jne 0x456a68 */ if (!fZ) goto L_00456a68;
L_00456a62:; BB(0x00456a62);
    /* 00456a62: cmp dword ptr [ebp - 0x14], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a66: jge 0x456ada */ if ((fS==fO)) goto L_00456ada;
L_00456a68:; BB(0x00456a68);
    /* 00456a68: cmp dword ptr [ebp - 0x1c], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a6c: jne 0x456a7a */ if (!fZ) goto L_00456a7a;
L_00456a6e:; BB(0x00456a6e);
    /* 00456a6e: cmp dword ptr [ebp - 0x10], 0xe */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a72: jne 0x456a7a */ if (!fZ) goto L_00456a7a;
L_00456a74:; BB(0x00456a74);
    /* 00456a74: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a78: jge 0x456ada */ if ((fS==fO)) goto L_00456ada;
L_00456a7a:; BB(0x00456a7a);
    /* 00456a7a: cmp dword ptr [ebp - 0x1c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a7e: jne 0x456a92 */ if (!fZ) goto L_00456a92;
L_00456a80:; BB(0x00456a80);
    /* 00456a80: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a84: jg 0x456ada */ if ((!fZ&&fS==fO)) goto L_00456ada;
L_00456a86:; BB(0x00456a86);
    /* 00456a86: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a8a: jne 0x456a92 */ if (!fZ) goto L_00456a92;
L_00456a8c:; BB(0x00456a8c);
    /* 00456a8c: cmp dword ptr [ebp - 0x14], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a90: jge 0x456ada */ if ((fS==fO)) goto L_00456ada;
L_00456a92:; BB(0x00456a92);
    /* 00456a92: cmp dword ptr [ebp - 0x1c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456a96: jne 0x456aaa */ if (!fZ) goto L_00456aaa;
L_00456a98:; BB(0x00456a98);
    /* 00456a98: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456a9c: jg 0x456ada */ if ((!fZ&&fS==fO)) goto L_00456ada;
L_00456a9e:; BB(0x00456a9e);
    /* 00456a9e: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456aa2: jne 0x456aaa */ if (!fZ) goto L_00456aaa;
L_00456aa4:; BB(0x00456aa4);
    /* 00456aa4: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456aa8: jge 0x456ada */ if ((fS==fO)) goto L_00456ada;
L_00456aaa:; BB(0x00456aaa);
    /* 00456aaa: cmp dword ptr [ebp - 0x1c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456aae: jne 0x456ac2 */ if (!fZ) goto L_00456ac2;
L_00456ab0:; BB(0x00456ab0);
    /* 00456ab0: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456ab4: jg 0x456ada */ if ((!fZ&&fS==fO)) goto L_00456ada;
L_00456ab6:; BB(0x00456ab6);
    /* 00456ab6: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456aba: jne 0x456ac2 */ if (!fZ) goto L_00456ac2;
L_00456abc:; BB(0x00456abc);
    /* 00456abc: cmp dword ptr [ebp - 0x14], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456ac0: jge 0x456ada */ if ((fS==fO)) goto L_00456ada;
L_00456ac2:; BB(0x00456ac2);
    /* 00456ac2: cmp dword ptr [ebp - 0x1c], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ac6: jne 0x456aee */ if (!fZ) goto L_00456aee;
L_00456ac8:; BB(0x00456ac8);
    /* 00456ac8: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456acc: jge 0x456ada */ if ((fS==fO)) goto L_00456ada;
L_00456ace:; BB(0x00456ace);
    /* 00456ace: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ad2: jne 0x456aee */ if (!fZ) goto L_00456aee;
L_00456ad4:; BB(0x00456ad4);
    /* 00456ad4: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456ad8: jl 0x456aee */ if ((fS!=fO)) goto L_00456aee;
L_00456ada:; BB(0x00456ada);
    /* 00456ada: mov word ptr [ebp - 0x20], 0 */ W16((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00456ae0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00456ae3: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00456ae6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456ae9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00456aec: jmp 0x456b03 */ goto L_00456b03;
L_00456aee:; BB(0x00456aee);
    /* 00456aee: mov word ptr [ebp - 0x20], 1 */ W16((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00456af4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456af7: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00456afa: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456afd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456b00: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
L_00456b03:; BB(0x00456b03);
    /* 00456b03: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00456b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456b07: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456b0a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456b0b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00456b0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456b0f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456b12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456b13: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00456b16: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456b1bu); f_0044f840();
    /* 00456b1b: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 00456b1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00456b21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456b22: ret 8 */ FN_RET(0x00456920); r_esp += 12; return;
}

void f_00456b30(void) /* sub_456B30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456b30);
    /* 00456b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456b31: mov ebp, esp */ r_ebp = r_esp;
    /* 00456b33: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456b36: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00456b39: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00456b40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456b47: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00456b4e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00456b55: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 00456b5c: mov dword ptr [ebp - 0x14], 0xffffffff */ W32((u32)(r_ebp+0xffffffecu), 0xffffffffu);
    /* 00456b63: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00456b6a: jmp 0x456b75 */ goto L_00456b75;
L_00456b6c:; BB(0x00456b6c);
    /* 00456b6c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456b6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456b72: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00456b75:; BB(0x00456b75);
    /* 00456b75: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456b79: jge 0x456c1b */ if ((fS==fO)) goto L_00456c1b;
L_00456b7f:; BB(0x00456b7f);
    /* 00456b7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456b82: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456b85: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456b8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456b8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456b8e: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456b93u); f_0044f680();
    /* 00456b93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456b94: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456b97: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456b9cu); f_0044f700();
    /* 00456b9c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456b9f: jne 0x456bc9 */ if (!fZ) goto L_00456bc9;
L_00456ba1:; BB(0x00456ba1);
    /* 00456ba1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456ba4: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456ba7: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456bac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456bad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456bb0: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456bb5u); f_0044f680();
    /* 00456bb5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00456bb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456bbb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456bbe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456bc1: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456bc4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00456bc7: jmp 0x456b6c */ goto L_00456b6c;
L_00456bc9:; BB(0x00456bc9);
    /* 00456bc9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456bcc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456bcf: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00456bd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456bd5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456bd8: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456bddu); f_0044f680();
    /* 00456bdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456bde: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456be1: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456be6u); f_0044f700();
    /* 00456be6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456be9: jne 0x456c16 */ if (!fZ) goto L_00456c16;
L_00456beb:; BB(0x00456beb);
    /* 00456beb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456bee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456bf1: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00456bf6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456bf7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456bfa: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456bffu); f_0044f680();
    /* 00456bff: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00456c02: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456c05: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00456c08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456c0b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456c0e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00456c11: jmp 0x456b6c */ goto L_00456b6c;
L_00456c16:; BB(0x00456c16);
    /* 00456c16: jmp 0x456b6c */ goto L_00456b6c;
L_00456c1b:; BB(0x00456c1b);
    /* 00456c1b: cmp dword ptr [ebp - 0x18], 0xe */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c1f: jne 0x456c27 */ if (!fZ) goto L_00456c27;
L_00456c21:; BB(0x00456c21);
    /* 00456c21: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456c25: jle 0x456c4b */ if ((fZ||fS!=fO)) goto L_00456c4b;
L_00456c27:; BB(0x00456c27);
    /* 00456c27: cmp dword ptr [ebp - 0x18], 0xd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c2b: jne 0x456c33 */ if (!fZ) goto L_00456c33;
L_00456c2d:; BB(0x00456c2d);
    /* 00456c2d: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456c31: jle 0x456c4b */ if ((fZ||fS!=fO)) goto L_00456c4b;
L_00456c33:; BB(0x00456c33);
    /* 00456c33: cmp dword ptr [ebp - 0x18], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c37: jne 0x456c3f */ if (!fZ) goto L_00456c3f;
L_00456c39:; BB(0x00456c39);
    /* 00456c39: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456c3d: jle 0x456c4b */ if ((fZ||fS!=fO)) goto L_00456c4b;
L_00456c3f:; BB(0x00456c3f);
    /* 00456c3f: cmp dword ptr [ebp - 0x18], 0xb */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456c43: jne 0x456c62 */ if (!fZ) goto L_00456c62;
L_00456c45:; BB(0x00456c45);
    /* 00456c45: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456c49: jg 0x456c62 */ if ((!fZ&&fS==fO)) goto L_00456c62;
L_00456c4b:; BB(0x00456c4b);
    /* 00456c4b: mov word ptr [ebp - 0x1c], 1 */ W16((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00456c51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456c54: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00456c57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456c5a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456c5d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00456c60: jmp 0x456c77 */ goto L_00456c77;
L_00456c62:; BB(0x00456c62);
    /* 00456c62: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 00456c68: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456c6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00456c6e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456c71: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456c74: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
L_00456c77:; BB(0x00456c77);
    /* 00456c77: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00456c7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456c7b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456c7e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456c7f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00456c82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456c83: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00456c86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456c87: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456c8a: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456c8fu); f_0044f840();
    /* 00456c8f: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 00456c93: mov esp, ebp */ r_esp = r_ebp;
    /* 00456c95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456c96: ret 8 */ FN_RET(0x00456b30); r_esp += 12; return;
}

void f_00456ca0(void) /* sub_456CA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456ca0);
    /* 00456ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00456ca3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456ca6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00456ca9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00456cb0: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00456cb7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456cbe: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00456cc5: mov dword ptr [ebp - 0x1c], 0xffffffff */ W32((u32)(r_ebp+0xffffffe4u), 0xffffffffu);
    /* 00456ccc: mov dword ptr [ebp - 0x10], 0xffffffff */ W32((u32)(r_ebp+0xfffffff0u), 0xffffffffu);
    /* 00456cd3: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00456cda: jmp 0x456ce5 */ goto L_00456ce5;
L_00456cdc:; BB(0x00456cdc);
    /* 00456cdc: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456cdf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456ce2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00456ce5:; BB(0x00456ce5);
    /* 00456ce5: cmp dword ptr [ebp - 0xc], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456ce9: jge 0x456d8b */ if ((fS==fO)) goto L_00456d8b;
L_00456cef:; BB(0x00456cef);
    /* 00456cef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456cf2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456cf5: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456cfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456cfb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456cfe: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456d03u); f_0044f680();
    /* 00456d03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456d04: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d07: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456d0cu); f_0044f700();
    /* 00456d0c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d0f: jne 0x456d39 */ if (!fZ) goto L_00456d39;
L_00456d11:; BB(0x00456d11);
    /* 00456d11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456d14: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d17: mov ax, word ptr [edx + ecx*2 + 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2+0x4u))) & 0xffffu);
    /* 00456d1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456d1d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d20: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456d25u); f_0044f680();
    /* 00456d25: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00456d28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456d2b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00456d2e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456d31: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456d34: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00456d37: jmp 0x456cdc */ goto L_00456cdc;
L_00456d39:; BB(0x00456d39);
    /* 00456d39: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456d3c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d3f: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00456d44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456d45: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d48: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456d4du); f_0044f680();
    /* 00456d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456d4e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d51: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x456d56u); f_0044f700();
    /* 00456d56: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d59: jne 0x456d86 */ if (!fZ) goto L_00456d86;
L_00456d5b:; BB(0x00456d5b);
    /* 00456d5b: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456d5e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d61: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00456d66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456d67: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456d6a: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456d6fu); f_0044f680();
    /* 00456d6f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00456d72: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456d75: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00456d78: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456d7b: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456d7e: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00456d81: jmp 0x456cdc */ goto L_00456cdc;
L_00456d86:; BB(0x00456d86);
    /* 00456d86: jmp 0x456cdc */ goto L_00456cdc;
L_00456d8b:; BB(0x00456d8b);
    /* 00456d8b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456d8e: sub edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00456d91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456d92: call 0x686eba */ r_esp -= 4; W32(r_esp, 0x456d97u); f_00686eba();
    /* 00456d97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00456d9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456d9d: jne 0x456db6 */ if (!fZ) goto L_00456db6;
L_00456d9f:; BB(0x00456d9f);
    /* 00456d9f: mov word ptr [ebp - 0x18], 0 */ W16((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00456da5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00456da8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00456dab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00456dae: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456db1: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00456db4: jmp 0x456de4 */ goto L_00456de4;
L_00456db6:; BB(0x00456db6);
    /* 00456db6: mov word ptr [ebp - 0x18], 1 */ W16((u32)(r_ebp+0xffffffe8u), 0x1u);
    /* 00456dbc: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456dbf: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456dc2: jle 0x456dd5 */ if ((fZ||fS!=fO)) goto L_00456dd5;
L_00456dc4:; BB(0x00456dc4);
    /* 00456dc4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456dc7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00456dca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456dcd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456dd0: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00456dd3: jmp 0x456de4 */ goto L_00456de4;
L_00456dd5:; BB(0x00456dd5);
    /* 00456dd5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00456dd8: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00456ddb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00456dde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00456de1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00456de4:; BB(0x00456de4);
    /* 00456de4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00456de7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456de8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00456deb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456dec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456df0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00456df3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456df4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00456df7: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456dfcu); f_0044f840();
    /* 00456dfc: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 00456e00: mov esp, ebp */ r_esp = r_ebp;
    /* 00456e02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456e03: ret 8 */ FN_RET(0x00456ca0); r_esp += 12; return;
}

void f_00456e10(void) /* sub_456E10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456e10);
    /* 00456e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00456e13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456e16: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00456e19: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00456e20: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00456e27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00456e2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456e2b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00456e2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456e2f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456e33: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456e37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456e3a: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456e3fu); f_0044f840();
    /* 00456e3f: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00456e42: mov esp, ebp */ r_esp = r_ebp;
    /* 00456e44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456e45: ret 8 */ FN_RET(0x00456e10); r_esp += 12; return;
}

void f_00456e50(void) /* sub_456E50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00456e50);
    /* 00456e50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00456e51: mov ebp, esp */ r_ebp = r_esp;
    /* 00456e53: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00456e56: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00456e59: mov dword ptr [ebp - 0xc], 0xffffffff */ W32((u32)(r_ebp+0xfffffff4u), 0xffffffffu);
    /* 00456e60: mov dword ptr [ebp - 8], 0xffffffff */ W32((u32)(r_ebp+0xfffffff8u), 0xffffffffu);
    /* 00456e67: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456e6a: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 00456e71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456e73: je 0x456efe */ if (fZ) goto L_00456efe;
L_00456e79:; BB(0x00456e79);
    /* 00456e79: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456e80: jmp 0x456e8b */ goto L_00456e8b;
L_00456e82:; BB(0x00456e82);
    /* 00456e82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e85: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456e88: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00456e8b:; BB(0x00456e8b);
    /* 00456e8b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456e8f: jge 0x456ee1 */ if ((fS==fO)) goto L_00456ee1;
L_00456e91:; BB(0x00456e91);
    /* 00456e91: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456e94: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456e97: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00456e9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456e9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456ea0: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x456ea5u); f_0044f6c0();
    /* 00456ea5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456ea8: cmp eax, dword ptr [ecx + 0x2d0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2d0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456eae: je 0x456edf */ if (fZ) goto L_00456edf;
L_00456eb0:; BB(0x00456eb0);
    /* 00456eb0: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456eb3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456eb6: mov cx, word ptr [eax + edx*2 + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax+r_edx*2+0x4u))) & 0xffffu);
    /* 00456ebb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456ebc: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456ebf: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x456ec4u); f_0044f6c0();
    /* 00456ec4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ec7: je 0x456edf */ if (fZ) goto L_00456edf;
L_00456ec9:; BB(0x00456ec9);
    /* 00456ec9: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456ecd: jne 0x456ed7 */ if (!fZ) goto L_00456ed7;
L_00456ecf:; BB(0x00456ecf);
    /* 00456ecf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456ed2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00456ed5: jmp 0x456edf */ goto L_00456edf;
L_00456ed7:; BB(0x00456ed7);
    /* 00456ed7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456eda: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00456edd: jmp 0x456ee1 */ goto L_00456ee1;
L_00456edf:; BB(0x00456edf);
    /* 00456edf: jmp 0x456e82 */ goto L_00456e82;
L_00456ee1:; BB(0x00456ee1);
    /* 00456ee1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00456ee4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456ee5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00456ee8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456ee9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456eed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456ef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456ef1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456ef4: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456ef9u); f_0044f840();
    /* 00456ef9: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00456efc: jmp 0x456f62 */ goto L_00456f62;
L_00456efe:; BB(0x00456efe);
    /* 00456efe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00456f05: jmp 0x456f10 */ goto L_00456f10;
L_00456f07:; BB(0x00456f07);
    /* 00456f07: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f0a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00456f0d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00456f10:; BB(0x00456f10);
    /* 00456f10: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00456f14: jge 0x456f47 */ if ((fS==fO)) goto L_00456f47;
L_00456f16:; BB(0x00456f16);
    /* 00456f16: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f19: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456f1c: mov dx, word ptr [ecx + eax*2 + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2+0x4u))) & 0xffffu);
    /* 00456f21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456f22: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456f25: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x456f2au); f_0044f680();
    /* 00456f2a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456f2d: je 0x456f45 */ if (fZ) goto L_00456f45;
L_00456f2f:; BB(0x00456f2f);
    /* 00456f2f: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456f33: jne 0x456f3d */ if (!fZ) goto L_00456f3d;
L_00456f35:; BB(0x00456f35);
    /* 00456f35: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f38: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00456f3b: jmp 0x456f45 */ goto L_00456f45;
L_00456f3d:; BB(0x00456f3d);
    /* 00456f3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00456f40: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00456f43: jmp 0x456f47 */ goto L_00456f47;
L_00456f45:; BB(0x00456f45);
    /* 00456f45: jmp 0x456f07 */ goto L_00456f07;
L_00456f47:; BB(0x00456f47);
    /* 00456f47: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00456f4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456f4b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00456f4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00456f4f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00456f52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00456f53: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00456f56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00456f57: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00456f5a: call 0x44f840 */ r_esp -= 4; W32(r_esp, 0x456f5fu); f_0044f840();
    /* 00456f5f: xor ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a ^ b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_00456f62:; BB(0x00456f62);
    /* 00456f62: mov esp, ebp */ r_esp = r_ebp;
    /* 00456f64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456f65: ret 8 */ FN_RET(0x00456e50); r_esp += 12; return;
}


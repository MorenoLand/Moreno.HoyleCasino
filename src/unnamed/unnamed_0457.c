#include "protos.h"

void f_00457200(void) /* sub_457200 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457200);
    /* 00457200: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457201: mov ebp, esp */ r_ebp = r_esp;
    /* 00457203: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457206: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00457209: mov byte ptr [ebp - 2], 0 */ W8((u32)(r_ebp+0xfffffffeu), 0x0u);
    /* 0045720d: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 00457211: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457214: movzx ecx, byte ptr [eax + 0x2c8] */ r_ecx = (u32)R8((u32)(r_eax+0x2c8u));
    /* 0045721b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045721d: jne 0x457223 */ if (!fZ) goto L_00457223;
L_0045721f:; BB(0x0045721f);
    /* 0045721f: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00457221: jmp 0x457267 */ goto L_00457267;
L_00457223:; BB(0x00457223);
    /* 00457223: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457226: mov eax, dword ptr [edx + 0x2d0] */ r_eax = R32((u32)(r_edx+0x2d0u));
    /* 0045722c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045722d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0045722f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457232: call 0x44f750 */ r_esp -= 4; W32(r_esp, 0x457237u); f_0044f750();
    /* 00457237: mov byte ptr [ebp - 2], al */ W8((u32)(r_ebp+0xfffffffeu), (u8)r_eax);
    /* 0045723a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0045723d: mov edx, dword ptr [ecx + 0x2d0] */ r_edx = R32((u32)(r_ecx+0x2d0u));
    /* 00457243: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457244: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00457246: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457249: call 0x44f750 */ r_esp -= 4; W32(r_esp, 0x45724eu); f_0044f750();
    /* 0045724e: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00457251: movzx eax, byte ptr [ebp - 2] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffeu));
    /* 00457255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457257: je 0x457265 */ if (fZ) goto L_00457265;
L_00457259:; BB(0x00457259);
    /* 00457259: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0045725d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045725f: je 0x457265 */ if (fZ) goto L_00457265;
L_00457261:; BB(0x00457261);
    /* 00457261: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00457263: jmp 0x457267 */ goto L_00457267;
L_00457265:; BB(0x00457265);
    /* 00457265: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00457267:; BB(0x00457267);
    /* 00457267: mov esp, ebp */ r_esp = r_ebp;
    /* 00457269: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045726a: ret  */ FN_RET(0x00457200); r_esp += 4; return;
}

void f_00457270(void) /* sub_457270 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457270);
    /* 00457270: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457271: mov ebp, esp */ r_ebp = r_esp;
    /* 00457273: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457276: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00457277: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045727a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045727d: call 0x457200 */ r_esp -= 4; W32(r_esp, 0x457282u); f_00457200();
    /* 00457282: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00457285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457287: jne 0x45728d */ if (!fZ) goto L_0045728d;
L_00457289:; BB(0x00457289);
    /* 00457289: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045728b: jmp 0x45730c */ goto L_0045730c;
L_0045728d:; BB(0x0045728d);
    /* 0045728d: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 00457290: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457291: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00457294: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457295: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457298: call 0x457110 */ r_esp -= 4; W32(r_esp, 0x45729du); f_00457110();
    /* 0045729d: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004572a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004572a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004572a5: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x4572aau); f_0044f6c0();
    /* 004572aa: mov esi, eax */ r_esi = r_eax;
    /* 004572ac: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004572b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004572b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004572b4: call 0x44f6c0 */ r_esp -= 4; W32(r_esp, 0x4572b9u); f_0044f6c0();
    /* 004572b9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004572bb: je 0x4572c1 */ if (fZ) goto L_004572c1;
L_004572bd:; BB(0x004572bd);
    /* 004572bd: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004572bf: jmp 0x45730c */ goto L_0045730c;
L_004572c1:; BB(0x004572c1);
    /* 004572c1: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 004572c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004572c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004572c9: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4572ceu); f_0044f680();
    /* 004572ce: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 004572d1: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 004572d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004572d6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004572d9: call 0x44f680 */ r_esp -= 4; W32(r_esp, 0x4572deu); f_0044f680();
    /* 004572de: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 004572e1: cmp dword ptr [ebp - 8], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004572e5: jne 0x4572ed */ if (!fZ) goto L_004572ed;
L_004572e7:; BB(0x004572e7);
    /* 004572e7: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004572eb: je 0x457302 */ if (fZ) goto L_00457302;
L_004572ed:; BB(0x004572ed);
    /* 004572ed: cmp dword ptr [ebp - 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004572f1: jne 0x4572f9 */ if (!fZ) goto L_004572f9;
L_004572f3:; BB(0x004572f3);
    /* 004572f3: cmp dword ptr [ebp - 0x10], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004572f7: je 0x457302 */ if (fZ) goto L_00457302;
L_004572f9:; BB(0x004572f9);
    /* 004572f9: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 00457300: jmp 0x457309 */ goto L_00457309;
L_00457302:; BB(0x00457302);
    /* 00457302: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_00457309:; BB(0x00457309);
    /* 00457309: mov al, byte ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe8u))) & 0xffu);
L_0045730c:; BB(0x0045730c);
    /* 0045730c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045730d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045730f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457310: ret  */ FN_RET(0x00457270); r_esp += 4; return;
}

void f_00457320(void) /* sub_457320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457320);
    /* 00457320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457321: mov ebp, esp */ r_ebp = r_esp;
    /* 00457323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00457327: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045732a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045732b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045732e: call 0x44efd0 */ r_esp -= 4; W32(r_esp, 0x457333u); f_0044efd0();
    /* 00457333: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457336: movzx edx, byte ptr [ecx + 0x2c6] */ r_edx = (u32)R8((u32)(r_ecx+0x2c6u));
    /* 0045733d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045733f: je 0x457357 */ if (fZ) goto L_00457357;
L_00457341:; BB(0x00457341);
    /* 00457341: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457344: cmp dword ptr [eax + 0x344], 7 */ {  u32 a = R32((u32)(r_eax+0x344u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045734b: jne 0x457357 */ if (!fZ) goto L_00457357;
L_0045734d:; BB(0x0045734d);
    /* 0045734d: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 00457352: jmp 0x45748c */ goto L_0045748c;
L_00457357:; BB(0x00457357);
    /* 00457357: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045735a: call 0x457270 */ r_esp -= 4; W32(r_esp, 0x45735fu); f_00457270();
    /* 0045735f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00457362: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457364: je 0x457370 */ if (fZ) goto L_00457370;
L_00457366:; BB(0x00457366);
    /* 00457366: mov eax, 0x1d */ r_eax = 0x1du;
    /* 0045736b: jmp 0x45748c */ goto L_0045748c;
L_00457370:; BB(0x00457370);
    /* 00457370: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457373: movzx eax, byte ptr [edx + 0x2c7] */ r_eax = (u32)R8((u32)(r_edx+0x2c7u));
    /* 0045737a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045737c: je 0x457394 */ if (fZ) goto L_00457394;
L_0045737e:; BB(0x0045737e);
    /* 0045737e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457381: cmp dword ptr [ecx + 0x344], 7 */ {  u32 a = R32((u32)(r_ecx+0x344u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457388: jne 0x457394 */ if (!fZ) goto L_00457394;
L_0045738a:; BB(0x0045738a);
    /* 0045738a: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 0045738f: jmp 0x45748c */ goto L_0045748c;
L_00457394:; BB(0x00457394);
    /* 00457394: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00457396: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457399: call 0x44f700 */ r_esp -= 4; W32(r_esp, 0x45739eu); f_0044f700();
    /* 0045739e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004573a1: jne 0x4573ad */ if (!fZ) goto L_004573ad;
L_004573a3:; BB(0x004573a3);
    /* 004573a3: mov eax, 0x1a */ r_eax = 0x1au;
    /* 004573a8: jmp 0x45748c */ goto L_0045748c;
L_004573ad:; BB(0x004573ad);
    /* 004573ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573b0: call 0x457200 */ r_esp -= 4; W32(r_esp, 0x4573b5u); f_00457200();
    /* 004573b5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 004573b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004573ba: je 0x4573c6 */ if (fZ) goto L_004573c6;
L_004573bc:; BB(0x004573bc);
    /* 004573bc: mov eax, 0x1f */ r_eax = 0x1fu;
    /* 004573c1: jmp 0x45748c */ goto L_0045748c;
L_004573c6:; BB(0x004573c6);
    /* 004573c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573c9: movzx ecx, byte ptr [eax + 0x2c6] */ r_ecx = (u32)R8((u32)(r_eax+0x2c6u));
    /* 004573d0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004573d2: jne 0x4573e2 */ if (!fZ) goto L_004573e2;
L_004573d4:; BB(0x004573d4);
    /* 004573d4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573d7: movzx eax, byte ptr [edx + 0x2c7] */ r_eax = (u32)R8((u32)(r_edx+0x2c7u));
    /* 004573de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004573e0: je 0x4573ec */ if (fZ) goto L_004573ec;
L_004573e2:; BB(0x004573e2);
    /* 004573e2: mov eax, 0xc */ r_eax = 0xcu;
    /* 004573e7: jmp 0x45748c */ goto L_0045748c;
L_004573ec:; BB(0x004573ec);
    /* 004573ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004573ef: movzx edx, byte ptr [ecx + 0x2c9] */ r_edx = (u32)R8((u32)(r_ecx+0x2c9u));
    /* 004573f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004573f8: je 0x457404 */ if (fZ) goto L_00457404;
L_004573fa:; BB(0x004573fa);
    /* 004573fa: mov eax, 0x17 */ r_eax = 0x17u;
    /* 004573ff: jmp 0x45748c */ goto L_0045748c;
L_00457404:; BB(0x00457404);
    /* 00457404: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457407: movzx ecx, byte ptr [eax + 0x2ca] */ r_ecx = (u32)R8((u32)(r_eax+0x2cau));
    /* 0045740e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457410: je 0x457420 */ if (fZ) goto L_00457420;
L_00457412:; BB(0x00457412);
    /* 00457412: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457415: movzx eax, byte ptr [edx + 0x2ce] */ r_eax = (u32)R8((u32)(r_edx+0x2ceu));
    /* 0045741c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045741e: jne 0x45742e */ if (!fZ) goto L_0045742e;
L_00457420:; BB(0x00457420);
    /* 00457420: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457423: movzx edx, byte ptr [ecx + 0x2cb] */ r_edx = (u32)R8((u32)(r_ecx+0x2cbu));
    /* 0045742a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045742c: je 0x457435 */ if (fZ) goto L_00457435;
L_0045742e:; BB(0x0045742e);
    /* 0045742e: mov eax, 0x14 */ r_eax = 0x14u;
    /* 00457433: jmp 0x45748c */ goto L_0045748c;
L_00457435:; BB(0x00457435);
    /* 00457435: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457438: movzx ecx, byte ptr [eax + 0x2c2] */ r_ecx = (u32)R8((u32)(r_eax+0x2c2u));
    /* 0045743f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457441: je 0x45744a */ if (fZ) goto L_0045744a;
L_00457443:; BB(0x00457443);
    /* 00457443: mov eax, 6 */ r_eax = 0x6u;
    /* 00457448: jmp 0x45748c */ goto L_0045748c;
L_0045744a:; BB(0x0045744a);
    /* 0045744a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0045744d: movzx eax, byte ptr [edx + 0x2ca] */ r_eax = (u32)R8((u32)(r_edx+0x2cau));
    /* 00457454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457456: je 0x45745f */ if (fZ) goto L_0045745f;
L_00457458:; BB(0x00457458);
    /* 00457458: mov eax, 4 */ r_eax = 0x4u;
    /* 0045745d: jmp 0x45748c */ goto L_0045748c;
L_0045745f:; BB(0x0045745f);
    /* 0045745f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457462: movzx edx, byte ptr [ecx + 0x2c5] */ r_edx = (u32)R8((u32)(r_ecx+0x2c5u));
    /* 00457469: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045746b: je 0x457474 */ if (fZ) goto L_00457474;
L_0045746d:; BB(0x0045746d);
    /* 0045746d: mov eax, 5 */ r_eax = 0x5u;
    /* 00457472: jmp 0x45748c */ goto L_0045748c;
L_00457474:; BB(0x00457474);
    /* 00457474: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457477: movzx ecx, byte ptr [eax + 0x2cc] */ r_ecx = (u32)R8((u32)(r_eax+0x2ccu));
    /* 0045747e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457480: je 0x457489 */ if (fZ) goto L_00457489;
L_00457482:; BB(0x00457482);
    /* 00457482: mov eax, 3 */ r_eax = 0x3u;
    /* 00457487: jmp 0x45748c */ goto L_0045748c;
L_00457489:; BB(0x00457489);
    /* 00457489: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0045748c:; BB(0x0045748c);
    /* 0045748c: mov esp, ebp */ r_esp = r_ebp;
    /* 0045748e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045748f: ret 4 */ FN_RET(0x00457320); r_esp += 8; return;
}

void f_004574a0(void) /* sub_4574A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004574a0);
    /* 004574a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004574a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004574a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004574a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 004574a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004574ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004574ad: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004574b0: call 0x457320 */ r_esp -= 4; W32(r_esp, 0x4574b5u); f_00457320();
    /* 004574b5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004574b8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004574bb: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004574be: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004574c1: sub edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004574c4: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 004574c7: cmp dword ptr [ebp - 0xc], 0x1c */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004574cb: ja 0x45752f */ if ((!fC&&!fZ)) goto L_0045752f;
L_004574cd:; BB(0x004574cd);
    /* 004574cd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004574d0: movzx ecx, byte ptr [eax + 0x45756c] */ r_ecx = (u32)R8((u32)(r_eax+0x45756cu));
    /* 004574d7: jmp dword ptr [ecx*4 + 0x457538] */ { u32 t = R32((u32)(r_ecx*4+0x457538u)); switch (t) { case 0x45752bu: goto L_0045752b; case 0x45751du: goto L_0045751d; case 0x457524u: goto L_00457524; case 0x457516u: goto L_00457516; case 0x457501u: goto L_00457501; case 0x45750fu: goto L_0045750f; case 0x457508u: goto L_00457508; case 0x4574f3u: goto L_004574f3; case 0x4574deu: goto L_004574de; case 0x4574e5u: goto L_004574e5; case 0x4574ecu: goto L_004574ec; case 0x4574fau: goto L_004574fa; case 0x45752fu: goto L_0045752f; default: UNSUP(0x004574d7, "jump table entry is not a known target"); } }
L_004574de:; BB(0x004574de);
    /* 004574de: mov eax, 0x1388 */ r_eax = 0x1388u;
    /* 004574e3: jmp 0x457532 */ goto L_00457532;
L_004574e5:; BB(0x004574e5);
    /* 004574e5: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 004574ea: jmp 0x457532 */ goto L_00457532;
L_004574ec:; BB(0x004574ec);
    /* 004574ec: mov eax, 0x2ee */ r_eax = 0x2eeu;
    /* 004574f1: jmp 0x457532 */ goto L_00457532;
L_004574f3:; BB(0x004574f3);
    /* 004574f3: mov eax, 0xfa */ r_eax = 0xfau;
    /* 004574f8: jmp 0x457532 */ goto L_00457532;
L_004574fa:; BB(0x004574fa);
    /* 004574fa: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004574ff: jmp 0x457532 */ goto L_00457532;
L_00457501:; BB(0x00457501);
    /* 00457501: mov eax, 0x32 */ r_eax = 0x32u;
    /* 00457506: jmp 0x457532 */ goto L_00457532;
L_00457508:; BB(0x00457508);
    /* 00457508: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0045750d: jmp 0x457532 */ goto L_00457532;
L_0045750f:; BB(0x0045750f);
    /* 0045750f: mov eax, 5 */ r_eax = 0x5u;
    /* 00457514: jmp 0x457532 */ goto L_00457532;
L_00457516:; BB(0x00457516);
    /* 00457516: mov eax, 4 */ r_eax = 0x4u;
    /* 0045751b: jmp 0x457532 */ goto L_00457532;
L_0045751d:; BB(0x0045751d);
    /* 0045751d: mov eax, 3 */ r_eax = 0x3u;
    /* 00457522: jmp 0x457532 */ goto L_00457532;
L_00457524:; BB(0x00457524);
    /* 00457524: mov eax, 2 */ r_eax = 0x2u;
    /* 00457529: jmp 0x457532 */ goto L_00457532;
L_0045752b:; BB(0x0045752b);
    /* 0045752b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045752d: jmp 0x457532 */ goto L_00457532;
L_0045752f:; BB(0x0045752f);
    /* 0045752f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00457532:; BB(0x00457532);
    /* 00457532: mov esp, ebp */ r_esp = r_ebp;
    /* 00457534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00457535: ret 4 */ FN_RET(0x004574a0); r_esp += 8; return;
}

void f_00457590(void) /* sub_457590 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457590);
    /* 00457590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457591: mov ebp, esp */ r_ebp = r_esp;
    /* 00457593: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457594: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00457597: cmp dword ptr [ebp + 8], 0x1c */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045759b: jne 0x4575a4 */ if (!fZ) goto L_004575a4;
L_0045759d:; BB(0x0045759d);
    /* 0045759d: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 004575a2: jmp 0x4575f4 */ goto L_004575f4;
L_004575a4:; BB(0x004575a4);
    /* 004575a4: cmp dword ptr [ebp + 8], 0x1d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575a8: jne 0x4575b1 */ if (!fZ) goto L_004575b1;
L_004575aa:; BB(0x004575aa);
    /* 004575aa: mov eax, 0xfa */ r_eax = 0xfau;
    /* 004575af: jmp 0x4575f4 */ goto L_004575f4;
L_004575b1:; BB(0x004575b1);
    /* 004575b1: cmp dword ptr [ebp + 8], 0x1e */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575b5: jne 0x4575be */ if (!fZ) goto L_004575be;
L_004575b7:; BB(0x004575b7);
    /* 004575b7: mov eax, 0x64 */ r_eax = 0x64u;
    /* 004575bc: jmp 0x4575f4 */ goto L_004575f4;
L_004575be:; BB(0x004575be);
    /* 004575be: cmp dword ptr [ebp + 8], 0x1a */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575c2: jne 0x4575cb */ if (!fZ) goto L_004575cb;
L_004575c4:; BB(0x004575c4);
    /* 004575c4: mov eax, 0x32 */ r_eax = 0x32u;
    /* 004575c9: jmp 0x4575f4 */ goto L_004575f4;
L_004575cb:; BB(0x004575cb);
    /* 004575cb: cmp dword ptr [ebp + 8], 0x1f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575cf: jne 0x4575d8 */ if (!fZ) goto L_004575d8;
L_004575d1:; BB(0x004575d1);
    /* 004575d1: mov eax, 0x19 */ r_eax = 0x19u;
    /* 004575d6: jmp 0x4575f4 */ goto L_004575f4;
L_004575d8:; BB(0x004575d8);
    /* 004575d8: cmp dword ptr [ebp + 8], 0xc */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575dc: jne 0x4575e5 */ if (!fZ) goto L_004575e5;
L_004575de:; BB(0x004575de);
    /* 004575de: mov eax, 0xa */ r_eax = 0xau;
    /* 004575e3: jmp 0x4575f4 */ goto L_004575f4;
L_004575e5:; BB(0x004575e5);
    /* 004575e5: cmp dword ptr [ebp + 8], 0x17 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004575e9: jne 0x4575f2 */ if (!fZ) goto L_004575f2;
L_004575eb:; BB(0x004575eb);
    /* 004575eb: mov eax, 5 */ r_eax = 0x5u;
    /* 004575f0: jmp 0x4575f4 */ goto L_004575f4;
L_004575f2:; BB(0x004575f2);
    /* 004575f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004575f4:; BB(0x004575f4);
    /* 004575f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004575f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004575f7: ret 4 */ FN_RET(0x00457590); r_esp += 8; return;
}

void f_00457600(void) /* sub_457600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00457600);
    /* 00457600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00457601: mov ebp, esp */ r_ebp = r_esp;
    /* 00457603: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00457606: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00457609: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00457610: mov dword ptr [ebp - 0xc], 0xc350 */ W32((u32)(r_ebp+0xfffffff4u), 0xc350u);
    /* 00457617: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0045761e: jmp 0x457629 */ goto L_00457629;
L_00457620:; BB(0x00457620);
    /* 00457620: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457623: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457626: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00457629:; BB(0x00457629);
    /* 00457629: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045762d: jge 0x457676 */ if ((fS==fO)) goto L_00457676;
L_0045762f:; BB(0x0045762f);
    /* 0045762f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457632: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457635: je 0x457674 */ if (fZ) goto L_00457674;
L_00457637:; BB(0x00457637);
    /* 00457637: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045763b: je 0x457674 */ if (fZ) goto L_00457674;
L_0045763d:; BB(0x0045763d);
    /* 0045763d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457640: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457641: mov ecx, dword ptr [0x790738] */ r_ecx = R32((u32)(0x790738u));
    /* 00457647: call 0x461f10 */ r_esp -= 4; W32(r_esp, 0x45764cu); f_00461f10();
    /* 0045764c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045764f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00457651: je 0x457674 */ if (fZ) goto L_00457674;
L_00457653:; BB(0x00457653);
    /* 00457653: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00457656: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00457657: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045765a: call 0x457320 */ r_esp -= 4; W32(r_esp, 0x45765fu); f_00457320();
    /* 0045765f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00457662: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00457665: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00457666: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00457669: call 0x457590 */ r_esp -= 4; W32(r_esp, 0x45766eu); f_00457590();
    /* 0045766e: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00457671: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00457674:; BB(0x00457674);
    /* 00457674: jmp 0x457620 */ goto L_00457620;
L_00457676:; BB(0x00457676);
    /* 00457676: cmp dword ptr [ebp - 4], 0xc350 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045767d: jle 0x457686 */ if ((fZ||fS!=fO)) goto L_00457686;
L_0045767f:; BB(0x0045767f);
    /* 0045767f: mov dword ptr [ebp - 4], 0xc350 */ W32((u32)(r_ebp+0xfffffffcu), 0xc350u);
L_00457686:; BB(0x00457686);
    /* 00457686: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00457689: mov esp, ebp */ r_esp = r_ebp;
    /* 0045768b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045768c: ret 4 */ FN_RET(0x00457600); r_esp += 8; return;
}


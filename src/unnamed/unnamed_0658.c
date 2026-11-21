#include "protos.h"

void f_006587b0(void) /* sub_6587B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006587b0);
    /* 006587b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006587b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006587b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006587b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 006587b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006587bb: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006587be: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6587c3u); f_00657890();
    /* 006587c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006587c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006587c8: jne 0x6587df */ if (!fZ) goto L_006587df;
L_006587ca:; BB(0x006587ca);
    /* 006587ca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006587cc: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006587cf: call 0x657890 */ r_esp -= 4; W32(r_esp, 0x6587d4u); f_00657890();
    /* 006587d4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006587d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006587d9: je 0x658873 */ if (fZ) goto L_00658873;
L_006587df:; BB(0x006587df);
    /* 006587df: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006587e6: jmp 0x6587f1 */ goto L_006587f1;
L_006587e8:; BB(0x006587e8);
    /* 006587e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006587eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006587ee: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006587f1:; BB(0x006587f1);
    /* 006587f1: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006587f5: jge 0x658873 */ if ((fS==fO)) goto L_00658873;
L_006587f7:; BB(0x006587f7);
    /* 006587f7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006587fa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006587fd: mov edx, dword ptr [ecx + eax*4 + 0x60c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 00658804: cmp dword ptr [edx + 0x218], 0 */ {  u32 a = R32((u32)(r_edx+0x218u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065880b: je 0x65886e */ if (fZ) goto L_0065886e;
L_0065880d:; BB(0x0065880d);
    /* 0065880d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658810: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00658813: mov edx, dword ptr [ecx + eax*4 + 0x60c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 0065881a: mov ecx, dword ptr [edx + 0x218] */ r_ecx = R32((u32)(r_edx+0x218u));
    /* 00658820: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x658825u); f_005f54a0();
    /* 00658825: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00658828: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065882a: je 0x65886e */ if (fZ) goto L_0065886e;
L_0065882c:; BB(0x0065882c);
    /* 0065882c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065882f: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00658835: call 0x664cb0 */ r_esp -= 4; W32(r_esp, 0x65883au); f_00664cb0();
    /* 0065883a: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0065883d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065883e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658841: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00658844: mov edx, dword ptr [ecx + eax*4 + 0x60c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 0065884b: mov eax, dword ptr [edx + 0x218] */ r_eax = R32((u32)(r_edx+0x218u));
    /* 00658851: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658854: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00658857: mov ecx, dword ptr [edx + ecx*4 + 0x60c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 0065885e: mov ecx, dword ptr [ecx + 0x218] */ r_ecx = R32((u32)(r_ecx+0x218u));
    /* 00658864: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00658866: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0065886c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65886eu); call_ind(t); }
L_0065886e:; BB(0x0065886e);
    /* 0065886e: jmp 0x6587e8 */ goto L_006587e8;
L_00658873:; BB(0x00658873);
    /* 00658873: mov esp, ebp */ r_esp = r_ebp;
    /* 00658875: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658876: ret  */ FN_RET(0x006587b0); r_esp += 4; return;
}

void f_00658880(void) /* sub_658880 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00658880);
    /* 00658880: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658881: mov ebp, esp */ r_ebp = r_esp;
    /* 00658883: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658886: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00658889: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0065888c: cmp dword ptr [eax + 0x278], 2 */ {  u32 a = R32((u32)(r_eax+0x278u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658893: jge 0x65889a */ if ((fS==fO)) goto L_0065889a;
L_00658895:; BB(0x00658895);
    /* 00658895: jmp 0x658b01 */ goto L_00658b01;
L_0065889a:; BB(0x0065889a);
    /* 0065889a: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 0065889e: mov byte ptr [ebp - 6], 0 */ W8((u32)(r_ebp+0xfffffffau), 0x0u);
    /* 006588a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006588a5: mov edx, dword ptr [ecx + 0x278] */ r_edx = R32((u32)(r_ecx+0x278u));
    /* 006588ab: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 006588ae: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006588b1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006588b4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006588b7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006588ba: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 006588bd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006588c0: call 0x657820 */ r_esp -= 4; W32(r_esp, 0x6588c5u); f_00657820();
    /* 006588c5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006588c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006588ca: je 0x65898f */ if (fZ) goto L_0065898f;
L_006588d0:; BB(0x006588d0);
    /* 006588d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006588d3: mov ecx, dword ptr [eax + 0x600] */ r_ecx = R32((u32)(r_eax+0x600u));
    /* 006588d9: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x6588deu); f_00606570();
    /* 006588de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006588e1: cmp dword ptr [ebp - 0x18], 0x3fd */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3fdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006588e8: je 0x658901 */ if (fZ) goto L_00658901;
L_006588ea:; BB(0x006588ea);
    /* 006588ea: cmp dword ptr [ebp - 0x18], 0x3fe */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006588f1: je 0x65892f */ if (fZ) goto L_0065892f;
L_006588f3:; BB(0x006588f3);
    /* 006588f3: cmp dword ptr [ebp - 0x18], 0x3ff */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x3ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006588fa: je 0x658963 */ if (fZ) goto L_00658963;
L_006588fc:; BB(0x006588fc);
    /* 006588fc: jmp 0x65898f */ goto L_0065898f;
L_00658901:; BB(0x00658901);
    /* 00658901: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 00658905: mov byte ptr [ebp - 6], 0 */ W8((u32)(r_ebp+0xfffffffau), 0x0u);
    /* 00658909: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065890c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0065890f: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658913: je 0x65891d */ if (fZ) goto L_0065891d;
L_00658915:; BB(0x00658915);
    /* 00658915: cmp dword ptr [ebp - 0x1c], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658919: je 0x658926 */ if (fZ) goto L_00658926;
L_0065891b:; BB(0x0065891b);
    /* 0065891b: jmp 0x65892d */ goto L_0065892d;
L_0065891d:; BB(0x0065891d);
    /* 0065891d: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00658924: jmp 0x65892d */ goto L_0065892d;
L_00658926:; BB(0x00658926);
    /* 00658926: mov dword ptr [ebp - 0x10], 8 */ W32((u32)(r_ebp+0xfffffff0u), 0x8u);
L_0065892d:; BB(0x0065892d);
    /* 0065892d: jmp 0x65898f */ goto L_0065898f;
L_0065892f:; BB(0x0065892f);
    /* 0065892f: mov byte ptr [ebp - 5], 0 */ W8((u32)(r_ebp+0xfffffffbu), 0x0u);
    /* 00658933: mov byte ptr [ebp - 6], 1 */ W8((u32)(r_ebp+0xfffffffau), 0x1u);
    /* 00658937: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065893a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0065893d: cmp dword ptr [ebp - 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658941: je 0x65894b */ if (fZ) goto L_0065894b;
L_00658943:; BB(0x00658943);
    /* 00658943: cmp dword ptr [ebp - 0x20], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658947: je 0x658954 */ if (fZ) goto L_00658954;
L_00658949:; BB(0x00658949);
    /* 00658949: jmp 0x65895b */ goto L_0065895b;
L_0065894b:; BB(0x0065894b);
    /* 0065894b: mov dword ptr [ebp - 0x10], 4 */ W32((u32)(r_ebp+0xfffffff0u), 0x4u);
    /* 00658952: jmp 0x65895b */ goto L_0065895b;
L_00658954:; BB(0x00658954);
    /* 00658954: mov dword ptr [ebp - 0x10], 9 */ W32((u32)(r_ebp+0xfffffff0u), 0x9u);
L_0065895b:; BB(0x0065895b);
    /* 0065895b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065895e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00658961: jmp 0x65898f */ goto L_0065898f;
L_00658963:; BB(0x00658963);
    /* 00658963: mov byte ptr [ebp - 5], 1 */ W8((u32)(r_ebp+0xfffffffbu), 0x1u);
    /* 00658967: mov byte ptr [ebp - 6], 1 */ W8((u32)(r_ebp+0xfffffffau), 0x1u);
    /* 0065896b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065896e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00658971: cmp dword ptr [ebp - 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658975: je 0x65897f */ if (fZ) goto L_0065897f;
L_00658977:; BB(0x00658977);
    /* 00658977: cmp dword ptr [ebp - 0x24], 9 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065897b: je 0x658988 */ if (fZ) goto L_00658988;
L_0065897d:; BB(0x0065897d);
    /* 0065897d: jmp 0x65898f */ goto L_0065898f;
L_0065897f:; BB(0x0065897f);
    /* 0065897f: mov dword ptr [ebp - 0x10], 3 */ W32((u32)(r_ebp+0xfffffff0u), 0x3u);
    /* 00658986: jmp 0x65898f */ goto L_0065898f;
L_00658988:; BB(0x00658988);
    /* 00658988: mov dword ptr [ebp - 0x10], 8 */ W32((u32)(r_ebp+0xfffffff0u), 0x8u);
L_0065898f:; BB(0x0065898f);
    /* 0065898f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00658992: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00658995: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00658999: ja 0x658b01 */ if ((!fC&&!fZ)) goto L_00658b01;
L_0065899f:; BB(0x0065899f);
    /* 0065899f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006589a2: jmp dword ptr [eax*4 + 0x658b08] */ { u32 t = R32((u32)(r_eax*4+0x658b08u)); switch (t) { case 0x6589a9u: goto L_006589a9; case 0x658a59u: goto L_00658a59; case 0x658a01u: goto L_00658a01; case 0x658aaeu: goto L_00658aae; default: UNSUP(0x006589a2, "jump table entry is not a known target"); } }
L_006589a9:; BB(0x006589a9);
    /* 006589a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006589ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006589ad: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006589b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006589b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006589b4: call 0x658d40 */ r_esp -= 4; W32(r_esp, 0x6589b9u); f_00658d40();
    /* 006589b9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006589bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006589be: je 0x6589fc */ if (fZ) goto L_006589fc;
L_006589c0:; BB(0x006589c0);
    /* 006589c0: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 006589c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006589c6: je 0x6589de */ if (fZ) goto L_006589de;
L_006589c8:; BB(0x006589c8);
    /* 006589c8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006589ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006589cc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006589cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006589d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006589d3: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 006589d9: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x6589deu); f_00665140();
L_006589de:; BB(0x006589de);
    /* 006589de: movzx ecx, byte ptr [ebp - 6] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 006589e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006589e4: je 0x6589fc */ if (fZ) goto L_006589fc;
L_006589e6:; BB(0x006589e6);
    /* 006589e6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006589e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006589ea: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006589ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006589ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006589f1: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 006589f7: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x6589fcu); f_00665140();
L_006589fc:; BB(0x006589fc);
    /* 006589fc: jmp 0x658b01 */ goto L_00658b01;
L_00658a01:; BB(0x00658a01);
    /* 00658a01: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00658a04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a05: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00658a08: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a09: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00658a0c: call 0x658d40 */ r_esp -= 4; W32(r_esp, 0x658a11u); f_00658d40();
    /* 00658a11: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00658a14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a16: je 0x658a54 */ if (fZ) goto L_00658a54;
L_00658a18:; BB(0x00658a18);
    /* 00658a18: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00658a1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a1e: je 0x658a36 */ if (fZ) goto L_00658a36;
L_00658a20:; BB(0x00658a20);
    /* 00658a20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a24: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658a27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a28: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00658a2b: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658a31: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x658a36u); f_00665140();
L_00658a36:; BB(0x00658a36);
    /* 00658a36: movzx ecx, byte ptr [ebp - 6] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 00658a3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a3c: je 0x658a54 */ if (fZ) goto L_00658a54;
L_00658a3e:; BB(0x00658a3e);
    /* 00658a3e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a40: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a42: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658a45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00658a49: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658a4f: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x658a54u); f_00665140();
L_00658a54:; BB(0x00658a54);
    /* 00658a54: jmp 0x658b01 */ goto L_00658b01;
L_00658a59:; BB(0x00658a59);
    /* 00658a59: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00658a5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a5d: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00658a60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a61: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00658a64: call 0x658d40 */ r_esp -= 4; W32(r_esp, 0x658a69u); f_00658d40();
    /* 00658a69: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00658a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a6e: je 0x658aac */ if (fZ) goto L_00658aac;
L_00658a70:; BB(0x00658a70);
    /* 00658a70: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00658a74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a76: je 0x658a8e */ if (fZ) goto L_00658a8e;
L_00658a78:; BB(0x00658a78);
    /* 00658a78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a7c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658a7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00658a83: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658a89: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x658a8eu); f_00665140();
L_00658a8e:; BB(0x00658a8e);
    /* 00658a8e: movzx ecx, byte ptr [ebp - 6] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 00658a92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658a94: je 0x658aac */ if (fZ) goto L_00658aac;
L_00658a96:; BB(0x00658a96);
    /* 00658a96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658a9a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658a9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658a9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00658aa1: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658aa7: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x658aacu); f_00665140();
L_00658aac:; BB(0x00658aac);
    /* 00658aac: jmp 0x658b01 */ goto L_00658b01;
L_00658aae:; BB(0x00658aae);
    /* 00658aae: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00658ab1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658ab2: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00658ab5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658ab6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00658ab9: call 0x658d40 */ r_esp -= 4; W32(r_esp, 0x658abeu); f_00658d40();
    /* 00658abe: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00658ac1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658ac3: je 0x658b01 */ if (fZ) goto L_00658b01;
L_00658ac5:; BB(0x00658ac5);
    /* 00658ac5: movzx ecx, byte ptr [ebp - 5] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffbu));
    /* 00658ac9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658acb: je 0x658ae3 */ if (fZ) goto L_00658ae3;
L_00658acd:; BB(0x00658acd);
    /* 00658acd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658acf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658ad1: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658ad4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658ad5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00658ad8: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658ade: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x658ae3u); f_00665140();
L_00658ae3:; BB(0x00658ae3);
    /* 00658ae3: movzx ecx, byte ptr [ebp - 6] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffffau));
    /* 00658ae7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658ae9: je 0x658b01 */ if (fZ) goto L_00658b01;
L_00658aeb:; BB(0x00658aeb);
    /* 00658aeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658aed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00658aef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658af2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658af3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00658af6: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658afc: call 0x665140 */ r_esp -= 4; W32(r_esp, 0x658b01u); f_00665140();
L_00658b01:; BB(0x00658b01);
    /* 00658b01: mov esp, ebp */ r_esp = r_ebp;
    /* 00658b03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658b04: ret 4 */ FN_RET(0x00658880); r_esp += 8; return;
}

void f_00658d40(void) /* sub_658D40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00658d40);
    /* 00658d40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658d41: mov ebp, esp */ r_ebp = r_esp;
    /* 00658d43: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658d46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00658d47: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00658d4a: cmp dword ptr [ebp + 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658d4e: jne 0x658d5c */ if (!fZ) goto L_00658d5c;
L_00658d50:; BB(0x00658d50);
    /* 00658d50: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658d53: mov ecx, dword ptr [eax + 0x278] */ r_ecx = R32((u32)(r_eax+0x278u));
    /* 00658d59: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00658d5c:; BB(0x00658d5c);
    /* 00658d5c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00658d5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658d60: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658d63: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658d69: call 0x6651c0 */ r_esp -= 4; W32(r_esp, 0x658d6eu); f_006651c0();
    /* 00658d6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658d70: jne 0x658d79 */ if (!fZ) goto L_00658d79;
L_00658d72:; BB(0x00658d72);
    /* 00658d72: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00658d74: jmp 0x658f4d */ goto L_00658f4d;
L_00658d79:; BB(0x00658d79);
    /* 00658d79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658d7c: call 0x6596d0 */ r_esp -= 4; W32(r_esp, 0x658d81u); f_006596d0();
    /* 00658d81: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00658d84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658d86: je 0x658e6c */ if (fZ) goto L_00658e6c;
L_00658d8c:; BB(0x00658d8c);
    /* 00658d8c: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 00658d90: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00658d93: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00658d97: ja 0x658e6c */ if ((!fC&&!fZ)) goto L_00658e6c;
L_00658d9d:; BB(0x00658d9d);
    /* 00658d9d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00658da0: jmp dword ptr [eax*4 + 0x658f54] */ { u32 t = R32((u32)(r_eax*4+0x658f54u)); switch (t) { case 0x658da7u: goto L_00658da7; case 0x658e0cu: goto L_00658e0c; case 0x658ddbu: goto L_00658ddb; case 0x658e3du: goto L_00658e3d; case 0x658e87u: goto L_00658e87; case 0x658eedu: goto L_00658eed; case 0x658ebdu: goto L_00658ebd; case 0x658f1du: goto L_00658f1d; default: UNSUP(0x00658da0, "jump table entry is not a known target"); } }
L_00658da7:; BB(0x00658da7);
    /* 00658da7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658daa: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00658db0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658db3: movsx ecx, byte ptr [edx + eax + 0x4e] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x4eu));
    /* 00658db8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658dbb: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00658dc1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00658dc4: movsx eax, byte ptr [eax + edx + 0x4d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x4du));
    /* 00658dc9: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658dcb: jge 0x658dd6 */ if ((fS==fO)) goto L_00658dd6;
L_00658dcd:; BB(0x00658dcd);
    /* 00658dcd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00658dd0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00658dd3: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00658dd6:; BB(0x00658dd6);
    /* 00658dd6: jmp 0x658e6c */ goto L_00658e6c;
L_00658ddb:; BB(0x00658ddb);
    /* 00658ddb: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658dde: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00658de4: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00658de7: movsx edx, byte ptr [eax + ecx + 0x4e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx+0x4eu));
    /* 00658dec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658def: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658df5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658df8: movsx ecx, byte ptr [ecx + eax + 0x4d] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax+0x4du));
    /* 00658dfd: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658dff: jle 0x658e0a */ if ((fZ||fS!=fO)) goto L_00658e0a;
L_00658e01:; BB(0x00658e01);
    /* 00658e01: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00658e04: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00658e07: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
L_00658e0a:; BB(0x00658e0a);
    /* 00658e0a: jmp 0x658e6c */ goto L_00658e6c;
L_00658e0c:; BB(0x00658e0c);
    /* 00658e0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658e0f: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658e15: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00658e18: movsx eax, byte ptr [ecx + edx + 0x41] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_edx+0x41u));
    /* 00658e1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658e20: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00658e26: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00658e29: movsx edx, byte ptr [edx + ecx + 0x42] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+r_ecx+0x42u));
    /* 00658e2e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658e30: jg 0x658e3b */ if ((!fZ&&fS==fO)) goto L_00658e3b;
L_00658e32:; BB(0x00658e32);
    /* 00658e32: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658e35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00658e38: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_00658e3b:; BB(0x00658e3b);
    /* 00658e3b: jmp 0x658e6c */ goto L_00658e6c;
L_00658e3d:; BB(0x00658e3d);
    /* 00658e3d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658e40: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00658e46: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658e49: movsx ecx, byte ptr [edx + eax + 0x42] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x42u));
    /* 00658e4e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658e51: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00658e57: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00658e5a: movsx eax, byte ptr [eax + edx + 0x41] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x41u));
    /* 00658e5f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658e61: jge 0x658e6c */ if ((fS==fO)) goto L_00658e6c;
L_00658e63:; BB(0x00658e63);
    /* 00658e63: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00658e66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00658e69: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
L_00658e6c:; BB(0x00658e6c);
    /* 00658e6c: movsx edx, byte ptr [ebp + 8] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x8u));
    /* 00658e70: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00658e73: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00658e77: ja 0x658f4b */ if ((!fC&&!fZ)) goto L_00658f4b;
L_00658e7d:; BB(0x00658e7d);
    /* 00658e7d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00658e80: jmp dword ptr [eax*4 + 0x658f64] */ { u32 t = R32((u32)(r_eax*4+0x658f64u)); switch (t) { case 0x658e3du: goto L_00658e3d; case 0x658ddbu: goto L_00658ddb; case 0x658e0cu: goto L_00658e0c; case 0x658da7u: goto L_00658da7; case 0x658e87u: goto L_00658e87; case 0x658eedu: goto L_00658eed; case 0x658ebdu: goto L_00658ebd; case 0x658f1du: goto L_00658f1d; default: UNSUP(0x00658e80, "jump table entry is not a known target"); } }
L_00658e87:; BB(0x00658e87);
    /* 00658e87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658e8a: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00658e90: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658e93: movsx esi, byte ptr [edx + eax + 0x4d] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x4du));
    /* 00658e98: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00658e9b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00658e9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658e9f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658ea2: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00658ea8: call 0x664d40 */ r_esp -= 4; W32(r_esp, 0x658eadu); f_00664d40();
    /* 00658ead: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658eaf: jl 0x658eb8 */ if ((fS!=fO)) goto L_00658eb8;
L_00658eb1:; BB(0x00658eb1);
    /* 00658eb1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00658eb3: jmp 0x658f4d */ goto L_00658f4d;
L_00658eb8:; BB(0x00658eb8);
    /* 00658eb8: jmp 0x658f4b */ goto L_00658f4b;
L_00658ebd:; BB(0x00658ebd);
    /* 00658ebd: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658ec0: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658ec6: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00658ec9: movsx esi, byte ptr [ecx + edx + 0x4d] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ecx+r_edx+0x4du));
    /* 00658ece: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00658ed1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658ed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658ed5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658ed8: mov ecx, dword ptr [ecx + 0x1dc] */ r_ecx = R32((u32)(r_ecx+0x1dcu));
    /* 00658ede: call 0x664dd0 */ r_esp -= 4; W32(r_esp, 0x658ee3u); f_00664dd0();
    /* 00658ee3: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658ee5: jg 0x658eeb */ if ((!fZ&&fS==fO)) goto L_00658eeb;
L_00658ee7:; BB(0x00658ee7);
    /* 00658ee7: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00658ee9: jmp 0x658f4d */ goto L_00658f4d;
L_00658eeb:; BB(0x00658eeb);
    /* 00658eeb: jmp 0x658f4b */ goto L_00658f4b;
L_00658eed:; BB(0x00658eed);
    /* 00658eed: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658ef0: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 00658ef6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00658ef9: movsx esi, byte ptr [eax + ecx + 0x41] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+r_ecx+0x41u));
    /* 00658efe: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00658f01: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00658f04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00658f05: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658f08: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 00658f0e: call 0x664f50 */ r_esp -= 4; W32(r_esp, 0x658f13u); f_00664f50();
    /* 00658f13: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658f15: jg 0x658f1b */ if ((!fZ&&fS==fO)) goto L_00658f1b;
L_00658f17:; BB(0x00658f17);
    /* 00658f17: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00658f19: jmp 0x658f4d */ goto L_00658f4d;
L_00658f1b:; BB(0x00658f1b);
    /* 00658f1b: jmp 0x658f4b */ goto L_00658f4b;
L_00658f1d:; BB(0x00658f1d);
    /* 00658f1d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658f20: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 00658f26: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00658f29: movsx esi, byte ptr [edx + eax + 0x41] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+r_eax+0x41u));
    /* 00658f2e: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00658f31: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00658f34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00658f35: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00658f38: mov ecx, dword ptr [edx + 0x1dc] */ r_ecx = R32((u32)(r_edx+0x1dcu));
    /* 00658f3e: call 0x664ec0 */ r_esp -= 4; W32(r_esp, 0x658f43u); f_00664ec0();
    /* 00658f43: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00658f45: jl 0x658f4b */ if ((fS!=fO)) goto L_00658f4b;
L_00658f47:; BB(0x00658f47);
    /* 00658f47: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00658f49: jmp 0x658f4d */ goto L_00658f4d;
L_00658f4b:; BB(0x00658f4b);
    /* 00658f4b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00658f4d:; BB(0x00658f4d);
    /* 00658f4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00658f4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00658f50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00658f51: ret 8 */ FN_RET(0x00658d40); r_esp += 12; return;
}

void f_00658f80(void) /* sub_658F80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00658f80);
    /* 00658f80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00658f81: mov ebp, esp */ r_ebp = r_esp;
    /* 00658f83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00658f85: push 0x6ac68d */ { u32 v = 0x6ac68du; r_esp -= 4; W32(r_esp, v); }
    /* 00658f8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00658f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658f91: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00658f94: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00658f99: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00658f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00658f9c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00658f9f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00658fa5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00658fa8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658fab: cmp dword ptr [eax + 0x608], 0 */ {  u32 a = R32((u32)(r_eax+0x608u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658fb2: jne 0x659023 */ if (!fZ) goto L_00659023;
L_00658fb4:; BB(0x00658fb4);
    /* 00658fb4: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00658fb6: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x658fbbu); f_00686d82();
    /* 00658fbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00658fbe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00658fc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00658fc8: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00658fcc: je 0x658fdb */ if (fZ) goto L_00658fdb;
L_00658fce:; BB(0x00658fce);
    /* 00658fce: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00658fd1: call 0x6061c0 */ r_esp -= 4; W32(r_esp, 0x658fd6u); f_006061c0();
    /* 00658fd6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00658fd9: jmp 0x658fe2 */ goto L_00658fe2;
L_00658fdb:; BB(0x00658fdb);
    /* 00658fdb: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00658fe2:; BB(0x00658fe2);
    /* 00658fe2: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00658fe5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00658fe8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00658fef: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658ff2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00658ff5: mov dword ptr [edx + 0x608], eax */ W32((u32)(r_edx+0x608u), r_eax);
    /* 00658ffb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00658ffe: mov edx, dword ptr [ecx + 0x608] */ r_edx = R32((u32)(r_ecx+0x608u));
    /* 00659004: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659007: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0065900a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065900d: mov edx, dword ptr [ecx + 0x608] */ r_edx = R32((u32)(r_ecx+0x608u));
    /* 00659013: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659016: mov ecx, dword ptr [eax + 0x608] */ r_ecx = R32((u32)(r_eax+0x608u));
    /* 0065901c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0065901e: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00659021: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x659023u); call_ind(t); }
L_00659023:; BB(0x00659023);
    /* 00659023: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659026: mov edx, dword ptr [ecx + 0x608] */ r_edx = R32((u32)(r_ecx+0x608u));
    /* 0065902c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065902f: mov ecx, dword ptr [eax + 0x608] */ r_ecx = R32((u32)(r_eax+0x608u));
    /* 00659035: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00659037: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065903a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65903cu); call_ind(t); }
    /* 0065903c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065903f: mov ecx, dword ptr [ecx + 0x608] */ r_ecx = R32((u32)(r_ecx+0x608u));
    /* 00659045: call 0x6067e0 */ r_esp -= 4; W32(r_esp, 0x65904au); f_006067e0();
    /* 0065904a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065904d: mov ecx, dword ptr [edx + 0x608] */ r_ecx = R32((u32)(r_edx+0x608u));
    /* 00659053: call 0x606830 */ r_esp -= 4; W32(r_esp, 0x659058u); f_00606830();
    /* 00659058: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0065905f: jmp 0x65906a */ goto L_0065906a;
L_00659061:; BB(0x00659061);
    /* 00659061: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00659064: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00659067: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0065906a:; BB(0x0065906a);
    /* 0065906a: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065906e: jge 0x65917f */ if ((fS==fO)) goto L_0065917f;
L_00659074:; BB(0x00659074);
    /* 00659074: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00659077: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065907a: cmp dword ptr [edx + ecx*4 + 0x60c], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x60cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00659082: jne 0x6590d2 */ if (!fZ) goto L_006590d2;
L_00659084:; BB(0x00659084);
    /* 00659084: push 0x23c */ { u32 v = 0x23cu; r_esp -= 4; W32(r_esp, v); }
    /* 00659089: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65908eu); f_00686d82();
    /* 0065908e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00659091: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00659094: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0065909b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065909f: je 0x6590ae */ if (fZ) goto L_006590ae;
L_006590a1:; BB(0x006590a1);
    /* 006590a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006590a4: call 0x65a750 */ r_esp -= 4; W32(r_esp, 0x6590a9u); f_0065a750();
    /* 006590a9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006590ac: jmp 0x6590b5 */ goto L_006590b5;
L_006590ae:; BB(0x006590ae);
    /* 006590ae: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006590b5:; BB(0x006590b5);
    /* 006590b5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006590b8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006590bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006590c2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006590c5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006590c8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006590cb: mov dword ptr [edx + ecx*4 + 0x60c], eax */ W32((u32)(r_edx+r_ecx*4+0x60cu), r_eax);
L_006590d2:; BB(0x006590d2);
    /* 006590d2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006590d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006590d6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006590d9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006590dc: mov ecx, dword ptr [eax + edx*4 + 0x60c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 006590e3: call 0x5f53e0 */ r_esp -= 4; W32(r_esp, 0x6590e8u); f_005f53e0();
    /* 006590e8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006590eb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006590ee: mov eax, dword ptr [edx + ecx*4 + 0x60c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 006590f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006590f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006590f9: mov ecx, dword ptr [ecx + 0x608] */ r_ecx = R32((u32)(r_ecx+0x608u));
    /* 006590ff: call 0x6062a0 */ r_esp -= 4; W32(r_esp, 0x659104u); f_006062a0();
    /* 00659104: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00659107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00659108: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065910a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065910c: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00659110: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 00659113: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00659116: and eax, 0xffffffa9 */ {  u32 a = r_eax; u32 b = 0xffffffa9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00659119: add eax, 0x5b */ {  u32 a = r_eax; u32 b = 0x5bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065911c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065911d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00659120: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00659121: mov ecx, 6 */ r_ecx = 0x6u;
    /* 00659126: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00659126, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00659126, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00659128: imul edx, edx, 0x67 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x67u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065912b: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065912e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065912f: push 0x1e84a5 */ { u32 v = 0x1e84a5u; r_esp -= 4; W32(r_esp, v); }
    /* 00659134: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00659137: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065913a: mov ecx, dword ptr [eax + edx*4 + 0x60c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60cu));
    /* 00659141: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x659146u); f_005eae80();
    /* 00659146: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00659148: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065914a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065914c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065914e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00659150: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00659152: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00659154: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00659156: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00659159: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065915c: mov ecx, dword ptr [edx + ecx*4 + 0x60c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x60cu));
    /* 00659163: call 0x5fff90 */ r_esp -= 4; W32(r_esp, 0x659168u); f_005fff90();
    /* 00659168: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065916b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065916e: mov ecx, dword ptr [ecx + eax*4 + 0x60c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x60cu));
    /* 00659175: call 0x65adb0 */ r_esp -= 4; W32(r_esp, 0x65917au); f_0065adb0();
    /* 0065917a: jmp 0x659061 */ goto L_00659061;
L_0065917f:; BB(0x0065917f);
    /* 0065917f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00659182: mov eax, dword ptr [edx + 0x608] */ r_eax = R32((u32)(r_edx+0x608u));
    /* 00659188: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065918b: mov ecx, dword ptr [ecx + 0x608] */ r_ecx = R32((u32)(r_ecx+0x608u));
    /* 00659191: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00659193: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00659196: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x659198u); call_ind(t); }
    /* 00659198: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065919b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006591a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006591a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006591a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006591a6: ret 4 */ FN_RET(0x00658f80); r_esp += 8; return;
}


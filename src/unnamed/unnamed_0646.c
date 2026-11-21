#include "protos.h"

void f_00646150(void) /* sub_646150 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646150);
    /* 00646150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646151: mov ebp, esp */ r_ebp = r_esp;
    /* 00646153: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646156: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00646159: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064615c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064615d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00646160: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646161: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646164: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646167: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064616a: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0064616d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064616f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00646172: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646174u); call_ind(t); }
    /* 00646174: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00646177: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646178: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064617b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064617c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064617f: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00646182: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646185: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00646188: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064618a: mov ecx, eax */ r_ecx = r_eax;
    /* 0064618c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0064618f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646191u); call_ind(t); }
    /* 00646191: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646194: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646198: je 0x64621e */ if (fZ) goto L_0064621e;
L_0064619e:; BB(0x0064619e);
    /* 0064619e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006461a1: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006461a5: je 0x64621e */ if (fZ) goto L_0064621e;
L_006461a7:; BB(0x006461a7);
    /* 006461a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006461aa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006461ad: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006461b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006461b3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6461b8u); f_0063aac0();
    /* 006461b8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006461ba: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 006461bd: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006461c1: je 0x6461df */ if (fZ) goto L_006461df;
L_006461c3:; BB(0x006461c3);
    /* 006461c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006461c6: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6461cbu); f_0063aac0();
    /* 006461cb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006461cd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006461d0: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006461d4: je 0x6461df */ if (fZ) goto L_006461df;
L_006461d6:; BB(0x006461d6);
    /* 006461d6: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 006461dd: jmp 0x6461e6 */ goto L_006461e6;
L_006461df:; BB(0x006461df);
    /* 006461df: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_006461e6:; BB(0x006461e6);
    /* 006461e6: movzx ecx, byte ptr [ebp - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 006461ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006461ec: je 0x64621e */ if (fZ) goto L_0064621e;
L_006461ee:; BB(0x006461ee);
    /* 006461ee: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006461f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006461f2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006461f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006461f6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006461f9: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 006461fc: call 0x6643f0 */ r_esp -= 4; W32(r_esp, 0x646201u); f_006643f0();
    /* 00646201: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646204: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00646207: call 0x664710 */ r_esp -= 4; W32(r_esp, 0x64620cu); f_00664710();
    /* 0064620c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0064620f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646211: je 0x64621e */ if (fZ) goto L_0064621e;
L_00646213:; BB(0x00646213);
    /* 00646213: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646216: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00646219: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x64621eu); f_00664630();
L_0064621e:; BB(0x0064621e);
    /* 0064621e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646221: movzx eax, byte ptr [edx + 0x2a] */ r_eax = (u32)R8((u32)(r_edx+0x2au));
    /* 00646225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646227: jne 0x64622e */ if (!fZ) goto L_0064622e;
L_00646229:; BB(0x00646229);
    /* 00646229: jmp 0x646372 */ goto L_00646372;
L_0064622e:; BB(0x0064622e);
    /* 0064622e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646231: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646232: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646235: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00646238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646239: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064623f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646241: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646247: mov eax, dword ptr [edx + 0x1ac] */ r_eax = R32((u32)(r_edx+0x1acu));
    /* 0064624d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64624fu); call_ind(t); }
    /* 0064624f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646252: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646253: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646256: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00646259: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064625a: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646260: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646262: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646268: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 0064626e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646270u); call_ind(t); }
    /* 00646270: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646273: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646274: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646277: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0064627a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064627b: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646281: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646283: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646289: mov eax, dword ptr [edx + 0x1b4] */ r_eax = R32((u32)(r_edx+0x1b4u));
    /* 0064628f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646291u); call_ind(t); }
    /* 00646291: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646294: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646298: je 0x646372 */ if (fZ) goto L_00646372;
L_0064629e:; BB(0x0064629e);
    /* 0064629e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006462a1: movzx eax, byte ptr [edx + 0x2b] */ r_eax = (u32)R8((u32)(r_edx+0x2bu));
    /* 006462a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006462a7: jne 0x6462c1 */ if (!fZ) goto L_006462c1;
L_006462a9:; BB(0x006462a9);
    /* 006462a9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006462ac: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 006462af: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006462b2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006462b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006462b7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006462ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6462bcu); call_ind(t); }
    /* 006462bc: jmp 0x646372 */ goto L_00646372;
L_006462c1:; BB(0x006462c1);
    /* 006462c1: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006462c4: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006462c8: je 0x646372 */ if (fZ) goto L_00646372;
L_006462ce:; BB(0x006462ce);
    /* 006462ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006462d1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006462d4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006462d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006462d8: mov edx, dword ptr [0x162ee80] */ r_edx = R32((u32)(0x162ee80u));
    /* 006462de: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006462e0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 006462e6: mov edx, dword ptr [eax + 0x1d4] */ r_edx = R32((u32)(r_eax+0x1d4u));
    /* 006462ec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6462eeu); call_ind(t); }
    /* 006462ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006462ef: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006462f2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006462f5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006462f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006462f9: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 006462fe: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646300: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646306: mov eax, dword ptr [edx + 0x1d0] */ r_eax = R32((u32)(r_edx+0x1d0u));
    /* 0064630c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64630eu); call_ind(t); }
    /* 0064630e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064630f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646312: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00646315: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646318: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0064631b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064631d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00646320: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646322u); call_ind(t); }
    /* 00646322: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646325: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00646328: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0064632b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064632e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x646333u); f_0063aac0();
    /* 00646333: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00646335: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00646338: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064633a: cmp dword ptr [ebp - 0x10], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064633e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00646341: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00646344: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646346: je 0x64635f */ if (fZ) goto L_0064635f;
L_00646348:; BB(0x00646348);
    /* 00646348: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064634b: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0064634e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646351: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00646354: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646356: mov ecx, eax */ r_ecx = r_eax;
    /* 00646358: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064635b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64635du); call_ind(t); }
    /* 0064635d: jmp 0x646372 */ goto L_00646372;
L_0064635f:; BB(0x0064635f);
    /* 0064635f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646362: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00646365: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646368: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0064636b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064636d: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646370: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646372u); call_ind(t); }
L_00646372:; BB(0x00646372);
    /* 00646372: mov esp, ebp */ r_esp = r_ebp;
    /* 00646374: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646375: ret 8 */ FN_RET(0x00646150); r_esp += 12; return;
}

void f_00646380(void) /* sub_646380 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646380);
    /* 00646380: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646381: mov ebp, esp */ r_ebp = r_esp;
    /* 00646383: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646386: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00646389: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064638c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064638f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00646392: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00646395: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64639au); f_0063aac0();
    /* 0064639a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064639c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0064639f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006463a1: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006463a5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006463a8: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006463ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006463ad: je 0x6463df */ if (fZ) goto L_006463df;
L_006463af:; BB(0x006463af);
    /* 006463af: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006463b2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006463b5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006463b8: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 006463bb: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006463bf: jne 0x6463df */ if (!fZ) goto L_006463df;
L_006463c1:; BB(0x006463c1);
    /* 006463c1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006463c4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006463c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006463c8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006463cb: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006463ce: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006463d1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006463d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006463d6: mov ecx, eax */ r_ecx = r_eax;
    /* 006463d8: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006463db: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6463ddu); call_ind(t); }
    /* 006463dd: jmp 0x6463f9 */ goto L_006463f9;
L_006463df:; BB(0x006463df);
    /* 006463df: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006463e2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006463e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006463e6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006463e9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006463ec: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006463ef: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006463f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006463f4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006463f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6463f9u); call_ind(t); }
L_006463f9:; BB(0x006463f9);
    /* 006463f9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006463fc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006463fd: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646400: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646403: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646406: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00646409: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064640b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064640e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646410u); call_ind(t); }
    /* 00646410: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646413: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646417: je 0x646478 */ if (fZ) goto L_00646478;
L_00646419:; BB(0x00646419);
    /* 00646419: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064641c: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646420: je 0x646478 */ if (fZ) goto L_00646478;
L_00646422:; BB(0x00646422);
    /* 00646422: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646425: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00646428: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0064642b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064642e: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x646433u); f_0063aac0();
    /* 00646433: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646435: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00646438: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064643c: je 0x64645a */ if (fZ) goto L_0064645a;
L_0064643e:; BB(0x0064643e);
    /* 0064643e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00646441: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x646446u); f_0063aac0();
    /* 00646446: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00646448: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064644b: cmp dword ptr [ebp - 0x14], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064644f: je 0x64645a */ if (fZ) goto L_0064645a;
L_00646451:; BB(0x00646451);
    /* 00646451: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 00646458: jmp 0x646461 */ goto L_00646461;
L_0064645a:; BB(0x0064645a);
    /* 0064645a: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_00646461:; BB(0x00646461);
    /* 00646461: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 00646465: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646467: je 0x646478 */ if (fZ) goto L_00646478;
L_00646469:; BB(0x00646469);
    /* 00646469: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0064646c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064646d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646470: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00646473: call 0x664480 */ r_esp -= 4; W32(r_esp, 0x646478u); f_00664480();
L_00646478:; BB(0x00646478);
    /* 00646478: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064647b: movzx edx, byte ptr [ecx + 0x2a] */ r_edx = (u32)R8((u32)(r_ecx+0x2au));
    /* 0064647f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646481: jne 0x646485 */ if (!fZ) goto L_00646485;
L_00646483:; BB(0x00646483);
    /* 00646483: jmp 0x6464c9 */ goto L_006464c9;
L_00646485:; BB(0x00646485);
    /* 00646485: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00646488: add eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0064648d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064648e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646491: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00646494: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00646497: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0064649a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064649c: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0064649f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6464a1u); call_ind(t); }
    /* 006464a1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006464a4: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006464a8: je 0x6464c9 */ if (fZ) goto L_006464c9;
L_006464aa:; BB(0x006464aa);
    /* 006464aa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006464ad: add edx, 0xc9 */ {  u32 a = r_edx; u32 b = 0xc9u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006464b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006464b4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006464b7: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006464ba: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006464bd: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006464c0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006464c2: mov ecx, eax */ r_ecx = r_eax;
    /* 006464c4: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 006464c7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6464c9u); call_ind(t); }
L_006464c9:; BB(0x006464c9);
    /* 006464c9: mov esp, ebp */ r_esp = r_ebp;
    /* 006464cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006464cc: ret 4 */ FN_RET(0x00646380); r_esp += 8; return;
}

void f_006464d0(void) /* sub_6464D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006464d0);
    /* 006464d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006464d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006464d3: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006464d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006464d7: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 006464da: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006464dd: mov byte ptr [eax + 0x5c], 1 */ W8((u32)(r_eax+0x5cu), 0x1u);
    /* 006464e1: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 006464e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006464e5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006464e8: call 0x646c20 */ r_esp -= 4; W32(r_esp, 0x6464edu); f_00646c20();
    /* 006464ed: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006464f0: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006464f3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006464f6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006464f9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6464feu); f_0063aac0();
    /* 006464fe: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00646500: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00646503: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00646505: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646509: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0064650c: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0064650f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646511: je 0x64654c */ if (fZ) goto L_0064654c;
L_00646513:; BB(0x00646513);
    /* 00646513: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646516: movzx edx, byte ptr [ecx + 0x2a] */ r_edx = (u32)R8((u32)(r_ecx+0x2au));
    /* 0064651a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064651c: je 0x646547 */ if (fZ) goto L_00646547;
L_0064651e:; BB(0x0064651e);
    /* 0064651e: mov eax, dword ptr [0x162ee80] */ r_eax = R32((u32)(0x162ee80u));
    /* 00646523: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646525: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0064652b: mov eax, dword ptr [edx + 0x198] */ r_eax = R32((u32)(r_edx+0x198u));
    /* 00646531: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646533u); call_ind(t); }
    /* 00646533: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00646536: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646538: je 0x646547 */ if (fZ) goto L_00646547;
L_0064653a:; BB(0x0064653a);
    /* 0064653a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064653c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064653f: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00646542: call 0x64afa0 */ r_esp -= 4; W32(r_esp, 0x646547u); f_0064afa0();
L_00646547:; BB(0x00646547);
    /* 00646547: jmp 0x646c0f */ goto L_00646c0f;
L_0064654c:; BB(0x0064654c);
    /* 0064654c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064654f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00646552: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00646555: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00646558: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x64655du); f_0063aac0();
    /* 0064655d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064655f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00646562: cmp dword ptr [ebp - 0x18], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646566: je 0x646584 */ if (fZ) goto L_00646584;
L_00646568:; BB(0x00646568);
    /* 00646568: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064656b: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x646570u); f_0063aac0();
    /* 00646570: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00646572: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00646575: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646579: je 0x646584 */ if (fZ) goto L_00646584;
L_0064657b:; BB(0x0064657b);
    /* 0064657b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00646582: jmp 0x64658b */ goto L_0064658b;
L_00646584:; BB(0x00646584);
    /* 00646584: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
L_0064658b:; BB(0x0064658b);
    /* 0064658b: movzx ecx, byte ptr [ebp - 0x50] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffb0u));
    /* 0064658f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646591: je 0x6466b2 */ if (fZ) goto L_006466b2;
L_00646597:; BB(0x00646597);
    /* 00646597: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064659a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0064659d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006465a0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006465a3: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6465a8u); f_0063aac0();
    /* 006465a8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006465aa: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006465ad: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006465b1: jne 0x6465c3 */ if (!fZ) goto L_006465c3;
L_006465b3:; BB(0x006465b3);
    /* 006465b3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006465b6: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006465b9: call 0x664630 */ r_esp -= 4; W32(r_esp, 0x6465beu); f_00664630();
    /* 006465be: jmp 0x646696 */ goto L_00646696;
L_006465c3:; BB(0x006465c3);
    /* 006465c3: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006465c6: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x6465cbu); f_00646d10();
    /* 006465cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006465cc: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006465cf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006465d2: call 0x4842b0 */ r_esp -= 4; W32(r_esp, 0x6465d7u); f_004842b0();
    /* 006465d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006465d8: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006465de: call 0x6394c0 */ r_esp -= 4; W32(r_esp, 0x6465e3u); f_006394c0();
    /* 006465e3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 006465e6: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 006465ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006465ec: jne 0x6465fe */ if (!fZ) goto L_006465fe;
L_006465ee:; BB(0x006465ee);
    /* 006465ee: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006465f1: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006465f4: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x6465f9u); f_005eafc0();
    /* 006465f9: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006465fc: je 0x646631 */ if (fZ) goto L_00646631;
L_006465fe:; BB(0x006465fe);
    /* 006465fe: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646602: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646605: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00646608: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64660du); f_005eaf00();
    /* 0064660d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646610: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00646613: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x646618u); f_005eb240();
    /* 00646618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646619: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064661c: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064661f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646622: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646625: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646627: mov ecx, eax */ r_ecx = r_eax;
    /* 00646629: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064662f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646631u); call_ind(t); }
L_00646631:; BB(0x00646631);
    /* 00646631: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00646635: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646637: jne 0x646649 */ if (!fZ) goto L_00646649;
L_00646639:; BB(0x00646639);
    /* 00646639: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064663c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0064663f: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x646644u); f_005eafc0();
    /* 00646644: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646647: je 0x646670 */ if (fZ) goto L_00646670;
L_00646649:; BB(0x00646649);
    /* 00646649: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064664c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064664d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646650: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00646653: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x646658u); f_005eaf00();
    /* 00646658: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064665a: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064665d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00646660: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646663: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00646666: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646668: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0064666e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646670u); call_ind(t); }
L_00646670:; BB(0x00646670);
    /* 00646670: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646673: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00646676: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646679: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064667c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064667e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00646681: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646683u); call_ind(t); }
    /* 00646683: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646686: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00646689: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064668c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0064668f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646691: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00646694: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646696u); call_ind(t); }
L_00646696:; BB(0x00646696);
    /* 00646696: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646699: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064669d: je 0x6466b2 */ if (fZ) goto L_006466b2;
L_0064669f:; BB(0x0064669f);
    /* 0064669f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006466a2: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006466a5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006466a8: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006466ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006466ad: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 006466b0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6466b2u); call_ind(t); }
L_006466b2:; BB(0x006466b2);
    /* 006466b2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006466b5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006466b8: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006466bb: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006466be: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x6466c3u); f_0063aac0();
    /* 006466c3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006466c5: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006466c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006466ca: cmp dword ptr [ebp - 0x30], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006466ce: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006466d1: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 006466d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006466d6: je 0x646a11 */ if (fZ) goto L_00646a11;
L_006466dc:; BB(0x006466dc);
    /* 006466dc: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006466df: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006466e2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006466e4: cmp dword ptr [ecx + 0xc], -1 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006466e8: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 006466eb: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 006466ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006466f0: je 0x6467d0 */ if (fZ) goto L_006467d0;
L_006466f6:; BB(0x006466f6);
    /* 006466f6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006466f9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006466fc: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006466ff: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00646702: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646705: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x64670au); f_00646d10();
    /* 0064670a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064670b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0064670e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064670f: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00646715: call 0x6394c0 */ r_esp -= 4; W32(r_esp, 0x64671au); f_006394c0();
    /* 0064671a: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0064671d: movzx edx, byte ptr [ebp + 8] */ r_edx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00646721: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646723: jne 0x646735 */ if (!fZ) goto L_00646735;
L_00646725:; BB(0x00646725);
    /* 00646725: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646728: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064672b: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x646730u); f_005eafc0();
    /* 00646730: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646733: je 0x646766 */ if (fZ) goto L_00646766;
L_00646735:; BB(0x00646735);
    /* 00646735: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646738: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646739: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064673c: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0064673f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x646744u); f_005eaf00();
    /* 00646744: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646747: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064674a: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x64674fu); f_005eb240();
    /* 0064674f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646750: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646753: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00646756: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646759: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064675c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064675e: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00646764: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646766u); call_ind(t); }
L_00646766:; BB(0x00646766);
    /* 00646766: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 0064676a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064676c: jne 0x64677e */ if (!fZ) goto L_0064677e;
L_0064676e:; BB(0x0064676e);
    /* 0064676e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646771: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00646774: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x646779u); f_005eafc0();
    /* 00646779: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064677c: je 0x6467a5 */ if (fZ) goto L_006467a5;
L_0064677e:; BB(0x0064677e);
    /* 0064677e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646782: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646785: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00646788: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x64678du); f_005eaf00();
    /* 0064678d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064678f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646792: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00646795: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646798: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0064679b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064679d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006467a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6467a5u); call_ind(t); }
L_006467a5:; BB(0x006467a5);
    /* 006467a5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006467a8: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006467ab: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006467ae: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006467b1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006467b3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006467b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6467b8u); call_ind(t); }
    /* 006467b8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006467bb: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006467be: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006467c1: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006467c4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006467c6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006467c9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6467cbu); call_ind(t); }
    /* 006467cb: jmp 0x6469cc */ goto L_006469cc;
L_006467d0:; BB(0x006467d0);
    /* 006467d0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006467d3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006467d6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006467d9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006467dc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006467df: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x6467e4u); f_00646d10();
    /* 006467e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006467e5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 006467e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006467e9: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006467ef: call 0x639610 */ r_esp -= 4; W32(r_esp, 0x6467f4u); f_00639610();
    /* 006467f4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 006467f7: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006467fa: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006467fd: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00646800: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00646803: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646806: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x64680bu); f_00646d10();
    /* 0064680b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064680c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0064680f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00646810: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00646816: call 0x639670 */ r_esp -= 4; W32(r_esp, 0x64681bu); f_00639670();
    /* 0064681b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0064681e: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00646822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646824: jne 0x646835 */ if (!fZ) goto L_00646835;
L_00646826:; BB(0x00646826);
    /* 00646826: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646829: call 0x648200 */ r_esp -= 4; W32(r_esp, 0x64682eu); f_00648200();
    /* 0064682e: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00646831: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646833: jne 0x646895 */ if (!fZ) goto L_00646895;
L_00646835:; BB(0x00646835);
    /* 00646835: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00646837: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064683a: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0064683d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x646842u); f_005f5d50();
    /* 00646842: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00646845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646846: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646849: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0064684c: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x646851u); f_005eaf00();
    /* 00646851: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00646853: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646856: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646859: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064685c: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0064685f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646861: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00646867: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646869u); call_ind(t); }
    /* 00646869: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0064686c: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064686f: jne 0x646895 */ if (!fZ) goto L_00646895;
L_00646871:; BB(0x00646871);
    /* 00646871: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646874: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00646877: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x64687cu); f_005eb240();
    /* 0064687c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064687d: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646880: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00646883: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646886: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646889: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064688b: mov ecx, eax */ r_ecx = r_eax;
    /* 0064688d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00646893: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646895u); call_ind(t); }
L_00646895:; BB(0x00646895);
    /* 00646895: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00646899: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064689b: jne 0x6468ca */ if (!fZ) goto L_006468ca;
L_0064689d:; BB(0x0064689d);
    /* 0064689d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006468a0: call 0x648200 */ r_esp -= 4; W32(r_esp, 0x6468a5u); f_00648200();
    /* 006468a5: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 006468a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006468aa: jne 0x6468fe */ if (!fZ) goto L_006468fe;
L_006468ac:; BB(0x006468ac);
    /* 006468ac: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006468af: call 0x6481b0 */ r_esp -= 4; W32(r_esp, 0x6468b4u); f_006481b0();
    /* 006468b4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006468b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006468b9: jne 0x6468fe */ if (!fZ) goto L_006468fe;
L_006468bb:; BB(0x006468bb);
    /* 006468bb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006468be: call 0x6480d0 */ r_esp -= 4; W32(r_esp, 0x6468c3u); f_006480d0();
    /* 006468c3: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006468c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006468c8: jne 0x6468fe */ if (!fZ) goto L_006468fe;
L_006468ca:; BB(0x006468ca);
    /* 006468ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006468cc: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006468cf: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006468d2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x6468d7u); f_005f5d50();
    /* 006468d7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006468da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006468db: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006468de: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006468e1: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x6468e6u); f_005eaf00();
    /* 006468e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006468e8: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006468eb: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006468ee: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006468f1: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006468f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006468f6: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006468fc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6468feu); call_ind(t); }
L_006468fe:; BB(0x006468fe);
    /* 006468fe: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646901: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00646904: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646907: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0064690a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0064690c: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064690f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646911u); call_ind(t); }
    /* 00646911: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00646915: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646917: jne 0x646928 */ if (!fZ) goto L_00646928;
L_00646919:; BB(0x00646919);
    /* 00646919: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064691c: call 0x648200 */ r_esp -= 4; W32(r_esp, 0x646921u); f_00648200();
    /* 00646921: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00646924: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646926: jne 0x64693d */ if (!fZ) goto L_0064693d;
L_00646928:; BB(0x00646928);
    /* 00646928: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064692b: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0064692e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646931: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00646934: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646936: mov ecx, eax */ r_ecx = r_eax;
    /* 00646938: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0064693b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x64693du); call_ind(t); }
L_0064693d:; BB(0x0064693d);
    /* 0064693d: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646940: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00646943: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x646948u); f_005eafc0();
    /* 00646948: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064694b: jne 0x6469b8 */ if (!fZ) goto L_006469b8;
L_0064694d:; BB(0x0064694d);
    /* 0064694d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646950: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00646953: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x646958u); f_005eafc0();
    /* 00646958: mov esi, eax */ r_esi = r_eax;
    /* 0064695a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064695d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00646960: call 0x5eafc0 */ r_esp -= 4; W32(r_esp, 0x646965u); f_005eafc0();
    /* 00646965: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646967: jne 0x6469b8 */ if (!fZ) goto L_006469b8;
L_00646969:; BB(0x00646969);
    /* 00646969: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064696c: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0064696f: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x646974u); f_005f54c0();
    /* 00646974: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00646977: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646979: jne 0x6469b8 */ if (!fZ) goto L_006469b8;
L_0064697b:; BB(0x0064697b);
    /* 0064697b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0064697e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00646981: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x646986u); f_005f54c0();
    /* 00646986: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00646989: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064698b: je 0x6469b8 */ if (fZ) goto L_006469b8;
L_0064698d:; BB(0x0064698d);
    /* 0064698d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064698f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646992: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00646995: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646998: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0064699b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064699d: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 006469a3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6469a5u); call_ind(t); }
    /* 006469a5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469a8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 006469ab: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469ae: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 006469b1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006469b3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006469b6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6469b8u); call_ind(t); }
L_006469b8:; BB(0x006469b8);
    /* 006469b8: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469bb: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 006469be: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x6469c3u); f_005f53c0();
    /* 006469c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006469c4: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469c7: call 0x646380 */ r_esp -= 4; W32(r_esp, 0x6469ccu); f_00646380();
L_006469cc:; BB(0x006469cc);
    /* 006469cc: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469cf: movzx eax, byte ptr [edx + 0x2b] */ r_eax = (u32)R8((u32)(r_edx+0x2bu));
    /* 006469d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006469d5: je 0x646a11 */ if (fZ) goto L_00646a11;
L_006469d7:; BB(0x006469d7);
    /* 006469d7: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469da: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006469de: je 0x6469f5 */ if (fZ) goto L_006469f5;
L_006469e0:; BB(0x006469e0);
    /* 006469e0: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469e3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006469e6: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469e9: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006469ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006469ee: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 006469f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6469f3u); call_ind(t); }
    /* 006469f3: jmp 0x646a11 */ goto L_00646a11;
L_006469f5:; BB(0x006469f5);
    /* 006469f5: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006469f8: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006469fc: je 0x646a11 */ if (fZ) goto L_00646a11;
L_006469fe:; BB(0x006469fe);
    /* 006469fe: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646a01: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00646a04: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646a07: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00646a0a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646a0c: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646a0f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646a11u); call_ind(t); }
L_00646a11:; BB(0x00646a11);
    /* 00646a11: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646a15: je 0x646a20 */ if (fZ) goto L_00646a20;
L_00646a17:; BB(0x00646a17);
    /* 00646a17: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646a1a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00646a1d: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_00646a20:; BB(0x00646a20);
    /* 00646a20: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646a23: movzx ecx, byte ptr [eax + 0x2a] */ r_ecx = (u32)R8((u32)(r_eax+0x2au));
    /* 00646a27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646a29: je 0x646a3d */ if (fZ) goto L_00646a3d;
L_00646a2b:; BB(0x00646a2b);
    /* 00646a2b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646a2e: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00646a31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646a32: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646a35: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00646a38: call 0x64afa0 */ r_esp -= 4; W32(r_esp, 0x646a3du); f_0064afa0();
L_00646a3d:; BB(0x00646a3d);
    /* 00646a3d: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646a40: movzx eax, byte ptr [edx + 0x2c] */ r_eax = (u32)R8((u32)(r_edx+0x2cu));
    /* 00646a44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646a46: je 0x646ad5 */ if (fZ) goto L_00646ad5;
L_00646a4c:; BB(0x00646a4c);
    /* 00646a4c: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646a52: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646a54: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646a5a: mov eax, dword ptr [edx + 0x200] */ r_eax = R32((u32)(r_edx+0x200u));
    /* 00646a60: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646a62u); call_ind(t); }
    /* 00646a62: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00646a65: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646a67: jne 0x646ad5 */ if (!fZ) goto L_00646ad5;
L_00646a69:; BB(0x00646a69);
    /* 00646a69: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00646a6f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00646a71: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00646a77: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 00646a7d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x646a7fu); call_ind(t); }
    /* 00646a7f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00646a82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646a84: je 0x646ad5 */ if (fZ) goto L_00646ad5;
L_00646a86:; BB(0x00646a86);
    /* 00646a86: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646a8c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646a8e: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 00646a94: mov eax, dword ptr [edx + 0x1e0] */ r_eax = R32((u32)(r_edx+0x1e0u));
    /* 00646a9a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646a9cu); call_ind(t); }
    /* 00646a9c: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00646a9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646aa1: je 0x646ad5 */ if (fZ) goto L_00646ad5;
L_00646aa3:; BB(0x00646aa3);
    /* 00646aa3: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646aa6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00646aa9: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00646aac: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00646aaf: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x646ab4u); f_0063aac0();
    /* 00646ab4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00646ab6: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00646ab9: cmp dword ptr [ebp - 0x48], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646abd: jne 0x646b12 */ if (!fZ) goto L_00646b12;
L_00646abf:; BB(0x00646abf);
    /* 00646abf: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646ac2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00646ac5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646ac7: cmp dword ptr [eax + 0xc], -1 */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646acb: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00646ace: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00646ad1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646ad3: je 0x646b12 */ if (fZ) goto L_00646b12;
L_00646ad5:; BB(0x00646ad5);
    /* 00646ad5: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646ad8: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646adc: je 0x646af1 */ if (fZ) goto L_00646af1;
L_00646ade:; BB(0x00646ade);
    /* 00646ade: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646ae1: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00646ae4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646ae7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00646aea: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646aec: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646aef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646af1u); call_ind(t); }
L_00646af1:; BB(0x00646af1);
    /* 00646af1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646af4: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646af8: je 0x646b0d */ if (fZ) goto L_00646b0d;
L_00646afa:; BB(0x00646afa);
    /* 00646afa: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646afd: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00646b00: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b03: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00646b06: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646b08: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646b0b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646b0du); call_ind(t); }
L_00646b0d:; BB(0x00646b0d);
    /* 00646b0d: jmp 0x646c0f */ goto L_00646c0f;
L_00646b12:; BB(0x00646b12);
    /* 00646b12: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b15: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646b19: je 0x646c0f */ if (fZ) goto L_00646c0f;
L_00646b1f:; BB(0x00646b1f);
    /* 00646b1f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b22: cmp dword ptr [edx + 0x20], 0 */ {  u32 a = R32((u32)(r_edx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646b26: je 0x646b96 */ if (fZ) goto L_00646b96;
L_00646b28:; BB(0x00646b28);
    /* 00646b28: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b2b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00646b2e: cmp dword ptr [ecx + 0x190], 0 */ {  u32 a = R32((u32)(r_ecx+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646b35: je 0x646b61 */ if (fZ) goto L_00646b61;
L_00646b37:; BB(0x00646b37);
    /* 00646b37: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b3a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00646b3d: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 00646b43: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x646b48u); f_005f53c0();
    /* 00646b48: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646b4c: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b4f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00646b52: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b55: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00646b58: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646b5a: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00646b5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646b5fu); call_ind(t); }
    /* 00646b5f: jmp 0x646b83 */ goto L_00646b83;
L_00646b61:; BB(0x00646b61);
    /* 00646b61: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b64: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00646b67: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x646b6cu); f_005f53c0();
    /* 00646b6c: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646b6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646b70: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b73: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00646b76: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b79: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00646b7c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646b7e: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00646b81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646b83u); call_ind(t); }
L_00646b83:; BB(0x00646b83);
    /* 00646b83: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b86: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00646b89: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b8c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00646b8f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646b91: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00646b94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646b96u); call_ind(t); }
L_00646b96:; BB(0x00646b96);
    /* 00646b96: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646b99: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646b9d: je 0x646c0f */ if (fZ) goto L_00646c0f;
L_00646b9f:; BB(0x00646b9f);
    /* 00646b9f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646ba2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00646ba5: cmp dword ptr [eax + 0x190], 0 */ {  u32 a = R32((u32)(r_eax+0x190u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646bac: je 0x646bda */ if (fZ) goto L_00646bda;
L_00646bae:; BB(0x00646bae);
    /* 00646bae: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646bb1: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00646bb4: mov ecx, dword ptr [edx + 0x190] */ r_ecx = R32((u32)(r_edx+0x190u));
    /* 00646bba: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x646bbfu); f_005f53c0();
    /* 00646bbf: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646bc3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646bc6: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00646bc9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646bcc: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00646bcf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646bd1: mov ecx, eax */ r_ecx = r_eax;
    /* 00646bd3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00646bd6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646bd8u); call_ind(t); }
    /* 00646bd8: jmp 0x646bfc */ goto L_00646bfc;
L_00646bda:; BB(0x00646bda);
    /* 00646bda: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646bdd: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00646be0: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x646be5u); f_005f53c0();
    /* 00646be5: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646be8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646be9: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646bec: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00646bef: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646bf2: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00646bf5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646bf7: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 00646bfa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646bfcu); call_ind(t); }
L_00646bfc:; BB(0x00646bfc);
    /* 00646bfc: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646bff: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00646c02: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00646c05: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00646c08: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646c0a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00646c0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646c0fu); call_ind(t); }
L_00646c0f:; BB(0x00646c0f);
    /* 00646c0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00646c10: mov esp, ebp */ r_esp = r_ebp;
    /* 00646c12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646c13: ret 8 */ FN_RET(0x006464d0); r_esp += 12; return;
}

void f_00646c20(void) /* sub_646C20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646c20);
    /* 00646c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00646c23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646c24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646c27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c2a: mov byte ptr [eax + 0x5c], 1 */ W8((u32)(r_eax+0x5cu), 0x1u);
    /* 00646c2e: movzx ecx, byte ptr [ebp + 8] */ r_ecx = (u32)R8((u32)(r_ebp+0x8u));
    /* 00646c32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646c34: je 0x646c40 */ if (fZ) goto L_00646c40;
L_00646c36:; BB(0x00646c36);
    /* 00646c36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00646c38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c3b: call 0x648270 */ r_esp -= 4; W32(r_esp, 0x646c40u); f_00648270();
L_00646c40:; BB(0x00646c40);
    /* 00646c40: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c43: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646c46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c49: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00646c4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646c4e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646c51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646c53u); call_ind(t); }
    /* 00646c53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c56: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00646c59: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c5c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00646c5f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646c61: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646c64: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646c66u); call_ind(t); }
    /* 00646c66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c69: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00646c6c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c6f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00646c72: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646c74: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646c77: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646c79u); call_ind(t); }
    /* 00646c79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c7c: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646c80: je 0x646c8d */ if (fZ) goto L_00646c8d;
L_00646c82:; BB(0x00646c82);
    /* 00646c82: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c85: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00646c88: call 0x664670 */ r_esp -= 4; W32(r_esp, 0x646c8du); f_00664670();
L_00646c8d:; BB(0x00646c8d);
    /* 00646c8d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c90: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646c94: je 0x646ca9 */ if (fZ) goto L_00646ca9;
L_00646c96:; BB(0x00646c96);
    /* 00646c96: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c99: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00646c9c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646c9f: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00646ca2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646ca4: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00646ca7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646ca9u); call_ind(t); }
L_00646ca9:; BB(0x00646ca9);
    /* 00646ca9: mov esp, ebp */ r_esp = r_ebp;
    /* 00646cab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646cac: ret 4 */ FN_RET(0x00646c20); r_esp += 8; return;
}

void f_00646cb0(void) /* sub_646CB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646cb0);
    /* 00646cb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646cb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00646cb3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646cb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00646cb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646cbc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00646cbf: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646cc2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646cc5: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x646ccau); f_0063aac0();
    /* 00646cca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646ccc: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00646ccf: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646cd3: jne 0x646cf7 */ if (!fZ) goto L_00646cf7;
L_00646cd5:; BB(0x00646cd5);
    /* 00646cd5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646cd8: cmp dword ptr [eax + 0x14], 0 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646cdc: je 0x646cee */ if (fZ) goto L_00646cee;
L_00646cde:; BB(0x00646cde);
    /* 00646cde: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646ce1: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00646ce4: call 0x6646c0 */ r_esp -= 4; W32(r_esp, 0x646ce9u); f_006646c0();
    /* 00646ce9: mov byte ptr [ebp - 0xd], al */ W8((u32)(r_ebp+0xfffffff3u), (u8)r_eax);
    /* 00646cec: jmp 0x646cf2 */ goto L_00646cf2;
L_00646cee:; BB(0x00646cee);
    /* 00646cee: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_00646cf2:; BB(0x00646cf2);
    /* 00646cf2: mov al, byte ptr [ebp - 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 00646cf5: jmp 0x646d02 */ goto L_00646d02;
L_00646cf7:; BB(0x00646cf7);
    /* 00646cf7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00646cfa: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00646cfd: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x646d02u); f_005f54c0();
L_00646d02:; BB(0x00646d02);
    /* 00646d02: mov esp, ebp */ r_esp = r_ebp;
    /* 00646d04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646d05: ret  */ FN_RET(0x00646cb0); r_esp += 4; return;
}

void f_00646d10(void) /* sub_646D10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646d10);
    /* 00646d10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646d11: mov ebp, esp */ r_ebp = r_esp;
    /* 00646d13: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00646d16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00646d17: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00646d1a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00646d1d: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00646d20: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00646d23: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646d26: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646d28: mov ecx, eax */ r_ecx = r_eax;
    /* 00646d2a: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00646d2d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646d2fu); call_ind(t); }
    /* 00646d2f: mov esi, eax */ r_esi = r_eax;
    /* 00646d31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00646d34: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00646d37: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x646d3cu); f_005f5550();
    /* 00646d3c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00646d3d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00646d3f: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00646d41: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00646d43: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00646d49: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00646d4c: call 0x5f8550 */ r_esp -= 4; W32(r_esp, 0x646d51u); f_005f8550();
    /* 00646d51: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00646d52: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00646d54: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00646d56: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00646d58: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00646d5a: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00646d5d: mov byte ptr [ebp - 1], cl */ W8((u32)(r_ebp+0xffffffffu), (u8)r_ecx);
    /* 00646d60: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00646d63: movzx eax, byte ptr [edx + 0x10] */ r_eax = (u32)R8((u32)(r_edx+0x10u));
    /* 00646d67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646d69: je 0x646d7b */ if (fZ) goto L_00646d7b;
L_00646d6b:; BB(0x00646d6b);
    /* 00646d6b: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00646d6f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00646d71: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00646d73: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00646d76: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00646d79: jmp 0x646d82 */ goto L_00646d82;
L_00646d7b:; BB(0x00646d7b);
    /* 00646d7b: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00646d7f: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_00646d82:; BB(0x00646d82);
    /* 00646d82: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 00646d85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00646d86: mov esp, ebp */ r_esp = r_ebp;
    /* 00646d88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646d89: ret  */ FN_RET(0x00646d10); r_esp += 4; return;
}

void f_00646d90(void) /* sub_646D90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646d90);
    /* 00646d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00646d93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646d94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646d97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646d9a: call 0x646d10 */ r_esp -= 4; W32(r_esp, 0x646d9fu); f_00646d10();
    /* 00646d9f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00646da2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00646da4: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00646da6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00646da9: mov esp, ebp */ r_esp = r_ebp;
    /* 00646dab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646dac: ret  */ FN_RET(0x00646d90); r_esp += 4; return;
}

void f_00646db0(void) /* sub_646DB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646db0);
    /* 00646db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00646db3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646db4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646db7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646dba: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646dbe: je 0x646de5 */ if (fZ) goto L_00646de5;
L_00646dc0:; BB(0x00646dc0);
    /* 00646dc0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00646dc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646dc4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646dc7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00646dca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646dcd: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00646dd0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00646dd2: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00646dd8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646ddau); call_ind(t); }
    /* 00646dda: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00646ddd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646ddf: je 0x646de5 */ if (fZ) goto L_00646de5;
L_00646de1:; BB(0x00646de1);
    /* 00646de1: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00646de3: jmp 0x646e38 */ goto L_00646e38;
L_00646de5:; BB(0x00646de5);
    /* 00646de5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646de8: cmp dword ptr [edx + 0xc], 0 */ {  u32 a = R32((u32)(r_edx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646dec: je 0x646e13 */ if (fZ) goto L_00646e13;
L_00646dee:; BB(0x00646dee);
    /* 00646dee: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00646df1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646df2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646df5: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00646df8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646dfb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00646dfe: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00646e00: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 00646e06: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646e08u); call_ind(t); }
    /* 00646e08: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00646e0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646e0d: je 0x646e13 */ if (fZ) goto L_00646e13;
L_00646e0f:; BB(0x00646e0f);
    /* 00646e0f: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00646e11: jmp 0x646e38 */ goto L_00646e38;
L_00646e13:; BB(0x00646e13);
    /* 00646e13: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646e16: cmp dword ptr [edx + 0x14], 0 */ {  u32 a = R32((u32)(r_edx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646e1a: je 0x646e36 */ if (fZ) goto L_00646e36;
L_00646e1c:; BB(0x00646e1c);
    /* 00646e1c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00646e1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00646e20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646e23: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00646e26: call 0x664410 */ r_esp -= 4; W32(r_esp, 0x646e2bu); f_00664410();
    /* 00646e2b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00646e2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00646e30: je 0x646e36 */ if (fZ) goto L_00646e36;
L_00646e32:; BB(0x00646e32);
    /* 00646e32: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00646e34: jmp 0x646e38 */ goto L_00646e38;
L_00646e36:; BB(0x00646e36);
    /* 00646e36: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_00646e38:; BB(0x00646e38);
    /* 00646e38: mov esp, ebp */ r_esp = r_ebp;
    /* 00646e3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646e3b: ret 4 */ FN_RET(0x00646db0); r_esp += 8; return;
}

void f_00646e40(void) /* sub_646E40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646e40);
    /* 00646e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00646e43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646e44: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646e47: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646e4a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00646e4d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646e50: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646e53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646e55: mov ecx, eax */ r_ecx = r_eax;
    /* 00646e57: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00646e5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646e5cu); call_ind(t); }
    /* 00646e5c: mov esp, ebp */ r_esp = r_ebp;
    /* 00646e5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646e5f: ret  */ FN_RET(0x00646e40); r_esp += 4; return;
}

void f_00646e70(void) /* sub_646E70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646e70);
    /* 00646e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00646e73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646e74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646e77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646e7a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00646e7d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646e80: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00646e83: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00646e85: mov ecx, eax */ r_ecx = r_eax;
    /* 00646e87: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 00646e8a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x646e8cu); call_ind(t); }
    /* 00646e8c: mov esp, ebp */ r_esp = r_ebp;
    /* 00646e8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646e8f: ret  */ FN_RET(0x00646e70); r_esp += 4; return;
}

void f_00646e90(void) /* sub_646E90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646e90);
    /* 00646e90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646e91: mov ebp, esp */ r_ebp = r_esp;
    /* 00646e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646e94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646e97: mov eax, 0x54 */ r_eax = 0x54u;
    /* 00646e9c: mov esp, ebp */ r_esp = r_ebp;
    /* 00646e9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646e9f: ret  */ FN_RET(0x00646e90); r_esp += 4; return;
}

void f_00646ea0(void) /* sub_646EA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646ea0);
    /* 00646ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00646ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00646ea3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00646ea4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00646ea7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00646eaa: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00646ead: call 0x5f53c0 */ r_esp -= 4; W32(r_esp, 0x646eb2u); f_005f53c0();
    /* 00646eb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00646eb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646eb5: ret  */ FN_RET(0x00646ea0); r_esp += 4; return;
}

void f_00646f70(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00646f70);
    /* 00646f70: clc  */ fC = 0;
    /* 00646f71: mov esp, ebp */ r_esp = r_ebp;
    /* 00646f73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00646f74: ret  */ FN_RET(0x00646f70); r_esp += 4; return;
}


#include "protos.h"

void f_00573190(void) /* SultanSlot::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00573190);
    /* 00573190: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00573191: mov ebp, esp */ r_ebp = r_esp;
    /* 00573193: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00573196: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00573199: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057319c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x5731a1u); f_005e9e20();
    /* 005731a1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731a4: mov dword ptr [eax], 0x6cacac */ W32((u32)(r_eax), 0x6cacacu);
    /* 005731aa: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731ad: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 005731b4: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731b7: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 005731be: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731c1: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005731c8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731cb: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 005731d2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731d5: mov dword ptr [edx + 0x18], 0 */ W32((u32)(r_edx+0x18u), 0x0u);
    /* 005731dc: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731df: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005731e6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731e9: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 005731f0: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731f3: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 005731fa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005731fd: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00573204: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057320a: jmp 0x573218 */ goto L_00573218;
L_0057320c:; BB(0x0057320c);
    /* 0057320c: mov cx, word ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00573210: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00573214: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
L_00573218:; BB(0x00573218);
    /* 00573218: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057321c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057321f: jge 0x573232 */ if ((fS==fO)) goto L_00573232;
L_00573221:; BB(0x00573221);
    /* 00573221: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00573225: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00573228: mov dword ptr [ecx + eax*4 + 0x28], 0 */ W32((u32)(r_ecx+r_eax*4+0x28u), 0x0u);
    /* 00573230: jmp 0x57320c */ goto L_0057320c;
L_00573232:; BB(0x00573232);
    /* 00573232: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00573238: jmp 0x573246 */ goto L_00573246;
L_0057323a:; BB(0x0057323a);
    /* 0057323a: mov dx, word ptr [ebp - 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0057323e: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00573242: mov word ptr [ebp - 4], dx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_edx);
L_00573246:; BB(0x00573246);
    /* 00573246: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057324a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057324d: jge 0x573260 */ if ((fS==fO)) goto L_00573260;
L_0057324f:; BB(0x0057324f);
    /* 0057324f: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00573253: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00573256: mov dword ptr [edx + ecx*4 + 0x44], 0 */ W32((u32)(r_edx+r_ecx*4+0x44u), 0x0u);
    /* 0057325e: jmp 0x57323a */ goto L_0057323a;
L_00573260:; BB(0x00573260);
    /* 00573260: mov word ptr [ebp - 4], 0 */ W16((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00573266: jmp 0x573274 */ goto L_00573274;
L_00573268:; BB(0x00573268);
    /* 00573268: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0057326c: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00573270: mov word ptr [ebp - 4], ax */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_eax);
L_00573274:; BB(0x00573274);
    /* 00573274: movsx ecx, word ptr [ebp - 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00573278: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057327b: jge 0x57328e */ if ((fS==fO)) goto L_0057328e;
L_0057327d:; BB(0x0057327d);
    /* 0057327d: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00573281: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00573284: mov dword ptr [eax + edx*4 + 0x38], 0 */ W32((u32)(r_eax+r_edx*4+0x38u), 0x0u);
    /* 0057328c: jmp 0x573268 */ goto L_00573268;
L_0057328e:; BB(0x0057328e);
    /* 0057328e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00573291: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 00573298: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0057329b: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
    /* 005732a2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005732a5: mov dword ptr [eax + 0x60], 0 */ W32((u32)(r_eax+0x60u), 0x0u);
    /* 005732ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005732af: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 005732b6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005732b9: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 005732c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005732c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005732c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005732c6: ret  */ FN_RET(0x00573190); r_esp += 4; return;
}

void f_005732d0(void) /* SultanSlot::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005732d0);
    /* 005732d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005732d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005732d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005732d5: push 0x6a61bb */ { u32 v = 0x6a61bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005732da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005732e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005732e1: sub esp, 0xd4 */ {  u32 a = r_esp; u32 b = 0xd4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005732e7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005732ec: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005732ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005732ef: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005732f2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005732f8: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 005732fe: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573304: mov dword ptr [eax], 0x6cacac */ W32((u32)(r_eax), 0x6cacacu);
    /* 0057330a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00573311: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573317: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057331b: je 0x573362 */ if (fZ) goto L_00573362;
L_0057331d:; BB(0x0057331d);
    /* 0057331d: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573323: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00573326: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00573329: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057332c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057332f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573333: je 0x57334b */ if (fZ) goto L_0057334b;
L_00573335:; BB(0x00573335);
    /* 00573335: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00573337: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057333a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057333c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057333f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573341: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573343u); call_ind(t); }
    /* 00573343: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 00573349: jmp 0x573355 */ goto L_00573355;
L_0057334b:; BB(0x0057334b);
    /* 0057334b: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_00573355:; BB(0x00573355);
    /* 00573355: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057335b: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
L_00573362:; BB(0x00573362);
    /* 00573362: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573368: cmp dword ptr [ecx + 0xc], 0 */ {  u32 a = R32((u32)(r_ecx+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057336c: je 0x5733b3 */ if (fZ) goto L_005733b3;
L_0057336e:; BB(0x0057336e);
    /* 0057336e: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573374: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00573377: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057337a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057337d: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00573380: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573384: je 0x57339c */ if (fZ) goto L_0057339c;
L_00573386:; BB(0x00573386);
    /* 00573386: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00573388: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057338b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057338d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00573390: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573392: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573394u); call_ind(t); }
    /* 00573394: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0057339a: jmp 0x5733a6 */ goto L_005733a6;
L_0057339c:; BB(0x0057339c);
    /* 0057339c: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_005733a6:; BB(0x005733a6);
    /* 005733a6: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005733ac: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
L_005733b3:; BB(0x005733b3);
    /* 005733b3: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005733b9: cmp dword ptr [ecx + 0x10], 0 */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005733bd: je 0x573404 */ if (fZ) goto L_00573404;
L_005733bf:; BB(0x005733bf);
    /* 005733bf: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005733c5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 005733c8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005733cb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005733ce: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005733d1: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005733d5: je 0x5733ed */ if (fZ) goto L_005733ed;
L_005733d7:; BB(0x005733d7);
    /* 005733d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005733d9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005733dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005733de: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005733e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005733e3: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5733e5u); call_ind(t); }
    /* 005733e5: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 005733eb: jmp 0x5733f7 */ goto L_005733f7;
L_005733ed:; BB(0x005733ed);
    /* 005733ed: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_005733f7:; BB(0x005733f7);
    /* 005733f7: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005733fd: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
L_00573404:; BB(0x00573404);
    /* 00573404: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057340a: cmp dword ptr [ecx + 0x14], 0 */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057340e: je 0x573455 */ if (fZ) goto L_00573455;
L_00573410:; BB(0x00573410);
    /* 00573410: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573416: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00573419: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0057341c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057341f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00573422: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573426: je 0x57343e */ if (fZ) goto L_0057343e;
L_00573428:; BB(0x00573428);
    /* 00573428: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057342a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057342d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057342f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00573432: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573434: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573436u); call_ind(t); }
    /* 00573436: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0057343c: jmp 0x573448 */ goto L_00573448;
L_0057343e:; BB(0x0057343e);
    /* 0057343e: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00573448:; BB(0x00573448);
    /* 00573448: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057344e: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
L_00573455:; BB(0x00573455);
    /* 00573455: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057345b: cmp dword ptr [ecx + 0x18], 0 */ {  u32 a = R32((u32)(r_ecx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057345f: je 0x5734a6 */ if (fZ) goto L_005734a6;
L_00573461:; BB(0x00573461);
    /* 00573461: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573467: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0057346a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0057346d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00573470: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00573473: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573477: je 0x57348f */ if (fZ) goto L_0057348f;
L_00573479:; BB(0x00573479);
    /* 00573479: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057347b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057347e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573480: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00573483: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573485: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573487u); call_ind(t); }
    /* 00573487: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0057348d: jmp 0x573499 */ goto L_00573499;
L_0057348f:; BB(0x0057348f);
    /* 0057348f: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00573499:; BB(0x00573499);
    /* 00573499: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057349f: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
L_005734a6:; BB(0x005734a6);
    /* 005734a6: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005734ac: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005734b0: je 0x5734f7 */ if (fZ) goto L_005734f7;
L_005734b2:; BB(0x005734b2);
    /* 005734b2: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005734b8: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005734bb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 005734be: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 005734c1: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 005734c4: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005734c8: je 0x5734e0 */ if (fZ) goto L_005734e0;
L_005734ca:; BB(0x005734ca);
    /* 005734ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005734cc: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005734cf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005734d1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005734d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005734d6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5734d8u); call_ind(t); }
    /* 005734d8: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 005734de: jmp 0x5734ea */ goto L_005734ea;
L_005734e0:; BB(0x005734e0);
    /* 005734e0: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
L_005734ea:; BB(0x005734ea);
    /* 005734ea: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005734f0: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
L_005734f7:; BB(0x005734f7);
    /* 005734f7: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005734fd: cmp dword ptr [ecx + 0x20], 0 */ {  u32 a = R32((u32)(r_ecx+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573501: je 0x573548 */ if (fZ) goto L_00573548;
L_00573503:; BB(0x00573503);
    /* 00573503: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573509: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0057350c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0057350f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00573512: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00573515: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573519: je 0x573531 */ if (fZ) goto L_00573531;
L_0057351b:; BB(0x0057351b);
    /* 0057351b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057351d: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00573520: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573522: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00573525: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573527: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x573529u); call_ind(t); }
    /* 00573529: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0057352f: jmp 0x57353b */ goto L_0057353b;
L_00573531:; BB(0x00573531);
    /* 00573531: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0057353b:; BB(0x0057353b);
    /* 0057353b: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573541: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
L_00573548:; BB(0x00573548);
    /* 00573548: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057354e: cmp dword ptr [ecx + 0x24], 0 */ {  u32 a = R32((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573552: je 0x573599 */ if (fZ) goto L_00573599;
L_00573554:; BB(0x00573554);
    /* 00573554: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057355a: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0057355d: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00573560: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00573563: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00573566: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057356a: je 0x573582 */ if (fZ) goto L_00573582;
L_0057356c:; BB(0x0057356c);
    /* 0057356c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057356e: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00573571: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573573: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00573576: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573578: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x57357au); call_ind(t); }
    /* 0057357a: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00573580: jmp 0x57358c */ goto L_0057358c;
L_00573582:; BB(0x00573582);
    /* 00573582: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0057358c:; BB(0x0057358c);
    /* 0057358c: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573592: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
L_00573599:; BB(0x00573599);
    /* 00573599: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057359f: cmp dword ptr [ecx + 0x34], 0 */ {  u32 a = R32((u32)(r_ecx+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005735a3: je 0x5735ea */ if (fZ) goto L_005735ea;
L_005735a5:; BB(0x005735a5);
    /* 005735a5: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005735ab: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 005735ae: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 005735b1: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 005735b4: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 005735b7: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005735bb: je 0x5735d3 */ if (fZ) goto L_005735d3;
L_005735bd:; BB(0x005735bd);
    /* 005735bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005735bf: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 005735c2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005735c4: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005735c7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005735c9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5735cbu); call_ind(t); }
    /* 005735cb: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 005735d1: jmp 0x5735dd */ goto L_005735dd;
L_005735d3:; BB(0x005735d3);
    /* 005735d3: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_005735dd:; BB(0x005735dd);
    /* 005735dd: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005735e3: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_005735ea:; BB(0x005735ea);
    /* 005735ea: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005735f0: jmp 0x5735fe */ goto L_005735fe;
L_005735f2:; BB(0x005735f2);
    /* 005735f2: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005735f6: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005735fa: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_005735fe:; BB(0x005735fe);
    /* 005735fe: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573602: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573605: jge 0x573669 */ if ((fS==fO)) goto L_00573669;
L_00573607:; BB(0x00573607);
    /* 00573607: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057360b: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573611: cmp dword ptr [ecx + eax*4 + 0x28], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573616: je 0x573667 */ if (fZ) goto L_00573667;
L_00573618:; BB(0x00573618);
    /* 00573618: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057361c: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573622: mov ecx, dword ptr [eax + edx*4 + 0x28] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x28u));
    /* 00573626: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00573629: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0057362c: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0057362f: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573633: je 0x57364b */ if (fZ) goto L_0057364b;
L_00573635:; BB(0x00573635);
    /* 00573635: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00573637: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057363a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057363c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0057363f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573641: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573643u); call_ind(t); }
    /* 00573643: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 00573649: jmp 0x573655 */ goto L_00573655;
L_0057364b:; BB(0x0057364b);
    /* 0057364b: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_00573655:; BB(0x00573655);
    /* 00573655: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573659: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057365f: mov dword ptr [edx + ecx*4 + 0x28], 0 */ W32((u32)(r_edx+r_ecx*4+0x28u), 0x0u);
L_00573667:; BB(0x00573667);
    /* 00573667: jmp 0x5735f2 */ goto L_005735f2;
L_00573669:; BB(0x00573669);
    /* 00573669: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0057366f: jmp 0x57367d */ goto L_0057367d;
L_00573671:; BB(0x00573671);
    /* 00573671: mov ax, word ptr [ebp - 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00573675: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00573679: mov word ptr [ebp - 0x10], ax */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_eax);
L_0057367d:; BB(0x0057367d);
    /* 0057367d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573681: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573684: jge 0x5736e8 */ if ((fS==fO)) goto L_005736e8;
L_00573686:; BB(0x00573686);
    /* 00573686: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057368a: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00573690: cmp dword ptr [eax + edx*4 + 0x44], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573695: je 0x5736e6 */ if (fZ) goto L_005736e6;
L_00573697:; BB(0x00573697);
    /* 00573697: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057369b: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005736a1: mov eax, dword ptr [edx + ecx*4 + 0x44] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x44u));
    /* 005736a5: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005736a8: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 005736ab: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 005736ae: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005736b2: je 0x5736ca */ if (fZ) goto L_005736ca;
L_005736b4:; BB(0x005736b4);
    /* 005736b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005736b6: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005736b9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005736bb: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 005736be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005736c0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5736c2u); call_ind(t); }
    /* 005736c2: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 005736c8: jmp 0x5736d4 */ goto L_005736d4;
L_005736ca:; BB(0x005736ca);
    /* 005736ca: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_005736d4:; BB(0x005736d4);
    /* 005736d4: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 005736d8: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005736de: mov dword ptr [ecx + eax*4 + 0x44], 0 */ W32((u32)(r_ecx+r_eax*4+0x44u), 0x0u);
L_005736e6:; BB(0x005736e6);
    /* 005736e6: jmp 0x573671 */ goto L_00573671;
L_005736e8:; BB(0x005736e8);
    /* 005736e8: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 005736ee: jmp 0x5736fc */ goto L_005736fc;
L_005736f0:; BB(0x005736f0);
    /* 005736f0: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 005736f4: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005736f8: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_005736fc:; BB(0x005736fc);
    /* 005736fc: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573700: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00573703: jge 0x573767 */ if ((fS==fO)) goto L_00573767;
L_00573705:; BB(0x00573705);
    /* 00573705: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573709: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057370f: cmp dword ptr [edx + ecx*4 + 0x38], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573714: je 0x573765 */ if (fZ) goto L_00573765;
L_00573716:; BB(0x00573716);
    /* 00573716: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0057371a: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573720: mov edx, dword ptr [ecx + eax*4 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x38u));
    /* 00573724: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00573727: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0057372a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0057372d: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573731: je 0x573749 */ if (fZ) goto L_00573749;
L_00573733:; BB(0x00573733);
    /* 00573733: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00573735: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00573738: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057373a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0057373d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057373f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573741u); call_ind(t); }
    /* 00573741: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 00573747: jmp 0x573753 */ goto L_00573753;
L_00573749:; BB(0x00573749);
    /* 00573749: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_00573753:; BB(0x00573753);
    /* 00573753: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00573757: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057375d: mov dword ptr [edx + ecx*4 + 0x38], 0 */ W32((u32)(r_edx+r_ecx*4+0x38u), 0x0u);
L_00573765:; BB(0x00573765);
    /* 00573765: jmp 0x5736f0 */ goto L_005736f0;
L_00573767:; BB(0x00573767);
    /* 00573767: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057376d: cmp dword ptr [eax + 0x58], 0 */ {  u32 a = R32((u32)(r_eax+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573771: je 0x5737b8 */ if (fZ) goto L_005737b8;
L_00573773:; BB(0x00573773);
    /* 00573773: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573779: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0057377c: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0057377f: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00573782: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00573785: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573789: je 0x5737a1 */ if (fZ) goto L_005737a1;
L_0057378b:; BB(0x0057378b);
    /* 0057378b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057378d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00573790: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00573792: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00573795: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573797: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573799u); call_ind(t); }
    /* 00573799: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0057379f: jmp 0x5737ab */ goto L_005737ab;
L_005737a1:; BB(0x005737a1);
    /* 005737a1: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_005737ab:; BB(0x005737ab);
    /* 005737ab: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005737b1: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
L_005737b8:; BB(0x005737b8);
    /* 005737b8: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005737be: cmp dword ptr [edx + 0x5c], 0 */ {  u32 a = R32((u32)(r_edx+0x5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005737c2: je 0x573809 */ if (fZ) goto L_00573809;
L_005737c4:; BB(0x005737c4);
    /* 005737c4: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005737ca: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 005737cd: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005737d0: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 005737d3: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 005737d6: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005737da: je 0x5737f2 */ if (fZ) goto L_005737f2;
L_005737dc:; BB(0x005737dc);
    /* 005737dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005737de: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 005737e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005737e3: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005737e6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005737e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5737eau); call_ind(t); }
    /* 005737ea: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 005737f0: jmp 0x5737fc */ goto L_005737fc;
L_005737f2:; BB(0x005737f2);
    /* 005737f2: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_005737fc:; BB(0x005737fc);
    /* 005737fc: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573802: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
L_00573809:; BB(0x00573809);
    /* 00573809: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057380f: cmp dword ptr [edx + 0x60], 0 */ {  u32 a = R32((u32)(r_edx+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573813: je 0x57386c */ if (fZ) goto L_0057386c;
L_00573815:; BB(0x00573815);
    /* 00573815: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057381b: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0057381e: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00573824: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0057382a: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00573830: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573837: je 0x573855 */ if (fZ) goto L_00573855;
L_00573839:; BB(0x00573839);
    /* 00573839: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057383b: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00573841: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573843: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00573849: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0057384b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57384du); call_ind(t); }
    /* 0057384d: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00573853: jmp 0x57385f */ goto L_0057385f;
L_00573855:; BB(0x00573855);
    /* 00573855: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_0057385f:; BB(0x0057385f);
    /* 0057385f: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573865: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
L_0057386c:; BB(0x0057386c);
    /* 0057386c: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 00573872: cmp dword ptr [edx + 0x64], 0 */ {  u32 a = R32((u32)(r_edx+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00573876: je 0x5738cf */ if (fZ) goto L_005738cf;
L_00573878:; BB(0x00573878);
    /* 00573878: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0057387e: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 00573881: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 00573887: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0057388d: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00573893: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057389a: je 0x5738b8 */ if (fZ) goto L_005738b8;
L_0057389c:; BB(0x0057389c);
    /* 0057389c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057389e: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 005738a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005738a6: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 005738ac: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005738ae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5738b0u); call_ind(t); }
    /* 005738b0: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 005738b6: jmp 0x5738c2 */ goto L_005738c2;
L_005738b8:; BB(0x005738b8);
    /* 005738b8: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_005738c2:; BB(0x005738c2);
    /* 005738c2: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 005738c8: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
L_005738cf:; BB(0x005738cf);
    /* 005738cf: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 005738d5: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005738d9: je 0x573932 */ if (fZ) goto L_00573932;
L_005738db:; BB(0x005738db);
    /* 005738db: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 005738e1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005738e4: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 005738ea: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 005738f0: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 005738f6: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005738fd: je 0x57391b */ if (fZ) goto L_0057391b;
L_005738ff:; BB(0x005738ff);
    /* 005738ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00573901: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00573907: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00573909: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0057390f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00573911: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x573913u); call_ind(t); }
    /* 00573913: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00573919: jmp 0x573925 */ goto L_00573925;
L_0057391b:; BB(0x0057391b);
    /* 0057391b: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00573925:; BB(0x00573925);
    /* 00573925: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057392b: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
L_00573932:; BB(0x00573932);
    /* 00573932: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573939: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0057393f: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x573944u); f_005e9e40();
    /* 00573944: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00573947: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057394e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057394f: mov esp, ebp */ r_esp = r_ebp;
    /* 00573951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00573952: ret  */ FN_RET(0x005732d0); r_esp += 4; return;
}

void f_00574c60(void) /* sultanslot::func_00574c60 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00574c60);
    /* 00574c60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574c61: mov ebp, esp */ r_ebp = r_esp;
    /* 00574c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00574c64: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00574c67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00574c6a: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00574c70: mov edx, dword ptr [ecx + 0x4f10] */ r_edx = R32((u32)(r_ecx+0x4f10u));
    /* 00574c76: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 00574c79: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00574c7c: cmp dword ptr [eax + 0x6c], 0 */ {  u32 a = R32((u32)(r_eax+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574c80: jl 0x574c8b */ if ((fS!=fO)) goto L_00574c8b;
L_00574c82:; BB(0x00574c82);
    /* 00574c82: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00574c85: cmp dword ptr [ecx + 0x6c], 0xb */ {  u32 a = R32((u32)(r_ecx+0x6cu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574c89: jle 0x574cb0 */ if ((fZ||fS!=fO)) goto L_00574cb0;
L_00574c8b:; BB(0x00574c8b);
    /* 00574c8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00574c8d: jne 0x574ca6 */ if (!fZ) goto L_00574ca6;
L_00574c8f:; BB(0x00574c8f);
    /* 00574c8f: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 00574c94: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c99: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c9e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x574ca3u); f_005e9f20();
    /* 00574ca3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00574ca6:; BB(0x00574ca6);
    /* 00574ca6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00574ca9: mov dword ptr [ecx + 0x6c], 3 */ W32((u32)(r_ecx+0x6cu), 0x3u);
L_00574cb0:; BB(0x00574cb0);
    /* 00574cb0: mov esp, ebp */ r_esp = r_ebp;
    /* 00574cb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574cb3: ret  */ FN_RET(0x00574c60); r_esp += 4; return;
}

void f_00574cc0(void) /* sultanslot::func_00574cc0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00574cc0);
    /* 00574cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00574cc3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00574cc6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00574cc9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00574cd0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00574cd7: cmp dword ptr [ebp + 0xc], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574cde: jle 0x574cf7 */ if ((fZ||fS!=fO)) goto L_00574cf7;
L_00574ce0:; BB(0x00574ce0);
    /* 00574ce0: push 0x137 */ { u32 v = 0x137u; r_esp -= 4; W32(r_esp, v); }
    /* 00574ce5: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cea: push 0x6cad90 */ { u32 v = 0x6cad90u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cef: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x574cf4u); f_005e9f20();
    /* 00574cf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00574cf7:; BB(0x00574cf7);
    /* 00574cf7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00574cfa: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00574cfd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00574d00: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00574d04: ja 0x574e89 */ if ((!fC&&!fZ)) goto L_00574e89;
L_00574d0a:; BB(0x00574d0a);
    /* 00574d0a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00574d0d: jmp dword ptr [eax*4 + 0x574ea0] */ { u32 t = R32((u32)(r_eax*4+0x574ea0u)); switch (t) { case 0x574d14u: goto L_00574d14; case 0x574d38u: goto L_00574d38; case 0x574d5cu: goto L_00574d5c; case 0x574d86u: goto L_00574d86; case 0x574d91u: goto L_00574d91; case 0x574db1u: goto L_00574db1; case 0x574dd1u: goto L_00574dd1; case 0x574df1u: goto L_00574df1; case 0x574e0eu: goto L_00574e0e; case 0x574e2bu: goto L_00574e2b; case 0x574e4bu: goto L_00574e4b; case 0x574e6bu: goto L_00574e6b; default: UNSUP(0x00574d0d, "jump table entry is not a known target"); } }
L_00574d14:; BB(0x00574d14);
    /* 00574d14: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574d17: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574d18: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 00574d1d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574d1d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574d1d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574d1f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00574d22: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574d25: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574d26: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 00574d2b: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574d2b, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574d2b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574d2d: imul edx, edx, 5 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x5u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574d30: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00574d33: jmp 0x574e89 */ goto L_00574e89;
L_00574d38:; BB(0x00574d38);
    /* 00574d38: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574d3b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574d3c: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00574d41: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574d41, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574d41, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574d43: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00574d46: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574d49: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574d4a: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00574d4f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574d4f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574d4f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574d51: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574d54: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00574d57: jmp 0x574e89 */ goto L_00574e89;
L_00574d5c:; BB(0x00574d5c);
    /* 00574d5c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574d5f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574d60: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00574d63: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00574d65: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00574d68: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00574d6b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00574d6e: and edx, 0x80000003 */ {  u32 a = r_edx; u32 b = 0x80000003u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); }
    /* 00574d74: jns 0x574d7b */ if (!fS) goto L_00574d7b;
L_00574d76:; BB(0x00574d76);
    /* 00574d76: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00574d77: or edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00574d7a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00574d7b:; BB(0x00574d7b);
    /* 00574d7b: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574d7e: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00574d81: jmp 0x574e89 */ goto L_00574e89;
L_00574d86:; BB(0x00574d86);
    /* 00574d86: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574d89: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00574d8c: jmp 0x574e89 */ goto L_00574e89;
L_00574d91:; BB(0x00574d91);
    /* 00574d91: cmp dword ptr [ebp + 0xc], 0xbebc200 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xbebc200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574d98: jl 0x574da3 */ if ((fS!=fO)) goto L_00574da3;
L_00574d9a:; BB(0x00574d9a);
    /* 00574d9a: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574da1: jmp 0x574dac */ goto L_00574dac;
L_00574da3:; BB(0x00574da3);
    /* 00574da3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00574da6: imul ecx, ecx, 5 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x5u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574da9: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00574dac:; BB(0x00574dac);
    /* 00574dac: jmp 0x574e89 */ goto L_00574e89;
L_00574db1:; BB(0x00574db1);
    /* 00574db1: cmp dword ptr [ebp + 0xc], 0x5f5e100 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x5f5e100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574db8: jl 0x574dc3 */ if ((fS!=fO)) goto L_00574dc3;
L_00574dba:; BB(0x00574dba);
    /* 00574dba: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574dc1: jmp 0x574dcc */ goto L_00574dcc;
L_00574dc3:; BB(0x00574dc3);
    /* 00574dc3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00574dc6: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574dc9: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00574dcc:; BB(0x00574dcc);
    /* 00574dcc: jmp 0x574e89 */ goto L_00574e89;
L_00574dd1:; BB(0x00574dd1);
    /* 00574dd1: cmp dword ptr [ebp + 0xc], 0x2625a00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2625a00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574dd8: jl 0x574de3 */ if ((fS!=fO)) goto L_00574de3;
L_00574dda:; BB(0x00574dda);
    /* 00574dda: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574de1: jmp 0x574dec */ goto L_00574dec;
L_00574de3:; BB(0x00574de3);
    /* 00574de3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574de6: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574de9: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00574dec:; BB(0x00574dec);
    /* 00574dec: jmp 0x574e89 */ goto L_00574e89;
L_00574df1:; BB(0x00574df1);
    /* 00574df1: cmp dword ptr [ebp + 0xc], 0x1312d00 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1312d00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574df8: jl 0x574e03 */ if ((fS!=fO)) goto L_00574e03;
L_00574dfa:; BB(0x00574dfa);
    /* 00574dfa: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574e01: jmp 0x574e0c */ goto L_00574e0c;
L_00574e03:; BB(0x00574e03);
    /* 00574e03: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00574e06: imul ecx, ecx, 0x32 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x32u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574e09: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00574e0c:; BB(0x00574e0c);
    /* 00574e0c: jmp 0x574e89 */ goto L_00574e89;
L_00574e0e:; BB(0x00574e0e);
    /* 00574e0e: cmp dword ptr [ebp + 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574e15: jl 0x574e20 */ if ((fS!=fO)) goto L_00574e20;
L_00574e17:; BB(0x00574e17);
    /* 00574e17: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574e1e: jmp 0x574e29 */ goto L_00574e29;
L_00574e20:; BB(0x00574e20);
    /* 00574e20: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00574e23: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574e26: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00574e29:; BB(0x00574e29);
    /* 00574e29: jmp 0x574e89 */ goto L_00574e89;
L_00574e2b:; BB(0x00574e2b);
    /* 00574e2b: cmp dword ptr [ebp + 0xc], 0x989680 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x989680u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574e32: jl 0x574e3d */ if ((fS!=fO)) goto L_00574e3d;
L_00574e34:; BB(0x00574e34);
    /* 00574e34: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574e3b: jmp 0x574e49 */ goto L_00574e49;
L_00574e3d:; BB(0x00574e3d);
    /* 00574e3d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574e40: imul eax, eax, 0xfa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574e46: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_00574e49:; BB(0x00574e49);
    /* 00574e49: jmp 0x574e89 */ goto L_00574e89;
L_00574e4b:; BB(0x00574e4b);
    /* 00574e4b: cmp dword ptr [ebp + 0xc], 0x1e8480 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1e8480u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574e52: jl 0x574e5d */ if ((fS!=fO)) goto L_00574e5d;
L_00574e54:; BB(0x00574e54);
    /* 00574e54: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574e5b: jmp 0x574e69 */ goto L_00574e69;
L_00574e5d:; BB(0x00574e5d);
    /* 00574e5d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00574e60: imul ecx, ecx, 0x1f4 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1f4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574e66: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_00574e69:; BB(0x00574e69);
    /* 00574e69: jmp 0x574e89 */ goto L_00574e89;
L_00574e6b:; BB(0x00574e6b);
    /* 00574e6b: cmp dword ptr [ebp + 0xc], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574e72: jl 0x574e7d */ if ((fS!=fO)) goto L_00574e7d;
L_00574e74:; BB(0x00574e74);
    /* 00574e74: mov dword ptr [ebp - 8], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffff8u), 0x3b9aca00u);
    /* 00574e7b: jmp 0x574e89 */ goto L_00574e89;
L_00574e7d:; BB(0x00574e7d);
    /* 00574e7d: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00574e80: imul edx, edx, 0x3e8 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3e8u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574e86: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_00574e89:; BB(0x00574e89);
    /* 00574e89: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00574e8c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00574e8f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00574e91: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00574e94: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00574e97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00574e9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00574e9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574e9d: ret 8 */ FN_RET(0x00574cc0); r_esp += 12; return;
}

void f_00574ed0(void) /* sultanslot::func_00574ed0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00574ed0);
    /* 00574ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00574ed3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00574ed6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00574ed9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00574ee0: cmp dword ptr [ebp + 8], 0x3b9aca00 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3b9aca00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574ee7: jle 0x574f00 */ if ((fZ||fS!=fO)) goto L_00574f00;
L_00574ee9:; BB(0x00574ee9);
    /* 00574ee9: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 00574eee: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00574ef3: push 0x6ca2f4 */ { u32 v = 0x6ca2f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00574ef8: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x574efdu); f_005e9f20();
    /* 00574efd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00574f00:; BB(0x00574f00);
    /* 00574f00: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00574f03: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 00574f06: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00574f09: cmp dword ptr [ebp - 0xc], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00574f0d: ja 0x575048 */ if ((!fC&&!fZ)) goto L_00575048;
L_00574f13:; BB(0x00574f13);
    /* 00574f13: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00574f16: jmp dword ptr [eax*4 + 0x575074] */ { u32 t = R32((u32)(r_eax*4+0x575074u)); switch (t) { case 0x574f1du: goto L_00574f1d; case 0x574f4eu: goto L_00574f4e; case 0x574f7fu: goto L_00574f7f; case 0x574fb0u: goto L_00574fb0; case 0x574fcau: goto L_00574fca; case 0x574fdau: goto L_00574fda; case 0x574feau: goto L_00574fea; case 0x574ffau: goto L_00574ffa; case 0x57500au: goto L_0057500a; case 0x57501au: goto L_0057501a; case 0x57502au: goto L_0057502a; case 0x57503au: goto L_0057503a; default: UNSUP(0x00574f16, "jump table entry is not a known target"); } }
L_00574f1d:; BB(0x00574f1d);
    /* 00574f1d: cmp dword ptr [ebp + 8], 0x2faf07f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2faf07fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574f24: jle 0x574f2f */ if ((fZ||fS!=fO)) goto L_00574f2f;
L_00574f26:; BB(0x00574f26);
    /* 00574f26: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00574f2d: jmp 0x574f49 */ goto L_00574f49;
L_00574f2f:; BB(0x00574f2f);
    /* 00574f2f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00574f32: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574f35: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00574f38: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574f3b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574f3c: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00574f41: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574f41, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574f41, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574f43: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00574f46: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00574f49:; BB(0x00574f49);
    /* 00574f49: jmp 0x575048 */ goto L_00575048;
L_00574f4e:; BB(0x00574f4e);
    /* 00574f4e: cmp dword ptr [ebp + 8], 0x5f5e0ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5f5e0ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574f55: jle 0x574f60 */ if ((fZ||fS!=fO)) goto L_00574f60;
L_00574f57:; BB(0x00574f57);
    /* 00574f57: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00574f5e: jmp 0x574f7a */ goto L_00574f7a;
L_00574f60:; BB(0x00574f60);
    /* 00574f60: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00574f63: imul edx, edx, 0xa */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xau; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574f66: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00574f69: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574f6c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574f6d: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00574f72: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574f72, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574f72, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574f74: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00574f77: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00574f7a:; BB(0x00574f7a);
    /* 00574f7a: jmp 0x575048 */ goto L_00575048;
L_00574f7f:; BB(0x00574f7f);
    /* 00574f7f: cmp dword ptr [ebp + 8], 0xee6b27f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xee6b27fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574f86: jle 0x574f91 */ if ((fZ||fS!=fO)) goto L_00574f91;
L_00574f88:; BB(0x00574f88);
    /* 00574f88: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00574f8f: jmp 0x574fab */ goto L_00574fab;
L_00574f91:; BB(0x00574f91);
    /* 00574f91: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00574f94: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00574f97: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00574f9a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574f9d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574f9e: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 00574fa3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574fa3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574fa3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574fa5: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00574fa8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00574fab:; BB(0x00574fab);
    /* 00574fab: jmp 0x575048 */ goto L_00575048;
L_00574fb0:; BB(0x00574fb0);
    /* 00574fb0: cmp dword ptr [ebp + 8], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00574fb7: jle 0x574fc2 */ if ((fZ||fS!=fO)) goto L_00574fc2;
L_00574fb9:; BB(0x00574fb9);
    /* 00574fb9: mov dword ptr [ebp - 4], 0x3b9ac9ff */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9ac9ffu);
    /* 00574fc0: jmp 0x574fc8 */ goto L_00574fc8;
L_00574fc2:; BB(0x00574fc2);
    /* 00574fc2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00574fc5: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00574fc8:; BB(0x00574fc8);
    /* 00574fc8: jmp 0x575048 */ goto L_00575048;
L_00574fca:; BB(0x00574fca);
    /* 00574fca: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00574fcd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574fce: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00574fd3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574fd3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574fd3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574fd5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00574fd8: jmp 0x575048 */ goto L_00575048;
L_00574fda:; BB(0x00574fda);
    /* 00574fda: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00574fdd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574fde: mov ecx, 0xa */ r_ecx = 0xau;
    /* 00574fe3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574fe3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574fe3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574fe5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00574fe8: jmp 0x575048 */ goto L_00575048;
L_00574fea:; BB(0x00574fea);
    /* 00574fea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00574fed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574fee: mov ecx, 0x19 */ r_ecx = 0x19u;
    /* 00574ff3: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00574ff3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00574ff3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00574ff5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00574ff8: jmp 0x575048 */ goto L_00575048;
L_00574ffa:; BB(0x00574ffa);
    /* 00574ffa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00574ffd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00574ffe: mov ecx, 0x32 */ r_ecx = 0x32u;
    /* 00575003: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00575003, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00575003, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00575005: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00575008: jmp 0x575048 */ goto L_00575048;
L_0057500a:; BB(0x0057500a);
    /* 0057500a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057500d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057500e: mov ecx, 0x64 */ r_ecx = 0x64u;
    /* 00575013: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00575013, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00575013, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00575015: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00575018: jmp 0x575048 */ goto L_00575048;
L_0057501a:; BB(0x0057501a);
    /* 0057501a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057501d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057501e: mov ecx, 0xfa */ r_ecx = 0xfau;
    /* 00575023: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00575023, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00575023, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00575025: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00575028: jmp 0x575048 */ goto L_00575048;
L_0057502a:; BB(0x0057502a);
    /* 0057502a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057502d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057502e: mov ecx, 0x1f4 */ r_ecx = 0x1f4u;
    /* 00575033: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00575033, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00575033, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00575035: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00575038: jmp 0x575048 */ goto L_00575048;
L_0057503a:; BB(0x0057503a);
    /* 0057503a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057503d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0057503e: mov ecx, 0x3e8 */ r_ecx = 0x3e8u;
    /* 00575043: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00575043, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00575043, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00575045: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00575048:; BB(0x00575048);
    /* 00575048: cmp dword ptr [ebp - 4], 0x3b9ac9ff */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3b9ac9ffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057504f: jl 0x575068 */ if ((fS!=fO)) goto L_00575068;
L_00575051:; BB(0x00575051);
    /* 00575051: push 0x1c1 */ { u32 v = 0x1c1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575056: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 0057505b: push 0x6cadb4 */ { u32 v = 0x6cadb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00575060: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x575065u); f_005e9f20();
    /* 00575065: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00575068:; BB(0x00575068);
    /* 00575068: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0057506b: mov esp, ebp */ r_esp = r_ebp;
    /* 0057506d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057506e: ret 8 */ FN_RET(0x00574ed0); r_esp += 12; return;
}

void f_00575260(void) /* sultanslot::func_00575260 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575260);
    /* 00575260: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575261: mov ebp, esp */ r_ebp = r_esp;
    /* 00575263: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00575265: push 0x6a6312 */ { u32 v = 0x6a6312u; r_esp -= 4; W32(r_esp, v); }
    /* 0057526a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00575270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575271: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00575274: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00575279: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057527b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057527c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0057527f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00575285: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00575288: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057528b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0057528e: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x575293u); f_005f54c0();
    /* 00575293: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00575296: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575298: je 0x575425 */ if (fZ) goto L_00575425;
L_0057529e:; BB(0x0057529e);
    /* 0057529e: push 0x16025 */ { u32 v = 0x16025u; r_esp -= 4; W32(r_esp, v); }
    /* 005752a3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005752a6: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005752a9: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x5752aeu); f_005eaf00();
    /* 005752ae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005752b1: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005752b4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005752b7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005752ba: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005752bc: mov ecx, eax */ r_ecx = r_eax;
    /* 005752be: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005752c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5752c3u); call_ind(t); }
    /* 005752c3: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005752c9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005752cb: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005752d1: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005752d4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5752d6u); call_ind(t); }
    /* 005752d6: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005752d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005752db: je 0x575312 */ if (fZ) goto L_00575312;
L_005752dd:; BB(0x005752dd);
    /* 005752dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005752df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005752e0: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005752e6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005752e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005752ea: fld1  */ FPUSH(1.0);
    /* 005752ec: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005752ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005752f1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005752f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005752f5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005752f7: push 0x19259 */ { u32 v = 0x19259u; r_esp -= 4; W32(r_esp, v); }
    /* 005752fc: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 00575302: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00575304: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057530a: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00575310: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x575312u); call_ind(t); }
L_00575312:; BB(0x00575312);
    /* 00575312: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00575318: call 0x637630 */ r_esp -= 4; W32(r_esp, 0x57531du); f_00637630();
    /* 0057531d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00575320: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575322: je 0x575375 */ if (fZ) goto L_00575375;
L_00575324:; BB(0x00575324);
    /* 00575324: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575326: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575329: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0057532c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057532f: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00575332: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575334: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057533a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57533cu); call_ind(t); }
    /* 0057533c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0057533e: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575344: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575347: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 0057534c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057534f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575351: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575354: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575356u); call_ind(t); }
    /* 00575356: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00575358: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057535e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575361: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575366: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575369: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057536b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057536e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575370u); call_ind(t); }
    /* 00575370: jmp 0x575420 */ goto L_00575420;
L_00575375:; BB(0x00575375);
    /* 00575375: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575378: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0057537b: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x575380u); f_005eb240();
    /* 00575380: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575381: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575384: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00575387: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057538a: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0057538d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057538f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575395: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575397u); call_ind(t); }
    /* 00575397: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057539a: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0057539d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057539e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005753a1: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005753a4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005753a7: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005753aa: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005753ac: mov ecx, eax */ r_ecx = r_eax;
    /* 005753ae: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 005753b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5753b6u); call_ind(t); }
    /* 005753b6: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 005753bb: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005753be: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005753c1: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x5753c6u); f_005eb5d0();
    /* 005753c6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005753c9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005753cc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005753cf: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005753d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005753d4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005753d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5753d9u); call_ind(t); }
    /* 005753d9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005753dc: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 005753df: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005753e2: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 005753e5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005753e7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005753ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5753ecu); call_ind(t); }
    /* 005753ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005753ee: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 005753f4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005753f7: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 005753fc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005753ff: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575401: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575404: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575406u); call_ind(t); }
    /* 00575406: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575408: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057540e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575411: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575416: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575419: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057541b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057541e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575420u); call_ind(t); }
L_00575420:; BB(0x00575420);
    /* 00575420: jmp 0x5755a4 */ goto L_005755a4;
L_00575425:; BB(0x00575425);
    /* 00575425: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575428: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0057542b: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x575430u); f_005eb220();
    /* 00575430: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00575433: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575436: cmp dword ptr [edx + 0x7c], -1 */ {  u32 a = R32((u32)(r_edx+0x7cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057543a: jne 0x575453 */ if (!fZ) goto L_00575453;
L_0057543c:; BB(0x0057543c);
    /* 0057543c: push 0x1f5 */ { u32 v = 0x1f5u; r_esp -= 4; W32(r_esp, v); }
    /* 00575441: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00575446: push 0x6cadd4 */ { u32 v = 0x6cadd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057544b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x575450u); f_005e9f20();
    /* 00575450: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00575453:; BB(0x00575453);
    /* 00575453: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575457: jne 0x5754f8 */ if (!fZ) goto L_005754f8;
L_0057545d:; BB(0x0057545d);
    /* 0057545d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575460: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00575463: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
    /* 0057546d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575470: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00575473: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575474: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575477: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057547a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057547d: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00575480: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00575482: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575488: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57548au); call_ind(t); }
    /* 0057548a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057548c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057548f: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00575492: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x575497u); f_005eb5d0();
    /* 00575497: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057549a: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057549d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005754a0: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 005754a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005754a5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005754a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5754aau); call_ind(t); }
    /* 005754aa: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005754ac: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x5754b1u); f_00686d82();
    /* 005754b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005754b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005754b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005754be: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005754c2: je 0x5754d5 */ if (fZ) goto L_005754d5;
L_005754c4:; BB(0x005754c4);
    /* 005754c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005754c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005754c8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005754cb: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x5754d0u); f_00577b80();
    /* 005754d0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005754d3: jmp 0x5754dc */ goto L_005754dc;
L_005754d5:; BB(0x005754d5);
    /* 005754d5: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_005754dc:; BB(0x005754dc);
    /* 005754dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005754df: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005754e2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005754e9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005754ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005754ed: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005754f0: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005754f3: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5754f8u); f_005f5d50();
L_005754f8:; BB(0x005754f8);
    /* 005754f8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005754fb: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005754fe: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x575503u); f_005eb240();
    /* 00575503: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575506: jge 0x57555d */ if ((fS==fO)) goto L_0057555d;
L_00575508:; BB(0x00575508);
    /* 00575508: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057550b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057550e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057550f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575512: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00575515: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575518: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0057551b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057551d: mov ecx, eax */ r_ecx = r_eax;
    /* 0057551f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575525: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575527u); call_ind(t); }
    /* 00575527: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00575529: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057552f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575532: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575537: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057553a: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057553c: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057553f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575541u); call_ind(t); }
    /* 00575541: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00575543: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575549: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057554c: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575551: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575554: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575556: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575559: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57555bu); call_ind(t); }
    /* 0057555b: jmp 0x5755a4 */ goto L_005755a4;
L_0057555d:; BB(0x0057555d);
    /* 0057555d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575560: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00575563: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00575566: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00575569: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057556b: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057556e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575570u); call_ind(t); }
    /* 00575570: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575572: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575578: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057557b: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575580: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575583: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575585: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575588: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57558au); call_ind(t); }
    /* 0057558a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057558c: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575592: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575595: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 0057559a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057559d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057559f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005755a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5755a4u); call_ind(t); }
L_005755a4:; BB(0x005755a4);
    /* 005755a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005755a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005755ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005755af: mov esp, ebp */ r_esp = r_ebp;
    /* 005755b1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005755b2: ret  */ FN_RET(0x00575260); r_esp += 4; return;
}

void f_005755c0(void) /* sultanslot::func_005755c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005755c0);
    /* 005755c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005755c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005755c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005755c5: push 0x6a6343 */ { u32 v = 0x6a6343u; r_esp -= 4; W32(r_esp, v); }
    /* 005755ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005755d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005755d1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005755d4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005755d9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005755db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005755dc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005755df: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005755e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005755e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005755eb: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 005755ee: call 0x5eb220 */ r_esp -= 4; W32(r_esp, 0x5755f3u); f_005eb220();
    /* 005755f3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 005755f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005755f9: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005755fc: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x575601u); f_005eb240();
    /* 00575601: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575604: jne 0x5756e5 */ if (!fZ) goto L_005756e5;
L_0057560a:; BB(0x0057560a);
    /* 0057560a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057560c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057560f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00575612: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575615: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00575618: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057561a: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575620: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575622u); call_ind(t); }
    /* 00575622: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00575624: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057562a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057562d: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575632: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575635: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575637: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057563a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57563cu); call_ind(t); }
    /* 0057563c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057563e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x575643u); f_00686d82();
    /* 00575643: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575646: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00575649: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00575650: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575654: je 0x57566f */ if (fZ) goto L_0057566f;
L_00575656:; BB(0x00575656);
    /* 00575656: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057565c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057565f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575660: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575662: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00575665: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x57566au); f_00577b80();
    /* 0057566a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057566d: jmp 0x575676 */ goto L_00575676;
L_0057566f:; BB(0x0057566f);
    /* 0057566f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00575676:; BB(0x00575676);
    /* 00575676: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00575679: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057567c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00575683: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00575686: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575687: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057568a: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0057568d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x575692u); f_005f5d50();
    /* 00575692: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 00575697: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00575699: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0057569f: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005756a2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5756a4u); call_ind(t); }
    /* 005756a4: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005756a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005756a9: je 0x5756e0 */ if (fZ) goto L_005756e0;
L_005756ab:; BB(0x005756ab);
    /* 005756ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005756ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005756ae: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 005756b4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005756b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005756b8: fld1  */ FPUSH(1.0);
    /* 005756ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005756bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005756bf: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005756c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005756c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005756c5: push 0x19259 */ { u32 v = 0x19259u; r_esp -= 4; W32(r_esp, v); }
    /* 005756ca: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 005756d0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005756d2: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 005756d8: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 005756de: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5756e0u); call_ind(t); }
L_005756e0:; BB(0x005756e0);
    /* 005756e0: jmp 0x575848 */ goto L_00575848;
L_005756e5:; BB(0x005756e5);
    /* 005756e5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005756e8: cmp dword ptr [eax + 0x7c], -1 */ {  u32 a = R32((u32)(r_eax+0x7cu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005756ec: jne 0x575705 */ if (!fZ) goto L_00575705;
L_005756ee:; BB(0x005756ee);
    /* 005756ee: push 0x21b */ { u32 v = 0x21bu; r_esp -= 4; W32(r_esp, v); }
    /* 005756f3: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 005756f8: push 0x6cadd4 */ { u32 v = 0x6cadd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005756fd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x575702u); f_005e9f20();
    /* 00575702: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00575705:; BB(0x00575705);
    /* 00575705: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575708: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057570b: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0057570e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00575711: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575712: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575715: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00575718: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057571b: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0057571e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575720: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00575726: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575728u); call_ind(t); }
    /* 00575728: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057572c: jne 0x5757cd */ if (!fZ) goto L_005757cd;
L_00575732:; BB(0x00575732);
    /* 00575732: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575735: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00575738: mov dword ptr [edx + 0x178], 4 */ W32((u32)(r_edx+0x178u), 0x4u);
    /* 00575742: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575745: mov ecx, dword ptr [eax + 0x7c] */ r_ecx = R32((u32)(r_eax+0x7cu));
    /* 00575748: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575749: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057574c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057574f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575752: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00575755: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00575757: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0057575d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57575fu); call_ind(t); }
    /* 0057575f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575761: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575764: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00575767: call 0x5eb5d0 */ r_esp -= 4; W32(r_esp, 0x57576cu); f_005eb5d0();
    /* 0057576c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057576f: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575772: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00575775: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00575778: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057577a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0057577d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57577fu); call_ind(t); }
    /* 0057577f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00575781: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x575786u); f_00686d82();
    /* 00575786: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00575789: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0057578c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00575793: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575797: je 0x5757aa */ if (fZ) goto L_005757aa;
L_00575799:; BB(0x00575799);
    /* 00575799: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057579b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057579d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005757a0: call 0x577b80 */ r_esp -= 4; W32(r_esp, 0x5757a5u); f_00577b80();
    /* 005757a5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005757a8: jmp 0x5757b1 */ goto L_005757b1;
L_005757aa:; BB(0x005757aa);
    /* 005757aa: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005757b1:; BB(0x005757b1);
    /* 005757b1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005757b4: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005757b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005757be: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005757c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005757c2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005757c5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 005757c8: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5757cdu); f_005f5d50();
L_005757cd:; BB(0x005757cd);
    /* 005757cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005757d0: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 005757d3: call 0x5eb240 */ r_esp -= 4; W32(r_esp, 0x5757d8u); f_005eb240();
    /* 005757d8: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005757db: jge 0x575814 */ if ((fS==fO)) goto L_00575814;
L_005757dd:; BB(0x005757dd);
    /* 005757dd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005757df: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 005757e5: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005757e8: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 005757ee: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 005757f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005757f3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005757f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5757f8u); call_ind(t); }
    /* 005757f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005757fa: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575800: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575803: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575808: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057580b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0057580d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575810: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575812u); call_ind(t); }
    /* 00575812: jmp 0x575848 */ goto L_00575848;
L_00575814:; BB(0x00575814);
    /* 00575814: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575816: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 0057581c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0057581f: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575824: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575827: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575829: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0057582c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x57582eu); call_ind(t); }
    /* 0057582e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575830: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575836: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575839: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 0057583e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575841: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575843: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575846: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575848u); call_ind(t); }
L_00575848:; BB(0x00575848);
    /* 00575848: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057584b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00575852: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575853: mov esp, ebp */ r_esp = r_ebp;
    /* 00575855: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575856: ret  */ FN_RET(0x005755c0); r_esp += 4; return;
}

void f_00575d70(void) /* sultanslot::func_00575d70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575d70);
    /* 00575d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575d71: mov ebp, esp */ r_ebp = r_esp;
    /* 00575d73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575d74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00575d77: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575d7a: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00575d7d: sub ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00575d80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575d83: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 00575d86: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575d89: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00575d8d: jae 0x575db4 */ if (!fC) goto L_00575db4;
L_00575d8f:; BB(0x00575d8f);
    /* 00575d8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00575d91: jne 0x575daa */ if (!fZ) goto L_00575daa;
L_00575d93:; BB(0x00575d93);
    /* 00575d93: push 0x29b */ { u32 v = 0x29bu; r_esp -= 4; W32(r_esp, v); }
    /* 00575d98: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00575d9d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00575da2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x575da7u); f_005e9f20();
    /* 00575da7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00575daa:; BB(0x00575daa);
    /* 00575daa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575dad: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
L_00575db4:; BB(0x00575db4);
    /* 00575db4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575db7: mov edx, dword ptr [ecx + 0x70] */ r_edx = R32((u32)(r_ecx+0x70u));
    /* 00575dba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575dbb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575dbe: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 00575dc1: call 0x5777d0 */ r_esp -= 4; W32(r_esp, 0x575dc6u); f_005777d0();
    /* 00575dc6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575dc9: cmp dword ptr [ecx + 0x70], 0 */ {  u32 a = R32((u32)(r_ecx+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575dcd: jne 0x575e0e */ if (!fZ) goto L_00575e0e;
L_00575dcf:; BB(0x00575dcf);
    /* 00575dcf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575dd2: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575dd6: jne 0x575e0e */ if (!fZ) goto L_00575e0e;
L_00575dd8:; BB(0x00575dd8);
    /* 00575dd8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00575dda: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575ddf: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575de2: mov edx, dword ptr [0x793458] */ r_edx = R32((u32)(0x793458u));
    /* 00575de8: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575deb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00575ded: mov ecx, eax */ r_ecx = r_eax;
    /* 00575def: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00575df2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575df4u); call_ind(t); }
    /* 00575df4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575df6: mov ecx, dword ptr [0x793458] */ r_ecx = R32((u32)(0x793458u));
    /* 00575dfc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00575dff: mov eax, dword ptr [0x793458] */ r_eax = R32((u32)(0x793458u));
    /* 00575e04: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00575e07: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00575e09: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00575e0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x575e0eu); call_ind(t); }
L_00575e0e:; BB(0x00575e0e);
    /* 00575e0e: mov esp, ebp */ r_esp = r_ebp;
    /* 00575e10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575e11: ret 4 */ FN_RET(0x00575d70); r_esp += 8; return;
}

void f_00575e20(void) /* sultanslot::func_00575e20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575e20);
    /* 00575e20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575e21: mov ebp, esp */ r_ebp = r_esp;
    /* 00575e23: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575e24: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00575e27: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575e2b: jle 0x575e4f */ if ((fZ||fS!=fO)) goto L_00575e4f;
L_00575e2d:; BB(0x00575e2d);
    /* 00575e2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00575e2f: jne 0x575e48 */ if (!fZ) goto L_00575e48;
L_00575e31:; BB(0x00575e31);
    /* 00575e31: push 0x2b1 */ { u32 v = 0x2b1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575e36: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00575e3b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00575e40: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x575e45u); f_005e9f20();
    /* 00575e45: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00575e48:; BB(0x00575e48);
    /* 00575e48: mov dword ptr [ebp + 8], 3 */ W32((u32)(r_ebp+0x8u), 0x3u);
L_00575e4f:; BB(0x00575e4f);
    /* 00575e4f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00575e52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575e53: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575e56: call 0x575f00 */ r_esp -= 4; W32(r_esp, 0x575e5bu); f_00575f00();
    /* 00575e5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575e5e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00575e61: mov dword ptr [eax + 0x74], ecx */ W32((u32)(r_eax+0x74u), r_ecx);
    /* 00575e64: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575e67: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00575e6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575e6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575e6e: mov ecx, dword ptr [ecx + 0x64] */ r_ecx = R32((u32)(r_ecx+0x64u));
    /* 00575e71: call 0x5777d0 */ r_esp -= 4; W32(r_esp, 0x575e76u); f_005777d0();
    /* 00575e76: mov esp, ebp */ r_esp = r_ebp;
    /* 00575e78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575e79: ret 4 */ FN_RET(0x00575e20); r_esp += 8; return;
}

void f_00575e80(void) /* sultanslot::func_00575e80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00575e80);
    /* 00575e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00575e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00575e83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575e84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00575e87: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575e8a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00575e8d: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 00575e90: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575e93: cmp dword ptr [edx + 0x78], 0xf423f */ {  u32 a = R32((u32)(r_edx+0x78u)); u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575e9a: jle 0x575ec1 */ if ((fZ||fS!=fO)) goto L_00575ec1;
L_00575e9c:; BB(0x00575e9c);
    /* 00575e9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00575e9e: jne 0x575eb7 */ if (!fZ) goto L_00575eb7;
L_00575ea0:; BB(0x00575ea0);
    /* 00575ea0: push 0x2c1 */ { u32 v = 0x2c1u; r_esp -= 4; W32(r_esp, v); }
    /* 00575ea5: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00575eaa: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00575eaf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x575eb4u); f_005e9f20();
    /* 00575eb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00575eb7:; BB(0x00575eb7);
    /* 00575eb7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575eba: mov dword ptr [edx + 0x78], 0xf423f */ W32((u32)(r_edx+0x78u), 0xf423fu);
L_00575ec1:; BB(0x00575ec1);
    /* 00575ec1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575ec4: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 00575ec7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00575ec8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575ecb: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00575ece: call 0x5777d0 */ r_esp -= 4; W32(r_esp, 0x575ed3u); f_005777d0();
    /* 00575ed3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575ed6: cmp dword ptr [eax + 0x78], 0 */ {  u32 a = R32((u32)(r_eax+0x78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575eda: jle 0x575eeb */ if ((fZ||fS!=fO)) goto L_00575eeb;
L_00575edc:; BB(0x00575edc);
    /* 00575edc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575edf: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 00575ee2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00575ee3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00575ee6: call 0x575c60 */ r_esp -= 4; W32(r_esp, 0x575eebu); f_00575c60();
L_00575eeb:; BB(0x00575eeb);
    /* 00575eeb: mov esp, ebp */ r_esp = r_ebp;
    /* 00575eed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00575eee: ret 4 */ FN_RET(0x00575e80); r_esp += 8; return;
}

void f_00576330(void) /* sultanslot::func_00576330 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576330);
    /* 00576330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576331: mov ebp, esp */ r_ebp = r_esp;
    /* 00576333: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576336: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576339: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057633c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057633f: cmp dword ptr [ebp - 8], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00576343: ja 0x5763ab */ if ((!fC&&!fZ)) goto L_005763ab;
L_00576345:; BB(0x00576345);
    /* 00576345: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00576348: jmp dword ptr [ecx*4 + 0x5763d0] */ { u32 t = R32((u32)(r_ecx*4+0x5763d0u)); switch (t) { case 0x57634fu: goto L_0057634f; case 0x57636cu: goto L_0057636c; case 0x576373u: goto L_00576373; case 0x57637au: goto L_0057637a; case 0x576381u: goto L_00576381; case 0x576388u: goto L_00576388; case 0x57638fu: goto L_0057638f; case 0x576396u: goto L_00576396; case 0x57639du: goto L_0057639d; case 0x5763a4u: goto L_005763a4; default: UNSUP(0x00576348, "jump table entry is not a known target"); } }
L_0057634f:; BB(0x0057634f);
    /* 0057634f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00576351: jne 0x57636a */ if (!fZ) goto L_0057636a;
L_00576353:; BB(0x00576353);
    /* 00576353: push 0x310 */ { u32 v = 0x310u; r_esp -= 4; W32(r_esp, v); }
    /* 00576358: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 0057635d: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00576362: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x576367u); f_005e9f20();
    /* 00576367: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057636a:; BB(0x0057636a);
    /* 0057636a: jmp 0x5763c6 */ goto L_005763c6;
L_0057636c:; BB(0x0057636c);
    /* 0057636c: mov eax, 1 */ r_eax = 0x1u;
    /* 00576371: jmp 0x5763c8 */ goto L_005763c8;
L_00576373:; BB(0x00576373);
    /* 00576373: mov eax, 5 */ r_eax = 0x5u;
    /* 00576378: jmp 0x5763c8 */ goto L_005763c8;
L_0057637a:; BB(0x0057637a);
    /* 0057637a: mov eax, 0xa */ r_eax = 0xau;
    /* 0057637f: jmp 0x5763c8 */ goto L_005763c8;
L_00576381:; BB(0x00576381);
    /* 00576381: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00576386: jmp 0x5763c8 */ goto L_005763c8;
L_00576388:; BB(0x00576388);
    /* 00576388: mov eax, 0x32 */ r_eax = 0x32u;
    /* 0057638d: jmp 0x5763c8 */ goto L_005763c8;
L_0057638f:; BB(0x0057638f);
    /* 0057638f: mov eax, 0x64 */ r_eax = 0x64u;
    /* 00576394: jmp 0x5763c8 */ goto L_005763c8;
L_00576396:; BB(0x00576396);
    /* 00576396: mov eax, 0xfa */ r_eax = 0xfau;
    /* 0057639b: jmp 0x5763c8 */ goto L_005763c8;
L_0057639d:; BB(0x0057639d);
    /* 0057639d: mov eax, 0x1f4 */ r_eax = 0x1f4u;
    /* 005763a2: jmp 0x5763c8 */ goto L_005763c8;
L_005763a4:; BB(0x005763a4);
    /* 005763a4: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 005763a9: jmp 0x5763c8 */ goto L_005763c8;
L_005763ab:; BB(0x005763ab);
    /* 005763ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 005763ad: jne 0x5763c6 */ if (!fZ) goto L_005763c6;
L_005763af:; BB(0x005763af);
    /* 005763af: push 0x31a */ { u32 v = 0x31au; r_esp -= 4; W32(r_esp, v); }
    /* 005763b4: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 005763b9: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 005763be: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x5763c3u); f_005e9f20();
    /* 005763c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005763c6:; BB(0x005763c6);
    /* 005763c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005763c8:; BB(0x005763c8);
    /* 005763c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005763ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005763cb: ret 4 */ FN_RET(0x00576330); r_esp += 8; return;
}

void f_00576400(void) /* sultanslot::func_00576400 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576400);
    /* 00576400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576401: mov ebp, esp */ r_ebp = r_esp;
    /* 00576403: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576406: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00576409: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057640c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0057640f: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576413: je 0x576423 */ if (fZ) goto L_00576423;
L_00576415:; BB(0x00576415);
    /* 00576415: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576419: je 0x57642a */ if (fZ) goto L_0057642a;
L_0057641b:; BB(0x0057641b);
    /* 0057641b: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057641f: je 0x576431 */ if (fZ) goto L_00576431;
L_00576421:; BB(0x00576421);
    /* 00576421: jmp 0x576438 */ goto L_00576438;
L_00576423:; BB(0x00576423);
    /* 00576423: mov eax, 5 */ r_eax = 0x5u;
    /* 00576428: jmp 0x576455 */ goto L_00576455;
L_0057642a:; BB(0x0057642a);
    /* 0057642a: mov eax, 0xa */ r_eax = 0xau;
    /* 0057642f: jmp 0x576455 */ goto L_00576455;
L_00576431:; BB(0x00576431);
    /* 00576431: mov eax, 0x19 */ r_eax = 0x19u;
    /* 00576436: jmp 0x576455 */ goto L_00576455;
L_00576438:; BB(0x00576438);
    /* 00576438: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0057643a: jne 0x576453 */ if (!fZ) goto L_00576453;
L_0057643c:; BB(0x0057643c);
    /* 0057643c: push 0x326 */ { u32 v = 0x326u; r_esp -= 4; W32(r_esp, v); }
    /* 00576441: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00576446: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0057644b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x576450u); f_005e9f20();
    /* 00576450: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00576453:; BB(0x00576453);
    /* 00576453: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00576455:; BB(0x00576455);
    /* 00576455: mov esp, ebp */ r_esp = r_ebp;
    /* 00576457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576458: ret 4 */ FN_RET(0x00576400); r_esp += 8; return;
}

void f_00576740(void) /* sultanslot::func_00576740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576740);
    /* 00576740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576741: mov ebp, esp */ r_ebp = r_esp;
    /* 00576743: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576746: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00576749: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057674c: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 0057674f: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00576752: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576755: jle 0x57676e */ if ((fZ||fS!=fO)) goto L_0057676e;
L_00576757:; BB(0x00576757);
    /* 00576757: push 0x383 */ { u32 v = 0x383u; r_esp -= 4; W32(r_esp, v); }
    /* 0057675c: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00576761: push 0x6cae08 */ { u32 v = 0x6cae08u; r_esp -= 4; W32(r_esp, v); }
    /* 00576766: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x57676bu); f_005e9f20();
    /* 0057676b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057676e:; BB(0x0057676e);
    /* 0057676e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00576771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576772: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00576775: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576776: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00576779: call 0x574cc0 */ r_esp -= 4; W32(r_esp, 0x57677eu); f_00574cc0();
    /* 0057677e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00576780: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00576783: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00576786: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00576789: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 0057678c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057678d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057678f: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x576794u); f_005dcb00();
    /* 00576794: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576797: mov ecx, eax */ r_ecx = r_eax;
    /* 00576799: call 0x5d5ac0 */ r_esp -= 4; W32(r_esp, 0x57679eu); f_005d5ac0();
    /* 0057679e: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005767a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005767a2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005767a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005767a6: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 005767a9: call 0x64c6a0 */ r_esp -= 4; W32(r_esp, 0x5767aeu); f_0064c6a0();
    /* 005767ae: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005767b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005767b3: je 0x5767e3 */ if (fZ) goto L_005767e3;
L_005767b5:; BB(0x005767b5);
    /* 005767b5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005767b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005767b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005767bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005767bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005767c0: call 0x574ed0 */ r_esp -= 4; W32(r_esp, 0x5767c5u); f_00574ed0();
    /* 005767c5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 005767c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005767cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005767cc: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 005767cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005767d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005767d3: call 0x574cc0 */ r_esp -= 4; W32(r_esp, 0x5767d8u); f_00574cc0();
    /* 005767d8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005767da: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005767dd: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 005767e0: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_005767e3:; BB(0x005767e3);
    /* 005767e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005767e6: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 005767e9: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005767ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005767ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005767f0: call 0x575e20 */ r_esp -= 4; W32(r_esp, 0x5767f5u); f_00575e20();
    /* 005767f5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005767f8: cmp dword ptr [edx + 0x74], 0 */ {  u32 a = R32((u32)(r_edx+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005767fc: je 0x576816 */ if (fZ) goto L_00576816;
L_005767fe:; BB(0x005767fe);
    /* 005767fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00576801: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 00576804: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00576807: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0057680a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0057680c: mov ecx, eax */ r_ecx = r_eax;
    /* 0057680e: mov eax, dword ptr [edx + 0xcc] */ r_eax = R32((u32)(r_edx+0xccu));
    /* 00576814: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x576816u); call_ind(t); }
L_00576816:; BB(0x00576816);
    /* 00576816: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00576819: imul ecx, ecx, -1 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xffffffffu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0057681c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0057681f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576822: imul edx, edx, -1 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xffffffffu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00576825: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00576828: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057682b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057682c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057682f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576830: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576832: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x576837u); f_005dcb00();
    /* 00576837: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057683a: mov ecx, eax */ r_ecx = r_eax;
    /* 0057683c: call 0x5d5fb0 */ r_esp -= 4; W32(r_esp, 0x576841u); f_005d5fb0();
    /* 00576841: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576844: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576845: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00576848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576849: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057684b: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x576850u); f_005dcb00();
    /* 00576850: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576853: mov ecx, eax */ r_ecx = r_eax;
    /* 00576855: call 0x5d5cf0 */ r_esp -= 4; W32(r_esp, 0x57685au); f_005d5cf0();
    /* 0057685a: mov esp, ebp */ r_esp = r_ebp;
    /* 0057685c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057685d: ret 4 */ FN_RET(0x00576740); r_esp += 8; return;
}

void f_00576bf0(void) /* sultanslot::func_00576bf0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00576bf0);
    /* 00576bf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576bf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00576bf3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576bf6: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00576bf9: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 00576bff: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00576c05: fldz  */ FPUSH(0.0);
    /* 00576c07: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00576c0a: jmp 0x576c18 */ goto L_00576c18;
L_00576c0c:; BB(0x00576c0c);
    /* 00576c0c: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00576c10: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00576c14: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00576c18:; BB(0x00576c18);
    /* 00576c18: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00576c1c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576c1f: jge 0x576c34 */ if ((fS==fO)) goto L_00576c34;
L_00576c21:; BB(0x00576c21);
    /* 00576c21: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00576c25: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00576c28: fadd qword ptr [edx*8 + 0x749488] */ ST(0) = ST(0) + R_F64((u32)(r_edx*8+0x749488u));
    /* 00576c2f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00576c32: jmp 0x576c0c */ goto L_00576c0c;
L_00576c34:; BB(0x00576c34);
    /* 00576c34: fld1  */ FPUSH(1.0);
    /* 00576c36: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00576c39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576c3b: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00576c3e: jnp 0x576c57 */ if (!fP) goto L_00576c57;
L_00576c40:; BB(0x00576c40);
    /* 00576c40: push 0x403 */ { u32 v = 0x403u; r_esp -= 4; W32(r_esp, v); }
    /* 00576c45: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00576c4a: push 0x6cae4c */ { u32 v = 0x6cae4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00576c4f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x576c54u); f_005e9f20();
    /* 00576c54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00576c57:; BB(0x00576c57);
    /* 00576c57: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576c5c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x576c61u); f_0062fbf0();
    /* 00576c61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576c64: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00576c67: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00576c6d: fldz  */ FPUSH(0.0);
    /* 00576c6f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00576c72: jmp 0x576c80 */ goto L_00576c80;
L_00576c74:; BB(0x00576c74);
    /* 00576c74: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00576c78: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00576c7c: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_00576c80:; BB(0x00576c80);
    /* 00576c80: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00576c84: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576c87: jge 0x576cb9 */ if ((fS==fO)) goto L_00576cb9;
L_00576c89:; BB(0x00576c89);
    /* 00576c89: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00576c8d: fld qword ptr [0x6cae30] */ FPUSH(R_F64((u32)(0x6cae30u)));
    /* 00576c93: fmul qword ptr [eax*8 + 0x749488] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x749488u));
    /* 00576c9a: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 00576c9d: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00576ca0: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 00576ca3: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00576ca6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576ca8: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 00576cab: jp 0x576cb7 */ if (fP) goto L_00576cb7;
L_00576cad:; BB(0x00576cad);
    /* 00576cad: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00576cb1: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 00576cb5: jmp 0x576cb9 */ goto L_00576cb9;
L_00576cb7:; BB(0x00576cb7);
    /* 00576cb7: jmp 0x576c74 */ goto L_00576c74;
L_00576cb9:; BB(0x00576cb9);
    /* 00576cb9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00576cbd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00576cbf: jge 0x576cd8 */ if ((fS==fO)) goto L_00576cd8;
L_00576cc1:; BB(0x00576cc1);
    /* 00576cc1: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 00576cc6: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ccb: push 0x6cae38 */ { u32 v = 0x6cae38u; r_esp -= 4; W32(r_esp, v); }
    /* 00576cd0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x576cd5u); f_005e9f20();
    /* 00576cd5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00576cd8:; BB(0x00576cd8);
    /* 00576cd8: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 00576cdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00576cde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576cdf: ret  */ FN_RET(0x00576bf0); r_esp += 4; return;
}

void f_005777d0(void) /* sultanslot::func_005777d0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005777d0);
    /* 005777d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005777d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005777d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005777d5: push 0x6a64df */ { u32 v = 0x6a64dfu; r_esp -= 4; W32(r_esp, v); }
    /* 005777da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005777e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005777e1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005777e4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 005777e9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005777eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005777ec: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 005777ef: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 005777f5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005777f8: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
    /* 005777ff: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00577806: jmp 0x577811 */ goto L_00577811;
L_00577808:; BB(0x00577808);
    /* 00577808: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057780b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057780e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00577811:; BB(0x00577811);
    /* 00577811: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577814: movsx edx, word ptr [ecx + 0x184] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x184u));
    /* 0057781b: cmp dword ptr [ebp - 0x14], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057781e: jge 0x57782b */ if ((fS==fO)) goto L_0057782b;
L_00577820:; BB(0x00577820);
    /* 00577820: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00577823: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00577826: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00577829: jmp 0x577808 */ goto L_00577808;
L_0057782b:; BB(0x0057782b);
    /* 0057782b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0057782e: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00577831: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00577834: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577838: jge 0x57785c */ if ((fS==fO)) goto L_0057785c;
L_0057783a:; BB(0x0057783a);
    /* 0057783a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0057783c: jne 0x577855 */ if (!fZ) goto L_00577855;
L_0057783e:; BB(0x0057783e);
    /* 0057783e: push 0x4f8 */ { u32 v = 0x4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00577843: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00577848: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0057784d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x577852u); f_005e9f20();
    /* 00577852: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00577855:; BB(0x00577855);
    /* 00577855: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
L_0057785c:; BB(0x0057785c);
    /* 0057785c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0057785f: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577862: jle 0x577885 */ if ((fZ||fS!=fO)) goto L_00577885;
L_00577864:; BB(0x00577864);
    /* 00577864: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00577866: jne 0x57787f */ if (!fZ) goto L_0057787f;
L_00577868:; BB(0x00577868);
    /* 00577868: push 0x4fd */ { u32 v = 0x4fdu; r_esp -= 4; W32(r_esp, v); }
    /* 0057786d: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 00577872: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00577877: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x57787cu); f_005e9f20();
    /* 0057787c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057787f:; BB(0x0057787f);
    /* 0057787f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00577882: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_00577885:; BB(0x00577885);
    /* 00577885: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00577887: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x57788cu); f_00686d82();
    /* 0057788c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057788f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00577892: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00577899: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057789d: je 0x5778b4 */ if (fZ) goto L_005778b4;
L_0057789f:; BB(0x0057789f);
    /* 0057789f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005778a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005778a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005778a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005778a7: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005778aa: call 0x5778f0 */ r_esp -= 4; W32(r_esp, 0x5778afu); f_005778f0();
    /* 005778af: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005778b2: jmp 0x5778bb */ goto L_005778bb;
L_005778b4:; BB(0x005778b4);
    /* 005778b4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005778bb:; BB(0x005778bb);
    /* 005778bb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005778be: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005778c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005778c8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005778cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005778cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005778cf: call 0x5f5df0 */ r_esp -= 4; W32(r_esp, 0x5778d4u); f_005f5df0();
    /* 005778d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005778d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005778de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005778df: mov esp, ebp */ r_esp = r_ebp;
    /* 005778e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005778e2: ret 4 */ FN_RET(0x005777d0); r_esp += 8; return;
}

void f_00578630(void) /* sultanslot::func_00578630 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00578630);
    /* 00578630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00578631: mov ebp, esp */ r_ebp = r_esp;
    /* 00578633: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00578636: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00578639: mov word ptr [ebp - 4], 0xffff */ W16((u32)(r_ebp+0xfffffffcu), 0xffffu);
    /* 0057863f: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00578645: fldz  */ FPUSH(0.0);
    /* 00578647: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0057864a: jmp 0x578658 */ goto L_00578658;
L_0057864c:; BB(0x0057864c);
    /* 0057864c: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00578650: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00578654: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00578658:; BB(0x00578658);
    /* 00578658: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 0057865c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057865f: jge 0x578674 */ if ((fS==fO)) goto L_00578674;
L_00578661:; BB(0x00578661);
    /* 00578661: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00578665: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 00578668: fadd qword ptr [edx*8 + 0x749488] */ ST(0) = ST(0) + R_F64((u32)(r_edx*8+0x749488u));
    /* 0057866f: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 00578672: jmp 0x57864c */ goto L_0057864c;
L_00578674:; BB(0x00578674);
    /* 00578674: fld1  */ FPUSH(1.0);
    /* 00578676: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 00578679: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057867b: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0057867e: jnp 0x578697 */ if (!fP) goto L_00578697;
L_00578680:; BB(0x00578680);
    /* 00578680: push 0x674 */ { u32 v = 0x674u; r_esp -= 4; W32(r_esp, v); }
    /* 00578685: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 0057868a: push 0x6cae4c */ { u32 v = 0x6cae4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057868f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x578694u); f_005e9f20();
    /* 00578694: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578697:; BB(0x00578697);
    /* 00578697: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057869c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x5786a1u); f_0062fbf0();
    /* 005786a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005786a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005786a7: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 005786ad: fldz  */ FPUSH(0.0);
    /* 005786af: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005786b2: jmp 0x5786c0 */ goto L_005786c0;
L_005786b4:; BB(0x005786b4);
    /* 005786b4: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005786b8: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 005786bc: mov word ptr [ebp - 8], cx */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_ecx);
L_005786c0:; BB(0x005786c0);
    /* 005786c0: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005786c4: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005786c7: jge 0x5786f9 */ if ((fS==fO)) goto L_005786f9;
L_005786c9:; BB(0x005786c9);
    /* 005786c9: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 005786cd: fld qword ptr [0x6cae30] */ FPUSH(R_F64((u32)(0x6cae30u)));
    /* 005786d3: fmul qword ptr [eax*8 + 0x749488] */ ST(0) = ST(0) * R_F64((u32)(r_eax*8+0x749488u));
    /* 005786da: fadd qword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xfffffff0u));
    /* 005786dd: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 005786e0: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 005786e3: fcomp qword ptr [ebp - 0x10] */ fx_compare(ST(0), R_F64((u32)(r_ebp+0xfffffff0u))); FPOP();
    /* 005786e6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005786e8: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 005786eb: jp 0x5786f7 */ if (fP) goto L_005786f7;
L_005786ed:; BB(0x005786ed);
    /* 005786ed: mov cx, word ptr [ebp - 8] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 005786f1: mov word ptr [ebp - 4], cx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ecx);
    /* 005786f5: jmp 0x5786f9 */ goto L_005786f9;
L_005786f7:; BB(0x005786f7);
    /* 005786f7: jmp 0x5786b4 */ goto L_005786b4;
L_005786f9:; BB(0x005786f9);
    /* 005786f9: movsx edx, word ptr [ebp - 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 005786fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005786ff: jge 0x578718 */ if ((fS==fO)) goto L_00578718;
L_00578701:; BB(0x00578701);
    /* 00578701: push 0x681 */ { u32 v = 0x681u; r_esp -= 4; W32(r_esp, v); }
    /* 00578706: push 0x6cad74 */ { u32 v = 0x6cad74u; r_esp -= 4; W32(r_esp, v); }
    /* 0057870b: push 0x6cae38 */ { u32 v = 0x6cae38u; r_esp -= 4; W32(r_esp, v); }
    /* 00578710: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x578715u); f_005e9f20();
    /* 00578715: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00578718:; BB(0x00578718);
    /* 00578718: movsx eax, word ptr [ebp - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 0057871c: mov esp, ebp */ r_esp = r_ebp;
    /* 0057871e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057871f: ret  */ FN_RET(0x00578630); r_esp += 4; return;
}


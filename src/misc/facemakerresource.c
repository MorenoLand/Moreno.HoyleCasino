#include "protos.h"

void f_00675100(void) /* facemakerresource::func_00675100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00675100);
    /* 00675100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00675101: mov ebp, esp */ r_ebp = r_esp;
    /* 00675103: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00675105: push 0x6ad53e */ { u32 v = 0x6ad53eu; r_esp -= 4; W32(r_esp, v); }
    /* 0067510a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00675110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675111: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00675114: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00675119: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067511b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067511c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0067511f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00675125: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 00675128: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067512c: jne 0x675150 */ if (!fZ) goto L_00675150;
L_0067512e:; BB(0x0067512e);
    /* 0067512e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00675130: jne 0x675149 */ if (!fZ) goto L_00675149;
L_00675132:; BB(0x00675132);
    /* 00675132: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 00675137: push 0x6e19d0 */ { u32 v = 0x6e19d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067513c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00675141: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x675146u); f_005e9f20();
    /* 00675146: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00675149:; BB(0x00675149);
    /* 00675149: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0067514b: jmp 0x675464 */ goto L_00675464;
L_00675150:; BB(0x00675150);
    /* 00675150: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00675153: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675157: je 0x6751d5 */ if (fZ) goto L_006751d5;
L_00675159:; BB(0x00675159);
    /* 00675159: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 0067515e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x675163u); f_00686d82();
    /* 00675163: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675166: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00675169: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00675170: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675174: je 0x67518e */ if (fZ) goto L_0067518e;
L_00675176:; BB(0x00675176);
    /* 00675176: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00675178: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067517a: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0067517d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00675180: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675181: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00675184: call 0x688b60 */ r_esp -= 4; W32(r_esp, 0x675189u); f_00688b60();
    /* 00675189: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0067518c: jmp 0x675195 */ goto L_00675195;
L_0067518e:; BB(0x0067518e);
    /* 0067518e: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00675195:; BB(0x00675195);
    /* 00675195: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00675198: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0067519b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006751a2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006751a5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006751a8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 006751aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006751ac: push 0x78111c */ { u32 v = 0x78111cu; r_esp -= 4; W32(r_esp, v); }
    /* 006751b1: push 0x75f338 */ { u32 v = 0x75f338u; r_esp -= 4; W32(r_esp, v); }
    /* 006751b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006751b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006751bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006751bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006751be: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x6751c3u); f_00686ede();
    /* 006751c3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006751c6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006751c9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006751cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006751cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006751d0: call 0x688d40 */ r_esp -= 4; W32(r_esp, 0x6751d5u); f_00688d40();
L_006751d5:; BB(0x006751d5);
    /* 006751d5: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006751d8: cmp dword ptr [edx + 4], 0 */ {  u32 a = R32((u32)(r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006751dc: jne 0x6752da */ if (!fZ) goto L_006752da;
L_006751e2:; BB(0x006751e2);
    /* 006751e2: mov dword ptr [ebp - 0x18], 9 */ W32((u32)(r_ebp+0xffffffe8u), 0x9u);
    /* 006751e9: jmp 0x6751f4 */ goto L_006751f4;
L_006751eb:; BB(0x006751eb);
    /* 006751eb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006751ee: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006751f1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006751f4:; BB(0x006751f4);
    /* 006751f4: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006751f8: jl 0x6752da */ if ((fS!=fO)) goto L_006752da;
L_006751fe:; BB(0x006751fe);
    /* 006751fe: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 00675203: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x675208u); f_00686d82();
    /* 00675208: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067520b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067520e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00675215: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675219: je 0x675236 */ if (fZ) goto L_00675236;
L_0067521b:; BB(0x0067521b);
    /* 0067521b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067521d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067521f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00675222: add ecx, 0xf9060 */ {  u32 a = r_ecx; u32 b = 0xf9060u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00675228: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675229: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0067522c: call 0x688b60 */ r_esp -= 4; W32(r_esp, 0x675231u); f_00688b60();
    /* 00675231: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00675234: jmp 0x67523d */ goto L_0067523d;
L_00675236:; BB(0x00675236);
    /* 00675236: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0067523d:; BB(0x0067523d);
    /* 0067523d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00675240: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00675243: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067524a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0067524d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00675250: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00675252: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675254: push 0x78111c */ { u32 v = 0x78111cu; r_esp -= 4; W32(r_esp, v); }
    /* 00675259: push 0x75f338 */ { u32 v = 0x75f338u; r_esp -= 4; W32(r_esp, v); }
    /* 0067525e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675260: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00675263: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00675265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00675266: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x67526bu); f_00686ede();
    /* 0067526b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067526e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00675271: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675275: je 0x675286 */ if (fZ) goto L_00675286;
L_00675277:; BB(0x00675277);
    /* 00675277: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067527a: call 0x688d90 */ r_esp -= 4; W32(r_esp, 0x67527fu); f_00688d90();
    /* 0067527f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00675282: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675284: jne 0x6752b9 */ if (!fZ) goto L_006752b9;
L_00675286:; BB(0x00675286);
    /* 00675286: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00675289: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067528b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067528e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00675291: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00675294: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675298: je 0x6752ad */ if (fZ) goto L_006752ad;
L_0067529a:; BB(0x0067529a);
    /* 0067529a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067529c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0067529f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006752a1: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 006752a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006752a6: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x6752a8u); call_ind(t); }
    /* 006752a8: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006752ab: jmp 0x6752b4 */ goto L_006752b4;
L_006752ad:; BB(0x006752ad);
    /* 006752ad: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_006752b4:; BB(0x006752b4);
    /* 006752b4: jmp 0x6751eb */ goto L_006751eb;
L_006752b9:; BB(0x006752b9);
    /* 006752b9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006752bc: add eax, 0xf9060 */ {  u32 a = r_eax; u32 b = 0xf9060u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006752c1: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006752c4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006752c7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006752ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006752cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006752ce: call 0x688d40 */ r_esp -= 4; W32(r_esp, 0x6752d3u); f_00688d40();
    /* 006752d3: jmp 0x6752da */ goto L_006752da;
L_006752da:; BB(0x006752da);
    /* 006752da: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006752dd: cmp dword ptr [eax + 4], 0 */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006752e1: jne 0x675305 */ if (!fZ) goto L_00675305;
L_006752e3:; BB(0x006752e3);
    /* 006752e3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006752e5: jne 0x6752fe */ if (!fZ) goto L_006752fe;
L_006752e7:; BB(0x006752e7);
    /* 006752e7: push 0x109 */ { u32 v = 0x109u; r_esp -= 4; W32(r_esp, v); }
    /* 006752ec: push 0x6e19d0 */ { u32 v = 0x6e19d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006752f1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006752f6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6752fbu); f_005e9f20();
    /* 006752fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006752fe:; BB(0x006752fe);
    /* 006752fe: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00675300: jmp 0x675464 */ goto L_00675464;
L_00675305:; BB(0x00675305);
    /* 00675305: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00675308: movzx ecx, byte ptr [eax + 8] */ r_ecx = (u32)R8((u32)(r_eax+0x8u));
    /* 0067530c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067530e: jne 0x675462 */ if (!fZ) goto L_00675462;
L_00675314:; BB(0x00675314);
    /* 00675314: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00675317: mov byte ptr [edx + 8], 1 */ W8((u32)(r_edx+0x8u), 0x1u);
    /* 0067531b: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 00675320: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x675325u); f_00686d82();
    /* 00675325: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675328: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0067532b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00675332: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675336: je 0x67534e */ if (fZ) goto L_0067534e;
L_00675338:; BB(0x00675338);
    /* 00675338: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067533a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067533c: push 0xf4241 */ { u32 v = 0xf4241u; r_esp -= 4; W32(r_esp, v); }
    /* 00675341: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00675344: call 0x688b60 */ r_esp -= 4; W32(r_esp, 0x675349u); f_00688b60();
    /* 00675349: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0067534c: jmp 0x675355 */ goto L_00675355;
L_0067534e:; BB(0x0067534e);
    /* 0067534e: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_00675355:; BB(0x00675355);
    /* 00675355: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00675358: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0067535b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00675362: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00675365: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00675368: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067536a: push 0x78111c */ { u32 v = 0x78111cu; r_esp -= 4; W32(r_esp, v); }
    /* 0067536f: push 0x75f338 */ { u32 v = 0x75f338u; r_esp -= 4; W32(r_esp, v); }
    /* 00675374: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00675376: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00675379: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067537a: call 0x686ede */ r_esp -= 4; W32(r_esp, 0x67537fu); f_00686ede();
    /* 0067537f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675382: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00675385: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675389: je 0x675430 */ if (fZ) goto L_00675430;
L_0067538f:; BB(0x0067538f);
    /* 0067538f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675392: call 0x688d90 */ r_esp -= 4; W32(r_esp, 0x675397u); f_00688d90();
    /* 00675397: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0067539a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067539c: je 0x675430 */ if (fZ) goto L_00675430;
L_006753a2:; BB(0x006753a2);
    /* 006753a2: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 006753a5: add ecx, 0xbc */ {  u32 a = r_ecx; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006753ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006753ac: call 0x5e9ff0 */ r_esp -= 4; W32(r_esp, 0x6753b1u); f_005e9ff0();
    /* 006753b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006753b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006753b7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006753ba: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 006753c0: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x6753c5u); f_0061ed80();
    /* 006753c5: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006753c8: je 0x675430 */ if (fZ) goto L_00675430;
L_006753ca:; BB(0x006753ca);
    /* 006753ca: push 0x6c2d2c */ { u32 v = 0x6c2d2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006753cf: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 006753d2: add eax, 0xbc */ {  u32 a = r_eax; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006753d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006753d8: call 0x5ea9c0 */ r_esp -= 4; W32(r_esp, 0x6753ddu); f_005ea9c0();
    /* 006753dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006753e0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006753e3: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006753e7: je 0x675430 */ if (fZ) goto L_00675430;
L_006753e9:; BB(0x006753e9);
    /* 006753e9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006753ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006753ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006753ef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006753f2: mov ecx, dword ptr [edx + 0x208] */ r_ecx = R32((u32)(r_edx+0x208u));
    /* 006753f8: call 0x61ed80 */ r_esp -= 4; W32(r_esp, 0x6753fdu); f_0061ed80();
    /* 006753fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006753fe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00675401: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 00675407: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067540a: mov eax, dword ptr [edx + 0x208] */ r_eax = R32((u32)(r_edx+0x208u));
    /* 00675410: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00675412: mov ecx, eax */ r_ecx = r_eax;
    /* 00675414: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00675417: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x675419u); call_ind(t); }
    /* 00675419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067541a: call dword ptr [0x6b2260] */ { u32 t = R32((u32)(0x6b2260u)); r_esp -= 4; W32(r_esp, 0x675420u); call_ind(t); }
    /* 00675420: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00675423: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00675426: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00675427: call dword ptr [0x6b2258] */ { u32 t = R32((u32)(0x6b2258u)); r_esp -= 4; W32(r_esp, 0x67542du); call_ind(t); }
    /* 0067542d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00675430:; BB(0x00675430);
    /* 00675430: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675434: je 0x675462 */ if (fZ) goto L_00675462;
L_00675436:; BB(0x00675436);
    /* 00675436: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00675439: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0067543c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0067543f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00675442: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00675446: je 0x67545b */ if (fZ) goto L_0067545b;
L_00675448:; BB(0x00675448);
    /* 00675448: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067544a: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0067544d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067544f: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00675452: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00675454: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x675456u); call_ind(t); }
    /* 00675456: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00675459: jmp 0x675462 */ goto L_00675462;
L_0067545b:; BB(0x0067545b);
    /* 0067545b: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00675462:; BB(0x00675462);
    /* 00675462: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_00675464:; BB(0x00675464);
    /* 00675464: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00675467: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067546e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067546f: mov esp, ebp */ r_esp = r_ebp;
    /* 00675471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00675472: ret 8 */ FN_RET(0x00675100); r_esp += 12; return;
}


#include "protos.h"

void f_0043adc0(void) /* sub_43ADC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043adc0);
    /* 0043adc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043adc1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043adc3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043adc6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043adc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043adcc: mov ecx, dword ptr [eax*8 + 0x713230] */ r_ecx = R32((u32)(r_eax*8+0x713230u));
    /* 0043add3: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043add6: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043add9: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0043addc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043addf: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ade2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043ade5: cmp dword ptr [ebp - 0x24], 0x3c */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043ade9: ja 0x43af42 */ if ((!fC&&!fZ)) goto L_0043af42;
L_0043adef:; BB(0x0043adef);
    /* 0043adef: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043adf2: movzx edx, byte ptr [ecx + 0x43af60] */ r_edx = (u32)R8((u32)(r_ecx+0x43af60u));
    /* 0043adf9: jmp dword ptr [edx*4 + 0x43af4c] */ { u32 t = R32((u32)(r_edx*4+0x43af4cu)); switch (t) { case 0x43ae00u: goto L_0043ae00; case 0x43ae49u: goto L_0043ae49; case 0x43ae92u: goto L_0043ae92; case 0x43aef4u: goto L_0043aef4; case 0x43af42u: goto L_0043af42; default: UNSUP(0x0043adf9, "jump table entry is not a known target"); } }
L_0043ae00:; BB(0x0043ae00);
    /* 0043ae00: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043ae03: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043ae06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ae09: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0043ae0f: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0043ae12: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043ae15: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043ae18: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043ae1b: cmp dword ptr [ebp - 0x28], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043ae1f: ja 0x43ae44 */ if ((!fC&&!fZ)) goto L_0043ae44;
L_0043ae21:; BB(0x0043ae21);
    /* 0043ae21: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043ae24: jmp dword ptr [ecx*4 + 0x43afa0] */ { u32 t = R32((u32)(r_ecx*4+0x43afa0u)); switch (t) { case 0x43ae2bu: goto L_0043ae2b; case 0x43ae34u: goto L_0043ae34; case 0x43ae3du: goto L_0043ae3d; case 0x43ae44u: goto L_0043ae44; case 0x43ae74u: goto L_0043ae74; case 0x43ae7du: goto L_0043ae7d; case 0x43ae86u: goto L_0043ae86; case 0x43ae8du: goto L_0043ae8d; case 0x43aee2u: goto L_0043aee2; case 0x43aeebu: goto L_0043aeeb; case 0x43aef2u: goto L_0043aef2; default: UNSUP(0x0043ae24, "jump table entry is not a known target"); } }
L_0043ae2b:; BB(0x0043ae2b);
    /* 0043ae2b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043ae32: jmp 0x43ae44 */ goto L_0043ae44;
L_0043ae34:; BB(0x0043ae34);
    /* 0043ae34: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043ae3b: jmp 0x43ae44 */ goto L_0043ae44;
L_0043ae3d:; BB(0x0043ae3d);
    /* 0043ae3d: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
L_0043ae44:; BB(0x0043ae44);
    /* 0043ae44: jmp 0x43af42 */ goto L_0043af42;
L_0043ae49:; BB(0x0043ae49);
    /* 0043ae49: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043ae4c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0043ae4f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ae52: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0043ae58: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0043ae5b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043ae5e: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043ae61: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0043ae64: cmp dword ptr [ebp - 0x2c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043ae68: ja 0x43ae8d */ if ((!fC&&!fZ)) goto L_0043ae8d;
L_0043ae6a:; BB(0x0043ae6a);
    /* 0043ae6a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043ae6d: jmp dword ptr [eax*4 + 0x43afbc] */ { u32 t = R32((u32)(r_eax*4+0x43afbcu)); switch (t) { case 0x43ae2bu: goto L_0043ae2b; case 0x43ae34u: goto L_0043ae34; case 0x43ae3du: goto L_0043ae3d; case 0x43ae44u: goto L_0043ae44; case 0x43ae74u: goto L_0043ae74; case 0x43ae7du: goto L_0043ae7d; case 0x43ae86u: goto L_0043ae86; case 0x43ae8du: goto L_0043ae8d; case 0x43aee2u: goto L_0043aee2; case 0x43aeebu: goto L_0043aeeb; case 0x43aef2u: goto L_0043aef2; default: UNSUP(0x0043ae6d, "jump table entry is not a known target"); } }
L_0043ae74:; BB(0x0043ae74);
    /* 0043ae74: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043ae7b: jmp 0x43ae8d */ goto L_0043ae8d;
L_0043ae7d:; BB(0x0043ae7d);
    /* 0043ae7d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043ae84: jmp 0x43ae8d */ goto L_0043ae8d;
L_0043ae86:; BB(0x0043ae86);
    /* 0043ae86: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
L_0043ae8d:; BB(0x0043ae8d);
    /* 0043ae8d: jmp 0x43af42 */ goto L_0043af42;
L_0043ae92:; BB(0x0043ae92);
    /* 0043ae92: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ae94: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043ae97: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043ae9a: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043aea1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043aea4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043aea9: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043aeac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043aeaf: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043aeb6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043aeb9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043aebc: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043aebf: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0043aec2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043aec5: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043aec8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0043aecb: cmp dword ptr [ebp - 0x30], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043aecf: ja 0x43aef2 */ if ((!fC&&!fZ)) goto L_0043aef2;
L_0043aed1:; BB(0x0043aed1);
    /* 0043aed1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043aed4: movzx ecx, byte ptr [eax + 0x43afe4] */ r_ecx = (u32)R8((u32)(r_eax+0x43afe4u));
    /* 0043aedb: jmp dword ptr [ecx*4 + 0x43afd8] */ { u32 t = R32((u32)(r_ecx*4+0x43afd8u)); switch (t) { case 0x43ae74u: goto L_0043ae74; case 0x43ae7du: goto L_0043ae7d; case 0x43ae86u: goto L_0043ae86; case 0x43ae8du: goto L_0043ae8d; case 0x43ae2bu: goto L_0043ae2b; case 0x43ae34u: goto L_0043ae34; case 0x43ae3du: goto L_0043ae3d; case 0x43ae44u: goto L_0043ae44; case 0x43aee2u: goto L_0043aee2; case 0x43aeebu: goto L_0043aeeb; case 0x43aef2u: goto L_0043aef2; default: UNSUP(0x0043aedb, "jump table entry is not a known target"); } }
L_0043aee2:; BB(0x0043aee2);
    /* 0043aee2: mov dword ptr [ebp - 4], 0x1e */ W32((u32)(r_ebp+0xfffffffcu), 0x1eu);
    /* 0043aee9: jmp 0x43aef2 */ goto L_0043aef2;
L_0043aeeb:; BB(0x0043aeeb);
    /* 0043aeeb: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
L_0043aef2:; BB(0x0043aef2);
    /* 0043aef2: jmp 0x43af42 */ goto L_0043af42;
L_0043aef4:; BB(0x0043aef4);
    /* 0043aef4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043aef6: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043aef9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043aefc: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043af03: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043af06: mov edx, 1 */ r_edx = 0x1u;
    /* 0043af0b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043af0e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043af11: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043af18: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043af1b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043af1e: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043af21: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0043af24: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043af28: je 0x43af32 */ if (fZ) goto L_0043af32;
L_0043af2a:; BB(0x0043af2a);
    /* 0043af2a: cmp dword ptr [ebp - 0x34], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043af2e: je 0x43af32 */ if (fZ) goto L_0043af32;
L_0043af30:; BB(0x0043af30);
    /* 0043af30: jmp 0x43af3b */ goto L_0043af3b;
L_0043af32:; BB(0x0043af32);
    /* 0043af32: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043af39: jmp 0x43af42 */ goto L_0043af42;
L_0043af3b:; BB(0x0043af3b);
    /* 0043af3b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043af42:; BB(0x0043af42);
    /* 0043af42: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043af45: mov esp, ebp */ r_esp = r_ebp;
    /* 0043af47: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043af48: ret 4 */ FN_RET(0x0043adc0); r_esp += 8; return;
}

void f_0043aff0(void) /* sub_43AFF0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0043aff0);
    /* 0043aff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043aff1: mov ebp, esp */ r_ebp = r_esp;
    /* 0043aff3: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043aff6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043aff9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0043affc: mov ecx, dword ptr [eax*8 + 0x713234] */ r_ecx = R32((u32)(r_eax*8+0x713234u));
    /* 0043b003: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0043b006: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0043b009: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0043b00c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b00f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b012: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043b015: cmp dword ptr [ebp - 0x24], 0x3c */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043b019: ja 0x43b172 */ if ((!fC&&!fZ)) goto L_0043b172;
L_0043b01f:; BB(0x0043b01f);
    /* 0043b01f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b022: movzx edx, byte ptr [ecx + 0x43b190] */ r_edx = (u32)R8((u32)(r_ecx+0x43b190u));
    /* 0043b029: jmp dword ptr [edx*4 + 0x43b17c] */ { u32 t = R32((u32)(r_edx*4+0x43b17cu)); switch (t) { case 0x43b030u: goto L_0043b030; case 0x43b079u: goto L_0043b079; case 0x43b0c2u: goto L_0043b0c2; case 0x43b124u: goto L_0043b124; case 0x43b172u: goto L_0043b172; default: UNSUP(0x0043b029, "jump table entry is not a known target"); } }
L_0043b030:; BB(0x0043b030);
    /* 0043b030: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0043b033: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043b036: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b039: mov edx, dword ptr [ecx + 0xac4] */ r_edx = R32((u32)(r_ecx+0xac4u));
    /* 0043b03f: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0043b042: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043b045: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0043b048: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0043b04b: cmp dword ptr [ebp - 0x28], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043b04f: ja 0x43b074 */ if ((!fC&&!fZ)) goto L_0043b074;
L_0043b051:; BB(0x0043b051);
    /* 0043b051: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0043b054: jmp dword ptr [ecx*4 + 0x43b1d0] */ { u32 t = R32((u32)(r_ecx*4+0x43b1d0u)); switch (t) { case 0x43b05bu: goto L_0043b05b; case 0x43b064u: goto L_0043b064; case 0x43b06du: goto L_0043b06d; case 0x43b074u: goto L_0043b074; case 0x43b0a4u: goto L_0043b0a4; case 0x43b0adu: goto L_0043b0ad; case 0x43b0b6u: goto L_0043b0b6; case 0x43b0bdu: goto L_0043b0bd; case 0x43b112u: goto L_0043b112; case 0x43b11bu: goto L_0043b11b; case 0x43b122u: goto L_0043b122; default: UNSUP(0x0043b054, "jump table entry is not a known target"); } }
L_0043b05b:; BB(0x0043b05b);
    /* 0043b05b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043b062: jmp 0x43b074 */ goto L_0043b074;
L_0043b064:; BB(0x0043b064);
    /* 0043b064: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043b06b: jmp 0x43b074 */ goto L_0043b074;
L_0043b06d:; BB(0x0043b06d);
    /* 0043b06d: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
L_0043b074:; BB(0x0043b074);
    /* 0043b074: jmp 0x43b172 */ goto L_0043b172;
L_0043b079:; BB(0x0043b079);
    /* 0043b079: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b07c: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0043b07f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b082: mov ecx, dword ptr [eax + 0xac4] */ r_ecx = R32((u32)(r_eax+0xac4u));
    /* 0043b088: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0043b08b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043b08e: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043b091: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0043b094: cmp dword ptr [ebp - 0x2c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043b098: ja 0x43b0bd */ if ((!fC&&!fZ)) goto L_0043b0bd;
L_0043b09a:; BB(0x0043b09a);
    /* 0043b09a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0043b09d: jmp dword ptr [eax*4 + 0x43b1ec] */ { u32 t = R32((u32)(r_eax*4+0x43b1ecu)); switch (t) { case 0x43b05bu: goto L_0043b05b; case 0x43b064u: goto L_0043b064; case 0x43b06du: goto L_0043b06d; case 0x43b074u: goto L_0043b074; case 0x43b0a4u: goto L_0043b0a4; case 0x43b0adu: goto L_0043b0ad; case 0x43b0b6u: goto L_0043b0b6; case 0x43b0bdu: goto L_0043b0bd; case 0x43b112u: goto L_0043b112; case 0x43b11bu: goto L_0043b11b; case 0x43b122u: goto L_0043b122; default: UNSUP(0x0043b09d, "jump table entry is not a known target"); } }
L_0043b0a4:; BB(0x0043b0a4);
    /* 0043b0a4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0043b0ab: jmp 0x43b0bd */ goto L_0043b0bd;
L_0043b0ad:; BB(0x0043b0ad);
    /* 0043b0ad: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0043b0b4: jmp 0x43b0bd */ goto L_0043b0bd;
L_0043b0b6:; BB(0x0043b0b6);
    /* 0043b0b6: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
L_0043b0bd:; BB(0x0043b0bd);
    /* 0043b0bd: jmp 0x43b172 */ goto L_0043b172;
L_0043b0c2:; BB(0x0043b0c2);
    /* 0043b0c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b0c4: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043b0c7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b0ca: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043b0d1: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0043b0d4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0043b0d9: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0043b0dc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b0df: mov eax, dword ptr [edx + ecx + 0xacc] */ r_eax = R32((u32)(r_edx+r_ecx+0xaccu));
    /* 0043b0e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043b0e9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0043b0ec: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b0ef: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0043b0f2: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043b0f5: sub edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043b0f8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0043b0fb: cmp dword ptr [ebp - 0x30], 0xa */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0043b0ff: ja 0x43b122 */ if ((!fC&&!fZ)) goto L_0043b122;
L_0043b101:; BB(0x0043b101);
    /* 0043b101: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043b104: movzx ecx, byte ptr [eax + 0x43b214] */ r_ecx = (u32)R8((u32)(r_eax+0x43b214u));
    /* 0043b10b: jmp dword ptr [ecx*4 + 0x43b208] */ { u32 t = R32((u32)(r_ecx*4+0x43b208u)); switch (t) { case 0x43b0a4u: goto L_0043b0a4; case 0x43b0adu: goto L_0043b0ad; case 0x43b0b6u: goto L_0043b0b6; case 0x43b0bdu: goto L_0043b0bd; case 0x43b05bu: goto L_0043b05b; case 0x43b064u: goto L_0043b064; case 0x43b06du: goto L_0043b06d; case 0x43b074u: goto L_0043b074; case 0x43b112u: goto L_0043b112; case 0x43b11bu: goto L_0043b11b; case 0x43b122u: goto L_0043b122; default: UNSUP(0x0043b10b, "jump table entry is not a known target"); } }
L_0043b112:; BB(0x0043b112);
    /* 0043b112: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043b119: jmp 0x43b122 */ goto L_0043b122;
L_0043b11b:; BB(0x0043b11b);
    /* 0043b11b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043b122:; BB(0x0043b122);
    /* 0043b122: jmp 0x43b172 */ goto L_0043b172;
L_0043b124:; BB(0x0043b124);
    /* 0043b124: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b126: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043b129: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b12c: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043b133: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0043b136: mov edx, 1 */ r_edx = 0x1u;
    /* 0043b13b: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0043b13e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b141: mov ecx, dword ptr [eax + edx + 0xacc] */ r_ecx = R32((u32)(r_eax+r_edx+0xaccu));
    /* 0043b148: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0043b14b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043b14e: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b151: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0043b154: cmp dword ptr [ebp - 0x34], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b158: je 0x43b162 */ if (fZ) goto L_0043b162;
L_0043b15a:; BB(0x0043b15a);
    /* 0043b15a: cmp dword ptr [ebp - 0x34], 0xc */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b15e: je 0x43b162 */ if (fZ) goto L_0043b162;
L_0043b160:; BB(0x0043b160);
    /* 0043b160: jmp 0x43b16b */ goto L_0043b16b;
L_0043b162:; BB(0x0043b162);
    /* 0043b162: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043b169: jmp 0x43b172 */ goto L_0043b172;
L_0043b16b:; BB(0x0043b16b);
    /* 0043b16b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0043b172:; BB(0x0043b172);
    /* 0043b172: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0043b175: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b177: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b178: ret 4 */ FN_RET(0x0043aff0); r_esp += 8; return;
}


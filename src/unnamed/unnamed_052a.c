#include "protos.h"

void f_0052a780(void) /* sub_52A780 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052a780);
    /* 0052a780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052a781: mov ebp, esp */ r_ebp = r_esp;
    /* 0052a783: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052a786: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0052a789: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0052a78e: mov ecx, dword ptr [eax + 0x4f14] */ r_ecx = R32((u32)(r_eax+0x4f14u));
    /* 0052a794: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0052a797: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 0052a79d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052a79f: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052a7a5: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0052a7a8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52a7aau); call_ind(t); }
    /* 0052a7aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052a7ad: jne 0x52a91f */ if (!fZ) goto L_0052a91f;
L_0052a7b3:; BB(0x0052a7b3);
    /* 0052a7b3: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a7b6: mov dword ptr [eax + 0x100], 0 */ W32((u32)(r_eax+0x100u), 0x0u);
    /* 0052a7c0: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052a7c6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052a7c8: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052a7ce: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052a7d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52a7d3u); call_ind(t); }
    /* 0052a7d3: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052a7d6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0052a7d8: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0052a7da: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052a7dd: add eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052a7e0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0052a7e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a7e6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052a7e9: mov dword ptr [ecx + 0x104], edx */ W32((u32)(r_ecx+0x104u), r_edx);
    /* 0052a7ef: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a7f2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052a7f5: mov dword ptr [eax + 0x108], ecx */ W32((u32)(r_eax+0x108u), r_ecx);
    /* 0052a7fb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a7fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052a801: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 0052a807: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a80a: call 0x52d0e0 */ r_esp -= 4; W32(r_esp, 0x52a80fu); f_0052d0e0();
    /* 0052a80f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a812: mov dword ptr [ecx + 0x124], eax */ W32((u32)(r_ecx+0x124u), r_eax);
    /* 0052a818: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a81b: call 0x52d100 */ r_esp -= 4; W32(r_esp, 0x52a820u); f_0052d100();
    /* 0052a820: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a823: mov dword ptr [edx + 0x168], eax */ W32((u32)(r_edx+0x168u), r_eax);
    /* 0052a829: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a82c: mov dword ptr [eax + 0x110], 0x30efbc */ W32((u32)(r_eax+0x110u), 0x30efbcu);
    /* 0052a836: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a839: mov dword ptr [ecx + 0x114], 0x30efc1 */ W32((u32)(r_ecx+0x114u), 0x30efc1u);
    /* 0052a843: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a846: mov dword ptr [edx + 0x118], 0x30efbd */ W32((u32)(r_edx+0x118u), 0x30efbdu);
    /* 0052a850: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a853: mov dword ptr [eax + 0x11c], 0x30efc4 */ W32((u32)(r_eax+0x11cu), 0x30efc4u);
    /* 0052a85d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a860: mov dword ptr [ecx + 0x120], 0x30efbe */ W32((u32)(r_ecx+0x120u), 0x30efbeu);
    /* 0052a86a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a86d: mov dword ptr [edx + 0x144], 0x30efc2 */ W32((u32)(r_edx+0x144u), 0x30efc2u);
    /* 0052a877: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a87a: mov dword ptr [eax + 0x148], 0x30efc3 */ W32((u32)(r_eax+0x148u), 0x30efc3u);
    /* 0052a884: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a887: mov dword ptr [ecx + 0x154], 0x30f025 */ W32((u32)(r_ecx+0x154u), 0x30f025u);
    /* 0052a891: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a894: mov dword ptr [edx + 0x158], 0x30f020 */ W32((u32)(r_edx+0x158u), 0x30f020u);
    /* 0052a89e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8a1: mov dword ptr [eax + 0x15c], 0x30f023 */ W32((u32)(r_eax+0x15cu), 0x30f023u);
    /* 0052a8ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8ae: mov dword ptr [ecx + 0x160], 0x30f024 */ W32((u32)(r_ecx+0x160u), 0x30f024u);
    /* 0052a8b8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8bb: mov dword ptr [edx + 0x164], 0x30f022 */ W32((u32)(r_edx+0x164u), 0x30f022u);
    /* 0052a8c5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8c8: mov dword ptr [eax + 0x16c], 0x15fca */ W32((u32)(r_eax+0x16cu), 0x15fcau);
    /* 0052a8d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8d5: mov dword ptr [ecx + 0x170], 0x15fcb */ W32((u32)(r_ecx+0x170u), 0x15fcbu);
    /* 0052a8df: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8e2: mov dword ptr [edx + 0x174], 0x15fcc */ W32((u32)(r_edx+0x174u), 0x15fccu);
    /* 0052a8ec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8ef: mov byte ptr [eax + 0x128], 0 */ W8((u32)(r_eax+0x128u), 0x0u);
    /* 0052a8f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a8f9: mov byte ptr [ecx + 0x129], 0 */ W8((u32)(r_ecx+0x129u), 0x0u);
    /* 0052a900: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a903: mov dword ptr [edx + 0x14c], 0x16008 */ W32((u32)(r_edx+0x14cu), 0x16008u);
    /* 0052a90d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a910: mov dword ptr [eax + 0x150], 0x1600a */ W32((u32)(r_eax+0x150u), 0x1600au);
    /* 0052a91a: jmp 0x52aab4 */ goto L_0052aab4;
L_0052a91f:; BB(0x0052a91f);
    /* 0052a91f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a922: mov dword ptr [ecx + 0x100], 0xa */ W32((u32)(r_ecx+0x100u), 0xau);
    /* 0052a92c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a92f: mov dword ptr [edx + 0x104], 0 */ W32((u32)(r_edx+0x104u), 0x0u);
    /* 0052a939: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a93c: mov dword ptr [eax + 0x108], 0 */ W32((u32)(r_eax+0x108u), 0x0u);
    /* 0052a946: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a949: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
    /* 0052a953: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a956: call 0x52d0e0 */ r_esp -= 4; W32(r_esp, 0x52a95bu); f_0052d0e0();
    /* 0052a95b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a95e: mov dword ptr [edx + 0x124], eax */ W32((u32)(r_edx+0x124u), r_eax);
    /* 0052a964: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a967: call 0x52d100 */ r_esp -= 4; W32(r_esp, 0x52a96cu); f_0052d100();
    /* 0052a96c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a96f: mov dword ptr [ecx + 0x168], eax */ W32((u32)(r_ecx+0x168u), r_eax);
    /* 0052a975: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a978: mov dword ptr [edx + 0x110], 0x15f98 */ W32((u32)(r_edx+0x110u), 0x15f98u);
    /* 0052a982: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a985: mov dword ptr [eax + 0x114], 0x15fd2 */ W32((u32)(r_eax+0x114u), 0x15fd2u);
    /* 0052a98f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a992: mov dword ptr [ecx + 0x118], 0x15f97 */ W32((u32)(r_ecx+0x118u), 0x15f97u);
    /* 0052a99c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a99f: mov dword ptr [edx + 0x11c], 0x30efc4 */ W32((u32)(r_edx+0x11cu), 0x30efc4u);
    /* 0052a9a9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a9ac: mov dword ptr [eax + 0x120], 0x15fc3 */ W32((u32)(r_eax+0x120u), 0x15fc3u);
    /* 0052a9b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a9b9: mov byte ptr [ecx + 0x128], 1 */ W8((u32)(r_ecx+0x128u), 0x1u);
    /* 0052a9c0: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a9c3: mov dword ptr [edx + 0x12c], 0x15feb */ W32((u32)(r_edx+0x12cu), 0x15febu);
    /* 0052a9cd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a9d0: mov dword ptr [eax + 0x130], 0x15feb */ W32((u32)(r_eax+0x130u), 0x15febu);
    /* 0052a9da: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a9dd: mov dword ptr [ecx + 0x134], 0x15fef */ W32((u32)(r_ecx+0x134u), 0x15fefu);
    /* 0052a9e7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a9ea: mov byte ptr [edx + 0x129], 1 */ W8((u32)(r_edx+0x129u), 0x1u);
    /* 0052a9f1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052a9f4: mov dword ptr [eax + 0x138], 0x15fea */ W32((u32)(r_eax+0x138u), 0x15feau);
    /* 0052a9fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa01: mov dword ptr [ecx + 0x13c], 0x15fea */ W32((u32)(r_ecx+0x13cu), 0x15feau);
    /* 0052aa0b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa0e: mov dword ptr [edx + 0x140], 0x15fee */ W32((u32)(r_edx+0x140u), 0x15feeu);
    /* 0052aa18: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa1b: mov dword ptr [eax + 0x144], 0x15fc1 */ W32((u32)(r_eax+0x144u), 0x15fc1u);
    /* 0052aa25: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa28: mov dword ptr [ecx + 0x148], 0x15f9e */ W32((u32)(r_ecx+0x148u), 0x15f9eu);
    /* 0052aa32: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa35: mov dword ptr [edx + 0x14c], 0x16008 */ W32((u32)(r_edx+0x14cu), 0x16008u);
    /* 0052aa3f: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa42: mov dword ptr [eax + 0x150], 0x1600a */ W32((u32)(r_eax+0x150u), 0x1600au);
    /* 0052aa4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa4f: mov dword ptr [ecx + 0x154], 0x15f91 */ W32((u32)(r_ecx+0x154u), 0x15f91u);
    /* 0052aa59: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa5c: mov dword ptr [edx + 0x158], 0x15f92 */ W32((u32)(r_edx+0x158u), 0x15f92u);
    /* 0052aa66: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa69: mov dword ptr [eax + 0x15c], 0x15f93 */ W32((u32)(r_eax+0x15cu), 0x15f93u);
    /* 0052aa73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa76: mov dword ptr [ecx + 0x160], 0x15f94 */ W32((u32)(r_ecx+0x160u), 0x15f94u);
    /* 0052aa80: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa83: mov dword ptr [edx + 0x164], 0x15f95 */ W32((u32)(r_edx+0x164u), 0x15f95u);
    /* 0052aa8d: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa90: mov dword ptr [eax + 0x16c], 0x15fca */ W32((u32)(r_eax+0x16cu), 0x15fcau);
    /* 0052aa9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aa9d: mov dword ptr [ecx + 0x170], 0x15fcb */ W32((u32)(r_ecx+0x170u), 0x15fcbu);
    /* 0052aaa7: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052aaaa: mov dword ptr [edx + 0x174], 0x15fcc */ W32((u32)(r_edx+0x174u), 0x15fccu);
L_0052aab4:; BB(0x0052aab4);
    /* 0052aab4: mov esp, ebp */ r_esp = r_ebp;
    /* 0052aab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052aab7: ret  */ FN_RET(0x0052a780); r_esp += 4; return;
}

void f_0052aac0(void) /* sub_52AAC0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052aac0);
    /* 0052aac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052aac1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052aac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052aac5: push 0x6a4284 */ { u32 v = 0x6a4284u; r_esp -= 4; W32(r_esp, v); }
    /* 0052aaca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052aad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052aad1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052aad4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052aad9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052aadb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052aadc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052aadf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052aae5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0052aae8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052aaef: jmp 0x52aafa */ goto L_0052aafa;
L_0052aaf1:; BB(0x0052aaf1);
    /* 0052aaf1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052aaf4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052aaf7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0052aafa:; BB(0x0052aafa);
    /* 0052aafa: cmp dword ptr [ebp - 0x10], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052aafe: jge 0x52abcf */ if ((fS==fO)) goto L_0052abcf;
L_0052ab04:; BB(0x0052ab04);
    /* 0052ab04: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab09: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52ab0eu); f_00686d82();
    /* 0052ab0e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ab11: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0052ab14: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052ab1b: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ab1f: je 0x52ab2e */ if (fZ) goto L_0052ab2e;
L_0052ab21:; BB(0x0052ab21);
    /* 0052ab21: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052ab24: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52ab29u); f_005f5bf0();
    /* 0052ab29: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052ab2c: jmp 0x52ab35 */ goto L_0052ab35;
L_0052ab2e:; BB(0x0052ab2e);
    /* 0052ab2e: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0052ab35:; BB(0x0052ab35);
    /* 0052ab35: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052ab38: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0052ab3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052ab42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ab45: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ab48: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052ab4b: mov dword ptr [eax + edx*4 + 0x3c], ecx */ W32((u32)(r_eax+r_edx*4+0x3cu), r_ecx);
    /* 0052ab4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab51: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab53: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ab56: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052ab5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab5f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ab62: mov edx, dword ptr [ecx*4 + 0x724d5c] */ r_edx = R32((u32)(r_ecx*4+0x724d5cu));
    /* 0052ab69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab6a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ab6d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ab70: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 0052ab74: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52ab79u); f_005eae80();
    /* 0052ab79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ab7b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ab7e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ab81: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ab85: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ab88: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052ab8b: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ab8f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052ab91: mov ecx, edx */ r_ecx = r_edx;
    /* 0052ab93: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0052ab99: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52ab9bu); call_ind(t); }
    /* 0052ab9b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ab9e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052aba1: mov edx, dword ptr [ecx + eax*4 + 0x3c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 0052aba5: mov dword ptr [edx + 0x178], 8 */ W32((u32)(r_edx+0x178u), 0x8u);
    /* 0052abaf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052abb2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052abb5: mov edx, dword ptr [ecx + eax*4 + 0x3c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 0052abb9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052abbc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0052abbf: mov ecx, dword ptr [ecx + eax*4 + 0x3c] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x3cu));
    /* 0052abc3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052abc5: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052abc8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52abcau); call_ind(t); }
    /* 0052abca: jmp 0x52aaf1 */ goto L_0052aaf1;
L_0052abcf:; BB(0x0052abcf);
    /* 0052abcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052abd2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052abd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052abda: mov esp, ebp */ r_esp = r_ebp;
    /* 0052abdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052abdd: ret  */ FN_RET(0x0052aac0); r_esp += 4; return;
}

void f_0052abe0(void) /* sub_52ABE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052abe0);
    /* 0052abe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052abe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052abe3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052abe6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0052abe9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052abf0: jmp 0x52abfb */ goto L_0052abfb;
L_0052abf2:; BB(0x0052abf2);
    /* 0052abf2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052abf5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052abf8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0052abfb:; BB(0x0052abfb);
    /* 0052abfb: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052abff: jge 0x52ac14 */ if ((fS==fO)) goto L_0052ac14;
L_0052ac01:; BB(0x0052ac01);
    /* 0052ac01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ac06: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0052ac09: mov ecx, dword ptr [edx + ecx*4 + 0x3c] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x3cu));
    /* 0052ac0d: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x52ac12u); f_005f5d50();
    /* 0052ac12: jmp 0x52abf2 */ goto L_0052abf2;
L_0052ac14:; BB(0x0052ac14);
    /* 0052ac14: mov esp, ebp */ r_esp = r_ebp;
    /* 0052ac16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ac17: ret  */ FN_RET(0x0052abe0); r_esp += 4; return;
}

void f_0052ac20(void) /* sub_52AC20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052ac20);
    /* 0052ac20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052ac21: mov ebp, esp */ r_ebp = r_esp;
    /* 0052ac23: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052ac26: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0052ac29: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052ac2f: call 0x5384e0 */ r_esp -= 4; W32(r_esp, 0x52ac34u); f_005384e0();
    /* 0052ac34: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052ac37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ac39: jne 0x52ac40 */ if (!fZ) goto L_0052ac40;
L_0052ac3b:; BB(0x0052ac3b);
    /* 0052ac3b: jmp 0x52ae95 */ goto L_0052ae95;
L_0052ac40:; BB(0x0052ac40);
    /* 0052ac40: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052ac46: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0052ac49: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0052ac4c: mov eax, dword ptr [0x793394] */ r_eax = R32((u32)(0x793394u));
    /* 0052ac51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052ac53: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052ac59: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0052ac5c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ac5eu); call_ind(t); }
    /* 0052ac5e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0052ac61: cmp dword ptr [ebp - 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ac65: jne 0x52ad33 */ if (!fZ) goto L_0052ad33;
L_0052ac6b:; BB(0x0052ac6b);
    /* 0052ac6b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0052ac72: jmp 0x52ac7d */ goto L_0052ac7d;
L_0052ac74:; BB(0x0052ac74);
    /* 0052ac74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ac77: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ac7a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0052ac7d:; BB(0x0052ac7d);
    /* 0052ac7d: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ac81: jge 0x52aca2 */ if ((fS==fO)) goto L_0052aca2;
L_0052ac83:; BB(0x0052ac83);
    /* 0052ac83: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ac86: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ac89: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ac8d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ac90: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ac93: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ac97: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052ac99: mov ecx, edx */ r_ecx = r_edx;
    /* 0052ac9b: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0052ac9e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52aca0u); call_ind(t); }
    /* 0052aca0: jmp 0x52ac74 */ goto L_0052ac74;
L_0052aca2:; BB(0x0052aca2);
    /* 0052aca2: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052aca6: jl 0x52acbf */ if ((fS!=fO)) goto L_0052acbf;
L_0052aca8:; BB(0x0052aca8);
    /* 0052aca8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052acab: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0052acae: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052acb1: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0052acb4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052acb6: mov ecx, eax */ r_ecx = r_eax;
    /* 0052acb8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052acbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52acbdu); call_ind(t); }
    /* 0052acbd: jmp 0x52acd2 */ goto L_0052acd2;
L_0052acbf:; BB(0x0052acbf);
    /* 0052acbf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052acc2: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0052acc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052acc8: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0052accb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052accd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052acd0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52acd2u); call_ind(t); }
L_0052acd2:; BB(0x0052acd2);
    /* 0052acd2: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052acd6: jl 0x52aced */ if ((fS!=fO)) goto L_0052aced;
L_0052acd8:; BB(0x0052acd8);
    /* 0052acd8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052acdb: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0052acde: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ace1: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0052ace4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ace6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052ace9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52acebu); call_ind(t); }
    /* 0052aceb: jmp 0x52ad00 */ goto L_0052ad00;
L_0052aced:; BB(0x0052aced);
    /* 0052aced: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052acf0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0052acf3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052acf6: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0052acf9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052acfb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052acfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ad00u); call_ind(t); }
L_0052ad00:; BB(0x0052ad00);
    /* 0052ad00: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ad04: jl 0x52ad1b */ if ((fS!=fO)) goto L_0052ad1b;
L_0052ad06:; BB(0x0052ad06);
    /* 0052ad06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad09: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0052ad0c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad0f: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0052ad12: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ad14: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052ad17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ad19u); call_ind(t); }
    /* 0052ad19: jmp 0x52ad2e */ goto L_0052ad2e;
L_0052ad1b:; BB(0x0052ad1b);
    /* 0052ad1b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad1e: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 0052ad21: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad24: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0052ad27: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ad29: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052ad2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ad2eu); call_ind(t); }
L_0052ad2e:; BB(0x0052ad2e);
    /* 0052ad2e: jmp 0x52ae95 */ goto L_0052ae95;
L_0052ad33:; BB(0x0052ad33);
    /* 0052ad33: cmp dword ptr [ebp - 0xc], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ad37: jne 0x52ae5e */ if (!fZ) goto L_0052ae5e;
L_0052ad3d:; BB(0x0052ad3d);
    /* 0052ad3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052ad44: jmp 0x52ad4f */ goto L_0052ad4f;
L_0052ad46:; BB(0x0052ad46);
    /* 0052ad46: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ad49: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ad4c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0052ad4f:; BB(0x0052ad4f);
    /* 0052ad4f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ad53: jge 0x52ad74 */ if ((fS==fO)) goto L_0052ad74;
L_0052ad55:; BB(0x0052ad55);
    /* 0052ad55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ad58: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad5b: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ad5f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ad62: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad65: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ad69: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052ad6b: mov ecx, edx */ r_ecx = r_edx;
    /* 0052ad6d: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0052ad70: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52ad72u); call_ind(t); }
    /* 0052ad72: jmp 0x52ad46 */ goto L_0052ad46;
L_0052ad74:; BB(0x0052ad74);
    /* 0052ad74: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ad78: jl 0x52ad91 */ if ((fS!=fO)) goto L_0052ad91;
L_0052ad7a:; BB(0x0052ad7a);
    /* 0052ad7a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad7d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0052ad80: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad83: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0052ad86: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052ad88: mov ecx, eax */ r_ecx = r_eax;
    /* 0052ad8a: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052ad8d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ad8fu); call_ind(t); }
    /* 0052ad8f: jmp 0x52ada4 */ goto L_0052ada4;
L_0052ad91:; BB(0x0052ad91);
    /* 0052ad91: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad94: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 0052ad97: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ad9a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0052ad9d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ad9f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052ada2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ada4u); call_ind(t); }
L_0052ada4:; BB(0x0052ada4);
    /* 0052ada4: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ada8: jl 0x52adbf */ if ((fS!=fO)) goto L_0052adbf;
L_0052adaa:; BB(0x0052adaa);
    /* 0052adaa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052adad: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0052adb0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052adb3: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0052adb6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052adb8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052adbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52adbdu); call_ind(t); }
    /* 0052adbd: jmp 0x52add2 */ goto L_0052add2;
L_0052adbf:; BB(0x0052adbf);
    /* 0052adbf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052adc2: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0052adc5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052adc8: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0052adcb: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052adcd: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052add0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52add2u); call_ind(t); }
L_0052add2:; BB(0x0052add2);
    /* 0052add2: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052add6: jl 0x52aded */ if ((fS!=fO)) goto L_0052aded;
L_0052add8:; BB(0x0052add8);
    /* 0052add8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052addb: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0052adde: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ade1: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0052ade4: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ade6: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052ade9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52adebu); call_ind(t); }
    /* 0052adeb: jmp 0x52ae00 */ goto L_0052ae00;
L_0052aded:; BB(0x0052aded);
    /* 0052aded: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052adf0: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0052adf3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052adf6: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0052adf9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052adfb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052adfe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ae00u); call_ind(t); }
L_0052ae00:; BB(0x0052ae00);
    /* 0052ae00: cmp dword ptr [ebp - 8], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ae04: jl 0x52ae1b */ if ((fS!=fO)) goto L_0052ae1b;
L_0052ae06:; BB(0x0052ae06);
    /* 0052ae06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae09: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0052ae0c: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae0f: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0052ae12: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ae14: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052ae17: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ae19u); call_ind(t); }
    /* 0052ae19: jmp 0x52ae2e */ goto L_0052ae2e;
L_0052ae1b:; BB(0x0052ae1b);
    /* 0052ae1b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae1e: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0052ae21: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae24: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 0052ae27: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ae29: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052ae2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ae2eu); call_ind(t); }
L_0052ae2e:; BB(0x0052ae2e);
    /* 0052ae2e: cmp dword ptr [ebp - 8], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ae32: jl 0x52ae49 */ if ((fS!=fO)) goto L_0052ae49;
L_0052ae34:; BB(0x0052ae34);
    /* 0052ae34: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae37: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0052ae3a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae3d: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0052ae40: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ae42: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052ae45: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ae47u); call_ind(t); }
    /* 0052ae47: jmp 0x52ae5c */ goto L_0052ae5c;
L_0052ae49:; BB(0x0052ae49);
    /* 0052ae49: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae4c: mov edx, dword ptr [ecx + 0x58] */ r_edx = R32((u32)(r_ecx+0x58u));
    /* 0052ae4f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae52: mov ecx, dword ptr [eax + 0x58] */ r_ecx = R32((u32)(r_eax+0x58u));
    /* 0052ae55: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052ae57: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052ae5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ae5cu); call_ind(t); }
L_0052ae5c:; BB(0x0052ae5c);
    /* 0052ae5c: jmp 0x52ae95 */ goto L_0052ae95;
L_0052ae5e:; BB(0x0052ae5e);
    /* 0052ae5e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052ae65: jmp 0x52ae70 */ goto L_0052ae70;
L_0052ae67:; BB(0x0052ae67);
    /* 0052ae67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ae6a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052ae6d: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0052ae70:; BB(0x0052ae70);
    /* 0052ae70: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052ae74: jge 0x52ae95 */ if ((fS==fO)) goto L_0052ae95;
L_0052ae76:; BB(0x0052ae76);
    /* 0052ae76: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ae79: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae7c: mov ecx, dword ptr [eax + edx*4 + 0x3c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ae80: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0052ae83: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052ae86: mov edx, dword ptr [eax + edx*4 + 0x3c] */ r_edx = R32((u32)(r_eax+r_edx*4+0x3cu));
    /* 0052ae8a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052ae8c: mov ecx, edx */ r_ecx = r_edx;
    /* 0052ae8e: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0052ae91: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52ae93u); call_ind(t); }
    /* 0052ae93: jmp 0x52ae67 */ goto L_0052ae67;
L_0052ae95:; BB(0x0052ae95);
    /* 0052ae95: mov esp, ebp */ r_esp = r_ebp;
    /* 0052ae97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052ae98: ret  */ FN_RET(0x0052ac20); r_esp += 4; return;
}

void f_0052afe0(void) /* sub_52AFE0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0052afe0);
    /* 0052afe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052afe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0052afe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052afe5: push 0x6a441e */ { u32 v = 0x6a441eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052afea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052aff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052aff1: sub esp, 0x17c */ {  u32 a = r_esp; u32 b = 0x17cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052aff7: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0052affc: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052affe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052afff: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0052b002: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0052b008: mov dword ptr [ebp - 0x114], ecx */ W32((u32)(r_ebp+0xfffffeecu), r_ecx);
    /* 0052b00e: mov dword ptr [ebp - 0x28], 0x91 */ W32((u32)(r_ebp+0xffffffd8u), 0x91u);
    /* 0052b015: mov dword ptr [ebp - 0x24], 0x172 */ W32((u32)(r_ebp+0xffffffdcu), 0x172u);
    /* 0052b01c: mov dword ptr [ebp - 0x20], 0x168 */ W32((u32)(r_ebp+0xffffffe0u), 0x168u);
    /* 0052b023: mov dword ptr [ebp - 0x1c], 0x172 */ W32((u32)(r_ebp+0xffffffe4u), 0x172u);
    /* 0052b02a: mov dword ptr [ebp - 0x18], 0x91 */ W32((u32)(r_ebp+0xffffffe8u), 0x91u);
    /* 0052b031: mov dword ptr [ebp - 0x14], 0xd8 */ W32((u32)(r_ebp+0xffffffecu), 0xd8u);
    /* 0052b038: push 0x6c3b80 */ { u32 v = 0x6c3b80u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b03d: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x52b042u); f_00630f40();
    /* 0052b042: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b045: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b046: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052b04c: call 0x5f38b0 */ r_esp -= 4; W32(r_esp, 0x52b051u); f_005f38b0();
    /* 0052b051: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b057: call 0x52a780 */ r_esp -= 4; W32(r_esp, 0x52b05cu); f_0052a780();
    /* 0052b05c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b062: call 0x52aac0 */ r_esp -= 4; W32(r_esp, 0x52b067u); f_0052aac0();
    /* 0052b067: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b06c: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b071u); f_00686d82();
    /* 0052b071: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b074: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0052b077: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052b07e: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b082: je 0x52b094 */ if (fZ) goto L_0052b094;
L_0052b084:; BB(0x0052b084);
    /* 0052b084: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0052b087: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52b08cu); f_005eaaf0();
    /* 0052b08c: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 0052b092: jmp 0x52b09e */ goto L_0052b09e;
L_0052b094:; BB(0x0052b094);
    /* 0052b094: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_0052b09e:; BB(0x0052b09e);
    /* 0052b09e: mov eax, dword ptr [ebp - 0x118] */ r_eax = R32((u32)(r_ebp+0xfffffee8u));
    /* 0052b0a4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0052b0a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b0ae: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b0b4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052b0b7: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0052b0ba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b0bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b0be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b0c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b0c2: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b0c8: mov ecx, dword ptr [eax + 0x168] */ r_ecx = R32((u32)(r_eax+0x168u));
    /* 0052b0ce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b0cf: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b0d5: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0052b0d8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b0ddu); f_005eae80();
    /* 0052b0dd: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b0e3: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0052b0e6: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b0ec: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0052b0ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052b0f1: mov ecx, eax */ r_ecx = r_eax;
    /* 0052b0f3: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052b0f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b0f8u); call_ind(t); }
    /* 0052b0f8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052b0ff: jmp 0x52b10a */ goto L_0052b10a;
L_0052b101:; BB(0x0052b101);
    /* 0052b101: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b104: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052b107: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052b10a:; BB(0x0052b10a);
    /* 0052b10a: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052b10e: jge 0x52b294 */ if ((fS==fO)) goto L_0052b294;
L_0052b114:; BB(0x0052b114);
    /* 0052b114: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b119: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b11eu); f_00686d82();
    /* 0052b11e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b121: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0052b124: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052b12b: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b12f: je 0x52b141 */ if (fZ) goto L_0052b141;
L_0052b131:; BB(0x0052b131);
    /* 0052b131: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0052b134: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52b139u); f_005eaaf0();
    /* 0052b139: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 0052b13f: jmp 0x52b14b */ goto L_0052b14b;
L_0052b141:; BB(0x0052b141);
    /* 0052b141: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_0052b14b:; BB(0x0052b14b);
    /* 0052b14b: mov edx, dword ptr [ebp - 0x11c] */ r_edx = R32((u32)(r_ebp+0xfffffee4u));
    /* 0052b151: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0052b154: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b15b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b15e: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b164: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0052b167: mov dword ptr [ecx + eax*4 + 0xa0], edx */ W32((u32)(r_ecx+r_eax*4+0xa0u), r_edx);
    /* 0052b16e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b170: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b172: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b178: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052b17e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b17f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b181: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b184: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b18a: mov ecx, dword ptr [eax + edx*4 + 0x16c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x16cu));
    /* 0052b191: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b192: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b195: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b19b: mov ecx, dword ptr [eax + edx*4 + 0xa0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0052b1a2: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b1a7u); f_005eae80();
    /* 0052b1a7: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052b1ad: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x52b1b2u); f_00538440();
    /* 0052b1b2: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052b1b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b1b7: je 0x52b1e2 */ if (fZ) goto L_0052b1e2;
L_0052b1b9:; BB(0x0052b1b9);
    /* 0052b1b9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b1bc: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b1c2: mov ecx, dword ptr [eax + edx*4 + 0xa0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0052b1c9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b1cc: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b1d2: mov edx, dword ptr [eax + edx*4 + 0xa0] */ r_edx = R32((u32)(r_eax+r_edx*4+0xa0u));
    /* 0052b1d9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052b1db: mov ecx, edx */ r_ecx = r_edx;
    /* 0052b1dd: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052b1e0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52b1e2u); call_ind(t); }
L_0052b1e2:; BB(0x0052b1e2);
    /* 0052b1e2: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b1e7: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b1ecu); f_00686d82();
    /* 0052b1ec: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b1ef: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0052b1f2: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0052b1f9: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b1fd: je 0x52b20f */ if (fZ) goto L_0052b20f;
L_0052b1ff:; BB(0x0052b1ff);
    /* 0052b1ff: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0052b202: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52b207u); f_005f5bf0();
    /* 0052b207: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 0052b20d: jmp 0x52b219 */ goto L_0052b219;
L_0052b20f:; BB(0x0052b20f);
    /* 0052b20f: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_0052b219:; BB(0x0052b219);
    /* 0052b219: mov eax, dword ptr [ebp - 0x120] */ r_eax = R32((u32)(r_ebp+0xfffffee0u));
    /* 0052b21f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0052b222: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b229: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b22c: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b232: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0052b235: mov dword ptr [edx + ecx*4 + 0xb4], eax */ W32((u32)(r_edx+r_ecx*4+0xb4u), r_eax);
    /* 0052b23c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b23e: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b240: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b246: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052b24c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b24d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b24f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b252: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b258: mov edx, dword ptr [ecx + eax*4 + 0x16c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x16cu));
    /* 0052b25f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b260: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b263: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b269: mov ecx, dword ptr [ecx + eax*4 + 0xb4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xb4u));
    /* 0052b270: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b275u); f_005eae80();
    /* 0052b275: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b278: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b27e: mov ecx, dword ptr [eax + edx*4 + 0xb4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xb4u));
    /* 0052b285: mov dword ptr [ecx + 0x178], 8 */ W32((u32)(r_ecx+0x178u), 0x8u);
    /* 0052b28f: jmp 0x52b101 */ goto L_0052b101;
L_0052b294:; BB(0x0052b294);
    /* 0052b294: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b299: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b29eu); f_00686d82();
    /* 0052b29e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b2a1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0052b2a4: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0052b2ab: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b2af: je 0x52b2c1 */ if (fZ) goto L_0052b2c1;
L_0052b2b1:; BB(0x0052b2b1);
    /* 0052b2b1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0052b2b4: call 0x52e750 */ r_esp -= 4; W32(r_esp, 0x52b2b9u); f_0052e750();
    /* 0052b2b9: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 0052b2bf: jmp 0x52b2cb */ goto L_0052b2cb;
L_0052b2c1:; BB(0x0052b2c1);
    /* 0052b2c1: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_0052b2cb:; BB(0x0052b2cb);
    /* 0052b2cb: mov edx, dword ptr [ebp - 0x124] */ r_edx = R32((u32)(r_ebp+0xfffffedcu));
    /* 0052b2d1: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0052b2d4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b2db: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b2e1: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0052b2e4: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0052b2e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2e9: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2eb: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b2f1: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052b2f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b2fa: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b300: mov edx, dword ptr [ecx + 0x110] */ r_edx = R32((u32)(r_ecx+0x110u));
    /* 0052b306: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b307: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b30d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052b310: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b315u); f_005eae80();
    /* 0052b315: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b31b: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0052b31e: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b324: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0052b327: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052b329: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052b32c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b32eu); call_ind(t); }
    /* 0052b32e: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b333: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b338u); f_00686d82();
    /* 0052b338: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b33b: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0052b33e: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0052b345: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b349: je 0x52b35b */ if (fZ) goto L_0052b35b;
L_0052b34b:; BB(0x0052b34b);
    /* 0052b34b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0052b34e: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52b353u); f_005f5bf0();
    /* 0052b353: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 0052b359: jmp 0x52b365 */ goto L_0052b365;
L_0052b35b:; BB(0x0052b35b);
    /* 0052b35b: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_0052b365:; BB(0x0052b365);
    /* 0052b365: mov ecx, dword ptr [ebp - 0x128] */ r_ecx = R32((u32)(r_ebp+0xfffffed8u));
    /* 0052b36b: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0052b36e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b375: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b37b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0052b37e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0052b381: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b383: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0052b385: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b38b: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052b391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b394: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b39a: mov ecx, dword ptr [eax + 0x118] */ r_ecx = R32((u32)(r_eax+0x118u));
    /* 0052b3a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b3a1: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b3a7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0052b3aa: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b3afu); f_005eae80();
    /* 0052b3af: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052b3b4: mov cl, byte ptr [eax + 0x25] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x25u))) & 0xffu);
    /* 0052b3b7: mov byte ptr [ebp - 0x101], cl */ W8((u32)(r_ebp+0xfffffeffu), (u8)r_ecx);
    /* 0052b3bd: movzx edx, byte ptr [ebp - 0x101] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeffu));
    /* 0052b3c4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); fC = (b != 0); }
    /* 0052b3c6: sbb edx, edx */ { u32 c = fC; u32 a = r_edx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 0052b3c8: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052b3ca: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052b3cd: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b3d3: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0052b3d6: mov dword ptr [ecx + 0x178], edx */ W32((u32)(r_ecx+0x178u), r_edx);
    /* 0052b3dc: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b3e1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b3e6u); f_00686d82();
    /* 0052b3e6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b3e9: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0052b3ec: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0052b3f3: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b3f7: je 0x52b409 */ if (fZ) goto L_0052b409;
L_0052b3f9:; BB(0x0052b3f9);
    /* 0052b3f9: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0052b3fc: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52b401u); f_005f5bf0();
    /* 0052b401: mov dword ptr [ebp - 0x12c], eax */ W32((u32)(r_ebp+0xfffffed4u), r_eax);
    /* 0052b407: jmp 0x52b413 */ goto L_0052b413;
L_0052b409:; BB(0x0052b409);
    /* 0052b409: mov dword ptr [ebp - 0x12c], 0 */ W32((u32)(r_ebp+0xfffffed4u), 0x0u);
L_0052b413:; BB(0x0052b413);
    /* 0052b413: mov edx, dword ptr [ebp - 0x12c] */ r_edx = R32((u32)(r_ebp+0xfffffed4u));
    /* 0052b419: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0052b41c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b423: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b429: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0052b42c: mov dword ptr [eax + 0xc0], ecx */ W32((u32)(r_eax+0xc0u), r_ecx);
    /* 0052b432: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b434: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0052b436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b438: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b43a: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b440: mov eax, dword ptr [edx + 0x11c] */ r_eax = R32((u32)(r_edx+0x11cu));
    /* 0052b446: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b447: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b44d: mov ecx, dword ptr [ecx + 0xc0] */ r_ecx = R32((u32)(r_ecx+0xc0u));
    /* 0052b453: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b458u); f_005eae80();
    /* 0052b458: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b45d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b462u); f_00686d82();
    /* 0052b462: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b465: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0052b468: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0052b46f: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b473: je 0x52b485 */ if (fZ) goto L_0052b485;
L_0052b475:; BB(0x0052b475);
    /* 0052b475: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0052b478: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x52b47du); f_005ec5a0();
    /* 0052b47d: mov dword ptr [ebp - 0x130], eax */ W32((u32)(r_ebp+0xfffffed0u), r_eax);
    /* 0052b483: jmp 0x52b48f */ goto L_0052b48f;
L_0052b485:; BB(0x0052b485);
    /* 0052b485: mov dword ptr [ebp - 0x130], 0 */ W32((u32)(r_ebp+0xfffffed0u), 0x0u);
L_0052b48f:; BB(0x0052b48f);
    /* 0052b48f: mov edx, dword ptr [ebp - 0x130] */ r_edx = R32((u32)(r_ebp+0xfffffed0u));
    /* 0052b495: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0052b498: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b49f: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b4a5: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0052b4a8: mov dword ptr [eax + 0x8c], ecx */ W32((u32)(r_eax+0x8cu), r_ecx);
    /* 0052b4ae: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4b0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4b2: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4b4: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b4ba: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052b4c0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b4c6: mov edx, dword ptr [ecx + 0x104] */ r_edx = R32((u32)(r_ecx+0x104u));
    /* 0052b4cc: lea eax, [eax + edx + 0x13c] */ r_eax = (u32)(r_eax+r_edx+0x13cu);
    /* 0052b4d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4d4: push 0xad */ { u32 v = 0xadu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4d9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4db: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4dd: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4df: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b4e4: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b4ea: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0052b4f0: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x52b4f5u); f_005ec8f0();
    /* 0052b4f5: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b4fb: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 0052b501: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b507: mov ecx, dword ptr [ecx + 0x8c] */ r_ecx = R32((u32)(r_ecx+0x8cu));
    /* 0052b50d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052b50f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052b512: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b514u); call_ind(t); }
    /* 0052b514: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052b51b: jmp 0x52b526 */ goto L_0052b526;
L_0052b51d:; BB(0x0052b51d);
    /* 0052b51d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b520: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052b523: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052b526:; BB(0x0052b526);
    /* 0052b526: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052b52a: jge 0x52b62d */ if ((fS==fO)) goto L_0052b62d;
L_0052b530:; BB(0x0052b530);
    /* 0052b530: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b535: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b53au); f_00686d82();
    /* 0052b53a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b53d: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0052b540: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0052b547: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b54b: je 0x52b55d */ if (fZ) goto L_0052b55d;
L_0052b54d:; BB(0x0052b54d);
    /* 0052b54d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0052b550: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x52b555u); f_005ec5a0();
    /* 0052b555: mov dword ptr [ebp - 0x134], eax */ W32((u32)(r_ebp+0xfffffeccu), r_eax);
    /* 0052b55b: jmp 0x52b567 */ goto L_0052b567;
L_0052b55d:; BB(0x0052b55d);
    /* 0052b55d: mov dword ptr [ebp - 0x134], 0 */ W32((u32)(r_ebp+0xfffffeccu), 0x0u);
L_0052b567:; BB(0x0052b567);
    /* 0052b567: mov edx, dword ptr [ebp - 0x134] */ r_edx = R32((u32)(r_ebp+0xfffffeccu));
    /* 0052b56d: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0052b570: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b577: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b57a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b580: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0052b583: mov dword ptr [ecx + eax*4 + 0x74], edx */ W32((u32)(r_ecx+r_eax*4+0x74u), r_edx);
    /* 0052b587: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b589: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b58b: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b58d: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b593: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052b599: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b59f: mov eax, dword ptr [edx + 0x108] */ r_eax = R32((u32)(r_edx+0x108u));
    /* 0052b5a5: lea ecx, [ecx + eax + 0x13c] */ r_ecx = (u32)(r_ecx+r_eax+0x13cu);
    /* 0052b5ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5ad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b5b0: imul edx, edx, 0xc */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xcu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052b5b3: mov eax, 0x10d */ r_eax = 0x10du;
    /* 0052b5b8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0052b5ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5bb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5bd: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5bf: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5c1: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5c6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b5c9: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b5cf: mov ecx, dword ptr [edx + ecx*4 + 0x74] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x74u));
    /* 0052b5d3: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x52b5d8u); f_005ec8f0();
    /* 0052b5d8: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b5dc: jne 0x52b607 */ if (!fZ) goto L_0052b607;
L_0052b5de:; BB(0x0052b5de);
    /* 0052b5de: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b5e3: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b5e6: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b5ec: mov edx, dword ptr [ecx + eax*4 + 0x74] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x74u));
    /* 0052b5f0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b5f3: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b5f9: mov ecx, dword ptr [ecx + eax*4 + 0x74] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x74u));
    /* 0052b5fd: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052b5ff: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0052b605: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b607u); call_ind(t); }
L_0052b607:; BB(0x0052b607);
    /* 0052b607: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b60a: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b610: mov eax, dword ptr [edx + ecx*4 + 0x74] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x74u));
    /* 0052b614: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b617: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b61d: mov ecx, dword ptr [edx + ecx*4 + 0x74] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x74u));
    /* 0052b621: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052b623: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0052b626: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52b628u); call_ind(t); }
    /* 0052b628: jmp 0x52b51d */ goto L_0052b51d;
L_0052b62d:; BB(0x0052b62d);
    /* 0052b62d: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052b634: jmp 0x52b63f */ goto L_0052b63f;
L_0052b636:; BB(0x0052b636);
    /* 0052b636: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b639: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052b63c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0052b63f:; BB(0x0052b63f);
    /* 0052b63f: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052b643: jge 0x52b75a */ if ((fS==fO)) goto L_0052b75a;
L_0052b649:; BB(0x0052b649);
    /* 0052b649: push 0x1d0 */ { u32 v = 0x1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b64e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b653u); f_00686d82();
    /* 0052b653: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b656: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0052b659: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0052b660: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b664: je 0x52b676 */ if (fZ) goto L_0052b676;
L_0052b666:; BB(0x0052b666);
    /* 0052b666: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0052b669: call 0x5ec5a0 */ r_esp -= 4; W32(r_esp, 0x52b66eu); f_005ec5a0();
    /* 0052b66e: mov dword ptr [ebp - 0x138], eax */ W32((u32)(r_ebp+0xfffffec8u), r_eax);
    /* 0052b674: jmp 0x52b680 */ goto L_0052b680;
L_0052b676:; BB(0x0052b676);
    /* 0052b676: mov dword ptr [ebp - 0x138], 0 */ W32((u32)(r_ebp+0xfffffec8u), 0x0u);
L_0052b680:; BB(0x0052b680);
    /* 0052b680: mov ecx, dword ptr [ebp - 0x138] */ r_ecx = R32((u32)(r_ebp+0xfffffec8u));
    /* 0052b686: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0052b689: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b690: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b693: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b699: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0052b69c: mov dword ptr [eax + edx*4 + 0x90], ecx */ W32((u32)(r_eax+r_edx*4+0x90u), r_ecx);
    /* 0052b6a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6a5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6a7: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6a9: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b6af: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052b6b5: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b6bb: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 0052b6c1: lea eax, [eax + edx + 0x13c] */ r_eax = (u32)(r_eax+r_edx+0x13cu);
    /* 0052b6c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6c9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b6cc: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0052b6cf: mov edx, 0x181 */ r_edx = 0x181u;
    /* 0052b6d4: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0052b6d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6d7: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6d9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6db: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6dd: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b6e2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b6e5: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b6eb: mov ecx, dword ptr [ecx + eax*4 + 0x90] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0052b6f2: call 0x5ec8f0 */ r_esp -= 4; W32(r_esp, 0x52b6f7u); f_005ec8f0();
    /* 0052b6f7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b6fb: jne 0x52b72e */ if (!fZ) goto L_0052b72e;
L_0052b6fd:; BB(0x0052b6fd);
    /* 0052b6fd: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b702: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b705: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b70b: mov ecx, dword ptr [eax + edx*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0052b712: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b715: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b71b: mov edx, dword ptr [eax + edx*4 + 0x90] */ r_edx = R32((u32)(r_eax+r_edx*4+0x90u));
    /* 0052b722: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0052b724: mov ecx, edx */ r_ecx = r_edx;
    /* 0052b726: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0052b72c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52b72eu); call_ind(t); }
L_0052b72e:; BB(0x0052b72e);
    /* 0052b72e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b731: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b737: mov edx, dword ptr [ecx + eax*4 + 0x90] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0052b73e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052b741: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b747: mov ecx, dword ptr [ecx + eax*4 + 0x90] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x90u));
    /* 0052b74e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052b750: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052b753: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b755u); call_ind(t); }
    /* 0052b755: jmp 0x52b636 */ goto L_0052b636;
L_0052b75a:; BB(0x0052b75a);
    /* 0052b75a: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b75f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b764u); f_00686d82();
    /* 0052b764: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b767: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0052b76a: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0052b771: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b775: je 0x52b787 */ if (fZ) goto L_0052b787;
L_0052b777:; BB(0x0052b777);
    /* 0052b777: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 0052b77a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52b77fu); f_005f5bf0();
    /* 0052b77f: mov dword ptr [ebp - 0x13c], eax */ W32((u32)(r_ebp+0xfffffec4u), r_eax);
    /* 0052b785: jmp 0x52b791 */ goto L_0052b791;
L_0052b787:; BB(0x0052b787);
    /* 0052b787: mov dword ptr [ebp - 0x13c], 0 */ W32((u32)(r_ebp+0xfffffec4u), 0x0u);
L_0052b791:; BB(0x0052b791);
    /* 0052b791: mov ecx, dword ptr [ebp - 0x13c] */ r_ecx = R32((u32)(r_ebp+0xfffffec4u));
    /* 0052b797: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0052b79a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b7a1: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b7a7: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 0052b7aa: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0052b7ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b7af: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b7b1: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b7b7: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052b7bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b7be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b7c0: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b7c6: mov ecx, dword ptr [eax + 0x120] */ r_ecx = R32((u32)(r_eax+0x120u));
    /* 0052b7cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b7cd: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b7d3: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0052b7d6: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b7dbu); f_005eae80();
    /* 0052b7db: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b7e1: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0052b7e4: mov dword ptr [ecx + 0x178], 0 */ W32((u32)(r_ecx+0x178u), 0x0u);
    /* 0052b7ee: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b7f3: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b7f8u); f_00686d82();
    /* 0052b7f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b7fb: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0052b7fe: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0052b805: cmp dword ptr [ebp - 0x80], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff80u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b809: je 0x52b81b */ if (fZ) goto L_0052b81b;
L_0052b80b:; BB(0x0052b80b);
    /* 0052b80b: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0052b80e: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52b813u); f_005eaaf0();
    /* 0052b813: mov dword ptr [ebp - 0x140], eax */ W32((u32)(r_ebp+0xfffffec0u), r_eax);
    /* 0052b819: jmp 0x52b825 */ goto L_0052b825;
L_0052b81b:; BB(0x0052b81b);
    /* 0052b81b: mov dword ptr [ebp - 0x140], 0 */ W32((u32)(r_ebp+0xfffffec0u), 0x0u);
L_0052b825:; BB(0x0052b825);
    /* 0052b825: mov edx, dword ptr [ebp - 0x140] */ r_edx = R32((u32)(r_ebp+0xfffffec0u));
    /* 0052b82b: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0052b82e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b835: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b83b: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0052b83e: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 0052b841: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b843: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b845: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b84b: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052b851: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b852: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b854: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b85a: call 0x52d140 */ r_esp -= 4; W32(r_esp, 0x52b85fu); f_0052d140();
    /* 0052b85f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b860: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b866: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0052b869: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b86eu); f_005eae80();
    /* 0052b86e: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0052b874: mov eax, dword ptr [edx + 0x4f10] */ r_eax = R32((u32)(r_edx+0x4f10u));
    /* 0052b87a: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 0052b880: mov ecx, dword ptr [ebp - 0x108] */ r_ecx = R32((u32)(r_ebp+0xfffffef8u));
    /* 0052b886: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b887: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b88d: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0052b890: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b896: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 0052b899: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052b89b: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052b8a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b8a3u); call_ind(t); }
    /* 0052b8a3: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b8a9: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0052b8ac: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b8b2: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0052b8b5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052b8b7: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052b8ba: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b8bcu); call_ind(t); }
    /* 0052b8bc: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b8c1: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b8c6u); f_00686d82();
    /* 0052b8c6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b8c9: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0052b8cf: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 0052b8d6: cmp dword ptr [ebp - 0x88], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff78u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b8dd: je 0x52b8f2 */ if (fZ) goto L_0052b8f2;
L_0052b8df:; BB(0x0052b8df);
    /* 0052b8df: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 0052b8e5: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52b8eau); f_005eaaf0();
    /* 0052b8ea: mov dword ptr [ebp - 0x144], eax */ W32((u32)(r_ebp+0xfffffebcu), r_eax);
    /* 0052b8f0: jmp 0x52b8fc */ goto L_0052b8fc;
L_0052b8f2:; BB(0x0052b8f2);
    /* 0052b8f2: mov dword ptr [ebp - 0x144], 0 */ W32((u32)(r_ebp+0xfffffebcu), 0x0u);
L_0052b8fc:; BB(0x0052b8fc);
    /* 0052b8fc: mov ecx, dword ptr [ebp - 0x144] */ r_ecx = R32((u32)(r_ebp+0xfffffebcu));
    /* 0052b902: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0052b908: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b90f: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b915: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0052b91b: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0052b91e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b920: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b922: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b928: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052b92e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b92f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b931: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b937: call 0x52d120 */ r_esp -= 4; W32(r_esp, 0x52b93cu); f_0052d120();
    /* 0052b93c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052b93d: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b943: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052b946: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52b94bu); f_005eae80();
    /* 0052b94b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b951: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0052b954: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b95a: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052b95d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052b95f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052b962: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52b964u); call_ind(t); }
    /* 0052b964: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b96a: movzx edx, byte ptr [ecx + 0x128] */ r_edx = (u32)R8((u32)(r_ecx+0x128u));
    /* 0052b971: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b973: je 0x52ba2d */ if (fZ) goto L_0052ba2d;
L_0052b979:; BB(0x0052b979);
    /* 0052b979: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b97e: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52b983u); f_00686d82();
    /* 0052b983: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b986: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0052b98c: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 0052b993: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052b99a: je 0x52b9af */ if (fZ) goto L_0052b9af;
L_0052b99c:; BB(0x0052b99c);
    /* 0052b99c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0052b9a2: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52b9a7u); f_005eaaf0();
    /* 0052b9a7: mov dword ptr [ebp - 0x148], eax */ W32((u32)(r_ebp+0xfffffeb8u), r_eax);
    /* 0052b9ad: jmp 0x52b9b9 */ goto L_0052b9b9;
L_0052b9af:; BB(0x0052b9af);
    /* 0052b9af: mov dword ptr [ebp - 0x148], 0 */ W32((u32)(r_ebp+0xfffffeb8u), 0x0u);
L_0052b9b9:; BB(0x0052b9b9);
    /* 0052b9b9: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0052b9bf: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0052b9c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052b9cc: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b9d2: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0052b9d8: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0052b9db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b9dd: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0052b9df: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b9e5: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052b9eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052b9ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b9ee: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052b9f0: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52b9f5u); f_0062fbf0();
    /* 0052b9f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052b9f8: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052b9fe: mov eax, dword ptr [edx + eax*4 + 0x12c] */ r_eax = R32((u32)(r_edx+r_eax*4+0x12cu));
    /* 0052ba05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052ba06: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052ba0c: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0052ba0f: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52ba14u); f_005eae80();
    /* 0052ba14: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052ba1a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0052ba1d: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052ba23: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 0052ba26: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052ba28: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052ba2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52ba2du); call_ind(t); }
L_0052ba2d:; BB(0x0052ba2d);
    /* 0052ba2d: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052ba33: movzx edx, byte ptr [ecx + 0x129] */ r_edx = (u32)R8((u32)(r_ecx+0x129u));
    /* 0052ba3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ba3c: je 0x52baf6 */ if (fZ) goto L_0052baf6;
L_0052ba42:; BB(0x0052ba42);
    /* 0052ba42: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052ba47: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52ba4cu); f_00686d82();
    /* 0052ba4c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052ba4f: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 0052ba55: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 0052ba5c: cmp dword ptr [ebp - 0x98], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff68u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052ba63: je 0x52ba78 */ if (fZ) goto L_0052ba78;
L_0052ba65:; BB(0x0052ba65);
    /* 0052ba65: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 0052ba6b: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52ba70u); f_005eaaf0();
    /* 0052ba70: mov dword ptr [ebp - 0x14c], eax */ W32((u32)(r_ebp+0xfffffeb4u), r_eax);
    /* 0052ba76: jmp 0x52ba82 */ goto L_0052ba82;
L_0052ba78:; BB(0x0052ba78);
    /* 0052ba78: mov dword ptr [ebp - 0x14c], 0 */ W32((u32)(r_ebp+0xfffffeb4u), 0x0u);
L_0052ba82:; BB(0x0052ba82);
    /* 0052ba82: mov eax, dword ptr [ebp - 0x14c] */ r_eax = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0052ba88: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0052ba8e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052ba95: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052ba9b: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0052baa1: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0052baa4: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052baa6: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0052baa8: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052baae: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052bab4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bab5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bab7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bab9: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x52babeu); f_0062fbf0();
    /* 0052babe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052bac1: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bac7: mov eax, dword ptr [edx + eax*4 + 0x138] */ r_eax = R32((u32)(r_edx+r_eax*4+0x138u));
    /* 0052bace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052bacf: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bad5: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0052bad8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52baddu); f_005eae80();
    /* 0052badd: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bae3: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0052bae6: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052baec: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0052baef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052baf1: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052baf4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52baf6u); call_ind(t); }
L_0052baf6:; BB(0x0052baf6);
    /* 0052baf6: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052bafc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052bafe: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052bb04: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 0052bb07: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bb09u); call_ind(t); }
    /* 0052bb09: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052bb0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bb0e: je 0x52bb5c */ if (fZ) goto L_0052bb5c;
L_0052bb10:; BB(0x0052bb10);
    /* 0052bb10: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bb16: cmp dword ptr [edx + 0x18], 0 */ {  u32 a = R32((u32)(r_edx+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bb1a: je 0x52bb37 */ if (fZ) goto L_0052bb37;
L_0052bb1c:; BB(0x0052bb1c);
    /* 0052bb1c: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bb22: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0052bb25: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bb2b: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0052bb2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052bb30: mov ecx, eax */ r_ecx = r_eax;
    /* 0052bb32: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052bb35: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bb37u); call_ind(t); }
L_0052bb37:; BB(0x0052bb37);
    /* 0052bb37: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bb3d: cmp dword ptr [ecx + 0x1c], 0 */ {  u32 a = R32((u32)(r_ecx+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bb41: je 0x52bb5c */ if (fZ) goto L_0052bb5c;
L_0052bb43:; BB(0x0052bb43);
    /* 0052bb43: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bb49: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0052bb4c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bb52: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 0052bb55: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052bb57: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052bb5a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bb5cu); call_ind(t); }
L_0052bb5c:; BB(0x0052bb5c);
    /* 0052bb5c: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bb61: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52bb66u); f_00686d82();
    /* 0052bb66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052bb69: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 0052bb6f: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0052bb76: cmp dword ptr [ebp - 0xa0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bb7d: je 0x52bb92 */ if (fZ) goto L_0052bb92;
L_0052bb7f:; BB(0x0052bb7f);
    /* 0052bb7f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0052bb85: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52bb8au); f_005eaaf0();
    /* 0052bb8a: mov dword ptr [ebp - 0x150], eax */ W32((u32)(r_ebp+0xfffffeb0u), r_eax);
    /* 0052bb90: jmp 0x52bb9c */ goto L_0052bb9c;
L_0052bb92:; BB(0x0052bb92);
    /* 0052bb92: mov dword ptr [ebp - 0x150], 0 */ W32((u32)(r_ebp+0xfffffeb0u), 0x0u);
L_0052bb9c:; BB(0x0052bb9c);
    /* 0052bb9c: mov ecx, dword ptr [ebp - 0x150] */ r_ecx = R32((u32)(r_ebp+0xfffffeb0u));
    /* 0052bba2: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 0052bba8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052bbaf: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bbb5: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0052bbbb: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0052bbbe: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052bbc0: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0052bbc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bbc4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bbc6: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bbcc: mov edx, dword ptr [ecx + 0x124] */ r_edx = R32((u32)(r_ecx+0x124u));
    /* 0052bbd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bbd3: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bbd9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0052bbdc: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52bbe1u); f_005eae80();
    /* 0052bbe1: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bbe7: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0052bbea: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bbf0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0052bbf3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052bbf5: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052bbf8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bbfau); call_ind(t); }
    /* 0052bbfa: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052bc00: call 0x538440 */ r_esp -= 4; W32(r_esp, 0x52bc05u); f_00538440();
    /* 0052bc05: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0052bc08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bc0a: je 0x52bda5 */ if (fZ) goto L_0052bda5;
L_0052bc10:; BB(0x0052bc10);
    /* 0052bc10: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc15: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52bc1au); f_00686d82();
    /* 0052bc1a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052bc1d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 0052bc23: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0052bc2a: cmp dword ptr [ebp - 0xa8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bc31: je 0x52bc46 */ if (fZ) goto L_0052bc46;
L_0052bc33:; BB(0x0052bc33);
    /* 0052bc33: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 0052bc39: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52bc3eu); f_005eaaf0();
    /* 0052bc3e: mov dword ptr [ebp - 0x154], eax */ W32((u32)(r_ebp+0xfffffeacu), r_eax);
    /* 0052bc44: jmp 0x52bc50 */ goto L_0052bc50;
L_0052bc46:; BB(0x0052bc46);
    /* 0052bc46: mov dword ptr [ebp - 0x154], 0 */ W32((u32)(r_ebp+0xfffffeacu), 0x0u);
L_0052bc50:; BB(0x0052bc50);
    /* 0052bc50: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0052bc56: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0052bc5c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052bc63: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bc69: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 0052bc6f: mov dword ptr [eax + 0xac], ecx */ W32((u32)(r_eax+0xacu), r_ecx);
    /* 0052bc75: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc77: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc79: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bc7f: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052bc85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc86: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc88: push 0x15fd4 */ { u32 v = 0x15fd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bc8d: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bc93: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 0052bc99: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52bc9eu); f_005eae80();
    /* 0052bc9e: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bca4: mov eax, dword ptr [edx + 0xac] */ r_eax = R32((u32)(r_edx+0xacu));
    /* 0052bcaa: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bcb0: mov ecx, dword ptr [ecx + 0xac] */ r_ecx = R32((u32)(r_ecx+0xacu));
    /* 0052bcb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0052bcb8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052bcbb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bcbdu); call_ind(t); }
    /* 0052bcbd: push 0x1c4 */ { u32 v = 0x1c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bcc2: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52bcc7u); f_00686d82();
    /* 0052bcc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052bcca: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 0052bcd0: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 0052bcd7: cmp dword ptr [ebp - 0xb0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff50u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bcde: je 0x52bd1f */ if (fZ) goto L_0052bd1f;
L_0052bce0:; BB(0x0052bce0);
    /* 0052bce0: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0052bce2: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bce8: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052bcee: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052bcf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bcf2: push 0x1d3 */ { u32 v = 0x1d3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bcf7: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bcfd: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052bd03: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052bd06: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052bd07: push 0xa7 */ { u32 v = 0xa7u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bd0c: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 0052bd12: call 0x531150 */ r_esp -= 4; W32(r_esp, 0x52bd17u); f_00531150();
    /* 0052bd17: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 0052bd1d: jmp 0x52bd29 */ goto L_0052bd29;
L_0052bd1f:; BB(0x0052bd1f);
    /* 0052bd1f: mov dword ptr [ebp - 0x158], 0 */ W32((u32)(r_ebp+0xfffffea8u), 0x0u);
L_0052bd29:; BB(0x0052bd29);
    /* 0052bd29: mov edx, dword ptr [ebp - 0x158] */ r_edx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0052bd2f: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0052bd35: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052bd3c: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bd42: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0052bd48: mov dword ptr [eax + 0xb0], ecx */ W32((u32)(r_eax+0xb0u), r_ecx);
    /* 0052bd4e: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bd54: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052bd5a: mov byte ptr [eax + 0x184], 0 */ W8((u32)(r_eax+0x184u), 0x0u);
    /* 0052bd61: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052bd67: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0052bd6d: mov dword ptr [ebp - 0x10c], edx */ W32((u32)(r_ebp+0xfffffef4u), r_edx);
    /* 0052bd73: cmp dword ptr [ebp - 0x10c], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffef4u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bd7a: jne 0x52bd8f */ if (!fZ) goto L_0052bd8f;
L_0052bd7c:; BB(0x0052bd7c);
    /* 0052bd7c: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bd82: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 0052bd88: mov byte ptr [ecx + 0x184], 1 */ W8((u32)(r_ecx+0x184u), 0x1u);
L_0052bd8f:; BB(0x0052bd8f);
    /* 0052bd8f: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bd95: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 0052bd9b: call 0x531620 */ r_esp -= 4; W32(r_esp, 0x52bda0u); f_00531620();
    /* 0052bda0: jmp 0x52be30 */ goto L_0052be30;
L_0052bda5:; BB(0x0052bda5);
    /* 0052bda5: mov ecx, dword ptr [0x79338c] */ r_ecx = R32((u32)(0x79338cu));
    /* 0052bdab: call 0x538490 */ r_esp -= 4; W32(r_esp, 0x52bdb0u); f_00538490();
    /* 0052bdb0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0052bdb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bdb5: je 0x52be30 */ if (fZ) goto L_0052be30;
L_0052bdb7:; BB(0x0052bdb7);
    /* 0052bdb7: push 0x1f4 */ { u32 v = 0x1f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bdbc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52bdc1u); f_00686d82();
    /* 0052bdc1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052bdc4: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0052bdca: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 0052bdd1: cmp dword ptr [ebp - 0xb8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bdd8: je 0x52bdf6 */ if (fZ) goto L_0052bdf6;
L_0052bdda:; BB(0x0052bdda);
    /* 0052bdda: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bddc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bdde: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bde3: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 0052bde9: call 0x531f00 */ r_esp -= 4; W32(r_esp, 0x52bdeeu); f_00531f00();
    /* 0052bdee: mov dword ptr [ebp - 0x15c], eax */ W32((u32)(r_ebp+0xfffffea4u), r_eax);
    /* 0052bdf4: jmp 0x52be00 */ goto L_0052be00;
L_0052bdf6:; BB(0x0052bdf6);
    /* 0052bdf6: mov dword ptr [ebp - 0x15c], 0 */ W32((u32)(r_ebp+0xfffffea4u), 0x0u);
L_0052be00:; BB(0x0052be00);
    /* 0052be00: mov ecx, dword ptr [ebp - 0x15c] */ r_ecx = R32((u32)(r_ebp+0xfffffea4u));
    /* 0052be06: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0052be0c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052be13: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052be19: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0052be1f: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 0052be22: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052be28: mov ecx, dword ptr [ecx + 0x5c] */ r_ecx = R32((u32)(r_ecx+0x5cu));
    /* 0052be2b: call 0x532760 */ r_esp -= 4; W32(r_esp, 0x52be30u); f_00532760();
L_0052be30:; BB(0x0052be30);
    /* 0052be30: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052be35: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52be3au); f_00686d82();
    /* 0052be3a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052be3d: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0052be43: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 0052be4a: cmp dword ptr [ebp - 0xc0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff40u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052be51: je 0x52be66 */ if (fZ) goto L_0052be66;
L_0052be53:; BB(0x0052be53);
    /* 0052be53: mov ecx, dword ptr [ebp - 0xc0] */ r_ecx = R32((u32)(r_ebp+0xffffff40u));
    /* 0052be59: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52be5eu); f_005eaaf0();
    /* 0052be5e: mov dword ptr [ebp - 0x160], eax */ W32((u32)(r_ebp+0xfffffea0u), r_eax);
    /* 0052be64: jmp 0x52be70 */ goto L_0052be70;
L_0052be66:; BB(0x0052be66);
    /* 0052be66: mov dword ptr [ebp - 0x160], 0 */ W32((u32)(r_ebp+0xfffffea0u), 0x0u);
L_0052be70:; BB(0x0052be70);
    /* 0052be70: mov edx, dword ptr [ebp - 0x160] */ r_edx = R32((u32)(r_ebp+0xfffffea0u));
    /* 0052be76: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 0052be7c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052be83: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052be89: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0052be8f: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0052be92: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052be94: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0052be96: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052be9c: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052bea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052bea3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bea5: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052beab: mov edx, dword ptr [ecx + 0x144] */ r_edx = R32((u32)(r_ecx+0x144u));
    /* 0052beb1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052beb2: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052beb8: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0052bebb: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52bec0u); f_005eae80();
    /* 0052bec0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bec6: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0052bec9: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052becf: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0052bed2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052bed4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052bed7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bed9u); call_ind(t); }
    /* 0052bed9: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bede: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52bee3u); f_00686d82();
    /* 0052bee3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052bee6: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0052beec: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 0052bef3: cmp dword ptr [ebp - 0xc8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052befa: je 0x52bf0f */ if (fZ) goto L_0052bf0f;
L_0052befc:; BB(0x0052befc);
    /* 0052befc: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 0052bf02: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52bf07u); f_005eaaf0();
    /* 0052bf07: mov dword ptr [ebp - 0x164], eax */ W32((u32)(r_ebp+0xfffffe9cu), r_eax);
    /* 0052bf0d: jmp 0x52bf19 */ goto L_0052bf19;
L_0052bf0f:; BB(0x0052bf0f);
    /* 0052bf0f: mov dword ptr [ebp - 0x164], 0 */ W32((u32)(r_ebp+0xfffffe9cu), 0x0u);
L_0052bf19:; BB(0x0052bf19);
    /* 0052bf19: mov ecx, dword ptr [ebp - 0x164] */ r_ecx = R32((u32)(r_ebp+0xfffffe9cu));
    /* 0052bf1f: mov dword ptr [ebp - 0xc4], ecx */ W32((u32)(r_ebp+0xffffff3cu), r_ecx);
    /* 0052bf25: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052bf2c: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bf32: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 0052bf38: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0052bf3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf3d: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf43: push 0x30efc0 */ { u32 v = 0x30efc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf48: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bf4e: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0052bf51: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52bf56u); f_005eae80();
    /* 0052bf56: mov edx, dword ptr [0x793394] */ r_edx = R32((u32)(0x793394u));
    /* 0052bf5c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052bf5e: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052bf64: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0052bf67: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52bf69u); call_ind(t); }
    /* 0052bf69: mov dword ptr [ebp - 0x168], eax */ W32((u32)(r_ebp+0xfffffe98u), r_eax);
    /* 0052bf6f: cmp dword ptr [ebp - 0x168], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bf76: je 0x52bf8c */ if (fZ) goto L_0052bf8c;
L_0052bf78:; BB(0x0052bf78);
    /* 0052bf78: cmp dword ptr [ebp - 0x168], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bf7f: je 0x52bfae */ if (fZ) goto L_0052bfae;
L_0052bf81:; BB(0x0052bf81);
    /* 0052bf81: cmp dword ptr [ebp - 0x168], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffe98u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052bf88: je 0x52bfce */ if (fZ) goto L_0052bfce;
L_0052bf8a:; BB(0x0052bf8a);
    /* 0052bf8a: jmp 0x52bfec */ goto L_0052bfec;
L_0052bf8c:; BB(0x0052bf8c);
    /* 0052bf8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bf8e: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bf94: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0052bf97: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bf9d: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0052bfa0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052bfa2: mov ecx, eax */ r_ecx = r_eax;
    /* 0052bfa4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052bfaa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bfacu); call_ind(t); }
    /* 0052bfac: jmp 0x52bfec */ goto L_0052bfec;
L_0052bfae:; BB(0x0052bfae);
    /* 0052bfae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bfb0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bfb6: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0052bfb9: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bfbf: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0052bfc2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052bfc4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052bfca: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bfccu); call_ind(t); }
    /* 0052bfcc: jmp 0x52bfec */ goto L_0052bfec;
L_0052bfce:; BB(0x0052bfce);
    /* 0052bfce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052bfd0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bfd6: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0052bfd9: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052bfdf: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0052bfe2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052bfe4: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0052bfea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bfecu); call_ind(t); }
L_0052bfec:; BB(0x0052bfec);
    /* 0052bfec: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052bff2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052bff4: mov ecx, dword ptr [0x793394] */ r_ecx = R32((u32)(0x793394u));
    /* 0052bffa: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0052bffd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52bfffu); call_ind(t); }
    /* 0052bfff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c002: jne 0x52c01f */ if (!fZ) goto L_0052c01f;
L_0052c004:; BB(0x0052c004);
    /* 0052c004: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c00a: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0052c00d: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c013: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0052c016: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c018: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052c01b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c01du); call_ind(t); }
    /* 0052c01d: jmp 0x52c038 */ goto L_0052c038;
L_0052c01f:; BB(0x0052c01f);
    /* 0052c01f: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c025: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0052c028: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c02e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0052c031: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c033: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0052c036: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c038u); call_ind(t); }
L_0052c038:; BB(0x0052c038);
    /* 0052c038: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c03d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52c042u); f_00686d82();
    /* 0052c042: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c045: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0052c04b: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 0052c052: cmp dword ptr [ebp - 0xd0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c059: je 0x52c06e */ if (fZ) goto L_0052c06e;
L_0052c05b:; BB(0x0052c05b);
    /* 0052c05b: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0052c061: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52c066u); f_005f5bf0();
    /* 0052c066: mov dword ptr [ebp - 0x16c], eax */ W32((u32)(r_ebp+0xfffffe94u), r_eax);
    /* 0052c06c: jmp 0x52c078 */ goto L_0052c078;
L_0052c06e:; BB(0x0052c06e);
    /* 0052c06e: mov dword ptr [ebp - 0x16c], 0 */ W32((u32)(r_ebp+0xfffffe94u), 0x0u);
L_0052c078:; BB(0x0052c078);
    /* 0052c078: mov ecx, dword ptr [ebp - 0x16c] */ r_ecx = R32((u32)(r_ebp+0xfffffe94u));
    /* 0052c07e: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 0052c084: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052c08b: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c091: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0052c097: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 0052c09d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c09f: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c0a1: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c0a7: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052c0ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c0ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c0b0: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c0b6: call 0x52d250 */ r_esp -= 4; W32(r_esp, 0x52c0bbu); f_0052d250();
    /* 0052c0bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c0bc: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c0c2: mov ecx, dword ptr [eax + 0xc4] */ r_ecx = R32((u32)(r_eax+0xc4u));
    /* 0052c0c8: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52c0cdu); f_005eae80();
    /* 0052c0cd: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c0d3: mov edx, dword ptr [ecx + 0xc4] */ r_edx = R32((u32)(r_ecx+0xc4u));
    /* 0052c0d9: mov dword ptr [edx + 0x178], 8 */ W32((u32)(r_edx+0x178u), 0x8u);
    /* 0052c0e3: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c0e8: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52c0edu); f_00686d82();
    /* 0052c0ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c0f0: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0052c0f6: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 0052c0fd: cmp dword ptr [ebp - 0xd8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c104: je 0x52c119 */ if (fZ) goto L_0052c119;
L_0052c106:; BB(0x0052c106);
    /* 0052c106: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 0052c10c: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52c111u); f_005f5bf0();
    /* 0052c111: mov dword ptr [ebp - 0x170], eax */ W32((u32)(r_ebp+0xfffffe90u), r_eax);
    /* 0052c117: jmp 0x52c123 */ goto L_0052c123;
L_0052c119:; BB(0x0052c119);
    /* 0052c119: mov dword ptr [ebp - 0x170], 0 */ W32((u32)(r_ebp+0xfffffe90u), 0x0u);
L_0052c123:; BB(0x0052c123);
    /* 0052c123: mov eax, dword ptr [ebp - 0x170] */ r_eax = R32((u32)(r_ebp+0xfffffe90u));
    /* 0052c129: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0052c12f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052c136: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c13c: mov edx, dword ptr [ebp - 0xd4] */ r_edx = R32((u32)(r_ebp+0xffffff2cu));
    /* 0052c142: mov dword ptr [ecx + 0xc8], edx */ W32((u32)(r_ecx+0xc8u), r_edx);
    /* 0052c148: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c14a: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c14c: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c152: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052c158: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c15b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c161: call 0x52d1f0 */ r_esp -= 4; W32(r_esp, 0x52c166u); f_0052d1f0();
    /* 0052c166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c167: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c16d: mov ecx, dword ptr [edx + 0xc8] */ r_ecx = R32((u32)(r_edx+0xc8u));
    /* 0052c173: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52c178u); f_005eae80();
    /* 0052c178: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c17e: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0052c184: mov dword ptr [ecx + 0x178], 6 */ W32((u32)(r_ecx+0x178u), 0x6u);
    /* 0052c18e: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052c195: jmp 0x52c1a0 */ goto L_0052c1a0;
L_0052c197:; BB(0x0052c197);
    /* 0052c197: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c19a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052c19d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0052c1a0:; BB(0x0052c1a0);
    /* 0052c1a0: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052c1a4: jge 0x52c31d */ if ((fS==fO)) goto L_0052c31d;
L_0052c1aa:; BB(0x0052c1aa);
    /* 0052c1aa: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c1af: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52c1b4u); f_00686d82();
    /* 0052c1b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c1b7: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0052c1bd: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 0052c1c4: cmp dword ptr [ebp - 0xe0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c1cb: je 0x52c1e0 */ if (fZ) goto L_0052c1e0;
L_0052c1cd:; BB(0x0052c1cd);
    /* 0052c1cd: mov ecx, dword ptr [ebp - 0xe0] */ r_ecx = R32((u32)(r_ebp+0xffffff20u));
    /* 0052c1d3: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52c1d8u); f_005f5bf0();
    /* 0052c1d8: mov dword ptr [ebp - 0x174], eax */ W32((u32)(r_ebp+0xfffffe8cu), r_eax);
    /* 0052c1de: jmp 0x52c1ea */ goto L_0052c1ea;
L_0052c1e0:; BB(0x0052c1e0);
    /* 0052c1e0: mov dword ptr [ebp - 0x174], 0 */ W32((u32)(r_ebp+0xfffffe8cu), 0x0u);
L_0052c1ea:; BB(0x0052c1ea);
    /* 0052c1ea: mov eax, dword ptr [ebp - 0x174] */ r_eax = R32((u32)(r_ebp+0xfffffe8cu));
    /* 0052c1f0: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0052c1f6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052c1fd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c200: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c206: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 0052c20c: mov dword ptr [edx + ecx*4 + 0xcc], eax */ W32((u32)(r_edx+r_ecx*4+0xccu), r_eax);
    /* 0052c213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c215: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c217: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c21d: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052c223: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c224: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c226: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c22c: call 0x52d250 */ r_esp -= 4; W32(r_esp, 0x52c231u); f_0052d250();
    /* 0052c231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c232: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c235: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c23b: mov ecx, dword ptr [ecx + eax*4 + 0xcc] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xccu));
    /* 0052c242: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52c247u); f_005eae80();
    /* 0052c247: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c24a: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c250: mov ecx, dword ptr [eax + edx*4 + 0xcc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xccu));
    /* 0052c257: mov dword ptr [ecx + 0x178], 8 */ W32((u32)(r_ecx+0x178u), 0x8u);
    /* 0052c261: push 0x184 */ { u32 v = 0x184u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c266: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52c26bu); f_00686d82();
    /* 0052c26b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c26e: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 0052c274: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 0052c27b: cmp dword ptr [ebp - 0xe8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c282: je 0x52c297 */ if (fZ) goto L_0052c297;
L_0052c284:; BB(0x0052c284);
    /* 0052c284: mov ecx, dword ptr [ebp - 0xe8] */ r_ecx = R32((u32)(r_ebp+0xffffff18u));
    /* 0052c28a: call 0x5f5bf0 */ r_esp -= 4; W32(r_esp, 0x52c28fu); f_005f5bf0();
    /* 0052c28f: mov dword ptr [ebp - 0x178], eax */ W32((u32)(r_ebp+0xfffffe88u), r_eax);
    /* 0052c295: jmp 0x52c2a1 */ goto L_0052c2a1;
L_0052c297:; BB(0x0052c297);
    /* 0052c297: mov dword ptr [ebp - 0x178], 0 */ W32((u32)(r_ebp+0xfffffe88u), 0x0u);
L_0052c2a1:; BB(0x0052c2a1);
    /* 0052c2a1: mov edx, dword ptr [ebp - 0x178] */ r_edx = R32((u32)(r_ebp+0xfffffe88u));
    /* 0052c2a7: mov dword ptr [ebp - 0xe4], edx */ W32((u32)(r_ebp+0xffffff1cu), r_edx);
    /* 0052c2ad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052c2b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c2b7: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c2bd: mov edx, dword ptr [ebp - 0xe4] */ r_edx = R32((u32)(r_ebp+0xffffff1cu));
    /* 0052c2c3: mov dword ptr [ecx + eax*4 + 0xe0], edx */ W32((u32)(r_ecx+r_eax*4+0xe0u), r_edx);
    /* 0052c2ca: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c2cc: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c2ce: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c2d4: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052c2da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c2db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c2dd: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c2e3: call 0x52d230 */ r_esp -= 4; W32(r_esp, 0x52c2e8u); f_0052d230();
    /* 0052c2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c2e9: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c2ec: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c2f2: mov ecx, dword ptr [eax + edx*4 + 0xe0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xe0u));
    /* 0052c2f9: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52c2feu); f_005eae80();
    /* 0052c2fe: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c301: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c307: mov eax, dword ptr [edx + ecx*4 + 0xe0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xe0u));
    /* 0052c30e: mov dword ptr [eax + 0x178], 8 */ W32((u32)(r_eax+0x178u), 0x8u);
    /* 0052c318: jmp 0x52c197 */ goto L_0052c197;
L_0052c31d:; BB(0x0052c31d);
    /* 0052c31d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c31f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c321: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c325: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c327: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c32c: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c32e: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c334: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052c33a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c33b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c33d: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c343: mov ecx, dword ptr [eax + 0x154] */ r_ecx = R32((u32)(r_eax+0x154u));
    /* 0052c349: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c34a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c34c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c34e: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052c354: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0052c357: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x52c35cu); f_005f9de0();
    /* 0052c35c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c35e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c360: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c362: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c364: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c366: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c36b: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c36d: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c373: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052c379: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c37a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c37c: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c382: mov eax, dword ptr [edx + 0x158] */ r_eax = R32((u32)(r_edx+0x158u));
    /* 0052c388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c389: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c38b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c38d: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052c393: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052c396: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x52c39bu); f_005f9de0();
    /* 0052c39b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c39d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c39f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3a5: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3aa: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3ac: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c3b2: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052c3b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3bb: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c3c1: mov edx, dword ptr [ecx + 0x15c] */ r_edx = R32((u32)(r_ecx+0x15cu));
    /* 0052c3c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3c8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3cc: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0052c3d1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0052c3d4: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x52c3d9u); f_005f9de0();
    /* 0052c3d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3e1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3e3: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3e8: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3ea: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c3f0: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 0052c3f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c3f9: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c3ff: mov ecx, dword ptr [eax + 0x160] */ r_ecx = R32((u32)(r_eax+0x160u));
    /* 0052c405: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c406: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c408: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c40a: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052c410: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0052c413: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x52c418u); f_005f9de0();
    /* 0052c418: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c41a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c41c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c41e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c420: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c422: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c427: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c429: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c42f: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052c435: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c436: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c438: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c43e: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 0052c444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c445: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c447: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c449: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052c44f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052c452: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x52c457u); f_005f9de0();
    /* 0052c457: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052c45e: jmp 0x52c469 */ goto L_0052c469;
L_0052c460:; BB(0x0052c460);
    /* 0052c460: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c463: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052c466: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0052c469:; BB(0x0052c469);
    /* 0052c469: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052c46d: jge 0x52c49f */ if ((fS==fO)) goto L_0052c49f;
L_0052c46f:; BB(0x0052c46f);
    /* 0052c46f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c473: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052c479: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052c47c: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52c481u); f_005fb300();
    /* 0052c481: mov dword ptr [ebp - 0x17c], eax */ W32((u32)(r_ebp+0xfffffe84u), r_eax);
    /* 0052c487: mov edx, dword ptr [ebp - 0x17c] */ r_edx = R32((u32)(r_ebp+0xfffffe84u));
    /* 0052c48d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0052c48f: mov ecx, dword ptr [ebp - 0x17c] */ r_ecx = R32((u32)(r_ebp+0xfffffe84u));
    /* 0052c495: mov edx, dword ptr [eax + 0xd0] */ r_edx = R32((u32)(r_eax+0xd0u));
    /* 0052c49b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52c49du); call_ind(t); }
    /* 0052c49d: jmp 0x52c460 */ goto L_0052c460;
L_0052c49f:; BB(0x0052c49f);
    /* 0052c49f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4a1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4a5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4a9: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4ae: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4b0: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c4b6: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052c4bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4bf: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c4c5: mov eax, dword ptr [edx + 0x148] */ r_eax = R32((u32)(r_edx+0x148u));
    /* 0052c4cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4cc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4d0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0052c4d6: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 0052c4d9: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x52c4deu); f_005f9de0();
    /* 0052c4de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4e0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4e2: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0052c4e8: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0052c4eb: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x52c4f0u); f_005fb300();
    /* 0052c4f0: mov ecx, eax */ r_ecx = r_eax;
    /* 0052c4f2: call 0x602790 */ r_esp -= 4; W32(r_esp, 0x52c4f7u); f_00602790();
    /* 0052c4f7: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c4fc: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52c501u); f_00686d82();
    /* 0052c501: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c504: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0052c50a: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 0052c511: cmp dword ptr [ebp - 0xf0], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c518: je 0x52c52d */ if (fZ) goto L_0052c52d;
L_0052c51a:; BB(0x0052c51a);
    /* 0052c51a: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 0052c520: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52c525u); f_005eaaf0();
    /* 0052c525: mov dword ptr [ebp - 0x180], eax */ W32((u32)(r_ebp+0xfffffe80u), r_eax);
    /* 0052c52b: jmp 0x52c537 */ goto L_0052c537;
L_0052c52d:; BB(0x0052c52d);
    /* 0052c52d: mov dword ptr [ebp - 0x180], 0 */ W32((u32)(r_ebp+0xfffffe80u), 0x0u);
L_0052c537:; BB(0x0052c537);
    /* 0052c537: mov eax, dword ptr [ebp - 0x180] */ r_eax = R32((u32)(r_ebp+0xfffffe80u));
    /* 0052c53d: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0052c543: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052c54a: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c550: mov edx, dword ptr [ebp - 0xec] */ r_edx = R32((u32)(r_ebp+0xffffff14u));
    /* 0052c556: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0052c559: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c55b: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c560: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c566: mov ecx, dword ptr [eax + 0x100] */ r_ecx = R32((u32)(r_eax+0x100u));
    /* 0052c56c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c56d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c56f: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c575: mov eax, dword ptr [edx + 0x14c] */ r_eax = R32((u32)(r_edx+0x14cu));
    /* 0052c57b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c57c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c582: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0052c585: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52c58au); f_005eae80();
    /* 0052c58a: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c58f: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52c594u); f_00686d82();
    /* 0052c594: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c597: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 0052c59d: mov dword ptr [ebp - 4], 0x19 */ W32((u32)(r_ebp+0xfffffffcu), 0x19u);
    /* 0052c5a4: cmp dword ptr [ebp - 0xf8], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c5ab: je 0x52c5c0 */ if (fZ) goto L_0052c5c0;
L_0052c5ad:; BB(0x0052c5ad);
    /* 0052c5ad: mov ecx, dword ptr [ebp - 0xf8] */ r_ecx = R32((u32)(r_ebp+0xffffff08u));
    /* 0052c5b3: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x52c5b8u); f_005eaaf0();
    /* 0052c5b8: mov dword ptr [ebp - 0x184], eax */ W32((u32)(r_ebp+0xfffffe7cu), r_eax);
    /* 0052c5be: jmp 0x52c5ca */ goto L_0052c5ca;
L_0052c5c0:; BB(0x0052c5c0);
    /* 0052c5c0: mov dword ptr [ebp - 0x184], 0 */ W32((u32)(r_ebp+0xfffffe7cu), 0x0u);
L_0052c5ca:; BB(0x0052c5ca);
    /* 0052c5ca: mov edx, dword ptr [ebp - 0x184] */ r_edx = R32((u32)(r_ebp+0xfffffe7cu));
    /* 0052c5d0: mov dword ptr [ebp - 0xf4], edx */ W32((u32)(r_ebp+0xffffff0cu), r_edx);
    /* 0052c5d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052c5dd: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c5e3: mov ecx, dword ptr [ebp - 0xf4] */ r_ecx = R32((u32)(r_ebp+0xffffff0cu));
    /* 0052c5e9: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0052c5ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052c5ee: push 0x2710 */ { u32 v = 0x2710u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c5f3: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c5f9: mov eax, dword ptr [edx + 0x100] */ r_eax = R32((u32)(r_edx+0x100u));
    /* 0052c5ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c602: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c608: mov edx, dword ptr [ecx + 0x150] */ r_edx = R32((u32)(r_ecx+0x150u));
    /* 0052c60e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c60f: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c615: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0052c618: call 0x5eae80 */ r_esp -= 4; W32(r_esp, 0x52c61du); f_005eae80();
    /* 0052c61d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0052c623: mov edx, dword ptr [ecx + 0x4f14] */ r_edx = R32((u32)(r_ecx+0x4f14u));
    /* 0052c629: mov dword ptr [ebp - 0x110], edx */ W32((u32)(r_ebp+0xfffffef0u), r_edx);
    /* 0052c62f: cmp dword ptr [ebp - 0x110], 0xa */ {  u32 a = R32((u32)(r_ebp+0xfffffef0u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c636: jne 0x52c66c */ if (!fZ) goto L_0052c66c;
L_0052c638:; BB(0x0052c638);
    /* 0052c638: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c63e: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0052c641: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c647: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0052c64a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0052c64c: mov ecx, eax */ r_ecx = r_eax;
    /* 0052c64e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052c651: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c653u); call_ind(t); }
    /* 0052c653: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c659: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0052c65c: mov eax, dword ptr [ebp - 0x114] */ r_eax = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c662: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0052c665: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c667: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052c66a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c66cu); call_ind(t); }
L_0052c66c:; BB(0x0052c66c);
    /* 0052c66c: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0052c673: jmp 0x52c67e */ goto L_0052c67e;
L_0052c675:; BB(0x0052c675);
    /* 0052c675: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c678: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0052c67b: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0052c67e:; BB(0x0052c67e);
    /* 0052c67e: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052c682: jge 0x52c7b2 */ if ((fS==fO)) goto L_0052c7b2;
L_0052c688:; BB(0x0052c688);
    /* 0052c688: push 0x1b0 */ { u32 v = 0x1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052c68d: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x52c692u); f_00686d82();
    /* 0052c692: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052c695: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 0052c69b: mov dword ptr [ebp - 4], 0x1a */ W32((u32)(r_ebp+0xfffffffcu), 0x1au);
    /* 0052c6a2: cmp dword ptr [ebp - 0x100], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff00u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052c6a9: je 0x52c6c2 */ if (fZ) goto L_0052c6c2;
L_0052c6ab:; BB(0x0052c6ab);
    /* 0052c6ab: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c6ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0052c6af: mov ecx, dword ptr [ebp - 0x100] */ r_ecx = R32((u32)(r_ebp+0xffffff00u));
    /* 0052c6b5: call 0x52ea10 */ r_esp -= 4; W32(r_esp, 0x52c6bau); f_0052ea10();
    /* 0052c6ba: mov dword ptr [ebp - 0x188], eax */ W32((u32)(r_ebp+0xfffffe78u), r_eax);
    /* 0052c6c0: jmp 0x52c6cc */ goto L_0052c6cc;
L_0052c6c2:; BB(0x0052c6c2);
    /* 0052c6c2: mov dword ptr [ebp - 0x188], 0 */ W32((u32)(r_ebp+0xfffffe78u), 0x0u);
L_0052c6cc:; BB(0x0052c6cc);
    /* 0052c6cc: mov eax, dword ptr [ebp - 0x188] */ r_eax = R32((u32)(r_ebp+0xfffffe78u));
    /* 0052c6d2: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 0052c6d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052c6df: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c6e2: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c6e8: mov eax, dword ptr [ebp - 0xfc] */ r_eax = R32((u32)(r_ebp+0xffffff04u));
    /* 0052c6ee: mov dword ptr [edx + ecx*4 + 0xf4], eax */ W32((u32)(r_edx+r_ecx*4+0xf4u), r_eax);
    /* 0052c6f5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c6f8: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c6fe: mov eax, dword ptr [edx + ecx*4 + 0xf4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xf4u));
    /* 0052c705: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c708: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c70e: mov ecx, dword ptr [edx + ecx*4 + 0xf4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xf4u));
    /* 0052c715: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0052c717: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0052c71a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x52c71cu); call_ind(t); }
    /* 0052c71c: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c722: call 0x52d160 */ r_esp -= 4; W32(r_esp, 0x52c727u); f_0052d160();
    /* 0052c727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c728: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c72b: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c731: mov ecx, dword ptr [ecx + eax*4 + 0xf4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xf4u));
    /* 0052c738: call 0x52edc0 */ r_esp -= 4; W32(r_esp, 0x52c73du); f_0052edc0();
    /* 0052c73d: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c743: call 0x52d210 */ r_esp -= 4; W32(r_esp, 0x52c748u); f_0052d210();
    /* 0052c748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c749: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c74f: call 0x52d1d0 */ r_esp -= 4; W32(r_esp, 0x52c754u); f_0052d1d0();
    /* 0052c754: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c75a: add eax, dword ptr [edx + 0x100] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x100u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052c760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c761: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c765: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c76b: call 0x52d1a0 */ r_esp -= 4; W32(r_esp, 0x52c770u); f_0052d1a0();
    /* 0052c770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052c771: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c774: mov edx, dword ptr [ebp - 0x114] */ r_edx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c77a: mov ecx, dword ptr [edx + ecx*4 + 0xf4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0xf4u));
    /* 0052c781: call 0x52ee40 */ r_esp -= 4; W32(r_esp, 0x52c786u); f_0052ee40();
    /* 0052c786: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c789: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c78f: mov edx, dword ptr [ecx + eax*4 + 0xf4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0xf4u));
    /* 0052c796: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0052c799: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c79f: mov ecx, dword ptr [ecx + eax*4 + 0xf4] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0xf4u));
    /* 0052c7a6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0052c7a8: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0052c7ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x52c7adu); call_ind(t); }
    /* 0052c7ad: jmp 0x52c675 */ goto L_0052c675;
L_0052c7b2:; BB(0x0052c7b2);
    /* 0052c7b2: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c7b8: call 0x52ddf0 */ r_esp -= 4; W32(r_esp, 0x52c7bdu); f_0052ddf0();
    /* 0052c7bd: mov ecx, dword ptr [ebp - 0x114] */ r_ecx = R32((u32)(r_ebp+0xfffffeecu));
    /* 0052c7c3: call 0x52cd40 */ r_esp -= 4; W32(r_esp, 0x52c7c8u); f_0052cd40();
    /* 0052c7c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052c7cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052c7d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052c7d3: mov esp, ebp */ r_esp = r_ebp;
    /* 0052c7d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052c7d6: ret  */ FN_RET(0x0052afe0); r_esp += 4; return;
}


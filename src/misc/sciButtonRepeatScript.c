#include "protos.h"

void f_00603300(void) /* sciButtonRepeatScript::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603300);
    /* 00603300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603301: mov ebp, esp */ r_ebp = r_esp;
    /* 00603303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00603304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603307: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603309: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060330c: call 0x5fc0d0 */ r_esp -= 4; W32(r_esp, 0x603311u); f_005fc0d0();
    /* 00603311: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603314: mov dword ptr [eax], 0x6d77e8 */ W32((u32)(r_eax), 0x6d77e8u);
    /* 0060331a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060331d: mov dl, byte ptr [ebp + 8] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00603320: mov byte ptr [ecx + 0x20], dl */ W8((u32)(r_ecx+0x20u), (u8)r_edx);
    /* 00603323: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603326: mov esp, ebp */ r_esp = r_ebp;
    /* 00603328: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00603329: ret 4 */ FN_RET(0x00603300); r_esp += 8; return;
}

void f_00603330(void) /* sciButtonRepeatScript::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00603330);
    /* 00603330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00603331: mov ebp, esp */ r_ebp = r_esp;
    /* 00603333: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00603336: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00603339: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060333c: call 0x5fc360 */ r_esp -= 4; W32(r_esp, 0x603341u); f_005fc360();
    /* 00603341: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00603344: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603348: je 0x603355 */ if (fZ) goto L_00603355;
L_0060334a:; BB(0x0060334a);
    /* 0060334a: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060334e: je 0x603373 */ if (fZ) goto L_00603373;
L_00603350:; BB(0x00603350);
    /* 00603350: jmp 0x6033ec */ goto L_006033ec;
L_00603355:; BB(0x00603355);
    /* 00603355: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603358: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0060335b: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 00603361: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00603362: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00603364: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603367: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00603369: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060336c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060336f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x603371u); call_ind(t); }
    /* 00603371: jmp 0x6033ec */ goto L_006033ec;
L_00603373:; BB(0x00603373);
    /* 00603373: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603376: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 00603379: mov eax, dword ptr [edx + 0x1b0] */ r_eax = R32((u32)(r_edx+0x1b0u));
    /* 0060337f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603380: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603382: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603385: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00603387: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060338a: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0060338d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x60338fu); call_ind(t); }
    /* 0060338f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00603392: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00603395: call 0x6026d0 */ r_esp -= 4; W32(r_esp, 0x60339au); f_006026d0();
    /* 0060339a: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0060339d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060339f: je 0x6033ec */ if (fZ) goto L_006033ec;
L_006033a1:; BB(0x006033a1);
    /* 006033a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006033a4: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006033a7: call 0x5f54a0 */ r_esp -= 4; W32(r_esp, 0x6033acu); f_005f54a0();
    /* 006033ac: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 006033af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006033b1: je 0x6033ec */ if (fZ) goto L_006033ec;
L_006033b3:; BB(0x006033b3);
    /* 006033b3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006033b6: movzx eax, byte ptr [edx + 0x20] */ r_eax = (u32)R8((u32)(r_edx+0x20u));
    /* 006033ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006033bc: je 0x6033d6 */ if (fZ) goto L_006033d6;
L_006033be:; BB(0x006033be);
    /* 006033be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006033c1: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006033c4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006033c7: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006033ca: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006033cc: mov eax, dword ptr [edx + 0xc4] */ r_eax = R32((u32)(r_edx+0xc4u));
    /* 006033d2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6033d4u); call_ind(t); }
    /* 006033d4: jmp 0x6033ec */ goto L_006033ec;
L_006033d6:; BB(0x006033d6);
    /* 006033d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006033d9: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 006033dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006033df: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006033e2: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006033e4: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006033ea: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6033ecu); call_ind(t); }
L_006033ec:; BB(0x006033ec);
    /* 006033ec: mov esp, ebp */ r_esp = r_ebp;
    /* 006033ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006033ef: ret  */ FN_RET(0x00603330); r_esp += 4; return;
}


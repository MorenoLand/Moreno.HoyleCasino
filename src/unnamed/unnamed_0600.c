#include "protos.h"

void f_00600010(void) /* sub_600010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600010);
    /* 00600010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600011: mov ebp, esp */ r_ebp = r_esp;
    /* 00600013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600017: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060001a: mov dword ptr [eax + 0x1e0], 0 */ W32((u32)(r_eax+0x1e0u), 0x0u);
    /* 00600024: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600027: mov dword ptr [ecx + 0x1e4], 1 */ W32((u32)(r_ecx+0x1e4u), 0x1u);
    /* 00600031: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600034: mov dword ptr [edx + 0x1e8], 2 */ W32((u32)(r_edx+0x1e8u), 0x2u);
    /* 0060003e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600041: mov dword ptr [eax + 0x1ec], 3 */ W32((u32)(r_eax+0x1ecu), 0x3u);
    /* 0060004b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060004e: mov dword ptr [ecx + 0x1f0], 4 */ W32((u32)(r_ecx+0x1f0u), 0x4u);
    /* 00600058: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060005b: mov dword ptr [edx + 0x1f4], 5 */ W32((u32)(r_edx+0x1f4u), 0x5u);
    /* 00600065: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600068: mov dword ptr [eax + 0x1f8], 6 */ W32((u32)(r_eax+0x1f8u), 0x6u);
    /* 00600072: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600075: mov dword ptr [ecx + 0x1fc], 7 */ W32((u32)(r_ecx+0x1fcu), 0x7u);
    /* 0060007f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600082: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00600084: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600087: mov edx, dword ptr [eax + 0xec] */ r_edx = R32((u32)(r_eax+0xecu));
    /* 0060008d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x60008fu); call_ind(t); }
    /* 0060008f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600091: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600092: ret  */ FN_RET(0x00600010); r_esp += 4; return;
}

void f_00600230(void) /* sub_600230 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600230);
    /* 00600230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600231: mov ebp, esp */ r_ebp = r_esp;
    /* 00600233: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600234: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600237: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060023a: mov al, byte ptr [eax + 0x1dc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0x1dcu))) & 0xffu);
    /* 00600240: mov esp, ebp */ r_esp = r_ebp;
    /* 00600242: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600243: ret  */ FN_RET(0x00600230); r_esp += 4; return;
}

void f_00600300(void) /* sub_600300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600300);
    /* 00600300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600301: mov ebp, esp */ r_ebp = r_esp;
    /* 00600303: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600304: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600307: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060030a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0060030d: mov dword ptr [eax + 0x200], ecx */ W32((u32)(r_eax+0x200u), r_ecx);
    /* 00600313: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00600316: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00600319: mov dword ptr [edx + 0x204], eax */ W32((u32)(r_edx+0x204u), r_eax);
    /* 0060031f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600321: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600322: ret 8 */ FN_RET(0x00600300); r_esp += 12; return;
}

void f_00600520(void) /* sub_600520 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00600520);
    /* 00600520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600521: mov ebp, esp */ r_ebp = r_esp;
    /* 00600523: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600524: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00600527: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0060052a: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0060052d: mov byte ptr [eax + 0x19], cl */ W8((u32)(r_eax+0x19u), (u8)r_ecx);
    /* 00600530: mov esp, ebp */ r_esp = r_ebp;
    /* 00600532: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600533: ret 4 */ FN_RET(0x00600520); r_esp += 8; return;
}


#include "protos.h"

void f_00545010(void) /* sub_545010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545010);
    /* 00545010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545011: mov ebp, esp */ r_ebp = r_esp;
    /* 00545013: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545014: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545017: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054501a: call 0x544390 */ r_esp -= 4; W32(r_esp, 0x54501fu); f_00544390();
    /* 0054501f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545022: call 0x545b90 */ r_esp -= 4; W32(r_esp, 0x545027u); f_00545b90();
    /* 00545027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545029: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054502c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0054502f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545032: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00545035: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00545037: mov ecx, eax */ r_ecx = r_eax;
    /* 00545039: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0054503f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545041u); call_ind(t); }
    /* 00545041: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545043: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545046: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00545049: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x54504eu); f_005f5d50();
    /* 0054504e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545050: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545053: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x545058u); f_00544b30();
    /* 00545058: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054505a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054505d: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x545062u); f_00544b30();
    /* 00545062: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00545064: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545067: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x54506cu); f_005448f0();
    /* 0054506c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054506f: call 0x544780 */ r_esp -= 4; W32(r_esp, 0x545074u); f_00544780();
    /* 00545074: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545077: call 0x544df0 */ r_esp -= 4; W32(r_esp, 0x54507cu); f_00544df0();
    /* 0054507c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054507f: call 0x5453b0 */ r_esp -= 4; W32(r_esp, 0x545084u); f_005453b0();
    /* 00545084: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00545086: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054508b: call 0x5454f0 */ r_esp -= 4; W32(r_esp, 0x545090u); f_005454f0();
    /* 00545090: mov esp, ebp */ r_esp = r_ebp;
    /* 00545092: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545093: ret  */ FN_RET(0x00545010); r_esp += 4; return;
}

void f_005450a0(void) /* sub_5450A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005450a0);
    /* 005450a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005450a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005450a3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005450a6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005450a9: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005450af: call 0x54ac20 */ r_esp -= 4; W32(r_esp, 0x5450b4u); f_0054ac20();
    /* 005450b4: mov byte ptr [ebp - 1], 0 */ W8((u32)(r_ebp+0xffffffffu), 0x0u);
    /* 005450b8: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 005450bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005450bc: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005450c2: call 0x548d90 */ r_esp -= 4; W32(r_esp, 0x5450c7u); f_00548d90();
    /* 005450c7: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005450ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005450cc: je 0x545103 */ if (fZ) goto L_00545103;
L_005450ce:; BB(0x005450ce);
    /* 005450ce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005450d0: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005450d3: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5450d8u); f_005448f0();
    /* 005450d8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005450da: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005450dd: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5450e2u); f_005448f0();
    /* 005450e2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005450e4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005450e7: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5450ecu); f_005448f0();
    /* 005450ec: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005450ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005450f1: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5450f6u); f_005448f0();
    /* 005450f6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005450f9: call 0x544800 */ r_esp -= 4; W32(r_esp, 0x5450feu); f_00544800();
    /* 005450fe: jmp 0x5451bd */ goto L_005451bd;
L_00545103:; BB(0x00545103);
    /* 00545103: movzx edx, byte ptr [ebp - 1] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00545107: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545109: je 0x54511d */ if (fZ) goto L_0054511d;
L_0054510b:; BB(0x0054510b);
    /* 0054510b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054510d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545113: call 0x548d20 */ r_esp -= 4; W32(r_esp, 0x545118u); f_00548d20();
    /* 00545118: jmp 0x5451bd */ goto L_005451bd;
L_0054511d:; BB(0x0054511d);
    /* 0054511d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545123: call 0x549640 */ r_esp -= 4; W32(r_esp, 0x545128u); f_00549640();
    /* 00545128: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0054512b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054512d: je 0x54513b */ if (fZ) goto L_0054513b;
L_0054512f:; BB(0x0054512f);
    /* 0054512f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00545131: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545134: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x545139u); f_00544860();
    /* 00545139: jmp 0x545145 */ goto L_00545145;
L_0054513b:; BB(0x0054513b);
    /* 0054513b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0054513d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545140: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545145u); f_005448f0();
L_00545145:; BB(0x00545145);
    /* 00545145: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054514b: call 0x549720 */ r_esp -= 4; W32(r_esp, 0x545150u); f_00549720();
    /* 00545150: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00545153: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545155: je 0x545163 */ if (fZ) goto L_00545163;
L_00545157:; BB(0x00545157);
    /* 00545157: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00545159: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054515c: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x545161u); f_00544860();
    /* 00545161: jmp 0x54516d */ goto L_0054516d;
L_00545163:; BB(0x00545163);
    /* 00545163: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00545165: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545168: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x54516du); f_005448f0();
L_0054516d:; BB(0x0054516d);
    /* 0054516d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545173: call 0x549770 */ r_esp -= 4; W32(r_esp, 0x545178u); f_00549770();
    /* 00545178: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0054517b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054517d: je 0x54518b */ if (fZ) goto L_0054518b;
L_0054517f:; BB(0x0054517f);
    /* 0054517f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00545181: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545184: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x545189u); f_00544860();
    /* 00545189: jmp 0x545195 */ goto L_00545195;
L_0054518b:; BB(0x0054518b);
    /* 0054518b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054518d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545190: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545195u); f_005448f0();
L_00545195:; BB(0x00545195);
    /* 00545195: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054519b: call 0x549a50 */ r_esp -= 4; W32(r_esp, 0x5451a0u); f_00549a50();
    /* 005451a0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005451a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005451a5: je 0x5451b3 */ if (fZ) goto L_005451b3;
L_005451a7:; BB(0x005451a7);
    /* 005451a7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005451a9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005451ac: call 0x544860 */ r_esp -= 4; W32(r_esp, 0x5451b1u); f_00544860();
    /* 005451b1: jmp 0x5451bd */ goto L_005451bd;
L_005451b3:; BB(0x005451b3);
    /* 005451b3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005451b5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005451b8: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5451bdu); f_005448f0();
L_005451bd:; BB(0x005451bd);
    /* 005451bd: mov esp, ebp */ r_esp = r_ebp;
    /* 005451bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005451c0: ret  */ FN_RET(0x005450a0); r_esp += 4; return;
}

void f_005451d0(void) /* sub_5451D0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005451d0);
    /* 005451d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005451d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005451d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005451d4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 005451d7: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 005451dc: movzx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)R8((u32)(r_eax+0x1cu));
    /* 005451e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005451e2: jne 0x5451ef */ if (!fZ) goto L_005451ef;
L_005451e4:; BB(0x005451e4);
    /* 005451e4: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 005451ea: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x5451efu); f_0057ae30();
L_005451ef:; BB(0x005451ef);
    /* 005451ef: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005451f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005451f4: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x5451f9u); f_005448f0();
    /* 005451f9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005451fb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005451fe: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545203u); f_005448f0();
    /* 00545203: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00545205: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545208: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x54520du); f_005448f0();
    /* 0054520d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054520f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545212: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545217u); f_005448f0();
    /* 00545217: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545219: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054521c: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545221u); f_005448f0();
    /* 00545221: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545223: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545226: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x54522bu); f_005448f0();
    /* 0054522b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054522e: call 0x544830 */ r_esp -= 4; W32(r_esp, 0x545233u); f_00544830();
    /* 00545233: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545236: call 0x545a00 */ r_esp -= 4; W32(r_esp, 0x54523bu); f_00545a00();
    /* 0054523b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054523d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054523f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545242: call 0x5454f0 */ r_esp -= 4; W32(r_esp, 0x545247u); f_005454f0();
    /* 00545247: mov esp, ebp */ r_esp = r_ebp;
    /* 00545249: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054524a: ret  */ FN_RET(0x005451d0); r_esp += 4; return;
}

void f_0054524f(void)
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0054524f);
    /* 0054524f: int3  */ UNSUP(0x0054524f, "int3");
}

void f_00545250(void) /* sub_545250 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545250);
    /* 00545250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545251: mov ebp, esp */ r_ebp = r_esp;
    /* 00545253: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545254: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545257: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00545259: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054525c: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545261u); f_005448f0();
    /* 00545261: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00545263: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545266: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x54526bu); f_005448f0();
    /* 0054526b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054526d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545270: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545275u); f_005448f0();
    /* 00545275: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00545277: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054527a: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x54527fu); f_005448f0();
    /* 0054527f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545281: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545284: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545289u); f_005448f0();
    /* 00545289: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054528b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054528e: call 0x5448f0 */ r_esp -= 4; W32(r_esp, 0x545293u); f_005448f0();
    /* 00545293: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545296: call 0x544830 */ r_esp -= 4; W32(r_esp, 0x54529bu); f_00544830();
    /* 0054529b: mov esp, ebp */ r_esp = r_ebp;
    /* 0054529d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054529e: ret  */ FN_RET(0x00545250); r_esp += 4; return;
}

void f_005452a0(void) /* sub_5452A0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005452a0);
    /* 005452a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005452a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005452a3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005452a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 005452a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005452ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005452ae: call 0x544760 */ r_esp -= 4; W32(r_esp, 0x5452b3u); f_00544760();
    /* 005452b3: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 005452b6: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 005452ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005452bc: jne 0x5452ea */ if (!fZ) goto L_005452ea;
L_005452be:; BB(0x005452be);
    /* 005452be: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005452c4: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005452c7: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 005452ca: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005452cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005452ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005452d1: mov ecx, dword ptr [ecx + 0xb4] */ r_ecx = R32((u32)(r_ecx+0xb4u));
    /* 005452d7: call 0x546580 */ r_esp -= 4; W32(r_esp, 0x5452dcu); f_00546580();
    /* 005452dc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005452df: mov ecx, dword ptr [edx + 0xb4] */ r_ecx = R32((u32)(r_edx+0xb4u));
    /* 005452e5: call 0x546360 */ r_esp -= 4; W32(r_esp, 0x5452eau); f_00546360();
L_005452ea:; BB(0x005452ea);
    /* 005452ea: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 005452f0: call 0x54a890 */ r_esp -= 4; W32(r_esp, 0x5452f5u); f_0054a890();
    /* 005452f5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005452f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005452fa: je 0x545308 */ if (fZ) goto L_00545308;
L_005452fc:; BB(0x005452fc);
    /* 005452fc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005452fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545301: call 0x544ac0 */ r_esp -= 4; W32(r_esp, 0x545306u); f_00544ac0();
    /* 00545306: jmp 0x545312 */ goto L_00545312;
L_00545308:; BB(0x00545308);
    /* 00545308: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054530a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054530d: call 0x544b30 */ r_esp -= 4; W32(r_esp, 0x545312u); f_00544b30();
L_00545312:; BB(0x00545312);
    /* 00545312: mov esp, ebp */ r_esp = r_ebp;
    /* 00545314: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545315: ret  */ FN_RET(0x005452a0); r_esp += 4; return;
}

void f_00545320(void) /* sub_545320 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545320);
    /* 00545320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545321: mov ebp, esp */ r_ebp = r_esp;
    /* 00545323: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545324: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545327: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054532a: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00545330: call 0x546520 */ r_esp -= 4; W32(r_esp, 0x545335u); f_00546520();
    /* 00545335: mov esp, ebp */ r_esp = r_ebp;
    /* 00545337: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545338: ret  */ FN_RET(0x00545320); r_esp += 4; return;
}

void f_00545340(void) /* sub_545340 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545340);
    /* 00545340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545341: mov ebp, esp */ r_ebp = r_esp;
    /* 00545343: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545346: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00545349: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054534b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054534e: call 0x544760 */ r_esp -= 4; W32(r_esp, 0x545353u); f_00544760();
    /* 00545353: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00545356: movzx eax, byte ptr [ebp - 1] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 0054535a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054535c: jne 0x54538a */ if (!fZ) goto L_0054538a;
L_0054535e:; BB(0x0054535e);
    /* 0054535e: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545364: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00545367: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0054536a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054536d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054536e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545371: mov ecx, dword ptr [ecx + 0xb0] */ r_ecx = R32((u32)(r_ecx+0xb0u));
    /* 00545377: call 0x546580 */ r_esp -= 4; W32(r_esp, 0x54537cu); f_00546580();
    /* 0054537c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054537f: mov ecx, dword ptr [edx + 0xb0] */ r_ecx = R32((u32)(r_edx+0xb0u));
    /* 00545385: call 0x546360 */ r_esp -= 4; W32(r_esp, 0x54538au); f_00546360();
L_0054538a:; BB(0x0054538a);
    /* 0054538a: mov esp, ebp */ r_esp = r_ebp;
    /* 0054538c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054538d: ret  */ FN_RET(0x00545340); r_esp += 4; return;
}

void f_00545390(void) /* sub_545390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545390);
    /* 00545390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545391: mov ebp, esp */ r_ebp = r_esp;
    /* 00545393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545397: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0054539a: mov ecx, dword ptr [eax + 0xb0] */ r_ecx = R32((u32)(r_eax+0xb0u));
    /* 005453a0: call 0x546520 */ r_esp -= 4; W32(r_esp, 0x5453a5u); f_00546520();
    /* 005453a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005453a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005453a8: ret  */ FN_RET(0x00545390); r_esp += 4; return;
}

void f_005453b0(void) /* sub_5453B0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005453b0);
    /* 005453b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005453b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005453b3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005453b6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005453b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005453c0: jmp 0x5453cb */ goto L_005453cb;
L_005453c2:; BB(0x005453c2);
    /* 005453c2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005453c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005453c8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_005453cb:; BB(0x005453cb);
    /* 005453cb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005453cf: jge 0x5453ff */ if ((fS==fO)) goto L_005453ff;
L_005453d1:; BB(0x005453d1);
    /* 005453d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005453d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005453d6: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005453d9: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005453dd: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5453e2u); f_005f5d50();
    /* 005453e2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005453e5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005453e8: mov edx, dword ptr [ecx + eax*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005453ec: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 005453ef: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 005453f2: mov ecx, dword ptr [ecx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 005453f6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005453f8: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005453fb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5453fdu); call_ind(t); }
    /* 005453fd: jmp 0x5453c2 */ goto L_005453c2;
L_005453ff:; BB(0x005453ff);
    /* 005453ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00545401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545402: ret  */ FN_RET(0x005453b0); r_esp += 4; return;
}

void f_00545410(void) /* sub_545410 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545410);
    /* 00545410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545411: mov ebp, esp */ r_ebp = r_esp;
    /* 00545413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00545415: push 0x6a501a */ { u32 v = 0x6a501au; r_esp -= 4; W32(r_esp, v); }
    /* 0054541a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00545420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545421: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545424: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00545429: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054542b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054542c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054542f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00545435: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00545438: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 0054543c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054543e: je 0x5454b1 */ if (fZ) goto L_005454b1;
L_00545440:; BB(0x00545440);
    /* 00545440: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545446: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 0054544a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054544c: jne 0x5454b1 */ if (!fZ) goto L_005454b1;
L_0054544e:; BB(0x0054544e);
    /* 0054544e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00545450: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x545455u); f_00686d82();
    /* 00545455: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545458: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054545b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00545462: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545466: je 0x545477 */ if (fZ) goto L_00545477;
L_00545468:; BB(0x00545468);
    /* 00545468: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054546a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054546d: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x545472u); f_00600a70();
    /* 00545472: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00545475: jmp 0x54547e */ goto L_0054547e;
L_00545477:; BB(0x00545477);
    /* 00545477: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_0054547e:; BB(0x0054547e);
    /* 0054547e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545481: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00545484: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054548b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0054548e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054548f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545492: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00545495: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x54549au); f_005f5d50();
    /* 0054549a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054549d: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 005454a0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005454a3: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005454a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005454a8: mov ecx, eax */ r_ecx = r_eax;
    /* 005454aa: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005454ad: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5454afu); call_ind(t); }
    /* 005454af: jmp 0x5454d1 */ goto L_005454d1;
L_005454b1:; BB(0x005454b1);
    /* 005454b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005454b3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005454b6: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005454b9: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5454beu); f_005f5d50();
    /* 005454be: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005454c1: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005454c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005454c7: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 005454ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005454cc: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005454cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5454d1u); call_ind(t); }
L_005454d1:; BB(0x005454d1);
    /* 005454d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005454d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005454db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005454dc: mov esp, ebp */ r_esp = r_ebp;
    /* 005454de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005454df: ret 8 */ FN_RET(0x00545410); r_esp += 12; return;
}

void f_005454f0(void) /* sub_5454F0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x005454f0);
    /* 005454f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005454f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005454f3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005454f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005454f9: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 005454fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005454ff: je 0x545534 */ if (fZ) goto L_00545534;
L_00545501:; BB(0x00545501);
    /* 00545501: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545504: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00545507: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054550a: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0054550d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054550f: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00545512: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545514u); call_ind(t); }
    /* 00545514: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054551a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0054551d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00545520: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545524: jne 0x545532 */ if (!fZ) goto L_00545532;
L_00545526:; BB(0x00545526);
    /* 00545526: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00545528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054552a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054552d: call 0x545410 */ r_esp -= 4; W32(r_esp, 0x545532u); f_00545410();
L_00545532:; BB(0x00545532);
    /* 00545532: jmp 0x545554 */ goto L_00545554;
L_00545534:; BB(0x00545534);
    /* 00545534: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545536: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545539: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0054553c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x545541u); f_005f5d50();
    /* 00545541: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545544: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00545547: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0054554a: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0054554d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054554f: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00545552: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545554u); call_ind(t); }
L_00545554:; BB(0x00545554);
    /* 00545554: mov esp, ebp */ r_esp = r_ebp;
    /* 00545556: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545557: ret 8 */ FN_RET(0x005454f0); r_esp += 12; return;
}

void f_00545560(void) /* sub_545560 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545560);
    /* 00545560: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545561: mov ebp, esp */ r_ebp = r_esp;
    /* 00545563: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00545565: push 0x6a5040 */ { u32 v = 0x6a5040u; r_esp -= 4; W32(r_esp, v); }
    /* 0054556a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00545570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545571: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545574: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00545579: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054557b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054557c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054557f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00545585: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00545588: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 0054558d: movzx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00545591: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545593: je 0x545597 */ if (fZ) goto L_00545597;
L_00545595:; BB(0x00545595);
    /* 00545595: jmp 0x5455e7 */ goto L_005455e7;
L_00545597:; BB(0x00545597);
    /* 00545597: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00545599: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54559eu); f_00686d82();
    /* 0054559e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005455a1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005455a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005455ab: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005455af: je 0x5455c0 */ if (fZ) goto L_005455c0;
L_005455b1:; BB(0x005455b1);
    /* 005455b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005455b3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005455b6: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x5455bbu); f_00600a70();
    /* 005455bb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005455be: jmp 0x5455c7 */ goto L_005455c7;
L_005455c0:; BB(0x005455c0);
    /* 005455c0: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_005455c7:; BB(0x005455c7);
    /* 005455c7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005455ca: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 005455cd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005455d4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 005455d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005455d8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005455db: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005455de: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 005455e2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x5455e7u); f_005f5d50();
L_005455e7:; BB(0x005455e7);
    /* 005455e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005455ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005455f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005455f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005455f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005455f5: ret 8 */ FN_RET(0x00545560); r_esp += 12; return;
}

void f_00545600(void) /* sub_545600 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545600);
    /* 00545600: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545601: mov ebp, esp */ r_ebp = r_esp;
    /* 00545603: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00545605: push 0x6a5066 */ { u32 v = 0x6a5066u; r_esp -= 4; W32(r_esp, v); }
    /* 0054560a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00545610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545611: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545614: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00545619: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054561b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054561c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0054561f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00545625: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00545628: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 0054562d: movzx ecx, byte ptr [eax + 0x1c] */ r_ecx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00545631: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545633: je 0x545637 */ if (fZ) goto L_00545637;
L_00545635:; BB(0x00545635);
    /* 00545635: jmp 0x545683 */ goto L_00545683;
L_00545637:; BB(0x00545637);
    /* 00545637: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00545639: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x54563eu); f_00686d82();
    /* 0054563e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545641: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00545644: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054564b: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054564f: je 0x545660 */ if (fZ) goto L_00545660;
L_00545651:; BB(0x00545651);
    /* 00545651: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545653: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545656: call 0x600a70 */ r_esp -= 4; W32(r_esp, 0x54565bu); f_00600a70();
    /* 0054565b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054565e: jmp 0x545667 */ goto L_00545667;
L_00545660:; BB(0x00545660);
    /* 00545660: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00545667:; BB(0x00545667);
    /* 00545667: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054566a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0054566d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545674: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00545677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545678: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054567b: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 0054567e: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x545683u); f_005f5d50();
L_00545683:; BB(0x00545683);
    /* 00545683: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545686: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054568d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054568e: mov esp, ebp */ r_esp = r_ebp;
    /* 00545690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545691: ret 4 */ FN_RET(0x00545600); r_esp += 8; return;
}

void f_00545920(void) /* sub_545920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545920);
    /* 00545920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545921: mov ebp, esp */ r_ebp = r_esp;
    /* 00545923: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545926: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00545929: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00545930: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00545937: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0054593e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00545945: mov byte ptr [ebp - 9], 0 */ W8((u32)(r_ebp+0xfffffff7u), 0x0u);
    /* 00545949: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054594b: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545951: call 0x548f80 */ r_esp -= 4; W32(r_esp, 0x545956u); f_00548f80();
    /* 00545956: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00545959: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 0054595f: call 0x54a310 */ r_esp -= 4; W32(r_esp, 0x545964u); f_0054a310();
    /* 00545964: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00545967: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0054596a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0054596d: cmp dword ptr [ebp - 0x1c], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545971: je 0x545975 */ if (fZ) goto L_00545975;
L_00545973:; BB(0x00545973);
    /* 00545973: jmp 0x545989 */ goto L_00545989;
L_00545975:; BB(0x00545975);
    /* 00545975: push 0x3116d2 */ { u32 v = 0x3116d2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054597a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054597d: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 00545980: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x545985u); f_005eaf00();
    /* 00545985: mov byte ptr [ebp - 9], 1 */ W8((u32)(r_ebp+0xfffffff7u), 0x1u);
L_00545989:; BB(0x00545989);
    /* 00545989: movzx edx, byte ptr [ebp - 9] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffff7u));
    /* 0054598d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054598f: jne 0x5459a8 */ if (!fZ) goto L_005459a8;
L_00545991:; BB(0x00545991);
    /* 00545991: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545994: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00545997: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054599a: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0054599d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0054599f: mov ecx, eax */ r_ecx = r_eax;
    /* 005459a1: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 005459a4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5459a6u); call_ind(t); }
    /* 005459a6: jmp 0x5459f3 */ goto L_005459f3;
L_005459a8:; BB(0x005459a8);
    /* 005459a8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 005459ab: sub ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005459ae: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 005459b0: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 005459b2: and ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005459b5: add ecx, 0x139 */ {  u32 a = r_ecx; u32 b = 0x139u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005459bb: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 005459be: mov dword ptr [ebp - 4], 0x60 */ W32((u32)(r_ebp+0xfffffffcu), 0x60u);
    /* 005459c5: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 005459c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005459c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 005459cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005459cd: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005459d0: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005459d3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005459d6: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005459d9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005459db: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 005459de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5459e0u); call_ind(t); }
    /* 005459e0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005459e3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 005459e6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005459e9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 005459ec: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005459ee: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 005459f1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5459f3u); call_ind(t); }
L_005459f3:; BB(0x005459f3);
    /* 005459f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005459f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005459f6: ret  */ FN_RET(0x00545920); r_esp += 4; return;
}

void f_00545a00(void) /* sub_545A00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545a00);
    /* 00545a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00545a03: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545a06: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00545a09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a0b: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545a11: call 0x54a740 */ r_esp -= 4; W32(r_esp, 0x545a16u); f_0054a740();
    /* 00545a16: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00545a19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545a1b: je 0x545a34 */ if (fZ) goto L_00545a34;
L_00545a1d:; BB(0x00545a1d);
    /* 00545a1d: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545a23: movzx edx, byte ptr [ecx + 0x24] */ r_edx = (u32)R8((u32)(r_ecx+0x24u));
    /* 00545a27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545a29: je 0x545a34 */ if (fZ) goto L_00545a34;
L_00545a2b:; BB(0x00545a2b);
    /* 00545a2b: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 00545a32: jmp 0x545a3b */ goto L_00545a3b;
L_00545a34:; BB(0x00545a34);
    /* 00545a34: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_00545a3b:; BB(0x00545a3b);
    /* 00545a3b: mov al, byte ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff4u))) & 0xffu);
    /* 00545a3e: mov byte ptr [ebp - 1], al */ W8((u32)(r_ebp+0xffffffffu), (u8)r_eax);
    /* 00545a41: movzx ecx, byte ptr [ebp - 1] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffffu));
    /* 00545a45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545a47: jne 0x545a53 */ if (!fZ) goto L_00545a53;
L_00545a49:; BB(0x00545a49);
    /* 00545a49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a4b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545a4e: call 0x5456a0 */ r_esp -= 4; W32(r_esp, 0x545a53u); f_005456a0();
L_00545a53:; BB(0x00545a53);
    /* 00545a53: mov edx, dword ptr [0x793404] */ r_edx = R32((u32)(0x793404u));
    /* 00545a59: movzx eax, byte ptr [edx + 0x24] */ r_eax = (u32)R8((u32)(r_edx+0x24u));
    /* 00545a5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545a5f: je 0x545a6b */ if (fZ) goto L_00545a6b;
L_00545a61:; BB(0x00545a61);
    /* 00545a61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00545a63: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545a66: call 0x5456a0 */ r_esp -= 4; W32(r_esp, 0x545a6bu); f_005456a0();
L_00545a6b:; BB(0x00545a6b);
    /* 00545a6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545a6e: call 0x545920 */ r_esp -= 4; W32(r_esp, 0x545a73u); f_00545920();
    /* 00545a73: mov esp, ebp */ r_esp = r_ebp;
    /* 00545a75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545a76: ret  */ FN_RET(0x00545a00); r_esp += 4; return;
}

void f_00545a80(void) /* sub_545A80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545a80);
    /* 00545a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00545a83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545a84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545a87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00545a8a: mov eax, dword ptr [eax*4 + 0x73b46c] */ r_eax = R32((u32)(r_eax*4+0x73b46cu));
    /* 00545a91: mov esp, ebp */ r_esp = r_ebp;
    /* 00545a93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545a94: ret 4 */ FN_RET(0x00545a80); r_esp += 8; return;
}

void f_00545aa0(void) /* sub_545AA0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545aa0);
    /* 00545aa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545aa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00545aa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00545aa5: push 0x6a508c */ { u32 v = 0x6a508cu; r_esp -= 4; W32(r_esp, v); }
    /* 00545aaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00545ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545ab1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545ab4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00545ab9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00545abb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545abc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00545abf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00545ac5: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00545ac8: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00545aca: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x545acfu); f_00686d82();
    /* 00545acf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00545ad2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00545ad5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00545adc: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545ae0: je 0x545af1 */ if (fZ) goto L_00545af1;
L_00545ae2:; BB(0x00545ae2);
    /* 00545ae2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545ae4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00545ae7: call 0x546900 */ r_esp -= 4; W32(r_esp, 0x545aecu); f_00546900();
    /* 00545aec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00545aef: jmp 0x545af8 */ goto L_00545af8;
L_00545af1:; BB(0x00545af1);
    /* 00545af1: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00545af8:; BB(0x00545af8);
    /* 00545af8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00545afb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00545afe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00545b05: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00545b08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545b09: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545b0c: mov ecx, dword ptr [edx + 0xbc] */ r_ecx = R32((u32)(r_edx+0xbcu));
    /* 00545b12: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x545b17u); f_005f5d50();
    /* 00545b17: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00545b19: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00545b1b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545b1e: call 0x545410 */ r_esp -= 4; W32(r_esp, 0x545b23u); f_00545410();
    /* 00545b23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545b26: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00545b2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00545b2e: mov esp, ebp */ r_esp = r_ebp;
    /* 00545b30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545b31: ret  */ FN_RET(0x00545aa0); r_esp += 4; return;
}

void f_00545b40(void) /* sub_545B40 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545b40);
    /* 00545b40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545b41: mov ebp, esp */ r_ebp = r_esp;
    /* 00545b43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545b46: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00545b49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00545b4b: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545b4f: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00545b52: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00545b55: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545b58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545b59: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545b5c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00545b5f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545b62: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00545b65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00545b67: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00545b6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545b6fu); call_ind(t); }
    /* 00545b6f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545b72: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00545b75: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545b78: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00545b7b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00545b7d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00545b80: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545b82u); call_ind(t); }
    /* 00545b82: mov esp, ebp */ r_esp = r_ebp;
    /* 00545b84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545b85: ret 4 */ FN_RET(0x00545b40); r_esp += 8; return;
}

void f_00545b90(void) /* sub_545B90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545b90);
    /* 00545b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545b91: mov ebp, esp */ r_ebp = r_esp;
    /* 00545b93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545b94: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545b97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545b9a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00545b9d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545ba0: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00545ba3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00545ba5: mov ecx, eax */ r_ecx = r_eax;
    /* 00545ba7: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00545baa: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545bacu); call_ind(t); }
    /* 00545bac: mov esp, ebp */ r_esp = r_ebp;
    /* 00545bae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545baf: ret  */ FN_RET(0x00545b90); r_esp += 4; return;
}

void f_00545bb0(void) /* sub_545BB0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545bb0);
    /* 00545bb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545bb1: mov ebp, esp */ r_ebp = r_esp;
    /* 00545bb3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545bb6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00545bb9: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545bbc: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00545bc2: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545bc5: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00545bcb: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00545bcd: mov ecx, eax */ r_ecx = r_eax;
    /* 00545bcf: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 00545bd2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545bd4u); call_ind(t); }
    /* 00545bd4: mov ecx, dword ptr [0x793404] */ r_ecx = R32((u32)(0x793404u));
    /* 00545bda: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00545bdd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00545be0: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545be4: je 0x545c81 */ if (fZ) goto L_00545c81;
L_00545bea:; BB(0x00545bea);
    /* 00545bea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545bec: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545bef: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00545bf2: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x545bf7u); f_005f5d50();
    /* 00545bf7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545bf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545bfc: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 00545bff: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545c02: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00545c05: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00545c07: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00545c0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545c0fu); call_ind(t); }
    /* 00545c0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00545c16: jmp 0x545c21 */ goto L_00545c21;
L_00545c18:; BB(0x00545c18);
    /* 00545c18: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545c1b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00545c1e: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_00545c21:; BB(0x00545c21);
    /* 00545c21: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00545c25: jge 0x545c5a */ if ((fS==fO)) goto L_00545c5a;
L_00545c27:; BB(0x00545c27);
    /* 00545c27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545c29: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545c2c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545c2f: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00545c33: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x545c38u); f_005f5d50();
    /* 00545c38: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545c3a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545c3d: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545c40: mov eax, dword ptr [edx + ecx*4 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00545c44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545c47: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545c4a: mov ecx, dword ptr [edx + ecx*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 00545c4e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00545c50: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 00545c56: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x545c58u); call_ind(t); }
    /* 00545c58: jmp 0x545c18 */ goto L_00545c18;
L_00545c5a:; BB(0x00545c5a);
    /* 00545c5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545c5c: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545c5f: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00545c62: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545c65: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00545c68: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00545c6a: mov ecx, eax */ r_ecx = r_eax;
    /* 00545c6c: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 00545c72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545c74u); call_ind(t); }
    /* 00545c74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00545c76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545c79: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00545c7c: call 0x5f5d50 */ r_esp -= 4; W32(r_esp, 0x545c81u); f_005f5d50();
L_00545c81:; BB(0x00545c81);
    /* 00545c81: mov esp, ebp */ r_esp = r_ebp;
    /* 00545c83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545c84: ret  */ FN_RET(0x00545bb0); r_esp += 4; return;
}

void f_00545c90(void) /* sub_545C90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00545c90);
    /* 00545c90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00545c91: mov ebp, esp */ r_ebp = r_esp;
    /* 00545c93: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00545c96: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00545c99: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00545ca0: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00545ca7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00545cae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545cb1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00545cb4: call 0x5f54c0 */ r_esp -= 4; W32(r_esp, 0x545cb9u); f_005f54c0();
    /* 00545cb9: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00545cbc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545cbe: jne 0x545cc5 */ if (!fZ) goto L_00545cc5;
L_00545cc0:; BB(0x00545cc0);
    /* 00545cc0: jmp 0x545db9 */ goto L_00545db9;
L_00545cc5:; BB(0x00545cc5);
    /* 00545cc5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00545cc7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545cca: call 0x544760 */ r_esp -= 4; W32(r_esp, 0x545ccfu); f_00544760();
    /* 00545ccf: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00545cd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545cd4: je 0x545cdb */ if (fZ) goto L_00545cdb;
L_00545cd6:; BB(0x00545cd6);
    /* 00545cd6: jmp 0x545db9 */ goto L_00545db9;
L_00545cdb:; BB(0x00545cdb);
    /* 00545cdb: mov eax, dword ptr [0x793404] */ r_eax = R32((u32)(0x793404u));
    /* 00545ce0: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00545ce3: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00545ce6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00545ce9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00545cea: mov ecx, dword ptr [0x79340c] */ r_ecx = R32((u32)(0x79340cu));
    /* 00545cf0: call 0x542a00 */ r_esp -= 4; W32(r_esp, 0x545cf5u); f_00542a00();
    /* 00545cf5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00545cf8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00545cfb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00545cfe: cmp dword ptr [ebp - 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545d02: je 0x545d12 */ if (fZ) goto L_00545d12;
L_00545d04:; BB(0x00545d04);
    /* 00545d04: cmp dword ptr [ebp - 0x1c], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545d08: je 0x545d2d */ if (fZ) goto L_00545d2d;
L_00545d0a:; BB(0x00545d0a);
    /* 00545d0a: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00545d0e: je 0x545d47 */ if (fZ) goto L_00545d47;
L_00545d10:; BB(0x00545d10);
    /* 00545d10: jmp 0x545d61 */ goto L_00545d61;
L_00545d12:; BB(0x00545d12);
    /* 00545d12: mov dword ptr [ebp - 0x10], 0x3116f6 */ W32((u32)(r_ebp+0xfffffff0u), 0x3116f6u);
    /* 00545d19: mov ecx, dword ptr [0x73b3b8] */ r_ecx = R32((u32)(0x73b3b8u));
    /* 00545d1f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00545d22: mov edx, dword ptr [0x73b3bc] */ r_edx = R32((u32)(0x73b3bcu));
    /* 00545d28: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 00545d2b: jmp 0x545d7a */ goto L_00545d7a;
L_00545d2d:; BB(0x00545d2d);
    /* 00545d2d: mov dword ptr [ebp - 0x10], 0x3116f4 */ W32((u32)(r_ebp+0xfffffff0u), 0x3116f4u);
    /* 00545d34: mov eax, dword ptr [0x73b394] */ r_eax = R32((u32)(0x73b394u));
    /* 00545d39: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00545d3c: mov ecx, dword ptr [0x73b398] */ r_ecx = R32((u32)(0x73b398u));
    /* 00545d42: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00545d45: jmp 0x545d7a */ goto L_00545d7a;
L_00545d47:; BB(0x00545d47);
    /* 00545d47: mov dword ptr [ebp - 0x10], 0x3116f5 */ W32((u32)(r_ebp+0xfffffff0u), 0x3116f5u);
    /* 00545d4e: mov edx, dword ptr [0x73b388] */ r_edx = R32((u32)(0x73b388u));
    /* 00545d54: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00545d57: mov eax, dword ptr [0x73b38c] */ r_eax = R32((u32)(0x73b38cu));
    /* 00545d5c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00545d5f: jmp 0x545d7a */ goto L_00545d7a;
L_00545d61:; BB(0x00545d61);
    /* 00545d61: mov dword ptr [ebp - 0x10], 0x3116f7 */ W32((u32)(r_ebp+0xfffffff0u), 0x3116f7u);
    /* 00545d68: mov ecx, dword ptr [0x73b3a0] */ r_ecx = R32((u32)(0x73b3a0u));
    /* 00545d6e: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00545d71: mov edx, dword ptr [0x73b3a4] */ r_edx = R32((u32)(0x73b3a4u));
    /* 00545d77: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00545d7a:; BB(0x00545d7a);
    /* 00545d7a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00545d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00545d7e: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00545d81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545d82: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545d85: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00545d88: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545d8b: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00545d8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00545d90: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00545d93: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545d95u); call_ind(t); }
    /* 00545d95: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00545d98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00545d99: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545d9c: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 00545d9f: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x545da4u); f_005eaf00();
    /* 00545da4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545da7: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00545daa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00545dad: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 00545db0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00545db2: mov ecx, eax */ r_ecx = r_eax;
    /* 00545db4: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 00545db7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x545db9u); call_ind(t); }
L_00545db9:; BB(0x00545db9);
    /* 00545db9: mov esp, ebp */ r_esp = r_ebp;
    /* 00545dbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00545dbc: ret  */ FN_RET(0x00545c90); r_esp += 4; return;
}


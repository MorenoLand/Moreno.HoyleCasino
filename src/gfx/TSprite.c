#include "protos.h"

void f_00615fe0(void) /* TSprite::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00615fe0);
    /* 00615fe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00615fe1: mov ebp, esp */ r_ebp = r_esp;
    /* 00615fe3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00615fe5: push 0x6ab1d8 */ { u32 v = 0x6ab1d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00615fea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00615ff0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615ff1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00615ff2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00615ff7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00615ff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00615ffa: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00615ffd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00616003: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00616006: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00616008: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061600b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061600c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061600f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616010: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616013: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616014: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616017: call 0x61dc00 */ r_esp -= 4; W32(r_esp, 0x61601cu); f_0061dc00();
    /* 0061601c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616023: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616026: mov dword ptr [eax], 0x6d8940 */ W32((u32)(r_eax), 0x6d8940u);
    /* 0061602c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061602f: call 0x6161a0 */ r_esp -= 4; W32(r_esp, 0x616034u); f_006161a0();
    /* 00616034: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061603b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061603e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616041: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00616048: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00616049: mov esp, ebp */ r_esp = r_ebp;
    /* 0061604b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061604c: ret 0xc */ FN_RET(0x00615fe0); r_esp += 16; return;
}

void f_00616050(void) /* TSprite::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616050);
    /* 00616050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616051: mov ebp, esp */ r_ebp = r_esp;
    /* 00616053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00616055: push 0x6ab1fb */ { u32 v = 0x6ab1fbu; r_esp -= 4; W32(r_esp, v); }
    /* 0061605a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00616060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616061: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616062: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00616067: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061606a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061606d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00616073: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00616076: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00616078: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061607b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061607c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061607f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616080: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616083: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616084: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616087: call 0x61dd90 */ r_esp -= 4; W32(r_esp, 0x61608cu); f_0061dd90();
    /* 0061608c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616093: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616096: mov dword ptr [eax], 0x6d8940 */ W32((u32)(r_eax), 0x6d8940u);
    /* 0061609c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061609f: call 0x6161a0 */ r_esp -= 4; W32(r_esp, 0x6160a4u); f_006161a0();
    /* 006160a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006160ab: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006160ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006160b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006160b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006160b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006160bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006160bc: ret 0xc */ FN_RET(0x00616050); r_esp += 16; return;
}

void f_006160c0(void) /* TSprite::ctor_1 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x006160c0);
    /* 006160c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006160c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006160c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006160c5: push 0x6ab21e */ { u32 v = 0x6ab21eu; r_esp -= 4; W32(r_esp, v); }
    /* 006160ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006160d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006160d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006160d2: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 006160d7: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006160d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006160da: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 006160dd: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 006160e3: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 006160e6: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 006160e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006160ea: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 006160ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006160ee: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006160f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006160f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006160f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006160f6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 006160f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006160fa: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006160fd: call 0x61de20 */ r_esp -= 4; W32(r_esp, 0x616102u); f_0061de20();
    /* 00616102: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616109: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0061610c: mov dword ptr [edx], 0x6d8940 */ W32((u32)(r_edx), 0x6d8940u);
    /* 00616112: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616115: call 0x6161a0 */ r_esp -= 4; W32(r_esp, 0x61611au); f_006161a0();
    /* 0061611a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00616121: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616124: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616127: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061612e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061612f: mov esp, ebp */ r_esp = r_ebp;
    /* 00616131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616132: ret 0x14 */ FN_RET(0x006160c0); r_esp += 24; return;
}

void f_00616140(void) /* TSprite::ctor_2 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616140);
    /* 00616140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616141: mov ebp, esp */ r_ebp = r_esp;
    /* 00616143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00616145: push 0x6ab241 */ { u32 v = 0x6ab241u; r_esp -= 4; W32(r_esp, v); }
    /* 0061614a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00616150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616151: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616152: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00616157: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00616159: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061615a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0061615d: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00616163: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00616166: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616169: mov dword ptr [eax], 0x6d8940 */ W32((u32)(r_eax), 0x6d8940u);
    /* 0061616f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00616176: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616179: call 0x6162e0 */ r_esp -= 4; W32(r_esp, 0x61617eu); f_006162e0();
    /* 0061617e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00616185: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616188: call 0x61e400 */ r_esp -= 4; W32(r_esp, 0x61618du); f_0061e400();
    /* 0061618d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616190: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00616197: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00616198: mov esp, ebp */ r_esp = r_ebp;
    /* 0061619a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061619b: ret  */ FN_RET(0x00616140); r_esp += 4; return;
}

void f_00616510(void) /* tsprite::func_00616510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00616510);
    /* 00616510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00616511: mov ebp, esp */ r_ebp = r_esp;
    /* 00616513: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00616519: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061651a: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
    /* 00616520: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00616526: cmp dword ptr [eax + 0x164], 0 */ {  u32 a = R32((u32)(r_eax+0x164u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061652d: je 0x616ab9 */ if (fZ) goto L_00616ab9;
L_00616533:; BB(0x00616533);
    /* 00616533: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00616536: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616537: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061653a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061653b: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00616541: call 0x616450 */ r_esp -= 4; W32(r_esp, 0x616546u); f_00616450();
    /* 00616546: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00616549: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061654c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061654d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00616550: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616551: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00616557: call 0x616410 */ r_esp -= 4; W32(r_esp, 0x61655cu); f_00616410();
    /* 0061655c: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0061655f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00616566: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0061656d: mov edx, dword ptr [ebp - 0x6c] */ r_edx = R32((u32)(r_ebp+0xffffff94u));
    /* 00616570: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00616573: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00616576: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00616579: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061657c: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x616581u); f_00623910();
    /* 00616581: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00616584: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00616587: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x61658cu); f_006238f0();
    /* 0061658c: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0061658f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00616596: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0061659d: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006165a0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006165a3: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 006165a6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006165a9: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006165b0: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 006165b7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006165be: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 006165c5: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006165c9: jle 0x616677 */ if ((fZ||fS!=fO)) goto L_00616677;
L_006165cf:; BB(0x006165cf);
    /* 006165cf: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006165d2: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006165d5: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 006165d8: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 006165db: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006165de: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006165e1: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 006165e4: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006165e7: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 006165ea: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 006165ed: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 006165f0: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 006165f3: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006165f6: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 006165f9: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 006165fc: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 006165ff: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616603: jg 0x616607 */ if ((!fZ&&fS==fO)) goto L_00616607;
L_00616605:; BB(0x00616605);
    /* 00616605: jmp 0x616627 */ goto L_00616627;
L_00616607:; BB(0x00616607);
    /* 00616607: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061660a: sub edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061660d: imul edx, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616611: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616614: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00616617: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0061661a: sub eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061661d: imul eax, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616621: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616624: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_00616627:; BB(0x00616627);
    /* 00616627: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061662b: jg 0x61662f */ if ((!fZ&&fS==fO)) goto L_0061662f;
L_0061662d:; BB(0x0061662d);
    /* 0061662d: jmp 0x61664f */ goto L_0061664f;
L_0061662f:; BB(0x0061662f);
    /* 0061662f: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00616632: sub ecx, dword ptr [ebp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00616635: imul ecx, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616639: add ecx, dword ptr [ebp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061663c: mov dword ptr [ebp + 0x2c], ecx */ W32((u32)(r_ebp+0x2cu), r_ecx);
    /* 0061663f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00616642: sub edx, dword ptr [ebp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616645: imul edx, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616649: add edx, dword ptr [ebp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061664c: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
L_0061664f:; BB(0x0061664f);
    /* 0061664f: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616653: jg 0x616657 */ if ((!fZ&&fS==fO)) goto L_00616657;
L_00616655:; BB(0x00616655);
    /* 00616655: jmp 0x616677 */ goto L_00616677;
L_00616657:; BB(0x00616657);
    /* 00616657: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0061665a: sub eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061665d: imul eax, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616661: add eax, dword ptr [ebp - 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616664: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00616667: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061666a: sub ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0061666d: imul ecx, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616671: add ecx, dword ptr [ebp - 0x30] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616674: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_00616677:; BB(0x00616677);
    /* 00616677: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 0061667a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061667b: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 0061667e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061667f: lea ecx, [ebp - 0x24] */ r_ecx = (u32)(r_ebp+0xffffffdcu);
    /* 00616682: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616683: lea edx, [ebp + 0x14] */ r_edx = (u32)(r_ebp+0x14u);
    /* 00616686: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616687: call 0x624a70 */ r_esp -= 4; W32(r_esp, 0x61668cu); f_00624a70();
    /* 0061668c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061668f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00616692: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616694: je 0x616ab9 */ if (fZ) goto L_00616ab9;
L_0061669a:; BB(0x0061669a);
    /* 0061669a: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061669e: jle 0x61675e */ if ((fZ||fS!=fO)) goto L_0061675e;
L_006166a4:; BB(0x006166a4);
    /* 006166a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006166a6: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 006166a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006166aa: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 006166ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006166ae: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 006166b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006166b2: call 0x5ec4a0 */ r_esp -= 4; W32(r_esp, 0x6166b7u); f_005ec4a0();
    /* 006166b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006166ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006166bc: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 006166bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006166c0: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 006166c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006166c4: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 006166c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006166c8: call 0x5ec4a0 */ r_esp -= 4; W32(r_esp, 0x6166cdu); f_005ec4a0();
    /* 006166cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006166d0: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 006166d3: sub ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006166d6: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 006166d9: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 006166dc: sub edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006166df: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 006166e2: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 006166e5: imul eax, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006166e9: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006166ec: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006166ef: jle 0x61671b */ if ((fZ||fS!=fO)) goto L_0061671b;
L_006166f1:; BB(0x006166f1);
    /* 006166f1: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 006166f4: imul ecx, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006166f8: add ecx, dword ptr [ebp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006166fb: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006166fe: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00616701: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616703: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00616706: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 00616709: imul eax, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061670d: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616710: sub eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00616713: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00616716: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00616718: mov dword ptr [ebp + 0x30], ecx */ W32((u32)(r_ebp+0x30u), r_ecx);
L_0061671b:; BB(0x0061671b);
    /* 0061671b: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061671e: imul edx, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616722: add edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616725: cmp edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616728: jle 0x61675e */ if ((fZ||fS!=fO)) goto L_0061675e;
L_0061672a:; BB(0x0061672a);
    /* 0061672a: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0061672d: imul eax, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616731: add eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616734: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00616736: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616739: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0061673c: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0061673f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616741: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 00616744: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00616747: imul eax, dword ptr [ebp + 0x38] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x38u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061674b: add eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061674e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00616750: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616753: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 00616756: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00616759: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061675b: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
L_0061675e:; BB(0x0061675e);
    /* 0061675e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00616761: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x616766u); f_00623910();
    /* 00616766: cmp dword ptr [ebp + 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616769: jl 0x616782 */ if ((fS!=fO)) goto L_00616782;
L_0061676b:; BB(0x0061676b);
    /* 0061676b: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00616770: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00616775: push 0x6d8a74 */ { u32 v = 0x6d8a74u; r_esp -= 4; W32(r_esp, v); }
    /* 0061677a: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x61677fu); f_005e9f20();
    /* 0061677f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00616782:; BB(0x00616782);
    /* 00616782: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00616785: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x61678au); f_006238f0();
    /* 0061678a: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061678d: jl 0x6167a6 */ if ((fS!=fO)) goto L_006167a6;
L_0061678f:; BB(0x0061678f);
    /* 0061678f: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00616794: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00616799: push 0x6d8a4c */ { u32 v = 0x6d8a4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061679e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6167a3u); f_005e9f20();
    /* 006167a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006167a6:; BB(0x006167a6);
    /* 006167a6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006167a9: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x6167aeu); f_00623910();
    /* 006167ae: cmp dword ptr [ebp + 0x20], eax */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006167b1: jle 0x6167ca */ if ((fZ||fS!=fO)) goto L_006167ca;
L_006167b3:; BB(0x006167b3);
    /* 006167b3: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 006167b8: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006167bd: push 0x6d8a20 */ { u32 v = 0x6d8a20u; r_esp -= 4; W32(r_esp, v); }
    /* 006167c2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6167c7u); f_005e9f20();
    /* 006167c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006167ca:; BB(0x006167ca);
    /* 006167ca: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006167cd: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x6167d2u); f_006238f0();
    /* 006167d2: cmp dword ptr [ebp + 0x1c], eax */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006167d5: jle 0x6167ee */ if ((fZ||fS!=fO)) goto L_006167ee;
L_006167d7:; BB(0x006167d7);
    /* 006167d7: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 006167dc: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006167e1: push 0x6d89f4 */ { u32 v = 0x6d89f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006167e6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6167ebu); f_005e9f20();
    /* 006167eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006167ee:; BB(0x006167ee);
    /* 006167ee: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 006167f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006167f2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006167f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006167f6: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 006167fc: call 0x616450 */ r_esp -= 4; W32(r_esp, 0x616801u); f_00616450();
    /* 00616801: cmp dword ptr [ebp + 0x28], eax */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616804: jl 0x61681d */ if ((fS!=fO)) goto L_0061681d;
L_00616806:; BB(0x00616806);
    /* 00616806: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0061680b: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00616810: push 0x6d89cc */ { u32 v = 0x6d89ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00616815: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x61681au); f_005e9f20();
    /* 0061681a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061681d:; BB(0x0061681d);
    /* 0061681d: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00616820: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616821: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616824: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616825: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061682b: call 0x616410 */ r_esp -= 4; W32(r_esp, 0x616830u); f_00616410();
    /* 00616830: cmp dword ptr [ebp + 0x24], eax */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616833: jl 0x61684c */ if ((fS!=fO)) goto L_0061684c;
L_00616835:; BB(0x00616835);
    /* 00616835: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061683a: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061683f: push 0x6d89a4 */ { u32 v = 0x6d89a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00616844: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x616849u); f_005e9f20();
    /* 00616849: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061684c:; BB(0x0061684c);
    /* 0061684c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061684f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616850: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616853: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616854: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061685a: call 0x616450 */ r_esp -= 4; W32(r_esp, 0x61685fu); f_00616450();
    /* 0061685f: cmp dword ptr [ebp + 0x30], eax */ {  u32 a = R32((u32)(r_ebp+0x30u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616862: jle 0x61687b */ if ((fZ||fS!=fO)) goto L_0061687b;
L_00616864:; BB(0x00616864);
    /* 00616864: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 00616869: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061686e: push 0x6d8978 */ { u32 v = 0x6d8978u; r_esp -= 4; W32(r_esp, v); }
    /* 00616873: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x616878u); f_005e9f20();
    /* 00616878: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061687b:; BB(0x0061687b);
    /* 0061687b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0061687e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061687f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00616882: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616883: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00616889: call 0x616410 */ r_esp -= 4; W32(r_esp, 0x61688eu); f_00616410();
    /* 0061688e: cmp dword ptr [ebp + 0x2c], eax */ {  u32 a = R32((u32)(r_ebp+0x2cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616891: jle 0x6168aa */ if ((fZ||fS!=fO)) goto L_006168aa;
L_00616893:; BB(0x00616893);
    /* 00616893: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 00616898: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061689d: push 0x6d8950 */ { u32 v = 0x6d8950u; r_esp -= 4; W32(r_esp, v); }
    /* 006168a2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6168a7u); f_005e9f20();
    /* 006168a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006168aa:; BB(0x006168aa);
    /* 006168aa: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006168ae: jle 0x61690e */ if ((fZ||fS!=fO)) goto L_0061690e;
L_006168b0:; BB(0x006168b0);
    /* 006168b0: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 006168b3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006168b6: call 0x6238f0 */ r_esp -= 4; W32(r_esp, 0x6168bbu); f_006238f0();
    /* 006168bb: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006168bd: jle 0x6168df */ if ((fZ||fS!=fO)) goto L_006168df;
L_006168bf:; BB(0x006168bf);
    /* 006168bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006168c1: jne 0x6168da */ if (!fZ) goto L_006168da;
L_006168c3:; BB(0x006168c3);
    /* 006168c3: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 006168c8: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006168cd: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 006168d2: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x6168d7u); f_005e9f20();
    /* 006168d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006168da:; BB(0x006168da);
    /* 006168da: jmp 0x616ab9 */ goto L_00616ab9;
L_006168df:; BB(0x006168df);
    /* 006168df: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 006168e2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006168e5: call 0x623910 */ r_esp -= 4; W32(r_esp, 0x6168eau); f_00623910();
    /* 006168ea: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006168ec: jle 0x61690e */ if ((fZ||fS!=fO)) goto L_0061690e;
L_006168ee:; BB(0x006168ee);
    /* 006168ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 006168f0: jne 0x616909 */ if (!fZ) goto L_00616909;
L_006168f2:; BB(0x006168f2);
    /* 006168f2: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 006168f7: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006168fc: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00616901: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x616906u); f_005e9f20();
    /* 00616906: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00616909:; BB(0x00616909);
    /* 00616909: jmp 0x616ab9 */ goto L_00616ab9;
L_0061690e:; BB(0x0061690e);
    /* 0061690e: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00616911: sub edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616914: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00616917: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061691a: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0061691d: add eax, dword ptr [0x795fac] */ {  u32 a = r_eax; u32 b = R32((u32)(0x795facu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616923: mov dword ptr [0x795fac], eax */ W32((u32)(0x795facu), r_eax);
    /* 00616928: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0061692b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061692c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0061692f: call 0x6238d0 */ r_esp -= 4; W32(r_esp, 0x616934u); f_006238d0();
    /* 00616934: mov esi, eax */ r_esi = r_eax;
    /* 00616936: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00616939: call 0x623930 */ r_esp -= 4; W32(r_esp, 0x61693eu); f_00623930();
    /* 0061693e: imul eax, dword ptr [ebp + 0x14] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x14u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00616942: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00616944: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 00616947: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0061694d: mov eax, dword ptr [edx + 0x164] */ r_eax = R32((u32)(r_edx+0x164u));
    /* 00616953: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00616956: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00616959: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0061695c: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00616960: mov ecx, dword ptr [eax + ecx + 0xc] */ r_ecx = R32((u32)(r_eax+r_ecx+0xcu));
    /* 00616964: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00616967: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0061696a: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061696d: lea ecx, [eax + edx*4] */ r_ecx = (u32)(r_eax+r_edx*4);
    /* 00616970: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00616973: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00616976: sub edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616979: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0061697c: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0061697f: sub eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00616982: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00616985: movzx ecx, byte ptr [0x795fb7] */ r_ecx = (u32)R8((u32)(0x795fb7u));
    /* 0061698c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061698e: jne 0x616998 */ if (!fZ) goto L_00616998;
L_00616990:; BB(0x00616990);
    /* 00616990: movzx edx, byte ptr [ebp + 0x3c] */ r_edx = (u32)R8((u32)(r_ebp+0x3cu));
    /* 00616994: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616996: je 0x6169ad */ if (fZ) goto L_006169ad;
L_00616998:; BB(0x00616998);
    /* 00616998: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 0061699b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061699c: call 0x618e00 */ r_esp -= 4; W32(r_esp, 0x6169a1u); f_00618e00();
    /* 006169a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006169a4: mov dword ptr [ebp - 0x38], 0x61b450 */ W32((u32)(r_ebp+0xffffffc8u), 0x61b450u);
    /* 006169ab: jmp 0x6169d8 */ goto L_006169d8;
L_006169ad:; BB(0x006169ad);
    /* 006169ad: cmp dword ptr [ebp + 0x34], 0xff */ {  u32 a = R32((u32)(r_ebp+0x34u)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006169b4: jne 0x6169bc */ if (!fZ) goto L_006169bc;
L_006169b6:; BB(0x006169b6);
    /* 006169b6: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006169ba: je 0x6169d1 */ if (fZ) goto L_006169d1;
L_006169bc:; BB(0x006169bc);
    /* 006169bc: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 006169bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006169c0: call 0x618e00 */ r_esp -= 4; W32(r_esp, 0x6169c5u); f_00618e00();
    /* 006169c5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006169c8: mov dword ptr [ebp - 0x38], 0x61a4a0 */ W32((u32)(r_ebp+0xffffffc8u), 0x61a4a0u);
    /* 006169cf: jmp 0x6169d8 */ goto L_006169d8;
L_006169d1:; BB(0x006169d1);
    /* 006169d1: mov dword ptr [ebp - 0x38], 0x618ed0 */ W32((u32)(r_ebp+0xffffffc8u), 0x618ed0u);
L_006169d8:; BB(0x006169d8);
    /* 006169d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 006169db: call 0x6238b0 */ r_esp -= 4; W32(r_esp, 0x6169e0u); f_006238b0();
    /* 006169e0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006169e3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006169e6: sub edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006169e9: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006169ec: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006169ef: sub eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006169f2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 006169f5: cmp dword ptr [ebp + 0x38], 1 */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006169f9: jle 0x616a69 */ if ((fZ||fS!=fO)) goto L_00616a69;
L_006169fb:; BB(0x006169fb);
    /* 006169fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006169fe: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616a01: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00616a04: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00616a07: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616a09: je 0x616a67 */ if (fZ) goto L_00616a67;
L_00616a0b:; BB(0x00616a0b);
    /* 00616a0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616a0e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616a11: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00616a14: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00616a1b: jmp 0x616a26 */ goto L_00616a26;
L_00616a1d:; BB(0x00616a1d);
    /* 00616a1d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00616a20: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00616a23: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
L_00616a26:; BB(0x00616a26);
    /* 00616a26: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00616a29: cmp edx, dword ptr [ebp + 0x38] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00616a2c: jge 0x616a65 */ if ((fS==fO)) goto L_00616a65;
L_00616a2e:; BB(0x00616a2e);
    /* 00616a2e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616a31: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616a34: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00616a37: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00616a3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a3b: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00616a3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a3f: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00616a45: add eax, 0x16c */ {  u32 a = r_eax; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616a4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616a4b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616a4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a4f: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00616a52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a53: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616a56: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00616a58: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a59: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616a5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a5d: call dword ptr [ebp - 0x38] */ { u32 t = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, 0x616a60u); call_ind(t); }
    /* 00616a60: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616a63: jmp 0x616a1d */ goto L_00616a1d;
L_00616a65:; BB(0x00616a65);
    /* 00616a65: jmp 0x6169fb */ goto L_006169fb;
L_00616a67:; BB(0x00616a67);
    /* 00616a67: jmp 0x616ab9 */ goto L_00616ab9;
L_00616a69:; BB(0x00616a69);
    /* 00616a69: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616a6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00616a6f: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00616a72: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00616a75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00616a77: je 0x616ab9 */ if (fZ) goto L_00616ab9;
L_00616a79:; BB(0x00616a79);
    /* 00616a79: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616a7c: add edx, dword ptr [ebp - 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00616a7f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00616a82: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616a85: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616a88: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00616a8b: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00616a8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a8f: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00616a92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616a93: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00616a99: add eax, 0x16c */ {  u32 a = r_eax; u32 b = 0x16cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00616a9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00616a9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00616aa2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616aa3: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00616aa6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616aa7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00616aaa: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00616aac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00616aad: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00616ab0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00616ab1: call dword ptr [ebp - 0x38] */ { u32 t = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, 0x616ab4u); call_ind(t); }
    /* 00616ab4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00616ab7: jmp 0x616a69 */ goto L_00616a69;
L_00616ab9:; BB(0x00616ab9);
    /* 00616ab9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00616aba: mov esp, ebp */ r_esp = r_ebp;
    /* 00616abc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00616abd: ret 0x3c */ FN_RET(0x00616510); r_esp += 64; return;
}

void f_00617100(void) /* tsprite::func_00617100 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00617100);
    /* 00617100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00617101: mov ebp, esp */ r_ebp = r_esp;
    /* 00617103: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00617106: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0061710d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617111: call 0x5e9fd0 */ r_esp -= 4; W32(r_esp, 0x617116u); f_005e9fd0();
    /* 00617116: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617119: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0061711c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0061711f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617120: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x617125u); f_00686d82();
    /* 00617125: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617128: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0061712b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061712e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00617131: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00617134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617135: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00617138: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617139: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061713b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0061713e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061713f: call dword ptr [0x6b225c] */ { u32 t = R32((u32)(0x6b225cu)); r_esp -= 4; W32(r_esp, 0x617145u); call_ind(t); }
    /* 00617145: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617148: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061714b: je 0x617164 */ if (fZ) goto L_00617164;
L_0061714d:; BB(0x0061714d);
    /* 0061714d: push 0x1fa */ { u32 v = 0x1fau; r_esp -= 4; W32(r_esp, v); }
    /* 00617152: push 0x6d8a9c */ { u32 v = 0x6d8a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00617157: push 0x6d8af4 */ { u32 v = 0x6d8af4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061715c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x617161u); f_005e9f20();
    /* 00617161: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00617164:; BB(0x00617164);
    /* 00617164: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00617167: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617168: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0061716b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061716c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0061716f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00617170: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00617173: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00617174: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00617178: call 0x616ed0 */ r_esp -= 4; W32(r_esp, 0x61717du); f_00616ed0();
    /* 0061717d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617180: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00617183: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00617186: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00617189: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061718a: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x61718fu); f_00686cae();
    /* 0061718f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00617192: mov esp, ebp */ r_esp = r_ebp;
    /* 00617194: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00617195: ret  */ FN_RET(0x00617100); r_esp += 4; return;
}


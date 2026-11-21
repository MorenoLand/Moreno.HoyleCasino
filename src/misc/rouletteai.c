#include "protos.h"

void f_00521900(void) /* rouletteai::func_00521900 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00521900);
    /* 00521900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521901: mov ebp, esp */ r_ebp = r_esp;
    /* 00521903: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00521904: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00521907: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052190b: jne 0x521917 */ if (!fZ) goto L_00521917;
L_0052190d:; BB(0x0052190d);
    /* 0052190d: mov eax, 6 */ r_eax = 0x6u;
    /* 00521912: jmp 0x521a0a */ goto L_00521a0a;
L_00521917:; BB(0x00521917);
    /* 00521917: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052191b: jne 0x521927 */ if (!fZ) goto L_00521927;
L_0052191d:; BB(0x0052191d);
    /* 0052191d: mov eax, 7 */ r_eax = 0x7u;
    /* 00521922: jmp 0x521a0a */ goto L_00521a0a;
L_00521927:; BB(0x00521927);
    /* 00521927: cmp dword ptr [ebp + 8], 0x9d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052192e: jne 0x52193a */ if (!fZ) goto L_0052193a;
L_00521930:; BB(0x00521930);
    /* 00521930: mov eax, 9 */ r_eax = 0x9u;
    /* 00521935: jmp 0x521a0a */ goto L_00521a0a;
L_0052193a:; BB(0x0052193a);
    /* 0052193a: cmp dword ptr [ebp + 8], 0x85 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521941: jne 0x52194d */ if (!fZ) goto L_0052194d;
L_00521943:; BB(0x00521943);
    /* 00521943: mov eax, 0xc */ r_eax = 0xcu;
    /* 00521948: jmp 0x521a0a */ goto L_00521a0a;
L_0052194d:; BB(0x0052194d);
    /* 0052194d: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521951: jle 0x521963 */ if ((fZ||fS!=fO)) goto L_00521963;
L_00521953:; BB(0x00521953);
    /* 00521953: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521957: jge 0x521963 */ if ((fS==fO)) goto L_00521963;
L_00521959:; BB(0x00521959);
    /* 00521959: mov eax, 1 */ r_eax = 0x1u;
    /* 0052195e: jmp 0x521a0a */ goto L_00521a0a;
L_00521963:; BB(0x00521963);
    /* 00521963: cmp dword ptr [ebp + 8], 0x25 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521967: jle 0x521979 */ if ((fZ||fS!=fO)) goto L_00521979;
L_00521969:; BB(0x00521969);
    /* 00521969: cmp dword ptr [ebp + 8], 0x63 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052196d: jge 0x521979 */ if ((fS==fO)) goto L_00521979;
L_0052196f:; BB(0x0052196f);
    /* 0052196f: mov eax, 8 */ r_eax = 0x8u;
    /* 00521974: jmp 0x521a0a */ goto L_00521a0a;
L_00521979:; BB(0x00521979);
    /* 00521979: cmp dword ptr [ebp + 8], 0x62 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052197d: jle 0x52198c */ if ((fZ||fS!=fO)) goto L_0052198c;
L_0052197f:; BB(0x0052197f);
    /* 0052197f: cmp dword ptr [ebp + 8], 0x6f */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521983: jge 0x52198c */ if ((fS==fO)) goto L_0052198c;
L_00521985:; BB(0x00521985);
    /* 00521985: mov eax, 0xa */ r_eax = 0xau;
    /* 0052198a: jmp 0x521a0a */ goto L_00521a0a;
L_0052198c:; BB(0x0052198c);
    /* 0052198c: cmp dword ptr [ebp + 8], 0x6e */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521990: jle 0x5219a2 */ if ((fZ||fS!=fO)) goto L_005219a2;
L_00521992:; BB(0x00521992);
    /* 00521992: cmp dword ptr [ebp + 8], 0x85 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521999: jge 0x5219a2 */ if ((fS==fO)) goto L_005219a2;
L_0052199b:; BB(0x0052199b);
    /* 0052199b: mov eax, 0xb */ r_eax = 0xbu;
    /* 005219a0: jmp 0x521a0a */ goto L_00521a0a;
L_005219a2:; BB(0x005219a2);
    /* 005219a2: cmp dword ptr [ebp + 8], 0x85 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005219a9: jle 0x5219bb */ if ((fZ||fS!=fO)) goto L_005219bb;
L_005219ab:; BB(0x005219ab);
    /* 005219ab: cmp dword ptr [ebp + 8], 0x91 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x91u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005219b2: jge 0x5219bb */ if ((fS==fO)) goto L_005219bb;
L_005219b4:; BB(0x005219b4);
    /* 005219b4: mov eax, 0xd */ r_eax = 0xdu;
    /* 005219b9: jmp 0x521a0a */ goto L_00521a0a;
L_005219bb:; BB(0x005219bb);
    /* 005219bb: cmp dword ptr [ebp + 8], 0x90 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005219c2: jle 0x5219d4 */ if ((fZ||fS!=fO)) goto L_005219d4;
L_005219c4:; BB(0x005219c4);
    /* 005219c4: cmp dword ptr [ebp + 8], 0x97 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x97u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005219cb: jge 0x5219d4 */ if ((fS==fO)) goto L_005219d4;
L_005219cd:; BB(0x005219cd);
    /* 005219cd: mov eax, 0xe */ r_eax = 0xeu;
    /* 005219d2: jmp 0x521a0a */ goto L_00521a0a;
L_005219d4:; BB(0x005219d4);
    /* 005219d4: cmp dword ptr [ebp + 8], 0x96 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005219db: jle 0x5219ed */ if ((fZ||fS!=fO)) goto L_005219ed;
L_005219dd:; BB(0x005219dd);
    /* 005219dd: cmp dword ptr [ebp + 8], 0x9d */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005219e4: jge 0x5219ed */ if ((fS==fO)) goto L_005219ed;
L_005219e6:; BB(0x005219e6);
    /* 005219e6: mov eax, 0xf */ r_eax = 0xfu;
    /* 005219eb: jmp 0x521a0a */ goto L_00521a0a;
L_005219ed:; BB(0x005219ed);
    /* 005219ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005219ef: jne 0x521a08 */ if (!fZ) goto L_00521a08;
L_005219f1:; BB(0x005219f1);
    /* 005219f1: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 005219f6: push 0x6c2de4 */ { u32 v = 0x6c2de4u; r_esp -= 4; W32(r_esp, v); }
    /* 005219fb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00521a00: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x521a05u); f_005e9f20();
    /* 00521a05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00521a08:; BB(0x00521a08);
    /* 00521a08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00521a0a:; BB(0x00521a0a);
    /* 00521a0a: mov esp, ebp */ r_esp = r_ebp;
    /* 00521a0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521a0d: ret 4 */ FN_RET(0x00521900); r_esp += 8; return;
}


#include "protos.h"

void f_00479140(void) /* PokerGame::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00479140);
    /* 00479140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00479141: mov ebp, esp */ r_ebp = r_esp;
    /* 00479143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00479145: push 0x69fdd3 */ { u32 v = 0x69fdd3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047914a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00479150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00479151: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00479154: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00479159: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047915b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047915c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0047915f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00479165: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00479168: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047916b: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x479170u); f_005e9e20();
    /* 00479170: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00479177: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047917a: mov dword ptr [eax], 0x6bc690 */ W32((u32)(r_eax), 0x6bc690u);
    /* 00479180: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479183: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00479186: call 0x4f4200 */ r_esp -= 4; W32(r_esp, 0x47918bu); f_004f4200();
    /* 0047918b: mov byte ptr [ebp - 4], 1 */ W8((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0047918f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479192: mov dword ptr [ecx + 0x420], 1 */ W32((u32)(r_ecx+0x420u), 0x1u);
    /* 0047919c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047919f: mov byte ptr [edx + 0x7d2], 1 */ W8((u32)(r_edx+0x7d2u), 0x1u);
    /* 004791a6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004791a9: mov dword ptr [eax + 0x42c], 0 */ W32((u32)(r_eax+0x42cu), 0x0u);
    /* 004791b3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004791b6: mov dword ptr [ecx + 0x434], 0 */ W32((u32)(r_ecx+0x434u), 0x0u);
    /* 004791c0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004791c3: mov dword ptr [edx + 0x450], 0 */ W32((u32)(r_edx+0x450u), 0x0u);
    /* 004791cd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004791d0: mov dword ptr [eax + 0x454], 0 */ W32((u32)(r_eax+0x454u), 0x0u);
    /* 004791da: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004791dd: mov dword ptr [ecx + 0x45c], 0 */ W32((u32)(r_ecx+0x45cu), 0x0u);
    /* 004791e7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004791ea: mov dword ptr [edx + 0x458], 0 */ W32((u32)(r_edx+0x458u), 0x0u);
    /* 004791f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004791f7: mov dword ptr [eax + 0x460], 0 */ W32((u32)(r_eax+0x460u), 0x0u);
    /* 00479201: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479204: mov dword ptr [ecx + 0x464], 0 */ W32((u32)(r_ecx+0x464u), 0x0u);
    /* 0047920e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479211: mov dword ptr [edx + 0x468], 0 */ W32((u32)(r_edx+0x468u), 0x0u);
    /* 0047921b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047921e: mov dword ptr [eax + 0x46c], 0 */ W32((u32)(r_eax+0x46cu), 0x0u);
    /* 00479228: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047922b: mov dword ptr [ecx + 0x470], 0 */ W32((u32)(r_ecx+0x470u), 0x0u);
    /* 00479235: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479238: mov dword ptr [edx + 0x474], 0 */ W32((u32)(r_edx+0x474u), 0x0u);
    /* 00479242: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479245: mov dword ptr [eax + 0x478], 0 */ W32((u32)(r_eax+0x478u), 0x0u);
    /* 0047924f: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479252: mov dword ptr [ecx + 0x47c], 0 */ W32((u32)(r_ecx+0x47cu), 0x0u);
    /* 0047925c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047925f: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
    /* 00479269: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047926c: mov dword ptr [eax + 0x428], 0 */ W32((u32)(r_eax+0x428u), 0x0u);
    /* 00479276: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479279: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00479280: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00479286: jmp 0x479294 */ goto L_00479294;
L_00479288:; BB(0x00479288);
    /* 00479288: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 0047928c: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00479290: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_00479294:; BB(0x00479294);
    /* 00479294: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00479298: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047929b: jge 0x4792ae */ if ((fS==fO)) goto L_004792ae;
L_0047929d:; BB(0x0047929d);
    /* 0047929d: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004792a1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792a4: mov dword ptr [edx + ecx*4 + 4], 0 */ W32((u32)(r_edx+r_ecx*4+0x4u), 0x0u);
    /* 004792ac: jmp 0x479288 */ goto L_00479288;
L_004792ae:; BB(0x004792ae);
    /* 004792ae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792b1: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 004792b8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792bb: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 004792c2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792c5: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 004792cc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792cf: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 004792d6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792d9: mov byte ptr [ecx + 0x494], 1 */ W8((u32)(r_ecx+0x494u), 0x1u);
    /* 004792e0: mov byte ptr [0x791360], 0 */ W8((u32)(0x791360u), 0x0u);
    /* 004792e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004792e9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792ec: call 0x47b9a0 */ r_esp -= 4; W32(r_esp, 0x4792f1u); f_0047b9a0();
    /* 004792f1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004792f4: mov dword ptr [edx + 0x430], 1 */ W32((u32)(r_edx+0x430u), 0x1u);
    /* 004792fe: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00479304: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x479309u); f_005da7b0();
    /* 00479309: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047930c: mov byte ptr [ecx + 0x3e0], al */ W8((u32)(r_ecx+0x3e0u), (u8)r_eax);
    /* 00479312: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00479318: call 0x5da830 */ r_esp -= 4; W32(r_esp, 0x47931du); f_005da830();
    /* 0047931d: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479320: mov byte ptr [edx + 0x7d3], al */ W8((u32)(r_edx+0x7d3u), (u8)r_eax);
    /* 00479326: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479329: mov byte ptr [eax + 0x408], 0 */ W8((u32)(r_eax+0x408u), 0x0u);
    /* 00479330: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479333: mov word ptr [ecx + 0x7d0], 0 */ W16((u32)(r_ecx+0x7d0u), 0x0u);
    /* 0047933c: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00479342: jmp 0x479350 */ goto L_00479350;
L_00479344:; BB(0x00479344);
    /* 00479344: mov dx, word ptr [ebp - 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 00479348: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047934c: mov word ptr [ebp - 0x10], dx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_edx);
L_00479350:; BB(0x00479350);
    /* 00479350: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 00479354: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00479359: jge 0x47936f */ if ((fS==fO)) goto L_0047936f;
L_0047935b:; BB(0x0047935b);
    /* 0047935b: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0047935f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479362: mov dword ptr [edx + ecx*4 + 0x4b0], 0 */ W32((u32)(r_edx+r_ecx*4+0x4b0u), 0x0u);
    /* 0047936d: jmp 0x479344 */ goto L_00479344;
L_0047936f:; BB(0x0047936f);
    /* 0047936f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479372: mov dword ptr [eax + 0x3dc], 0 */ W32((u32)(r_eax+0x3dcu), 0x0u);
    /* 0047937c: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047937f: mov dword ptr [ecx + 0x4a4], 0 */ W32((u32)(r_ecx+0x4a4u), 0x0u);
    /* 00479389: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0047938b: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00479391: call 0x6375d0 */ r_esp -= 4; W32(r_esp, 0x479396u); f_006375d0();
    /* 00479396: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00479399: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047939c: mov dword ptr [edx + 0x414], 0 */ W32((u32)(r_edx+0x414u), 0x0u);
    /* 004793a6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004793a9: mov dword ptr [eax + 0x484], 0 */ W32((u32)(r_eax+0x484u), 0x0u);
    /* 004793b3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004793b6: mov dword ptr [ecx + 0xd0], 0xffffffff */ W32((u32)(r_ecx+0xd0u), 0xffffffffu);
    /* 004793c0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004793c3: mov dword ptr [edx + 0xd4], 0xffffffff */ W32((u32)(r_edx+0xd4u), 0xffffffffu);
    /* 004793cd: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004793d0: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4793d5u); f_0047f950();
    /* 004793d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004793d6: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x4793dbu); f_0062fbf0();
    /* 004793db: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004793de: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004793e1: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 004793e7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004793ea: mov dword ptr [edx + 0x41c], 0 */ W32((u32)(r_edx+0x41cu), 0x0u);
    /* 004793f4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004793f7: mov dword ptr [eax + 0x424], 1 */ W32((u32)(r_eax+0x424u), 0x1u);
    /* 00479401: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479404: mov byte ptr [ecx + 0xe8], 0 */ W8((u32)(r_ecx+0xe8u), 0x0u);
    /* 0047940b: mov word ptr [ebp - 0x14], 0 */ W16((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00479411: jmp 0x47941f */ goto L_0047941f;
L_00479413:; BB(0x00479413);
    /* 00479413: mov dx, word ptr [ebp - 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00479417: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047941b: mov word ptr [ebp - 0x14], dx */ W16((u32)(r_ebp+0xffffffecu), (u16)r_edx);
L_0047941f:; BB(0x0047941f);
    /* 0047941f: movsx eax, word ptr [ebp - 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 00479423: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00479428: jge 0x47943e */ if ((fS==fO)) goto L_0047943e;
L_0047942a:; BB(0x0047942a);
    /* 0047942a: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047942e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479431: mov dword ptr [edx + ecx*4 + 0x4b0], 0 */ W32((u32)(r_edx+r_ecx*4+0x4b0u), 0x0u);
    /* 0047943c: jmp 0x479413 */ goto L_00479413;
L_0047943e:; BB(0x0047943e);
    /* 0047943e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479441: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00479444: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00479447: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 0047944d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00479450: mov byte ptr [eax + 0xc8], 0 */ W8((u32)(r_eax+0xc8u), 0x0u);
    /* 00479457: mov ecx, dword ptr [0x793578] */ r_ecx = R32((u32)(0x793578u));
    /* 0047945d: call 0x57ae30 */ r_esp -= 4; W32(r_esp, 0x479462u); f_0057ae30();
    /* 00479462: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00479469: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047946c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047946f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00479476: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00479477: mov esp, ebp */ r_esp = r_ebp;
    /* 00479479: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047947a: ret  */ FN_RET(0x00479140); r_esp += 4; return;
}

void f_00479480(void) /* PokerGame::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00479480);
    /* 00479480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00479481: mov ebp, esp */ r_ebp = r_esp;
    /* 00479483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00479485: push 0x69fe01 */ { u32 v = 0x69fe01u; r_esp -= 4; W32(r_esp, v); }
    /* 0047948a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00479490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00479491: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00479497: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047949c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047949e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047949f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 004794a2: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 004794a8: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 004794ab: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 004794ae: mov dword ptr [eax], 0x6bc690 */ W32((u32)(r_eax), 0x6bc690u);
    /* 004794b4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004794bb: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004794be: movzx edx, byte ptr [ecx + 0x7d3] */ r_edx = (u32)R8((u32)(r_ecx+0x7d3u));
    /* 004794c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004794c7: je 0x4794f4 */ if (fZ) goto L_004794f4;
L_004794c9:; BB(0x004794c9);
    /* 004794c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004794cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004794cd: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4794d2u); f_0064c8a0();
    /* 004794d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004794d5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004794d8: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004794db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004794de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004794df: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004794e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004794e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004794e5: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4794eau); f_005dcb00();
    /* 004794ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004794ed: mov ecx, eax */ r_ecx = r_eax;
    /* 004794ef: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x4794f4u); f_005d5af0();
L_004794f4:; BB(0x004794f4);
    /* 004794f4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004794f7: call 0x47fab0 */ r_esp -= 4; W32(r_esp, 0x4794fcu); f_0047fab0();
    /* 004794fc: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 004794ff: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00479502: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00479505: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00479508: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0047950b: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047950f: je 0x479527 */ if (fZ) goto L_00479527;
L_00479511:; BB(0x00479511);
    /* 00479511: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00479513: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00479516: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00479518: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047951b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047951d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47951fu); call_ind(t); }
    /* 0047951f: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 00479525: jmp 0x479531 */ goto L_00479531;
L_00479527:; BB(0x00479527);
    /* 00479527: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00479531:; BB(0x00479531);
    /* 00479531: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00479534: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00479537: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0047953a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047953d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00479540: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479544: je 0x47955c */ if (fZ) goto L_0047955c;
L_00479546:; BB(0x00479546);
    /* 00479546: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00479548: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047954b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047954d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00479550: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00479552: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479554u); call_ind(t); }
    /* 00479554: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0047955a: jmp 0x479566 */ goto L_00479566;
L_0047955c:; BB(0x0047955c);
    /* 0047955c: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_00479566:; BB(0x00479566);
    /* 00479566: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00479569: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 0047956c: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0047956f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00479572: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00479575: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479579: je 0x479591 */ if (fZ) goto L_00479591;
L_0047957b:; BB(0x0047957b);
    /* 0047957b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047957d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00479580: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479582: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00479585: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00479587: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479589u); call_ind(t); }
    /* 00479589: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0047958f: jmp 0x47959b */ goto L_0047959b;
L_00479591:; BB(0x00479591);
    /* 00479591: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_0047959b:; BB(0x0047959b);
    /* 0047959b: mov word ptr [ebp - 0x10], 0 */ W16((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 004795a1: jmp 0x4795af */ goto L_004795af;
L_004795a3:; BB(0x004795a3);
    /* 004795a3: mov cx, word ptr [ebp - 0x10] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff0u))) & 0xffffu);
    /* 004795a7: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 004795ab: mov word ptr [ebp - 0x10], cx */ W16((u32)(r_ebp+0xfffffff0u), (u16)r_ecx);
L_004795af:; BB(0x004795af);
    /* 004795af: movsx edx, word ptr [ebp - 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004795b3: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004795b6: jge 0x4795f4 */ if ((fS==fO)) goto L_004795f4;
L_004795b8:; BB(0x004795b8);
    /* 004795b8: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 004795bc: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004795bf: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 004795c3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004795c6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 004795c9: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 004795cc: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004795d0: je 0x4795e8 */ if (fZ) goto L_004795e8;
L_004795d2:; BB(0x004795d2);
    /* 004795d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004795d4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004795d7: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004795d9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004795dc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004795de: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4795e0u); call_ind(t); }
    /* 004795e0: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 004795e6: jmp 0x4795f2 */ goto L_004795f2;
L_004795e8:; BB(0x004795e8);
    /* 004795e8: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_004795f2:; BB(0x004795f2);
    /* 004795f2: jmp 0x4795a3 */ goto L_004795a3;
L_004795f4:; BB(0x004795f4);
    /* 004795f4: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004795f7: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004795fa: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004795fd: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00479600: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00479603: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479607: je 0x47961f */ if (fZ) goto L_0047961f;
L_00479609:; BB(0x00479609);
    /* 00479609: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047960b: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0047960e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479610: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00479613: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00479615: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479617u); call_ind(t); }
    /* 00479617: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0047961d: jmp 0x479629 */ goto L_00479629;
L_0047961f:; BB(0x0047961f);
    /* 0047961f: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00479629:; BB(0x00479629);
    /* 00479629: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0047962c: mov edx, dword ptr [ecx + 0x498] */ r_edx = R32((u32)(r_ecx+0x498u));
    /* 00479632: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00479635: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00479638: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0047963b: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047963f: je 0x479657 */ if (fZ) goto L_00479657;
L_00479641:; BB(0x00479641);
    /* 00479641: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00479643: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00479646: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479648: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047964b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047964d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47964fu); call_ind(t); }
    /* 0047964f: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 00479655: jmp 0x479661 */ goto L_00479661;
L_00479657:; BB(0x00479657);
    /* 00479657: mov dword ptr [ebp - 0x98], 0 */ W32((u32)(r_ebp+0xffffff68u), 0x0u);
L_00479661:; BB(0x00479661);
    /* 00479661: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00479664: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 0047966a: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0047966d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00479670: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00479673: cmp dword ptr [ebp - 0x50], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479677: je 0x47968f */ if (fZ) goto L_0047968f;
L_00479679:; BB(0x00479679);
    /* 00479679: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047967b: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0047967e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479680: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00479683: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00479685: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479687u); call_ind(t); }
    /* 00479687: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0047968d: jmp 0x479699 */ goto L_00479699;
L_0047968f:; BB(0x0047968f);
    /* 0047968f: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_00479699:; BB(0x00479699);
    /* 00479699: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0047969c: mov edx, dword ptr [ecx + 0x4a0] */ r_edx = R32((u32)(r_ecx+0x4a0u));
    /* 004796a2: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 004796a5: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 004796a8: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 004796ab: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004796af: je 0x4796c7 */ if (fZ) goto L_004796c7;
L_004796b1:; BB(0x004796b1);
    /* 004796b1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004796b3: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004796b6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004796b8: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 004796bb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004796bd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4796bfu); call_ind(t); }
    /* 004796bf: mov dword ptr [ebp - 0xa0], eax */ W32((u32)(r_ebp+0xffffff60u), r_eax);
    /* 004796c5: jmp 0x4796d1 */ goto L_004796d1;
L_004796c7:; BB(0x004796c7);
    /* 004796c7: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_004796d1:; BB(0x004796d1);
    /* 004796d1: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004796d4: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 004796da: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 004796dd: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 004796e0: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004796e3: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004796e7: je 0x4796ff */ if (fZ) goto L_004796ff;
L_004796e9:; BB(0x004796e9);
    /* 004796e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004796eb: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004796ee: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004796f0: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 004796f3: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004796f5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4796f7u); call_ind(t); }
    /* 004796f7: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 004796fd: jmp 0x479709 */ goto L_00479709;
L_004796ff:; BB(0x004796ff);
    /* 004796ff: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_00479709:; BB(0x00479709);
    /* 00479709: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0047970c: mov edx, dword ptr [ecx + 0xe0] */ r_edx = R32((u32)(r_ecx+0xe0u));
    /* 00479712: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00479715: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00479718: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0047971b: cmp dword ptr [ebp - 0x68], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff98u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047971f: je 0x479737 */ if (fZ) goto L_00479737;
L_00479721:; BB(0x00479721);
    /* 00479721: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00479723: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 00479726: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479728: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 0047972b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047972d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47972fu); call_ind(t); }
    /* 0047972f: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00479735: jmp 0x479741 */ goto L_00479741;
L_00479737:; BB(0x00479737);
    /* 00479737: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_00479741:; BB(0x00479741);
    /* 00479741: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00479744: mov edx, dword ptr [ecx + 0xe4] */ r_edx = R32((u32)(r_ecx+0xe4u));
    /* 0047974a: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0047974d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00479750: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00479753: cmp dword ptr [ebp - 0x70], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479757: je 0x47976f */ if (fZ) goto L_0047976f;
L_00479759:; BB(0x00479759);
    /* 00479759: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047975b: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 0047975e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00479760: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00479763: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00479765: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x479767u); call_ind(t); }
    /* 00479767: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 0047976d: jmp 0x479779 */ goto L_00479779;
L_0047976f:; BB(0x0047976f);
    /* 0047976f: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_00479779:; BB(0x00479779);
    /* 00479779: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00479780: jmp 0x47978b */ goto L_0047978b;
L_00479782:; BB(0x00479782);
    /* 00479782: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00479785: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00479788: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0047978b:; BB(0x0047978b);
    /* 0047978b: cmp dword ptr [ebp - 0x14], 0xc8 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00479792: jge 0x4797d2 */ if ((fS==fO)) goto L_004797d2;
L_00479794:; BB(0x00479794);
    /* 00479794: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00479797: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0047979a: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 004797a1: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 004797a4: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 004797a7: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 004797aa: cmp dword ptr [ebp - 0x78], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff88u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004797ae: je 0x4797c6 */ if (fZ) goto L_004797c6;
L_004797b0:; BB(0x004797b0);
    /* 004797b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004797b2: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 004797b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004797b7: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 004797ba: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004797bc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4797beu); call_ind(t); }
    /* 004797be: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 004797c4: jmp 0x4797d0 */ goto L_004797d0;
L_004797c6:; BB(0x004797c6);
    /* 004797c6: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_004797d0:; BB(0x004797d0);
    /* 004797d0: jmp 0x479782 */ goto L_00479782;
L_004797d2:; BB(0x004797d2);
    /* 004797d2: mov byte ptr [ebp - 4], 0 */ W8((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004797d6: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004797d9: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004797dc: call 0x4f4300 */ r_esp -= 4; W32(r_esp, 0x4797e1u); f_004f4300();
    /* 004797e1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004797e8: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 004797eb: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x4797f0u); f_005e9e40();
    /* 004797f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004797f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004797fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004797fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004797fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004797fe: ret  */ FN_RET(0x00479480); r_esp += 4; return;
}

void f_004798c0(void) /* PokerGame::func_004798c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x004798c0);
    /* 004798c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004798c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004798c3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004798c6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 004798c9: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 004798d0: jmp 0x4798db */ goto L_004798db;
L_004798d2:; BB(0x004798d2);
    /* 004798d2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004798d5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004798d8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_004798db:; BB(0x004798db);
    /* 004798db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004798de: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x4798e3u); f_0047f950();
    /* 004798e3: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004798e6: jge 0x47990d */ if ((fS==fO)) goto L_0047990d;
L_004798e8:; BB(0x004798e8);
    /* 004798e8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 004798eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004798ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004798ef: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4798f4u); f_0047e390();
    /* 004798f4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 004798f7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004798fa: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4798ffu); f_004c61b0();
    /* 004798ff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00479902: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00479904: je 0x47990b */ if (fZ) goto L_0047990b;
L_00479906:; BB(0x00479906);
    /* 00479906: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00479909: jmp 0x47992a */ goto L_0047992a;
L_0047990b:; BB(0x0047990b);
    /* 0047990b: jmp 0x4798d2 */ goto L_004798d2;
L_0047990d:; BB(0x0047990d);
    /* 0047990d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047990f: jne 0x479928 */ if (!fZ) goto L_00479928;
L_00479911:; BB(0x00479911);
    /* 00479911: push 0xa3 */ { u32 v = 0xa3u; r_esp -= 4; W32(r_esp, v); }
    /* 00479916: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047991b: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00479920: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x479925u); f_005e9f20();
    /* 00479925: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00479928:; BB(0x00479928);
    /* 00479928: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0047992a:; BB(0x0047992a);
    /* 0047992a: mov esp, ebp */ r_esp = r_ebp;
    /* 0047992c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047992d: ret  */ FN_RET(0x004798c0); r_esp += 4; return;
}

void f_0047a510(void) /* PokerGame::func_0047a510 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047a510);
    /* 0047a510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047a511: mov ebp, esp */ r_ebp = r_esp;
    /* 0047a513: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047a516: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0047a519: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0047a520: jmp 0x47a52b */ goto L_0047a52b;
L_0047a522:; BB(0x0047a522);
    /* 0047a522: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047a525: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047a528: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0047a52b:; BB(0x0047a52b);
    /* 0047a52b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047a52e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47a533u); f_0047f950();
    /* 0047a533: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047a536: jge 0x47a597 */ if ((fS==fO)) goto L_0047a597;
L_0047a538:; BB(0x0047a538);
    /* 0047a538: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047a53b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047a53c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47a541u); f_005dcb00();
    /* 0047a541: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047a544: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047a547: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a54b: je 0x47a595 */ if (fZ) goto L_0047a595;
L_0047a54d:; BB(0x0047a54d);
    /* 0047a54d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a550: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47a555u); f_0063aac0();
    /* 0047a555: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047a557: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0047a55a: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a55e: je 0x47a57c */ if (fZ) goto L_0047a57c;
L_0047a560:; BB(0x0047a560);
    /* 0047a560: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a563: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47a568u); f_0063aac0();
    /* 0047a568: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047a56a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0047a56d: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a571: je 0x47a57c */ if (fZ) goto L_0047a57c;
L_0047a573:; BB(0x0047a573);
    /* 0047a573: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0047a57a: jmp 0x47a583 */ goto L_0047a583;
L_0047a57c:; BB(0x0047a57c);
    /* 0047a57c: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_0047a583:; BB(0x0047a583);
    /* 0047a583: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 0047a587: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047a589: je 0x47a595 */ if (fZ) goto L_0047a595;
L_0047a58b:; BB(0x0047a58b);
    /* 0047a58b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047a58e: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x47a593u); f_005d5a50();
    /* 0047a593: jmp 0x47a5b4 */ goto L_0047a5b4;
L_0047a595:; BB(0x0047a595);
    /* 0047a595: jmp 0x47a522 */ goto L_0047a522;
L_0047a597:; BB(0x0047a597);
    /* 0047a597: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0047a599: jne 0x47a5b2 */ if (!fZ) goto L_0047a5b2;
L_0047a59b:; BB(0x0047a59b);
    /* 0047a59b: push 0x17e */ { u32 v = 0x17eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5a0: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5a5: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047a5aa: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47a5afu); f_005e9f20();
    /* 0047a5af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047a5b2:; BB(0x0047a5b2);
    /* 0047a5b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0047a5b4:; BB(0x0047a5b4);
    /* 0047a5b4: mov esp, ebp */ r_esp = r_ebp;
    /* 0047a5b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047a5b7: ret  */ FN_RET(0x0047a510); r_esp += 4; return;
}

void f_0047ac50(void) /* PokerGame::func_0047ac50 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ac50);
    /* 0047ac50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac51: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ac53: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047ac56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac57: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0047ac5a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ac60: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x47ac65u); f_005da7b0();
    /* 0047ac65: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0047ac68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ac6a: je 0x47ac83 */ if (fZ) goto L_0047ac83;
L_0047ac6c:; BB(0x0047ac6c);
    /* 0047ac6c: push 0x22c */ { u32 v = 0x22cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac71: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac76: push 0x6bc6f4 */ { u32 v = 0x6bc6f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ac7b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47ac80u); f_005e9f20();
    /* 0047ac80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047ac83:; BB(0x0047ac83);
    /* 0047ac83: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047ac8a: jmp 0x47ac95 */ goto L_0047ac95;
L_0047ac8c:; BB(0x0047ac8c);
    /* 0047ac8c: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ac8f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047ac92: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0047ac95:; BB(0x0047ac95);
    /* 0047ac95: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047ac9b: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47aca0u); f_0047f950();
    /* 0047aca0: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047aca3: jge 0x47ae19 */ if ((fS==fO)) goto L_0047ae19;
L_0047aca9:; BB(0x0047aca9);
    /* 0047aca9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047acac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047acad: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47acb2u); f_005dcb00();
    /* 0047acb2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047acb5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0047acb8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047acbb: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47acc0u); f_0063aac0();
    /* 0047acc0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0047acc2: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047acc5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0047acc7: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047accb: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0047acce: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 0047acd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047acd3: jne 0x47ae14 */ if (!fZ) goto L_0047ae14;
L_0047acd9:; BB(0x0047acd9);
    /* 0047acd9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047acdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047acdd: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47ace2u); f_005dcb00();
    /* 0047ace2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ace5: mov ecx, eax */ r_ecx = r_eax;
    /* 0047ace7: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x47acecu); f_005d5a50();
    /* 0047acec: mov esi, eax */ r_esi = r_eax;
    /* 0047acee: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0047acf1: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x47acf6u); f_0047bc20();
    /* 0047acf6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047acf8: jge 0x47ae14 */ if ((fS==fO)) goto L_0047ae14;
L_0047acfe:; BB(0x0047acfe);
    /* 0047acfe: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0047ad04: mov al, byte ptr [edx + 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x25u))) & 0xffu);
    /* 0047ad07: mov byte ptr [ebp - 0x1d], al */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_eax);
    /* 0047ad0a: movzx ecx, byte ptr [ebp - 0x1d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 0047ad0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ad10: jne 0x47ad7c */ if (!fZ) goto L_0047ad7c;
L_0047ad12:; BB(0x0047ad12);
    /* 0047ad12: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ad15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ad16: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47ad1bu); f_005dcb00();
    /* 0047ad1b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ad1e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0047ad21: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047ad24: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47ad29u); f_0063aac0();
    /* 0047ad29: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047ad2b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0047ad2e: cmp dword ptr [ebp - 0x24], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ad32: je 0x47ad50 */ if (fZ) goto L_0047ad50;
L_0047ad34:; BB(0x0047ad34);
    /* 0047ad34: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047ad37: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x47ad3cu); f_0063aac0();
    /* 0047ad3c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0047ad3e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0047ad41: cmp dword ptr [ebp - 0x28], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ad45: je 0x47ad50 */ if (fZ) goto L_0047ad50;
L_0047ad47:; BB(0x0047ad47);
    /* 0047ad47: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0047ad4e: jmp 0x47ad57 */ goto L_0047ad57;
L_0047ad50:; BB(0x0047ad50);
    /* 0047ad50: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0047ad57:; BB(0x0047ad57);
    /* 0047ad57: movzx edx, byte ptr [ebp - 0x44] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffbcu));
    /* 0047ad5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ad5d: je 0x47ad7c */ if (fZ) goto L_0047ad7c;
L_0047ad5f:; BB(0x0047ad5f);
    /* 0047ad5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ad62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ad63: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47ad68u); f_005dcb00();
    /* 0047ad68: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ad6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ad6c: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ad72: call 0x5dbb70 */ r_esp -= 4; W32(r_esp, 0x47ad77u); f_005dbb70();
    /* 0047ad77: jmp 0x47ae14 */ goto L_0047ae14;
L_0047ad7c:; BB(0x0047ad7c);
    /* 0047ad7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ad7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ad80: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ad86: call 0x5d9570 */ r_esp -= 4; W32(r_esp, 0x47ad8bu); f_005d9570();
    /* 0047ad8b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047ad8e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ad91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ad92: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47ad97u); f_005dcb00();
    /* 0047ad97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ad9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ad9b: mov eax, dword ptr [0x791eb8] */ r_eax = R32((u32)(0x791eb8u));
    /* 0047ada0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047ada2: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 0047ada8: mov eax, dword ptr [edx + 0x264] */ r_eax = R32((u32)(r_edx+0x264u));
    /* 0047adae: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47adb0u); call_ind(t); }
    /* 0047adb0: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 0047adb7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0047adbe: jmp 0x47adc9 */ goto L_0047adc9;
L_0047adc0:; BB(0x0047adc0);
    /* 0047adc0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047adc3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047adc6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0047adc9:; BB(0x0047adc9);
    /* 0047adc9: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0047adcc: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47add1u); f_0047f950();
    /* 0047add1: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047add4: jge 0x47ae14 */ if ((fS==fO)) goto L_0047ae14;
L_0047add6:; BB(0x0047add6);
    /* 0047add6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047add9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047adda: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0047addd: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x47ade2u); f_0047e390();
    /* 0047ade2: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047ade5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ade8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0047adeb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047adec: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47adf1u); f_005dcb00();
    /* 0047adf1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047adf4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0047adf7: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047adfa: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047adfd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0047ae00: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047ae03: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ae06: jne 0x47ae12 */ if (!fZ) goto L_0047ae12;
L_0047ae08:; BB(0x0047ae08);
    /* 0047ae08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ae0b: call 0x4c6550 */ r_esp -= 4; W32(r_esp, 0x47ae10u); f_004c6550();
    /* 0047ae10: jmp 0x47ae14 */ goto L_0047ae14;
L_0047ae12:; BB(0x0047ae12);
    /* 0047ae12: jmp 0x47adc0 */ goto L_0047adc0;
L_0047ae14:; BB(0x0047ae14);
    /* 0047ae14: jmp 0x47ac8c */ goto L_0047ac8c;
L_0047ae19:; BB(0x0047ae19);
    /* 0047ae19: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0047ae1f: mov al, byte ptr [edx + 0x25] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x25u))) & 0xffu);
    /* 0047ae22: mov byte ptr [ebp - 0x35], al */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_eax);
    /* 0047ae25: movzx ecx, byte ptr [ebp - 0x35] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 0047ae29: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ae2b: je 0x47ae5a */ if (fZ) goto L_0047ae5a;
L_0047ae2d:; BB(0x0047ae2d);
    /* 0047ae2d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0047ae30: call 0x4798c0 */ r_esp -= 4; W32(r_esp, 0x47ae35u); f_004798c0();
    /* 0047ae35: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047ae38: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ae3c: je 0x47ae5a */ if (fZ) goto L_0047ae5a;
L_0047ae3e:; BB(0x0047ae3e);
    /* 0047ae3e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047ae41: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0047ae44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ae45: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x47ae4au); f_005dcb00();
    /* 0047ae4a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ae4d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0047ae50: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0047ae53: mov byte ptr [ecx + 0x4a1], 1 */ W8((u32)(r_ecx+0x4a1u), 0x1u);
L_0047ae5a:; BB(0x0047ae5a);
    /* 0047ae5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0047ae5b: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ae5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ae5e: ret  */ FN_RET(0x0047ac50); r_esp += 4; return;
}

void f_0047b010(void) /* PokerGame::func_0047b010 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047b010);
    /* 0047b010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047b011: mov ebp, esp */ r_ebp = r_esp;
    /* 0047b013: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b015: push 0x69ff2e */ { u32 v = 0x69ff2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b01a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0047b020: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b021: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047b024: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047b029: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047b02b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b02c: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0047b02f: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0047b035: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0047b038: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b03c: je 0x47b055 */ if (fZ) goto L_0047b055;
L_0047b03e:; BB(0x0047b03e);
    /* 0047b03e: push 0x271 */ { u32 v = 0x271u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b043: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b048: push 0x6bc7a8 */ { u32 v = 0x6bc7a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b04d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47b052u); f_005e9f20();
    /* 0047b052: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047b055:; BB(0x0047b055);
    /* 0047b055: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b058: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0047b05b: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b060u); f_0060c9a0();
    /* 0047b060: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b063: cmp dword ptr [edx + 0x414], eax */ {  u32 a = R32((u32)(r_edx+0x414u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b069: jl 0x47b082 */ if ((fS!=fO)) goto L_0047b082;
L_0047b06b:; BB(0x0047b06b);
    /* 0047b06b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b06e: call 0x47e1d0 */ r_esp -= 4; W32(r_esp, 0x47b073u); f_0047e1d0();
    /* 0047b073: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b076: jne 0x47b082 */ if (!fZ) goto L_0047b082;
L_0047b078:; BB(0x0047b078);
    /* 0047b078: mov eax, 3 */ r_eax = 0x3u;
    /* 0047b07d: jmp 0x47b57e */ goto L_0047b57e;
L_0047b082:; BB(0x0047b082);
    /* 0047b082: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 0047b089: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b08b: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47b090u); f_00686d82();
    /* 0047b090: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047b093: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0047b096: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047b09d: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b0a1: je 0x47b0b4 */ if (fZ) goto L_0047b0b4;
L_0047b0a3:; BB(0x0047b0a3);
    /* 0047b0a3: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0047b0a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b0a7: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b0aa: call 0x463e70 */ r_esp -= 4; W32(r_esp, 0x47b0afu); f_00463e70();
    /* 0047b0af: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0047b0b2: jmp 0x47b0bb */ goto L_0047b0bb;
L_0047b0b4:; BB(0x0047b0b4);
    /* 0047b0b4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0047b0bb:; BB(0x0047b0bb);
    /* 0047b0bb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047b0be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0047b0c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047b0c8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047b0cb: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0047b0ce: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 0047b0d5: jmp 0x47b0e0 */ goto L_0047b0e0;
L_0047b0d7:; BB(0x0047b0d7);
    /* 0047b0d7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b0da: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b0dd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0047b0e0:; BB(0x0047b0e0);
    /* 0047b0e0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b0e3: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b0e6: jge 0x47b57b */ if ((fS==fO)) goto L_0047b57b;
L_0047b0ec:; BB(0x0047b0ec);
    /* 0047b0ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b0ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b0ef: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0047b0f5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047b0f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b0f9: fld1  */ FPUSH(1.0);
    /* 0047b0fb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047b0fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b100: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b104: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b106: push 0x186a2 */ { u32 v = 0x186a2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b10b: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0047b111: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047b113: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047b119: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0047b11f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47b121u); call_ind(t); }
    /* 0047b121: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b124: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0047b127: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b12cu); f_0060c9a0();
    /* 0047b12c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b12f: cmp dword ptr [ecx + 0x414], eax */ {  u32 a = R32((u32)(r_ecx+0x414u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b135: jge 0x47b151 */ if ((fS==fO)) goto L_0047b151;
L_0047b137:; BB(0x0047b137);
    /* 0047b137: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b13a: mov eax, dword ptr [edx + 0x414] */ r_eax = R32((u32)(r_edx+0x414u));
    /* 0047b140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b141: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b144: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0047b147: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47b14cu); f_0060ca40();
    /* 0047b14c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0047b14f: jmp 0x47b196 */ goto L_0047b196;
L_0047b151:; BB(0x0047b151);
    /* 0047b151: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b154: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0047b157: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b15cu); f_0060c9a0();
    /* 0047b15c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b15f: cmp dword ptr [ecx + 0x4a4], eax */ {  u32 a = R32((u32)(r_ecx+0x4a4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b165: jl 0x47b17e */ if ((fS!=fO)) goto L_0047b17e;
L_0047b167:; BB(0x0047b167);
    /* 0047b167: push 0x284 */ { u32 v = 0x284u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b16c: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b171: push 0x6bc77c */ { u32 v = 0x6bc77cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b176: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47b17bu); f_005e9f20();
    /* 0047b17b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047b17e:; BB(0x0047b17e);
    /* 0047b17e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b181: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0047b187: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b188: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b18b: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0047b18e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47b193u); f_0060ca40();
    /* 0047b193: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0047b196:; BB(0x0047b196);
    /* 0047b196: movzx eax, byte ptr [ebp + 0x20] */ r_eax = (u32)R8((u32)(r_ebp+0x20u));
    /* 0047b19a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b19c: je 0x47b1af */ if (fZ) goto L_0047b1af;
L_0047b19e:; BB(0x0047b19e);
    /* 0047b19e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b1a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b1a2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047b1a5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0047b1a8: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x47b1adu); f_0060c7d0();
    /* 0047b1ad: jmp 0x47b1be */ goto L_0047b1be;
L_0047b1af:; BB(0x0047b1af);
    /* 0047b1af: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b1b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b1b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b1b6: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0047b1b9: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x47b1beu); f_0060c7d0();
L_0047b1be:; BB(0x0047b1be);
    /* 0047b1be: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b1c1: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b1c5: jne 0x47b1cf */ if (!fZ) goto L_0047b1cf;
L_0047b1c7:; BB(0x0047b1c7);
    /* 0047b1c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b1ca: call 0x463b90 */ r_esp -= 4; W32(r_esp, 0x47b1cfu); f_00463b90();
L_0047b1cf:; BB(0x0047b1cf);
    /* 0047b1cf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b1d2: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x47b1d7u); f_0047bbc0();
    /* 0047b1d7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b1da: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0047b1de: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0047b1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b1e2: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b1e5: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x47b1eau); f_0047bbc0();
    /* 0047b1ea: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b1ed: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0047b1f1: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0047b1f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b1f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b1f8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b1fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b1fe: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b201: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047b203: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0047b206: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b208u); call_ind(t); }
    /* 0047b208: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b20b: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x47b210u); f_004c70d0();
    /* 0047b210: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0047b213: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047b216: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0047b219: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0047b21c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047b21f: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0047b222: cmp dword ptr [ebp - 0x34], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0047b226: ja 0x47b31f */ if ((!fC&&!fZ)) goto L_0047b31f;
L_0047b22c:; BB(0x0047b22c);
    /* 0047b22c: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0047b22f: movzx ecx, byte ptr [eax + 0x47b598] */ r_ecx = (u32)R8((u32)(r_eax+0x47b598u));
    /* 0047b236: jmp dword ptr [ecx*4 + 0x47b590] */ { u32 t = R32((u32)(r_ecx*4+0x47b590u)); switch (t) { case 0x47b23du: goto L_0047b23d; case 0x47b2afu: goto L_0047b2af; default: UNSUP(0x0047b236, "jump table entry is not a known target"); } }
L_0047b23d:; BB(0x0047b23d);
    /* 0047b23d: movzx edx, byte ptr [ebp + 0x20] */ r_edx = (u32)R8((u32)(r_ebp+0x20u));
    /* 0047b241: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b243: je 0x47b27a */ if (fZ) goto L_0047b27a;
L_0047b245:; BB(0x0047b245);
    /* 0047b245: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b248: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0047b24b: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b24e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b24f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047b252: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0047b255: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b25au); f_0060c9a0();
    /* 0047b25a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b25d: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047b260: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b263: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0047b266: lea eax, [eax + edx + 0x56] */ r_eax = (u32)(r_eax+r_edx+0x56u);
    /* 0047b26a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b26b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b26e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b270: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b273: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0047b276: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b278u); call_ind(t); }
    /* 0047b278: jmp 0x47b2ad */ goto L_0047b2ad;
L_0047b27a:; BB(0x0047b27a);
    /* 0047b27a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b27d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0047b280: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047b283: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b284: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b287: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b28a: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b28fu); f_0060c9a0();
    /* 0047b28f: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047b292: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047b295: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b298: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0047b29b: lea eax, [eax + edx + 0x56] */ r_eax = (u32)(r_eax+r_edx+0x56u);
    /* 0047b29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b2a0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b2a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b2a5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b2a8: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0047b2ab: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b2adu); call_ind(t); }
L_0047b2ad:; BB(0x0047b2ad);
    /* 0047b2ad: jmp 0x47b31f */ goto L_0047b31f;
L_0047b2af:; BB(0x0047b2af);
    /* 0047b2af: movzx ecx, byte ptr [ebp + 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0x20u));
    /* 0047b2b3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b2b5: je 0x47b2ec */ if (fZ) goto L_0047b2ec;
L_0047b2b7:; BB(0x0047b2b7);
    /* 0047b2b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047b2ba: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0047b2bd: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047b2c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b2c1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b2c4: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0047b2c7: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b2ccu); f_0060c9a0();
    /* 0047b2cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b2cf: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047b2d2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047b2d5: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0047b2d8: lea edx, [eax + ecx - 0x55] */ r_edx = (u32)(r_eax+r_ecx+0xffffffabu);
    /* 0047b2dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b2dd: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b2e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047b2e2: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b2e5: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0047b2e8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b2eau); call_ind(t); }
    /* 0047b2ea: jmp 0x47b31f */ goto L_0047b31f;
L_0047b2ec:; BB(0x0047b2ec);
    /* 0047b2ec: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b2ef: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0047b2f2: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047b2f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b2f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b2f9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b2fc: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b301u); f_0060c9a0();
    /* 0047b301: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047b304: imul eax, eax, 0xd */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xdu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047b307: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b30a: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0047b30d: lea eax, [eax + edx - 0x55] */ r_eax = (u32)(r_eax+r_edx+0xffffffabu);
    /* 0047b311: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b312: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b315: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b317: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b31a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0047b31d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b31fu); call_ind(t); }
L_0047b31f:; BB(0x0047b31f);
    /* 0047b31f: movzx ecx, byte ptr [ebp + 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0x20u));
    /* 0047b323: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b325: je 0x47b349 */ if (fZ) goto L_0047b349;
L_0047b327:; BB(0x0047b327);
    /* 0047b327: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b32a: call 0x463d40 */ r_esp -= 4; W32(r_esp, 0x47b32fu); f_00463d40();
    /* 0047b32f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b334: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b337: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047b33a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b33d: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0047b340: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047b342: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047b345: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b347u); call_ind(t); }
    /* 0047b347: jmp 0x47b367 */ goto L_0047b367;
L_0047b349:; BB(0x0047b349);
    /* 0047b349: movzx ecx, byte ptr [ebp + 0x10] */ r_ecx = (u32)R8((u32)(r_ebp+0x10u));
    /* 0047b34d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b34f: je 0x47b35b */ if (fZ) goto L_0047b35b;
L_0047b351:; BB(0x0047b351);
    /* 0047b351: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b354: call 0x463d40 */ r_esp -= 4; W32(r_esp, 0x47b359u); f_00463d40();
    /* 0047b359: jmp 0x47b367 */ goto L_0047b367;
L_0047b35b:; BB(0x0047b35b);
    /* 0047b35b: mov dl, byte ptr [ebp + 0x18] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+0x18u))) & 0xffu);
    /* 0047b35e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b35f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b362: call 0x463db0 */ r_esp -= 4; W32(r_esp, 0x47b367u); f_00463db0();
L_0047b367:; BB(0x0047b367);
    /* 0047b367: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b369: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047b36f: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x47b374u); f_00637810();
    /* 0047b374: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b377: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b37a: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
    /* 0047b380: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b383: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b386: cmp dword ptr [ecx + 0x184], 3 */ {  u32 a = R32((u32)(r_ecx+0x184u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b38d: jle 0x47b3a1 */ if ((fZ||fS!=fO)) goto L_0047b3a1;
L_0047b38f:; BB(0x0047b38f);
    /* 0047b38f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b392: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047b395: mov dword ptr [eax + 0x184], 1 */ W32((u32)(r_eax+0x184u), 0x1u);
    /* 0047b39f: jmp 0x47b3b1 */ goto L_0047b3b1;
L_0047b3a1:; BB(0x0047b3a1);
    /* 0047b3a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b3a4: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b3a7: mov dword ptr [edx + 0x184], 0 */ W32((u32)(r_edx+0x184u), 0x0u);
L_0047b3b1:; BB(0x0047b3b1);
    /* 0047b3b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b3b4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b3b7: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b3bcu); f_0060c9a0();
    /* 0047b3bc: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b3bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b3c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b3c3: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b3c6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b3c9: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b3cc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047b3ce: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047b3d1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b3d3u); call_ind(t); }
    /* 0047b3d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b3d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b3d7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b3da: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0047b3dd: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x47b3e2u); f_005f6050();
    /* 0047b3e2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b3e5: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0047b3e8: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b3edu); f_0060c9a0();
    /* 0047b3ed: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b3f0: cmp dword ptr [ecx + 0x414], eax */ {  u32 a = R32((u32)(r_ecx+0x414u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b3f6: jge 0x47b42d */ if ((fS==fO)) goto L_0047b42d;
L_0047b3f8:; BB(0x0047b3f8);
    /* 0047b3f8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b3fb: mov eax, dword ptr [edx + 0x414] */ r_eax = R32((u32)(r_edx+0x414u));
    /* 0047b401: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b404: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b407: mov dword ptr [ecx + 0x414], eax */ W32((u32)(r_ecx+0x414u), r_eax);
    /* 0047b40d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b410: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0047b413: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b418u); f_0060c9a0();
    /* 0047b418: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b41b: cmp dword ptr [ecx + 0x414], eax */ {  u32 a = R32((u32)(r_ecx+0x414u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b421: jne 0x47b42b */ if (!fZ) goto L_0047b42b;
L_0047b423:; BB(0x0047b423);
    /* 0047b423: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b426: call 0x47f980 */ r_esp -= 4; W32(r_esp, 0x47b42bu); f_0047f980();
L_0047b42b:; BB(0x0047b42b);
    /* 0047b42b: jmp 0x47b45e */ goto L_0047b45e;
L_0047b42d:; BB(0x0047b42d);
    /* 0047b42d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b430: mov eax, dword ptr [edx + 0x4a4] */ r_eax = R32((u32)(r_edx+0x4a4u));
    /* 0047b436: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b439: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b43c: mov dword ptr [ecx + 0x4a4], eax */ W32((u32)(r_ecx+0x4a4u), r_eax);
    /* 0047b442: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b445: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b448: mov ecx, dword ptr [edx + 0x4a4] */ r_ecx = R32((u32)(r_edx+0x4a4u));
    /* 0047b44e: cmp ecx, dword ptr [eax + 0x4a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b454: jne 0x47b45e */ if (!fZ) goto L_0047b45e;
L_0047b456:; BB(0x0047b456);
    /* 0047b456: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b459: call 0x47f980 */ r_esp -= 4; W32(r_esp, 0x47b45eu); f_0047f980();
L_0047b45e:; BB(0x0047b45e);
    /* 0047b45e: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b462: jne 0x47b47f */ if (!fZ) goto L_0047b47f;
L_0047b464:; BB(0x0047b464);
    /* 0047b464: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b467: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b46cu); f_00463e50();
    /* 0047b46c: cmp eax, 0xaf2 */ {  u32 a = r_eax; u32 b = 0xaf2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b471: jne 0x47b47f */ if (!fZ) goto L_0047b47f;
L_0047b473:; BB(0x0047b473);
    /* 0047b473: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0047b47a: jmp 0x47b576 */ goto L_0047b576;
L_0047b47f:; BB(0x0047b47f);
    /* 0047b47f: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b483: jne 0x47b4a0 */ if (!fZ) goto L_0047b4a0;
L_0047b485:; BB(0x0047b485);
    /* 0047b485: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b488: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b48du); f_00463e50();
    /* 0047b48d: cmp eax, 0xaff */ {  u32 a = r_eax; u32 b = 0xaffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b492: jne 0x47b4a0 */ if (!fZ) goto L_0047b4a0;
L_0047b494:; BB(0x0047b494);
    /* 0047b494: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0047b49b: jmp 0x47b576 */ goto L_0047b576;
L_0047b4a0:; BB(0x0047b4a0);
    /* 0047b4a0: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b4a4: jne 0x47b4c1 */ if (!fZ) goto L_0047b4c1;
L_0047b4a6:; BB(0x0047b4a6);
    /* 0047b4a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b4a9: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b4aeu); f_00463e50();
    /* 0047b4ae: cmp eax, 0xb0c */ {  u32 a = r_eax; u32 b = 0xb0cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b4b3: jne 0x47b4c1 */ if (!fZ) goto L_0047b4c1;
L_0047b4b5:; BB(0x0047b4b5);
    /* 0047b4b5: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0047b4bc: jmp 0x47b576 */ goto L_0047b576;
L_0047b4c1:; BB(0x0047b4c1);
    /* 0047b4c1: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b4c5: jne 0x47b4e2 */ if (!fZ) goto L_0047b4e2;
L_0047b4c7:; BB(0x0047b4c7);
    /* 0047b4c7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b4ca: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b4cfu); f_00463e50();
    /* 0047b4cf: cmp eax, 0xb19 */ {  u32 a = r_eax; u32 b = 0xb19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b4d4: jne 0x47b4e2 */ if (!fZ) goto L_0047b4e2;
L_0047b4d6:; BB(0x0047b4d6);
    /* 0047b4d6: mov dword ptr [ebp - 0x14], 1 */ W32((u32)(r_ebp+0xffffffecu), 0x1u);
    /* 0047b4dd: jmp 0x47b576 */ goto L_0047b576;
L_0047b4e2:; BB(0x0047b4e2);
    /* 0047b4e2: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b4e6: jne 0x47b500 */ if (!fZ) goto L_0047b500;
L_0047b4e8:; BB(0x0047b4e8);
    /* 0047b4e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b4eb: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b4f0u); f_00463e50();
    /* 0047b4f0: cmp eax, 0xaf3 */ {  u32 a = r_eax; u32 b = 0xaf3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b4f5: jne 0x47b500 */ if (!fZ) goto L_0047b500;
L_0047b4f7:; BB(0x0047b4f7);
    /* 0047b4f7: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0047b4fe: jmp 0x47b576 */ goto L_0047b576;
L_0047b500:; BB(0x0047b500);
    /* 0047b500: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b504: jne 0x47b51e */ if (!fZ) goto L_0047b51e;
L_0047b506:; BB(0x0047b506);
    /* 0047b506: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b509: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b50eu); f_00463e50();
    /* 0047b50e: cmp eax, 0xb00 */ {  u32 a = r_eax; u32 b = 0xb00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b513: jne 0x47b51e */ if (!fZ) goto L_0047b51e;
L_0047b515:; BB(0x0047b515);
    /* 0047b515: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0047b51c: jmp 0x47b576 */ goto L_0047b576;
L_0047b51e:; BB(0x0047b51e);
    /* 0047b51e: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b522: jne 0x47b53c */ if (!fZ) goto L_0047b53c;
L_0047b524:; BB(0x0047b524);
    /* 0047b524: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b527: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b52cu); f_00463e50();
    /* 0047b52c: cmp eax, 0xb0d */ {  u32 a = r_eax; u32 b = 0xb0du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b531: jne 0x47b53c */ if (!fZ) goto L_0047b53c;
L_0047b533:; BB(0x0047b533);
    /* 0047b533: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0047b53a: jmp 0x47b576 */ goto L_0047b576;
L_0047b53c:; BB(0x0047b53c);
    /* 0047b53c: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b540: jne 0x47b55a */ if (!fZ) goto L_0047b55a;
L_0047b542:; BB(0x0047b542);
    /* 0047b542: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b545: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b54au); f_00463e50();
    /* 0047b54a: cmp eax, 0xb1a */ {  u32 a = r_eax; u32 b = 0xb1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b54f: jne 0x47b55a */ if (!fZ) goto L_0047b55a;
L_0047b551:; BB(0x0047b551);
    /* 0047b551: mov dword ptr [ebp - 0x14], 2 */ W32((u32)(r_ebp+0xffffffecu), 0x2u);
    /* 0047b558: jmp 0x47b576 */ goto L_0047b576;
L_0047b55a:; BB(0x0047b55a);
    /* 0047b55a: cmp dword ptr [ebp + 0x1c], 2 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b55e: jne 0x47b576 */ if (!fZ) goto L_0047b576;
L_0047b560:; BB(0x0047b560);
    /* 0047b560: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b563: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47b568u); f_00463e50();
    /* 0047b568: cmp eax, 0xafb */ {  u32 a = r_eax; u32 b = 0xafbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b56d: jne 0x47b576 */ if (!fZ) goto L_0047b576;
L_0047b56f:; BB(0x0047b56f);
    /* 0047b56f: mov dword ptr [ebp - 0x14], 4 */ W32((u32)(r_ebp+0xffffffecu), 0x4u);
L_0047b576:; BB(0x0047b576);
    /* 0047b576: jmp 0x47b0d7 */ goto L_0047b0d7;
L_0047b57b:; BB(0x0047b57b);
    /* 0047b57b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0047b57e:; BB(0x0047b57e);
    /* 0047b57e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047b581: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047b588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047b589: mov esp, ebp */ r_esp = r_ebp;
    /* 0047b58b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047b58c: ret 0x1c */ FN_RET(0x0047b010); r_esp += 32; return;
}

void f_0047b5b0(void) /* PokerGame::func_0047b5b0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047b5b0);
    /* 0047b5b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047b5b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047b5b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b5b5: push 0x69ff54 */ { u32 v = 0x69ff54u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b5ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0047b5c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b5c1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047b5c4: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047b5c9: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047b5cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b5cc: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0047b5cf: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0047b5d5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0047b5d8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b5da: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47b5dfu); f_00686d82();
    /* 0047b5df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047b5e2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0047b5e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047b5ec: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b5f0: je 0x47b603 */ if (fZ) goto L_0047b603;
L_0047b5f2:; BB(0x0047b5f2);
    /* 0047b5f2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0047b5f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b5f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047b5f9: call 0x463e70 */ r_esp -= 4; W32(r_esp, 0x47b5feu); f_00463e70();
    /* 0047b5fe: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0047b601: jmp 0x47b60a */ goto L_0047b60a;
L_0047b603:; BB(0x0047b603);
    /* 0047b603: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0047b60a:; BB(0x0047b60a);
    /* 0047b60a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0047b60d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0047b610: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047b617: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047b61a: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0047b61d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b61f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b620: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0047b626: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047b629: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b62a: fld1  */ FPUSH(1.0);
    /* 0047b62c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0047b62f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b631: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b633: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b635: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b637: push 0x387 */ { u32 v = 0x387u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b63c: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0047b641: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047b643: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047b649: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0047b64f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b651u); call_ind(t); }
    /* 0047b651: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b654: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0047b657: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b65cu); f_0060c9a0();
    /* 0047b65c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b65f: cmp dword ptr [edx + 0x414], eax */ {  u32 a = R32((u32)(r_edx+0x414u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b665: jge 0x47b681 */ if ((fS==fO)) goto L_0047b681;
L_0047b667:; BB(0x0047b667);
    /* 0047b667: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b66a: mov ecx, dword ptr [eax + 0x414] */ r_ecx = R32((u32)(r_eax+0x414u));
    /* 0047b670: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b671: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b674: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0047b677: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47b67cu); f_0060ca40();
    /* 0047b67c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047b67f: jmp 0x47b6c6 */ goto L_0047b6c6;
L_0047b681:; BB(0x0047b681);
    /* 0047b681: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b684: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0047b687: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b68cu); f_0060c9a0();
    /* 0047b68c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b68f: cmp dword ptr [ecx + 0x4a4], eax */ {  u32 a = R32((u32)(r_ecx+0x4a4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b695: jl 0x47b6ae */ if ((fS!=fO)) goto L_0047b6ae;
L_0047b697:; BB(0x0047b697);
    /* 0047b697: push 0x2ec */ { u32 v = 0x2ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b69c: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b6a1: push 0x6bc77c */ { u32 v = 0x6bc77cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b6a6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47b6abu); f_005e9f20();
    /* 0047b6ab: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047b6ae:; BB(0x0047b6ae);
    /* 0047b6ae: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b6b1: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0047b6b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b6b8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b6bb: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 0047b6be: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47b6c3u); f_0060ca40();
    /* 0047b6c3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0047b6c6:; BB(0x0047b6c6);
    /* 0047b6c6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b6c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b6ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b6cd: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0047b6d0: call 0x60c7d0 */ r_esp -= 4; W32(r_esp, 0x47b6d5u); f_0060c7d0();
    /* 0047b6d5: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b6d8: cmp dword ptr [edx + 8], 0 */ {  u32 a = R32((u32)(r_edx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b6dc: jne 0x47b6e6 */ if (!fZ) goto L_0047b6e6;
L_0047b6de:; BB(0x0047b6de);
    /* 0047b6de: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b6e1: call 0x463b90 */ r_esp -= 4; W32(r_esp, 0x47b6e6u); f_00463b90();
L_0047b6e6:; BB(0x0047b6e6);
    /* 0047b6e6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b6e9: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x47b6eeu); f_0047bbc0();
    /* 0047b6ee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b6f1: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0047b6f5: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0047b6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b6f9: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b6fc: call 0x47bbc0 */ r_esp -= 4; W32(r_esp, 0x47b701u); f_0047bbc0();
    /* 0047b701: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b704: mov edx, dword ptr [ecx + eax*4 + 4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 0047b708: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0047b70b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b70c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b70f: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b712: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b715: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b718: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047b71a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0047b71d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b71fu); call_ind(t); }
    /* 0047b71f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b722: call 0x4c70d0 */ r_esp -= 4; W32(r_esp, 0x47b727u); f_004c70d0();
    /* 0047b727: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b72a: je 0x47b743 */ if (fZ) goto L_0047b743;
L_0047b72c:; BB(0x0047b72c);
    /* 0047b72c: push 0x2f6 */ { u32 v = 0x2f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b731: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b736: push 0x6bc7d0 */ { u32 v = 0x6bc7d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b73b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47b740u); f_005e9f20();
    /* 0047b740: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047b743:; BB(0x0047b743);
    /* 0047b743: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047b746: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0047b749: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b74eu); f_0060c9a0();
    /* 0047b74e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047b751: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047b754: mov dword ptr [ebp - 0x1c], 0x16 */ W32((u32)(r_ebp+0xffffffe4u), 0x16u);
    /* 0047b75b: cmp dword ptr [ebp - 0x14], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b75f: jl 0x47b778 */ if ((fS!=fO)) goto L_0047b778;
L_0047b761:; BB(0x0047b761);
    /* 0047b761: push 0x2f9 */ { u32 v = 0x2f9u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b766: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b76b: push 0x6bc7b8 */ { u32 v = 0x6bc7b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b770: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47b775u); f_005e9f20();
    /* 0047b775: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047b778:; BB(0x0047b778);
    /* 0047b778: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b77a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b77d: call 0x463db0 */ r_esp -= 4; W32(r_esp, 0x47b782u); f_00463db0();
    /* 0047b782: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047b785: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0047b788: cmp dword ptr [ebp - 0x30], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0047b78c: ja 0x47b8c8 */ if ((!fC&&!fZ)) goto L_0047b8c8;
L_0047b792:; BB(0x0047b792);
    /* 0047b792: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0047b795: jmp dword ptr [edx*4 + 0x47b980] */ { u32 t = R32((u32)(r_edx*4+0x47b980u)); switch (t) { case 0x47b79cu: goto L_0047b79c; case 0x47b7ddu: goto L_0047b7dd; case 0x47b81au: goto L_0047b81a; case 0x47b856u: goto L_0047b856; case 0x47b890u: goto L_0047b890; default: UNSUP(0x0047b795, "jump table entry is not a known target"); } }
L_0047b79c:; BB(0x0047b79c);
    /* 0047b79c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b79f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0047b7a2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b7a5: sub ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b7a8: sub ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b7ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b7ac: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047b7af: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0047b7b2: add eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b7b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b7b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b7b9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b7bb: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b7be: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0047b7c1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b7c3u); call_ind(t); }
    /* 0047b7c3: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b7c5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b7c8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b7cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b7ce: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b7d1: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047b7d3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047b7d6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b7d8u); call_ind(t); }
    /* 0047b7d8: jmp 0x47b8c8 */ goto L_0047b8c8;
L_0047b7dd:; BB(0x0047b7dd);
    /* 0047b7dd: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b7e0: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0047b7e3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047b7e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b7e7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b7ea: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0047b7ed: add ecx, 0x56 */ {  u32 a = r_ecx; u32 b = 0x56u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b7f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b7f1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b7f4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047b7f6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b7f9: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0047b7fc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47b7feu); call_ind(t); }
    /* 0047b7fe: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b800: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b803: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b806: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b809: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047b80c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b80e: mov ecx, eax */ r_ecx = r_eax;
    /* 0047b810: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047b813: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b815u); call_ind(t); }
    /* 0047b815: jmp 0x47b8c8 */ goto L_0047b8c8;
L_0047b81a:; BB(0x0047b81a);
    /* 0047b81a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b81d: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0047b820: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0047b823: lea ecx, [edx + eax + 1] */ r_ecx = (u32)(r_edx+r_eax+0x1u);
    /* 0047b827: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b828: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047b82b: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0047b82e: add eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b832: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b835: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b837: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b83a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0047b83d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b83fu); call_ind(t); }
    /* 0047b83f: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b841: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b844: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b847: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b84a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b84d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047b84f: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047b852: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b854u); call_ind(t); }
    /* 0047b854: jmp 0x47b8c8 */ goto L_0047b8c8;
L_0047b856:; BB(0x0047b856);
    /* 0047b856: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b859: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0047b85c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047b85f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b860: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b863: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0047b866: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b869: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b86a: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b86d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047b86f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b872: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0047b875: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47b877u); call_ind(t); }
    /* 0047b877: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b879: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b87c: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b87f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b882: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047b885: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b887: mov ecx, eax */ r_ecx = r_eax;
    /* 0047b889: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047b88c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b88eu); call_ind(t); }
    /* 0047b88e: jmp 0x47b8c8 */ goto L_0047b8c8;
L_0047b890:; BB(0x0047b890);
    /* 0047b890: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047b893: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 0047b896: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047b899: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b89a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047b89d: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0047b8a0: add ecx, 0x63 */ {  u32 a = r_ecx; u32 b = 0x63u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b8a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b8a4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b8a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047b8a9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b8ac: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0047b8af: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47b8b1u); call_ind(t); }
    /* 0047b8b1: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b8b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b8b6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047b8b9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b8bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0047b8bf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047b8c1: mov ecx, eax */ r_ecx = r_eax;
    /* 0047b8c3: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047b8c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47b8c8u); call_ind(t); }
L_0047b8c8:; BB(0x0047b8c8);
    /* 0047b8c8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b8ca: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0047b8d0: call 0x637810 */ r_esp -= 4; W32(r_esp, 0x47b8d5u); f_00637810();
    /* 0047b8d5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b8d8: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0047b8db: mov dword ptr [edx + 0x184], eax */ W32((u32)(r_edx+0x184u), r_eax);
    /* 0047b8e1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b8e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b8e5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047b8e8: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0047b8eb: call 0x5f6050 */ r_esp -= 4; W32(r_esp, 0x47b8f0u); f_005f6050();
    /* 0047b8f0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b8f3: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0047b8f6: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b8fbu); f_0060c9a0();
    /* 0047b8fb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b8fe: cmp dword ptr [ecx + 0x414], eax */ {  u32 a = R32((u32)(r_ecx+0x414u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047b904: jge 0x47b93b */ if ((fS==fO)) goto L_0047b93b;
L_0047b906:; BB(0x0047b906);
    /* 0047b906: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b909: mov eax, dword ptr [edx + 0x414] */ r_eax = R32((u32)(r_edx+0x414u));
    /* 0047b90f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b912: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b915: mov dword ptr [ecx + 0x414], eax */ W32((u32)(r_ecx+0x414u), r_eax);
    /* 0047b91b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b91e: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0047b921: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47b926u); f_0060c9a0();
    /* 0047b926: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b929: cmp dword ptr [ecx + 0x414], eax */ {  u32 a = R32((u32)(r_ecx+0x414u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b92f: jne 0x47b939 */ if (!fZ) goto L_0047b939;
L_0047b931:; BB(0x0047b931);
    /* 0047b931: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b934: call 0x47f980 */ r_esp -= 4; W32(r_esp, 0x47b939u); f_0047f980();
L_0047b939:; BB(0x0047b939);
    /* 0047b939: jmp 0x47b96c */ goto L_0047b96c;
L_0047b93b:; BB(0x0047b93b);
    /* 0047b93b: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b93e: mov eax, dword ptr [edx + 0x4a4] */ r_eax = R32((u32)(r_edx+0x4a4u));
    /* 0047b944: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047b947: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b94a: mov dword ptr [ecx + 0x4a4], eax */ W32((u32)(r_ecx+0x4a4u), r_eax);
    /* 0047b950: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b953: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b956: mov ecx, dword ptr [edx + 0x4a4] */ r_ecx = R32((u32)(r_edx+0x4a4u));
    /* 0047b95c: cmp ecx, dword ptr [eax + 0x4a8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b962: jne 0x47b96c */ if (!fZ) goto L_0047b96c;
L_0047b964:; BB(0x0047b964);
    /* 0047b964: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047b967: call 0x47f980 */ r_esp -= 4; W32(r_esp, 0x47b96cu); f_0047f980();
L_0047b96c:; BB(0x0047b96c);
    /* 0047b96c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047b96f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047b976: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047b977: mov esp, ebp */ r_esp = r_ebp;
    /* 0047b979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047b97a: ret 8 */ FN_RET(0x0047b5b0); r_esp += 12; return;
}

void f_0047bbe0(void) /* PokerGame::func_0047bbe0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047bbe0);
    /* 0047bbe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047bbe1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047bbe3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047bbe4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047bbe7: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047bbeb: jge 0x47bc04 */ if ((fS==fO)) goto L_0047bc04;
L_0047bbed:; BB(0x0047bbed);
    /* 0047bbed: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bbf2: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bbf7: push 0x6bc7f4 */ { u32 v = 0x6bc7f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bbfc: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47bc01u); f_005e9f20();
    /* 0047bc01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047bc04:; BB(0x0047bc04);
    /* 0047bc04: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bc07: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047bc0a: mov dword ptr [ecx + 0x430], edx */ W32((u32)(r_ecx+0x430u), r_edx);
    /* 0047bc10: mov esp, ebp */ r_esp = r_ebp;
    /* 0047bc12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047bc13: ret 4 */ FN_RET(0x0047bbe0); r_esp += 8; return;
}

void f_0047be00(void) /* PokerGame::func_0047be00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047be00);
    /* 0047be00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047be01: mov ebp, esp */ r_ebp = r_esp;
    /* 0047be03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047be04: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047be07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be0a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047be0d: mov dword ptr [eax + 0x418], ecx */ W32((u32)(r_eax+0x418u), r_ecx);
    /* 0047be13: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047be17: jne 0x47c08d */ if (!fZ) goto L_0047c08d;
L_0047be1d:; BB(0x0047be1d);
    /* 0047be1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047be1f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be22: call 0x47bbe0 */ r_esp -= 4; W32(r_esp, 0x47be27u); f_0047bbe0();
    /* 0047be27: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be2a: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047be30: imul eax, eax, 0xfa0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfa0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047be36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047be37: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be3a: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x47be3fu); f_0047bc40();
    /* 0047be3f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be42: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047be48: imul edx, edx, 0x1388 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1388u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047be4e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047be4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be52: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x47be57u); f_0047bc80();
    /* 0047be57: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be5a: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047be60: imul ecx, ecx, 0x2710 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2710u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047be66: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047be67: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be6a: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x47be6fu); f_0047bcc0();
    /* 0047be6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be72: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047be78: imul eax, eax, 0x4e20 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x4e20u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047be7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047be7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be82: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x47be87u); f_0047bd00();
    /* 0047be87: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be8a: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047be90: imul edx, edx, 0x9c4 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x9c4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047be96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047be97: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047be9a: call 0x47bd40 */ r_esp -= 4; W32(r_esp, 0x47be9fu); f_0047bd40();
    /* 0047be9f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bea2: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047bea8: imul ecx, ecx, 0x30d4 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30d4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047beae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047beaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047beb2: call 0x47bd80 */ r_esp -= 4; W32(r_esp, 0x47beb7u); f_0047bd80();
    /* 0047beb7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047beba: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047bec0: imul eax, eax, 0x61a8 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x61a8u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047bec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047bec7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047beca: call 0x47bdc0 */ r_esp -= 4; W32(r_esp, 0x47becfu); f_0047bdc0();
    /* 0047becf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bed2: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x47bed7u); f_0047e170();
    /* 0047bed7: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047beda: je 0x47beed */ if (fZ) goto L_0047beed;
L_0047bedc:; BB(0x0047bedc);
    /* 0047bedc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bedf: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x47bee4u); f_0047d6b0();
    /* 0047bee4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047bee7: jne 0x47bfbd */ if (!fZ) goto L_0047bfbd;
L_0047beed:; BB(0x0047beed);
    /* 0047beed: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bef0: cmp dword ptr [ecx + 0x420], 4 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047bef7: jne 0x47bf27 */ if (!fZ) goto L_0047bf27;
L_0047bef9:; BB(0x0047bef9);
    /* 0047bef9: push 0x6bc9e8 */ { u32 v = 0x6bc9e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047befe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf01: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047bf04: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047bf0a: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf0d: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047bf10: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047bf16: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047bf18: mov ecx, edx */ r_ecx = r_edx;
    /* 0047bf1a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047bf20: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47bf22u); call_ind(t); }
    /* 0047bf22: jmp 0x47bfb8 */ goto L_0047bfb8;
L_0047bf27:; BB(0x0047bf27);
    /* 0047bf27: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf2a: cmp dword ptr [eax + 0x420], 3 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047bf31: jne 0x47bf5c */ if (!fZ) goto L_0047bf5c;
L_0047bf33:; BB(0x0047bf33);
    /* 0047bf33: push 0x6bc9d8 */ { u32 v = 0x6bc9d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bf38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf3b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047bf3e: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047bf44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf47: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047bf4a: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047bf50: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047bf52: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047bf58: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47bf5au); call_ind(t); }
    /* 0047bf5a: jmp 0x47bfb8 */ goto L_0047bfb8;
L_0047bf5c:; BB(0x0047bf5c);
    /* 0047bf5c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf5f: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047bf66: jne 0x47bf91 */ if (!fZ) goto L_0047bf91;
L_0047bf68:; BB(0x0047bf68);
    /* 0047bf68: push 0x6bc9c8 */ { u32 v = 0x6bc9c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bf6d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf70: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047bf73: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047bf79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf7c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047bf7f: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047bf85: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047bf87: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047bf8d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47bf8fu); call_ind(t); }
    /* 0047bf8f: jmp 0x47bfb8 */ goto L_0047bfb8;
L_0047bf91:; BB(0x0047bf91);
    /* 0047bf91: push 0x6bc9b8 */ { u32 v = 0x6bc9b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bf96: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bf99: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047bf9c: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047bfa2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bfa5: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047bfa8: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047bfae: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047bfb0: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047bfb6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47bfb8u); call_ind(t); }
L_0047bfb8:; BB(0x0047bfb8);
    /* 0047bfb8: jmp 0x47c088 */ goto L_0047c088;
L_0047bfbd:; BB(0x0047bfbd);
    /* 0047bfbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bfc0: cmp dword ptr [ecx + 0x420], 4 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047bfc7: jne 0x47bff7 */ if (!fZ) goto L_0047bff7;
L_0047bfc9:; BB(0x0047bfc9);
    /* 0047bfc9: push 0x6bc9a8 */ { u32 v = 0x6bc9a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047bfce: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bfd1: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047bfd4: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047bfda: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bfdd: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047bfe0: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047bfe6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047bfe8: mov ecx, edx */ r_ecx = r_edx;
    /* 0047bfea: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047bff0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47bff2u); call_ind(t); }
    /* 0047bff2: jmp 0x47c088 */ goto L_0047c088;
L_0047bff7:; BB(0x0047bff7);
    /* 0047bff7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047bffa: cmp dword ptr [eax + 0x420], 3 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c001: jne 0x47c02c */ if (!fZ) goto L_0047c02c;
L_0047c003:; BB(0x0047c003);
    /* 0047c003: push 0x6bc998 */ { u32 v = 0x6bc998u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c008: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c00b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c00e: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c014: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c017: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c01a: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c020: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c022: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c028: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c02au); call_ind(t); }
    /* 0047c02a: jmp 0x47c088 */ goto L_0047c088;
L_0047c02c:; BB(0x0047c02c);
    /* 0047c02c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c02f: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c036: jne 0x47c061 */ if (!fZ) goto L_0047c061;
L_0047c038:; BB(0x0047c038);
    /* 0047c038: push 0x6bc988 */ { u32 v = 0x6bc988u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c03d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c040: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c043: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c049: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c04c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c04f: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c055: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c057: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c05d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c05fu); call_ind(t); }
    /* 0047c05f: jmp 0x47c088 */ goto L_0047c088;
L_0047c061:; BB(0x0047c061);
    /* 0047c061: push 0x6bc978 */ { u32 v = 0x6bc978u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c066: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c069: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c06c: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c072: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c075: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c078: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c07e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c080: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c086: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c088u); call_ind(t); }
L_0047c088:; BB(0x0047c088);
    /* 0047c088: jmp 0x47cae8 */ goto L_0047cae8;
L_0047c08d:; BB(0x0047c08d);
    /* 0047c08d: cmp dword ptr [ebp + 8], 9 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c091: jne 0x47c305 */ if (!fZ) goto L_0047c305;
L_0047c097:; BB(0x0047c097);
    /* 0047c097: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c099: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c09c: call 0x47bbe0 */ r_esp -= 4; W32(r_esp, 0x47c0a1u); f_0047bbe0();
    /* 0047c0a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0a4: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c0aa: imul edx, edx, 0x320 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x320u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c0b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c0b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0b4: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x47c0b9u); f_0047bc40();
    /* 0047c0b9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0bc: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c0c2: imul ecx, ecx, 0x3e8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3e8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c0c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c0c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0cc: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x47c0d1u); f_0047bc80();
    /* 0047c0d1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0d4: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c0da: imul eax, eax, 0x7d0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x7d0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c0e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0e4: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x47c0e9u); f_0047bcc0();
    /* 0047c0e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0ec: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c0f2: imul edx, edx, 0xfa0 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xfa0u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c0f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c0f9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c0fc: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x47c101u); f_0047bd00();
    /* 0047c101: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c104: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c10a: imul ecx, ecx, 0x1f4 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x1f4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c110: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c111: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c114: call 0x47bd40 */ r_esp -= 4; W32(r_esp, 0x47c119u); f_0047bd40();
    /* 0047c119: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c11c: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c122: imul eax, eax, 0x9c4 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x9c4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c129: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c12c: call 0x47bd80 */ r_esp -= 4; W32(r_esp, 0x47c131u); f_0047bd80();
    /* 0047c131: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c134: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c13a: imul edx, edx, 0x1388 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1388u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c140: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c141: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c144: call 0x47bdc0 */ r_esp -= 4; W32(r_esp, 0x47c149u); f_0047bdc0();
    /* 0047c149: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c14c: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x47c151u); f_0047e170();
    /* 0047c151: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c154: je 0x47c167 */ if (fZ) goto L_0047c167;
L_0047c156:; BB(0x0047c156);
    /* 0047c156: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c159: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x47c15eu); f_0047d6b0();
    /* 0047c15e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c161: jne 0x47c235 */ if (!fZ) goto L_0047c235;
L_0047c167:; BB(0x0047c167);
    /* 0047c167: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c16a: cmp dword ptr [eax + 0x420], 4 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c171: jne 0x47c19f */ if (!fZ) goto L_0047c19f;
L_0047c173:; BB(0x0047c173);
    /* 0047c173: push 0x6bc968 */ { u32 v = 0x6bc968u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c178: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c17b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c17e: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c184: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c187: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c18a: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c190: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c192: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c198: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c19au); call_ind(t); }
    /* 0047c19a: jmp 0x47c230 */ goto L_0047c230;
L_0047c19f:; BB(0x0047c19f);
    /* 0047c19f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c1a2: cmp dword ptr [eax + 0x420], 3 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c1a9: jne 0x47c1d4 */ if (!fZ) goto L_0047c1d4;
L_0047c1ab:; BB(0x0047c1ab);
    /* 0047c1ab: push 0x6bc958 */ { u32 v = 0x6bc958u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c1b0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c1b3: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c1b6: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c1bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c1bf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c1c2: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c1c8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c1ca: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c1d0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c1d2u); call_ind(t); }
    /* 0047c1d2: jmp 0x47c230 */ goto L_0047c230;
L_0047c1d4:; BB(0x0047c1d4);
    /* 0047c1d4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c1d7: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c1de: jne 0x47c209 */ if (!fZ) goto L_0047c209;
L_0047c1e0:; BB(0x0047c1e0);
    /* 0047c1e0: push 0x6bc948 */ { u32 v = 0x6bc948u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c1e5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c1e8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c1eb: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c1f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c1f4: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c1f7: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c1fd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c1ff: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c205: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c207u); call_ind(t); }
    /* 0047c207: jmp 0x47c230 */ goto L_0047c230;
L_0047c209:; BB(0x0047c209);
    /* 0047c209: push 0x6bc93c */ { u32 v = 0x6bc93cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c20e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c211: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c214: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c21a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c21d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c220: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c226: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c228: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c22e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c230u); call_ind(t); }
L_0047c230:; BB(0x0047c230);
    /* 0047c230: jmp 0x47c300 */ goto L_0047c300;
L_0047c235:; BB(0x0047c235);
    /* 0047c235: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c238: cmp dword ptr [ecx + 0x420], 4 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c23f: jne 0x47c26f */ if (!fZ) goto L_0047c26f;
L_0047c241:; BB(0x0047c241);
    /* 0047c241: push 0x6bc92c */ { u32 v = 0x6bc92cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c246: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c249: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c24c: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047c252: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c255: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c258: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047c25e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047c260: mov ecx, edx */ r_ecx = r_edx;
    /* 0047c262: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c268: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c26au); call_ind(t); }
    /* 0047c26a: jmp 0x47c300 */ goto L_0047c300;
L_0047c26f:; BB(0x0047c26f);
    /* 0047c26f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c272: cmp dword ptr [eax + 0x420], 3 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c279: jne 0x47c2a4 */ if (!fZ) goto L_0047c2a4;
L_0047c27b:; BB(0x0047c27b);
    /* 0047c27b: push 0x6bc91c */ { u32 v = 0x6bc91cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c280: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c283: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c286: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c28c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c28f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c292: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c298: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c29a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c2a0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c2a2u); call_ind(t); }
    /* 0047c2a2: jmp 0x47c300 */ goto L_0047c300;
L_0047c2a4:; BB(0x0047c2a4);
    /* 0047c2a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c2a7: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c2ae: jne 0x47c2d9 */ if (!fZ) goto L_0047c2d9;
L_0047c2b0:; BB(0x0047c2b0);
    /* 0047c2b0: push 0x6bc90c */ { u32 v = 0x6bc90cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c2b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c2b8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c2bb: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c2c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c2c4: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c2c7: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c2cd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c2cf: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c2d5: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c2d7u); call_ind(t); }
    /* 0047c2d7: jmp 0x47c300 */ goto L_0047c300;
L_0047c2d9:; BB(0x0047c2d9);
    /* 0047c2d9: push 0x6bc8fc */ { u32 v = 0x6bc8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c2de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c2e1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c2e4: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c2ea: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c2ed: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c2f0: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c2f6: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c2f8: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c2fe: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c300u); call_ind(t); }
L_0047c300:; BB(0x0047c300);
    /* 0047c300: jmp 0x47cae8 */ goto L_0047cae8;
L_0047c305:; BB(0x0047c305);
    /* 0047c305: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c309: jne 0x47c32b */ if (!fZ) goto L_0047c32b;
L_0047c30b:; BB(0x0047c30b);
    /* 0047c30b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0047c30d: jne 0x47c326 */ if (!fZ) goto L_0047c326;
L_0047c30f:; BB(0x0047c30f);
    /* 0047c30f: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c314: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c319: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c31e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47c323u); f_005e9f20();
    /* 0047c323: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047c326:; BB(0x0047c326);
    /* 0047c326: jmp 0x47cae8 */ goto L_0047cae8;
L_0047c32b:; BB(0x0047c32b);
    /* 0047c32b: cmp dword ptr [ebp + 8], 7 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c32f: jne 0x47c5a2 */ if (!fZ) goto L_0047c5a2;
L_0047c335:; BB(0x0047c335);
    /* 0047c335: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c337: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c33a: call 0x47bbe0 */ r_esp -= 4; W32(r_esp, 0x47c33fu); f_0047bbe0();
    /* 0047c33f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c342: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c348: imul ecx, ecx, 0xc8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xc8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c34e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c34f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c352: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x47c357u); f_0047bc40();
    /* 0047c357: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c35a: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c360: imul eax, eax, 0xfa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c366: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c367: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c36a: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x47c36fu); f_0047bc80();
    /* 0047c36f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c372: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c378: imul edx, edx, 0x1f4 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1f4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c37e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c37f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c382: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x47c387u); f_0047bcc0();
    /* 0047c387: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c38a: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c390: imul ecx, ecx, 0x3e8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3e8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c39a: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x47c39fu); f_0047bd00();
    /* 0047c39f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3a2: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c3a8: imul eax, eax, 0x64 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x64u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c3ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c3ac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3af: call 0x47bd40 */ r_esp -= 4; W32(r_esp, 0x47c3b4u); f_0047bd40();
    /* 0047c3b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3b7: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c3bd: imul edx, edx, 0x1f4 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1f4u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c3c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c3c4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3c7: call 0x47bd80 */ r_esp -= 4; W32(r_esp, 0x47c3ccu); f_0047bd80();
    /* 0047c3cc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3cf: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c3d5: imul ecx, ecx, 0x3e8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3e8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c3db: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c3dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3df: call 0x47bdc0 */ r_esp -= 4; W32(r_esp, 0x47c3e4u); f_0047bdc0();
    /* 0047c3e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3e7: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x47c3ecu); f_0047e170();
    /* 0047c3ec: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c3ef: je 0x47c402 */ if (fZ) goto L_0047c402;
L_0047c3f1:; BB(0x0047c3f1);
    /* 0047c3f1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c3f4: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x47c3f9u); f_0047d6b0();
    /* 0047c3f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c3fc: jne 0x47c4d2 */ if (!fZ) goto L_0047c4d2;
L_0047c402:; BB(0x0047c402);
    /* 0047c402: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c405: cmp dword ptr [edx + 0x420], 4 */ {  u32 a = R32((u32)(r_edx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c40c: jne 0x47c43a */ if (!fZ) goto L_0047c43a;
L_0047c40e:; BB(0x0047c40e);
    /* 0047c40e: push 0x6bc8f0 */ { u32 v = 0x6bc8f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c413: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c416: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c419: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c41f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c422: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c425: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c42b: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c42d: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c433: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c435u); call_ind(t); }
    /* 0047c435: jmp 0x47c4cd */ goto L_0047c4cd;
L_0047c43a:; BB(0x0047c43a);
    /* 0047c43a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c43d: cmp dword ptr [ecx + 0x420], 3 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c444: jne 0x47c471 */ if (!fZ) goto L_0047c471;
L_0047c446:; BB(0x0047c446);
    /* 0047c446: push 0x6bc8e4 */ { u32 v = 0x6bc8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c44b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c44e: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c451: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047c457: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c45a: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c45d: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047c463: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047c465: mov ecx, edx */ r_ecx = r_edx;
    /* 0047c467: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c46d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c46fu); call_ind(t); }
    /* 0047c46f: jmp 0x47c4cd */ goto L_0047c4cd;
L_0047c471:; BB(0x0047c471);
    /* 0047c471: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c474: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c47b: jne 0x47c4a6 */ if (!fZ) goto L_0047c4a6;
L_0047c47d:; BB(0x0047c47d);
    /* 0047c47d: push 0x6bc8d8 */ { u32 v = 0x6bc8d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c482: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c485: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c488: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c48e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c491: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c494: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c49a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c49c: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c4a2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c4a4u); call_ind(t); }
    /* 0047c4a4: jmp 0x47c4cd */ goto L_0047c4cd;
L_0047c4a6:; BB(0x0047c4a6);
    /* 0047c4a6: push 0x6bc8cc */ { u32 v = 0x6bc8ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c4ab: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c4ae: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c4b1: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c4b7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c4ba: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c4bd: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c4c3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c4c5: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c4cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c4cdu); call_ind(t); }
L_0047c4cd:; BB(0x0047c4cd);
    /* 0047c4cd: jmp 0x47c59d */ goto L_0047c59d;
L_0047c4d2:; BB(0x0047c4d2);
    /* 0047c4d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c4d5: cmp dword ptr [ecx + 0x420], 4 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c4dc: jne 0x47c50c */ if (!fZ) goto L_0047c50c;
L_0047c4de:; BB(0x0047c4de);
    /* 0047c4de: push 0x6bc8fc */ { u32 v = 0x6bc8fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c4e3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c4e6: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c4e9: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047c4ef: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c4f2: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c4f5: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047c4fb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047c4fd: mov ecx, edx */ r_ecx = r_edx;
    /* 0047c4ff: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c505: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c507u); call_ind(t); }
    /* 0047c507: jmp 0x47c59d */ goto L_0047c59d;
L_0047c50c:; BB(0x0047c50c);
    /* 0047c50c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c50f: cmp dword ptr [eax + 0x420], 3 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c516: jne 0x47c541 */ if (!fZ) goto L_0047c541;
L_0047c518:; BB(0x0047c518);
    /* 0047c518: push 0x6bc8bc */ { u32 v = 0x6bc8bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c51d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c520: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c523: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c529: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c52c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c52f: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c535: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c537: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c53d: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c53fu); call_ind(t); }
    /* 0047c53f: jmp 0x47c59d */ goto L_0047c59d;
L_0047c541:; BB(0x0047c541);
    /* 0047c541: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c544: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c54b: jne 0x47c576 */ if (!fZ) goto L_0047c576;
L_0047c54d:; BB(0x0047c54d);
    /* 0047c54d: push 0x6bc8ac */ { u32 v = 0x6bc8acu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c552: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c555: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c558: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c55e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c561: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c564: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c56a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c56c: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c572: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c574u); call_ind(t); }
    /* 0047c574: jmp 0x47c59d */ goto L_0047c59d;
L_0047c576:; BB(0x0047c576);
    /* 0047c576: push 0x6bc8a0 */ { u32 v = 0x6bc8a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c57b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c57e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c581: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c587: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c58a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c58d: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c593: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c595: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c59b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c59du); call_ind(t); }
L_0047c59d:; BB(0x0047c59d);
    /* 0047c59d: jmp 0x47cae8 */ goto L_0047cae8;
L_0047c5a2:; BB(0x0047c5a2);
    /* 0047c5a2: cmp dword ptr [ebp + 8], 6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c5a6: jne 0x47c5c8 */ if (!fZ) goto L_0047c5c8;
L_0047c5a8:; BB(0x0047c5a8);
    /* 0047c5a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0047c5aa: jne 0x47c5c3 */ if (!fZ) goto L_0047c5c3;
L_0047c5ac:; BB(0x0047c5ac);
    /* 0047c5ac: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c5b1: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c5b6: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c5bb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47c5c0u); f_005e9f20();
    /* 0047c5c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047c5c3:; BB(0x0047c5c3);
    /* 0047c5c3: jmp 0x47cae8 */ goto L_0047cae8;
L_0047c5c8:; BB(0x0047c5c8);
    /* 0047c5c8: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c5cc: jne 0x47c833 */ if (!fZ) goto L_0047c833;
L_0047c5d2:; BB(0x0047c5d2);
    /* 0047c5d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c5d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c5d7: call 0x47bbe0 */ r_esp -= 4; W32(r_esp, 0x47c5dcu); f_0047bbe0();
    /* 0047c5dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c5df: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c5e5: imul ecx, ecx, 0x28 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x28u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c5e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c5e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c5ec: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x47c5f1u); f_0047bc40();
    /* 0047c5f1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c5f4: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c5fa: imul eax, eax, 0x32 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x32u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c5fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c5fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c601: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x47c606u); f_0047bc80();
    /* 0047c606: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c609: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c60f: imul edx, edx, 0x64 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x64u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c612: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c613: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c616: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x47c61bu); f_0047bcc0();
    /* 0047c61b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c61e: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c624: imul ecx, ecx, 0xc8 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xc8u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c62a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c62b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c62e: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x47c633u); f_0047bd00();
    /* 0047c633: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c636: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c63c: imul eax, eax, 0x19 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x19u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c63f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c640: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c643: call 0x47bd40 */ r_esp -= 4; W32(r_esp, 0x47c648u); f_0047bd40();
    /* 0047c648: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c64b: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c651: imul edx, edx, 0x7d */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x7du; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c654: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c655: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c658: call 0x47bd80 */ r_esp -= 4; W32(r_esp, 0x47c65du); f_0047bd80();
    /* 0047c65d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c660: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c666: imul ecx, ecx, 0xfa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xfau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c66c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c66d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c670: call 0x47bdc0 */ r_esp -= 4; W32(r_esp, 0x47c675u); f_0047bdc0();
    /* 0047c675: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c678: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x47c67du); f_0047e170();
    /* 0047c67d: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c680: je 0x47c693 */ if (fZ) goto L_0047c693;
L_0047c682:; BB(0x0047c682);
    /* 0047c682: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c685: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x47c68au); f_0047d6b0();
    /* 0047c68a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c68d: jne 0x47c763 */ if (!fZ) goto L_0047c763;
L_0047c693:; BB(0x0047c693);
    /* 0047c693: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c696: cmp dword ptr [edx + 0x420], 4 */ {  u32 a = R32((u32)(r_edx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c69d: jne 0x47c6cb */ if (!fZ) goto L_0047c6cb;
L_0047c69f:; BB(0x0047c69f);
    /* 0047c69f: push 0x6bc8cc */ { u32 v = 0x6bc8ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c6a4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c6a7: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c6aa: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c6b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c6b3: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c6b6: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c6bc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c6be: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c6c4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c6c6u); call_ind(t); }
    /* 0047c6c6: jmp 0x47c75e */ goto L_0047c75e;
L_0047c6cb:; BB(0x0047c6cb);
    /* 0047c6cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c6ce: cmp dword ptr [ecx + 0x420], 3 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c6d5: jne 0x47c702 */ if (!fZ) goto L_0047c702;
L_0047c6d7:; BB(0x0047c6d7);
    /* 0047c6d7: push 0x6bc894 */ { u32 v = 0x6bc894u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c6dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c6df: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c6e2: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047c6e8: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c6eb: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c6ee: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047c6f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047c6f6: mov ecx, edx */ r_ecx = r_edx;
    /* 0047c6f8: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c6fe: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c700u); call_ind(t); }
    /* 0047c700: jmp 0x47c75e */ goto L_0047c75e;
L_0047c702:; BB(0x0047c702);
    /* 0047c702: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c705: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c70c: jne 0x47c737 */ if (!fZ) goto L_0047c737;
L_0047c70e:; BB(0x0047c70e);
    /* 0047c70e: push 0x6bc888 */ { u32 v = 0x6bc888u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c713: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c716: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c719: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c71f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c722: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c725: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c72b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c72d: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c733: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c735u); call_ind(t); }
    /* 0047c735: jmp 0x47c75e */ goto L_0047c75e;
L_0047c737:; BB(0x0047c737);
    /* 0047c737: push 0x6bc87c */ { u32 v = 0x6bc87cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c73c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c73f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c742: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c748: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c74b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c74e: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c754: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c756: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c75c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c75eu); call_ind(t); }
L_0047c75e:; BB(0x0047c75e);
    /* 0047c75e: jmp 0x47c82e */ goto L_0047c82e;
L_0047c763:; BB(0x0047c763);
    /* 0047c763: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c766: cmp dword ptr [ecx + 0x420], 4 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c76d: jne 0x47c79d */ if (!fZ) goto L_0047c79d;
L_0047c76f:; BB(0x0047c76f);
    /* 0047c76f: push 0x6bc870 */ { u32 v = 0x6bc870u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c774: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c777: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c77a: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047c780: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c783: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c786: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047c78c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047c78e: mov ecx, edx */ r_ecx = r_edx;
    /* 0047c790: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c796: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c798u); call_ind(t); }
    /* 0047c798: jmp 0x47c82e */ goto L_0047c82e;
L_0047c79d:; BB(0x0047c79d);
    /* 0047c79d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c7a0: cmp dword ptr [eax + 0x420], 3 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c7a7: jne 0x47c7d2 */ if (!fZ) goto L_0047c7d2;
L_0047c7a9:; BB(0x0047c7a9);
    /* 0047c7a9: push 0x6bc864 */ { u32 v = 0x6bc864u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c7ae: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c7b1: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c7b4: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c7ba: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c7bd: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c7c0: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c7c6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c7c8: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c7ce: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c7d0u); call_ind(t); }
    /* 0047c7d0: jmp 0x47c82e */ goto L_0047c82e;
L_0047c7d2:; BB(0x0047c7d2);
    /* 0047c7d2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c7d5: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c7dc: jne 0x47c807 */ if (!fZ) goto L_0047c807;
L_0047c7de:; BB(0x0047c7de);
    /* 0047c7de: push 0x6bc858 */ { u32 v = 0x6bc858u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c7e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c7e6: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c7e9: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c7ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c7f2: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c7f5: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c7fb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c7fd: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c803: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c805u); call_ind(t); }
    /* 0047c805: jmp 0x47c82e */ goto L_0047c82e;
L_0047c807:; BB(0x0047c807);
    /* 0047c807: push 0x6bc84c */ { u32 v = 0x6bc84cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c80c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c80f: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c812: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c818: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c81b: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c81e: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c824: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c826: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c82c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c82eu); call_ind(t); }
L_0047c82e:; BB(0x0047c82e);
    /* 0047c82e: jmp 0x47cae8 */ goto L_0047cae8;
L_0047c833:; BB(0x0047c833);
    /* 0047c833: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c837: jne 0x47c859 */ if (!fZ) goto L_0047c859;
L_0047c839:; BB(0x0047c839);
    /* 0047c839: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0047c83b: jne 0x47c854 */ if (!fZ) goto L_0047c854;
L_0047c83d:; BB(0x0047c83d);
    /* 0047c83d: push 0x449 */ { u32 v = 0x449u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c842: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c847: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c84c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47c851u); f_005e9f20();
    /* 0047c851: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047c854:; BB(0x0047c854);
    /* 0047c854: jmp 0x47cae8 */ goto L_0047cae8;
L_0047c859:; BB(0x0047c859);
    /* 0047c859: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c85d: jne 0x47cabb */ if (!fZ) goto L_0047cabb;
L_0047c863:; BB(0x0047c863);
    /* 0047c863: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c865: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c868: call 0x47bbe0 */ r_esp -= 4; W32(r_esp, 0x47c86du); f_0047bbe0();
    /* 0047c86d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c870: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c876: imul ecx, ecx, 0xa */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xau; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c87a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c87d: call 0x47bc40 */ r_esp -= 4; W32(r_esp, 0x47c882u); f_0047bc40();
    /* 0047c882: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c885: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c88b: imul eax, eax, 0xa */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xau; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c88e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c88f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c892: call 0x47bc80 */ r_esp -= 4; W32(r_esp, 0x47c897u); f_0047bc80();
    /* 0047c897: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c89a: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c8a0: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c8a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c8a4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8a7: call 0x47bcc0 */ r_esp -= 4; W32(r_esp, 0x47c8acu); f_0047bcc0();
    /* 0047c8ac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8af: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c8b5: imul ecx, ecx, 0x32 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x32u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c8b8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c8b9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8bc: call 0x47bd00 */ r_esp -= 4; W32(r_esp, 0x47c8c1u); f_0047bd00();
    /* 0047c8c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8c4: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0047c8ca: imul eax, eax, 5 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x5u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c8cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047c8ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8d1: call 0x47bd40 */ r_esp -= 4; W32(r_esp, 0x47c8d6u); f_0047bd40();
    /* 0047c8d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8d9: mov edx, dword ptr [ecx + 0x420] */ r_edx = R32((u32)(r_ecx+0x420u));
    /* 0047c8df: imul edx, edx, 0x19 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x19u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c8e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c8e3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8e6: call 0x47bd80 */ r_esp -= 4; W32(r_esp, 0x47c8ebu); f_0047bd80();
    /* 0047c8eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8ee: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0047c8f4: imul ecx, ecx, 0x32 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x32u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047c8f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047c8f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c8fb: call 0x47bdc0 */ r_esp -= 4; W32(r_esp, 0x47c900u); f_0047bdc0();
    /* 0047c900: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c903: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x47c908u); f_0047e170();
    /* 0047c908: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c90b: je 0x47c91e */ if (fZ) goto L_0047c91e;
L_0047c90d:; BB(0x0047c90d);
    /* 0047c90d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c910: call 0x47d6b0 */ r_esp -= 4; W32(r_esp, 0x47c915u); f_0047d6b0();
    /* 0047c915: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c918: jne 0x47c9ee */ if (!fZ) goto L_0047c9ee;
L_0047c91e:; BB(0x0047c91e);
    /* 0047c91e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c921: cmp dword ptr [edx + 0x420], 4 */ {  u32 a = R32((u32)(r_edx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c928: jne 0x47c956 */ if (!fZ) goto L_0047c956;
L_0047c92a:; BB(0x0047c92a);
    /* 0047c92a: push 0x6bc840 */ { u32 v = 0x6bc840u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c92f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c932: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c935: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c93b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c93e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c941: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c947: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c949: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c94f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c951u); call_ind(t); }
    /* 0047c951: jmp 0x47c9e9 */ goto L_0047c9e9;
L_0047c956:; BB(0x0047c956);
    /* 0047c956: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c959: cmp dword ptr [ecx + 0x420], 3 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c960: jne 0x47c98d */ if (!fZ) goto L_0047c98d;
L_0047c962:; BB(0x0047c962);
    /* 0047c962: push 0x6bc834 */ { u32 v = 0x6bc834u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c967: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c96a: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c96d: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047c973: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c976: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047c979: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047c97f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047c981: mov ecx, edx */ r_ecx = r_edx;
    /* 0047c983: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c989: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c98bu); call_ind(t); }
    /* 0047c98b: jmp 0x47c9e9 */ goto L_0047c9e9;
L_0047c98d:; BB(0x0047c98d);
    /* 0047c98d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c990: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c997: jne 0x47c9c2 */ if (!fZ) goto L_0047c9c2;
L_0047c999:; BB(0x0047c999);
    /* 0047c999: push 0x6bc828 */ { u32 v = 0x6bc828u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c99e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c9a1: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c9a4: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047c9aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c9ad: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047c9b0: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047c9b6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047c9b8: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047c9be: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47c9c0u); call_ind(t); }
    /* 0047c9c0: jmp 0x47c9e9 */ goto L_0047c9e9;
L_0047c9c2:; BB(0x0047c9c2);
    /* 0047c9c2: push 0x6bc820 */ { u32 v = 0x6bc820u; r_esp -= 4; W32(r_esp, v); }
    /* 0047c9c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c9ca: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c9cd: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c9d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c9d6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047c9d9: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047c9df: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047c9e1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047c9e7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47c9e9u); call_ind(t); }
L_0047c9e9:; BB(0x0047c9e9);
    /* 0047c9e9: jmp 0x47cab9 */ goto L_0047cab9;
L_0047c9ee:; BB(0x0047c9ee);
    /* 0047c9ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047c9f1: cmp dword ptr [ecx + 0x420], 4 */ {  u32 a = R32((u32)(r_ecx+0x420u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047c9f8: jne 0x47ca28 */ if (!fZ) goto L_0047ca28;
L_0047c9fa:; BB(0x0047c9fa);
    /* 0047c9fa: push 0x6bc84c */ { u32 v = 0x6bc84cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047c9ff: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca02: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047ca05: mov ecx, dword ptr [eax + 0x1e8] */ r_ecx = R32((u32)(r_eax+0x1e8u));
    /* 0047ca0b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca0e: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0047ca11: mov edx, dword ptr [eax + 0x1e8] */ r_edx = R32((u32)(r_eax+0x1e8u));
    /* 0047ca17: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0047ca19: mov ecx, edx */ r_ecx = r_edx;
    /* 0047ca1b: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047ca21: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47ca23u); call_ind(t); }
    /* 0047ca23: jmp 0x47cab9 */ goto L_0047cab9;
L_0047ca28:; BB(0x0047ca28);
    /* 0047ca28: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca2b: cmp dword ptr [eax + 0x420], 3 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ca32: jne 0x47ca5d */ if (!fZ) goto L_0047ca5d;
L_0047ca34:; BB(0x0047ca34);
    /* 0047ca34: push 0x6bc814 */ { u32 v = 0x6bc814u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ca39: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca3c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047ca3f: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047ca45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca48: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047ca4b: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047ca51: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047ca53: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047ca59: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47ca5bu); call_ind(t); }
    /* 0047ca5b: jmp 0x47cab9 */ goto L_0047cab9;
L_0047ca5d:; BB(0x0047ca5d);
    /* 0047ca5d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca60: cmp dword ptr [eax + 0x420], 2 */ {  u32 a = R32((u32)(r_eax+0x420u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ca67: jne 0x47ca92 */ if (!fZ) goto L_0047ca92;
L_0047ca69:; BB(0x0047ca69);
    /* 0047ca69: push 0x6bc808 */ { u32 v = 0x6bc808u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ca6e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca71: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047ca74: mov eax, dword ptr [edx + 0x1e8] */ r_eax = R32((u32)(r_edx+0x1e8u));
    /* 0047ca7a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca7d: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047ca80: mov ecx, dword ptr [edx + 0x1e8] */ r_ecx = R32((u32)(r_edx+0x1e8u));
    /* 0047ca86: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047ca88: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047ca8e: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47ca90u); call_ind(t); }
    /* 0047ca90: jmp 0x47cab9 */ goto L_0047cab9;
L_0047ca92:; BB(0x0047ca92);
    /* 0047ca92: push 0x6bc800 */ { u32 v = 0x6bc800u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ca97: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ca9a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047ca9d: mov edx, dword ptr [ecx + 0x1e8] */ r_edx = R32((u32)(r_ecx+0x1e8u));
    /* 0047caa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047caa6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047caa9: mov ecx, dword ptr [ecx + 0x1e8] */ r_ecx = R32((u32)(r_ecx+0x1e8u));
    /* 0047caaf: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047cab1: mov eax, dword ptr [edx + 0xb4] */ r_eax = R32((u32)(r_edx+0xb4u));
    /* 0047cab7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47cab9u); call_ind(t); }
L_0047cab9:; BB(0x0047cab9);
    /* 0047cab9: jmp 0x47cae8 */ goto L_0047cae8;
L_0047cabb:; BB(0x0047cabb);
    /* 0047cabb: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047cabf: jne 0x47cade */ if (!fZ) goto L_0047cade;
L_0047cac1:; BB(0x0047cac1);
    /* 0047cac1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0047cac3: jne 0x47cadc */ if (!fZ) goto L_0047cadc;
L_0047cac5:; BB(0x0047cac5);
    /* 0047cac5: push 0x46e */ { u32 v = 0x46eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047caca: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cacf: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cad4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47cad9u); f_005e9f20();
    /* 0047cad9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047cadc:; BB(0x0047cadc);
    /* 0047cadc: jmp 0x47cae8 */ goto L_0047cae8;
L_0047cade:; BB(0x0047cade);
    /* 0047cade: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cae0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cae3: call 0x47bbe0 */ r_esp -= 4; W32(r_esp, 0x47cae8u); f_0047bbe0();
L_0047cae8:; BB(0x0047cae8);
    /* 0047cae8: mov esp, ebp */ r_esp = r_ebp;
    /* 0047caea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047caeb: ret 4 */ FN_RET(0x0047be00); r_esp += 8; return;
}

void f_0047cb10(void) /* PokerGame::func_0047cb10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047cb10);
    /* 0047cb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb11: mov ebp, esp */ r_ebp = r_esp;
    /* 0047cb13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047cb17: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047cb1b: jge 0x47cb34 */ if ((fS==fO)) goto L_0047cb34;
L_0047cb1d:; BB(0x0047cb1d);
    /* 0047cb1d: push 0x47e */ { u32 v = 0x47eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb22: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb27: push 0x6bca10 */ { u32 v = 0x6bca10u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb2c: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47cb31u); f_005e9f20();
    /* 0047cb31: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047cb34:; BB(0x0047cb34);
    /* 0047cb34: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047cb38: jle 0x47cb51 */ if ((fZ||fS!=fO)) goto L_0047cb51;
L_0047cb3a:; BB(0x0047cb3a);
    /* 0047cb3a: push 0x47f */ { u32 v = 0x47fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb3f: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb44: push 0x6bc9fc */ { u32 v = 0x6bc9fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb49: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47cb4eu); f_005e9f20();
    /* 0047cb4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047cb51:; BB(0x0047cb51);
    /* 0047cb51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cb54: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047cb57: mov dword ptr [edx + 0x420], eax */ W32((u32)(r_edx+0x420u), r_eax);
    /* 0047cb5d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cb60: call 0x47caf0 */ r_esp -= 4; W32(r_esp, 0x47cb65u); f_0047caf0();
    /* 0047cb65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047cb66: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cb69: call 0x47be00 */ r_esp -= 4; W32(r_esp, 0x47cb6eu); f_0047be00();
    /* 0047cb6e: mov esp, ebp */ r_esp = r_ebp;
    /* 0047cb70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047cb71: ret 4 */ FN_RET(0x0047cb10); r_esp += 8; return;
}

void f_0047ce80(void) /* PokerGame::func_0047ce80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ce80);
    /* 0047ce80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ce81: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ce83: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047ce86: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047ce89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ce8c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047ce8f: mov dword ptr [eax + 0x45c], ecx */ W32((u32)(r_eax+0x45cu), r_ecx);
    /* 0047ce95: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ce98: mov eax, dword ptr [edx + 0x45c] */ r_eax = R32((u32)(r_edx+0x45cu));
    /* 0047ce9e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047cea1: cmp dword ptr [ebp - 8], 0x16 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0047cea5: ja 0x47d60c */ if ((!fC&&!fZ)) goto L_0047d60c;
L_0047ceab:; BB(0x0047ceab);
    /* 0047ceab: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ceae: jmp dword ptr [ecx*4 + 0x47d630] */ { u32 t = R32((u32)(r_ecx*4+0x47d630u)); switch (t) { case 0x47ceb5u: goto L_0047ceb5; case 0x47cf00u: goto L_0047cf00; case 0x47cf4bu: goto L_0047cf4b; case 0x47cfa0u: goto L_0047cfa0; case 0x47cff5u: goto L_0047cff5; case 0x47d054u: goto L_0047d054; case 0x47d09fu: goto L_0047d09f; case 0x47d0eau: goto L_0047d0ea; case 0x47d135u: goto L_0047d135; case 0x47d180u: goto L_0047d180; case 0x47d1d5u: goto L_0047d1d5; case 0x47d22au: goto L_0047d22a; case 0x47d289u: goto L_0047d289; case 0x47d2d4u: goto L_0047d2d4; case 0x47d31fu: goto L_0047d31f; case 0x47d36au: goto L_0047d36a; case 0x47d3bfu: goto L_0047d3bf; case 0x47d414u: goto L_0047d414; case 0x47d469u: goto L_0047d469; case 0x47d4beu: goto L_0047d4be; case 0x47d513u: goto L_0047d513; case 0x47d55eu: goto L_0047d55e; case 0x47d5b0u: goto L_0047d5b0; default: UNSUP(0x0047ceae, "jump table entry is not a known target"); } }
L_0047ceb5:; BB(0x0047ceb5);
    /* 0047ceb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ceb7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ceba: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47cebfu); f_0047d6d0();
    /* 0047cebf: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cec1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cec4: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47cec9u); f_0047e1b0();
    /* 0047cec9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cecb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cece: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47ced3u); f_0047e2a0();
    /* 0047ced3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ced5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ced8: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47ceddu); f_0047e260();
    /* 0047cedd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cedf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cee2: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47cee7u); f_0047d710();
    /* 0047cee7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cee9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ceec: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47cef1u); f_0047d790();
    /* 0047cef1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cef3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cef6: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47cefbu); f_0047d7d0();
    /* 0047cefb: jmp 0x47d627 */ goto L_0047d627;
L_0047cf00:; BB(0x0047cf00);
    /* 0047cf00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf02: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf05: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47cf0au); f_0047d6d0();
    /* 0047cf0a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf0c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf0f: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47cf14u); f_0047e1b0();
    /* 0047cf14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf19: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47cf1eu); f_0047e2a0();
    /* 0047cf1e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf23: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47cf28u); f_0047e260();
    /* 0047cf28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf2a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf2d: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47cf32u); f_0047d710();
    /* 0047cf32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf37: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47cf3cu); f_0047d790();
    /* 0047cf3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf41: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47cf46u); f_0047d7d0();
    /* 0047cf46: jmp 0x47d627 */ goto L_0047d627;
L_0047cf4b:; BB(0x0047cf4b);
    /* 0047cf4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf4d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf50: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47cf55u); f_0047d6d0();
    /* 0047cf55: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf57: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf5a: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47cf5fu); f_0047e1b0();
    /* 0047cf5f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf61: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf64: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47cf69u); f_0047e2a0();
    /* 0047cf69: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf6b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf6e: call 0x47d690 */ r_esp -= 4; W32(r_esp, 0x47cf73u); f_0047d690();
    /* 0047cf73: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf75: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf78: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47cf7du); f_0047e260();
    /* 0047cf7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf82: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47cf87u); f_0047d710();
    /* 0047cf87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf89: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf8c: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47cf91u); f_0047d790();
    /* 0047cf91: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cf93: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cf96: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47cf9bu); f_0047d7d0();
    /* 0047cf9b: jmp 0x47d627 */ goto L_0047d627;
L_0047cfa0:; BB(0x0047cfa0);
    /* 0047cfa0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfa2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfa5: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47cfaau); f_0047d6d0();
    /* 0047cfaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfac: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfaf: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47cfb4u); f_0047e1b0();
    /* 0047cfb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfb6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfb9: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47cfbeu); f_0047e2a0();
    /* 0047cfbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfc0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfc3: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47cfc8u); f_0047e260();
    /* 0047cfc8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfcd: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47cfd2u); f_0047d710();
    /* 0047cfd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfd7: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47cfdcu); f_0047d750();
    /* 0047cfdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfde: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfe1: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47cfe6u); f_0047d790();
    /* 0047cfe6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cfe8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cfeb: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47cff0u); f_0047d7d0();
    /* 0047cff0: jmp 0x47d627 */ goto L_0047d627;
L_0047cff5:; BB(0x0047cff5);
    /* 0047cff5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047cff7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047cffa: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47cfffu); f_0047d6d0();
    /* 0047cfff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d001: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d004: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d009u); f_0047e1b0();
    /* 0047d009: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d00b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d00e: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d013u); f_0047e2a0();
    /* 0047d013: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d015: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d018: call 0x47d690 */ r_esp -= 4; W32(r_esp, 0x47d01du); f_0047d690();
    /* 0047d01d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d01f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d022: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d027u); f_0047e260();
    /* 0047d027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d029: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d02c: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d031u); f_0047d710();
    /* 0047d031: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d033: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d036: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d03bu); f_0047d750();
    /* 0047d03b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d03d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d040: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d045u); f_0047d790();
    /* 0047d045: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d047: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d04a: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d04fu); f_0047d7d0();
    /* 0047d04f: jmp 0x47d627 */ goto L_0047d627;
L_0047d054:; BB(0x0047d054);
    /* 0047d054: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d056: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d059: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d05eu); f_0047d6d0();
    /* 0047d05e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d060: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d063: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d068u); f_0047e1b0();
    /* 0047d068: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d06a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d06d: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d072u); f_0047e2a0();
    /* 0047d072: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d074: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d077: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d07cu); f_0047e260();
    /* 0047d07c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d07e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d081: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d086u); f_0047d710();
    /* 0047d086: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d088: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d08b: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d090u); f_0047d790();
    /* 0047d090: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d092: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d095: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d09au); f_0047d7d0();
    /* 0047d09a: jmp 0x47d627 */ goto L_0047d627;
L_0047d09f:; BB(0x0047d09f);
    /* 0047d09f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0a1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0a4: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d0a9u); f_0047d6d0();
    /* 0047d0a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0ab: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0ae: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d0b3u); f_0047e1b0();
    /* 0047d0b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0b5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0b8: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d0bdu); f_0047e2a0();
    /* 0047d0bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0c2: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d0c7u); f_0047e260();
    /* 0047d0c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0cc: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d0d1u); f_0047d710();
    /* 0047d0d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0d3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0d6: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d0dbu); f_0047d790();
    /* 0047d0db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0e0: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d0e5u); f_0047d7d0();
    /* 0047d0e5: jmp 0x47d627 */ goto L_0047d627;
L_0047d0ea:; BB(0x0047d0ea);
    /* 0047d0ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0ec: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0ef: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d0f4u); f_0047d6d0();
    /* 0047d0f4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d0f6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d0f9: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d0feu); f_0047e1b0();
    /* 0047d0fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d100: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d103: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d108u); f_0047e2a0();
    /* 0047d108: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d10a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d10d: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d112u); f_0047e260();
    /* 0047d112: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d114: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d117: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d11cu); f_0047d710();
    /* 0047d11c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d11e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d121: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d126u); f_0047d790();
    /* 0047d126: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d128: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d12b: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d130u); f_0047d7d0();
    /* 0047d130: jmp 0x47d627 */ goto L_0047d627;
L_0047d135:; BB(0x0047d135);
    /* 0047d135: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d137: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d13a: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d13fu); f_0047d6d0();
    /* 0047d13f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d141: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d144: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d149u); f_0047e1b0();
    /* 0047d149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d14b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d14e: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d153u); f_0047e2a0();
    /* 0047d153: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d155: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d158: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d15du); f_0047e260();
    /* 0047d15d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d15f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d162: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d167u); f_0047d710();
    /* 0047d167: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d169: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d16c: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d171u); f_0047d790();
    /* 0047d171: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d173: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d176: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d17bu); f_0047d7d0();
    /* 0047d17b: jmp 0x47d627 */ goto L_0047d627;
L_0047d180:; BB(0x0047d180);
    /* 0047d180: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d182: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d185: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d18au); f_0047d6d0();
    /* 0047d18a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d18c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d18f: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d194u); f_0047e1b0();
    /* 0047d194: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d196: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d199: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d19eu); f_0047e2a0();
    /* 0047d19e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1a0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1a3: call 0x47d690 */ r_esp -= 4; W32(r_esp, 0x47d1a8u); f_0047d690();
    /* 0047d1a8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1ad: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d1b2u); f_0047e260();
    /* 0047d1b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1b4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1b7: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d1bcu); f_0047d710();
    /* 0047d1bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1be: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1c1: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d1c6u); f_0047d790();
    /* 0047d1c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1c8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1cb: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d1d0u); f_0047d7d0();
    /* 0047d1d0: jmp 0x47d627 */ goto L_0047d627;
L_0047d1d5:; BB(0x0047d1d5);
    /* 0047d1d5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1d7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1da: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d1dfu); f_0047d6d0();
    /* 0047d1df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1e1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1e4: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d1e9u); f_0047e1b0();
    /* 0047d1e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1ee: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d1f3u); f_0047e2a0();
    /* 0047d1f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d1f8: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d1fdu); f_0047e260();
    /* 0047d1fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d1ff: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d202: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d207u); f_0047d710();
    /* 0047d207: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d209: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d20c: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d211u); f_0047d750();
    /* 0047d211: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d213: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d216: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d21bu); f_0047d790();
    /* 0047d21b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d21d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d220: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d225u); f_0047d7d0();
    /* 0047d225: jmp 0x47d627 */ goto L_0047d627;
L_0047d22a:; BB(0x0047d22a);
    /* 0047d22a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d22c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d22f: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d234u); f_0047d6d0();
    /* 0047d234: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d236: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d239: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d23eu); f_0047e1b0();
    /* 0047d23e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d240: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d243: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d248u); f_0047e2a0();
    /* 0047d248: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d24a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d24d: call 0x47d690 */ r_esp -= 4; W32(r_esp, 0x47d252u); f_0047d690();
    /* 0047d252: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d254: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d257: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d25cu); f_0047e260();
    /* 0047d25c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d25e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d261: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d266u); f_0047d710();
    /* 0047d266: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d268: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d26b: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d270u); f_0047d750();
    /* 0047d270: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d272: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d275: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d27au); f_0047d790();
    /* 0047d27a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d27c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d27f: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d284u); f_0047d7d0();
    /* 0047d284: jmp 0x47d627 */ goto L_0047d627;
L_0047d289:; BB(0x0047d289);
    /* 0047d289: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d28b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d28e: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d293u); f_0047d6d0();
    /* 0047d293: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d295: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d298: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d29du); f_0047e1b0();
    /* 0047d29d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d29f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2a2: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d2a7u); f_0047e2a0();
    /* 0047d2a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2ac: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d2b1u); f_0047e260();
    /* 0047d2b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2b3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2b6: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d2bbu); f_0047d710();
    /* 0047d2bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2c0: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d2c5u); f_0047d790();
    /* 0047d2c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2c7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2ca: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d2cfu); f_0047d7d0();
    /* 0047d2cf: jmp 0x47d627 */ goto L_0047d627;
L_0047d2d4:; BB(0x0047d2d4);
    /* 0047d2d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2d6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2d9: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d2deu); f_0047d6d0();
    /* 0047d2de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2e0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2e3: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d2e8u); f_0047e1b0();
    /* 0047d2e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2ea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2ed: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d2f2u); f_0047e2a0();
    /* 0047d2f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2f4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d2f7: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d2fcu); f_0047e260();
    /* 0047d2fc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d2fe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d301: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d306u); f_0047d710();
    /* 0047d306: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d308: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d30b: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d310u); f_0047d790();
    /* 0047d310: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d312: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d315: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d31au); f_0047d7d0();
    /* 0047d31a: jmp 0x47d627 */ goto L_0047d627;
L_0047d31f:; BB(0x0047d31f);
    /* 0047d31f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d321: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d324: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d329u); f_0047d6d0();
    /* 0047d329: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d32b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d32e: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d333u); f_0047e1b0();
    /* 0047d333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d335: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d338: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d33du); f_0047e2a0();
    /* 0047d33d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d33f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d342: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d347u); f_0047e260();
    /* 0047d347: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d349: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d34c: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d351u); f_0047d710();
    /* 0047d351: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d353: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d356: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d35bu); f_0047d790();
    /* 0047d35b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d35d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d360: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d365u); f_0047d7d0();
    /* 0047d365: jmp 0x47d627 */ goto L_0047d627;
L_0047d36a:; BB(0x0047d36a);
    /* 0047d36a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d36c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d36f: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d374u); f_0047d6d0();
    /* 0047d374: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d376: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d379: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d37eu); f_0047e1b0();
    /* 0047d37e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d380: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d383: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d388u); f_0047e2a0();
    /* 0047d388: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d38a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d38d: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d392u); f_0047e260();
    /* 0047d392: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d394: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d397: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d39cu); f_0047d710();
    /* 0047d39c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d39e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3a1: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d3a6u); f_0047d750();
    /* 0047d3a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3a8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3ab: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d3b0u); f_0047d790();
    /* 0047d3b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3b5: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d3bau); f_0047d7d0();
    /* 0047d3ba: jmp 0x47d627 */ goto L_0047d627;
L_0047d3bf:; BB(0x0047d3bf);
    /* 0047d3bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3c4: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d3c9u); f_0047d6d0();
    /* 0047d3c9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3cb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3ce: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d3d3u); f_0047e1b0();
    /* 0047d3d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3d5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3d8: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d3ddu); f_0047e2a0();
    /* 0047d3dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3df: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3e2: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d3e7u); f_0047e260();
    /* 0047d3e7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3ec: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d3f1u); f_0047d710();
    /* 0047d3f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3f3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d3f6: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d3fbu); f_0047d750();
    /* 0047d3fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d3fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d400: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d405u); f_0047d790();
    /* 0047d405: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d407: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d40a: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d40fu); f_0047d7d0();
    /* 0047d40f: jmp 0x47d627 */ goto L_0047d627;
L_0047d414:; BB(0x0047d414);
    /* 0047d414: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d416: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d419: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d41eu); f_0047d6d0();
    /* 0047d41e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d420: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d423: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d428u); f_0047e1b0();
    /* 0047d428: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d42a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d42d: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d432u); f_0047e2a0();
    /* 0047d432: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d434: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d437: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d43cu); f_0047e260();
    /* 0047d43c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d43e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d441: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d446u); f_0047d710();
    /* 0047d446: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d448: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d44b: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d450u); f_0047d750();
    /* 0047d450: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d452: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d455: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d45au); f_0047d790();
    /* 0047d45a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d45c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d45f: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d464u); f_0047d7d0();
    /* 0047d464: jmp 0x47d627 */ goto L_0047d627;
L_0047d469:; BB(0x0047d469);
    /* 0047d469: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d46b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d46e: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d473u); f_0047d6d0();
    /* 0047d473: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d475: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d478: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d47du); f_0047e1b0();
    /* 0047d47d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d47f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d482: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d487u); f_0047e2a0();
    /* 0047d487: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d489: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d48c: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d491u); f_0047e260();
    /* 0047d491: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d493: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d496: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d49bu); f_0047d710();
    /* 0047d49b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d49d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4a0: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d4a5u); f_0047d750();
    /* 0047d4a5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4a7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4aa: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d4afu); f_0047d790();
    /* 0047d4af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4b1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4b4: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d4b9u); f_0047d7d0();
    /* 0047d4b9: jmp 0x47d627 */ goto L_0047d627;
L_0047d4be:; BB(0x0047d4be);
    /* 0047d4be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4c0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4c3: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d4c8u); f_0047d6d0();
    /* 0047d4c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4ca: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4cd: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d4d2u); f_0047e1b0();
    /* 0047d4d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4d4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4d7: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d4dcu); f_0047e2a0();
    /* 0047d4dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4de: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4e1: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d4e6u); f_0047e260();
    /* 0047d4e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4eb: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d4f0u); f_0047d710();
    /* 0047d4f0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4f5: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d4fau); f_0047d750();
    /* 0047d4fa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d4fc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d4ff: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d504u); f_0047d790();
    /* 0047d504: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d506: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d509: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d50eu); f_0047d7d0();
    /* 0047d50e: jmp 0x47d627 */ goto L_0047d627;
L_0047d513:; BB(0x0047d513);
    /* 0047d513: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d515: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d518: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d51du); f_0047d6d0();
    /* 0047d51d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d51f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d522: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d527u); f_0047e1b0();
    /* 0047d527: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d529: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d52c: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d531u); f_0047e2a0();
    /* 0047d531: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d533: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d536: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d53bu); f_0047e260();
    /* 0047d53b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d53d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d540: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d545u); f_0047d710();
    /* 0047d545: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d547: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d54a: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d54fu); f_0047d790();
    /* 0047d54f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d551: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d554: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d559u); f_0047d7d0();
    /* 0047d559: jmp 0x47d627 */ goto L_0047d627;
L_0047d55e:; BB(0x0047d55e);
    /* 0047d55e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d560: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d563: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d568u); f_0047d6d0();
    /* 0047d568: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d56a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d56d: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d572u); f_0047e1b0();
    /* 0047d572: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d574: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d577: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d57cu); f_0047e2a0();
    /* 0047d57c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d57e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d581: call 0x47d690 */ r_esp -= 4; W32(r_esp, 0x47d586u); f_0047d690();
    /* 0047d586: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d588: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d58b: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d590u); f_0047e260();
    /* 0047d590: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d592: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d595: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d59au); f_0047d710();
    /* 0047d59a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d59c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d59f: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d5a4u); f_0047d790();
    /* 0047d5a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5a6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5a9: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d5aeu); f_0047d7d0();
    /* 0047d5ae: jmp 0x47d627 */ goto L_0047d627;
L_0047d5b0:; BB(0x0047d5b0);
    /* 0047d5b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5b5: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47d5bau); f_0047d6d0();
    /* 0047d5ba: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5bc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5bf: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47d5c4u); f_0047e1b0();
    /* 0047d5c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5c9: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47d5ceu); f_0047e2a0();
    /* 0047d5ce: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5d0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5d3: call 0x47d690 */ r_esp -= 4; W32(r_esp, 0x47d5d8u); f_0047d690();
    /* 0047d5d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5da: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5dd: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47d5e2u); f_0047e260();
    /* 0047d5e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5e4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5e7: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47d5ecu); f_0047d710();
    /* 0047d5ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5ee: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5f1: call 0x47d750 */ r_esp -= 4; W32(r_esp, 0x47d5f6u); f_0047d750();
    /* 0047d5f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d5f8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d5fb: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47d600u); f_0047d790();
    /* 0047d600: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d602: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d605: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47d60au); f_0047d7d0();
    /* 0047d60a: jmp 0x47d627 */ goto L_0047d627;
L_0047d60c:; BB(0x0047d60c);
    /* 0047d60c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0047d60e: jne 0x47d627 */ if (!fZ) goto L_0047d627;
L_0047d610:; BB(0x0047d610);
    /* 0047d610: push 0x5e8 */ { u32 v = 0x5e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d615: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d61a: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d61f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47d624u); f_005e9f20();
    /* 0047d624: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047d627:; BB(0x0047d627);
    /* 0047d627: mov esp, ebp */ r_esp = r_ebp;
    /* 0047d629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047d62a: ret 4 */ FN_RET(0x0047ce80); r_esp += 8; return;
}

void f_0047d810(void) /* PokerGame::func_0047d810 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047d810);
    /* 0047d810: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047d811: mov ebp, esp */ r_ebp = r_esp;
    /* 0047d813: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047d816: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047d819: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d81c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047d81f: mov dword ptr [eax + 0x458], ecx */ W32((u32)(r_eax+0x458u), r_ecx);
    /* 0047d825: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d828: mov eax, dword ptr [edx + 0x458] */ r_eax = R32((u32)(r_edx+0x458u));
    /* 0047d82e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047d831: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047d834: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047d837: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047d83a: cmp dword ptr [ebp - 8], 0x18 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0047d83e: ja 0x47e034 */ if ((!fC&&!fZ)) goto L_0047e034;
L_0047d844:; BB(0x0047d844);
    /* 0047d844: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047d847: jmp dword ptr [edx*4 + 0x47e100] */ { u32 t = R32((u32)(r_edx*4+0x47e100u)); switch (t) { case 0x47dfecu: goto L_0047dfec; case 0x47d84eu: goto L_0047d84e; case 0x47d899u: goto L_0047d899; case 0x47d8e4u: goto L_0047d8e4; case 0x47d92fu: goto L_0047d92f; case 0x47d97au: goto L_0047d97a; case 0x47d9c5u: goto L_0047d9c5; case 0x47da10u: goto L_0047da10; case 0x47da5bu: goto L_0047da5b; case 0x47daafu: goto L_0047daaf; case 0x47db03u: goto L_0047db03; case 0x47db57u: goto L_0047db57; case 0x47dbabu: goto L_0047dbab; case 0x47dbffu: goto L_0047dbff; case 0x47dc53u: goto L_0047dc53; case 0x47dca7u: goto L_0047dca7; case 0x47dcfbu: goto L_0047dcfb; case 0x47dd4fu: goto L_0047dd4f; case 0x47dda3u: goto L_0047dda3; case 0x47ddf7u: goto L_0047ddf7; case 0x47de4bu: goto L_0047de4b; case 0x47de9fu: goto L_0047de9f; case 0x47def3u: goto L_0047def3; case 0x47df47u: goto L_0047df47; case 0x47df9bu: goto L_0047df9b; default: UNSUP(0x0047d847, "jump table entry is not a known target"); } }
L_0047d84e:; BB(0x0047d84e);
    /* 0047d84e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d850: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d852: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d854: push 0x6bcbb0 */ { u32 v = 0x6bcbb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d859: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47d85eu); f_00630f40();
    /* 0047d85e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047d861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047d862: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d865: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047d868: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47d86du); f_005f73e0();
    /* 0047d86d: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d872: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d875: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d878: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047d87e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d881: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d884: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047d88a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047d88c: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047d892: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47d894u); call_ind(t); }
    /* 0047d894: jmp 0x47e04f */ goto L_0047e04f;
L_0047d899:; BB(0x0047d899);
    /* 0047d899: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d89b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d89d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d89f: push 0x6bcb98 */ { u32 v = 0x6bcb98u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8a4: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47d8a9u); f_00630f40();
    /* 0047d8a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047d8ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8ad: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d8b0: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047d8b3: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47d8b8u); f_005f73e0();
    /* 0047d8b8: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8bd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d8c0: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d8c3: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047d8c9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d8cc: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d8cf: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047d8d5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047d8d7: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047d8dd: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47d8dfu); call_ind(t); }
    /* 0047d8df: jmp 0x47e04f */ goto L_0047e04f;
L_0047d8e4:; BB(0x0047d8e4);
    /* 0047d8e4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8e8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8ea: push 0x6bcb7c */ { u32 v = 0x6bcb7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8ef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47d8f4u); f_00630f40();
    /* 0047d8f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047d8f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047d8f8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d8fb: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047d8fe: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47d903u); f_005f73e0();
    /* 0047d903: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d908: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d90b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d90e: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047d914: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d917: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d91a: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047d920: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047d922: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047d928: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47d92au); call_ind(t); }
    /* 0047d92a: jmp 0x47e04f */ goto L_0047e04f;
L_0047d92f:; BB(0x0047d92f);
    /* 0047d92f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d931: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d933: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d935: push 0x6bcb68 */ { u32 v = 0x6bcb68u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d93a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47d93fu); f_00630f40();
    /* 0047d93f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047d942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047d943: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d946: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047d949: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47d94eu); f_005f73e0();
    /* 0047d94e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d953: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d956: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d959: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047d95f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d962: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d965: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047d96b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047d96d: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047d973: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47d975u); call_ind(t); }
    /* 0047d975: jmp 0x47e04f */ goto L_0047e04f;
L_0047d97a:; BB(0x0047d97a);
    /* 0047d97a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d97c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d97e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d980: push 0x6bcb50 */ { u32 v = 0x6bcb50u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d985: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47d98au); f_00630f40();
    /* 0047d98a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047d98d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047d98e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d991: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047d994: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47d999u); f_005f73e0();
    /* 0047d999: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d99e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d9a1: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d9a4: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047d9aa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d9ad: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d9b0: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047d9b6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047d9b8: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047d9be: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47d9c0u); call_ind(t); }
    /* 0047d9c0: jmp 0x47e04f */ goto L_0047e04f;
L_0047d9c5:; BB(0x0047d9c5);
    /* 0047d9c5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d9c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d9c9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d9cb: push 0x6bcb3c */ { u32 v = 0x6bcb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047d9d0: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47d9d5u); f_00630f40();
    /* 0047d9d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047d9d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047d9d9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d9dc: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047d9df: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47d9e4u); f_005f73e0();
    /* 0047d9e4: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047d9e9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d9ec: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d9ef: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047d9f5: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047d9f8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047d9fb: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047da01: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047da03: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047da09: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47da0bu); call_ind(t); }
    /* 0047da0b: jmp 0x47e04f */ goto L_0047e04f;
L_0047da10:; BB(0x0047da10);
    /* 0047da10: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da14: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0047da16: push 0x6bcb20 */ { u32 v = 0x6bcb20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da1b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47da20u); f_00630f40();
    /* 0047da20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047da23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047da24: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047da27: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047da2a: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47da2fu); f_005f73e0();
    /* 0047da2f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047da37: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047da3a: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047da40: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047da43: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047da46: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047da4c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047da4e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047da54: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47da56u); call_ind(t); }
    /* 0047da56: jmp 0x47e04f */ goto L_0047e04f;
L_0047da5b:; BB(0x0047da5b);
    /* 0047da5b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da5d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da5f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da61: push 0x6bcbb0 */ { u32 v = 0x6bcbb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da66: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47da6bu); f_00630f40();
    /* 0047da6b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047da6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047da6f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047da72: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047da75: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47da7au); f_005f73e0();
    /* 0047da7a: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047da7f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47da84u); f_00630f40();
    /* 0047da84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047da87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047da88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047da8b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047da8e: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047da94: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047da97: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047da9a: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047daa0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047daa2: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047daa8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47daaau); call_ind(t); }
    /* 0047daaa: jmp 0x47e04f */ goto L_0047e04f;
L_0047daaf:; BB(0x0047daaf);
    /* 0047daaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dab1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dab3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dab5: push 0x6bcb98 */ { u32 v = 0x6bcb98u; r_esp -= 4; W32(r_esp, v); }
    /* 0047daba: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dabfu); f_00630f40();
    /* 0047dabf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dac3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dac6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dac9: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47daceu); f_005f73e0();
    /* 0047dace: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dad3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dad8u); f_00630f40();
    /* 0047dad8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dadb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dadc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dadf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dae2: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dae8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047daeb: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047daee: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047daf4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047daf6: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dafc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dafeu); call_ind(t); }
    /* 0047dafe: jmp 0x47e04f */ goto L_0047e04f;
L_0047db03:; BB(0x0047db03);
    /* 0047db03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db07: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db09: push 0x6bcb7c */ { u32 v = 0x6bcb7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047db0e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47db13u); f_00630f40();
    /* 0047db13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047db16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047db17: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047db1a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047db1d: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47db22u); f_005f73e0();
    /* 0047db22: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db27: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47db2cu); f_00630f40();
    /* 0047db2c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047db2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047db30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047db33: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047db36: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047db3c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047db3f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047db42: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047db48: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047db4a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047db50: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47db52u); call_ind(t); }
    /* 0047db52: jmp 0x47e04f */ goto L_0047e04f;
L_0047db57:; BB(0x0047db57);
    /* 0047db57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db5b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db5d: push 0x6bcb68 */ { u32 v = 0x6bcb68u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db62: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47db67u); f_00630f40();
    /* 0047db67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047db6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047db6b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047db6e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047db71: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47db76u); f_005f73e0();
    /* 0047db76: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047db7b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47db80u); f_00630f40();
    /* 0047db80: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047db83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047db84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047db87: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047db8a: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047db90: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047db93: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047db96: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047db9c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047db9e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dba4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dba6u); call_ind(t); }
    /* 0047dba6: jmp 0x47e04f */ goto L_0047e04f;
L_0047dbab:; BB(0x0047dbab);
    /* 0047dbab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dbad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dbaf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dbb1: push 0x6bcb50 */ { u32 v = 0x6bcb50u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dbb6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dbbbu); f_00630f40();
    /* 0047dbbb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dbbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dbbf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dbc2: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dbc5: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47dbcau); f_005f73e0();
    /* 0047dbca: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dbcf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dbd4u); f_00630f40();
    /* 0047dbd4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dbd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dbd8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dbdb: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dbde: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dbe4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dbe7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dbea: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dbf0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dbf2: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dbf8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dbfau); call_ind(t); }
    /* 0047dbfa: jmp 0x47e04f */ goto L_0047e04f;
L_0047dbff:; BB(0x0047dbff);
    /* 0047dbff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc03: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc05: push 0x6bcb3c */ { u32 v = 0x6bcb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc0a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dc0fu); f_00630f40();
    /* 0047dc0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dc12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc13: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dc16: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dc19: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47dc1eu); f_005f73e0();
    /* 0047dc1e: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc23: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dc28u); f_00630f40();
    /* 0047dc28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dc2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dc2f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dc32: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dc38: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dc3b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dc3e: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dc44: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dc46: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dc4c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dc4eu); call_ind(t); }
    /* 0047dc4e: jmp 0x47e04f */ goto L_0047e04f;
L_0047dc53:; BB(0x0047dc53);
    /* 0047dc53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc57: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc59: push 0x6bcb20 */ { u32 v = 0x6bcb20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc5e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dc63u); f_00630f40();
    /* 0047dc63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dc66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc67: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dc6a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dc6d: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47dc72u); f_005f73e0();
    /* 0047dc72: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc77: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dc7cu); f_00630f40();
    /* 0047dc7c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dc7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dc80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dc83: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dc86: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dc8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dc8f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dc92: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dc98: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dc9a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dca0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dca2u); call_ind(t); }
    /* 0047dca2: jmp 0x47e04f */ goto L_0047e04f;
L_0047dca7:; BB(0x0047dca7);
    /* 0047dca7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dca9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dcab: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dcad: push 0x6bcaec */ { u32 v = 0x6bcaecu; r_esp -= 4; W32(r_esp, v); }
    /* 0047dcb2: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dcb7u); f_00630f40();
    /* 0047dcb7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dcba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dcbb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dcbe: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dcc1: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47dcc6u); f_005f73e0();
    /* 0047dcc6: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dccb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dcd0u); f_00630f40();
    /* 0047dcd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dcd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dcd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dcd7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dcda: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dce0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dce3: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dce6: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dcec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dcee: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dcf4: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dcf6u); call_ind(t); }
    /* 0047dcf6: jmp 0x47e04f */ goto L_0047e04f;
L_0047dcfb:; BB(0x0047dcfb);
    /* 0047dcfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dcfd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dcff: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd01: push 0x6bcad8 */ { u32 v = 0x6bcad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd06: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dd0bu); f_00630f40();
    /* 0047dd0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dd0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd0f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dd12: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dd15: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47dd1au); f_005f73e0();
    /* 0047dd1a: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd1f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dd24u); f_00630f40();
    /* 0047dd24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dd27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd28: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dd2b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dd2e: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dd34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dd37: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dd3a: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dd40: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dd42: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dd48: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dd4au); call_ind(t); }
    /* 0047dd4a: jmp 0x47e04f */ goto L_0047e04f;
L_0047dd4f:; BB(0x0047dd4f);
    /* 0047dd4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd53: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd55: push 0x6bcac4 */ { u32 v = 0x6bcac4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd5a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dd5fu); f_00630f40();
    /* 0047dd5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dd62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dd66: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dd69: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47dd6eu); f_005f73e0();
    /* 0047dd6e: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd73: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dd78u); f_00630f40();
    /* 0047dd78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dd7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dd7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dd7f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dd82: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dd88: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dd8b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dd8e: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dd94: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dd96: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dd9c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dd9eu); call_ind(t); }
    /* 0047dd9e: jmp 0x47e04f */ goto L_0047e04f;
L_0047dda3:; BB(0x0047dda3);
    /* 0047dda3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dda5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dda7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dda9: push 0x6bcaac */ { u32 v = 0x6bcaacu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ddae: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47ddb3u); f_00630f40();
    /* 0047ddb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ddb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ddb7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ddba: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047ddbd: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47ddc2u); f_005f73e0();
    /* 0047ddc2: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ddc7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47ddccu); f_00630f40();
    /* 0047ddcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ddcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ddd0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ddd3: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047ddd6: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dddc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dddf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dde2: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dde8: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047ddea: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047ddf0: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47ddf2u); call_ind(t); }
    /* 0047ddf2: jmp 0x47e04f */ goto L_0047e04f;
L_0047ddf7:; BB(0x0047ddf7);
    /* 0047ddf7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ddf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ddfb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ddfd: push 0x6bca98 */ { u32 v = 0x6bca98u; r_esp -= 4; W32(r_esp, v); }
    /* 0047de02: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47de07u); f_00630f40();
    /* 0047de07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047de0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047de0b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047de0e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047de11: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47de16u); f_005f73e0();
    /* 0047de16: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047de1b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47de20u); f_00630f40();
    /* 0047de20: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047de23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047de24: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047de27: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047de2a: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047de30: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047de33: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047de36: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047de3c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047de3e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047de44: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47de46u); call_ind(t); }
    /* 0047de46: jmp 0x47e04f */ goto L_0047e04f;
L_0047de4b:; BB(0x0047de4b);
    /* 0047de4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047de4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047de4f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047de51: push 0x6bca84 */ { u32 v = 0x6bca84u; r_esp -= 4; W32(r_esp, v); }
    /* 0047de56: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47de5bu); f_00630f40();
    /* 0047de5b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047de5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047de5f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047de62: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047de65: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47de6au); f_005f73e0();
    /* 0047de6a: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047de6f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47de74u); f_00630f40();
    /* 0047de74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047de77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047de78: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047de7b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047de7e: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047de84: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047de87: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047de8a: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047de90: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047de92: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047de98: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47de9au); call_ind(t); }
    /* 0047de9a: jmp 0x47e04f */ goto L_0047e04f;
L_0047de9f:; BB(0x0047de9f);
    /* 0047de9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dea1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dea3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dea5: push 0x6bca6c */ { u32 v = 0x6bca6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047deaa: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47deafu); f_00630f40();
    /* 0047deaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047deb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047deb3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047deb6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047deb9: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47debeu); f_005f73e0();
    /* 0047debe: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dec3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dec8u); f_00630f40();
    /* 0047dec8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047decb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047decc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047decf: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047ded2: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047ded8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dedb: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dede: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dee4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dee6: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047deec: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47deeeu); call_ind(t); }
    /* 0047deee: jmp 0x47e04f */ goto L_0047e04f;
L_0047def3:; BB(0x0047def3);
    /* 0047def3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047def5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047def7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047def9: push 0x6bca54 */ { u32 v = 0x6bca54u; r_esp -= 4; W32(r_esp, v); }
    /* 0047defe: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47df03u); f_00630f40();
    /* 0047df03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047df06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047df07: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047df0a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047df0d: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47df12u); f_005f73e0();
    /* 0047df12: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047df17: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47df1cu); f_00630f40();
    /* 0047df1c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047df1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047df20: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047df23: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047df26: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047df2c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047df2f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047df32: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047df38: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047df3a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047df40: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47df42u); call_ind(t); }
    /* 0047df42: jmp 0x47e04f */ goto L_0047e04f;
L_0047df47:; BB(0x0047df47);
    /* 0047df47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047df49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047df4b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047df4d: push 0x6bca3c */ { u32 v = 0x6bca3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047df52: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47df57u); f_00630f40();
    /* 0047df57: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047df5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047df5b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047df5e: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047df61: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47df66u); f_005f73e0();
    /* 0047df66: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047df6b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47df70u); f_00630f40();
    /* 0047df70: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047df73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047df74: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047df77: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047df7a: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047df80: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047df83: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047df86: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047df8c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047df8e: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047df94: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47df96u); call_ind(t); }
    /* 0047df96: jmp 0x47e04f */ goto L_0047e04f;
L_0047df9b:; BB(0x0047df9b);
    /* 0047df9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047df9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047df9f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dfa1: push 0x6bca24 */ { u32 v = 0x6bca24u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dfa6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dfabu); f_00630f40();
    /* 0047dfab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dfae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dfaf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dfb2: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047dfb5: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47dfbau); f_005f73e0();
    /* 0047dfba: push 0x6bcb08 */ { u32 v = 0x6bcb08u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dfbf: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dfc4u); f_00630f40();
    /* 0047dfc4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dfc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047dfc8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dfcb: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dfce: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047dfd4: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047dfd7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047dfda: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047dfe0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047dfe2: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047dfe8: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47dfeau); call_ind(t); }
    /* 0047dfea: jmp 0x47e04f */ goto L_0047e04f;
L_0047dfec:; BB(0x0047dfec);
    /* 0047dfec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dfee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dff0: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0047dff2: push 0x6bcb3c */ { u32 v = 0x6bcb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047dff7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x47dffcu); f_00630f40();
    /* 0047dffc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047dfff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e000: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e003: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0047e006: call 0x5f73e0 */ r_esp -= 4; W32(r_esp, 0x47e00bu); f_005f73e0();
    /* 0047e00b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e010: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e013: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047e016: mov eax, dword ptr [edx + 0x1e4] */ r_eax = R32((u32)(r_edx+0x1e4u));
    /* 0047e01c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e01f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0047e022: mov ecx, dword ptr [edx + 0x1e4] */ r_ecx = R32((u32)(r_edx+0x1e4u));
    /* 0047e028: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0047e02a: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0047e030: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47e032u); call_ind(t); }
    /* 0047e032: jmp 0x47e04f */ goto L_0047e04f;
L_0047e034:; BB(0x0047e034);
    /* 0047e034: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047e036: jne 0x47e04f */ if (!fZ) goto L_0047e04f;
L_0047e038:; BB(0x0047e038);
    /* 0047e038: push 0x698 */ { u32 v = 0x698u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e03d: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e042: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e047: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47e04cu); f_005e9f20();
    /* 0047e04c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047e04f:; BB(0x0047e04f);
    /* 0047e04f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e052: mov eax, dword ptr [edx + 0x458] */ r_eax = R32((u32)(r_edx+0x458u));
    /* 0047e058: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047e05b: cmp dword ptr [ebp - 0xc], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e05f: je 0x47e06f */ if (fZ) goto L_0047e06f;
L_0047e061:; BB(0x0047e061);
    /* 0047e061: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e065: jl 0x47e0cb */ if ((fS!=fO)) goto L_0047e0cb;
L_0047e067:; BB(0x0047e067);
    /* 0047e067: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e06b: jle 0x47e0b7 */ if ((fZ||fS!=fO)) goto L_0047e0b7;
L_0047e06d:; BB(0x0047e06d);
    /* 0047e06d: jmp 0x47e0cb */ goto L_0047e0cb;
L_0047e06f:; BB(0x0047e06f);
    /* 0047e06f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047e071: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e074: call 0x47d6d0 */ r_esp -= 4; W32(r_esp, 0x47e079u); f_0047d6d0();
    /* 0047e079: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047e07b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e07e: call 0x47e1b0 */ r_esp -= 4; W32(r_esp, 0x47e083u); f_0047e1b0();
    /* 0047e083: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e085: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e088: call 0x47e2a0 */ r_esp -= 4; W32(r_esp, 0x47e08du); f_0047e2a0();
    /* 0047e08d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047e08f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e092: call 0x47e260 */ r_esp -= 4; W32(r_esp, 0x47e097u); f_0047e260();
    /* 0047e097: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e099: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e09c: call 0x47d710 */ r_esp -= 4; W32(r_esp, 0x47e0a1u); f_0047d710();
    /* 0047e0a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e0a3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e0a6: call 0x47d790 */ r_esp -= 4; W32(r_esp, 0x47e0abu); f_0047d790();
    /* 0047e0ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e0ad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e0b0: call 0x47d7d0 */ r_esp -= 4; W32(r_esp, 0x47e0b5u); f_0047d7d0();
    /* 0047e0b5: jmp 0x47e0e6 */ goto L_0047e0e6;
L_0047e0b7:; BB(0x0047e0b7);
    /* 0047e0b7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e0ba: mov edx, dword ptr [ecx + 0x458] */ r_edx = R32((u32)(r_ecx+0x458u));
    /* 0047e0c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047e0c1: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e0c4: call 0x47ce80 */ r_esp -= 4; W32(r_esp, 0x47e0c9u); f_0047ce80();
    /* 0047e0c9: jmp 0x47e0e6 */ goto L_0047e0e6;
L_0047e0cb:; BB(0x0047e0cb);
    /* 0047e0cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047e0cd: jne 0x47e0e6 */ if (!fZ) goto L_0047e0e6;
L_0047e0cf:; BB(0x0047e0cf);
    /* 0047e0cf: push 0x6c0 */ { u32 v = 0x6c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e0d4: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e0d9: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e0de: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47e0e3u); f_005e9f20();
    /* 0047e0e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047e0e6:; BB(0x0047e0e6);
    /* 0047e0e6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e0e9: call 0x47caf0 */ r_esp -= 4; W32(r_esp, 0x47e0eeu); f_0047caf0();
    /* 0047e0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047e0ef: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e0f2: call 0x47be00 */ r_esp -= 4; W32(r_esp, 0x47e0f7u); f_0047be00();
    /* 0047e0f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e0f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e0fa: ret 4 */ FN_RET(0x0047d810); r_esp += 8; return;
}

void f_0047e2c0(void) /* PokerGame::func_0047e2c0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e2c0);
    /* 0047e2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e2c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047e2c6: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047e2c9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e2cc: mov ecx, dword ptr [eax + 0x45c] */ r_ecx = R32((u32)(r_eax+0x45cu));
    /* 0047e2d2: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047e2d5: cmp dword ptr [ebp - 8], 0xd */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0047e2d9: ja 0x47e31a */ if ((!fC&&!fZ)) goto L_0047e31a;
L_0047e2db:; BB(0x0047e2db);
    /* 0047e2db: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e2de: movzx eax, byte ptr [edx + 0x47e378] */ r_eax = (u32)R8((u32)(r_edx+0x47e378u));
    /* 0047e2e5: jmp dword ptr [eax*4 + 0x47e35c] */ { u32 t = R32((u32)(r_eax*4+0x47e35cu)); switch (t) { case 0x47e2ecu: goto L_0047e2ec; case 0x47e2f0u: goto L_0047e2f0; case 0x47e2f7u: goto L_0047e2f7; case 0x47e2feu: goto L_0047e2fe; case 0x47e305u: goto L_0047e305; case 0x47e30cu: goto L_0047e30c; case 0x47e313u: goto L_0047e313; default: UNSUP(0x0047e2e5, "jump table entry is not a known target"); } }
L_0047e2ec:; BB(0x0047e2ec);
    /* 0047e2ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047e2ee: jmp 0x47e356 */ goto L_0047e356;
L_0047e2f0:; BB(0x0047e2f0);
    /* 0047e2f0: mov eax, 6 */ r_eax = 0x6u;
    /* 0047e2f5: jmp 0x47e356 */ goto L_0047e356;
L_0047e2f7:; BB(0x0047e2f7);
    /* 0047e2f7: mov eax, 2 */ r_eax = 0x2u;
    /* 0047e2fc: jmp 0x47e356 */ goto L_0047e356;
L_0047e2fe:; BB(0x0047e2fe);
    /* 0047e2fe: mov eax, 7 */ r_eax = 0x7u;
    /* 0047e303: jmp 0x47e356 */ goto L_0047e356;
L_0047e305:; BB(0x0047e305);
    /* 0047e305: mov eax, 1 */ r_eax = 0x1u;
    /* 0047e30a: jmp 0x47e356 */ goto L_0047e356;
L_0047e30c:; BB(0x0047e30c);
    /* 0047e30c: mov eax, 5 */ r_eax = 0x5u;
    /* 0047e311: jmp 0x47e356 */ goto L_0047e356;
L_0047e313:; BB(0x0047e313);
    /* 0047e313: mov eax, 3 */ r_eax = 0x3u;
    /* 0047e318: jmp 0x47e356 */ goto L_0047e356;
L_0047e31a:; BB(0x0047e31a);
    /* 0047e31a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0047e31c: jne 0x47e335 */ if (!fZ) goto L_0047e335;
L_0047e31e:; BB(0x0047e31e);
    /* 0047e31e: push 0x713 */ { u32 v = 0x713u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e323: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e328: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e32d: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47e332u); f_005e9f20();
    /* 0047e332: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047e335:; BB(0x0047e335);
    /* 0047e335: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047e337: jmp 0x47e356 */ goto L_0047e356;
L_0047e356:; BB(0x0047e356);
    /* 0047e356: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e358: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e359: ret  */ FN_RET(0x0047e2c0); r_esp += 4; return;
}

void f_0047e490(void) /* PokerGame::func_0047e490 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047e490);
    /* 0047e490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047e491: mov ebp, esp */ r_ebp = r_esp;
    /* 0047e493: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047e496: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047e499: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047e4a0: jmp 0x47e4ab */ goto L_0047e4ab;
L_0047e4a2:; BB(0x0047e4a2);
    /* 0047e4a2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e4a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047e4a8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0047e4ab:; BB(0x0047e4ab);
    /* 0047e4ab: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0047e4b1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x47e4b6u); f_0047f950();
    /* 0047e4b6: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047e4b9: jge 0x47e4d6 */ if ((fS==fO)) goto L_0047e4d6;
L_0047e4bb:; BB(0x0047e4bb);
    /* 0047e4bb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e4be: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047e4c1: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0047e4c5: call 0x4c7050 */ r_esp -= 4; W32(r_esp, 0x47e4cau); f_004c7050();
    /* 0047e4ca: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047e4cd: jne 0x47e4d4 */ if (!fZ) goto L_0047e4d4;
L_0047e4cf:; BB(0x0047e4cf);
    /* 0047e4cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047e4d2: jmp 0x47e4f4 */ goto L_0047e4f4;
L_0047e4d4:; BB(0x0047e4d4);
    /* 0047e4d4: jmp 0x47e4a2 */ goto L_0047e4a2;
L_0047e4d6:; BB(0x0047e4d6);
    /* 0047e4d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047e4d8: jne 0x47e4f1 */ if (!fZ) goto L_0047e4f1;
L_0047e4da:; BB(0x0047e4da);
    /* 0047e4da: push 0x74a */ { u32 v = 0x74au; r_esp -= 4; W32(r_esp, v); }
    /* 0047e4df: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e4e4: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047e4e9: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47e4eeu); f_005e9f20();
    /* 0047e4ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047e4f1:; BB(0x0047e4f1);
    /* 0047e4f1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0047e4f4:; BB(0x0047e4f4);
    /* 0047e4f4: mov esp, ebp */ r_esp = r_ebp;
    /* 0047e4f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047e4f7: ret 4 */ FN_RET(0x0047e490); r_esp += 8; return;
}

void f_0047edd0(void) /* PokerGame::func_0047edd0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047edd0);
    /* 0047edd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047edd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047edd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047edd4: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047edd7: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047eddb: jge 0x47edf4 */ if ((fS==fO)) goto L_0047edf4;
L_0047eddd:; BB(0x0047eddd);
    /* 0047eddd: push 0x80d */ { u32 v = 0x80du; r_esp -= 4; W32(r_esp, v); }
    /* 0047ede2: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ede7: push 0x6bcc5c */ { u32 v = 0x6bcc5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047edec: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47edf1u); f_005e9f20();
    /* 0047edf1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047edf4:; BB(0x0047edf4);
    /* 0047edf4: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047edf8: jle 0x47ee11 */ if ((fZ||fS!=fO)) goto L_0047ee11;
L_0047edfa:; BB(0x0047edfa);
    /* 0047edfa: push 0x80e */ { u32 v = 0x80eu; r_esp -= 4; W32(r_esp, v); }
    /* 0047edff: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ee04: push 0x6bcc4c */ { u32 v = 0x6bcc4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ee09: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47ee0eu); f_005e9f20();
    /* 0047ee0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047ee11:; BB(0x0047ee11);
    /* 0047ee11: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ee15: jle 0x47ee25 */ if ((fZ||fS!=fO)) goto L_0047ee25;
L_0047ee17:; BB(0x0047ee17);
    /* 0047ee17: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee1a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047ee1d: mov dword ptr [edx + 0x484], eax */ W32((u32)(r_edx+0x484u), r_eax);
    /* 0047ee23: jmp 0x47ee27 */ goto L_0047ee27;
L_0047ee25:; BB(0x0047ee25);
    /* 0047ee25: jmp 0x47ee83 */ goto L_0047ee83;
L_0047ee27:; BB(0x0047ee27);
    /* 0047ee27: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee2a: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0047ee2d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0047ee30: sub eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047ee33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047ee34: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee37: mov edx, dword ptr [ecx + 0x484] */ r_edx = R32((u32)(r_ecx+0x484u));
    /* 0047ee3d: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047ee40: imul edx, edx, 0xd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0047ee43: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee46: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0047ee49: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0047ee4c: lea ecx, [edx + eax + 0x56] */ r_ecx = (u32)(r_edx+r_eax+0x56u);
    /* 0047ee50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ee51: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee54: mov eax, dword ptr [edx + 0x4a0] */ r_eax = R32((u32)(r_edx+0x4a0u));
    /* 0047ee5a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee5d: mov ecx, dword ptr [ecx + 0x4a0] */ r_ecx = R32((u32)(r_ecx+0x4a0u));
    /* 0047ee63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047ee65: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0047ee68: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ee6au); call_ind(t); }
    /* 0047ee6a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee6d: mov edx, dword ptr [ecx + 0x4a0] */ r_edx = R32((u32)(r_ecx+0x4a0u));
    /* 0047ee73: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ee76: mov ecx, dword ptr [eax + 0x4a0] */ r_ecx = R32((u32)(r_eax+0x4a0u));
    /* 0047ee7c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047ee7e: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0047ee81: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47ee83u); call_ind(t); }
L_0047ee83:; BB(0x0047ee83);
    /* 0047ee83: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ee85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ee86: ret 4 */ FN_RET(0x0047edd0); r_esp += 8; return;
}

void f_0047ee90(void) /* PokerGame::func_0047ee90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047ee90);
    /* 0047ee90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047ee91: mov ebp, esp */ r_ebp = r_esp;
    /* 0047ee93: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047ee96: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0047ee99: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047ee9c: cmp dword ptr [eax + 0x484], 0 */ {  u32 a = R32((u32)(r_eax+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047eea3: jg 0x47eebc */ if ((!fZ&&fS==fO)) goto L_0047eebc;
L_0047eea5:; BB(0x0047eea5);
    /* 0047eea5: push 0x81b */ { u32 v = 0x81bu; r_esp -= 4; W32(r_esp, v); }
    /* 0047eeaa: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eeaf: push 0x6bcc88 */ { u32 v = 0x6bcc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eeb4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47eeb9u); f_005e9f20();
    /* 0047eeb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047eebc:; BB(0x0047eebc);
    /* 0047eebc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047eebf: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0047eec2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047eec5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47eecau); f_0060c9a0();
    /* 0047eeca: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047eecd: je 0x47eee6 */ if (fZ) goto L_0047eee6;
L_0047eecf:; BB(0x0047eecf);
    /* 0047eecf: push 0x81c */ { u32 v = 0x81cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047eed4: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eed9: push 0x6bcc6c */ { u32 v = 0x6bcc6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047eede: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47eee3u); f_005e9f20();
    /* 0047eee3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047eee6:; BB(0x0047eee6);
    /* 0047eee6: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047eee9: mov eax, 4 */ r_eax = 0x4u;
    /* 0047eeee: sub eax, dword ptr [edx + 0x484] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x484u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047eef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047eef5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047eef8: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0047eefb: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0047eefe: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47ef03u); f_0060ca40();
    /* 0047ef03: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047ef06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ef09: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47ef0eu); f_00463e50();
    /* 0047ef0e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047ef11: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ef15: jl 0x47ef1d */ if ((fS!=fO)) goto L_0047ef1d;
L_0047ef17:; BB(0x0047ef17);
    /* 0047ef17: cmp dword ptr [ebp - 8], 0x34 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047ef1b: jl 0x47ef38 */ if ((fS!=fO)) goto L_0047ef38;
L_0047ef1d:; BB(0x0047ef1d);
    /* 0047ef1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047ef1f: jne 0x47ef38 */ if (!fZ) goto L_0047ef38;
L_0047ef21:; BB(0x0047ef21);
    /* 0047ef21: push 0x823 */ { u32 v = 0x823u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ef26: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ef2b: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ef30: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47ef35u); f_005e9f20();
    /* 0047ef35: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047ef38:; BB(0x0047ef38);
    /* 0047ef38: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047ef3b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047ef3c: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 0047ef41: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047ef41, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047ef41, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047ef43: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047ef46: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ef4a: jne 0x47ef60 */ if (!fZ) goto L_0047ef60;
L_0047ef4c:; BB(0x0047ef4c);
    /* 0047ef4c: mov edx, dword ptr [0x79076c] */ r_edx = R32((u32)(0x79076cu));
    /* 0047ef52: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0047ef54: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047ef57: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0047ef59: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047ef5c: jmp 0x47efa4 */ goto L_0047efa4;
L_0047ef60:; BB(0x0047ef60);
    /* 0047ef60: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ef64: jne 0x47ef7a */ if (!fZ) goto L_0047ef7a;
L_0047ef66:; BB(0x0047ef66);
    /* 0047ef66: mov edx, dword ptr [0x790770] */ r_edx = R32((u32)(0x790770u));
    /* 0047ef6c: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0047ef6e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047ef71: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0047ef73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047ef76: jmp 0x47efa4 */ goto L_0047efa4;
L_0047ef7a:; BB(0x0047ef7a);
    /* 0047ef7a: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047ef7e: jne 0x47ef94 */ if (!fZ) goto L_0047ef94;
L_0047ef80:; BB(0x0047ef80);
    /* 0047ef80: mov edx, dword ptr [0x790764] */ r_edx = R32((u32)(0x790764u));
    /* 0047ef86: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0047ef88: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047ef8b: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0047ef8d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047ef90: jmp 0x47efa4 */ goto L_0047efa4;
L_0047ef94:; BB(0x0047ef94);
    /* 0047ef94: mov edx, dword ptr [0x790754] */ r_edx = R32((u32)(0x790754u));
    /* 0047ef9a: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0047ef9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047ef9f: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0047efa1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0047efa4:; BB(0x0047efa4);
    /* 0047efa4: mov esp, ebp */ r_esp = r_ebp;
    /* 0047efa6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047efa7: ret 4 */ FN_RET(0x0047ee90); r_esp += 8; return;
}

void f_0047efb0(void) /* PokerGame::func_0047efb0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047efb0);
    /* 0047efb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047efb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047efb3: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047efb6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 0047efb9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047efbc: cmp dword ptr [eax + 0x484], 0 */ {  u32 a = R32((u32)(r_eax+0x484u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047efc3: jg 0x47efdc */ if ((!fZ&&fS==fO)) goto L_0047efdc;
L_0047efc5:; BB(0x0047efc5);
    /* 0047efc5: push 0x832 */ { u32 v = 0x832u; r_esp -= 4; W32(r_esp, v); }
    /* 0047efca: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047efcf: push 0x6bcc88 */ { u32 v = 0x6bcc88u; r_esp -= 4; W32(r_esp, v); }
    /* 0047efd4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47efd9u); f_005e9f20();
    /* 0047efd9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047efdc:; BB(0x0047efdc);
    /* 0047efdc: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047efdf: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 0047efe2: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0047efe5: call 0x60c9a0 */ r_esp -= 4; W32(r_esp, 0x47efeau); f_0060c9a0();
    /* 0047efea: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047efed: je 0x47f006 */ if (fZ) goto L_0047f006;
L_0047efef:; BB(0x0047efef);
    /* 0047efef: push 0x833 */ { u32 v = 0x833u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eff4: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047eff9: push 0x6bcc6c */ { u32 v = 0x6bcc6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047effe: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47f003u); f_005e9f20();
    /* 0047f003: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047f006:; BB(0x0047f006);
    /* 0047f006: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047f009: mov eax, 4 */ r_eax = 0x4u;
    /* 0047f00e: sub eax, dword ptr [edx + 0x484] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x484u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f015: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047f018: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 0047f01b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0047f01e: call 0x60ca40 */ r_esp -= 4; W32(r_esp, 0x47f023u); f_0060ca40();
    /* 0047f023: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0047f026: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047f029: call 0x463e50 */ r_esp -= 4; W32(r_esp, 0x47f02eu); f_00463e50();
    /* 0047f02e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0047f031: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f035: jl 0x47f03d */ if ((fS!=fO)) goto L_0047f03d;
L_0047f037:; BB(0x0047f037);
    /* 0047f037: cmp dword ptr [ebp - 4], 0x34 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f03b: jl 0x47f058 */ if ((fS!=fO)) goto L_0047f058;
L_0047f03d:; BB(0x0047f03d);
    /* 0047f03d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0047f03f: jne 0x47f058 */ if (!fZ) goto L_0047f058;
L_0047f041:; BB(0x0047f041);
    /* 0047f041: push 0x83a */ { u32 v = 0x83au; r_esp -= 4; W32(r_esp, v); }
    /* 0047f046: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f04b: push 0x6b2b64 */ { u32 v = 0x6b2b64u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f050: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47f055u); f_005e9f20();
    /* 0047f055: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047f058:; BB(0x0047f058);
    /* 0047f058: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047f05b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047f05c: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 0047f061: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0047f061, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0047f061, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0047f063: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 0047f066: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f06a: jne 0x47f072 */ if (!fZ) goto L_0047f072;
L_0047f06c:; BB(0x0047f06c);
    /* 0047f06c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047f06e: jmp 0x47f080 */ goto L_0047f080;
L_0047f072:; BB(0x0047f072);
    /* 0047f072: cmp dword ptr [ebp - 8], 7 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f076: jl 0x47f07e */ if ((fS!=fO)) goto L_0047f07e;
L_0047f078:; BB(0x0047f078);
    /* 0047f078: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0047f07a: jmp 0x47f080 */ goto L_0047f080;
L_0047f07e:; BB(0x0047f07e);
    /* 0047f07e: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0047f080:; BB(0x0047f080);
    /* 0047f080: mov esp, ebp */ r_esp = r_ebp;
    /* 0047f082: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047f083: ret  */ FN_RET(0x0047efb0); r_esp += 4; return;
}

void f_0047f0e0(void) /* PokerGame::func_0047f0e0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047f0e0);
    /* 0047f0e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0047f0e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0e5: push 0x69ff7a */ { u32 v = 0x69ff7au; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0047f0f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0f1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047f0f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0f6: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0047f0fb: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047f0fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f0fe: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0047f101: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0047f107: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 0047f10a: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f10d: movsx ecx, word ptr [eax + 0x7d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x7d0u));
    /* 0047f114: cmp ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f11a: jl 0x47f133 */ if ((fS!=fO)) goto L_0047f133;
L_0047f11c:; BB(0x0047f11c);
    /* 0047f11c: push 0x854 */ { u32 v = 0x854u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f121: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f126: push 0x6bccb4 */ { u32 v = 0x6bccb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f12b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47f130u); f_005e9f20();
    /* 0047f130: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047f133:; BB(0x0047f133);
    /* 0047f133: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f137: jg 0x47f150 */ if ((!fZ&&fS==fO)) goto L_0047f150;
L_0047f139:; BB(0x0047f139);
    /* 0047f139: push 0x855 */ { u32 v = 0x855u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f13e: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f143: push 0x6bcca0 */ { u32 v = 0x6bcca0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f148: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47f14du); f_005e9f20();
    /* 0047f14d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047f150:; BB(0x0047f150);
    /* 0047f150: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f153: call 0x47e1d0 */ r_esp -= 4; W32(r_esp, 0x47f158u); f_0047e1d0();
    /* 0047f158: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f15b: jne 0x47f177 */ if (!fZ) goto L_0047f177;
L_0047f15d:; BB(0x0047f15d);
    /* 0047f15d: mov word ptr [ebp - 0x14], 0x8c */ W16((u32)(r_ebp+0xffffffecu), 0x8cu);
    /* 0047f163: mov word ptr [ebp - 0x30], 0x127 */ W16((u32)(r_ebp+0xffffffd0u), 0x127u);
    /* 0047f169: mov word ptr [ebp - 0x10], 0x13b */ W16((u32)(r_ebp+0xfffffff0u), 0x13bu);
    /* 0047f16f: mov word ptr [ebp - 0x2c], 0x1cc */ W16((u32)(r_ebp+0xffffffd4u), 0x1ccu);
    /* 0047f175: jmp 0x47f18f */ goto L_0047f18f;
L_0047f177:; BB(0x0047f177);
    /* 0047f177: mov word ptr [ebp - 0x14], 0xaa */ W16((u32)(r_ebp+0xffffffecu), 0xaau);
    /* 0047f17d: mov word ptr [ebp - 0x30], 0x127 */ W16((u32)(r_ebp+0xffffffd0u), 0x127u);
    /* 0047f183: mov word ptr [ebp - 0x10], 0xc8 */ W16((u32)(r_ebp+0xfffffff0u), 0xc8u);
    /* 0047f189: mov word ptr [ebp - 0x2c], 0x1b8 */ W16((u32)(r_ebp+0xffffffd4u), 0x1b8u);
L_0047f18f:; BB(0x0047f18f);
    /* 0047f18f: mov word ptr [ebp - 0x1c], 0 */ W16((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 0047f195: mov word ptr [ebp - 0x38], 0 */ W16((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0047f19b: mov byte ptr [ebp - 0x21], 0 */ W8((u32)(r_ebp+0xffffffdfu), 0x0u);
    /* 0047f19f: mov dword ptr [ebp - 0x28], 0x186a2 */ W32((u32)(r_ebp+0xffffffd8u), 0x186a2u);
    /* 0047f1a6: cmp dword ptr [ebp + 8], 0xf4240 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f1ad: jl 0x47f1c7 */ if ((fS!=fO)) goto L_0047f1c7;
L_0047f1af:; BB(0x0047f1af);
    /* 0047f1af: mov dword ptr [ebp - 0x20], 0x2a */ W32((u32)(r_ebp+0xffffffe0u), 0x2au);
    /* 0047f1b6: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047f1b9: sub ecx, 0xf4240 */ {  u32 a = r_ecx; u32 b = 0xf4240u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f1bf: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047f1c2: jmp 0x47f354 */ goto L_0047f354;
L_0047f1c7:; BB(0x0047f1c7);
    /* 0047f1c7: cmp dword ptr [ebp + 8], 0x7a120 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f1ce: jl 0x47f1e8 */ if ((fS!=fO)) goto L_0047f1e8;
L_0047f1d0:; BB(0x0047f1d0);
    /* 0047f1d0: mov dword ptr [ebp - 0x20], 0x27 */ W32((u32)(r_ebp+0xffffffe0u), 0x27u);
    /* 0047f1d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047f1da: sub edx, 0x7a120 */ {  u32 a = r_edx; u32 b = 0x7a120u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f1e0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0047f1e3: jmp 0x47f354 */ goto L_0047f354;
L_0047f1e8:; BB(0x0047f1e8);
    /* 0047f1e8: cmp dword ptr [ebp + 8], 0x186a0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f1ef: jl 0x47f208 */ if ((fS!=fO)) goto L_0047f208;
L_0047f1f1:; BB(0x0047f1f1);
    /* 0047f1f1: mov dword ptr [ebp - 0x20], 0x24 */ W32((u32)(r_ebp+0xffffffe0u), 0x24u);
    /* 0047f1f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047f1fb: sub eax, 0x186a0 */ {  u32 a = r_eax; u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f200: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047f203: jmp 0x47f354 */ goto L_0047f354;
L_0047f208:; BB(0x0047f208);
    /* 0047f208: cmp dword ptr [ebp + 8], 0xc350 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f20f: jl 0x47f229 */ if ((fS!=fO)) goto L_0047f229;
L_0047f211:; BB(0x0047f211);
    /* 0047f211: mov dword ptr [ebp - 0x20], 0x21 */ W32((u32)(r_ebp+0xffffffe0u), 0x21u);
    /* 0047f218: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047f21b: sub ecx, 0xc350 */ {  u32 a = r_ecx; u32 b = 0xc350u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f221: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047f224: jmp 0x47f354 */ goto L_0047f354;
L_0047f229:; BB(0x0047f229);
    /* 0047f229: cmp dword ptr [ebp + 8], 0x61a8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f230: jl 0x47f24a */ if ((fS!=fO)) goto L_0047f24a;
L_0047f232:; BB(0x0047f232);
    /* 0047f232: mov dword ptr [ebp - 0x20], 0x1e */ W32((u32)(r_ebp+0xffffffe0u), 0x1eu);
    /* 0047f239: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047f23c: sub edx, 0x61a8 */ {  u32 a = r_edx; u32 b = 0x61a8u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f242: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0047f245: jmp 0x47f354 */ goto L_0047f354;
L_0047f24a:; BB(0x0047f24a);
    /* 0047f24a: cmp dword ptr [ebp + 8], 0x2710 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f251: jl 0x47f26a */ if ((fS!=fO)) goto L_0047f26a;
L_0047f253:; BB(0x0047f253);
    /* 0047f253: mov dword ptr [ebp - 0x20], 0x1b */ W32((u32)(r_ebp+0xffffffe0u), 0x1bu);
    /* 0047f25a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047f25d: sub eax, 0x2710 */ {  u32 a = r_eax; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f262: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047f265: jmp 0x47f354 */ goto L_0047f354;
L_0047f26a:; BB(0x0047f26a);
    /* 0047f26a: cmp dword ptr [ebp + 8], 0x1388 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f271: jl 0x47f28b */ if ((fS!=fO)) goto L_0047f28b;
L_0047f273:; BB(0x0047f273);
    /* 0047f273: mov dword ptr [ebp - 0x20], 0x18 */ W32((u32)(r_ebp+0xffffffe0u), 0x18u);
    /* 0047f27a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047f27d: sub ecx, 0x1388 */ {  u32 a = r_ecx; u32 b = 0x1388u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f283: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047f286: jmp 0x47f354 */ goto L_0047f354;
L_0047f28b:; BB(0x0047f28b);
    /* 0047f28b: cmp dword ptr [ebp + 8], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f292: jl 0x47f2ac */ if ((fS!=fO)) goto L_0047f2ac;
L_0047f294:; BB(0x0047f294);
    /* 0047f294: mov dword ptr [ebp - 0x20], 0x15 */ W32((u32)(r_ebp+0xffffffe0u), 0x15u);
    /* 0047f29b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047f29e: sub edx, 0x3e8 */ {  u32 a = r_edx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f2a4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0047f2a7: jmp 0x47f354 */ goto L_0047f354;
L_0047f2ac:; BB(0x0047f2ac);
    /* 0047f2ac: cmp dword ptr [ebp + 8], 0x1f4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f2b3: jl 0x47f2cc */ if ((fS!=fO)) goto L_0047f2cc;
L_0047f2b5:; BB(0x0047f2b5);
    /* 0047f2b5: mov dword ptr [ebp - 0x20], 0x12 */ W32((u32)(r_ebp+0xffffffe0u), 0x12u);
    /* 0047f2bc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047f2bf: sub eax, 0x1f4 */ {  u32 a = r_eax; u32 b = 0x1f4u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f2c4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047f2c7: jmp 0x47f354 */ goto L_0047f354;
L_0047f2cc:; BB(0x0047f2cc);
    /* 0047f2cc: cmp dword ptr [ebp + 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f2d0: jl 0x47f2e4 */ if ((fS!=fO)) goto L_0047f2e4;
L_0047f2d2:; BB(0x0047f2d2);
    /* 0047f2d2: mov dword ptr [ebp - 0x20], 0xf */ W32((u32)(r_ebp+0xffffffe0u), 0xfu);
    /* 0047f2d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047f2dc: sub ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f2df: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047f2e2: jmp 0x47f354 */ goto L_0047f354;
L_0047f2e4:; BB(0x0047f2e4);
    /* 0047f2e4: cmp dword ptr [ebp + 8], 0x32 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f2e8: jl 0x47f2fc */ if ((fS!=fO)) goto L_0047f2fc;
L_0047f2ea:; BB(0x0047f2ea);
    /* 0047f2ea: mov dword ptr [ebp - 0x20], 0xc */ W32((u32)(r_ebp+0xffffffe0u), 0xcu);
    /* 0047f2f1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047f2f4: sub edx, 0x32 */ {  u32 a = r_edx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f2f7: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0047f2fa: jmp 0x47f354 */ goto L_0047f354;
L_0047f2fc:; BB(0x0047f2fc);
    /* 0047f2fc: cmp dword ptr [ebp + 8], 0x19 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f300: jl 0x47f314 */ if ((fS!=fO)) goto L_0047f314;
L_0047f302:; BB(0x0047f302);
    /* 0047f302: mov dword ptr [ebp - 0x20], 9 */ W32((u32)(r_ebp+0xffffffe0u), 0x9u);
    /* 0047f309: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047f30c: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f30f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0047f312: jmp 0x47f354 */ goto L_0047f354;
L_0047f314:; BB(0x0047f314);
    /* 0047f314: cmp dword ptr [ebp + 8], 0xa */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f318: jl 0x47f32c */ if ((fS!=fO)) goto L_0047f32c;
L_0047f31a:; BB(0x0047f31a);
    /* 0047f31a: mov dword ptr [ebp - 0x20], 6 */ W32((u32)(r_ebp+0xffffffe0u), 0x6u);
    /* 0047f321: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0047f324: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f327: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0047f32a: jmp 0x47f354 */ goto L_0047f354;
L_0047f32c:; BB(0x0047f32c);
    /* 0047f32c: cmp dword ptr [ebp + 8], 5 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f330: jl 0x47f344 */ if ((fS!=fO)) goto L_0047f344;
L_0047f332:; BB(0x0047f332);
    /* 0047f332: mov dword ptr [ebp - 0x20], 3 */ W32((u32)(r_ebp+0xffffffe0u), 0x3u);
    /* 0047f339: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0047f33c: sub edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f33f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0047f342: jmp 0x47f354 */ goto L_0047f354;
L_0047f344:; BB(0x0047f344);
    /* 0047f344: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0047f34b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047f34e: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f351: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0047f354:; BB(0x0047f354);
    /* 0047f354: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f356: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f35bu); f_0062fbf0();
    /* 0047f35b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f35e: add eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f361: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0047f364: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f367: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f36e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f371: cmp dword ptr [eax + edx*4 + 0x4b0], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x4b0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f379: jne 0x47f663 */ if (!fZ) goto L_0047f663;
L_0047f37f:; BB(0x0047f37f);
    /* 0047f37f: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 0047f384: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x47f389u); f_00686d82();
    /* 0047f389: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f38c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0047f38f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0047f396: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f39a: je 0x47f3a9 */ if (fZ) goto L_0047f3a9;
L_0047f39c:; BB(0x0047f39c);
    /* 0047f39c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0047f39f: call 0x5eaaf0 */ r_esp -= 4; W32(r_esp, 0x47f3a4u); f_005eaaf0();
    /* 0047f3a4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0047f3a7: jmp 0x47f3b0 */ goto L_0047f3b0;
L_0047f3a9:; BB(0x0047f3a9);
    /* 0047f3a9: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0047f3b0:; BB(0x0047f3b0);
    /* 0047f3b0: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0047f3b3: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0047f3b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047f3bd: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f3c0: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f3c7: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f3ca: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0047f3cd: mov dword ptr [ecx + eax*4 + 0x4b0], edx */ W32((u32)(r_ecx+r_eax*4+0x4b0u), r_edx);
    /* 0047f3d4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047f3d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f3d8: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f3db: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f3e2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f3e5: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f3ec: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x47f3f1u); f_005eaf00();
    /* 0047f3f1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047f3f4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f3f5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f3f8: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f3ff: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f402: mov edx, dword ptr [ecx + eax*4 + 0x4b0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4b0u));
    /* 0047f409: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f40c: movsx ecx, word ptr [eax + 0x7d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x7d0u));
    /* 0047f413: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f416: mov ecx, dword ptr [eax + ecx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x4b0u));
    /* 0047f41d: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047f41f: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0047f425: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f427u); call_ind(t); }
    /* 0047f427: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f42a: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f431: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f434: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f43b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f43e: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f445: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f448: mov eax, dword ptr [edx + eax*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4b0u));
    /* 0047f44f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047f451: mov ecx, eax */ r_ecx = r_eax;
    /* 0047f453: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0047f456: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f458u); call_ind(t); }
    /* 0047f458: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f45b: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f462: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0047f466: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0047f468: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0047f46a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f46c: lea ecx, [edx + eax + 2] */ r_ecx = (u32)(r_edx+r_eax+0x2u);
    /* 0047f470: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f471: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f474: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f47b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f47e: mov edx, dword ptr [ecx + eax*4 + 0x4b0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4b0u));
    /* 0047f485: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f488: movsx ecx, word ptr [eax + 0x7d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x7d0u));
    /* 0047f48f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f492: mov ecx, dword ptr [eax + ecx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x4b0u));
    /* 0047f499: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047f49b: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047f49e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f4a0u); call_ind(t); }
    /* 0047f4a0: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4a3: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f4aa: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4ad: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f4b4: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4b7: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f4be: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4c1: mov eax, dword ptr [edx + eax*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4b0u));
    /* 0047f4c8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047f4ca: mov ecx, eax */ r_ecx = r_eax;
    /* 0047f4cc: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0047f4cf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f4d1u); call_ind(t); }
    /* 0047f4d1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4d4: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f4db: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4de: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f4e5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4e8: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f4ef: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f4f2: mov eax, dword ptr [edx + eax*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4b0u));
    /* 0047f4f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047f4fb: mov ecx, eax */ r_ecx = r_eax;
    /* 0047f4fd: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0047f500: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f502u); call_ind(t); }
    /* 0047f502: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f505: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f50c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f50f: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f516: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x47f51bu); f_005f5550();
    /* 0047f51b: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0047f51f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f521: mov word ptr [ebp - 0x2c], cx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_ecx);
    /* 0047f525: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f528: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f52f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f532: mov ecx, dword ptr [ecx + eax*4 + 0x4b0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4b0u));
    /* 0047f539: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x47f53eu); f_005f5590();
    /* 0047f53e: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0047f542: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f544: mov word ptr [ebp - 0x30], dx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_edx);
    /* 0047f548: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0047f54c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f54e: je 0x47f5a2 */ if (fZ) goto L_0047f5a2;
L_0047f550:; BB(0x0047f550);
    /* 0047f550: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0047f554: mov word ptr [ebp - 0x34], cx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_ecx);
    /* 0047f558: mov dx, word ptr [ebp - 0x38] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 0047f55c: mov word ptr [ebp - 0x3c], dx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_edx);
    /* 0047f560: mov eax, dword ptr [0x79137c] */ r_eax = R32((u32)(0x79137cu));
    /* 0047f565: mov dword ptr [0x791378], eax */ W32((u32)(0x791378u), r_eax);
    /* 0047f56a: mov ecx, dword ptr [0x791374] */ r_ecx = R32((u32)(0x791374u));
    /* 0047f570: mov dword ptr [0x791370], ecx */ W32((u32)(0x791370u), r_ecx);
    /* 0047f576: mov edx, dword ptr [0x79136c] */ r_edx = R32((u32)(0x79136cu));
    /* 0047f57c: mov dword ptr [0x79137c], edx */ W32((u32)(0x79137cu), r_edx);
    /* 0047f582: mov eax, dword ptr [0x791368] */ r_eax = R32((u32)(0x791368u));
    /* 0047f587: mov dword ptr [0x791374], eax */ W32((u32)(0x791374u), r_eax);
    /* 0047f58c: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0047f590: mov dword ptr [0x79136c], ecx */ W32((u32)(0x79136cu), r_ecx);
    /* 0047f596: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0047f59a: mov dword ptr [0x791368], edx */ W32((u32)(0x791368u), r_edx);
    /* 0047f5a0: jmp 0x47f620 */ goto L_0047f620;
L_0047f5a2:; BB(0x0047f5a2);
    /* 0047f5a2: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0047f5a6: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0047f5aa: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0047f5ae: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f5b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f5b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f5b4: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f5b9u); f_0062fbf0();
    /* 0047f5b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f5bc: mov edi, eax */ r_edi = r_eax;
    /* 0047f5be: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0047f5c2: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0047f5c6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f5c8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047f5cb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f5cc: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f5d1u); f_0062fbf0();
    /* 0047f5d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f5d4: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f5d6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047f5d7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f5d9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0047f5db: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0047f5dd: mov word ptr [ebp - 0x34], si */ W16((u32)(r_ebp+0xffffffccu), (u16)r_esi);
    /* 0047f5e1: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047f5e5: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0047f5e9: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047f5ed: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f5ef: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f5f2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f5f3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f5f8u); f_0062fbf0();
    /* 0047f5f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f5fb: mov edi, eax */ r_edi = r_eax;
    /* 0047f5fd: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0047f601: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047f605: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f607: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f60a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f60b: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f610u); f_0062fbf0();
    /* 0047f610: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f613: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f615: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047f616: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f618: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0047f61a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0047f61c: mov word ptr [ebp - 0x3c], si */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_esi);
L_0047f620:; BB(0x0047f620);
    /* 0047f620: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0047f624: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047f627: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f628: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0047f62c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f62d: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f630: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f637: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f63a: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f641: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f644: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f64b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f64e: mov eax, dword ptr [edx + eax*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4b0u));
    /* 0047f655: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047f657: mov ecx, eax */ r_ecx = r_eax;
    /* 0047f659: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0047f65c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f65eu); call_ind(t); }
    /* 0047f65e: jmp 0x47f88b */ goto L_0047f88b;
L_0047f663:; BB(0x0047f663);
    /* 0047f663: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0047f666: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f667: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f66a: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f671: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f674: mov ecx, dword ptr [ecx + eax*4 + 0x4b0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4b0u));
    /* 0047f67b: call 0x5eaf00 */ r_esp -= 4; W32(r_esp, 0x47f680u); f_005eaf00();
    /* 0047f680: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047f683: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f684: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f687: movsx ecx, word ptr [eax + 0x7d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x7d0u));
    /* 0047f68e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f691: mov eax, dword ptr [edx + ecx*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4b0u));
    /* 0047f698: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f69b: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f6a2: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f6a5: mov ecx, dword ptr [ecx + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_ecx+r_edx*4+0x4b0u));
    /* 0047f6ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047f6ae: mov eax, dword ptr [edx + 0xb0] */ r_eax = R32((u32)(r_edx+0xb0u));
    /* 0047f6b4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f6b6u); call_ind(t); }
    /* 0047f6b6: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f6b9: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f6c0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f6c3: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f6ca: call 0x5f5550 */ r_esp -= 4; W32(r_esp, 0x47f6cfu); f_005f5550();
    /* 0047f6cf: movsx ecx, word ptr [ebp - 0x2c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0047f6d3: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f6d5: mov word ptr [ebp - 0x2c], cx */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_ecx);
    /* 0047f6d9: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f6dc: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f6e3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f6e6: mov ecx, dword ptr [ecx + eax*4 + 0x4b0] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x4b0u));
    /* 0047f6ed: call 0x5f5590 */ r_esp -= 4; W32(r_esp, 0x47f6f2u); f_005f5590();
    /* 0047f6f2: movsx edx, word ptr [ebp - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0047f6f6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f6f8: mov word ptr [ebp - 0x30], dx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_edx);
    /* 0047f6fc: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0047f700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f702: je 0x47f756 */ if (fZ) goto L_0047f756;
L_0047f704:; BB(0x0047f704);
    /* 0047f704: mov cx, word ptr [ebp - 0x1c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 0047f708: mov word ptr [ebp - 0x34], cx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_ecx);
    /* 0047f70c: mov dx, word ptr [ebp - 0x38] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc8u))) & 0xffffu);
    /* 0047f710: mov word ptr [ebp - 0x3c], dx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_edx);
    /* 0047f714: mov eax, dword ptr [0x79137c] */ r_eax = R32((u32)(0x79137cu));
    /* 0047f719: mov dword ptr [0x791378], eax */ W32((u32)(0x791378u), r_eax);
    /* 0047f71e: mov ecx, dword ptr [0x791374] */ r_ecx = R32((u32)(0x791374u));
    /* 0047f724: mov dword ptr [0x791370], ecx */ W32((u32)(0x791370u), r_ecx);
    /* 0047f72a: mov edx, dword ptr [0x79136c] */ r_edx = R32((u32)(0x79136cu));
    /* 0047f730: mov dword ptr [0x79137c], edx */ W32((u32)(0x79137cu), r_edx);
    /* 0047f736: mov eax, dword ptr [0x791368] */ r_eax = R32((u32)(0x791368u));
    /* 0047f73b: mov dword ptr [0x791374], eax */ W32((u32)(0x791374u), r_eax);
    /* 0047f740: movsx ecx, word ptr [ebp - 0x34] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0047f744: mov dword ptr [0x79136c], ecx */ W32((u32)(0x79136cu), r_ecx);
    /* 0047f74a: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0047f74e: mov dword ptr [0x791368], edx */ W32((u32)(0x791368u), r_edx);
    /* 0047f754: jmp 0x47f7d4 */ goto L_0047f7d4;
L_0047f756:; BB(0x0047f756);
    /* 0047f756: movsx esi, word ptr [ebp - 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0047f75a: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0047f75e: movsx ecx, word ptr [ebp - 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0047f762: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f764: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f768: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f76du); f_0062fbf0();
    /* 0047f76d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f770: mov edi, eax */ r_edi = r_eax;
    /* 0047f772: movsx edx, word ptr [ebp - 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 0047f776: movsx eax, word ptr [ebp - 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff0u));
    /* 0047f77a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0047f77c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047f77f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f780: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f785u); f_0062fbf0();
    /* 0047f785: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f788: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f78a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047f78b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f78d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0047f78f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0047f791: mov word ptr [ebp - 0x34], si */ W16((u32)(r_ebp+0xffffffccu), (u16)r_esi);
    /* 0047f795: movsx esi, word ptr [ebp - 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047f799: movsx ecx, word ptr [ebp - 0x30] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0047f79d: movsx edx, word ptr [ebp - 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047f7a1: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f7a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0047f7a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f7a7: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f7acu); f_0062fbf0();
    /* 0047f7ac: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f7af: mov edi, eax */ r_edi = r_eax;
    /* 0047f7b1: movsx eax, word ptr [ebp - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd0u));
    /* 0047f7b5: movsx ecx, word ptr [ebp - 0x14] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffecu));
    /* 0047f7b9: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f7bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f7bf: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x47f7c4u); f_0062fbf0();
    /* 0047f7c4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047f7c7: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0047f7c9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0047f7ca: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f7cc: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0047f7ce: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0047f7d0: mov word ptr [ebp - 0x3c], si */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_esi);
L_0047f7d4:; BB(0x0047f7d4);
    /* 0047f7d4: movsx edx, word ptr [ebp - 0x3c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffc4u));
    /* 0047f7d8: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047f7db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f7dc: movsx eax, word ptr [ebp - 0x34] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffccu));
    /* 0047f7e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f7e1: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f7e4: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f7eb: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f7ee: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f7f5: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f7f8: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f7ff: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f802: mov eax, dword ptr [edx + eax*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4b0u));
    /* 0047f809: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047f80b: mov ecx, eax */ r_ecx = r_eax;
    /* 0047f80d: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0047f810: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f812u); call_ind(t); }
    /* 0047f812: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f815: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f81c: movzx eax, byte ptr [ebp - 0x21] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 0047f820: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0047f822: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0047f824: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0047f826: lea ecx, [edx + eax + 2] */ r_ecx = (u32)(r_edx+r_eax+0x2u);
    /* 0047f82a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047f82b: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f82e: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f835: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f838: mov edx, dword ptr [ecx + eax*4 + 0x4b0] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4b0u));
    /* 0047f83f: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f842: movsx ecx, word ptr [eax + 0x7d0] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x7d0u));
    /* 0047f849: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f84c: mov ecx, dword ptr [eax + ecx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_ecx*4+0x4b0u));
    /* 0047f853: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0047f855: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0047f858: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f85au); call_ind(t); }
    /* 0047f85a: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f85d: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f864: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f867: mov ecx, dword ptr [eax + edx*4 + 0x4b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4b0u));
    /* 0047f86e: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f871: movsx eax, word ptr [edx + 0x7d0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x7d0u));
    /* 0047f878: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f87b: mov eax, dword ptr [edx + eax*4 + 0x4b0] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4b0u));
    /* 0047f882: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047f884: mov ecx, eax */ r_ecx = r_eax;
    /* 0047f886: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0047f889: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47f88bu); call_ind(t); }
L_0047f88b:; BB(0x0047f88b);
    /* 0047f88b: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f88e: mov dx, word ptr [ecx + 0x7d0] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x7d0u))) & 0xffffu);
    /* 0047f895: add dx, 1 */ {  u32 a = (u16)r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0047f899: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f89c: mov word ptr [eax + 0x7d0], dx */ W16((u32)(r_eax+0x7d0u), (u16)r_edx);
    /* 0047f8a3: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047f8a7: je 0x47f8c7 */ if (fZ) goto L_0047f8c7;
L_0047f8a9:; BB(0x0047f8a9);
    /* 0047f8a9: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f8ac: movsx edx, word ptr [ecx + 0x7d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x7d0u));
    /* 0047f8b3: cmp edx, 0xc8 */ {  u32 a = r_edx; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0047f8b9: jge 0x47f8c7 */ if ((fS==fO)) goto L_0047f8c7;
L_0047f8bb:; BB(0x0047f8bb);
    /* 0047f8bb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0047f8be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047f8bf: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0047f8c2: call 0x47f0e0 */ r_esp -= 4; W32(r_esp, 0x47f8c7u); f_0047f0e0();
L_0047f8c7:; BB(0x0047f8c7);
    /* 0047f8c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047f8ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047f8d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047f8d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0047f8d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0047f8d4: mov esp, ebp */ r_esp = r_ebp;
    /* 0047f8d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047f8d7: ret 4 */ FN_RET(0x0047f0e0); r_esp += 8; return;
}

void f_0047fb90(void) /* PokerGame::func_0047fb90 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0047fb90);
    /* 0047fb90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0047fb91: mov ebp, esp */ r_ebp = r_esp;
    /* 0047fb93: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0047fb96: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0047fb99: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0047fb9c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0047fb9f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047fba2: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0047fba5: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0047fba8: cmp dword ptr [ebp - 8], 9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0047fbac: ja 0x47fdb4 */ if ((!fC&&!fZ)) goto L_0047fdb4;
L_0047fbb2:; BB(0x0047fbb2);
    /* 0047fbb2: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047fbb5: jmp dword ptr [edx*4 + 0x47fdbc] */ { u32 t = R32((u32)(r_edx*4+0x47fdbcu)); switch (t) { case 0x47fbdau: goto L_0047fbda; case 0x47fbfbu: goto L_0047fbfb; case 0x47fc31u: goto L_0047fc31; case 0x47fc79u: goto L_0047fc79; case 0x47fce6u: goto L_0047fce6; case 0x47fd1fu: goto L_0047fd1f; case 0x47fd43u: goto L_0047fd43; case 0x47fd71u: goto L_0047fd71; case 0x47fbbcu: goto L_0047fbbc; case 0x47fbcbu: goto L_0047fbcb; default: UNSUP(0x0047fbb5, "jump table entry is not a known target"); } }
L_0047fbbc:; BB(0x0047fbbc);
    /* 0047fbbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fbbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fbc1: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fbc6u); f_0047fb00();
    /* 0047fbc6: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fbcb:; BB(0x0047fbcb);
    /* 0047fbcb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fbcd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fbd0: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fbd5u); f_0047fb00();
    /* 0047fbd5: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fbda:; BB(0x0047fbda);
    /* 0047fbda: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fbdc: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fbe1: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047fbe6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047fbe8: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fbee: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0047fbf4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47fbf6u); call_ind(t); }
    /* 0047fbf6: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fbfb:; BB(0x0047fbfb);
    /* 0047fbfb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fbfd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fc00: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x47fc05u); f_00480c10();
    /* 0047fc05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc07: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fc0a: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fc0fu); f_0047fb00();
    /* 0047fc0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc11: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc16: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fc1c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047fc1e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fc24: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0047fc2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47fc2cu); call_ind(t); }
    /* 0047fc2c: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fc31:; BB(0x0047fc31);
    /* 0047fc31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fc34: call 0x47ffc0 */ r_esp -= 4; W32(r_esp, 0x47fc39u); f_0047ffc0();
    /* 0047fc39: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc3b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fc3e: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x47fc43u); f_00480c10();
    /* 0047fc43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fc48: call 0x480710 */ r_esp -= 4; W32(r_esp, 0x47fc4du); f_00480710();
    /* 0047fc4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fc52: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fc57u); f_0047fb00();
    /* 0047fc57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc59: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc5e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fc64: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047fc66: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fc6c: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0047fc72: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47fc74u); call_ind(t); }
    /* 0047fc74: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fc79:; BB(0x0047fc79);
    /* 0047fc79: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fc7c: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x47fc81u); f_00480f80();
    /* 0047fc81: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0047fc84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047fc86: jne 0x47fc9f */ if (!fZ) goto L_0047fc9f;
L_0047fc88:; BB(0x0047fc88);
    /* 0047fc88: push 0x938 */ { u32 v = 0x938u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc8d: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc92: push 0x6bcd28 */ { u32 v = 0x6bcd28u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fc97: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x47fc9cu); f_005e9f20();
    /* 0047fc9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0047fc9f:; BB(0x0047fc9f);
    /* 0047fc9f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fca2: call 0x47ffc0 */ r_esp -= 4; W32(r_esp, 0x47fca7u); f_0047ffc0();
    /* 0047fca7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fca9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fcac: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x47fcb1u); f_00480c10();
    /* 0047fcb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fcb6: call 0x480710 */ r_esp -= 4; W32(r_esp, 0x47fcbbu); f_00480710();
    /* 0047fcbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcbd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fcc0: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fcc5u); f_0047fb00();
    /* 0047fcc5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcc7: push 0x30d401 */ { u32 v = 0x30d401u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fccc: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047fcd1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0047fcd3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fcd9: mov eax, dword ptr [edx + 0x334] */ r_eax = R32((u32)(r_edx+0x334u));
    /* 0047fcdf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47fce1u); call_ind(t); }
    /* 0047fce1: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fce6:; BB(0x0047fce6);
    /* 0047fce6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fce9: call 0x47ffc0 */ r_esp -= 4; W32(r_esp, 0x47fceeu); f_0047ffc0();
    /* 0047fcee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcf0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fcf3: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x47fcf8u); f_00480c10();
    /* 0047fcf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fcfa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fcfd: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fd02u); f_0047fb00();
    /* 0047fd02: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd07: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fd0d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047fd0f: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fd15: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0047fd18: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47fd1au); call_ind(t); }
    /* 0047fd1a: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fd1f:; BB(0x0047fd1f);
    /* 0047fd1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd21: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fd24: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fd29u); f_0047fb00();
    /* 0047fd29: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd2e: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fd34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047fd36: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fd3c: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0047fd3f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47fd41u); call_ind(t); }
    /* 0047fd41: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fd43:; BB(0x0047fd43);
    /* 0047fd43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd45: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fd48: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x47fd4du); f_00480c10();
    /* 0047fd4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd4f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fd52: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fd57u); f_0047fb00();
    /* 0047fd57: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd5c: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fd62: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0047fd64: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fd6a: mov eax, dword ptr [edx + 0x34] */ r_eax = R32((u32)(r_edx+0x34u));
    /* 0047fd6d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x47fd6fu); call_ind(t); }
    /* 0047fd6f: jmp 0x47fdb4 */ goto L_0047fdb4;
L_0047fd71:; BB(0x0047fd71);
    /* 0047fd71: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd73: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fd76: call 0x480c10 */ r_esp -= 4; W32(r_esp, 0x47fd7bu); f_00480c10();
    /* 0047fd7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd7d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047fd80: call 0x47fb00 */ r_esp -= 4; W32(r_esp, 0x47fd85u); f_0047fb00();
    /* 0047fd85: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fd8b: mov edx, dword ptr [ecx + 0x4f30] */ r_edx = R32((u32)(r_ecx+0x4f30u));
    /* 0047fd91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd92: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0047fd97: mov ecx, dword ptr [eax + 0x4f2c] */ r_ecx = R32((u32)(r_eax+0x4f2cu));
    /* 0047fd9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047fd9e: mov edx, dword ptr [0x7947e0] */ r_edx = R32((u32)(0x7947e0u));
    /* 0047fda4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0047fda6: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0047fdac: mov edx, dword ptr [eax + 0x334] */ r_edx = R32((u32)(r_eax+0x334u));
    /* 0047fdb2: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x47fdb4u); call_ind(t); }
L_0047fdb4:; BB(0x0047fdb4);
    /* 0047fdb4: mov esp, ebp */ r_esp = r_ebp;
    /* 0047fdb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047fdb7: ret 4 */ FN_RET(0x0047fb90); r_esp += 8; return;
}

void f_00480130(void) /* PokerGame::func_00480130 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480130);
    /* 00480130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480131: mov ebp, esp */ r_ebp = r_esp;
    /* 00480133: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480136: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 00480139: mov dword ptr [ebp - 0x30], 0xffffffff */ W32((u32)(r_ebp+0xffffffd0u), 0xffffffffu);
    /* 00480140: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00480147: mov byte ptr [ebp - 0x35], 0 */ W8((u32)(r_ebp+0xffffffcbu), 0x0u);
    /* 0048014b: mov byte ptr [ebp - 0x1d], 0 */ W8((u32)(r_ebp+0xffffffe3u), 0x0u);
    /* 0048014f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00480156: jmp 0x480161 */ goto L_00480161;
L_00480158:; BB(0x00480158);
    /* 00480158: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048015b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048015e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00480161:; BB(0x00480161);
    /* 00480161: cmp dword ptr [ebp - 0x28], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480165: jge 0x480174 */ if ((fS==fO)) goto L_00480174;
L_00480167:; BB(0x00480167);
    /* 00480167: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048016a: mov dword ptr [ebp + ecx*4 - 0x1c], 0 */ W32((u32)(r_ebp+r_ecx*4+0xffffffe4u), 0x0u);
    /* 00480172: jmp 0x480158 */ goto L_00480158;
L_00480174:; BB(0x00480174);
    /* 00480174: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00480177: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 0048017d: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00480180: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00480183: mov edx, dword ptr [ecx + 0xf4] */ r_edx = R32((u32)(r_ecx+0xf4u));
    /* 00480189: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0048018c: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0048018f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480190: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00480193: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480194: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00480197: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480198: call 0x519e40 */ r_esp -= 4; W32(r_esp, 0x48019du); f_00519e40();
    /* 0048019d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004801a0: mov dword ptr [ebp - 0x28], 6 */ W32((u32)(r_ebp+0xffffffd8u), 0x6u);
    /* 004801a7: jmp 0x4801b2 */ goto L_004801b2;
L_004801a9:; BB(0x004801a9);
    /* 004801a9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004801ac: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004801af: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_004801b2:; BB(0x004801b2);
    /* 004801b2: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004801b6: jl 0x4801ff */ if ((fS!=fO)) goto L_004801ff;
L_004801b8:; BB(0x004801b8);
    /* 004801b8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004801bb: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004801be: cmp dword ptr [edx + ecx*4 + 0x3e4], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x3e4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004801c6: jne 0x4801ca */ if (!fZ) goto L_004801ca;
L_004801c8:; BB(0x004801c8);
    /* 004801c8: jmp 0x4801a9 */ goto L_004801a9;
L_004801ca:; BB(0x004801ca);
    /* 004801ca: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004801cd: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004801d0: mov edx, dword ptr [ecx + eax*4 + 0x3e4] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x3e4u));
    /* 004801d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004801d8: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 004801db: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x4801e0u); f_0047e390();
    /* 004801e0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004801e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004801e6: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x4801ebu); f_004c61b0();
    /* 004801eb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004801ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004801f0: je 0x4801fd */ if (fZ) goto L_004801fd;
L_004801f2:; BB(0x004801f2);
    /* 004801f2: mov ecx, 6 */ r_ecx = 0x6u;
    /* 004801f7: sub ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004801fa: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_004801fd:; BB(0x004801fd);
    /* 004801fd: jmp 0x4801a9 */ goto L_004801a9;
L_004801ff:; BB(0x004801ff);
    /* 004801ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00480201: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480205: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00480208: mov byte ptr [ebp - 0x35], dl */ W8((u32)(r_ebp+0xffffffcbu), (u8)r_edx);
    /* 0048020b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048020d: cmp dword ptr [ebp - 0x30], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480211: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00480214: mov byte ptr [ebp - 0x1d], al */ W8((u32)(r_ebp+0xffffffe3u), (u8)r_eax);
    /* 00480217: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0048021a: mov edx, dword ptr [ecx + 0xf4] */ r_edx = R32((u32)(r_ecx+0xf4u));
    /* 00480220: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00480223: mov al, byte ptr [ebp - 0x35] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffcbu))) & 0xffu);
    /* 00480226: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480227: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0048022a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048022b: call 0x519e90 */ r_esp -= 4; W32(r_esp, 0x480230u); f_00519e90();
    /* 00480230: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480233: movzx edx, byte ptr [ebp - 0x1d] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 00480237: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480239: jne 0x480240 */ if (!fZ) goto L_00480240;
L_0048023b:; BB(0x0048023b);
    /* 0048023b: jmp 0x480384 */ goto L_00480384;
L_00480240:; BB(0x00480240);
    /* 00480240: movzx eax, byte ptr [ebp - 0x35] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffcbu));
    /* 00480244: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480246: je 0x480270 */ if (fZ) goto L_00480270;
L_00480248:; BB(0x00480248);
    /* 00480248: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0048024b: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 00480251: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00480254: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00480257: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 0048025d: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 00480260: mov edx, dword ptr [ebp - 0x68] */ r_edx = R32((u32)(r_ebp+0xffffff98u));
    /* 00480263: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480264: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00480267: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480268: call 0x520730 */ r_esp -= 4; W32(r_esp, 0x48026du); f_00520730();
    /* 0048026d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00480270:; BB(0x00480270);
    /* 00480270: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00480273: mov edx, dword ptr [ebp + ecx*4 - 0x1c] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xffffffe4u));
    /* 00480277: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0048027a: cmp dword ptr [ebp - 0x34], 0x3e8 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480281: jge 0x48029a */ if ((fS==fO)) goto L_0048029a;
L_00480283:; BB(0x00480283);
    /* 00480283: push 0x9e5 */ { u32 v = 0x9e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00480288: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0048028d: push 0x6bcdc4 */ { u32 v = 0x6bcdc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00480292: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x480297u); f_005e9f20();
    /* 00480297: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048029a:; BB(0x0048029a);
    /* 0048029a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048029c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048029f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004802a0: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4802a5u); f_0064c8a0();
    /* 004802a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004802a8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004802ab: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 004802ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004802b0: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4802b5u); f_005dcb00();
    /* 004802b5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004802b8: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004802bb: mov dword ptr [eax + 0x4dc], edx */ W32((u32)(r_eax+0x4dcu), r_edx);
    /* 004802c1: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 004802c4: mov dword ptr [eax + 0x4e0], ecx */ W32((u32)(r_eax+0x4e0u), r_ecx);
    /* 004802ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004802cc: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4802d1u); f_005dcb00();
    /* 004802d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004802d4: mov edx, dword ptr [eax + 0x4b4] */ r_edx = R32((u32)(r_eax+0x4b4u));
    /* 004802da: add edx, dword ptr [ebp - 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffccu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004802dd: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 004802e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004802e2: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004802e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004802e6: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x4802ebu); f_0064c8a0();
    /* 004802eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004802ee: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 004802f1: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 004802f4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004802f6: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x4802fbu); f_005dcb00();
    /* 004802fb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004802fe: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00480301: mov dword ptr [eax + 0x4b4], ecx */ W32((u32)(r_eax+0x4b4u), r_ecx);
    /* 00480307: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0048030a: mov dword ptr [eax + 0x4b8], edx */ W32((u32)(r_eax+0x4b8u), r_edx);
    /* 00480310: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480312: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00480315: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480316: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x48031bu); f_0064c8a0();
    /* 0048031b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048031e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00480321: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00480324: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00480327: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480328: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0048032b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048032c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048032e: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x480333u); f_005dcb00();
    /* 00480333: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480336: mov ecx, eax */ r_ecx = r_eax;
    /* 00480338: call 0x5d59e0 */ r_esp -= 4; W32(r_esp, 0x48033du); f_005d59e0();
    /* 0048033d: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00480340: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00480346: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00480349: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0048034c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048034d: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 00480350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480351: call 0x519fb0 */ r_esp -= 4; W32(r_esp, 0x480356u); f_00519fb0();
    /* 00480356: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480359: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048035b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048035e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048035f: call 0x64c8a0 */ r_esp -= 4; W32(r_esp, 0x480364u); f_0064c8a0();
    /* 00480364: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480367: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0048036a: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0048036d: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00480370: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00480371: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00480374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00480375: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00480377: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480379: mov ecx, dword ptr [0x79506c] */ r_ecx = R32((u32)(0x79506cu));
    /* 0048037f: call 0x5e7e40 */ r_esp -= 4; W32(r_esp, 0x480384u); f_005e7e40();
L_00480384:; BB(0x00480384);
    /* 00480384: mov esp, ebp */ r_esp = r_ebp;
    /* 00480386: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480387: ret  */ FN_RET(0x00480130); r_esp += 4; return;
}

void f_00480390(void) /* PokerGame::func_00480390 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480390);
    /* 00480390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480391: mov ebp, esp */ r_ebp = r_esp;
    /* 00480393: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00480394: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00480397: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048039a: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x48039fu); f_00480f80();
    /* 0048039f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 004803a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004803a4: jne 0x4803bd */ if (!fZ) goto L_004803bd;
L_004803a6:; BB(0x004803a6);
    /* 004803a6: push 0x9f6 */ { u32 v = 0x9f6u; r_esp -= 4; W32(r_esp, v); }
    /* 004803ab: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 004803b0: push 0x6bcd28 */ { u32 v = 0x6bcd28u; r_esp -= 4; W32(r_esp, v); }
    /* 004803b5: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4803bau); f_005e9f20();
    /* 004803ba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004803bd:; BB(0x004803bd);
    /* 004803bd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004803bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 004803c2: call 0x47fb90 */ r_esp -= 4; W32(r_esp, 0x4803c7u); f_0047fb90();
    /* 004803c7: mov esp, ebp */ r_esp = r_ebp;
    /* 004803c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004803ca: ret  */ FN_RET(0x00480390); r_esp += 4; return;
}

void f_00480740(void) /* PokerGame::func_00480740 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480740);
    /* 00480740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480741: mov ebp, esp */ r_ebp = r_esp;
    /* 00480743: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480746: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00480749: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00480750: jmp 0x48075b */ goto L_0048075b;
L_00480752:; BB(0x00480752);
    /* 00480752: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480755: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00480758: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_0048075b:; BB(0x0048075b);
    /* 0048075b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048075e: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x480763u); f_0047f950();
    /* 00480763: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480766: jge 0x4807bc */ if ((fS==fO)) goto L_004807bc;
L_00480768:; BB(0x00480768);
    /* 00480768: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048076b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048076c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x480771u); f_005dcb00();
    /* 00480771: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00480774: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00480777: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048077a: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x48077fu); f_0063aac0();
    /* 0048077f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00480781: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00480784: cmp dword ptr [ebp - 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480788: je 0x4807a6 */ if (fZ) goto L_004807a6;
L_0048078a:; BB(0x0048078a);
    /* 0048078a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048078d: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x480792u); f_0063aac0();
    /* 00480792: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00480794: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00480797: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048079b: je 0x4807a6 */ if (fZ) goto L_004807a6;
L_0048079d:; BB(0x0048079d);
    /* 0048079d: mov dword ptr [ebp - 0x18], 0 */ W32((u32)(r_ebp+0xffffffe8u), 0x0u);
    /* 004807a4: jmp 0x4807ad */ goto L_004807ad;
L_004807a6:; BB(0x004807a6);
    /* 004807a6: mov dword ptr [ebp - 0x18], 1 */ W32((u32)(r_ebp+0xffffffe8u), 0x1u);
L_004807ad:; BB(0x004807ad);
    /* 004807ad: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 004807b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004807b3: je 0x4807ba */ if (fZ) goto L_004807ba;
L_004807b5:; BB(0x004807b5);
    /* 004807b5: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 004807b8: jmp 0x4807d9 */ goto L_004807d9;
L_004807ba:; BB(0x004807ba);
    /* 004807ba: jmp 0x480752 */ goto L_00480752;
L_004807bc:; BB(0x004807bc);
    /* 004807bc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 004807be: jne 0x4807d7 */ if (!fZ) goto L_004807d7;
L_004807c0:; BB(0x004807c0);
    /* 004807c0: push 0xa81 */ { u32 v = 0xa81u; r_esp -= 4; W32(r_esp, v); }
    /* 004807c5: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 004807ca: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004807cf: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4807d4u); f_005e9f20();
    /* 004807d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004807d7:; BB(0x004807d7);
    /* 004807d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004807d9:; BB(0x004807d9);
    /* 004807d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004807db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004807dc: ret  */ FN_RET(0x00480740); r_esp += 4; return;
}

void f_00480920(void) /* PokerGame::func_00480920 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480920);
    /* 00480920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480921: mov ebp, esp */ r_ebp = r_esp;
    /* 00480923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480926: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00480929: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0048092c: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 00480932: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00480935: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480939: jl 0x480941 */ if ((fS!=fO)) goto L_00480941;
L_0048093b:; BB(0x0048093b);
    /* 0048093b: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048093f: jle 0x480958 */ if ((fZ||fS!=fO)) goto L_00480958;
L_00480941:; BB(0x00480941);
    /* 00480941: push 0xaab */ { u32 v = 0xaabu; r_esp -= 4; W32(r_esp, v); }
    /* 00480946: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0048094b: push 0x6bce58 */ { u32 v = 0x6bce58u; r_esp -= 4; W32(r_esp, v); }
    /* 00480950: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x480955u); f_005e9f20();
    /* 00480955: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00480958:; BB(0x00480958);
    /* 00480958: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0048095b: mov eax, dword ptr [eax*4 + 0x71e3b0] */ r_eax = R32((u32)(r_eax*4+0x71e3b0u));
    /* 00480962: mov esp, ebp */ r_esp = r_ebp;
    /* 00480964: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480965: ret  */ FN_RET(0x00480920); r_esp += 4; return;
}

void f_00480d20(void) /* PokerGame::func_00480d20 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480d20);
    /* 00480d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480d21: mov ebp, esp */ r_ebp = r_esp;
    /* 00480d23: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480d26: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00480d29: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00480d30: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480d33: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00480d39: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00480d3c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480d3f: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 00480d45: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00480d48: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480d4b: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 00480d51: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00480d54: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00480d57: imul eax, eax, 0x180 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x180u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480d5d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00480d60: imul ecx, ecx, 0x30 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x30u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00480d63: lea edx, [eax + ecx + 0x7207ec] */ r_edx = (u32)(r_eax+r_ecx+0x7207ecu);
    /* 00480d6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00480d6d: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00480d70: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00480d73: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00480d75: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00480d78: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00480d7b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480d7e: mov eax, dword ptr [edx + ecx*4 + 0x104] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x104u));
    /* 00480d85: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00480d88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00480d8a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480d8d: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00480d90: call 0x466800 */ r_esp -= 4; W32(r_esp, 0x480d95u); f_00466800();
    /* 00480d95: cmp dword ptr [ebp - 4], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480d99: jge 0x480db6 */ if ((fS==fO)) goto L_00480db6;
L_00480d9b:; BB(0x00480d9b);
    /* 00480d9b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480d9e: mov dword ptr [edx + 0xf0], 0xffffffff */ W32((u32)(r_edx+0xf0u), 0xffffffffu);
    /* 00480da8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480dab: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00480dae: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00480db1: jmp 0x480e63 */ goto L_00480e63;
L_00480db6:; BB(0x00480db6);
    /* 00480db6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480db9: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00480dbc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00480dbd: mov ecx, 7 */ r_ecx = 0x7u;
    /* 00480dc2: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00480dc2, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00480dc2, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00480dc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480dc6: jne 0x480e34 */ if (!fZ) goto L_00480e34;
L_00480dc8:; BB(0x00480dc8);
    /* 00480dc8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480dcb: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 00480dd1: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480dd4: jne 0x480e07 */ if (!fZ) goto L_00480e07;
L_00480dd6:; BB(0x00480dd6);
    /* 00480dd6: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480dd9: cmp dword ptr [ecx + 0xec], 0 */ {  u32 a = R32((u32)(r_ecx+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480de0: jne 0x480df9 */ if (!fZ) goto L_00480df9;
L_00480de2:; BB(0x00480de2);
    /* 00480de2: push 0xb2f */ { u32 v = 0xb2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00480de7: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00480dec: push 0x6bce6c */ { u32 v = 0x6bce6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00480df1: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x480df6u); f_005e9f20();
    /* 00480df6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00480df9:; BB(0x00480df9);
    /* 00480df9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480dfc: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 00480e02: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00480e05: jmp 0x480e25 */ goto L_00480e25;
L_00480e07:; BB(0x00480e07);
    /* 00480e07: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480e0a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480e0d: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 00480e13: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480e16: mov edx, dword ptr [ecx + 0xec] */ r_edx = R32((u32)(r_ecx+0xecu));
    /* 00480e1c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480e1f: add edx, dword ptr [eax + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00480e22: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00480e25:; BB(0x00480e25);
    /* 00480e25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00480e27: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480e2a: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00480e2d: call 0x466800 */ r_esp -= 4; W32(r_esp, 0x480e32u); f_00466800();
    /* 00480e32: jmp 0x480e63 */ goto L_00480e63;
L_00480e34:; BB(0x00480e34);
    /* 00480e34: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480e37: cmp dword ptr [edx + 0xec], 0 */ {  u32 a = R32((u32)(r_edx+0xecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00480e3e: jne 0x480e57 */ if (!fZ) goto L_00480e57;
L_00480e40:; BB(0x00480e40);
    /* 00480e40: push 0xb37 */ { u32 v = 0xb37u; r_esp -= 4; W32(r_esp, v); }
    /* 00480e45: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00480e4a: push 0x6bce6c */ { u32 v = 0x6bce6cu; r_esp -= 4; W32(r_esp, v); }
    /* 00480e4f: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x480e54u); f_005e9f20();
    /* 00480e54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00480e57:; BB(0x00480e57);
    /* 00480e57: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480e5a: mov edx, dword ptr [ecx + 0xec] */ r_edx = R32((u32)(r_ecx+0xecu));
    /* 00480e60: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00480e63:; BB(0x00480e63);
    /* 00480e63: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00480e66: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480e69: mov dword ptr [eax + 0xec], ecx */ W32((u32)(r_eax+0xecu), r_ecx);
    /* 00480e6f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00480e72: mov esp, ebp */ r_esp = r_ebp;
    /* 00480e74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480e75: ret  */ FN_RET(0x00480d20); r_esp += 4; return;
}

void f_00480ee0(void) /* PokerGame::func_00480ee0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00480ee0);
    /* 00480ee0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00480ee1: mov ebp, esp */ r_ebp = r_esp;
    /* 00480ee3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00480ee6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00480ee9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480eec: mov ecx, dword ptr [eax + 0xfc] */ r_ecx = R32((u32)(r_eax+0xfcu));
    /* 00480ef2: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00480ef5: cmp dword ptr [ebp - 4], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480ef9: jl 0x480f01 */ if ((fS!=fO)) goto L_00480f01;
L_00480efb:; BB(0x00480efb);
    /* 00480efb: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00480eff: jle 0x480f18 */ if ((fZ||fS!=fO)) goto L_00480f18;
L_00480f01:; BB(0x00480f01);
    /* 00480f01: push 0xb4d */ { u32 v = 0xb4du; r_esp -= 4; W32(r_esp, v); }
    /* 00480f06: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00480f0b: push 0x6bce78 */ { u32 v = 0x6bce78u; r_esp -= 4; W32(r_esp, v); }
    /* 00480f10: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x480f15u); f_005e9f20();
    /* 00480f15: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00480f18:; BB(0x00480f18);
    /* 00480f18: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00480f1b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00480f1e: mov eax, dword ptr [ecx + eax*4 + 0x104] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x104u));
    /* 00480f25: mov esp, ebp */ r_esp = r_ebp;
    /* 00480f27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00480f28: ret  */ FN_RET(0x00480ee0); r_esp += 4; return;
}

void f_00481a00(void) /* PokerGame::func_00481a00 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00481a00);
    /* 00481a00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00481a01: mov ebp, esp */ r_ebp = r_esp;
    /* 00481a03: sub esp, 0xf8 */ {  u32 a = r_esp; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00481a09: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00481a0e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00481a10: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00481a13: mov dword ptr [ebp - 0xf0], ecx */ W32((u32)(r_ebp+0xffffff10u), r_ecx);
    /* 00481a19: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
    /* 00481a23: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 00481a2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481a30: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481a36: cmp dword ptr [ecx + eax*4 + 0x110], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x110u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481a3e: je 0x481a47 */ if (fZ) goto L_00481a47;
L_00481a40:; BB(0x00481a40);
    /* 00481a40: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 00481a42: jmp 0x48205a */ goto L_0048205a;
L_00481a47:; BB(0x00481a47);
    /* 00481a47: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00481a4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481a4b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481a51: call 0x4810c0 */ r_esp -= 4; W32(r_esp, 0x481a56u); f_004810c0();
    /* 00481a56: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00481a59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481a5b: jne 0x481a71 */ if (!fZ) goto L_00481a71;
L_00481a5d:; BB(0x00481a5d);
    /* 00481a5d: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00481a63: mov byte ptr [ecx + 0x4f04], 0 */ W8((u32)(r_ecx+0x4f04u), 0x0u);
    /* 00481a6a: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00481a6c: jmp 0x48205a */ goto L_0048205a;
L_00481a71:; BB(0x00481a71);
    /* 00481a71: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00481a77: call 0x636ee0 */ r_esp -= 4; W32(r_esp, 0x481a7cu); f_00636ee0();
    /* 00481a7c: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 00481a82: call 0x636f70 */ r_esp -= 4; W32(r_esp, 0x481a87u); f_00636f70();
    /* 00481a87: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00481a8a: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00481a90: mov dword ptr [eax + edx*4 + 0x110], 1 */ W32((u32)(r_eax+r_edx*4+0x110u), 0x1u);
    /* 00481a9b: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481aa1: call 0x480920 */ r_esp -= 4; W32(r_esp, 0x481aa6u); f_00480920();
    /* 00481aa6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00481aa9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481aab: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481ab0u); f_005dcb00();
    /* 00481ab0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481ab3: mov ecx, eax */ r_ecx = r_eax;
    /* 00481ab5: call 0x5d5a50 */ r_esp -= 4; W32(r_esp, 0x481abau); f_005d5a50();
    /* 00481aba: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 00481ac0: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481ac6: call 0x481920 */ r_esp -= 4; W32(r_esp, 0x481acbu); f_00481920();
    /* 00481acb: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 00481ad1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481ad8: jmp 0x481ae3 */ goto L_00481ae3;
L_00481ada:; BB(0x00481ada);
    /* 00481ada: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481add: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00481ae0: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_00481ae3:; BB(0x00481ae3);
    /* 00481ae3: cmp dword ptr [ebp - 0x2c], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481ae7: jge 0x481af6 */ if ((fS==fO)) goto L_00481af6;
L_00481ae9:; BB(0x00481ae9);
    /* 00481ae9: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481aec: mov dword ptr [ebp + edx*4 - 0x24], 0xffffffff */ W32((u32)(r_ebp+r_edx*4+0xffffffdcu), 0xffffffffu);
    /* 00481af4: jmp 0x481ada */ goto L_00481ada;
L_00481af6:; BB(0x00481af6);
    /* 00481af6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481af9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481afa: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481b00: call 0x4807e0 */ r_esp -= 4; W32(r_esp, 0x481b05u); f_004807e0();
    /* 00481b05: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00481b08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481b09: push 0x6bcf58 */ { u32 v = 0x6bcf58u; r_esp -= 4; W32(r_esp, v); }
    /* 00481b0e: lea edx, [ebp - 0xa0] */ r_edx = (u32)(r_ebp+0xffffff60u);
    /* 00481b14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481b15: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x481b1bu); call_ind(t); }
    /* 00481b1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481b1e: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 00481b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481b25: call 0x62fde0 */ r_esp -= 4; W32(r_esp, 0x481b2au); f_0062fde0();
    /* 00481b2a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481b2d: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481b33: add ecx, 0x120 */ {  u32 a = r_ecx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00481b39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481b3a: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00481b40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481b41: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00481b46: mov ecx, dword ptr [eax + 0x4efc] */ r_ecx = R32((u32)(r_eax+0x4efcu));
    /* 00481b4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481b4d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00481b50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481b51: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00481b57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481b58: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00481b5b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481b5c: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481b62: call 0x482070 */ r_esp -= 4; W32(r_esp, 0x481b67u); f_00482070();
    /* 00481b67: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 00481b71: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481b78: jmp 0x481b83 */ goto L_00481b83;
L_00481b7a:; BB(0x00481b7a);
    /* 00481b7a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481b7d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00481b80: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00481b83:; BB(0x00481b83);
    /* 00481b83: cmp dword ptr [ebp - 0x2c], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481b87: jge 0x481bbf */ if ((fS==fO)) goto L_00481bbf;
L_00481b89:; BB(0x00481b89);
    /* 00481b89: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481b8c: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00481b8f: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481b95: mov edx, dword ptr [ecx + eax + 0x124] */ r_edx = R32((u32)(r_ecx+r_eax+0x124u));
    /* 00481b9c: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481b9f: jne 0x481bbd */ if (!fZ) goto L_00481bbd;
L_00481ba1:; BB(0x00481ba1);
    /* 00481ba1: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00481ba7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481baa: mov dword ptr [ebp + eax*4 - 0x24], ecx */ W32((u32)(r_ebp+r_eax*4+0xffffffdcu), r_ecx);
    /* 00481bae: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00481bb4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00481bb7: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
L_00481bbd:; BB(0x00481bbd);
    /* 00481bbd: jmp 0x481b7a */ goto L_00481b7a;
L_00481bbf:; BB(0x00481bbf);
    /* 00481bbf: cmp dword ptr [ebp - 0xdc], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffff24u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481bc6: je 0x481bdf */ if (fZ) goto L_00481bdf;
L_00481bc8:; BB(0x00481bc8);
    /* 00481bc8: push 0xd19 */ { u32 v = 0xd19u; r_esp -= 4; W32(r_esp, v); }
    /* 00481bcd: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00481bd2: push 0x6bcf50 */ { u32 v = 0x6bcf50u; r_esp -= 4; W32(r_esp, v); }
    /* 00481bd7: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x481bdcu); f_005e9f20();
    /* 00481bdc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481bdf:; BB(0x00481bdf);
    /* 00481bdf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481be6: jmp 0x481bf1 */ goto L_00481bf1;
L_00481be8:; BB(0x00481be8);
    /* 00481be8: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481beb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00481bee: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_00481bf1:; BB(0x00481bf1);
    /* 00481bf1: cmp dword ptr [ebp - 0x2c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481bf5: jge 0x481c04 */ if ((fS==fO)) goto L_00481c04;
L_00481bf7:; BB(0x00481bf7);
    /* 00481bf7: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481bfa: mov byte ptr [ebp + edx - 0xd4], 0 */ W8((u32)(r_ebp+r_edx+0xffffff2cu), 0x0u);
    /* 00481c02: jmp 0x481be8 */ goto L_00481be8;
L_00481c04:; BB(0x00481c04);
    /* 00481c04: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481c0b: jmp 0x481c16 */ goto L_00481c16;
L_00481c0d:; BB(0x00481c0d);
    /* 00481c0d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481c10: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481c13: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00481c16:; BB(0x00481c16);
    /* 00481c16: cmp dword ptr [ebp - 0x2c], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481c1a: jge 0x481c8c */ if ((fS==fO)) goto L_00481c8c;
L_00481c1c:; BB(0x00481c1c);
    /* 00481c1c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c1e: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x481c23u); f_0062fbf0();
    /* 00481c23: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481c26: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00481c29: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481c2d: jge 0x481c46 */ if ((fS==fO)) goto L_00481c46;
L_00481c2f:; BB(0x00481c2f);
    /* 00481c2f: push 0xd24 */ { u32 v = 0xd24u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c34: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c39: push 0x6bcf48 */ { u32 v = 0x6bcf48u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c3e: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x481c43u); f_005e9f20();
    /* 00481c43: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481c46:; BB(0x00481c46);
    /* 00481c46: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481c4a: jle 0x481c63 */ if ((fZ||fS!=fO)) goto L_00481c63;
L_00481c4c:; BB(0x00481c4c);
    /* 00481c4c: push 0xd25 */ { u32 v = 0xd25u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c51: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c56: push 0x6bcf40 */ { u32 v = 0x6bcf40u; r_esp -= 4; W32(r_esp, v); }
    /* 00481c5b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x481c60u); f_005e9f20();
    /* 00481c60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481c63:; BB(0x00481c63);
    /* 00481c63: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481c66: movzx ecx, byte ptr [ebp + eax - 0xd4] */ r_ecx = (u32)R8((u32)(r_ebp+r_eax+0xffffff2cu));
    /* 00481c6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481c70: jne 0x481c1c */ if (!fZ) goto L_00481c1c;
L_00481c72:; BB(0x00481c72);
    /* 00481c72: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481c75: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481c78: mov dword ptr [ebp + edx*4 - 0xc8], eax */ W32((u32)(r_ebp+r_edx*4+0xffffff38u), r_eax);
    /* 00481c7f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481c82: mov byte ptr [ebp + ecx - 0xd4], 1 */ W8((u32)(r_ebp+r_ecx+0xffffff2cu), 0x1u);
    /* 00481c8a: jmp 0x481c0d */ goto L_00481c0d;
L_00481c8c:; BB(0x00481c8c);
    /* 00481c8c: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
    /* 00481c96: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481c9d: jmp 0x481ca8 */ goto L_00481ca8;
L_00481c9f:; BB(0x00481c9f);
    /* 00481c9f: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481ca2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00481ca5: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
L_00481ca8:; BB(0x00481ca8);
    /* 00481ca8: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00481cae: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x481cb3u); f_0047f950();
    /* 00481cb3: cmp dword ptr [ebp - 0x2c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481cb6: jge 0x481f05 */ if ((fS==fO)) goto L_00481f05;
L_00481cbc:; BB(0x00481cbc);
    /* 00481cbc: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481cbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481cc0: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481cc6: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x481ccbu); f_0047e390();
    /* 00481ccb: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00481cd1: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00481cd7: call 0x4c61b0 */ r_esp -= 4; W32(r_esp, 0x481cdcu); f_004c61b0();
    /* 00481cdc: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00481cdf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481ce1: je 0x481ce5 */ if (fZ) goto L_00481ce5;
L_00481ce3:; BB(0x00481ce3);
    /* 00481ce3: jmp 0x481c9f */ goto L_00481c9f;
L_00481ce5:; BB(0x00481ce5);
    /* 00481ce5: mov edx, dword ptr [ebp - 0xdc] */ r_edx = R32((u32)(r_ebp+0xffffff24u));
    /* 00481ceb: mov eax, dword ptr [ebp + edx*4 - 0xc8] */ r_eax = R32((u32)(r_ebp+r_edx*4+0xffffff38u));
    /* 00481cf2: mov ecx, dword ptr [ebp + eax*4 - 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0xffffffdcu));
    /* 00481cf6: mov dword ptr [ebp - 0xa4], ecx */ W32((u32)(r_ebp+0xffffff5cu), r_ecx);
    /* 00481cfc: mov edx, dword ptr [ebp - 0xd8] */ r_edx = R32((u32)(r_ebp+0xffffff28u));
    /* 00481d02: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00481d08: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 00481d0b: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00481d11: imul ecx, ecx, 0xc */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0xcu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00481d14: mov edx, dword ptr [ecx + 0x720648] */ r_edx = R32((u32)(r_ecx+0x720648u));
    /* 00481d1a: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 00481d20: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481d23: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481d29: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00481d2f: mov dword ptr [ecx + eax*4 + 0x3b4], edx */ W32((u32)(r_ecx+r_eax*4+0x3b4u), r_edx);
    /* 00481d36: mov eax, dword ptr [ebp - 0xd8] */ r_eax = R32((u32)(r_ebp+0xffffff28u));
    /* 00481d3c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00481d3f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481d40: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481d45u); f_005dcb00();
    /* 00481d45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481d48: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00481d4e: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00481d54: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x481d59u); f_0063aac0();
    /* 00481d59: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00481d5b: mov dword ptr [ebp - 0xe0], edx */ W32((u32)(r_ebp+0xffffff20u), r_edx);
    /* 00481d61: cmp dword ptr [ebp - 0xe0], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff20u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481d68: je 0x481d92 */ if (fZ) goto L_00481d92;
L_00481d6a:; BB(0x00481d6a);
    /* 00481d6a: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00481d70: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x481d75u); f_0063aac0();
    /* 00481d75: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00481d77: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00481d7d: cmp dword ptr [ebp - 0xe4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff1cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481d84: je 0x481d92 */ if (fZ) goto L_00481d92;
L_00481d86:; BB(0x00481d86);
    /* 00481d86: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
    /* 00481d90: jmp 0x481d9c */ goto L_00481d9c;
L_00481d92:; BB(0x00481d92);
    /* 00481d92: mov dword ptr [ebp - 0xf4], 1 */ W32((u32)(r_ebp+0xffffff0cu), 0x1u);
L_00481d9c:; BB(0x00481d9c);
    /* 00481d9c: movzx ecx, byte ptr [ebp - 0xf4] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffff0cu));
    /* 00481da3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481da5: je 0x481dbe */ if (fZ) goto L_00481dbe;
L_00481da7:; BB(0x00481da7);
    /* 00481da7: push 0xd3d */ { u32 v = 0xd3du; r_esp -= 4; W32(r_esp, v); }
    /* 00481dac: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00481db1: push 0x6bcf24 */ { u32 v = 0x6bcf24u; r_esp -= 4; W32(r_esp, v); }
    /* 00481db6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x481dbbu); f_005e9f20();
    /* 00481dbb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00481dbe:; BB(0x00481dbe);
    /* 00481dbe: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00481dc4: imul eax, eax, 0xc */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xcu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00481dc7: mov ecx, dword ptr [eax + 0x720650] */ r_ecx = R32((u32)(r_eax+0x720650u));
    /* 00481dcd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481dce: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x481dd3u); f_00630f40();
    /* 00481dd3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481dd6: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00481ddc: mov edx, dword ptr [ebp - 0xe8] */ r_edx = R32((u32)(r_ebp+0xffffff18u));
    /* 00481de2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481de3: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00481de9: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x481deeu); f_0063aac0();
    /* 00481dee: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481df1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481df2: call 0x686d8e */ r_esp -= 4; W32(r_esp, 0x481df7u); f_00686d8e();
    /* 00481df7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481dfa: cmp dword ptr [ebp - 0xa4], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481e01: jge 0x481e2d */ if ((fS==fO)) goto L_00481e2d;
L_00481e03:; BB(0x00481e03);
    /* 00481e03: cmp dword ptr [ebp - 0xa4], 0x17 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481e0a: jl 0x481e2d */ if ((fS!=fO)) goto L_00481e2d;
L_00481e0c:; BB(0x00481e0c);
    /* 00481e0c: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00481e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481e13: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00481e19: call 0x63b490 */ r_esp -= 4; W32(r_esp, 0x481e1eu); f_0063b490();
    /* 00481e1e: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00481e24: mov dword ptr [ecx + 0xc], 0xffffffff */ W32((u32)(r_ecx+0xcu), 0xffffffffu);
    /* 00481e2b: jmp 0x481e3c */ goto L_00481e3c;
L_00481e2d:; BB(0x00481e2d);
    /* 00481e2d: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00481e33: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00481e39: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_00481e3c:; BB(0x00481e3c);
    /* 00481e3c: mov ecx, dword ptr [ebp - 0xdc] */ r_ecx = R32((u32)(r_ebp+0xffffff24u));
    /* 00481e42: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00481e45: mov dword ptr [ebp - 0xdc], ecx */ W32((u32)(r_ebp+0xffffff24u), r_ecx);
    /* 00481e4b: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00481e51: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00481e54: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00481e5a: mov ecx, dword ptr [eax + edx + 0x12c] */ r_ecx = R32((u32)(r_eax+r_edx+0x12cu));
    /* 00481e61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481e62: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481e68: call 0x481870 */ r_esp -= 4; W32(r_esp, 0x481e6du); f_00481870();
    /* 00481e6d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00481e70: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481e73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481e74: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00481e7a: call 0x4c67d0 */ r_esp -= 4; W32(r_esp, 0x481e7fu); f_004c67d0();
    /* 00481e7f: mov eax, dword ptr [ebp - 0xdc] */ r_eax = R32((u32)(r_ebp+0xffffff24u));
    /* 00481e85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481e86: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00481e89: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481e8a: mov edx, dword ptr [ebp - 0xa4] */ r_edx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00481e90: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00481e93: mov eax, dword ptr [ebp - 0xf0] */ r_eax = R32((u32)(r_ebp+0xffffff10u));
    /* 00481e99: mov ecx, dword ptr [eax + edx + 0x130] */ r_ecx = R32((u32)(r_eax+r_edx+0x130u));
    /* 00481ea0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481ea1: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481ea7: call 0x4818e0 */ r_esp -= 4; W32(r_esp, 0x481eacu); f_004818e0();
    /* 00481eac: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00481eaf: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481eb2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481eb3: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00481eb9: call 0x4c68c0 */ r_esp -= 4; W32(r_esp, 0x481ebeu); f_004c68c0();
    /* 00481ebe: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 00481ec4: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00481ec7: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481ecd: mov edx, dword ptr [ecx + eax + 0x120] */ r_edx = R32((u32)(r_ecx+r_eax+0x120u));
    /* 00481ed4: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00481ed7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00481ede: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00481ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00481ee2: mov ecx, dword ptr [ebp - 0xd8] */ r_ecx = R32((u32)(r_ebp+0xffffff28u));
    /* 00481ee8: call 0x4c6aa0 */ r_esp -= 4; W32(r_esp, 0x481eedu); f_004c6aa0();
    /* 00481eed: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00481ef0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481ef1: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00481ef4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481ef5: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00481efb: call 0x5d5af0 */ r_esp -= 4; W32(r_esp, 0x481f00u); f_005d5af0();
    /* 00481f00: jmp 0x481c9f */ goto L_00481c9f;
L_00481f05:; BB(0x00481f05);
    /* 00481f05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00481f07: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481f0d: call 0x47e540 */ r_esp -= 4; W32(r_esp, 0x481f12u); f_0047e540();
    /* 00481f12: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00481f19: jmp 0x481f24 */ goto L_00481f24;
L_00481f1b:; BB(0x00481f1b);
    /* 00481f1b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481f1e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00481f21: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00481f24:; BB(0x00481f24);
    /* 00481f24: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00481f2a: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x481f2fu); f_0047f950();
    /* 00481f2f: cmp dword ptr [ebp - 0x2c], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00481f32: jge 0x481f5d */ if ((fS==fO)) goto L_00481f5d;
L_00481f34:; BB(0x00481f34);
    /* 00481f34: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481f36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481f38: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481f3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00481f3c: call 0x5dcb00 */ r_esp -= 4; W32(r_esp, 0x481f41u); f_005dcb00();
    /* 00481f41: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00481f44: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00481f47: call 0x6464d0 */ r_esp -= 4; W32(r_esp, 0x481f4cu); f_006464d0();
    /* 00481f4c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00481f4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481f50: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481f56: call 0x483630 */ r_esp -= 4; W32(r_esp, 0x481f5bu); f_00483630();
    /* 00481f5b: jmp 0x481f1b */ goto L_00481f1b;
L_00481f5d:; BB(0x00481f5d);
    /* 00481f5d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 00481f62: mov ecx, dword ptr [eax + 0xf4] */ r_ecx = R32((u32)(r_eax+0xf4u));
    /* 00481f68: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 00481f6e: cmp dword ptr [ebp - 0xec], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffff14u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f75: jne 0x48202d */ if (!fZ) goto L_0048202d;
L_00481f7b:; BB(0x00481f7b);
    /* 00481f7b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00481f7e: mov dword ptr [ebp - 0xf8], edx */ W32((u32)(r_ebp+0xffffff08u), r_edx);
    /* 00481f84: cmp dword ptr [ebp - 0xf8], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f8b: je 0x481fa4 */ if (fZ) goto L_00481fa4;
L_00481f8d:; BB(0x00481f8d);
    /* 00481f8d: cmp dword ptr [ebp - 0xf8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f94: je 0x481fdd */ if (fZ) goto L_00481fdd;
L_00481f96:; BB(0x00481f96);
    /* 00481f96: cmp dword ptr [ebp - 0xf8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff08u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f9d: je 0x482006 */ if (fZ) goto L_00482006;
L_00481f9f:; BB(0x00481f9f);
    /* 00481f9f: jmp 0x48202d */ goto L_0048202d;
L_00481fa4:; BB(0x00481fa4);
    /* 00481fa4: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481faa: call 0x47e170 */ r_esp -= 4; W32(r_esp, 0x481fafu); f_0047e170();
    /* 00481faf: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481fb2: je 0x481fdb */ if (fZ) goto L_00481fdb;
L_00481fb4:; BB(0x00481fb4);
    /* 00481fb4: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00481fb9: mov dword ptr [eax + 0x4f18], 2 */ W32((u32)(r_eax+0x4f18u), 0x2u);
    /* 00481fc3: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00481fc9: mov edx, dword ptr [ecx + 0x4f18] */ r_edx = R32((u32)(r_ecx+0x4f18u));
    /* 00481fcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481fd0: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481fd6: call 0x47d810 */ r_esp -= 4; W32(r_esp, 0x481fdbu); f_0047d810();
L_00481fdb:; BB(0x00481fdb);
    /* 00481fdb: jmp 0x48202d */ goto L_0048202d;
L_00481fdd:; BB(0x00481fdd);
    /* 00481fdd: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 00481fe2: mov dword ptr [eax + 0x4f18], 3 */ W32((u32)(r_eax+0x4f18u), 0x3u);
    /* 00481fec: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 00481ff2: mov edx, dword ptr [ecx + 0x4f18] */ r_edx = R32((u32)(r_ecx+0x4f18u));
    /* 00481ff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481ff9: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00481fff: call 0x47d810 */ r_esp -= 4; W32(r_esp, 0x482004u); f_0047d810();
    /* 00482004: jmp 0x48202d */ goto L_0048202d;
L_00482006:; BB(0x00482006);
    /* 00482006: mov eax, dword ptr [0x7947e0] */ r_eax = R32((u32)(0x7947e0u));
    /* 0048200b: mov dword ptr [eax + 0x4f18], 0 */ W32((u32)(r_eax+0x4f18u), 0x0u);
    /* 00482015: mov ecx, dword ptr [0x7947e0] */ r_ecx = R32((u32)(0x7947e0u));
    /* 0048201b: mov edx, dword ptr [ecx + 0x4f18] */ r_edx = R32((u32)(r_ecx+0x4f18u));
    /* 00482021: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482022: mov ecx, dword ptr [ebp - 0xf0] */ r_ecx = R32((u32)(r_ebp+0xffffff10u));
    /* 00482028: call 0x47d810 */ r_esp -= 4; W32(r_esp, 0x48202du); f_0047d810();
L_0048202d:; BB(0x0048202d);
    /* 0048202d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00482034: jmp 0x48203f */ goto L_0048203f;
L_00482036:; BB(0x00482036);
    /* 00482036: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00482039: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048203c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0048203f:; BB(0x0048203f);
    /* 0048203f: cmp dword ptr [ebp - 0x2c], 7 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482043: jge 0x482058 */ if ((fS==fO)) goto L_00482058;
L_00482045:; BB(0x00482045);
    /* 00482045: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482047: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0048204a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048204b: mov ecx, dword ptr [0x7947e4] */ r_ecx = R32((u32)(0x7947e4u));
    /* 00482051: call 0x5d9180 */ r_esp -= 4; W32(r_esp, 0x482056u); f_005d9180();
    /* 00482056: jmp 0x482036 */ goto L_00482036;
L_00482058:; BB(0x00482058);
    /* 00482058: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_0048205a:; BB(0x0048205a);
    /* 0048205a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0048205d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048205f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x482064u); f_00686d72();
    /* 00482064: mov esp, ebp */ r_esp = r_ebp;
    /* 00482066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482067: ret 4 */ FN_RET(0x00481a00); r_esp += 8; return;
}

void f_00482070(void) /* PokerGame::func_00482070 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482070);
    /* 00482070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482071: mov ebp, esp */ r_ebp = r_esp;
    /* 00482073: sub esp, 0xe0 */ {  u32 a = r_esp; u32 b = 0xe0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482079: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0048207e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00482080: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00482086: mov dword ptr [ebp - 0xd0], ecx */ W32((u32)(r_ebp+0xffffff30u), r_ecx);
    /* 0048208c: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 00482096: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 004820a0: mov dword ptr [ebp - 0xb4], 0 */ W32((u32)(r_ebp+0xffffff4cu), 0x0u);
    /* 004820aa: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 004820b4: fldz  */ FPUSH(0.0);
    /* 004820b6: fstp qword ptr [ebp - 0x98] */ W_F64((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 004820bc: fldz  */ FPUSH(0.0);
    /* 004820be: fstp qword ptr [ebp - 0xa8] */ W_F64((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 004820c4: cmp dword ptr [ebp + 0x18], -1 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004820c8: jge 0x4820f2 */ if ((fS==fO)) goto L_004820f2;
L_004820ca:; BB(0x004820ca);
    /* 004820ca: cmp dword ptr [ebp + 0x18], 0x17 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004820ce: jl 0x4820f2 */ if ((fS!=fO)) goto L_004820f2;
L_004820d0:; BB(0x004820d0);
    /* 004820d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004820d2: jne 0x4820eb */ if (!fZ) goto L_004820eb;
L_004820d4:; BB(0x004820d4);
    /* 004820d4: push 0xd94 */ { u32 v = 0xd94u; r_esp -= 4; W32(r_esp, v); }
    /* 004820d9: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 004820de: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004820e3: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4820e8u); f_005e9f20();
    /* 004820e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004820eb:; BB(0x004820eb);
    /* 004820eb: mov dword ptr [ebp + 0x18], 0xffffffff */ W32((u32)(r_ebp+0x18u), 0xffffffffu);
L_004820f2:; BB(0x004820f2);
    /* 004820f2: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004820f6: jl 0x4820fe */ if ((fS!=fO)) goto L_004820fe;
L_004820f8:; BB(0x004820f8);
    /* 004820f8: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004820fc: jle 0x482119 */ if ((fZ||fS!=fO)) goto L_00482119;
L_004820fe:; BB(0x004820fe);
    /* 004820fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00482100: jne 0x482119 */ if (!fZ) goto L_00482119;
L_00482102:; BB(0x00482102);
    /* 00482102: push 0xd99 */ { u32 v = 0xd99u; r_esp -= 4; W32(r_esp, v); }
    /* 00482107: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0048210c: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00482111: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x482116u); f_005e9f20();
    /* 00482116: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00482119:; BB(0x00482119);
    /* 00482119: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482123: jmp 0x482134 */ goto L_00482134;
L_00482125:; BB(0x00482125);
    /* 00482125: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0048212b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048212e: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_00482134:; BB(0x00482134);
    /* 00482134: cmp dword ptr [ebp - 0x90], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048213b: jge 0x48214d */ if ((fS==fO)) goto L_0048214d;
L_0048213d:; BB(0x0048213d);
    /* 0048213d: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482143: mov byte ptr [ebp + edx - 0xc0], 0 */ W8((u32)(r_ebp+r_edx+0xffffff40u), 0x0u);
    /* 0048214b: jmp 0x482125 */ goto L_00482125;
L_0048214d:; BB(0x0048214d);
    /* 0048214d: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482151: je 0x482532 */ if (fZ) goto L_00482532;
L_00482157:; BB(0x00482157);
    /* 00482157: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482161: jmp 0x482172 */ goto L_00482172;
L_00482163:; BB(0x00482163);
    /* 00482163: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482169: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048216c: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_00482172:; BB(0x00482172);
    /* 00482172: cmp dword ptr [ebp - 0x90], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482179: jge 0x4821c4 */ if ((fS==fO)) goto L_004821c4;
L_0048217b:; BB(0x0048217b);
    /* 0048217b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482181: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482184: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482187: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048218a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0048218d: cmp dword ptr [eax + ecx + 4], edx */ {  u32 a = R32((u32)(r_eax+r_ecx+0x4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482191: jne 0x4821b1 */ if (!fZ) goto L_004821b1;
L_00482193:; BB(0x00482193);
    /* 00482193: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482199: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048219c: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004821a2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004821a5: mov ecx, dword ptr [eax + ecx] */ r_ecx = R32((u32)(r_eax+r_ecx));
    /* 004821a8: mov dword ptr [ebp + edx*4 - 0x88], ecx */ W32((u32)(r_ebp+r_edx*4+0xffffff78u), r_ecx);
    /* 004821af: jmp 0x4821c2 */ goto L_004821c2;
L_004821b1:; BB(0x004821b1);
    /* 004821b1: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004821b7: mov dword ptr [ebp + edx*4 - 0x88], 0xffffffff */ W32((u32)(r_ebp+r_edx*4+0xffffff78u), 0xffffffffu);
L_004821c2:; BB(0x004821c2);
    /* 004821c2: jmp 0x482163 */ goto L_00482163;
L_004821c4:; BB(0x004821c4);
    /* 004821c4: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004821c6: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 004821cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004821cd: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004821d3: call 0x482d80 */ r_esp -= 4; W32(r_esp, 0x4821d8u); f_00482d80();
    /* 004821d8: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 004821e2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004821e5: mov dword ptr [ebp - 0xd4], ecx */ W32((u32)(r_ebp+0xffffff2cu), r_ecx);
    /* 004821eb: cmp dword ptr [ebp - 0xd4], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004821f2: je 0x482206 */ if (fZ) goto L_00482206;
L_004821f4:; BB(0x004821f4);
    /* 004821f4: cmp dword ptr [ebp - 0xd4], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004821fb: je 0x48229a */ if (fZ) goto L_0048229a;
L_00482201:; BB(0x00482201);
    /* 00482201: jmp 0x482532 */ goto L_00482532;
L_00482206:; BB(0x00482206);
    /* 00482206: mov dword ptr [ebp - 0x90], 0x20 */ W32((u32)(r_ebp+0xffffff70u), 0x20u);
    /* 00482210: jmp 0x482221 */ goto L_00482221;
L_00482212:; BB(0x00482212);
    /* 00482212: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482218: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048221b: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_00482221:; BB(0x00482221);
    /* 00482221: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482228: jl 0x482290 */ if ((fS!=fO)) goto L_00482290;
L_0048222a:; BB(0x0048222a);
    /* 0048222a: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482230: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482233: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482236: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0048223c: mov eax, dword ptr [ecx + eax] */ r_eax = R32((u32)(r_ecx+r_eax));
    /* 0048223f: cmp eax, dword ptr [ebp + edx*4 - 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffff78u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482246: jne 0x48228e */ if (!fZ) goto L_0048228e;
L_00482248:; BB(0x00482248);
    /* 00482248: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0048224e: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482251: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482254: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00482257: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0048225a: cmp dword ptr [eax + ecx + 4], edx */ {  u32 a = R32((u32)(r_eax+r_ecx+0x4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048225e: jne 0x48228e */ if (!fZ) goto L_0048228e;
L_00482260:; BB(0x00482260);
    /* 00482260: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482266: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482269: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0048226c: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482270: jle 0x48228e */ if ((fZ||fS!=fO)) goto L_0048228e;
L_00482272:; BB(0x00482272);
    /* 00482272: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482275: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482276: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482279: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048227a: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482281: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00482287: call 0x482e10 */ r_esp -= 4; W32(r_esp, 0x48228cu); f_00482e10();
    /* 0048228c: jmp 0x482290 */ goto L_00482290;
L_0048228e:; BB(0x0048228e);
    /* 0048228e: jmp 0x482212 */ goto L_00482212;
L_00482290:; BB(0x00482290);
    /* 00482290: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
L_0048229a:; BB(0x0048229a);
    /* 0048229a: mov dword ptr [ebp - 0x90], 0x20 */ W32((u32)(r_ebp+0xffffff70u), 0x20u);
    /* 004822a4: jmp 0x4822b5 */ goto L_004822b5;
L_004822a6:; BB(0x004822a6);
    /* 004822a6: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 004822ac: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004822af: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_004822b5:; BB(0x004822b5);
    /* 004822b5: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004822bc: jl 0x482317 */ if ((fS!=fO)) goto L_00482317;
L_004822be:; BB(0x004822be);
    /* 004822be: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004822c4: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004822c7: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004822ca: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 004822d0: mov ecx, dword ptr [edx + ecx] */ r_ecx = R32((u32)(r_edx+r_ecx));
    /* 004822d3: cmp ecx, dword ptr [ebp + eax*4 - 0x88] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*4+0xffffff78u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004822da: jne 0x482315 */ if (!fZ) goto L_00482315;
L_004822dc:; BB(0x004822dc);
    /* 004822dc: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004822e2: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004822e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004822e8: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004822eb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004822ee: cmp dword ptr [ecx + edx + 4], eax */ {  u32 a = R32((u32)(r_ecx+r_edx+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004822f2: jne 0x482315 */ if (!fZ) goto L_00482315;
L_004822f4:; BB(0x004822f4);
    /* 004822f4: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004822fa: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004822fd: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482300: cmp dword ptr [eax + edx], 0 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482304: jle 0x482315 */ if ((fZ||fS!=fO)) goto L_00482315;
L_00482306:; BB(0x00482306);
    /* 00482306: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0048230c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048230f: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_00482315:; BB(0x00482315);
    /* 00482315: jmp 0x4822a6 */ goto L_004822a6;
L_00482317:; BB(0x00482317);
    /* 00482317: mov dword ptr [ebp - 0x90], 0x17 */ W32((u32)(r_ebp+0xffffff70u), 0x17u);
    /* 00482321: jmp 0x482332 */ goto L_00482332;
L_00482323:; BB(0x00482323);
    /* 00482323: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482329: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048232c: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_00482332:; BB(0x00482332);
    /* 00482332: cmp dword ptr [ebp - 0x90], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482339: jge 0x482394 */ if ((fS==fO)) goto L_00482394;
L_0048233b:; BB(0x0048233b);
    /* 0048233b: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482341: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482344: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482347: mov edx, dword ptr [ebp - 0xb0] */ r_edx = R32((u32)(r_ebp+0xffffff50u));
    /* 0048234d: mov eax, dword ptr [ecx + eax] */ r_eax = R32((u32)(r_ecx+r_eax));
    /* 00482350: cmp eax, dword ptr [ebp + edx*4 - 0x88] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+r_edx*4+0xffffff78u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482357: jne 0x482392 */ if (!fZ) goto L_00482392;
L_00482359:; BB(0x00482359);
    /* 00482359: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0048235f: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482362: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482365: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00482368: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0048236b: cmp dword ptr [eax + ecx + 4], edx */ {  u32 a = R32((u32)(r_eax+r_ecx+0x4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048236f: jne 0x482392 */ if (!fZ) goto L_00482392;
L_00482371:; BB(0x00482371);
    /* 00482371: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482377: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048237a: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0048237d: cmp dword ptr [edx + ecx], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482381: jle 0x482392 */ if ((fZ||fS!=fO)) goto L_00482392;
L_00482383:; BB(0x00482383);
    /* 00482383: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 00482389: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048238c: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
L_00482392:; BB(0x00482392);
    /* 00482392: jmp 0x482323 */ goto L_00482323;
L_00482394:; BB(0x00482394);
    /* 00482394: cmp dword ptr [ebp - 0xac], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048239b: je 0x4823aa */ if (fZ) goto L_004823aa;
L_0048239d:; BB(0x0048239d);
    /* 0048239d: cmp dword ptr [ebp - 0x8c], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004823a4: jne 0x482446 */ if (!fZ) goto L_00482446;
L_004823aa:; BB(0x004823aa);
    /* 004823aa: mov dword ptr [ebp - 0x90], 0x20 */ W32((u32)(r_ebp+0xffffff70u), 0x20u);
    /* 004823b4: jmp 0x4823c5 */ goto L_004823c5;
L_004823b6:; BB(0x004823b6);
    /* 004823b6: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004823bc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004823bf: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_004823c5:; BB(0x004823c5);
    /* 004823c5: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004823cc: jl 0x482441 */ if ((fS!=fO)) goto L_00482441;
L_004823ce:; BB(0x004823ce);
    /* 004823ce: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004823d4: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004823d7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004823da: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 004823e0: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 004823e3: cmp edx, dword ptr [ebp + ecx*4 - 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffff78u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004823ea: jne 0x48243c */ if (!fZ) goto L_0048243c;
L_004823ec:; BB(0x004823ec);
    /* 004823ec: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 004823f2: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004823f5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004823f8: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004823fb: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004823fe: cmp dword ptr [edx + eax + 4], ecx */ {  u32 a = R32((u32)(r_edx+r_eax+0x4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482402: jne 0x48243c */ if (!fZ) goto L_0048243c;
L_00482404:; BB(0x00482404);
    /* 00482404: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0048240a: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048240d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482410: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482414: jle 0x48243c */ if ((fZ||fS!=fO)) goto L_0048243c;
L_00482416:; BB(0x00482416);
    /* 00482416: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482419: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048241a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048241d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048241e: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482424: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482425: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0048242b: call 0x482e10 */ r_esp -= 4; W32(r_esp, 0x482430u); f_00482e10();
    /* 00482430: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 0048243a: jmp 0x482441 */ goto L_00482441;
L_0048243c:; BB(0x0048243c);
    /* 0048243c: jmp 0x4823b6 */ goto L_004823b6;
L_00482441:; BB(0x00482441);
    /* 00482441: jmp 0x482532 */ goto L_00482532;
L_00482446:; BB(0x00482446);
    /* 00482446: cmp dword ptr [ebp - 0xac], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048244d: jle 0x48245b */ if ((fZ||fS!=fO)) goto L_0048245b;
L_0048244f:; BB(0x0048244f);
    /* 0048244f: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 00482455: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
L_0048245b:; BB(0x0048245b);
    /* 0048245b: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00482461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482462: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x482467u); f_0062fbf0();
    /* 00482467: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048246a: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00482470: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 0048247a: mov dword ptr [ebp - 0x90], 0x20 */ W32((u32)(r_ebp+0xffffff70u), 0x20u);
    /* 00482484: jmp 0x482495 */ goto L_00482495;
L_00482486:; BB(0x00482486);
    /* 00482486: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 0048248c: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048248f: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_00482495:; BB(0x00482495);
    /* 00482495: cmp dword ptr [ebp - 0x90], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048249c: jl 0x482532 */ if ((fS!=fO)) goto L_00482532;
L_004824a2:; BB(0x004824a2);
    /* 004824a2: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004824a8: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004824ab: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004824ae: mov ecx, dword ptr [ebp - 0xb0] */ r_ecx = R32((u32)(r_ebp+0xffffff50u));
    /* 004824b4: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 004824b7: cmp edx, dword ptr [ebp + ecx*4 - 0x88] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+r_ecx*4+0xffffff78u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004824be: jne 0x48252d */ if (!fZ) goto L_0048252d;
L_004824c0:; BB(0x004824c0);
    /* 004824c0: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 004824c6: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004824c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004824cc: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004824cf: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004824d2: cmp dword ptr [edx + eax + 4], ecx */ {  u32 a = R32((u32)(r_edx+r_eax+0x4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004824d6: jne 0x48252d */ if (!fZ) goto L_0048252d;
L_004824d8:; BB(0x004824d8);
    /* 004824d8: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 004824de: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004824e1: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004824e4: cmp dword ptr [ecx + eax], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004824e8: jle 0x48252d */ if ((fZ||fS!=fO)) goto L_0048252d;
L_004824ea:; BB(0x004824ea);
    /* 004824ea: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 004824f0: cmp edx, dword ptr [ebp - 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004824f6: jne 0x48251e */ if (!fZ) goto L_0048251e;
L_004824f8:; BB(0x004824f8);
    /* 004824f8: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004824fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004824fc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004824ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482500: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482506: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482507: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0048250d: call 0x482e10 */ r_esp -= 4; W32(r_esp, 0x482512u); f_00482e10();
    /* 00482512: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 0048251c: jmp 0x482532 */ goto L_00482532;
L_0048251e:; BB(0x0048251e);
    /* 0048251e: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00482524: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482527: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_0048252d:; BB(0x0048252d);
    /* 0048252d: jmp 0x482486 */ goto L_00482486;
L_00482532:; BB(0x00482532);
    /* 00482532: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482535: mov dword ptr [ebp - 0xd8], ecx */ W32((u32)(r_ebp+0xffffff28u), r_ecx);
    /* 0048253b: cmp dword ptr [ebp - 0xd8], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482542: je 0x482563 */ if (fZ) goto L_00482563;
L_00482544:; BB(0x00482544);
    /* 00482544: cmp dword ptr [ebp - 0xd8], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048254b: je 0x48266c */ if (fZ) goto L_0048266c;
L_00482551:; BB(0x00482551);
    /* 00482551: cmp dword ptr [ebp - 0xd8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff28u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482558: je 0x4827b6 */ if (fZ) goto L_004827b6;
L_0048255e:; BB(0x0048255e);
    /* 0048255e: jmp 0x4829c6 */ goto L_004829c6;
L_00482563:; BB(0x00482563);
    /* 00482563: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0048256d: jmp 0x48257e */ goto L_0048257e;
L_0048256f:; BB(0x0048256f);
    /* 0048256f: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482575: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482578: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_0048257e:; BB(0x0048257e);
    /* 0048257e: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482585: jge 0x4825a4 */ if ((fS==fO)) goto L_004825a4;
L_00482587:; BB(0x00482587);
    /* 00482587: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0048258a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048258b: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0048258e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048258f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482592: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482593: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482595: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482597: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0048259d: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4825a2u); f_00482e80();
    /* 004825a2: jmp 0x48256f */ goto L_0048256f;
L_004825a4:; BB(0x004825a4);
    /* 004825a4: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004825ae: jmp 0x4825bf */ goto L_004825bf;
L_004825b0:; BB(0x004825b0);
    /* 004825b0: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 004825b6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004825b9: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_004825bf:; BB(0x004825bf);
    /* 004825bf: cmp dword ptr [ebp - 0x90], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004825c6: jge 0x4825e5 */ if ((fS==fO)) goto L_004825e5;
L_004825c8:; BB(0x004825c8);
    /* 004825c8: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004825cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004825cc: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004825cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004825d0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004825d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004825d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004825d6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004825d8: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004825de: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4825e3u); f_00482e80();
    /* 004825e3: jmp 0x4825b0 */ goto L_004825b0;
L_004825e5:; BB(0x004825e5);
    /* 004825e5: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004825ef: jmp 0x482600 */ goto L_00482600;
L_004825f1:; BB(0x004825f1);
    /* 004825f1: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004825f7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004825fa: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_00482600:; BB(0x00482600);
    /* 00482600: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482607: jge 0x482626 */ if ((fS==fO)) goto L_00482626;
L_00482609:; BB(0x00482609);
    /* 00482609: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0048260c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048260d: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00482610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482611: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482614: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482615: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482617: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00482619: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0048261f: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x482624u); f_00482e80();
    /* 00482624: jmp 0x4825f1 */ goto L_004825f1;
L_00482626:; BB(0x00482626);
    /* 00482626: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482630: jmp 0x482641 */ goto L_00482641;
L_00482632:; BB(0x00482632);
    /* 00482632: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482638: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048263b: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_00482641:; BB(0x00482641);
    /* 00482641: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482648: jge 0x482667 */ if ((fS==fO)) goto L_00482667;
L_0048264a:; BB(0x0048264a);
    /* 0048264a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0048264d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048264e: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00482651: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482652: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482655: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482656: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482658: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0048265a: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00482660: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x482665u); f_00482e80();
    /* 00482665: jmp 0x482632 */ goto L_00482632;
L_00482667:; BB(0x00482667);
    /* 00482667: jmp 0x4829c6 */ goto L_004829c6;
L_0048266c:; BB(0x0048266c);
    /* 0048266c: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482676: jmp 0x482687 */ goto L_00482687;
L_00482678:; BB(0x00482678);
    /* 00482678: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0048267e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482681: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_00482687:; BB(0x00482687);
    /* 00482687: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048268e: jge 0x4826ad */ if ((fS==fO)) goto L_004826ad;
L_00482690:; BB(0x00482690);
    /* 00482690: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482693: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482694: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00482697: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482698: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048269b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048269c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048269e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004826a0: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004826a6: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4826abu); f_00482e80();
    /* 004826ab: jmp 0x482678 */ goto L_00482678;
L_004826ad:; BB(0x004826ad);
    /* 004826ad: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004826b7: jmp 0x4826c8 */ goto L_004826c8;
L_004826b9:; BB(0x004826b9);
    /* 004826b9: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004826bf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004826c2: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_004826c8:; BB(0x004826c8);
    /* 004826c8: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004826cf: jge 0x4826ee */ if ((fS==fO)) goto L_004826ee;
L_004826d1:; BB(0x004826d1);
    /* 004826d1: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004826d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004826d5: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004826d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004826d9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004826dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004826dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004826df: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004826e1: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004826e7: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4826ecu); f_00482e80();
    /* 004826ec: jmp 0x4826b9 */ goto L_004826b9;
L_004826ee:; BB(0x004826ee);
    /* 004826ee: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004826f8: jmp 0x482709 */ goto L_00482709;
L_004826fa:; BB(0x004826fa);
    /* 004826fa: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482700: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482703: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_00482709:; BB(0x00482709);
    /* 00482709: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482710: jge 0x48272f */ if ((fS==fO)) goto L_0048272f;
L_00482712:; BB(0x00482712);
    /* 00482712: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482716: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00482719: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048271a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0048271d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048271e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482720: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482722: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00482728: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x48272du); f_00482e80();
    /* 0048272d: jmp 0x4826fa */ goto L_004826fa;
L_0048272f:; BB(0x0048272f);
    /* 0048272f: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482739: jmp 0x48274a */ goto L_0048274a;
L_0048273b:; BB(0x0048273b);
    /* 0048273b: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482741: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482744: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_0048274a:; BB(0x0048274a);
    /* 0048274a: cmp dword ptr [ebp - 0x90], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482751: jge 0x482770 */ if ((fS==fO)) goto L_00482770;
L_00482753:; BB(0x00482753);
    /* 00482753: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482757: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0048275a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048275b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048275e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048275f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482761: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00482763: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00482769: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x48276eu); f_00482e80();
    /* 0048276e: jmp 0x48273b */ goto L_0048273b;
L_00482770:; BB(0x00482770);
    /* 00482770: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0048277a: jmp 0x48278b */ goto L_0048278b;
L_0048277c:; BB(0x0048277c);
    /* 0048277c: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482782: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482785: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_0048278b:; BB(0x0048278b);
    /* 0048278b: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482792: jge 0x4827b1 */ if ((fS==fO)) goto L_004827b1;
L_00482794:; BB(0x00482794);
    /* 00482794: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482797: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482798: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0048279b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048279c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0048279f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004827a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004827a2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004827a4: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004827aa: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4827afu); f_00482e80();
    /* 004827af: jmp 0x48277c */ goto L_0048277c;
L_004827b1:; BB(0x004827b1);
    /* 004827b1: jmp 0x4829c6 */ goto L_004829c6;
L_004827b6:; BB(0x004827b6);
    /* 004827b6: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
    /* 004827c0: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 004827ca: mov dword ptr [ebp - 0x90], 0x17 */ W32((u32)(r_ebp+0xffffff70u), 0x17u);
    /* 004827d4: jmp 0x4827e5 */ goto L_004827e5;
L_004827d6:; BB(0x004827d6);
    /* 004827d6: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 004827dc: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004827df: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_004827e5:; BB(0x004827e5);
    /* 004827e5: cmp dword ptr [ebp - 0x90], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004827ec: jge 0x482882 */ if ((fS==fO)) goto L_00482882;
L_004827f2:; BB(0x004827f2);
    /* 004827f2: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 004827f8: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004827fb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004827fe: movzx edx, byte ptr [ecx + eax + 8] */ r_edx = (u32)R8((u32)(r_ecx+r_eax+0x8u));
    /* 00482803: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482805: je 0x48287d */ if (fZ) goto L_0048287d;
L_00482807:; BB(0x00482807);
    /* 00482807: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00482809: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x48280eu); f_0062fbf0();
    /* 0048280e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482811: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482813: je 0x48287d */ if (fZ) goto L_0048287d;
L_00482815:; BB(0x00482815);
    /* 00482815: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0048281b: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048281e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482821: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482824: mov dword ptr [ecx + eax + 4], edx */ W32((u32)(r_ecx+r_eax+0x4u), r_edx);
    /* 00482828: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0048282e: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482831: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482834: mov byte ptr [ecx + eax + 8], 0 */ W8((u32)(r_ecx+r_eax+0x8u), 0x0u);
    /* 00482839: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 0048283f: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482842: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482845: cmp dword ptr [eax + edx + 0x10], 1 */ {  u32 a = R32((u32)(r_eax+r_edx+0x10u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048284a: jne 0x48285b */ if (!fZ) goto L_0048285b;
L_0048284c:; BB(0x0048284c);
    /* 0048284c: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00482852: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482855: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
L_0048285b:; BB(0x0048285b);
    /* 0048285b: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482861: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482864: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482867: cmp dword ptr [eax + edx + 0x10], 2 */ {  u32 a = R32((u32)(r_eax+r_edx+0x10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048286c: jne 0x48287d */ if (!fZ) goto L_0048287d;
L_0048286e:; BB(0x0048286e);
    /* 0048286e: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00482874: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482877: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
L_0048287d:; BB(0x0048287d);
    /* 0048287d: jmp 0x4827d6 */ goto L_004827d6;
L_00482882:; BB(0x00482882);
    /* 00482882: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 0048288c: jmp 0x48289d */ goto L_0048289d;
L_0048288e:; BB(0x0048288e);
    /* 0048288e: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482894: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482897: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
L_0048289d:; BB(0x0048289d);
    /* 0048289d: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004828a4: jge 0x4828db */ if ((fS==fO)) goto L_004828db;
L_004828a6:; BB(0x004828a6);
    /* 004828a6: cmp dword ptr [ebp - 0xcc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004828ad: jge 0x4828db */ if ((fS==fO)) goto L_004828db;
L_004828af:; BB(0x004828af);
    /* 004828af: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004828b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004828b3: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 004828b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004828b7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004828ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004828bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004828bd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004828bf: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004828c5: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4828cau); f_00482e80();
    /* 004828ca: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 004828d0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004828d3: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 004828d9: jmp 0x48288e */ goto L_0048288e;
L_004828db:; BB(0x004828db);
    /* 004828db: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 004828e5: jmp 0x4828f6 */ goto L_004828f6;
L_004828e7:; BB(0x004828e7);
    /* 004828e7: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 004828ed: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004828f0: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_004828f6:; BB(0x004828f6);
    /* 004828f6: cmp dword ptr [ebp - 0x90], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004828fd: jge 0x482934 */ if ((fS==fO)) goto L_00482934;
L_004828ff:; BB(0x004828ff);
    /* 004828ff: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482906: jge 0x482934 */ if ((fS==fO)) goto L_00482934;
L_00482908:; BB(0x00482908);
    /* 00482908: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 0048290b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048290c: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0048290f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00482910: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482913: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482914: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482916: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00482918: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0048291e: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x482923u); f_00482e80();
    /* 00482923: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00482929: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048292c: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00482932: jmp 0x4828e7 */ goto L_004828e7;
L_00482934:; BB(0x00482934);
    /* 00482934: jmp 0x482945 */ goto L_00482945;
L_00482936:; BB(0x00482936);
    /* 00482936: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0048293c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048293f: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
L_00482945:; BB(0x00482945);
    /* 00482945: cmp dword ptr [ebp - 0xcc], 2 */ {  u32 a = R32((u32)(r_ebp+0xffffff34u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048294c: jge 0x48296b */ if ((fS==fO)) goto L_0048296b;
L_0048294e:; BB(0x0048294e);
    /* 0048294e: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482951: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482952: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00482955: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482956: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048295a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048295c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048295e: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00482964: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x482969u); f_00482e80();
    /* 00482969: jmp 0x482936 */ goto L_00482936;
L_0048296b:; BB(0x0048296b);
    /* 0048296b: jmp 0x48297c */ goto L_0048297c;
L_0048296d:; BB(0x0048296d);
    /* 0048296d: mov ecx, dword ptr [ebp - 0xc8] */ r_ecx = R32((u32)(r_ebp+0xffffff38u));
    /* 00482973: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482976: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
L_0048297c:; BB(0x0048297c);
    /* 0048297c: cmp dword ptr [ebp - 0xc8], 3 */ {  u32 a = R32((u32)(r_ebp+0xffffff38u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482983: jge 0x4829a2 */ if ((fS==fO)) goto L_004829a2;
L_00482985:; BB(0x00482985);
    /* 00482985: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482988: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482989: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0048298c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048298d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482990: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482991: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00482993: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00482995: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 0048299b: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4829a0u); f_00482e80();
    /* 004829a0: jmp 0x48296d */ goto L_0048296d;
L_004829a2:; BB(0x004829a2);
    /* 004829a2: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004829a9: jne 0x4829c6 */ if (!fZ) goto L_004829c6;
L_004829ab:; BB(0x004829ab);
    /* 004829ab: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004829ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004829af: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 004829b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004829b3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 004829b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004829b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004829b9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004829bb: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004829c1: call 0x482e80 */ r_esp -= 4; W32(r_esp, 0x4829c6u); f_00482e80();
L_004829c6:; BB(0x004829c6);
    /* 004829c6: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004829ca: je 0x4829fc */ if (fZ) goto L_004829fc;
L_004829cc:; BB(0x004829cc);
    /* 004829cc: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 004829d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004829d3: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004829d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004829d7: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 004829da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004829db: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004829de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004829df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004829e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004829e3: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 004829e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004829ea: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 004829f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004829f1: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 004829f7: call 0x4830e0 */ r_esp -= 4; W32(r_esp, 0x4829fcu); f_004830e0();
L_004829fc:; BB(0x004829fc);
    /* 004829fc: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482a00: jne 0x482a54 */ if (!fZ) goto L_00482a54;
L_00482a02:; BB(0x00482a02);
    /* 00482a02: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482a0c: jmp 0x482a1d */ goto L_00482a1d;
L_00482a0e:; BB(0x00482a0e);
    /* 00482a0e: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482a14: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482a17: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_00482a1d:; BB(0x00482a1d);
    /* 00482a1d: cmp dword ptr [ebp - 0x90], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482a24: jge 0x482a4f */ if ((fS==fO)) goto L_00482a4f;
L_00482a26:; BB(0x00482a26);
    /* 00482a26: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482a2c: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482a2f: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482a32: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 00482a36: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482a39: jne 0x482a4d */ if (!fZ) goto L_00482a4d;
L_00482a3b:; BB(0x00482a3b);
    /* 00482a3b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482a41: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482a44: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482a47: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00482a4a: mov dword ptr [edx + ecx], eax */ W32((u32)(r_edx+r_ecx), r_eax);
L_00482a4d:; BB(0x00482a4d);
    /* 00482a4d: jmp 0x482a0e */ goto L_00482a0e;
L_00482a4f:; BB(0x00482a4f);
    /* 00482a4f: jmp 0x482bbd */ goto L_00482bbd;
L_00482a54:; BB(0x00482a54);
    /* 00482a54: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482a5e: jmp 0x482a6f */ goto L_00482a6f;
L_00482a60:; BB(0x00482a60);
    /* 00482a60: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482a66: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482a69: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
L_00482a6f:; BB(0x00482a6f);
    /* 00482a6f: cmp dword ptr [ebp - 0x90], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482a76: jge 0x482bbd */ if ((fS==fO)) goto L_00482bbd;
L_00482a7c:; BB(0x00482a7c);
    /* 00482a7c: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482a82: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482a85: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482a88: mov ecx, dword ptr [eax + edx + 4] */ r_ecx = R32((u32)(r_eax+r_edx+0x4u));
    /* 00482a8c: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482a8f: jne 0x482ace */ if (!fZ) goto L_00482ace;
L_00482a91:; BB(0x00482a91);
    /* 00482a91: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482a97: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482a9a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482a9d: cmp dword ptr [eax + edx], -1 */ {  u32 a = R32((u32)(r_eax+r_edx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482aa1: jne 0x482ace */ if (!fZ) goto L_00482ace;
L_00482aa3:; BB(0x00482aa3);
    /* 00482aa3: mov ecx, dword ptr [ebp - 0xd0] */ r_ecx = R32((u32)(r_ebp+0xffffff30u));
    /* 00482aa9: call 0x4832e0 */ r_esp -= 4; W32(r_esp, 0x482aaeu); f_004832e0();
    /* 00482aae: fmul qword ptr [ebp - 0xa8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffff58u));
    /* 00482ab4: fadd qword ptr [ebp - 0x98] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xffffff68u));
    /* 00482aba: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x482abfu); f_00686cc0();
    /* 00482abf: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482ac5: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482ac8: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482acb: mov dword ptr [edx + ecx], eax */ W32((u32)(r_edx+r_ecx), r_eax);
L_00482ace:; BB(0x00482ace);
    /* 00482ace: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ad2: jne 0x482b43 */ if (!fZ) goto L_00482b43;
L_00482ad4:; BB(0x00482ad4);
    /* 00482ad4: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482ada: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482add: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482ae0: mov edx, dword ptr [ecx + eax + 4] */ r_edx = R32((u32)(r_ecx+r_eax+0x4u));
    /* 00482ae4: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ae7: jne 0x482b43 */ if (!fZ) goto L_00482b43;
L_00482ae9:; BB(0x00482ae9);
    /* 00482ae9: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482aef: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482af2: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482af5: fild dword ptr [ecx + eax] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_eax)));
    /* 00482af8: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 00482afb: fmul qword ptr [0x6bcf78] */ ST(0) = ST(0) * R_F64((u32)(0x6bcf78u));
    /* 00482b01: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00482b03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00482b05: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00482b08: jne 0x482b43 */ if (!fZ) goto L_00482b43;
L_00482b0a:; BB(0x00482b0a);
    /* 00482b0a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00482b0c: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x482b11u); f_0062fbf0();
    /* 00482b11: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482b14: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00482b1a: fild dword ptr [ebp - 0xdc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff24u)));
    /* 00482b20: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 00482b26: fadd qword ptr [0x6bcf78] */ ST(0) = ST(0) + R_F64((u32)(0x6bcf78u));
    /* 00482b2c: fimul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0x10u));
    /* 00482b2f: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x482b34u); f_00686cc0();
    /* 00482b34: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482b3a: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482b3d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482b40: mov dword ptr [ecx + edx], eax */ W32((u32)(r_ecx+r_edx), r_eax);
L_00482b43:; BB(0x00482b43);
    /* 00482b43: cmp dword ptr [ebp + 8], 3 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482b47: jne 0x482bb8 */ if (!fZ) goto L_00482bb8;
L_00482b49:; BB(0x00482b49);
    /* 00482b49: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482b4f: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482b52: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482b55: mov ecx, dword ptr [eax + edx + 4] */ r_ecx = R32((u32)(r_eax+r_edx+0x4u));
    /* 00482b59: cmp ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482b5c: jne 0x482bb8 */ if (!fZ) goto L_00482bb8;
L_00482b5e:; BB(0x00482b5e);
    /* 00482b5e: mov edx, dword ptr [ebp - 0x90] */ r_edx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482b64: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482b67: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00482b6a: fild dword ptr [eax + edx] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx)));
    /* 00482b6d: fild dword ptr [ebp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x10u)));
    /* 00482b70: fmul qword ptr [0x6bc278] */ ST(0) = ST(0) * R_F64((u32)(0x6bc278u));
    /* 00482b76: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00482b78: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00482b7a: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00482b7d: jne 0x482bb8 */ if (!fZ) goto L_00482bb8;
L_00482b7f:; BB(0x00482b7f);
    /* 00482b7f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00482b81: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x482b86u); f_0062fbf0();
    /* 00482b86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482b89: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00482b8f: fild dword ptr [ebp - 0xe0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff20u)));
    /* 00482b95: fdiv qword ptr [0x6bc208] */ ST(0) = ST(0) / R_F64((u32)(0x6bc208u));
    /* 00482b9b: fadd qword ptr [0x6bc278] */ ST(0) = ST(0) + R_F64((u32)(0x6bc278u));
    /* 00482ba1: fimul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * (long double)(i32)R32((u32)(r_ebp+0x10u));
    /* 00482ba4: call 0x686cc0 */ r_esp -= 4; W32(r_esp, 0x482ba9u); f_00686cc0();
    /* 00482ba9: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482baf: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482bb2: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482bb5: mov dword ptr [edx + ecx], eax */ W32((u32)(r_edx+r_ecx), r_eax);
L_00482bb8:; BB(0x00482bb8);
    /* 00482bb8: jmp 0x482a60 */ goto L_00482a60;
L_00482bbd:; BB(0x00482bbd);
    /* 00482bbd: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482bc7: jmp 0x482bd8 */ goto L_00482bd8;
L_00482bc9:; BB(0x00482bc9);
    /* 00482bc9: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482bcf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482bd2: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_00482bd8:; BB(0x00482bd8);
    /* 00482bd8: cmp dword ptr [ebp - 0x90], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482bdf: jge 0x482c23 */ if ((fS==fO)) goto L_00482c23;
L_00482be1:; BB(0x00482be1);
    /* 00482be1: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482be7: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482bea: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482bed: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 00482bf1: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482bf4: jne 0x482c21 */ if (!fZ) goto L_00482c21;
L_00482bf6:; BB(0x00482bf6);
    /* 00482bf6: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482bfc: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482bff: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482c02: cmp dword ptr [edx + ecx + 0xc], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482c07: je 0x482c21 */ if (fZ) goto L_00482c21;
L_00482c09:; BB(0x00482c09);
    /* 00482c09: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482c0f: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482c12: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482c15: mov edx, dword ptr [ecx + eax + 0xc] */ r_edx = R32((u32)(r_ecx+r_eax+0xcu));
    /* 00482c19: mov byte ptr [ebp + edx - 0xc0], 1 */ W8((u32)(r_ebp+r_edx+0xffffff40u), 0x1u);
L_00482c21:; BB(0x00482c21);
    /* 00482c21: jmp 0x482bc9 */ goto L_00482bc9;
L_00482c23:; BB(0x00482c23);
    /* 00482c23: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00482c2d: jmp 0x482c3e */ goto L_00482c3e;
L_00482c2f:; BB(0x00482c2f);
    /* 00482c2f: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482c35: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482c38: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
L_00482c3e:; BB(0x00482c3e);
    /* 00482c3e: cmp dword ptr [ebp - 0x90], 0x21 */ {  u32 a = R32((u32)(r_ebp+0xffffff70u)); u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482c45: jge 0x482d6b */ if ((fS==fO)) goto L_00482d6b;
L_00482c4b:; BB(0x00482c4b);
    /* 00482c4b: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482c51: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482c54: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482c57: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 00482c5b: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482c5e: jne 0x482d66 */ if (!fZ) goto L_00482d66;
L_00482c64:; BB(0x00482c64);
    /* 00482c64: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00482c6a: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482c6d: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00482c70: cmp dword ptr [edx + ecx + 0xc], -1 */ {  u32 a = R32((u32)(r_edx+r_ecx+0xcu)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482c75: jne 0x482d66 */ if (!fZ) goto L_00482d66;
L_00482c7b:; BB(0x00482c7b);
    /* 00482c7b: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 00482c85: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 00482c8f: jmp 0x482ca0 */ goto L_00482ca0;
L_00482c91:; BB(0x00482c91);
    /* 00482c91: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00482c97: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482c9a: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
L_00482ca0:; BB(0x00482ca0);
    /* 00482ca0: cmp dword ptr [ebp - 0xc4], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482ca7: jge 0x482ccc */ if ((fS==fO)) goto L_00482ccc;
L_00482ca9:; BB(0x00482ca9);
    /* 00482ca9: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00482caf: movzx edx, byte ptr [ebp + ecx - 0xc0] */ r_edx = (u32)R8((u32)(r_ebp+r_ecx+0xffffff40u));
    /* 00482cb7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482cb9: jne 0x482cca */ if (!fZ) goto L_00482cca;
L_00482cbb:; BB(0x00482cbb);
    /* 00482cbb: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 00482cc1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482cc4: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
L_00482cca:; BB(0x00482cca);
    /* 00482cca: jmp 0x482c91 */ goto L_00482c91;
L_00482ccc:; BB(0x00482ccc);
    /* 00482ccc: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00482cd2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482cd3: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x482cd8u); f_0062fbf0();
    /* 00482cd8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482cdb: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00482ce1: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 00482ceb: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
    /* 00482cf5: jmp 0x482d06 */ goto L_00482d06;
L_00482cf7:; BB(0x00482cf7);
    /* 00482cf7: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00482cfd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482d00: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
L_00482d06:; BB(0x00482d06);
    /* 00482d06: cmp dword ptr [ebp - 0xc4], 8 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482d0d: jge 0x482d66 */ if ((fS==fO)) goto L_00482d66;
L_00482d0f:; BB(0x00482d0f);
    /* 00482d0f: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00482d15: movzx ecx, byte ptr [ebp + eax - 0xc0] */ r_ecx = (u32)R8((u32)(r_ebp+r_eax+0xffffff40u));
    /* 00482d1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d1f: jne 0x482d64 */ if (!fZ) goto L_00482d64;
L_00482d21:; BB(0x00482d21);
    /* 00482d21: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00482d27: cmp edx, dword ptr [ebp - 0x8c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffff74u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482d2d: jne 0x482d55 */ if (!fZ) goto L_00482d55;
L_00482d2f:; BB(0x00482d2f);
    /* 00482d2f: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00482d35: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482d38: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00482d3b: mov edx, dword ptr [ebp - 0xc4] */ r_edx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00482d41: mov dword ptr [ecx + eax + 0xc], edx */ W32((u32)(r_ecx+r_eax+0xcu), r_edx);
    /* 00482d45: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00482d4b: mov byte ptr [ebp + eax - 0xc0], 1 */ W8((u32)(r_ebp+r_eax+0xffffff40u), 0x1u);
    /* 00482d53: jmp 0x482d66 */ goto L_00482d66;
L_00482d55:; BB(0x00482d55);
    /* 00482d55: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00482d5b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482d5e: mov dword ptr [ebp - 0x8c], ecx */ W32((u32)(r_ebp+0xffffff74u), r_ecx);
L_00482d64:; BB(0x00482d64);
    /* 00482d64: jmp 0x482cf7 */ goto L_00482cf7;
L_00482d66:; BB(0x00482d66);
    /* 00482d66: jmp 0x482c2f */ goto L_00482c2f;
L_00482d6b:; BB(0x00482d6b);
    /* 00482d6b: mov ecx, dword ptr [ebp - 0xb8] */ r_ecx = R32((u32)(r_ebp+0xffffff48u));
    /* 00482d71: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00482d73: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x482d78u); f_00686d72();
    /* 00482d78: mov esp, ebp */ r_esp = r_ebp;
    /* 00482d7a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482d7b: ret 0x18 */ FN_RET(0x00482070); r_esp += 28; return;
}

void f_00482e10(void) /* PokerGame::func_00482e10 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482e10);
    /* 00482e10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482e11: mov ebp, esp */ r_ebp = r_esp;
    /* 00482e13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00482e14: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00482e17: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e1b: jne 0x482e3d */ if (!fZ) goto L_00482e3d;
L_00482e1d:; BB(0x00482e1d);
    /* 00482e1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00482e20: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482e23: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00482e26: mov byte ptr [ecx + eax + 8], 1 */ W8((u32)(r_ecx+r_eax+0x8u), 0x1u);
    /* 00482e2b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00482e2e: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482e31: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00482e34: mov dword ptr [eax + edx], 0xffffffff */ W32((u32)(r_eax+r_edx), 0xffffffffu);
    /* 00482e3b: jmp 0x482e70 */ goto L_00482e70;
L_00482e3d:; BB(0x00482e3d);
    /* 00482e3d: cmp dword ptr [ebp + 0xc], 3 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e41: jne 0x482e55 */ if (!fZ) goto L_00482e55;
L_00482e43:; BB(0x00482e43);
    /* 00482e43: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00482e46: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482e49: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00482e4c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00482e4f: mov dword ptr [edx + ecx + 4], eax */ W32((u32)(r_edx+r_ecx+0x4u), r_eax);
    /* 00482e53: jmp 0x482e70 */ goto L_00482e70;
L_00482e55:; BB(0x00482e55);
    /* 00482e55: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00482e57: jne 0x482e70 */ if (!fZ) goto L_00482e70;
L_00482e59:; BB(0x00482e59);
    /* 00482e59: push 0xeb0 */ { u32 v = 0xeb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00482e5e: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00482e63: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00482e68: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x482e6du); f_005e9f20();
    /* 00482e6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00482e70:; BB(0x00482e70);
    /* 00482e70: mov esp, ebp */ r_esp = r_ebp;
    /* 00482e72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00482e73: ret 0xc */ FN_RET(0x00482e10); r_esp += 16; return;
}

void f_00482e80(void) /* PokerGame::func_00482e80 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00482e80);
    /* 00482e80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00482e81: mov ebp, esp */ r_ebp = r_esp;
    /* 00482e83: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00482e86: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00482e89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482e90: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00482e97: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482e9b: je 0x482ebe */ if (fZ) goto L_00482ebe;
L_00482e9d:; BB(0x00482e9d);
    /* 00482e9d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ea1: je 0x482ebe */ if (fZ) goto L_00482ebe;
L_00482ea3:; BB(0x00482ea3);
    /* 00482ea3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00482ea5: jne 0x482ebe */ if (!fZ) goto L_00482ebe;
L_00482ea7:; BB(0x00482ea7);
    /* 00482ea7: push 0xeb9 */ { u32 v = 0xeb9u; r_esp -= 4; W32(r_esp, v); }
    /* 00482eac: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00482eb1: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00482eb6: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x482ebbu); f_005e9f20();
    /* 00482ebb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00482ebe:; BB(0x00482ebe);
    /* 00482ebe: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482ec2: jne 0x482ed4 */ if (!fZ) goto L_00482ed4;
L_00482ec4:; BB(0x00482ec4);
    /* 00482ec4: mov dword ptr [ebp - 0x10], 0x17 */ W32((u32)(r_ebp+0xfffffff0u), 0x17u);
    /* 00482ecb: mov dword ptr [ebp - 8], 0x21 */ W32((u32)(r_ebp+0xfffffff8u), 0x21u);
    /* 00482ed2: jmp 0x482ee2 */ goto L_00482ee2;
L_00482ed4:; BB(0x00482ed4);
    /* 00482ed4: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00482edb: mov dword ptr [ebp - 8], 0x17 */ W32((u32)(r_ebp+0xfffffff8u), 0x17u);
L_00482ee2:; BB(0x00482ee2);
    /* 00482ee2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00482ee5: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 00482ee8: jmp 0x482ef3 */ goto L_00482ef3;
L_00482eea:; BB(0x00482eea);
    /* 00482eea: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482eed: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00482ef0: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_00482ef3:; BB(0x00482ef3);
    /* 00482ef3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482ef6: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482ef9: jge 0x482f4e */ if ((fS==fO)) goto L_00482f4e;
L_00482efb:; BB(0x00482efb);
    /* 00482efb: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482efe: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f01: je 0x482f4c */ if (fZ) goto L_00482f4c;
L_00482f03:; BB(0x00482f03);
    /* 00482f03: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482f06: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482f09: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00482f0c: mov edx, dword ptr [ecx + eax + 0x10] */ r_edx = R32((u32)(r_ecx+r_eax+0x10u));
    /* 00482f10: cmp edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f13: jne 0x482f4c */ if (!fZ) goto L_00482f4c;
L_00482f15:; BB(0x00482f15);
    /* 00482f15: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482f18: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482f1b: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00482f1e: cmp dword ptr [ecx + eax + 4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f23: je 0x482f43 */ if (fZ) goto L_00482f43;
L_00482f25:; BB(0x00482f25);
    /* 00482f25: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f29: jne 0x482f4c */ if (!fZ) goto L_00482f4c;
L_00482f2b:; BB(0x00482f2b);
    /* 00482f2b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482f2e: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482f31: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00482f34: movzx ecx, byte ptr [eax + edx + 8] */ r_ecx = (u32)R8((u32)(r_eax+r_edx+0x8u));
    /* 00482f39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f3b: je 0x482f4c */ if (fZ) goto L_00482f4c;
L_00482f3d:; BB(0x00482f3d);
    /* 00482f3d: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f41: jne 0x482f4c */ if (!fZ) goto L_00482f4c;
L_00482f43:; BB(0x00482f43);
    /* 00482f43: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482f46: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00482f49: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00482f4c:; BB(0x00482f4c);
    /* 00482f4c: jmp 0x482eea */ goto L_00482eea;
L_00482f4e:; BB(0x00482f4e);
    /* 00482f4e: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482f52: jne 0x482f6f */ if (!fZ) goto L_00482f6f;
L_00482f54:; BB(0x00482f54);
    /* 00482f54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00482f56: jne 0x482f6f */ if (!fZ) goto L_00482f6f;
L_00482f58:; BB(0x00482f58);
    /* 00482f58: push 0xecd */ { u32 v = 0xecdu; r_esp -= 4; W32(r_esp, v); }
    /* 00482f5d: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00482f62: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00482f67: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x482f6cu); f_005e9f20();
    /* 00482f6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00482f6f:; BB(0x00482f6f);
    /* 00482f6f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00482f72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00482f73: call 0x62fbf0 */ r_esp -= 4; W32(r_esp, 0x482f78u); f_0062fbf0();
    /* 00482f78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00482f7b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00482f7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00482f85: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00482f88: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00482f8b: jmp 0x482f96 */ goto L_00482f96;
L_00482f8d:; BB(0x00482f8d);
    /* 00482f8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482f90: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00482f93: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_00482f96:; BB(0x00482f96);
    /* 00482f96: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482f99: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00482f9c: jge 0x483011 */ if ((fS==fO)) goto L_00483011;
L_00482f9e:; BB(0x00482f9e);
    /* 00482f9e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482fa1: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fa4: je 0x48300c */ if (fZ) goto L_0048300c;
L_00482fa6:; BB(0x00482fa6);
    /* 00482fa6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482fa9: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482fac: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00482faf: mov eax, dword ptr [edx + ecx + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx+0x10u));
    /* 00482fb3: cmp eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fb6: jne 0x48300c */ if (!fZ) goto L_0048300c;
L_00482fb8:; BB(0x00482fb8);
    /* 00482fb8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482fbb: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482fbe: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00482fc1: cmp dword ptr [edx + ecx + 4], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fc6: je 0x482fe6 */ if (fZ) goto L_00482fe6;
L_00482fc8:; BB(0x00482fc8);
    /* 00482fc8: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fcc: jne 0x48300c */ if (!fZ) goto L_0048300c;
L_00482fce:; BB(0x00482fce);
    /* 00482fce: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482fd1: imul eax, eax, 0x14 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x14u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482fd4: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 00482fd7: movzx edx, byte ptr [ecx + eax + 8] */ r_edx = (u32)R8((u32)(r_ecx+r_eax+0x8u));
    /* 00482fdc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fde: je 0x48300c */ if (fZ) goto L_0048300c;
L_00482fe0:; BB(0x00482fe0);
    /* 00482fe0: cmp dword ptr [ebp + 0xc], 1 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fe4: jne 0x48300c */ if (!fZ) goto L_0048300c;
L_00482fe6:; BB(0x00482fe6);
    /* 00482fe6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00482fe9: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00482fec: jne 0x483003 */ if (!fZ) goto L_00483003;
L_00482fee:; BB(0x00482fee);
    /* 00482fee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00482ff1: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00482ff4: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00482ff7: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00482ffa: mov dword ptr [edx + ecx + 4], eax */ W32((u32)(r_edx+r_ecx+0x4u), r_eax);
    /* 00482ffe: jmp 0x4830d9 */ goto L_004830d9;
L_00483003:; BB(0x00483003);
    /* 00483003: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483006: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00483009: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0048300c:; BB(0x0048300c);
    /* 0048300c: jmp 0x482f8d */ goto L_00482f8d;
L_00483011:; BB(0x00483011);
    /* 00483011: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00483013: jne 0x48302c */ if (!fZ) goto L_0048302c;
L_00483015:; BB(0x00483015);
    /* 00483015: push 0xee2 */ { u32 v = 0xee2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048301a: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0048301f: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00483024: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483029u); f_005e9f20();
    /* 00483029: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048302c:; BB(0x0048302c);
    /* 0048302c: mov dword ptr [ebp - 0xc], 0x20 */ W32((u32)(r_ebp+0xfffffff4u), 0x20u);
    /* 00483033: jmp 0x48303e */ goto L_0048303e;
L_00483035:; BB(0x00483035);
    /* 00483035: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483038: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0048303b: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_0048303e:; BB(0x0048303e);
    /* 0048303e: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483042: jl 0x483080 */ if ((fS!=fO)) goto L_00483080;
L_00483044:; BB(0x00483044);
    /* 00483044: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483047: imul edx, edx, 0x14 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x14u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0048304a: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0048304d: cmp dword ptr [eax + edx + 4], 0 */ {  u32 a = R32((u32)(r_eax+r_edx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483052: je 0x48306c */ if (fZ) goto L_0048306c;
L_00483054:; BB(0x00483054);
    /* 00483054: cmp dword ptr [ebp + 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483058: jne 0x48307e */ if (!fZ) goto L_0048307e;
L_0048305a:; BB(0x0048305a);
    /* 0048305a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048305d: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00483060: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00483063: movzx eax, byte ptr [edx + ecx + 8] */ r_eax = (u32)R8((u32)(r_edx+r_ecx+0x8u));
    /* 00483068: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048306a: je 0x48307e */ if (fZ) goto L_0048307e;
L_0048306c:; BB(0x0048306c);
    /* 0048306c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048306f: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00483072: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00483075: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00483078: mov dword ptr [edx + ecx + 4], eax */ W32((u32)(r_edx+r_ecx+0x4u), r_eax);
    /* 0048307c: jmp 0x4830d9 */ goto L_004830d9;
L_0048307e:; BB(0x0048307e);
    /* 0048307e: jmp 0x483035 */ goto L_00483035;
L_00483080:; BB(0x00483080);
    /* 00483080: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00483082: jne 0x48309b */ if (!fZ) goto L_0048309b;
L_00483084:; BB(0x00483084);
    /* 00483084: push 0xeec */ { u32 v = 0xeecu; r_esp -= 4; W32(r_esp, v); }
    /* 00483089: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 0048308e: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 00483093: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483098u); f_005e9f20();
    /* 00483098: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048309b:; BB(0x0048309b);
    /* 0048309b: mov dword ptr [ebp - 0xc], 0x20 */ W32((u32)(r_ebp+0xfffffff4u), 0x20u);
    /* 004830a2: jmp 0x4830ad */ goto L_004830ad;
L_004830a4:; BB(0x004830a4);
    /* 004830a4: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 004830a7: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004830aa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_004830ad:; BB(0x004830ad);
    /* 004830ad: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004830b1: jl 0x4830d9 */ if ((fS!=fO)) goto L_004830d9;
L_004830b3:; BB(0x004830b3);
    /* 004830b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004830b6: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004830b9: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004830bc: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 004830c0: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004830c3: je 0x4830d7 */ if (fZ) goto L_004830d7;
L_004830c5:; BB(0x004830c5);
    /* 004830c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004830c8: imul ecx, ecx, 0x14 */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x14u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004830cb: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004830ce: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004830d1: mov dword ptr [edx + ecx + 4], eax */ W32((u32)(r_edx+r_ecx+0x4u), r_eax);
    /* 004830d5: jmp 0x4830d9 */ goto L_004830d9;
L_004830d7:; BB(0x004830d7);
    /* 004830d7: jmp 0x4830a4 */ goto L_004830a4;
L_004830d9:; BB(0x004830d9);
    /* 004830d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004830db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004830dc: ret 0x14 */ FN_RET(0x00482e80); r_esp += 24; return;
}

void f_00483300(void) /* PokerGame::func_00483300 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483300);
    /* 00483300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483301: mov ebp, esp */ r_ebp = r_esp;
    /* 00483303: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483306: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 00483309: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0048330c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0048330f: cmp dword ptr [ebp - 8], 1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483313: je 0x48332e */ if (fZ) goto L_0048332e;
L_00483315:; BB(0x00483315);
    /* 00483315: cmp dword ptr [ebp - 8], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483319: je 0x48340a */ if (fZ) goto L_0048340a;
L_0048331f:; BB(0x0048331f);
    /* 0048331f: cmp dword ptr [ebp - 8], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483323: je 0x4834e6 */ if (fZ) goto L_004834e6;
L_00483329:; BB(0x00483329);
    /* 00483329: jmp 0x4835ad */ goto L_004835ad;
L_0048332e:; BB(0x0048332e);
    /* 0048332e: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00483331: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00483334: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00483337: sub edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0048333a: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0048333d: cmp dword ptr [ebp - 0xc], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00483341: ja 0x483405 */ if ((!fC&&!fZ)) goto L_00483405;
L_00483347:; BB(0x00483347);
    /* 00483347: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048334a: jmp dword ptr [eax*4 + 0x4835d0] */ { u32 t = R32((u32)(r_eax*4+0x4835d0u)); switch (t) { case 0x483351u: goto L_00483351; case 0x48336bu: goto L_0048336b; case 0x483385u: goto L_00483385; case 0x48339eu: goto L_0048339e; case 0x4833b8u: goto L_004833b8; case 0x4833d2u: goto L_004833d2; case 0x4833ebu: goto L_004833eb; case 0x48342du: goto L_0048342d; case 0x483447u: goto L_00483447; case 0x483460u: goto L_00483460; case 0x48347au: goto L_0048347a; case 0x483494u: goto L_00483494; case 0x4834adu: goto L_004834ad; case 0x4834c7u: goto L_004834c7; case 0x483509u: goto L_00483509; case 0x483522u: goto L_00483522; case 0x48353cu: goto L_0048353c; case 0x483553u: goto L_00483553; case 0x483569u: goto L_00483569; case 0x483580u: goto L_00483580; case 0x483597u: goto L_00483597; default: UNSUP(0x0048334a, "jump table entry is not a known target"); } }
L_00483351:; BB(0x00483351);
    /* 00483351: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483353: push 0x6bd130 */ { u32 v = 0x6bd130u; r_esp -= 4; W32(r_esp, v); }
    /* 00483358: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0048335e: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00483361: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483366u); f_00607960();
    /* 00483366: jmp 0x4835ca */ goto L_004835ca;
L_0048336b:; BB(0x0048336b);
    /* 0048336b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048336d: push 0x6bd120 */ { u32 v = 0x6bd120u; r_esp -= 4; W32(r_esp, v); }
    /* 00483372: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00483378: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0048337b: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483380u); f_00607960();
    /* 00483380: jmp 0x4835ca */ goto L_004835ca;
L_00483385:; BB(0x00483385);
    /* 00483385: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483387: push 0x6bd110 */ { u32 v = 0x6bd110u; r_esp -= 4; W32(r_esp, v); }
    /* 0048338c: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00483391: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00483394: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483399u); f_00607960();
    /* 00483399: jmp 0x4835ca */ goto L_004835ca;
L_0048339e:; BB(0x0048339e);
    /* 0048339e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004833a0: push 0x6bd100 */ { u32 v = 0x6bd100u; r_esp -= 4; W32(r_esp, v); }
    /* 004833a5: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 004833ab: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004833ae: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4833b3u); f_00607960();
    /* 004833b3: jmp 0x4835ca */ goto L_004835ca;
L_004833b8:; BB(0x004833b8);
    /* 004833b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004833ba: push 0x6bd0f0 */ { u32 v = 0x6bd0f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004833bf: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 004833c5: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004833c8: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4833cdu); f_00607960();
    /* 004833cd: jmp 0x4835ca */ goto L_004835ca;
L_004833d2:; BB(0x004833d2);
    /* 004833d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004833d4: push 0x6bd0e0 */ { u32 v = 0x6bd0e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004833d9: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 004833de: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004833e1: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4833e6u); f_00607960();
    /* 004833e6: jmp 0x4835ca */ goto L_004835ca;
L_004833eb:; BB(0x004833eb);
    /* 004833eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004833ed: push 0x6bd0d0 */ { u32 v = 0x6bd0d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004833f2: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 004833f8: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004833fb: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483400u); f_00607960();
    /* 00483400: jmp 0x4835ca */ goto L_004835ca;
L_00483405:; BB(0x00483405);
    /* 00483405: jmp 0x4835ad */ goto L_004835ad;
L_0048340a:; BB(0x0048340a);
    /* 0048340a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0048340d: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 00483410: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483413: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00483416: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00483419: cmp dword ptr [ebp - 0x10], 6 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0048341d: ja 0x4834e1 */ if ((!fC&&!fZ)) goto L_004834e1;
L_00483423:; BB(0x00483423);
    /* 00483423: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483426: jmp dword ptr [ecx*4 + 0x4835ec] */ { u32 t = R32((u32)(r_ecx*4+0x4835ecu)); switch (t) { case 0x4833ebu: goto L_004833eb; case 0x4833d2u: goto L_004833d2; case 0x4833b8u: goto L_004833b8; case 0x48339eu: goto L_0048339e; case 0x483385u: goto L_00483385; case 0x48336bu: goto L_0048336b; case 0x483351u: goto L_00483351; case 0x48342du: goto L_0048342d; case 0x483447u: goto L_00483447; case 0x483460u: goto L_00483460; case 0x48347au: goto L_0048347a; case 0x483494u: goto L_00483494; case 0x4834adu: goto L_004834ad; case 0x4834c7u: goto L_004834c7; case 0x483509u: goto L_00483509; case 0x483522u: goto L_00483522; case 0x48353cu: goto L_0048353c; case 0x483553u: goto L_00483553; case 0x483569u: goto L_00483569; case 0x483580u: goto L_00483580; case 0x483597u: goto L_00483597; default: UNSUP(0x00483426, "jump table entry is not a known target"); } }
L_0048342d:; BB(0x0048342d);
    /* 0048342d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048342f: push 0x6bd0b8 */ { u32 v = 0x6bd0b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00483434: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0048343a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0048343d: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483442u); f_00607960();
    /* 00483442: jmp 0x4835ca */ goto L_004835ca;
L_00483447:; BB(0x00483447);
    /* 00483447: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483449: push 0x6bd0a0 */ { u32 v = 0x6bd0a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048344e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00483453: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00483456: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x48345bu); f_00607960();
    /* 0048345b: jmp 0x4835ca */ goto L_004835ca;
L_00483460:; BB(0x00483460);
    /* 00483460: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483462: push 0x6bd088 */ { u32 v = 0x6bd088u; r_esp -= 4; W32(r_esp, v); }
    /* 00483467: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0048346d: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00483470: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483475u); f_00607960();
    /* 00483475: jmp 0x4835ca */ goto L_004835ca;
L_0048347a:; BB(0x0048347a);
    /* 0048347a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048347c: push 0x6bd070 */ { u32 v = 0x6bd070u; r_esp -= 4; W32(r_esp, v); }
    /* 00483481: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00483487: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0048348a: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x48348fu); f_00607960();
    /* 0048348f: jmp 0x4835ca */ goto L_004835ca;
L_00483494:; BB(0x00483494);
    /* 00483494: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483496: push 0x6bd058 */ { u32 v = 0x6bd058u; r_esp -= 4; W32(r_esp, v); }
    /* 0048349b: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 004834a0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004834a3: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4834a8u); f_00607960();
    /* 004834a8: jmp 0x4835ca */ goto L_004835ca;
L_004834ad:; BB(0x004834ad);
    /* 004834ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004834af: push 0x6bd040 */ { u32 v = 0x6bd040u; r_esp -= 4; W32(r_esp, v); }
    /* 004834b4: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 004834ba: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 004834bd: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4834c2u); f_00607960();
    /* 004834c2: jmp 0x4835ca */ goto L_004835ca;
L_004834c7:; BB(0x004834c7);
    /* 004834c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004834c9: push 0x6bd028 */ { u32 v = 0x6bd028u; r_esp -= 4; W32(r_esp, v); }
    /* 004834ce: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 004834d4: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004834d7: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4834dcu); f_00607960();
    /* 004834dc: jmp 0x4835ca */ goto L_004835ca;
L_004834e1:; BB(0x004834e1);
    /* 004834e1: jmp 0x4835ad */ goto L_004835ad;
L_004834e6:; BB(0x004834e6);
    /* 004834e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004834e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004834ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004834ef: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004834f2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004834f5: cmp dword ptr [ebp - 0x14], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004834f9: ja 0x4835ad */ if ((!fC&&!fZ)) goto L_004835ad;
L_004834ff:; BB(0x004834ff);
    /* 004834ff: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00483502: jmp dword ptr [edx*4 + 0x483608] */ { u32 t = R32((u32)(r_edx*4+0x483608u)); switch (t) { case 0x4834c7u: goto L_004834c7; case 0x4834adu: goto L_004834ad; case 0x483494u: goto L_00483494; case 0x48347au: goto L_0048347a; case 0x483460u: goto L_00483460; case 0x483447u: goto L_00483447; case 0x48342du: goto L_0048342d; case 0x4833ebu: goto L_004833eb; case 0x4833d2u: goto L_004833d2; case 0x4833b8u: goto L_004833b8; case 0x48339eu: goto L_0048339e; case 0x483385u: goto L_00483385; case 0x48336bu: goto L_0048336b; case 0x483351u: goto L_00483351; case 0x483509u: goto L_00483509; case 0x483522u: goto L_00483522; case 0x48353cu: goto L_0048353c; case 0x483553u: goto L_00483553; case 0x483569u: goto L_00483569; case 0x483580u: goto L_00483580; case 0x483597u: goto L_00483597; default: UNSUP(0x00483502, "jump table entry is not a known target"); } }
L_00483509:; BB(0x00483509);
    /* 00483509: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048350b: push 0x6bd010 */ { u32 v = 0x6bd010u; r_esp -= 4; W32(r_esp, v); }
    /* 00483510: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 00483515: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00483518: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x48351du); f_00607960();
    /* 0048351d: jmp 0x4835ca */ goto L_004835ca;
L_00483522:; BB(0x00483522);
    /* 00483522: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483524: push 0x6bcff8 */ { u32 v = 0x6bcff8u; r_esp -= 4; W32(r_esp, v); }
    /* 00483529: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 0048352f: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00483532: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483537u); f_00607960();
    /* 00483537: jmp 0x4835ca */ goto L_004835ca;
L_0048353c:; BB(0x0048353c);
    /* 0048353c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048353e: push 0x6bcfe0 */ { u32 v = 0x6bcfe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483543: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 00483549: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0048354c: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483551u); f_00607960();
    /* 00483551: jmp 0x4835ca */ goto L_004835ca;
L_00483553:; BB(0x00483553);
    /* 00483553: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483555: push 0x6bcfc8 */ { u32 v = 0x6bcfc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048355a: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 0048355f: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00483562: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483567u); f_00607960();
    /* 00483567: jmp 0x4835ca */ goto L_004835ca;
L_00483569:; BB(0x00483569);
    /* 00483569: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048356b: push 0x6bcfb0 */ { u32 v = 0x6bcfb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483570: mov ecx, dword ptr [0x7960d8] */ r_ecx = R32((u32)(0x7960d8u));
    /* 00483576: mov ecx, dword ptr [ecx + 0x14] */ r_ecx = R32((u32)(r_ecx+0x14u));
    /* 00483579: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x48357eu); f_00607960();
    /* 0048357e: jmp 0x4835ca */ goto L_004835ca;
L_00483580:; BB(0x00483580);
    /* 00483580: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483582: push 0x6bcf98 */ { u32 v = 0x6bcf98u; r_esp -= 4; W32(r_esp, v); }
    /* 00483587: mov edx, dword ptr [0x7960d8] */ r_edx = R32((u32)(0x7960d8u));
    /* 0048358d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00483590: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x483595u); f_00607960();
    /* 00483595: jmp 0x4835ca */ goto L_004835ca;
L_00483597:; BB(0x00483597);
    /* 00483597: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00483599: push 0x6bcf80 */ { u32 v = 0x6bcf80u; r_esp -= 4; W32(r_esp, v); }
    /* 0048359e: mov eax, dword ptr [0x7960d8] */ r_eax = R32((u32)(0x7960d8u));
    /* 004835a3: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 004835a6: call 0x607960 */ r_esp -= 4; W32(r_esp, 0x4835abu); f_00607960();
    /* 004835ab: jmp 0x4835ca */ goto L_004835ca;
L_004835ad:; BB(0x004835ad);
    /* 004835ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 004835af: jne 0x4835c8 */ if (!fZ) goto L_004835c8;
L_004835b1:; BB(0x004835b1);
    /* 004835b1: push 0xfa9 */ { u32 v = 0xfa9u; r_esp -= 4; W32(r_esp, v); }
    /* 004835b6: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 004835bb: push 0x6b2f58 */ { u32 v = 0x6b2f58u; r_esp -= 4; W32(r_esp, v); }
    /* 004835c0: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x4835c5u); f_005e9f20();
    /* 004835c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004835c8:; BB(0x004835c8);
    /* 004835c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004835ca:; BB(0x004835ca);
    /* 004835ca: mov esp, ebp */ r_esp = r_ebp;
    /* 004835cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004835cd: ret 8 */ FN_RET(0x00483300); r_esp += 12; return;
}

void f_00483a70(void) /* PokerGame::func_00483a70 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483a70);
    /* 00483a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483a71: mov ebp, esp */ r_ebp = r_esp;
    /* 00483a73: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483a76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00483a77: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00483a7a: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00483a7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00483a80: jge 0x483a99 */ if ((fS==fO)) goto L_00483a99;
L_00483a82:; BB(0x00483a82);
    /* 00483a82: push 0x1044 */ { u32 v = 0x1044u; r_esp -= 4; W32(r_esp, v); }
    /* 00483a87: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00483a8c: push 0x6bd25c */ { u32 v = 0x6bd25cu; r_esp -= 4; W32(r_esp, v); }
    /* 00483a91: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483a96u); f_005e9f20();
    /* 00483a96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00483a99:; BB(0x00483a99);
    /* 00483a99: movsx esi, word ptr [ebp + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00483a9d: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00483aa3: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x483aa8u); f_0047f950();
    /* 00483aa8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483aaa: jl 0x483ac3 */ if ((fS!=fO)) goto L_00483ac3;
L_00483aac:; BB(0x00483aac);
    /* 00483aac: push 0x1045 */ { u32 v = 0x1045u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ab1: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ab6: push 0x6bd22c */ { u32 v = 0x6bd22cu; r_esp -= 4; W32(r_esp, v); }
    /* 00483abb: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483ac0u); f_005e9f20();
    /* 00483ac0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00483ac3:; BB(0x00483ac3);
    /* 00483ac3: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00483ac9: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x483aceu); f_005da7b0();
    /* 00483ace: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00483ad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483ad3: jne 0x483aec */ if (!fZ) goto L_00483aec;
L_00483ad5:; BB(0x00483ad5);
    /* 00483ad5: push 0x1046 */ { u32 v = 0x1046u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ada: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00483adf: push 0x6bd210 */ { u32 v = 0x6bd210u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ae4: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483ae9u); f_005e9f20();
    /* 00483ae9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00483aec:; BB(0x00483aec);
    /* 00483aec: movsx edx, word ptr [ebp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00483af0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483af1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483af4: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483af9u); f_0047e390();
    /* 00483af9: mov ecx, eax */ r_ecx = r_eax;
    /* 00483afb: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483b00u); f_004c6a70();
    /* 00483b00: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00483b03: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00483b0a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00483b0d: mov word ptr [eax], 1 */ W16((u32)(r_eax), 0x1u);
    /* 00483b12: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00483b18: jmp 0x483b26 */ goto L_00483b26;
L_00483b1a:; BB(0x00483b1a);
    /* 00483b1a: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00483b1e: add cx, 1 */ {  u32 a = (u16)r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483b22: mov word ptr [ebp - 0xc], cx */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_ecx);
L_00483b26:; BB(0x00483b26);
    /* 00483b26: movsx esi, word ptr [ebp - 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00483b2a: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00483b30: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x483b35u); f_0047f950();
    /* 00483b35: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483b37: jge 0x483bc3 */ if ((fS==fO)) goto L_00483bc3;
L_00483b3d:; BB(0x00483b3d);
    /* 00483b3d: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00483b41: movsx eax, word ptr [ebp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00483b45: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483b47: jne 0x483b4b */ if (!fZ) goto L_00483b4b;
L_00483b49:; BB(0x00483b49);
    /* 00483b49: jmp 0x483b1a */ goto L_00483b1a;
L_00483b4b:; BB(0x00483b4b);
    /* 00483b4b: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00483b4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483b50: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483b53: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483b58u); f_0047e390();
    /* 00483b58: mov ecx, eax */ r_ecx = r_eax;
    /* 00483b5a: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x483b5fu); f_004c6cb0();
    /* 00483b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483b61: jne 0x483b65 */ if (!fZ) goto L_00483b65;
L_00483b63:; BB(0x00483b63);
    /* 00483b63: jmp 0x483b1a */ goto L_00483b1a;
L_00483b65:; BB(0x00483b65);
    /* 00483b65: movsx edx, word ptr [ebp - 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00483b69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483b6a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483b6d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483b72u); f_0047e390();
    /* 00483b72: mov ecx, eax */ r_ecx = r_eax;
    /* 00483b74: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483b79u); f_004c6a70();
    /* 00483b79: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483b7c: jle 0x483b95 */ if ((fZ||fS!=fO)) goto L_00483b95;
L_00483b7e:; BB(0x00483b7e);
    /* 00483b7e: movsx eax, word ptr [ebp - 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00483b82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483b83: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483b86: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483b8bu); f_0047e390();
    /* 00483b8b: mov ecx, eax */ r_ecx = r_eax;
    /* 00483b8d: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483b92u); f_004c6a70();
    /* 00483b92: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00483b95:; BB(0x00483b95);
    /* 00483b95: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00483b99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483b9a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483b9d: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483ba2u); f_0047e390();
    /* 00483ba2: mov ecx, eax */ r_ecx = r_eax;
    /* 00483ba4: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483ba9u); f_004c6a70();
    /* 00483ba9: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483bac: jle 0x483bbe */ if ((fZ||fS!=fO)) goto L_00483bbe;
L_00483bae:; BB(0x00483bae);
    /* 00483bae: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00483bb1: mov ax, word ptr [edx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 00483bb4: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483bb8: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00483bbb: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
L_00483bbe:; BB(0x00483bbe);
    /* 00483bbe: jmp 0x483b1a */ goto L_00483b1a;
L_00483bc3:; BB(0x00483bc3);
    /* 00483bc3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00483bc6: movsx eax, word ptr [edx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00483bc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483bcc: jge 0x483be5 */ if ((fS==fO)) goto L_00483be5;
L_00483bce:; BB(0x00483bce);
    /* 00483bce: push 0x1058 */ { u32 v = 0x1058u; r_esp -= 4; W32(r_esp, v); }
    /* 00483bd3: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00483bd8: push 0x6bd200 */ { u32 v = 0x6bd200u; r_esp -= 4; W32(r_esp, v); }
    /* 00483bdd: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483be2u); f_005e9f20();
    /* 00483be2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00483be5:; BB(0x00483be5);
    /* 00483be5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00483be8: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00483beb: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00483bf1: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x483bf6u); f_0047f950();
    /* 00483bf6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483bf8: jle 0x483c11 */ if ((fZ||fS!=fO)) goto L_00483c11;
L_00483bfa:; BB(0x00483bfa);
    /* 00483bfa: push 0x1059 */ { u32 v = 0x1059u; r_esp -= 4; W32(r_esp, v); }
    /* 00483bff: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c04: push 0x6bd1c8 */ { u32 v = 0x6bd1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c09: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483c0eu); f_005e9f20();
    /* 00483c0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00483c11:; BB(0x00483c11);
    /* 00483c11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00483c14: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00483c17: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00483c1a: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00483c1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00483c1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00483c1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483c20: ret 0xc */ FN_RET(0x00483a70); r_esp += 16; return;
}

void f_00483c30(void) /* PokerGame::func_00483c30 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00483c30);
    /* 00483c30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00483c31: mov ebp, esp */ r_ebp = r_esp;
    /* 00483c33: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00483c36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00483c37: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00483c3a: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00483c40: call 0x5da7b0 */ r_esp -= 4; W32(r_esp, 0x483c45u); f_005da7b0();
    /* 00483c45: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00483c48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483c4a: jne 0x483c63 */ if (!fZ) goto L_00483c63;
L_00483c4c:; BB(0x00483c4c);
    /* 00483c4c: push 0x1061 */ { u32 v = 0x1061u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c51: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c56: push 0x6bd210 */ { u32 v = 0x6bd210u; r_esp -= 4; W32(r_esp, v); }
    /* 00483c5b: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483c60u); f_005e9f20();
    /* 00483c60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00483c63:; BB(0x00483c63);
    /* 00483c63: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00483c66: mov word ptr [edx], 0 */ W16((u32)(r_edx), 0x0u);
    /* 00483c6b: mov word ptr [ebp - 0xc], 0 */ W16((u32)(r_ebp+0xfffffff4u), 0x0u);
    /* 00483c71: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00483c77: jmp 0x483c85 */ goto L_00483c85;
L_00483c79:; BB(0x00483c79);
    /* 00483c79: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00483c7d: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483c81: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00483c85:; BB(0x00483c85);
    /* 00483c85: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483c89: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00483c8f: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x483c94u); f_0047f950();
    /* 00483c94: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483c96: jge 0x483ce2 */ if ((fS==fO)) goto L_00483ce2;
L_00483c98:; BB(0x00483c98);
    /* 00483c98: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483c9c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483c9d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483ca0: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483ca5u); f_0047e390();
    /* 00483ca5: mov ecx, eax */ r_ecx = r_eax;
    /* 00483ca7: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x483cacu); f_004c6cb0();
    /* 00483cac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483cae: jne 0x483cb2 */ if (!fZ) goto L_00483cb2;
L_00483cb0:; BB(0x00483cb0);
    /* 00483cb0: jmp 0x483c79 */ goto L_00483c79;
L_00483cb2:; BB(0x00483cb2);
    /* 00483cb2: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483cb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483cb7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483cba: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483cbfu); f_0047e390();
    /* 00483cbf: mov ecx, eax */ r_ecx = r_eax;
    /* 00483cc1: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483cc6u); f_004c6a70();
    /* 00483cc6: mov esi, eax */ r_esi = r_eax;
    /* 00483cc8: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483ccb: call 0x47bc20 */ r_esp -= 4; W32(r_esp, 0x483cd0u); f_0047bc20();
    /* 00483cd0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483cd2: jl 0x483ce0 */ if ((fS!=fO)) goto L_00483ce0;
L_00483cd4:; BB(0x00483cd4);
    /* 00483cd4: mov ax, word ptr [ebp - 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 00483cd8: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483cdc: mov word ptr [ebp - 0xc], ax */ W16((u32)(r_ebp+0xfffffff4u), (u16)r_eax);
L_00483ce0:; BB(0x00483ce0);
    /* 00483ce0: jmp 0x483c79 */ goto L_00483c79;
L_00483ce2:; BB(0x00483ce2);
    /* 00483ce2: movsx ecx, word ptr [ebp - 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff4u));
    /* 00483ce6: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483ce9: jl 0x483d0f */ if ((fS!=fO)) goto L_00483d0f;
L_00483ceb:; BB(0x00483ceb);
    /* 00483ceb: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00483cf1: call 0x5da8a0 */ r_esp -= 4; W32(r_esp, 0x483cf6u); f_005da8a0();
    /* 00483cf6: mov esi, eax */ r_esi = r_eax;
    /* 00483cf8: mov ecx, dword ptr [0x791eb8] */ r_ecx = R32((u32)(0x791eb8u));
    /* 00483cfe: call 0x5da8c0 */ r_esp -= 4; W32(r_esp, 0x483d03u); f_005da8c0();
    /* 00483d03: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483d05: jl 0x483d0f */ if ((fS!=fO)) goto L_00483d0f;
L_00483d07:; BB(0x00483d07);
    /* 00483d07: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00483d0a: jmp 0x483e40 */ goto L_00483e40;
L_00483d0f:; BB(0x00483d0f);
    /* 00483d0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00483d16: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483d19: mov dword ptr [edx + 0x3d4], 0xffffffff */ W32((u32)(r_edx+0x3d4u), 0xffffffffu);
    /* 00483d23: mov word ptr [ebp - 8], 0 */ W16((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 00483d29: jmp 0x483d37 */ goto L_00483d37;
L_00483d2b:; BB(0x00483d2b);
    /* 00483d2b: mov ax, word ptr [ebp - 8] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff8u))) & 0xffffu);
    /* 00483d2f: add ax, 1 */ {  u32 a = (u16)r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00483d33: mov word ptr [ebp - 8], ax */ W16((u32)(r_ebp+0xfffffff8u), (u16)r_eax);
L_00483d37:; BB(0x00483d37);
    /* 00483d37: movsx esi, word ptr [ebp - 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483d3b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 00483d41: call 0x47f950 */ r_esp -= 4; W32(r_esp, 0x483d46u); f_0047f950();
    /* 00483d46: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483d48: jge 0x483dd2 */ if ((fS==fO)) goto L_00483dd2;
L_00483d4e:; BB(0x00483d4e);
    /* 00483d4e: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483d52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00483d53: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483d56: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483d5bu); f_0047e390();
    /* 00483d5b: mov ecx, eax */ r_ecx = r_eax;
    /* 00483d5d: call 0x4c6cb0 */ r_esp -= 4; W32(r_esp, 0x483d62u); f_004c6cb0();
    /* 00483d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483d64: jne 0x483d68 */ if (!fZ) goto L_00483d68;
L_00483d66:; BB(0x00483d66);
    /* 00483d66: jmp 0x483d2b */ goto L_00483d2b;
L_00483d68:; BB(0x00483d68);
    /* 00483d68: movsx edx, word ptr [ebp - 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483d6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00483d6d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483d70: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483d75u); f_0047e390();
    /* 00483d75: mov ecx, eax */ r_ecx = r_eax;
    /* 00483d77: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483d7cu); f_004c6a70();
    /* 00483d7c: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483d7f: jle 0x483da7 */ if ((fZ||fS!=fO)) goto L_00483da7;
L_00483d81:; BB(0x00483d81);
    /* 00483d81: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483d85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483d86: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483d89: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483d8eu); f_0047e390();
    /* 00483d8e: mov ecx, eax */ r_ecx = r_eax;
    /* 00483d90: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483d95u); f_004c6a70();
    /* 00483d95: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00483d98: movsx ecx, word ptr [ebp - 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483d9c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483d9f: mov dword ptr [edx + 0x3d4], ecx */ W32((u32)(r_edx+0x3d4u), r_ecx);
    /* 00483da5: jmp 0x483dcd */ goto L_00483dcd;
L_00483da7:; BB(0x00483da7);
    /* 00483da7: movsx eax, word ptr [ebp - 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 00483dab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483dac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483daf: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483db4u); f_0047e390();
    /* 00483db4: mov ecx, eax */ r_ecx = r_eax;
    /* 00483db6: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483dbbu); f_004c6a70();
    /* 00483dbb: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483dbe: jne 0x483dcd */ if (!fZ) goto L_00483dcd;
L_00483dc0:; BB(0x00483dc0);
    /* 00483dc0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483dc3: mov dword ptr [ecx + 0x3d4], 0xfffffffe */ W32((u32)(r_ecx+0x3d4u), 0xfffffffeu);
L_00483dcd:; BB(0x00483dcd);
    /* 00483dcd: jmp 0x483d2b */ goto L_00483d2b;
L_00483dd2:; BB(0x00483dd2);
    /* 00483dd2: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483dd5: cmp dword ptr [edx + 0x3d4], -1 */ {  u32 a = R32((u32)(r_edx+0x3d4u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00483ddc: jne 0x483df5 */ if (!fZ) goto L_00483df5;
L_00483dde:; BB(0x00483dde);
    /* 00483dde: push 0x1083 */ { u32 v = 0x1083u; r_esp -= 4; W32(r_esp, v); }
    /* 00483de3: push 0x6bc694 */ { u32 v = 0x6bc694u; r_esp -= 4; W32(r_esp, v); }
    /* 00483de8: push 0x6bd268 */ { u32 v = 0x6bd268u; r_esp -= 4; W32(r_esp, v); }
    /* 00483ded: call 0x5e9f20 */ r_esp -= 4; W32(r_esp, 0x483df2u); f_005e9f20();
    /* 00483df2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00483df5:; BB(0x00483df5);
    /* 00483df5: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483df8: cmp dword ptr [ecx + 0x3d4], 0 */ {  u32 a = R32((u32)(r_ecx+0x3d4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00483dff: jl 0x483e37 */ if ((fS!=fO)) goto L_00483e37;
L_00483e01:; BB(0x00483e01);
    /* 00483e01: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483e04: mov eax, dword ptr [edx + 0x3d4] */ r_eax = R32((u32)(r_edx+0x3d4u));
    /* 00483e0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483e0b: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483e0e: call 0x483e50 */ r_esp -= 4; W32(r_esp, 0x483e13u); f_00483e50();
    /* 00483e13: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00483e16: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00483e19: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483e1c: mov eax, dword ptr [edx + 0x3d4] */ r_eax = R32((u32)(r_edx+0x3d4u));
    /* 00483e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00483e23: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483e26: call 0x47e390 */ r_esp -= 4; W32(r_esp, 0x483e2bu); f_0047e390();
    /* 00483e2b: mov ecx, eax */ r_ecx = r_eax;
    /* 00483e2d: call 0x4c6a70 */ r_esp -= 4; W32(r_esp, 0x483e32u); f_004c6a70();
    /* 00483e32: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00483e35: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00483e37:; BB(0x00483e37);
    /* 00483e37: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00483e3a: mov eax, dword ptr [edx + 0x3d4] */ r_eax = R32((u32)(r_edx+0x3d4u));
L_00483e40:; BB(0x00483e40);
    /* 00483e40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00483e41: mov esp, ebp */ r_esp = r_ebp;
    /* 00483e43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00483e44: ret 8 */ FN_RET(0x00483c30); r_esp += 12; return;
}


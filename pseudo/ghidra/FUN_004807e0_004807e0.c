// FUN_004807e0  004807e0

/* WARNING: Removing unreachable block (ram,0x00480888) */

void __thiscall FUN_004807e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  if (param_2 == 1) {
    for (local_c = 0; local_c < 0x21; local_c = local_c + 1) {
      *(undefined4 *)(param_1 + 0x120 + local_c * 0x14) = 0xffffffff;
      *(undefined4 *)(param_1 + 300 + local_c * 0x14) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x124 + local_c * 0x14) = 0;
      *(undefined4 *)(param_1 + 0x130 + local_c * 0x14) =
           *(undefined4 *)(&DAT_0072064c + local_c * 0xc);
      *(undefined1 *)(param_1 + 0x128 + local_c * 0x14) = 0;
    }
  }
  else {
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      iVar1 = *(int *)(param_1 + 0x3b4 + local_c * 4);
      if (iVar1 != -1) {
        FUN_0047e390(local_c);
        uVar2 = FUN_004c6a70();
        *(undefined4 *)(param_1 + 0x120 + iVar1 * 0x14) = uVar2;
      }
    }
  }
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    *(undefined4 *)(param_1 + 0x3b4 + local_c * 4) = 0xffffffff;
  }
  return;
}


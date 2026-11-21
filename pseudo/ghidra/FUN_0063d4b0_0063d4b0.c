// FUN_0063d4b0  0063d4b0

void __thiscall FUN_0063d4b0(CPropertySection *param_1,int param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      CPropertySection::Get(param_1,param_3,(ulong *)0x0);
      FUN_005ff5a0(uVar1);
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      CPropertySection::Get(param_1,param_3,(ulong *)0x0);
      FUN_005ff5a0(uVar1);
    }
    if (*(int *)(param_2 + 0x14) != 0) {
      for (local_8 = 0; local_8 < 0x1b; local_8 = local_8 + 1) {
        if (*(int *)(*(int *)(param_2 + 0x14) + 0x5c + local_8 * 4) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x5c + local_8 * 4);
          CPropertySection::Get(param_1,param_3,(ulong *)0x0);
          FUN_005ff5a0(uVar1);
        }
      }
    }
  }
  return;
}


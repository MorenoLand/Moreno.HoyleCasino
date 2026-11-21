// FUN_006161a0  006161a0

void __fastcall FUN_006161a0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined2 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar2 = strncmp(*(char **)(param_1 + 0x158),"tex ",4);
    if (iVar2 != 0) {
      FUN_006171a0(0);
    }
  }
  if (*(int *)(param_1 + 0x158) != 0) {
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x158);
    FUN_0061c810(*(undefined4 *)(param_1 + 0x168),param_1 + 0x160,param_1 + 0x164,&local_8);
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      local_10 = CONCAT11(*(undefined1 *)(local_8 + 1 + local_c * 3),
                          *(undefined1 *)(local_8 + local_c * 3));
      uVar1 = *(undefined1 *)(local_8 + 2 + local_c * 3);
      uVar3 = FUN_00617af0(CONCAT12(uVar1,local_10));
      *(undefined4 *)(param_1 + 0x56c + local_c * 4) = uVar3;
      uVar3 = FUN_00617af0(CONCAT13((char)((uint)local_c >> 0x18),CONCAT12(uVar1,local_10)));
      *(undefined4 *)(param_1 + 0x16c + local_c * 4) = uVar3;
    }
  }
  return;
}


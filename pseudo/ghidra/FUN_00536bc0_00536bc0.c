// FUN_00536bc0  00536bc0

int __fastcall FUN_00536bc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_18;
  int local_8;
  
  iVar1 = (**(code **)(*DAT_00793394 + 100))();
  iVar4 = *(int *)(DAT_007947e0 + 0x4f14);
  local_18 = 0;
  while( true ) {
    if (iVar1 <= local_18) {
      return 0;
    }
    uVar5 = 1;
    uVar2 = (**(code **)(*DAT_00793394 + 0x68))(local_18,1);
    iVar3 = FUN_00537e60(uVar2,uVar5);
    if (iVar3 != -1) break;
    local_18 = local_18 + 1;
  }
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  if (iVar4 == 0xc) {
    if ((local_18 == 0x1c) || (local_18 == 0x1d)) {
      iVar4 = FUN_00535e50();
      *(int *)(param_1 + 100) = (iVar4 - iVar3) + -1;
      local_8 = *(int *)(param_1 + 8) * 6;
      *(undefined1 *)(param_1 + 0x7e) = 1;
    }
    else {
      iVar4 = FUN_00535e50();
      *(int *)(param_1 + 100) = (iVar4 - iVar3) + -1;
      local_8 = (**(code **)(*DAT_00793394 + 0x5c))(*(undefined4 *)(param_1 + 8),iVar3);
    }
  }
  else {
    iVar4 = FUN_00535e50();
    *(int *)(param_1 + 100) = (iVar4 - iVar3) + -1;
    local_8 = (**(code **)(*DAT_00793394 + 0x5c))(*(undefined4 *)(param_1 + 8),iVar3);
  }
  iVar4 = (**(code **)(*DAT_00793394 + 0x60))(local_18);
  return iVar4 * local_8;
}

